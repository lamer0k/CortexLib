//
// Created by SKolody on 17.10.2019.
//
#ifndef REGISTERS_PIN_HPP
#define REGISTERS_PIN_HPP

#include "susudefs.hpp"

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
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
    Port::BSRR::Set(uint8_t(1U) << pinNum) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
  static void Reset()
  {
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
    Port::BSRR::Reset(uint8_t(1U) << pinNum) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
  static void Toggle()
  {
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
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
    Port::MODER::Set(Port::MODER::FieldValues::Analog::Value << (pinNum * 2U)) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinReadableConfigurable, T>::value>>
  static void SetInput()
  {
    Port::MODER::Set(Port::MODER::FieldValues::Input::Value << (pinNum * 2U)) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_base_of<PinWriteableConfigurable, T>::value>>
  static void SetOutput()
  {
    Port::MODER::Set(Port::MODER::FieldValues::Output::Value << (pinNum * 2U)) ;
  }
  
  __forceinline template<typename T = Interface,
          class = typename std::enable_if_t<std::is_same<PinConfigurable, T>::value>>
  static void SetAlternate()
  {
    Port::MODER::Set(Port::MODER::FieldValues::Alternate::Value << (pinNum * 2U)) ;
  }
} ;

#endif //REGISTERS_PIN_HPP
