//
// Created by SKolody on 17.10.2019.
//
#ifndef REGISTERS_PIN_HPP
#define REGISTERS_PIN_HPP

#include "susudefs.hpp"

struct PinConfigurable
{

};

template<typename Port, uint8_t pinNum, typename ...T>
class Pin
{
public:
  constexpr Pin() = default;
  __forceinline static void Set()
  {
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
    Port::BSRR::Set(1U << pinNum) ;
  }
  
  __forceinline static void Toggle()
  {
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
    Port::ODR::Toggle(1U << pinNum) ;
  }
} ;

template<typename Port, uint8_t pinNum, typename PinConfigurable>
class Pin<Port, pinNum, PinConfigurable>
{
public:
  constexpr Pin() = default;
  __forceinline static void Set()
  {
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
    Port::BSRR::Set(1U << pinNum) ;
  }
  
  __forceinline static void Toggle()
  {
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
    Port::ODR::Toggle(1U << pinNum) ;
  }
  
  __forceinline static void SetAnalog()
  {
    Port::MODER::Set(Port::MODER::FieldValues::Analog::Value << (pinNum << 1)) ;
  }
  
  __forceinline static void SetInput()
  {
    Port::MODER::Set(Port::MODER::FieldValues::Input::Value << (pinNum << 1)) ;
  }
  
  __forceinline static void SetOutput()
  {
    Port::MODER::Set(Port::MODER::FieldValues::Output::Value << (pinNum << 1)) ;
  }
  
  __forceinline static void SetAlternate()
  {
    Port::MODER::Set(Port::MODER::FieldValues::Alternate::Value << (pinNum << 1)) ;
  }
  
} ;


#endif //REGISTERS_PIN_HPP
