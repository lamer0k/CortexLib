//
// Created by SKolody on 17.10.2019.
//
#ifndef REGISTERS_PIN_HPP
#define REGISTERS_PIN_HPP

#include "susudefs.hpp"  //for __forceinline
#include "criticalsectionconfig.hpp" // for CriticalSection

struct PinConfigurable
{
};

struct PinReadable
{
};

struct PinWriteable
{
};

struct PinReadableConfigurable: PinReadable, PinConfigurable
{
};

struct PinWriteableConfigurable: PinWriteable, PinConfigurable
{
};

struct PinAlmighty: PinReadableConfigurable, PinWriteableConfigurable
{
};

template<typename Port, uint8_t pinNum, typename Interface>
struct Pin
{
  using PortType = Port ;
  static constexpr uint32_t pin = pinNum ;
  static constexpr typename Port::MODER::Type OutputValue = Port::MODER::FieldValues::Output::Value ;
  
  constexpr Pin() = default;
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
  static void Set()
  {
    static_assert(pinNum <= 15U, "There are only 16 pins on port") ;
    Port::BSRR::Write(uint8_t(1U) << pinNum) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
  static void Reset()
  {
    static_assert(pinNum <= 15U, "There are only 16 pins on port") ;
    Port::BSRR::Write(uint8_t(1U) << (pinNum << 15)) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
  static void Toggle()
  {
    static_assert(pinNum <= 15U, "There are only 16 pins on port") ;
    Port::ODR::Toggle(uint8_t(1U) << pinNum) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinReadable, T>::value>>
  static typename Port::IDR::Type Get()
  {
    return Port::IDR::Get() ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_same<PinConfigurable, T>::value>>
  static void SetAnalog()
  {
    CriticalSection cs ;
    typename Port::MODER::Type regValue = Port::MODER::Get() ;
    regValue &= ~(Port::MODER::FieldValues::Analog::Mask << (pinNum * 2U)) ;
    regValue |= (Port::MODER::FieldValues::Analog::Value << (pinNum * 2U)) ;
    Port::MODER::Write(regValue) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinReadableConfigurable, T>::value>>
  static void SetInput()
  {
    CriticalSection cs ;
    typename Port::MODER::Type regValue = Port::MODER::Get() ;
    regValue &= ~(Port::MODER::FieldValues::Input::Mask << (pinNum * 2U)) ;
    regValue |= (Port::MODER::FieldValues::Input::Value << (pinNum * 2U)) ;
    Port::MODER::Write(regValue) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinWriteableConfigurable, T>::value>>
  static void SetOutput()
  {
    CriticalSection cs ;
    typename Port::MODER::Type regValue = Port::MODER::Get() ;
    regValue &= ~(Port::MODER::FieldValues::Output::Mask << (pinNum * 2U)) ;
    regValue |= (Port::MODER::FieldValues::Output::Value << (pinNum * 2U)) ;
    Port::MODER::Write(regValue) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_same<PinConfigurable, T>::value>>
  static void SetAlternate()
  {
    CriticalSection cs ;
    typename Port::MODER::Type regValue = Port::MODER::Get() ;
    regValue &= ~(Port::MODER::FieldValues::Alterate::Mask << (pinNum * 2U)) ;
    regValue |= (Port::MODER::FieldValues::Alternate::Value << (pinNum * 2U)) ;
    Port::MODER::Write(regValue) ;
  }
} ;

#endif //REGISTERS_PIN_HPP
