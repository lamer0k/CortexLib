/*******************************************************************************
* Filename      : mdrwwdtfieldvalues.hpp
*
* Details       : Enumerations related with MDR_WWDT peripheral. This header
*                 file is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRWWDTENUMS_HPP)
#define MDRWWDTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_WWDT_CR_T_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_WWDT_CR_WDGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_WWDT_CR_WDGA_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_WWDT_CR_WDGA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_WWDT_CFR_W_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_WWDT_CFR_WGTB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_WWDT_CFR_WGTB_Values, BaseType, 0U> ;
  using div2 = FieldValue<MDR_WWDT_CFR_WGTB_Values, BaseType, 1U> ;
  using div4 = FieldValue<MDR_WWDT_CFR_WGTB_Values, BaseType, 2U> ;
  using div8 = FieldValue<MDR_WWDT_CFR_WGTB_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_WWDT_CFR_EWI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_WWDT_CFR_EWI_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_WWDT_CFR_EWI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_WWDT_SR_EWIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_WWDT_SR_EWIF_Values, BaseType, 0U> ;
  using Onn = FieldValue<MDR_WWDT_SR_EWIF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRWWDTENUMS_HPP)
