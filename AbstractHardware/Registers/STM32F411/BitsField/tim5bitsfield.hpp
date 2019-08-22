/*******************************************************************************
* Filename      : tim5bitsfield.hpp
*
* Details       : Enumerations related with TIM5 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM5ENUMS_HPP)
#define TIM5ENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

struct TimOrItRmpValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TimOrItRmpValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

#endif //#if !defined(TIM5ENUMS_HPP)
