/*******************************************************************************
* Filename      : tim7fieldvalues.hpp
*
* Details       : Enumerations related with TIM7 peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(TIM7ENUMS_HPP)
#define TIM7ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_ARPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_ARPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_CR1_ARPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_OPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_OPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_CR1_OPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_URS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_URS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_CR1_URS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_UDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_UDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_CR1_UDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_CR1_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR2_MMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM7_CR2_MMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_DIER_UDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_DIER_UDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_DIER_UDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_DIER_UIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_DIER_UIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_DIER_UIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_SR_UIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_SR_UIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_SR_UIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_EGR_UG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_EGR_UG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM7_EGR_UG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIM7ENUMS_HPP)
