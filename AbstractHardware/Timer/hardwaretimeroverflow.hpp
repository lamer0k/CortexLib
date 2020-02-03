//
// Created by Serge on 19.01.2020.
//

#ifndef REGISTERS_HARDWARETIMEROVERFLOW_HPP
#define REGISTERS_HARDWARETIMEROVERFLOW_HPP

#include "hardwaretimerbase.hpp"
#include "susudefs.hpp"

template<typename TimerModule, typename TimerObserver>
struct HardwareOverflowTimerBase
{
  __forceinline static void HandleInterrupt()
  {
    if(TimerModule::Timer::SR::UIF::InterruptPending::IsSet())
    {
      TimerObserver::OnOverflow() ;
    }
  }

  __forceinline static void SetDelay(uint32_t delay)
  {
    TimerModule::SetDelay(delay) ;
  }

  __forceinline static void Start()
  {
    TimerModule::Start() ;
  }
};

#endif //REGISTERS_HARDWARETIMEROVERFLOW_HPP
