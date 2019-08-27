/*******************************************************************************
* Filename      : gpioabitsfield.hpp
*
* Details       : Enumerations related with GPIOA peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOAENUMS_HPP)
#define GPIOAENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Input = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Output = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Alternate = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Analog = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PushPull = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using OpenDrain = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Medium = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Fast = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using High = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoPullUpPullDown = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PullUp = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using PullDown = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Reserved = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using On = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using On = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoAction = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Reset = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoAction = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Set = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LockKeyNotActive = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LockKeyAcive = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotLocked = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Locked = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AF0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AF1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using AF2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using AF3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using AF4 = BitsField<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using AF5 = BitsField<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using AF6 = BitsField<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using AF7 = BitsField<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using AF8 = BitsField<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using AF9 = BitsField<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using AF10 = BitsField<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using AF11 = BitsField<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using AF12 = BitsField<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using AF13 = BitsField<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using AF14 = BitsField<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using AF15 = BitsField<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AF0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AF1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using AF2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using AF3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using AF4 = BitsField<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using AF5 = BitsField<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using AF6 = BitsField<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using AF7 = BitsField<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using AF8 = BitsField<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using AF9 = BitsField<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using AF10 = BitsField<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using AF11 = BitsField<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using AF12 = BitsField<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using AF13 = BitsField<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using AF14 = BitsField<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using AF15 = BitsField<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

#endif //#if !defined(GPIOAENUMS_HPP)
