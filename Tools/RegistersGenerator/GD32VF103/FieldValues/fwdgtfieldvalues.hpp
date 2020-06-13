/*******************************************************************************
* Filename      : fwdgtfieldvalues.hpp
*
* Details       : Enumerations related with FWDGT peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(FWDGTENUMS_HPP)
#define FWDGTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FWDGT_CTL_CMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FWDGT_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FWDGT_PSC_PSC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FWDGT_RLD_RLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FWDGT_STAT_PUD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FWDGT_STAT_PUD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FWDGT_STAT_PUD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FWDGT_STAT_RUD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FWDGT_STAT_RUD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FWDGT_STAT_RUD_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(FWDGTENUMS_HPP)
