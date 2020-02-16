//
// Created by Serge on 10.02.2020.
//

#ifndef REGISTERS_UARTDRIVER_HPP
#define REGISTERS_UARTDRIVER_HPP

#include "susudefs.hpp" //for __forceinline
#include "hardwareuarttx.hpp" // for HardwareUartTx
#include "hardwareuarttc.hpp" //for HardwareUartTc
#include "hardwareuartrx.hpp" // for HardwareUartRx
#include <array> // for std::array
#include <cstring> // for memcpy
#include "criticalsectionconfig.hpp" // for CriticalSection
#include "uartobserver.hpp"


using tBuffer = std::array<std::uint8_t, 100> ;

template<typename ...Observers>
struct WriteObservers
{
  __forceinline static void OnWriteComplete()
  {
    (Observers::OnTransmitComplete(), ...) ;
  }
};

template<typename ...Observers>
struct ReadObservers
{
  __forceinline static void OnReadComplete(tBuffer& buffer, std::size_t length)
  {
    (Observers::OnReceiveComplete(buffer, length), ...) ;
  }
};



template<typename UartModule, typename  WObservers, typename RObservers >
struct UartDriver
{
  using Uart = UartModule ;

 // template <typename ...TxObservers>
 // using UartTx = HardwareUartTx<UartModule, TxObservers...> ;
 // template <typename ...TcObservers>
 // using UartTc = HardwareUartTc<UartModule, TcObservers...> ;
 // template <typename ...RxObservers>
 // using UartRx = HardwareUartRx<UartModule, RxObservers...> ;

  enum class Status: std::uint8_t
  {
    None  = 0,
    Write = 1,
    WriteComplete = 2,
    Read = 3,
    ReadComplete = 4
  } ;


  static void WriteData(const std::uint8_t *pData, std::uint8_t size)
  {
    assert(size < txRxBuffer.size()) ;
    if ((status != Status::Write) && (status != Status::Read))
    {
      const CriticalSection cs;

      Uart::DisableReceive();
      Uart::DisableRxInterrupt();

      bufferIndex = 0U;
      bufferSize = size;
      std::memcpy(txRxBuffer.data(), pData, static_cast<std::size_t>(size));

      Uart::WriteByte(txRxBuffer[bufferIndex]);
      bufferIndex++;
      status = Status::Write;
      Uart::StartTransmit();
      //если работает без прерываний, то посылаем прямо тут
      if constexpr (!std::is_base_of<UartTxInterruptable, typename Uart::Base>::value)
      {
        for(; bufferIndex < size; ++bufferIndex)
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
        WObservers::OnWriteComplete() ;
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
    WObservers::OnWriteComplete() ;
  }

  static void Read(std::uint8_t size)
  {
    assert(size < txRxBuffer.size()) ;
    if ((status != Status::Write) && (status != Status::Read))
    {
      const CriticalSection cs;

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

      RObservers::OnReadComplete(txRxBuffer, static_cast<std::size_t>(bufferIndex)) ;
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
