#pragma once

#include "taskerconfig.hpp"                    // For RTOS types
#include "criticalsection.hpp"           // For CriticalSection
#include "idletask.hpp"                               // For IdleTask
#include "istate.hpp"                                 // For IState
#include "scbregisters.hpp"                           // For Scb
#include "susudefs.hpp"                               // For __forceinline
#include <array>                                      // For std::array
#include <cassert> // For assert(), static_assert()

struct StateControlBlock
{
	IState* thread;
	StatePriority priority;
};

class Tasker
{
private:
	using tTcbTable = std::array<StateControlBlock, MaxThreadCount>;

public:
	__forceinline template<typename T>
	static void CreateThread(T& thread, const char* pName,
		StatePriority prior = StatePriority::normal)
	{
		assert(taskCount < MaxThreadCount);
		tcbTable[taskCount].thread = static_cast<IState*>(&thread);
		tcbTable[taskCount].priority = prior;
		taskCount++;
	}

	__forceinline static void Start()
	{
		if (status != Status::Running)
		{
			CreateThread(idleTask, "", StatePriority::lowest);

			status = Status::Running;
			{
				const CriticalSection cs;
				assert(currentPriority == LowestPriority);
				scheduleLockedCounter = 0U;
				Schedule();
			}
			for (;;)
			{
			}
		}
	}

	static void PostEvent(IState& targetTask, const tStateEvents events)
	{

		const size_t targetId = GetTaskId(targetTask);
		const CriticalSection cs;

		tcbTable[targetId].thread->events |= events;
		if (currentPriority < tcbTable[targetId].priority)
		{
			preempted = true;
			Schedule();
		}
	}

	__forceinline static void IsrEntry()
	{
		assert(scheduleLockedCounter != 255U) ;
		++scheduleLockedCounter;
	}

	__forceinline static void IsrExit()
	{
		assert(scheduleLockedCounter != 0U) ;
		--scheduleLockedCounter;

		SCB::ICSR::PENDSVSET::PendingState::Set();
	}

private:
	__forceinline static void DisableScheduler()
	{
		assert(scheduleLockedCounter != 255U) ;
		++scheduleLockedCounter;
	}

	__forceinline static void EnableScheduler()
	{
		assert(scheduleLockedCounter != 0U) ;
		--scheduleLockedCounter;

		if (scheduleLockedCounter == 0U)
		{
			CriticalSection cs;
			Schedule();
		}
	}

	__forceinline static void Schedule()
	{
		const bool schedulerIsEnabled = (scheduleLockedCounter == 0U);

		if (preempted && schedulerIsEnabled)
		{
			preempted = false;
			const tTaskId preemptedTaskId = activeTaskId;
			size_t nextTaskId = GetFirstActiveTaskId();

			while ((nextTaskId < taskCount) && ((tcbTable[nextTaskId].priority) > currentPriority))
			{
				const tStateEvents events = tcbTable[nextTaskId].thread->events;
				tcbTable[nextTaskId].thread->events = noEvents;

				const StatePriority previousPriority = currentPriority;
				currentPriority = tcbTable[nextTaskId].priority;
				activeTaskId = nextTaskId;

				__enable_interrupt();
				tcbTable[nextTaskId].thread->OnEvent();
				__disable_interrupt();
				currentPriority = previousPriority;

				nextTaskId = GetFirstActiveTaskId();
			}
			activeTaskId = preemptedTaskId;
		}
	}

	__forceinline static size_t GetFirstActiveTaskId()
	{
		size_t result = taskCount - 1;

		for (size_t i = 0U; i < taskCount; ++i)
		{
			if (tcbTable[i].thread->events != noEvents)
			{
				result = i;
				break;
			}
		}
		return result;
	}

	static constexpr tTaskId GetTaskId(IState& task)
	{
		tTaskId result = taskCount - 1;

		for (size_t i = 0U; i < taskCount; ++i)
		{
			if (&task == tcbTable[i].thread)
			{
				result = static_cast<tTaskId>(i);
				break;
			}
		}
		return result;
	}

	enum class Status : std::uint8_t
	{
		NotRunning, Running
	};

	static inline Status status = Status::NotRunning;
	static constexpr tStateEvents noEvents = tStateEvents{0U};
	static inline tTcbTable tcbTable;

	static inline IdleTask idleTask = IdleTask{};

	static inline StatePriority currentPriority = LowestPriority;
	static inline tTaskId activeTaskId = tTaskId{0U};
	static inline bool preempted = true;
	static inline volatile std::uint8_t scheduleLockedCounter = 1U;
	static inline std::size_t taskCount = 0U;

	friend void TaskerSchedule();
	friend class CriticalRegion;
};
