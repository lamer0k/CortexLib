/*******************************************************************************
* Filename      : wwdgfieldvalues.hpp
*
* Details       : Enumerations related with WWDG peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_WWDG_CTRL_T_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_WWDG_CTRL_ACTB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_WWDG_CTRL_ACTB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_WWDG_CTRL_ACTB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_WWDG_CFG_W_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_WWDG_CFG_TIMERB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_WWDG_CFG_TIMERB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_WWDG_CFG_TIMERB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<WWDG_WWDG_CFG_TIMERB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<WWDG_WWDG_CFG_TIMERB_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_WWDG_CFG_EWINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_WWDG_CFG_EWINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_WWDG_CFG_EWINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG_WWDG_STS_EWINTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG_WWDG_STS_EWINTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG_WWDG_STS_EWINTF_Values, BaseType, 1U> ;
} ;

