/*******************************************************************************
* Filename      : tim11fieldvalues.hpp
*
* Details       : Enumerations related with TIM11 peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM11ENUMS_HPP)
#define TIM11ENUMS_HPP

#include "fieldvalues.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_OR_RMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

#endif //#if !defined(TIM11ENUMS_HPP)
