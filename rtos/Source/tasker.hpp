// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.
#pragma once

#include "taskertypes.hpp"            // For  types
#include "criticalsection.hpp"        // For CriticalSection
#include "idletask.hpp"               // For IdleTask
#include "scbregisters.hpp"           // For Scb
#include "susudefs.hpp"               // For __forceinline
#include <cassert>                    // For assert(), static_assert()
#include "coretypes.hpp"              // for CortexM, GD32VF
#include <type_traits>                // for std::is_same


template<typename CoreType, const auto& ...tasks>
class Tasker
{
 public:

    __forceinline void LowLevelInit()
    {
        if constexpr (std::is_same<CoreType, GD32VF>::value)
        {
            __disable_interrupt();
            /* Set the the NMI base to share with mtvec by setting CSR_MMISC_CTL */
            /* li t0, 0x200           */
            /* csrs CSR_MMISC_CTL, t0 */
           // __set_bits_csr(/*CSR_MMISC_CTL*/ 0x7D0, 0x200);

            /* Initialize the mtvt */
            /* la t0, vector_base      */
            /* csrw CSR_MTVT, t0       */
           // __write_csr(_CSR_MTVT, ((unsigned int)&gd_vector_base));
            /* Initialize the mtvt2 and enable it */
            /* la t0, irq_entry
               csrw CSR_MTVT2, t0
               csrs CSR_MTVT2, 0x1
            */
           // __write_csr(/*_CSR_MTVT2*/ 0x7EC, 0x1 | ((unsigned int)&NonVectoredInt::IrqEntry));

            /* Initialize the CSR MTVEC for the Trap ane NMI base addr*/
            /* la t0, trap_entry
               csrw CSR_MTVEC, t0
            */
           // __write_csr(_CSR_MTVEC, 0x03 | ((unsigned int)&NonVectoredInt::TrapEntry));

            /* Enable mycycle_minstret */
            //__clear_bits_csr(/*CSR_MCOUNTINHIBIT*/ 0x320, 0x5);
        }
        else if constexpr (std::is_same<CoreType, CortexM>::value)
        {
        }

    }

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
        if constexpr (std::is_same<CoreType, CortexM>::value)
        {
            SCB::ICSR::PENDSVSET::PendingState::Set();
        }
        else if constexpr (std::is_same<CoreType, GD32VF>::value)
        {

        }
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
            return (task.events != noEvents) ? result : GetFirstActiveTask<args...>(result + 1U);
        }
        else
        {
            return (task.events != noEvents) ? result : sizeof...(tasks) ;
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
                const auto res = result + 1U;
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

