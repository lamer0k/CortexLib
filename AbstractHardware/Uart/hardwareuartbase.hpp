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

struct UartRead
{
};

struct UartTransmit
{
};

struct UartTxInterruptable: UartInterruptable, UartTransmit
{
} ;

struct UartRxInterruptable: UartInterruptable, UartRead
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

  //__forceinline template<typename T = Interface,
  //    class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  __forceinline static void EnableTransmit()
  {
    UartModule::CR1::TE::Enable::Set();
  };

  //__forceinline template<typename T = Interface,
  //    class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  __forceinline static void DisableTransmit()
  {
    UartModule::CR1::TE::Disable::Set();
  };

  //__forceinline template<typename T = Interface,
  //    class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  __forceinline static void EnableTxInterrupt()
  {
    UartModule::CR1::TXEIE::InterruptWhenTXE::Set();
  };

  //__forceinline template<typename T = Interface,
  //    class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  __forceinline static void DisableTxInterrupt()
  {
    UartModule::CR1::TXEIE::InterruptInhibited::Set();
  };

 // __forceinline template<typename T = Interface,
 //     class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  __forceinline static void EnableTcInterrupt()
  {
    UartModule::CR1::TCIE::InterruptWhenTC::Set();
  };

//  __forceinline template<typename T = Interface,
//      class = typename std::enable_if_t<std::is_base_of<UartTxInterruptable, T>::value>>
  __forceinline static void DisableTcInterrupt()
  {
    UartModule::CR1::TCIE::InterruptInhibited::Set();
  };


 // __forceinline template<typename T = Interface,
 //     class = typename std::enable_if_t<std::is_base_of<UartInterruptable, T>::value>>
  __forceinline static void HandleInterrupt()
  {
    InterruptsList::OnInterrupt() ;
  }

  //__forceinline template<typename T = Interface,
 //     class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  __forceinline static void WriteByte(std::uint8_t chByte)
  {
     UartModule::DR::Write(chByte) ;
  }

 // __forceinline template<typename T = Interface,
  //    class = typename std::enable_if_t<std::is_base_of<UartTransmit, T>::value>>
  __forceinline static void StartTransmit()
  {
    EnableTransmit() ;
    if constexpr (std::is_base_of<UartTxInterruptable, Interface>::value)
    {
      EnableTxInterrupt() ;
    }
  }

};

#endif //REGISTERS_UART_HPP
