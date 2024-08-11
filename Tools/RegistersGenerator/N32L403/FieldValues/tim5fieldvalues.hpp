/*******************************************************************************
* Filename      : tim5fieldvalues.hpp
*
* Details       : Enumerations related with TIM5 peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_CNTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_CNTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_CNTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_UPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_UPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_UPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_UPRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_UPRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_UPRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_ONEPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_ONEPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_ONEPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_CAMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_CAMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_CAMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CTRL1_CAMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CTRL1_CAMSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_ARPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_ARPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_ARPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_CLKD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_CLKD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_CLKD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CTRL1_CLKD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CTRL1_CLKD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL1_C1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL1_C1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL1_C1SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL2_CCDSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL2_CCDSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL2_CCDSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL2_MMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_CTRL2_MMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CTRL2_TI1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CTRL2_TI1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CTRL2_TI1SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_SMCTRL_SMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_SMCTRL_SMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_SMCTRL_TSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_SMCTRL_TSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_SMCTRL_MSMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_SMCTRL_MSMD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_SMCTRL_MSMD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_SMCTRL_EXTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM5_TIMx_SMCTRL_EXTF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_SMCTRL_EXTPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_SMCTRL_EXTPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_SMCTRL_EXTPS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_SMCTRL_EXTPS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_SMCTRL_EXTPS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_SMCTRL_EXCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_SMCTRL_EXCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_SMCTRL_EXCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_SMCTRL_EXTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_SMCTRL_EXTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_SMCTRL_EXTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_UIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_UIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_UIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC1IEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC1IEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC1IEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC2IEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC2IEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC2IEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC3IEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC3IEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC3IEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC4IEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC4IEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC4IEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_COMIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_COMIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_COMIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_TIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_TIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_TIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_BIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_BIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_BIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_UDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_UDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_UDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC1DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC1DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC1DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC2DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC2DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC2DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC3DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC3DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC3DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_CC4DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_CC4DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_CC4DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_COMDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_COMDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_COMDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DINTEN_TDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DINTEN_TDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DINTEN_TDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_UDITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_UDITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_UDITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC1ITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC1ITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC1ITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC2ITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC2ITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC2ITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC3ITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC3ITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC3ITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC4ITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC4ITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC4ITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_COMITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_COMITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_COMITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_TITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_TITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_TITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_BITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_BITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_BITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC1OCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC1OCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC1OCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC2OCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC2OCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC2OCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC3OCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC3OCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC3OCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC4OCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC4OCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC4OCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC5ITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC5ITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC5ITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_STS_CC6ITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_STS_CC6ITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_STS_CC6ITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_UDGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_UDGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_UDGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_CC1GN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_CC1GN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_CC1GN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_CC2GN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_CC2GN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_CC2GN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_CC3GN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_CC3GN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_CC3GN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_CC4GN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_CC4GN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_CC4GN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_CCUDGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_CCUDGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_CCUDGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_TGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_TGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_TGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_EVTGEN_BGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_EVTGEN_BGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_EVTGEN_BGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_CC1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_CC1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_CC1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD1_CC1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD1_CC1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC1FEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC1FEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC1FEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC1PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC1PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC1PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC1M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_CCMOD1_OC1M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC1CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC1CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC1CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_CC2SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_CC2SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_CC2SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD1_CC2SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD1_CC2SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC2FEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC2FEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC2FEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC2PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC2PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC2PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC2M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_CCMOD1_OC2M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD1_OC2CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD1_OC2CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD1_OC2CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_CC3SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_CC3SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_CC3SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD2_CC3SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD2_CC3SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC3FEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC3FEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC3FEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC3PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC3PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC3PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC3M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_CCMOD2_OC3M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC3CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC3CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC3CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_CC4SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_CC4SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_CC4SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD2_CC4SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD2_CC4SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC4FEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC4FEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC4FEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC4PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC4PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC4PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC4M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_CCMOD2_OC4M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD2_OC4CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD2_OC4CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD2_OC4CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC1P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC1P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC1P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC1NEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC1NEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC1NEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC1NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC1NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC1NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC2P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC2P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC2P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC2NEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC2NEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC2NEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC2NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC2NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC2NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC3P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC3P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC3P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC3NEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC3NEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC3NEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC3NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC3NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC3NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC4P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC4P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC4P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC5P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC5P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC5P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCEN_CC6P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCEN_CC6P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCEN_CC6P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_AR_AR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_REPCNT_REPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCDAT1_CCDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCDAT2_CCDAT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCDAT3_CCDAT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCDAT4_CCDAT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_DTGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_LCKCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_BKDT_LCKCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_BKDT_LCKCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_BKDT_LCKCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_BKDT_LCKCFG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_OSSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_BKDT_OSSI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_BKDT_OSSI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_OSSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_BKDT_OSSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_BKDT_OSSR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_BKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_BKDT_BKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_BKDT_BKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_BKDT_BKP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_BKDT_BKP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_AOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_BKDT_AOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_BKDT_AOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_BKDT_MOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_BKDT_MOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_BKDT_MOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DCTRL_DBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM5_TIMx_DCTRL_DBADDR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DCTRL_DBLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM5_TIMx_DCTRL_DBLEN_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_DADDR_BURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC5FEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC5FEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC5FEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC5PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC5PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC5PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC5MD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_CCMOD3_OC5MD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC5CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC5CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC5CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC6FEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC6FEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC6FEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC6PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC6PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC6PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC6MD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM5_TIMx_CCMOD3_OC6MD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCMOD3_OC6CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM5_TIMx_CCMOD3_OC6CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM5_TIMx_CCMOD3_OC6CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM5_TIMx_CCDAT6_CCDAT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

