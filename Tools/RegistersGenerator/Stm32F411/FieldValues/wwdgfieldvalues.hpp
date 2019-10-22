/*******************************************************************************
* Filename      : wwdgfieldvalues.hpp
*
* Details       : Enumerations related with WWDG peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(WWDGENUMS_HPP)
#define WWDGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_CR_WDGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_CR_WDGA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_CR_WDGA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_CR_T_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_CFR_EWI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_CFR_EWI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_CFR_EWI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_CFR_WDGTB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_CFR_WDGTB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_CFR_WDGTB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_CFR_WDGTB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_CFR_WDGTB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_CFR_WDGTB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_CFR_W_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_SR_EWIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_SR_EWIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_SR_EWIF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(WWDGENUMS_HPP)
