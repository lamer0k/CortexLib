/*******************************************************************************
* Filename      : iwdgfieldvalues.hpp
*
* Details       : Enumerations related with IWDG peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_IWDG_KEY_KEYV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_IWDG_PREDIV_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<IWDG_IWDG_PREDIV_PD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_IWDG_RELV_REL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_IWDG_STS_PVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG_IWDG_STS_PVU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG_IWDG_STS_PVU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_IWDG_STS_CRVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG_IWDG_STS_CRVU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG_IWDG_STS_CRVU_Values, BaseType, 1U> ;
} ;

