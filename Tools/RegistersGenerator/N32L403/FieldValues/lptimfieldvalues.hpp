/*******************************************************************************
* Filename      : lptimfieldvalues.hpp
*
* Details       : Enumerations related with LPTIM peripheral. This header file
*                 is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTSTS_CMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTSTS_CMPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTSTS_CMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTSTS_ARRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTSTS_ARRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTSTS_ARRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTSTS_EXTRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTSTS_EXTRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTSTS_EXTRIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTSTS_CMPUPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTSTS_CMPUPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTSTS_CMPUPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTSTS_ARRUPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTSTS_ARRUPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTSTS_ARRUPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTSTS_UP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTSTS_UP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTSTS_UP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTSTS_DOWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTSTS_DOWN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTSTS_DOWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTCLR_CMPMCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTCLR_CMPMCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTCLR_CMPMCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTCLR_ARRMCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTCLR_ARRMCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTCLR_ARRMCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTCLR_EXTRIGCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTCLR_EXTRIGCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTCLR_EXTRIGCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTCLR_CMPUPDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTCLR_CMPUPDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTCLR_CMPUPDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTCLR_ARRUPDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTCLR_ARRUPDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTCLR_ARRUPDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTCLR_UPCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTCLR_UPCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTCLR_UPCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTCLR_DOWNCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTCLR_DOWNCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTCLR_DOWNCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTEN_CMPMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTEN_CMPMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTEN_CMPMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTEN_ARRMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTEN_ARRMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTEN_ARRMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTEN_EXTRIGIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTEN_EXTRIGIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTEN_EXTRIGIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTEN_CMPUPDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTEN_CMPUPDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTEN_CMPUPDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTEN_ARRUPDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTEN_ARRUPDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTEN_ARRUPDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTEN_UPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTEN_UPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTEN_UPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_INTEN_DOWNIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_INTEN_DOWNIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_INTEN_DOWNIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_CLKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_CLKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_CLKSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_CLKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_CLKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_CLKPOL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM_LPTIM_CFG_CLKPOL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM_LPTIM_CFG_CLKPOL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_CLKFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_CLKFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_CLKFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM_LPTIM_CFG_CLKFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM_LPTIM_CFG_CLKFLT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_TRIGFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_TRIGFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_TRIGFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM_LPTIM_CFG_TRIGFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM_LPTIM_CFG_TRIGFLT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_CLKPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPTIM_LPTIM_CFG_CLKPRE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_TRGSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPTIM_LPTIM_CFG_TRGSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_TRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_TRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_TRGEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM_LPTIM_CFG_TRGEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM_LPTIM_CFG_TRGEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_TIMOUTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_TIMOUTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_TIMOUTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_WAVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_WAVE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_WAVE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_WAVEPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_WAVEPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_WAVEPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_RELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_RELOAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_RELOAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_CNTMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_CNTMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_CNTMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_ENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_ENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_ENC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CFG_NENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CFG_NENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CFG_NENC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CTRL_LPTIMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CTRL_LPTIMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CTRL_LPTIMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CTRL_SNGMST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CTRL_SNGMST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CTRL_SNGMST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CTRL_TSTCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM_LPTIM_CTRL_TSTCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM_LPTIM_CTRL_TSTCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CMP_CMPVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_ARR_ARRVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM_LPTIM_CNT_CNTVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

