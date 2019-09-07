/*******************************************************************************
* Filename      : tim2fieldvalues.hpp
*
* Details       : Enumerations related with TIM2 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM2ENUMS_HPP)
#define TIM2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Output_OCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Output_OCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Output_OCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CNT_CNT_H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CNT_CNT_L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_ARR_ARR_H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_ARR_ARR_L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCR_CCR_H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCR_CCR_L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_OR_ITR_RMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_OR_ITR_RMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_OR_ITR_RMP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_OR_ITR_RMP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_OR_ITR_RMP_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(TIM2ENUMS_HPP)
