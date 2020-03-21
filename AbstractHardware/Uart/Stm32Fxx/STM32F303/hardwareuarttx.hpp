//
// Created by Serge on 10.02.2020.
//

#ifndef REGISTERS_HARDWAREUARTTX_HPP
#define REGISTERS_HARDWAREUARTTX_HPP
#include "susudefs.hpp" //for __forceinline
#include "hardwareuartbase.hpp" // for UartTx


template<typename UartModule, typename UartTransmitObservers>
struct HardwareUartTx
{
  using Uart = typename UartModule::Uart ;
  __forceinline template<typename T = typename UartModule::Base,
      class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  static void HandleInterrupt()
  {
    const bool DataRegisterEmpty = Uart::ISR::TXE::DataRegisterEmpty::IsSet() ;
    const bool InterruptEnabled = Uart::CR1::TXEIE::InterruptWhenTXE::IsSet() ;
    if(DataRegisterEmpty && InterruptEnabled)
    {
      UartTransmitObservers::OnTxDataRegEmpty();
    }
  }
};

#endif //REGISTERS_HARDWAREUARTTX_HPP
