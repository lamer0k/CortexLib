//
// Created by Serge on 10.02.2020.
//

#ifndef REGISTERS_UARTDRIVER_HPP
#define REGISTERS_UARTDRIVER_HPP

#include "susudefs.hpp" //for __forceinline
#include "hardwareuarttx.hpp" // for HardwareUartTx
#include "hardwareuarttc.hpp" //for HardwareUartTc
#include "hardwareuartrx.hpp" // for HardwareUartRx
#include <cstring> // for memcpy
#include "criticalsectionconfig.hpp" // for CriticalSection
#include "uartdriverconfig.hpp" // for tBuffer

template<typename UartModule, typename  UartDriverTransmitCompleteObservers, typename UartDriverReceiveObservers>
struct UartDriver
{
  using Uart = UartModule ;

  enum class Status: std::uint8_t
  {
    None  = 0,
    Write = 1,
    WriteComplete = 2,
    Read = 3,
    ReadComplete = 4
  } ;


  static void WriteData(const std::uint8_t *pData, std::uint8_t bytesTosend)
  {
    assert(bytesTosend < txRxBuffer.size()) ;
    const CriticalSection cs;
    if ((status != Status::Write) && (status != Status::Read))
    {
      Uart::DisableReceive();
      Uart::DisableRxInterrupt();

      bufferIndex = 0U;
      bufferSize = bytesTosend;
      std::memcpy(txRxBuffer.data(), pData, static_cast<std::size_t>(bytesTosend));

      Uart::WriteByte(txRxBuffer[bufferIndex]);
      bufferIndex++;

      status = Status::Write;
      Uart::StartTransmit();
      //если работает без прерываний, то посылаем прямо тут
      if constexpr (!std::is_base_of<UartTxInterruptable, typename Uart::Base>::value)
      {
        for(; bufferIndex < bytesTosend; ++bufferIndex)
        {
          while (!Uart::IsDataRegisterEmpty())
          {

          }
          Uart::WriteByte(txRxBuffer[bufferIndex]);          
        }
        while (!Uart::IsTransmitComplete())
        {

        }
        //Proceed() ;
        status = Status::WriteComplete ;
        UartDriverTransmitCompleteObservers::OnWriteComplete() ;
      } else
      {

      }
    }
  }

  __forceinline static void OnTransmit()
  {
    if(bufferIndex < bufferSize)
    {
      Uart::WriteByte(txRxBuffer[bufferIndex]) ;
      bufferIndex ++ ;
    }
    else
    {
      Uart::EnableTcInterrupt() ;
    }
  };

  static void OnTransmitComplete()
  {
    bufferIndex = 0U;
    bufferSize = 0U;

    Uart::DisableTcInterrupt();
    Uart::DisableTxInterrupt() ;
    Uart::DisableTransmit();

    status = Status::WriteComplete;
    UartDriverTransmitCompleteObservers::OnWriteComplete() ;
  }

  static auto ReadData(std::uint8_t size)
  {
    assert(size < txRxBuffer.size()) ;
    const CriticalSection cs;
    if ((status != Status::Write) && (status != Status::Read))
    {
      Uart::DisableTcInterrupt();
      Uart::DisableTxInterrupt();
      Uart::DisableTransmit();
  
      bufferIndex = 0U;      
      bufferSize = size;
      status = Status::Read;

      Uart::EnableReceive();
      Uart::EnableRxInterrupt();
    }

  }

  static void OnReceive()
  {
    txRxBuffer[bufferIndex] = Uart::ReadByte() ;
    bufferIndex ++ ;
    if (bufferIndex == bufferSize)
    {   
      status = Status::ReadComplete ;

      UartDriverReceiveObservers::OnReadComplete(txRxBuffer, static_cast<std::size_t>(bufferIndex)) ;
    }
  }

  static Status GetStatus()
  {
    return status ;
  }

  static void ResetAll()
  {
    Uart::DisableTcInterrupt();
    Uart::DisableTxInterrupt();
    Uart::DisableTransmit();
    
    Uart::DisableReceive();
    Uart::DisableRxInterrupt() ;
    
    bufferIndex = 0U;
    bufferSize = 0U;
    status = Status::None;    
  }

private:

  inline static  tBuffer txRxBuffer = {} ;
  inline static std::uint8_t bufferSize = 0U ;
  inline static std::uint8_t bufferIndex = 0U ;
  inline static Status status = Status::None ;

};
#endif //REGISTERS_UARTDRIVER_HPP
