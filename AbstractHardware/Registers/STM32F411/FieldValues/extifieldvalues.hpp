/*******************************************************************************
* Filename      : extifieldvalues.hpp
*
* Details       : Enumerations related with EXTI peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(EXTIENUMS_HPP)
#define EXTIENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_IMR_MR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_IMR_MR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_IMR_MR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_EMR_MR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_EMR_MR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_EMR_MR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_RTSR_TR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_RTSR_TR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_RTSR_TR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_FTSR_TR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_FTSR_TR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_FTSR_TR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_SWIER_SWIER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_SWIER_SWIER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_SWIER_SWIER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_PR_PR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_PR_PR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_PR_PR_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(EXTIENUMS_HPP)
