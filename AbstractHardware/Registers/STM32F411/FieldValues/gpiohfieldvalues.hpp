/*******************************************************************************
* Filename      : gpiohfieldvalues.hpp
*
* Details       : Enumerations related with GPIOH peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOHENUMS_HPP)
#define GPIOHENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_MODER_MODER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_MODER_MODER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_MODER_MODER_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOH_MODER_MODER_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOH_MODER_MODER_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_OTYPER_OT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_OTYPER_OT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_OTYPER_OT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_OSPEEDR_OSPEEDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_OSPEEDR_OSPEEDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_OSPEEDR_OSPEEDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOH_OSPEEDR_OSPEEDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOH_OSPEEDR_OSPEEDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_PUPDR_PUPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_PUPDR_PUPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_PUPDR_PUPDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOH_PUPDR_PUPDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOH_PUPDR_PUPDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_IDR_IDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_IDR_IDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_ODR_ODR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_ODR_ODR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_ODR_ODR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_BSRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_BSRR_BR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_BSRR_BR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_BSRR_BS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_BSRR_BS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_BSRR_BS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_LCKR_LCKK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_LCKR_LCKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_LCKR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_LCKR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_LCKR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_AFRL_AFRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOH_AFRL_AFRL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOH_AFRH_AFRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOH_AFRH_AFRH_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(GPIOHENUMS_HPP)
