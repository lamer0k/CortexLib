//
// Created by Serge on 11.02.2020.
//

#ifndef REGISTERS_HARDWAREUARTTC_HPP
#define REGISTERS_HARDWAREUARTTC_HPP
#include "susudefs.hpp" //for __forceinline
#include "hardwareuartbase.hpp" // for UartTx


template<typename UartModule, typename UartTransmitCompleteObservers>
struct HardwareUartTc
{
  using Uart = typename UartModule::Uart ;
  __forceinline template<typename T = typename UartModule::Base,
      class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  static void HandleInterrupt()
  {
    const bool TransmitionComplete = Uart::ISR::TC::TransmitionComplete::IsSet() ;
    const bool InterruptEnabled = Uart::CR1::TCIE::InterruptWhenTC::IsSet() ;
    if(TransmitionComplete && InterruptEnabled)
    {
      Uart::ICR::TCCF::TransmitionNotComplete::Set() ;
      UartTransmitCompleteObservers::OnComplete();
     
    }
  }
};
#endif //REGISTERS_HARDWAREUARTTC_HPP
