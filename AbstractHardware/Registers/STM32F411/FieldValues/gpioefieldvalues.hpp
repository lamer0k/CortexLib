/*******************************************************************************
* Filename      : gpioefieldvalues.hpp
*
* Details       : Enumerations related with GPIOE peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOEENUMS_HPP)
#define GPIOEENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_MODER_MODER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_MODER_MODER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_MODER_MODER_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOE_MODER_MODER_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOE_MODER_MODER_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_OTYPER_OT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_OTYPER_OT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_OTYPER_OT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_OSPEEDR_OSPEEDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_OSPEEDR_OSPEEDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_OSPEEDR_OSPEEDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOE_OSPEEDR_OSPEEDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOE_OSPEEDR_OSPEEDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_PUPDR_PUPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_PUPDR_PUPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_PUPDR_PUPDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOE_PUPDR_PUPDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOE_PUPDR_PUPDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_IDR_IDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_IDR_IDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_ODR_ODR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_ODR_ODR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_ODR_ODR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_BSRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_BSRR_BR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_BSRR_BR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_BSRR_BS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_BSRR_BS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_BSRR_BS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_LCKR_LCKK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_LCKR_LCKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_LCKR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_LCKR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_LCKR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_AFRL_AFRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOE_AFRL_AFRL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOE_AFRH_AFRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOE_AFRH_AFRH_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(GPIOEENUMS_HPP)
