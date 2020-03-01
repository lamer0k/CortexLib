//
// Created by Sergey on 15.12.2019.
//

#ifndef REGISTERS_UART_HPP
#define REGISTERS_UART_HPP

#include "susudefs.hpp" //for __forceinline
#include <array> // for std::array
#include <cassert> // for assert
#include <cstring> // for memcpy
#include "criticalsectionguard.hpp" //for criticalsectionguard

struct UartInterruptable
{
};

struct UartReceive
{
};

struct UartTransmit
{
};

struct UartTxInterruptable: UartInterruptable, UartTransmit
{
} ;

struct UartRxInterruptable: UartInterruptable, UartReceive
{
} ;

struct UartRxInterruptableTx: UartRxInterruptable, UartTransmit
{
} ;
struct UartTxRxInterruptable : UartRxInterruptable, UartTxInterruptable
{
} ;


template<typename UartModule, typename Interface, typename InterruptsList>
struct HardwareUartBase
{
  using Uart = UartModule ;
  using Base = Interface ;

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  __forceinline static void EnableTransmit()
  {
    UartModule::CR1::TE::Enable::Set();
  };


  static void DisableTransmit()
  {
    UartModule::CR1::TE::Disable::Set();
  };

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartReceive, T>::value>>
  static void EnableReceive()
  {
    UartModule::CR1::RE::Enable::Set();
  };

  static void DisableReceive()
  {
    UartModule::CR1::RE::Disable::Set();
  };

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  static void EnableTxInterrupt()
  {
    UartModule::CR1::TXEIE::InterruptWhenTXE::Set();
  };

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartRxInterruptable, T>::value>>
  static void EnableRxInterrupt()
  {
    UartModule::CR1::RXNEIE::InterruptWhenRXNE::Set();
  };

  static void DisableRxInterrupt()
  {
    UartModule::CR1::RXNEIE::InterruptInhibited::Set();
  };

  static void DisableTxInterrupt()
  {
    UartModule::CR1::TXEIE::InterruptInhibited::Set();
  };

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  static void EnableTcInterrupt()
  {
    UartModule::CR1::TCIE::InterruptWhenTC::Set();
  };

  static void DisableTcInterrupt()
  {
    UartModule::CR1::TCIE::InterruptInhibited::Set();
  };


  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartInterruptable, T>::value>>
  static void HandleInterrupt()
  {
    InterruptsList::OnInterrupt() ;
  }

  __forceinline static void ClearStatus()
  {
    UartModule::SR::Write(0);
  }

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  static void WriteByte(std::uint8_t chByte)
  {
    UartModule::TDR::Write(static_cast<std::uint32_t>(chByte)) ;
  }

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartReceive, T>::value>>
  static std::uint8_t ReadByte()
  {
    return static_cast<std::uint8_t>(UartModule::RDR::Get()) ;
  }

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  static void StartTransmit()
  {
    Uart::ICR::TCCF::TransmitionNotComplete::Set() ;
    EnableTransmit() ;    
    if constexpr (std::is_base_of<UartTxInterruptable, Interface>::value)
    {
      EnableTxInterrupt() ;
    }
  }

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  static bool IsDataRegisterEmpty()
  {
    return UartModule::SR::TXE::DataRegisterEmpty::IsSet() ;
  }

  __forceinline template<typename T = Interface,
      class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  static bool IsTransmitComplete()
  {
    return UartModule::SR::TC::TransmitionComplete::IsSet() ;
  }

};

#endif //REGISTERS_UART_HPP
