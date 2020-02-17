//
// Created by Serge on 10.02.2020.
//

#ifndef REGISTERS_UARTOBSERVERS_HPP
#define REGISTERS_UARTOBSERVERS_HPP
#include "susudefs.hpp" //for __forceinline

template<typename... TObserver>
struct UartTransmitObservers
{
  __forceinline static void OnTxDataRegEmpty()
  {
    (TObserver::OnTransmit(), ...) ;
  }
} ;


template<typename... TObserver>
struct UartTransmitCompleteObservers
{
  __forceinline static void OnComplete()
  {
    (TObserver::OnTransmitComplete(), ...) ;
  }
} ;

template<typename... TObserver>
struct UartReceiveObservers
{
  __forceinline static void OnRxData()
  {
    (TObserver::OnReceive(), ...) ;
  }
} ;
#endif //REGISTERS_UARTOBSERVERS_HPP
