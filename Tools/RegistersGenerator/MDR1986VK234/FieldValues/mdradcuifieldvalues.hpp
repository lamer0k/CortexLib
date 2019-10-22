/*******************************************************************************
* Filename      : mdradcuifieldvalues.hpp
*
* Details       : Enumerations related with MDR_ADCUI peripheral. This header
*                 file is auto-generated for MDR1986VK234 device.
*
*
*******************************************************************************/

#if !defined(MDRADCUIENUMS_HPP)
#define MDRADCUIENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_I0EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_I0EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_I0EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_V0EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_V0EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_V0EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_I1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_I1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_I1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_V1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_V1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_V1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_I2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_I2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_I2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_V2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_V2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_V2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_I3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_I3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_I3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_RESOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using bit_16 = FieldValue<MDR_ADCUI_CTRL1_RESOL_Values, BaseType, 0U> ;
  using bit_24 = FieldValue<MDR_ADCUI_CTRL1_RESOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ZXLPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using On = FieldValue<MDR_ADCUI_CTRL1_ZXLPF_Values, BaseType, 0U> ;
  using Off = FieldValue<MDR_ADCUI_CTRL1_ZXLPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_PER_Length_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Period_1 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 0U> ;
  using Period_2 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 1U> ;
  using Period_3 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 2U> ;
  using Period_4 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 3U> ;
  using Period_5 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 4U> ;
  using Period_6 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 5U> ;
  using Period_7 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 6U> ;
  using Period_8 = FieldValue<MDR_ADCUI_CTRL1_PER_Length_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_APNOLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using All = FieldValue<MDR_ADCUI_CTRL1_APNOLOAD_Values, BaseType, 0U> ;
  using lv_012 = FieldValue<MDR_ADCUI_CTRL1_APNOLOAD_Values, BaseType, 1U> ;
  using lv_0061 = FieldValue<MDR_ADCUI_CTRL1_APNOLOAD_Values, BaseType, 2U> ;
  using lv_00305 = FieldValue<MDR_ADCUI_CTRL1_APNOLOAD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_VARNOLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_VARNOLOAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_VARNOLOAD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_ADCUI_CTRL1_VARNOLOAD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_ADCUI_CTRL1_VARNOLOAD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_VANOLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_CTRL1_VANOLOAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_CTRL1_VANOLOAD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_ADCUI_CTRL1_VANOLOAD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_ADCUI_CTRL1_VANOLOAD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_FREQSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_FREQSEL_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_FREQSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_VREF_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Internal = FieldValue<MDR_ADCUI_CTRL1_VREF_SEL_Values, BaseType, 0U> ;
  using External = FieldValue<MDR_ADCUI_CTRL1_VREF_SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_BUF_BYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Buffered = FieldValue<MDR_ADCUI_CTRL1_BUF_BYP_Values, BaseType, 0U> ;
  using NotBuffered = FieldValue<MDR_ADCUI_CTRL1_BUF_BYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHOP_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Normal = FieldValue<MDR_ADCUI_CTRL1_CHOP_EN_Values, BaseType, 0U> ;
  using Chopper = FieldValue<MDR_ADCUI_CTRL1_CHOP_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHOP_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using fADC_div2 = FieldValue<MDR_ADCUI_CTRL1_CHOP_FREQ_Values, BaseType, 0U> ;
  using fADC_div4 = FieldValue<MDR_ADCUI_CTRL1_CHOP_FREQ_Values, BaseType, 1U> ;
  using fADC_div8 = FieldValue<MDR_ADCUI_CTRL1_CHOP_FREQ_Values, BaseType, 2U> ;
  using fADC_div16 = FieldValue<MDR_ADCUI_CTRL1_CHOP_FREQ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ZXRMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Continuous = FieldValue<MDR_ADCUI_CTRL1_ZXRMS_Values, BaseType, 0U> ;
  using OnZeroV0 = FieldValue<MDR_ADCUI_CTRL1_ZXRMS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_RESET_DIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_ADCUI_CTRL1_RESET_DIG_Values, BaseType, 0U> ;
  using Reset = FieldValue<MDR_ADCUI_CTRL1_RESET_DIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_IBOOST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Normal = FieldValue<MDR_ADCUI_CTRL1_IBOOST_Values, BaseType, 0U> ;
  using Boost = FieldValue<MDR_ADCUI_CTRL1_IBOOST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_OSR_CONF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using 4kHz = FieldValue<MDR_ADCUI_CTRL1_OSR_CONF_Values, BaseType, 0U> ;
  using 8kHz = FieldValue<MDR_ADCUI_CTRL1_OSR_CONF_Values, BaseType, 1U> ;
  using 16kHz = FieldValue<MDR_ADCUI_CTRL1_OSR_CONF_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL2_SAGLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL2_SAGCYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL3_ZTXOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_I0NTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using On = FieldValue<MDR_ADCUI_F0CTR_I0NTEN_Values, BaseType, 0U> ;
  using Off = FieldValue<MDR_ADCUI_F0CTR_I0NTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_I3NTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0CTR_I3NTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0CTR_I3NTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_VASEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FullEnergy = FieldValue<MDR_ADCUI_F0CTR_VASEL_Values, BaseType, 0U> ;
  using I_RMS = FieldValue<MDR_ADCUI_F0CTR_VASEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_RARS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_ADCUI_F0CTR_RARS_Values, BaseType, 0U> ;
  using Clear = FieldValue<MDR_ADCUI_F0CTR_RARS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_RRRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0CTR_RRRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0CTR_RRRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_RVRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0CTR_RVRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0CTR_RVRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_VGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_F0CTR_VGAIN_Values, BaseType, 0U> ;
  using x2 = FieldValue<MDR_ADCUI_F0CTR_VGAIN_Values, BaseType, 1U> ;
  using x4 = FieldValue<MDR_ADCUI_F0CTR_VGAIN_Values, BaseType, 2U> ;
  using x8 = FieldValue<MDR_ADCUI_F0CTR_VGAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_I0GAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0CTR_I0GAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0CTR_I0GAIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_ADCUI_F0CTR_I0GAIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_ADCUI_F0CTR_I0GAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_VPHASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_I3GAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0CTR_I3GAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0CTR_I3GAIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_ADCUI_F0CTR_I3GAIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_ADCUI_F0CTR_I3GAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0CTR_IRMSOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0WC_WATTOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0WC_WGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0WATTP_WATTHRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0WATTN_WATTHRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VC_VAROS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VC_VARGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VARP_VARHRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VARN_VARHRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0AC_VRMSOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0AC_VAGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VR_VAHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_VSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC_V = FieldValue<MDR_ADCUI_F0MD0_VSEL_Values, BaseType, 0U> ;
  using ActivePower = FieldValue<MDR_ADCUI_F0MD0_VSEL_Values, BaseType, 1U> ;
  using ReactivePower = FieldValue<MDR_ADCUI_F0MD0_VSEL_Values, BaseType, 2U> ;
  using FullPower = FieldValue<MDR_ADCUI_F0MD0_VSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_ISEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC_I0 = FieldValue<MDR_ADCUI_F0MD0_ISEL_Values, BaseType, 0U> ;
  using ActivePower = FieldValue<MDR_ADCUI_F0MD0_ISEL_Values, BaseType, 1U> ;
  using ReactivePower = FieldValue<MDR_ADCUI_F0MD0_ISEL_Values, BaseType, 2U> ;
  using FullPower = FieldValue<MDR_ADCUI_F0MD0_ISEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_ACTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Pos = FieldValue<MDR_ADCUI_F0MD0_ACTS_Values, BaseType, 0U> ;
  using Neg = FieldValue<MDR_ADCUI_F0MD0_ACTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_REACTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MD0_REACTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MD0_REACTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_V0GAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_F0MD0_V0GAIN_Values, BaseType, 0U> ;
  using x2 = FieldValue<MDR_ADCUI_F0MD0_V0GAIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_IOGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MD0_IOGAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MD0_IOGAIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_I3GAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MD0_I3GAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MD0_I3GAIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_PER_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_I3SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using I3_LPF = FieldValue<MDR_ADCUI_F0MD0_I3SEL_Values, BaseType, 0U> ;
  using ADC_I3 = FieldValue<MDR_ADCUI_F0MD0_I3SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD0_SEL_I_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Auto_max = FieldValue<MDR_ADCUI_F0MD0_SEL_I_CH_Values, BaseType, 0U> ;
  using I0 = FieldValue<MDR_ADCUI_F0MD0_SEL_I_CH_Values, BaseType, 1U> ;
  using I3 = FieldValue<MDR_ADCUI_F0MD0_SEL_I_CH_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD1_IPKLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MD1_VPKLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VPEAK_IPEAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0IPEAK_IPEAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VDAT_VDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0I0DAT_I0DAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0I3DAT_I3DAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VRMS_VRMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0VRMS2_VRMS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0IRMS_IRMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0IRMS2_IRMS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VF_EMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F0STAT_VF_EMP_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F0STAT_VF_EMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VF_FLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_VF_FLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_VF_FLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VF_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F0STAT_VF_OVER_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F0STAT_VF_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_IF_EMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_IF_EMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_IF_EMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_IF_FLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_IF_FLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_IF_FLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_IF_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_IF_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_IF_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_SAGF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_SAGF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_SAGF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_PEAKVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_PEAKVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_PEAKVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_PEAKIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_PEAKIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_PEAKIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_WATTOVP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_WATTOVP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_WATTOVP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VAROVP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_VAROVP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_VAROVP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VAOV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_VAOV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_VAOV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_ZTXVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_ZTXVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_ZTXVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_ICHANNEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using I0 = FieldValue<MDR_ADCUI_F0STAT_ICHANNEL_Values, BaseType, 0U> ;
  using I3 = FieldValue<MDR_ADCUI_F0STAT_ICHANNEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_FAULTCON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_FAULTCON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_FAULTCON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_APSIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_APSIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_APSIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_APNLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_APNLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_APNLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VARSIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_VARSIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_VARSIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VARNLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_VARNLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_VARNLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VANLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_VANLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_VANLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_ZEROCRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_ZEROCRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_ZEROCRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_I3F_EMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_I3F_EMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_I3F_EMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_I3F_FLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_I3F_FLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_I3F_FLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_I3F_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_I3F_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_I3F_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_WATTOVN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_WATTOVN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_WATTOVN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0STAT_VAROVN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0STAT_VAROVN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0STAT_VAROVN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VF_EMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F0MASK_VF_EMPM_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F0MASK_VF_EMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VF_FLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VF_FLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VF_FLLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VF_OVERM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VF_OVERM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VF_OVERM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_IF_EMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_IF_EMPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_IF_EMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_IF_FLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_IF_FLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_IF_FLLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_IF_OVERM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_IF_OVERM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_IF_OVERM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_SAGFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_SAGFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_SAGFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_PEAKVFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_PEAKVFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_PEAKVFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_PEAKIFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_PEAKIFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_PEAKIFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_WATTOVPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_WATTOVPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_WATTOVPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VAROVPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VAROVPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VAROVPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VAOVM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VAOVM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VAOVM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_ZTXVFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_ZTXVFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_ZTXVFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_FAULTCONM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_FAULTCONM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_FAULTCONM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_APSIGNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_APSIGNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_APSIGNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_APNLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_APNLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_APNLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VARSIGNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VARSIGNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VARSIGNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VARNLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VARNLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VARNLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VANLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VANLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VANLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_ZEROCRSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_ZEROCRSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_ZEROCRSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_I3F_EMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_I3F_EMPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_I3F_EMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_I3F_FLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_I3F_FLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_I3F_FLLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_I3F_OVERM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_I3F_OVERM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_I3F_OVERM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_WATTOVNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_WATTOVNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_WATTOVNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F0MASK_VAROVNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F0MASK_VAROVNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F0MASK_VAROVNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_INTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F1CTR_INTEN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F1CTR_INTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_VASEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FullEnergy = FieldValue<MDR_ADCUI_F1CTR_VASEL_Values, BaseType, 0U> ;
  using I_RMS = FieldValue<MDR_ADCUI_F1CTR_VASEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_RARS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_ADCUI_F1CTR_RARS_Values, BaseType, 0U> ;
  using Clear = FieldValue<MDR_ADCUI_F1CTR_RARS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_RRRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1CTR_RRRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1CTR_RRRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_RVRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1CTR_RVRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1CTR_RVRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_IGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_F1CTR_IGAIN_Values, BaseType, 0U> ;
  using x2 = FieldValue<MDR_ADCUI_F1CTR_IGAIN_Values, BaseType, 1U> ;
  using x4 = FieldValue<MDR_ADCUI_F1CTR_IGAIN_Values, BaseType, 2U> ;
  using x8 = FieldValue<MDR_ADCUI_F1CTR_IGAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_VGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1CTR_VGAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1CTR_VGAIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_ADCUI_F1CTR_VGAIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_ADCUI_F1CTR_VGAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_VPHASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1CTR_IRMSOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1WC_WATTOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1WC_WGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1WATTP_WATTHRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1WATTN_WATTHRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VC_VAROS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VC_VARGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VARP_VARHRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VARN_VARHRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1AC_VRMSOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1AC_VAGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VR_VAHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD0_VSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC_V = FieldValue<MDR_ADCUI_F1MD0_VSEL_Values, BaseType, 0U> ;
  using ActivePower = FieldValue<MDR_ADCUI_F1MD0_VSEL_Values, BaseType, 1U> ;
  using ReactivePower = FieldValue<MDR_ADCUI_F1MD0_VSEL_Values, BaseType, 2U> ;
  using FullPower = FieldValue<MDR_ADCUI_F1MD0_VSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD0_ISEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC_I = FieldValue<MDR_ADCUI_F1MD0_ISEL_Values, BaseType, 0U> ;
  using ActivePower = FieldValue<MDR_ADCUI_F1MD0_ISEL_Values, BaseType, 1U> ;
  using ReactivePower = FieldValue<MDR_ADCUI_F1MD0_ISEL_Values, BaseType, 2U> ;
  using FullPower = FieldValue<MDR_ADCUI_F1MD0_ISEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD0_ACTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Pos = FieldValue<MDR_ADCUI_F1MD0_ACTS_Values, BaseType, 0U> ;
  using Neg = FieldValue<MDR_ADCUI_F1MD0_ACTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD0_REACTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MD0_REACTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MD0_REACTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD0_IGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_F1MD0_IGAIN_Values, BaseType, 0U> ;
  using x2 = FieldValue<MDR_ADCUI_F1MD0_IGAIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD0_VGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MD0_VGAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MD0_VGAIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD0_PER_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD1_IPKLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD1_VPKLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MD2_PhaseV_toV0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VPEAK_IPEAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1IPEAK_IPEAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VDAT_VDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1IDAT_IDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VRMS_VRMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1VRMS2_VRMS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1IRMS_IRMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1IRMS2_IRMS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VF_EMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F1STAT_VF_EMP_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F1STAT_VF_EMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VF_FLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_VF_FLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_VF_FLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VF_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F1STAT_VF_OVER_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F1STAT_VF_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_IF_EMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_IF_EMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_IF_EMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_IF_FLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_IF_FLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_IF_FLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_IF_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_IF_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_IF_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_SAGF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_SAGF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_SAGF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_PEAKVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_PEAKVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_PEAKVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_PEAKIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_PEAKIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_PEAKIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_WATTOVP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_WATTOVP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_WATTOVP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VAROVP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_VAROVP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_VAROVP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VAOV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_VAOV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_VAOV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_ZTXVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_ZTXVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_ZTXVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_APSIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_APSIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_APSIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_APNLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_APNLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_APNLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VARSIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_VARSIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_VARSIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VARNLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_VARNLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_VARNLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VANLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_VANLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_VANLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_ZEROCRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_ZEROCRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_ZEROCRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_WATTOVN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_WATTOVN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_WATTOVN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1STAT_VAROVN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1STAT_VAROVN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1STAT_VAROVN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VF_EMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F1MASK_VF_EMPM_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F1MASK_VF_EMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VF_FLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VF_FLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VF_FLLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VF_OVERM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VF_OVERM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VF_OVERM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_IF_EMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_IF_EMPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_IF_EMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_IF_FLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_IF_FLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_IF_FLLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_IF_OVERM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_IF_OVERM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_IF_OVERM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_SAGFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_SAGFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_SAGFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_PEAKVFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_PEAKVFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_PEAKVFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_PEAKIFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_PEAKIFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_PEAKIFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_WATTOVPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_WATTOVPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_WATTOVPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VAROVPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VAROVPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VAROVPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VAOVM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VAOVM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VAOVM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_ZTXVFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_ZTXVFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_ZTXVFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_APSIGNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_APSIGNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_APSIGNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_APNLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_APNLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_APNLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VARSIGNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VARSIGNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VARSIGNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VARNLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VARNLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VARNLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VANLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VANLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VANLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_ZEROCRSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_ZEROCRSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_ZEROCRSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_WATTOVNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_WATTOVNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_WATTOVNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F1MASK_VAROVNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F1MASK_VAROVNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F1MASK_VAROVNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_INTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F2CTR_INTEN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F2CTR_INTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_VASEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FullEnergy = FieldValue<MDR_ADCUI_F2CTR_VASEL_Values, BaseType, 0U> ;
  using I_RMS = FieldValue<MDR_ADCUI_F2CTR_VASEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_RARS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_ADCUI_F2CTR_RARS_Values, BaseType, 0U> ;
  using Clear = FieldValue<MDR_ADCUI_F2CTR_RARS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_RRRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2CTR_RRRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2CTR_RRRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_RVRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2CTR_RVRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2CTR_RVRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_IGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_F2CTR_IGAIN_Values, BaseType, 0U> ;
  using x2 = FieldValue<MDR_ADCUI_F2CTR_IGAIN_Values, BaseType, 1U> ;
  using x4 = FieldValue<MDR_ADCUI_F2CTR_IGAIN_Values, BaseType, 2U> ;
  using x8 = FieldValue<MDR_ADCUI_F2CTR_IGAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_VGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2CTR_VGAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2CTR_VGAIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_ADCUI_F2CTR_VGAIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_ADCUI_F2CTR_VGAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_VPHASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2CTR_IRMSOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2WC_WATTOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2WC_WGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2WATTP_WATTHRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2WATTN_WATTHRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VC_VAROS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VC_VARGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VARP_VARHRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VARN_VARHRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2AC_VRMSOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2AC_VAGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VR_VAHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD0_VSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC_V = FieldValue<MDR_ADCUI_F2MD0_VSEL_Values, BaseType, 0U> ;
  using ActivePower = FieldValue<MDR_ADCUI_F2MD0_VSEL_Values, BaseType, 1U> ;
  using ReactivePower = FieldValue<MDR_ADCUI_F2MD0_VSEL_Values, BaseType, 2U> ;
  using FullPower = FieldValue<MDR_ADCUI_F2MD0_VSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD0_ISEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC_I = FieldValue<MDR_ADCUI_F2MD0_ISEL_Values, BaseType, 0U> ;
  using ActivePower = FieldValue<MDR_ADCUI_F2MD0_ISEL_Values, BaseType, 1U> ;
  using ReactivePower = FieldValue<MDR_ADCUI_F2MD0_ISEL_Values, BaseType, 2U> ;
  using FullPower = FieldValue<MDR_ADCUI_F2MD0_ISEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD0_ACTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Pos = FieldValue<MDR_ADCUI_F2MD0_ACTS_Values, BaseType, 0U> ;
  using Neg = FieldValue<MDR_ADCUI_F2MD0_ACTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD0_REACTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MD0_REACTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MD0_REACTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD0_IGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_F2MD0_IGAIN_Values, BaseType, 0U> ;
  using x2 = FieldValue<MDR_ADCUI_F2MD0_IGAIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD0_VGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MD0_VGAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MD0_VGAIN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD0_PER_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD1_IPKLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD1_VPKLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MD2_PhaseV_toV0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VPEAK_IPEAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2IPEAK_IPEAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VDAT_VDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2IDAT_IDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VRMS_VRMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2VRMS2_VRMS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2IRMS_IRMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2IRMS2_IRMS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VF_EMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F2STAT_VF_EMP_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F2STAT_VF_EMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VF_FLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_VF_FLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_VF_FLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VF_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F2STAT_VF_OVER_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F2STAT_VF_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_IF_EMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_IF_EMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_IF_EMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_IF_FLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_IF_FLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_IF_FLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_IF_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_IF_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_IF_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_SAGF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_SAGF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_SAGF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_PEAKVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_PEAKVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_PEAKVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_PEAKIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_PEAKIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_PEAKIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_WATTOVP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_WATTOVP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_WATTOVP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VAROVP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_VAROVP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_VAROVP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VAOV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_VAOV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_VAOV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_ZTXVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_ZTXVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_ZTXVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_APSIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_APSIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_APSIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_APNLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_APNLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_APNLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VARSIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_VARSIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_VARSIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VARNLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_VARNLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_VARNLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VANLDFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_VANLDFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_VANLDFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_ZEROCRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_ZEROCRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_ZEROCRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_WATTOVN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_WATTOVN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_WATTOVN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2STAT_VAROVN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2STAT_VAROVN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2STAT_VAROVN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VF_EMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_F2MASK_VF_EMPM_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_F2MASK_VF_EMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VF_FLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VF_FLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VF_FLLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VF_OVERM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VF_OVERM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VF_OVERM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_IF_EMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_IF_EMPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_IF_EMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_IF_FLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_IF_FLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_IF_FLLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_IF_OVERM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_IF_OVERM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_IF_OVERM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_SAGFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_SAGFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_SAGFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_PEAKVFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_PEAKVFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_PEAKVFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_PEAKIFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_PEAKIFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_PEAKIFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_WATTOVPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_WATTOVPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_WATTOVPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VAROVPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VAROVPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VAROVPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VAOVM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VAOVM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VAOVM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_ZTXVFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_ZTXVFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_ZTXVFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_APSIGNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_APSIGNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_APSIGNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_APNLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_APNLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_APNLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VARSIGNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VARSIGNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VARSIGNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VARNLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VARNLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VARNLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VANLDFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VANLDFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VANLDFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_ZEROCRSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_ZEROCRSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_ZEROCRSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_WATTOVNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_WATTOVNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_WATTOVNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_F2MASK_VAROVNM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_ADCUI_F2MASK_VAROVNM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_ADCUI_F2MASK_VAROVNM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CCAL1_V0BGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CCAL1_I0BGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CCAL2_V1BGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CCAL2_I1BGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CCAL3_V2BGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CCAL3_I2BGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CCAL4_I3BGAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(MDRADCUIENUMS_HPP)
