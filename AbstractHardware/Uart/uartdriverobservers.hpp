//
// Created by Serge on 16.02.2020.
//

#ifndef REGISTERS_UARTDRIVEROBSERVERS_HPP
#define REGISTERS_UARTDRIVEROBSERVERS_HPP

#include "susudefs.hpp"  // for __forceinline
#include "uartdriverconfig.hpp" // for tBuffer

template<typename ...Observers>
struct UartDriverTransmitCompleteObservers
{
  __forceinline static void OnWriteComplete()
  {
    (Observers::OnTransmitComplete(), ...) ;
  }
};

template<typename ...Observers>
struct UartDriverReceiveCompleteObservers
{
  __forceinline static void OnReadComplete(tBuffer& buffer, std::size_t bytesReceived)
  {
    (Observers::OnReceiveComplete(buffer, bytesReceived), ...) ;
  }
};
#endif //REGISTERS_UARTDRIVEROBSERVERS_HPP
