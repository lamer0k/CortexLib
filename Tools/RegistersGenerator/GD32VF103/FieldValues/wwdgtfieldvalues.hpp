/*******************************************************************************
* Filename      : wwdgtfieldvalues.hpp
*
* Details       : Enumerations related with WWDGT peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(WWDGTENUMS_HPP)
#define WWDGTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDGT_CTL_WDGTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDGT_CTL_WDGTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDGT_CTL_WDGTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDGT_CTL_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDGT_CFG_EWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDGT_CFG_EWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDGT_CFG_EWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDGT_CFG_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDGT_CFG_PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDGT_CFG_PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<WWDGT_CFG_PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<WWDGT_CFG_PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDGT_CFG_WIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDGT_STAT_EWIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDGT_STAT_EWIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDGT_STAT_EWIF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(WWDGTENUMS_HPP)
