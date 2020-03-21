//
// Created by Serge on 03.02.2020.
//

#ifndef REGISTERS_HARDWARETIMERCCP_HPP
#define REGISTERS_HARDWARETIMERCCP_HPP

#include "susudefs.hpp"  //for __forceinline
#include "hardwaretimerbase.hpp" //for TimerInterruptable
#include "tim1registers.hpp" //for TIM1

struct CC1 {};
struct CC2 {};
struct CC3 {};
struct CC4 {};

//Этот класс может работать только с Таймером 1 для STM32F411, для него прерывание для СС модуля отдельное
template<typename TimerModule, typename TimerList,
    class = typename std::enable_if_t<std::is_base_of<TIM1, typename TimerModule::Timer>::value>>
struct HardwareCCTimerBase
{
  using Timer = typename TimerModule::Timer;
  using Interface = typename TimerModule::TInterface ;
  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<TimerInterruptable, T>::value>>
  static void HandleInterrupt()
  {
    TimerList::OnInterrupt();
  }
} ;

template <typename TimerModule, typename CcTimerObserver, typename CCTimerNum>
struct HardwareCCxTimerBase
{
  __forceinline static void HandleInterrupt()
  {
    if constexpr (std::is_same<CCTimerNum, CC1>::value)
    {
      if (TimerModule::Timer::SR::CC1IF::InterruptPending::IsSet())
      {
        CcTimerObserver::OnCaptureCompare() ;
      }
    } else
      if constexpr (std::is_same<CCTimerNum, CC2>::value)
    {
      if (TimerModule::Timer::SR::CC2IF::InterruptPending::IsSet())
      {
        CcTimerObserver::OnCaptureCompare() ;
      }
    } else
      if constexpr (std::is_same<CCTimerNum, CC3>::value)
    {
      //static_assert(TimerModule::Timer::CC3IF)
      if (TimerModule::Timer::SR::CC3IF::InterruptPending::IsSet())
      {
        CcTimerObserver::OnCaptureCompare() ;
      }
    } else
      if constexpr (std::is_same<CCTimerNum, CC4>::value)
    {
      if (TimerModule::Timer::SR::CC4IF::InterruptPending::IsSet())
      {
        CcTimerObserver::OnCaptureCompare() ;
      }
    } else
    {
      assert(false) ;
      // static_assert(std::is_same_v<CCTimerNum, CC4>, "Timer type is unknow") ;
    }
  }

  __forceinline static void Stop()
  {
    TimerModule::Stop() ;
  }

};
#endif //REGISTERS_HARDWARETIMERCCP_HPP
