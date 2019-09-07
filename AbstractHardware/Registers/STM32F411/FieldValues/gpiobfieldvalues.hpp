/*******************************************************************************
* Filename      : gpiobfieldvalues.hpp
*
* Details       : Enumerations related with GPIOB peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOBENUMS_HPP)
#define GPIOBENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_MODER_MODER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Input = FieldValue<GPIOB_MODER_MODER_Values, BaseType, 0U> ;
  using Output = FieldValue<GPIOB_MODER_MODER_Values, BaseType, 1U> ;
  using Alternate = FieldValue<GPIOB_MODER_MODER_Values, BaseType, 2U> ;
  using Analog = FieldValue<GPIOB_MODER_MODER_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_OTYPER_OT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_OTYPER_OT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_OTYPER_OT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_OSPEEDR_OSPEEDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_OSPEEDR_OSPEEDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_OSPEEDR_OSPEEDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOB_OSPEEDR_OSPEEDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOB_OSPEEDR_OSPEEDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_PUPDR_PUPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_PUPDR_PUPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_PUPDR_PUPDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOB_PUPDR_PUPDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOB_PUPDR_PUPDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_IDR_IDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_IDR_IDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_ODR_ODR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_ODR_ODR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_ODR_ODR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_BSRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_BSRR_BR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_BSRR_BR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_BSRR_BS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_BSRR_BS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_BSRR_BS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_LCKR_LCKK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_LCKR_LCKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_LCKR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_LCKR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_LCKR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_AFRL_AFRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOB_AFRL_AFRL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOB_AFRH_AFRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOB_AFRH_AFRH_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(GPIOBENUMS_HPP)
