/*******************************************************************************
* Filename      : gpioafieldvalues.hpp
*
* Details       : Enumerations related with GPIOA peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOAENUMS_HPP)
#define GPIOAENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues
#include <type_traits>

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Input = FieldValue<GPIOA_MODER_MODER15_Values, BaseType, 0U> ;
  using Output = FieldValue<GPIOA_MODER_MODER15_Values, BaseType, 1U> ;
  using Alternate = FieldValue<GPIOA_MODER_MODER15_Values, BaseType, 2U> ;
  using Analog = FieldValue<GPIOA_MODER_MODER15_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER14_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER13_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER12_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER11_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER10_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER9_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER8_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER7_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER6_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct GPIOA_MODER_MODER5_Values: public GPIOA_MODER_MODER15_Values<Reg, offset,size, AccessMode,BaseType>
{
		template<typename Reg::Type val,
		        typename  = typename std::enable_if_t<(size >= sizeof(Reg::Type) * 8U) || (val < (1U << size))>>
		using Value = FieldValue<GPIOA_MODER_MODER5_Values, BaseType, val>;
} ;




template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER4_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER3_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER2_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER1_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER0_Values: public GPIOA_MODER_MODER15_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT15_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT14_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT13_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT12_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT11_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT10_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT9_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT8_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT7_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT6_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT5_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT4_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT3_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT2_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT1_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OutputPushPull = FieldValue<GPIOA_OTYPER_OT0_Values, BaseType, 0U> ;
  using OutputOpenDrain = FieldValue<GPIOA_OTYPER_OT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LowSpeed = FieldValue<GPIOA_OSPEEDR_OSPEEDR15_Values, BaseType, 0U> ;
  using MediumSpeed = FieldValue<GPIOA_OSPEEDR_OSPEEDR15_Values, BaseType, 1U> ;
  using FastSpeed = FieldValue<GPIOA_OSPEEDR_OSPEEDR15_Values, BaseType, 2U> ;
  using HighSpeed = FieldValue<GPIOA_OSPEEDR_OSPEEDR15_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR14_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR13_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR12_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR11_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR10_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR9_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR8_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR7_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR6_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR5_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR4_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR3_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR2_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR1_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR0_Values: public GPIOA_OSPEEDR_OSPEEDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoPullUpNoPullDown = FieldValue<GPIOA_PUPDR_PUPDR15_Values, BaseType, 0U> ;
  using PullUp = FieldValue<GPIOA_PUPDR_PUPDR15_Values, BaseType, 1U> ;
  using PullDown = FieldValue<GPIOA_PUPDR_PUPDR15_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR14_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR13_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR12_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR11_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR10_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR9_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR8_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR7_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR6_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{
  
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR5_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR4_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR3_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR2_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR1_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR0_Values: public GPIOA_PUPDR_PUPDR15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR15_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR14_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR13_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR12_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR11_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR10_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR9_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR8_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR7_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR6_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR5_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR4_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR3_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR2_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR1_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_IDR_IDR0_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_IDR_IDR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR15_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR14_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR13_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR12_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR11_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR10_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR9_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR8_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR7_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR6_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR5_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR4_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR3_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR2_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR1_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_ODR_ODR0_Values, BaseType, 0U> ;
  using High = FieldValue<GPIOA_ODR_ODR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<GPIOA_BSRR_BR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<GPIOA_BSRR_BS0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LockKeyNotActive = FieldValue<GPIOA_LCKR_LCKK_Values, BaseType, 0U> ;
  using LockKeyActive = FieldValue<GPIOA_LCKR_LCKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UnLocked = FieldValue<GPIOA_LCKR_LCK15_Values, BaseType, 0U> ;
  using Locked = FieldValue<GPIOA_LCKR_LCK15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK14_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK13_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK12_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK11_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK10_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK9_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK8_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK7_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK6_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK5_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK4_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK3_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK2_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK1_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK0_Values: public GPIOA_LCKR_LCK15_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Af0 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 0U> ;
  using Af1 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 1U> ;
  using Af2 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 2U> ;
  using Af3 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 3U> ;
  using Af4 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 4U> ;
  using Af5 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 5U> ;
  using Af6 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 6U> ;
  using Af7 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 7U> ;
  using Af8 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 8U> ;
  using Af9 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 9U> ;
  using Af10 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 10U> ;
  using Af11 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 11U> ;
  using Af12 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 12U> ;
  using Af13 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 13U> ;
  using Af14 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 14U> ;
  using Af15 = FieldValue<GPIOA_AFRL_AFRL7_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL6_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL5_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL4_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL3_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL2_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL1_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL0_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH15_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH14_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH13_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH12_Values:public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH11_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH10_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH9_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH8_Values: public GPIOA_AFRL_AFRL7_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

#endif //#if !defined(GPIOAENUMS_HPP)
