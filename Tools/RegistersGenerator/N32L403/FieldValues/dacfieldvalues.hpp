/*******************************************************************************
* Filename      : dacfieldvalues.hpp
*
* Details       : Enumerations related with DAC peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_CTRL_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_CTRL_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_CTRL_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_CTRL_BEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_CTRL_BEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_CTRL_BEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_CTRL_TEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_CTRL_TEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_CTRL_TEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_CTRL_TSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC_DAC_CTRL_TSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_CTRL_WEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_CTRL_WEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_CTRL_WEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC_DAC_CTRL_WEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC_DAC_CTRL_WEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_CTRL_MASEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DAC_DAC_CTRL_MASEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_CTRL_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_CTRL_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_CTRL_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_SOTTR_TR1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC_DAC_SOTTR_TR1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC_DAC_SOTTR_TR1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_DR12CH_DACCHD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_DL12CH_DACCHD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_DR8CH_DACCHD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC_DAC_DATO_DACCHDO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

