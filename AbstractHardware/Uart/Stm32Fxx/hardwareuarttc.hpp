//
// Created by Serge on 11.02.2020.
//

#ifndef REGISTERS_HARDWAREUARTTC_HPP
#define REGISTERS_HARDWAREUARTTC_HPP
#include "susudefs.hpp" //for __forceinline
#include "Stm32Fxx/STM32F411/hardwareuartbase.hpp" // for UartTx


template<typename UartModule, typename UartObservers>
struct HardwareUartTc
{
  using Uart = typename UartModule::Uart ;
  __forceinline template<typename T = typename UartModule::Base,
      class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  __forceinline static void HandleInterrupt()
  {
    if(UartModule::Uart::SR::TC::TransmitionComplete::IsSet())
    {
      UartObservers::OnComplete();
      UartModule::Uart::SR::TC::TransmitionNotComplete::Set() ;
    }
  }
};
#endif //REGISTERS_HARDWAREUARTTC_HPP
