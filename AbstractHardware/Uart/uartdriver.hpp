//
// Created by Serge on 10.02.2020.
//

#ifndef REGISTERS_UARTDRIVER_HPP
#define REGISTERS_UARTDRIVER_HPP

#include "susudefs.hpp" //for __forceinline
#include "hardwareuarttx.hpp" // for HardwareUartTx
#include "hardwareuarttc.hpp" //for HardwareUartTc
#include <array> // for std::array
#include "criticalsectionconfig.hpp" // for CriticalSection
#include "uartobserver.hpp"



template<typename UartModule, typename ...Observers>
struct UartDriver
{
  using Uart = UartModule ;

  template <typename ...TxObservers>
  using UartTx = HardwareUartTx<UartModule, TransmitObservers<TxObservers...>> ;
  template <typename ...TcObservers>
  using UartTc = HardwareUartTc<UartModule, TransmitCompleteObservers<TcObservers...>> ;

  __forceinline static void WriteData(const char *pData, size_t size)
  {
    CriticalSection cs ;
    assert(size < txRxBuffer.size()) ;
    txBufferSize = size ;
    std::memcpy(txRxBuffer.data(), pData, size) ;
    txBufferIndex = 0U ;
    Uart::WriteByte(txRxBuffer[txBufferIndex]) ;
    txBufferIndex ++ ;
    status = Status::Write ;
    Uart::StartTransmit() ;
  }

  __forceinline static void OnTransmit()
  {
    if(txBufferIndex < txBufferSize)
    {
      Uart::WriteByte(txRxBuffer[txBufferIndex]) ;
      txBufferIndex ++ ;
    }
    else
    {
      Uart::EnableTcInterrupt() ;
    }
  };

  __forceinline static void OnTransmitComplete()
  {
    txBufferIndex = 0U;
    txBufferSize = 0U;
    Uart::DisableTcInterrupt();
    Uart::DisableTxInterrupt() ;
    Uart::DisableTransmit();
    status = Status::WriteComplete;
    (Observers::OnDataReady(),...) ;
  }

private:

  enum class Status: std::uint8_t
  {
    None  = 0,
    Write = 1,
    WriteComplete = 2,
    Read = 3,
    ReadComplete = 4
  } ;

  inline static std::array<std::uint8_t, 50> txRxBuffer = {} ;
  inline static std::uint8_t txBufferSize = 0U ;
  inline static std::uint8_t txBufferIndex = 0U ;
  inline static Status status = Status::None ;

};
#endif //REGISTERS_UARTDRIVER_HPP
