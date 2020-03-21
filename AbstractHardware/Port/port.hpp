//
// Created by SKolody on 17.10.2019.
//

#ifndef REGISTERS_PORT_HPP
#define REGISTERS_PORT_HPP

#include <cassert>  //for assert
#include "susudefs.hpp"  //for __forceinline
#include "atomicutils.hpp" //for AtomicUtils

template <typename T>
struct Port
{
  
  using ModerType = typename T::MODER::Type ;
  __forceinline static void Set(std::uint32_t value)
  {
    assert((value <= (1 << 16U))) ;
    T::BSRR::Write(static_cast<typename T::BSRR::Type>(value)) ;
  }
  
  __forceinline static void Reset(std::uint32_t value)
  {
    assert((value <= (1 << 16U))) ;
    T::BSRR::Write(static_cast<typename T::BSRR::Type>(value) << 16) ;
  }
  
  __forceinline static void Toggle(std::uint32_t value)
  {
    assert((value <= (1 << 16U))) ;
    T::ODR::Toggle(static_cast<typename T::ODR::Type>(value)) ;
  }
  
  __forceinline static auto Get()
  {
    return T::IDR::Get() ;
  }
  
  __forceinline static void SetAnalog(std::uint32_t pinNum)
  {
    assert(pinNum <= 15U) ;
    using RegType = typename T::MODER::Type;
    AtomicUtils<RegType>::Set(
            T::MODER::Address,
            T::MODER::FieldValues::Analog::Mask,
            T::MODER::FieldValues::Analog::Value,
            static_cast<ModerType>(pinNum * uint8_t{2U})
            ) ;
  }
  
  __forceinline static void SetInput(std::uint32_t pinNum)
  {
    assert(pinNum <= 15U) ;
    AtomicUtils<ModerType>::Set(
           T::MODER::Address,
           0b11,
           T::MODER::FieldValues::Input::Value,
           static_cast<ModerType>(pinNum * uint8_t{2U})
      ) ;
    //volatile auto value = T::MODER::Get() ;
    //value &= ~(3 << (pinNum * 2U)) ;
	//	value |= 	(T::MODER::FieldValues::Input::Value << (pinNum * 2U)) ;
    //T::MODER::Write(value);
  }
  
  __forceinline static void SetOutput(std::uint32_t pinNum)
  {
    assert(pinNum <= 15U);
    AtomicUtils<ModerType>::Set(
            T::MODER::Address,
            T::MODER::FieldValues::Output::Mask,
            T::MODER::FieldValues::Output::Value,
            static_cast<ModerType>(pinNum * uint8_t{2U})
            ) ;
  }
  
  __forceinline static void SetAlternate(std::uint32_t pinNum)
  {
    assert(pinNum <= 15U);
    AtomicUtils<ModerType>::Set(
            T::MODER::Address,
            T::MODER::FieldValues::Alternate::Mask,
            T::MODER::FieldValues::Alternate::Value,
            static_cast<ModerType>(pinNum * uint8_t{2U})
            ) ;
  }
    
} ;
  


template<typename ...T>
struct Pins{
  
  __forceinline inline static void Toggle()
  {
    Pass((T::Toggle(), true)...) ;
  }
  
  __forceinline inline static void Set()
  {
    Pass((T::Set(), true)...) ;
  }
  
  __forceinline inline static void Reset()
  {
    Pass((T::Reset(), true)...) ;
  }
  
  __forceinline inline static void SetOutput()
  {
    Pass((T::SetOutput(), true)...) ;
  }
  
  __forceinline inline static void SetInput()
  {
    Pass((T::SetInput(), true)...) ;
  }
  
  __forceinline inline static void SetAnalog()
  {
    Pass((T::SetInput(), true)...) ;
  }
  
  __forceinline inline static void SetAlternate()
  {
    Pass((T::SetInput(), true)...) ;
  }
  
private:
  __forceinline template<typename... Args>
  static void inline Pass(Args... ) //Вспомогательный метод для распаковки вариативного шаблона
  {
  }

} ;

#endif //REGISTERS_PORT_HPP
