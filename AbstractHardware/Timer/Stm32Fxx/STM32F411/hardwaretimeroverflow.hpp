//
// Created by Serge on 19.01.2020.
//

#ifndef REGISTERS_HARDWARETIMEROVERFLOW_HPP
#define REGISTERS_HARDWARETIMEROVERFLOW_HPP

//#include <cstddef.h> // for std::uint32_t
#include "hardwaretimerbase.hpp"
#include "susudefs.hpp"

template<typename TimerModule, typename TimerObserver>
struct HardwareOverflowTimer
{
		__forceinline static void HandleInterrupt()
		{
				if (TimerModule::Timer::SR::UIF::InterruptPending::IsSet())
				{
						TimerModule::Timer::SR::UIF::NoInterruptPending::Set();
						TimerObserver::OnOverflow();
				}
		}

		__forceinline static void SetDevider(std::uint32_t Devider)
		{
				TimerModule::SetDevider(Devider) ;
		}

		__forceinline static void SetDelay(std::uint32_t delay)
		{
				TimerModule::SetDelay(delay);
		}

		__forceinline static void Start()
		{
				TimerModule::Start();
		}

		__forceinline static void Stop()
		{
				TimerModule::Stop();
				TimerModule::DisableInterrupt() ;
		}

		__forceinline static void Execute()
		{
				TimerModule::Start();
				while (!TimerModule::IsOverflow())
				{
				}
				TimerModule::Timer::SR::UIF::NoInterruptPending::Set();
				TimerObserver::OnOverflow();
				TimerModule::Restart();
		}

		__forceinline static void Restart()
		{
				TimerModule::Restart();
				TimerModule::Start();
				TimerModule::EnableInterrupt() ;
		}
};

#endif // REGISTERS_HARDWARETIMEROVERFLOW_HPP
