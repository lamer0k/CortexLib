// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.
#pragma once

#include "taskertypes.hpp"            // For  types
#include "criticalsection.hpp"        // For CriticalSection
#include "idletask.hpp"               // For IdleTask
#include "scbregisters.hpp"           // For Scb
#include "susudefs.hpp"               // For __forceinline
#include <cassert>                    // For assert(), static_assert()

template<const auto& ...tasks>
class Tasker
{
 public:

    __forceinline static void Start()
    {
        if (status != Status::Running)
        {
            status = Status::Running;
            {
                const CriticalSection cs;
                scheduleLockedCounter = 0U;
                Schedule();
            }
            for (;;) //UB Однако
            {
            }
        }
    }

    template<const auto& ...targetTasks>
    static void PostEvent(const tStateEvents events)
    {
        const CriticalSection cs;
        (targetTasks.events |= events, ...);
        if (scheduleLockedCounter == 0U)
        {
            Schedule();
        }
    }

    __forceinline static void IsrEntry()
    {
        assert(scheduleLockedCounter != 255U);
        ++scheduleLockedCounter;
    }

    __forceinline static void IsrExit()
    {
        assert(scheduleLockedCounter != 0U);
        --scheduleLockedCounter;
        SCB::ICSR::PENDSVSET::PendingState::Set();
    }

 private:
    __forceinline static void DisableScheduler()
    {
        assert(scheduleLockedCounter != 255U);
        ++scheduleLockedCounter;
    }

    __forceinline static void EnableScheduler()
    {
        assert(scheduleLockedCounter != 0U);
        --scheduleLockedCounter;

        if (scheduleLockedCounter == 0U)
        {
            CriticalSection cs;
            Schedule();
        }
    }

    static void Schedule()
    {
        const auto preemptedTaskId = activeTaskId;
        auto nextTaskId = GetFirstActiveTaskId();

        while (nextTaskId < activeTaskId)
        {
            activeTaskId = nextTaskId;
            CallTask(nextTaskId);
            nextTaskId = GetFirstActiveTaskId();
        }
        activeTaskId = preemptedTaskId;

    }

    static constexpr size_t GetFirstActiveTaskId()
    {
        return GetFirstActiveTask<tasks...>(0U);
    }

    __forceinline template<const auto& task, const auto& ...args>
    static constexpr size_t GetFirstActiveTask(size_t result)
    {

        if constexpr (sizeof...(args) != 0U)
        {
            if (task.events != noEvents)
            {
                return result;
            }
            else
            {
                auto res = result + 1;
                return GetFirstActiveTask<args...>(res);
            }
        }
        else
        {
            if (task.events != noEvents)
            {
                return result;
            }
            else
            {
                return sizeof...(tasks);
            }
        }
        assert(false);  //Dummy IAR thinks that no return from the method
        return 0U;
    }

    static void CallTask(size_t id)
    {
        return CallTaskById<tasks...>(id, 0U);
    }

    __forceinline template<const auto& task, const auto& ...args>
    static void CallTaskById(size_t id, size_t result)
    {
        if constexpr (sizeof...(args) != 0U)
        {
            if (result == id)
            {
                CallTaskHelper<task>();
            }
            else
            {
                auto res = result + 1;
                CallTaskById<args...>(id, res);
            }
        }
        else
        {
            if (result == id)
            {
                CallTaskHelper<task>();
            }
            else
            {

            }

        }
    }

    __forceinline template<const auto& task>
    static void CallTaskHelper()
    {
        task.events = noEvents;
        __enable_interrupt();
        task.OnEvent();
        __disable_interrupt();
    }

    enum class Status : std::uint8_t
    {
        NotRunning,
        Running
    };

    static constexpr tStateEvents noEvents = tStateEvents{ 0U };

    static inline volatile size_t activeTaskId = sizeof...(tasks);
    static inline Status status = Status::NotRunning;
    static inline volatile std::uint8_t scheduleLockedCounter = 1U;

    friend void TaskerSchedule();
    friend class CriticalRegion;
};

