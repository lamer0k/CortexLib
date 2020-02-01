//
// Created by Serge on 19.01.2020.
//

#ifndef REGISTERS_HARDWARETIMEROVERFLOW_HPP
#define REGISTERS_HARDWARETIMEROVERFLOW_HPP

#include "hardwaretimerbase.hpp"
#include "susudefs.hpp"

struct List ;

template<typename TimerModule, typename TimerObserver>
struct HardwareOverflowTimerBase: HardwareTimerBase<typename TimerModule::Timer, typename TimerModule::TInterface, List>
{
  __forceinline static void HandleInterrupt()
  {
    if(TimerModule::Timer::SR::UIF::UpdatePending::IsSet())
    {
      TimerObserver::OnOverflow() ;
    }
  }
};

#endif //REGISTERS_HARDWARETIMEROVERFLOW_HPP
