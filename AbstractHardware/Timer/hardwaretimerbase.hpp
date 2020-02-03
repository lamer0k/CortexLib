//
// Created by SKolody on 17.10.2019.
//

#ifndef REGISTERS_HARDWARETIMERBASE_HPP
#define REGISTERS_HARDWARETIMERBASE_HPP

#include "susudefs.hpp"   //for __forceinline


struct TimerSwitchable
{
};

struct TimerCountable: TimerSwitchable
{
};

struct TimerCcpable: TimerSwitchable
{
};


struct TimerInterruptable
{
};

struct TimerCountableInterruptable: TimerInterruptable, TimerCountable
{
};

struct TimerCcpableInterruptable: TimerInterruptable, TimerCcpable
{
};


template<typename TimerModule, typename Interface, typename TimerList>
struct HardwareTimerBase
{
  using CntType = typename TimerModule::CNT::Type ;
  using Timer = TimerModule ;
  using TInterface = Interface ;

  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<TimerSwitchable, T>::value>>
  static void Start()
  {
    TimerModule::SR::UIF::NoInterruptPending::Set();
    TimerModule::CNT::Write(CntType(0));
    TimerModule::CR1::CEN::Enable::Set() ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<TimerSwitchable, T>::value>>
  static void Stop()
  {
    TimerModule::CR1::CEN::Disable::Set() ;
    TimerModule::SR::UIF::NoInterruptPending::Set() ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<TimerCountable, T>::value>>
  static void SetDelay(uint32_t delay)
  {
    TimerModule::ARR::Write(delay) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<TimerInterruptable, T>::value>>
  static void HandleInterrupt()
  {
    TimerList::OnInterrupt();
  }
};

#endif //REGISTERS_HARDWARETIMERBASE_HPP