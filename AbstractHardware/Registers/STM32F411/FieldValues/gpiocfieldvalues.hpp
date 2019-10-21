/*******************************************************************************
* Filename      : gpiocfieldvalues.hpp
*
* Details       : Enumerations related with GPIOC peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOCENUMS_HPP)
#define GPIOCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_MODER_MODER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Input = FieldValue<GPIOC_MODER_MODER_Values, BaseType, 0U> ;
  using Output = FieldValue<GPIOC_MODER_MODER_Values, BaseType, 1U> ;
  using Alternate = FieldValue<GPIOC_MODER_MODER_Values, BaseType, 2U> ;
  using Analog = FieldValue<GPIOC_MODER_MODER_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OTYPER_OT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OTYPER_OT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OTYPER_OT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OSPEEDR_OSPEEDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OSPEEDR_OSPEEDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OSPEEDR_OSPEEDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOC_OSPEEDR_OSPEEDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOC_OSPEEDR_OSPEEDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_PUPDR_PUPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_PUPDR_PUPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_PUPDR_PUPDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOC_PUPDR_PUPDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOC_PUPDR_PUPDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<GPIOC_IDR_IDR_Values, BaseType, 0U> ;
  using Enable = FieldValue<GPIOC_IDR_IDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ODR_ODR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<GPIOC_ODR_ODR_Values, BaseType, 0U> ;
  using Enable = FieldValue<GPIOC_ODR_ODR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BSRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotUsed = FieldValue<GPIOC_BSRR_BR_Values, BaseType, 0U> ;
  using Disable = FieldValue<GPIOC_BSRR_BR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BSRR_BS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotUsed = FieldValue<GPIOC_BSRR_BS_Values, BaseType, 0U> ;
  using Enable = FieldValue<GPIOC_BSRR_BS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LCKR_LCKK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LCKR_LCKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LCKR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LCKR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LCKR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_AFRL_AFRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOC_AFRL_AFRL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_AFRH_AFRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOC_AFRH_AFRH_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(GPIOCENUMS_HPP)
