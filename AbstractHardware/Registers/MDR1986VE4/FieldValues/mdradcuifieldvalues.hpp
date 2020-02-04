/*******************************************************************************
* Filename      : mdradcuifieldvalues.hpp
*
* Details       : Enumerations related with MDR_ADCUI peripheral. This header
*                 file is auto-generated for MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRADCUIENUMS_HPP)
#define MDRADCUIENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC1_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC2_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC3_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC4_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC5_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC5_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC5_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC6_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC6_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC6_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC7_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC7_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC7_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_ADC8_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_CTRL1_ADC8_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_CTRL1_ADC8_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_REF_EX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Internal = FieldValue<MDR_ADCUI_CTRL1_REF_EX_Values, BaseType, 0U> ;
  using External = FieldValue<MDR_ADCUI_CTRL1_REF_EX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP1_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP2_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP3_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP4_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP5_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP5_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP5_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP6_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP6_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP6_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP7_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP7_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP7_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL1_CHP8_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConstOn = FieldValue<MDR_ADCUI_CTRL1_CHP8_EN_Values, BaseType, 0U> ;
  using ConstOff = FieldValue<MDR_ADCUI_CTRL1_CHP8_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC1_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC1_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC1_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC1_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC1_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC2_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC2_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC2_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC2_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC2_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC3_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC3_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC3_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC3_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC3_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC4_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC4_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC4_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC4_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC4_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC5_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC5_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC5_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC5_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC5_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC6_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC6_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC6_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC6_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC6_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC7_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC7_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC7_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC7_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC7_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_ANGAIN_ADC8_PGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_ADCUI_ANGAIN_ADC8_PGA_Values, BaseType, 0U> ;
  using x4 = FieldValue<MDR_ADCUI_ANGAIN_ADC8_PGA_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_ADCUI_ANGAIN_ADC8_PGA_Values, BaseType, 2U> ;
  using x16 = FieldValue<MDR_ADCUI_ANGAIN_ADC8_PGA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA1_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA2_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA3_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA4_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA5_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA5_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA5_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA6_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA6_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA6_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA7_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA7_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA7_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_DMAEN_DMA8_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_DMAEN_DMA8_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_DMAEN_DMA8_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL2_SFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL2_SFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using cor_0 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 0U> ;
  using cor_1 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 1U> ;
  using cor_2 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 2U> ;
  using cor_3 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 3U> ;
  using cor_4 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 4U> ;
  using cor_5 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 5U> ;
  using cor_6 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 6U> ;
  using cor_7 = FieldValue<MDR_ADCUI_CTRL2_SFC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL2_Reset_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Working = FieldValue<MDR_ADCUI_CTRL2_Reset_Values, BaseType, 0U> ;
  using DigInReset = FieldValue<MDR_ADCUI_CTRL2_Reset_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL2_BF_bp_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BuffOn = FieldValue<MDR_ADCUI_CTRL2_BF_bp_Values, BaseType, 0U> ;
  using ByPass = FieldValue<MDR_ADCUI_CTRL2_BF_bp_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_CTRL2_CHOP_Freq_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Invalid_0 = FieldValue<MDR_ADCUI_CTRL2_CHOP_Freq_Values, BaseType, 0U> ;
  using Invalid_1 = FieldValue<MDR_ADCUI_CTRL2_CHOP_Freq_Values, BaseType, 1U> ;
  using Invalid_2 = FieldValue<MDR_ADCUI_CTRL2_CHOP_Freq_Values, BaseType, 2U> ;
  using Ok = FieldValue<MDR_ADCUI_CTRL2_CHOP_Freq_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS1_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS2_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS3_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS4_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS5_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS5_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS5_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS6_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS6_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS6_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS7_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS7_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS7_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_NS8_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_NS8_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_NS8_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV1_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV2_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV3_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV4_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV5_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV5_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV5_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV6_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV6_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV6_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV7_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV7_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV7_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_INTEN_OV8_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_INTEN_OV8_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_INTEN_OV8_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS1_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS2_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS3_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS4_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS5_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS6_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS7_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_NS8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_NS8_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_NS8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV1_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV2_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV3_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV4_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV5_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV6_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV7_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_STAT_OV8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADCUI_STAT_OV8_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_STAT_OV8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADCUI_TST_TST2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Invalid = FieldValue<MDR_ADCUI_TST_TST2_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADCUI_TST_TST2_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRADCUIENUMS_HPP)
