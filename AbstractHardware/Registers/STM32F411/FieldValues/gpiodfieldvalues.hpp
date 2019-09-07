/*******************************************************************************
* Filename      : gpiodfieldvalues.hpp
*
* Details       : Enumerations related with GPIOD peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIODENUMS_HPP)
#define GPIODENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_MODER_MODER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_MODER_MODER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_MODER_MODER_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOD_MODER_MODER_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOD_MODER_MODER_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_OTYPER_OT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_OTYPER_OT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_OTYPER_OT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_OSPEEDR_OSPEEDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_OSPEEDR_OSPEEDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_OSPEEDR_OSPEEDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOD_OSPEEDR_OSPEEDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOD_OSPEEDR_OSPEEDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_PUPDR_PUPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_PUPDR_PUPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_PUPDR_PUPDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOD_PUPDR_PUPDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOD_PUPDR_PUPDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_IDR_IDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_IDR_IDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_ODR_ODR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_ODR_ODR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_ODR_ODR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_BSRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_BSRR_BR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_BSRR_BR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_BSRR_BS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_BSRR_BS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_BSRR_BS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_LCKR_LCKK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_LCKR_LCKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_LCKR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_LCKR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_LCKR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_AFRL_AFRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOD_AFRL_AFRL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOD_AFRH_AFRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOD_AFRH_AFRH_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(GPIODENUMS_HPP)
