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

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_MODER_MODER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Input = FieldValue<GPIOA_MODER_MODER_Values, BaseType, 0U> ;
  using Output = FieldValue<GPIOA_MODER_MODER_Values, BaseType, 1U> ;
  using Alternate = FieldValue<GPIOA_MODER_MODER_Values, BaseType, 2U> ;
  using Analog = FieldValue<GPIOA_MODER_MODER_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OTYPER_OT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOA_OTYPER_OT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOA_OTYPER_OT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_OSPEEDR_OSPEEDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOA_OSPEEDR_OSPEEDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOA_OSPEEDR_OSPEEDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOA_OSPEEDR_OSPEEDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOA_OSPEEDR_OSPEEDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_PUPDR_PUPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOA_PUPDR_PUPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOA_PUPDR_PUPDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOA_PUPDR_PUPDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOA_PUPDR_PUPDR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<GPIOA_IDR_IDR_Values, BaseType, 0U> ;
  using Enable = FieldValue<GPIOA_IDR_IDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_ODR_ODR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<GPIOA_ODR_ODR_Values, BaseType, 0U> ;
  using Enable = FieldValue<GPIOA_ODR_ODR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotUsed = FieldValue<GPIOA_BSRR_BR_Values, BaseType, 0U> ;
  using Reset = FieldValue<GPIOA_BSRR_BR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_BSRR_BS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotUsed = FieldValue<GPIOA_BSRR_BS_Values, BaseType, 0U> ;
  using Set = FieldValue<GPIOA_BSRR_BS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOA_LCKR_LCKK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOA_LCKR_LCKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_LCKR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOA_LCKR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOA_LCKR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRL_AFRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOA_AFRL_AFRL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOA_AFRH_AFRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<GPIOA_AFRH_AFRH_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(GPIOAENUMS_HPP)
