/*******************************************************************************
* Filename      : mdradcuiregisters.hpp
*
* Details       : Energy Counter Block. This header file is auto-generated for
*                 MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRADCUIREGISTERS_HPP)
#define MDRADCUIREGISTERS_HPP

#include "mdradcuifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_ADCUI
{
  struct MDR_ADCUICTRL1Base {} ;

  struct CTRL1 : public RegisterBase<0x40068000, 32, ReadWriteMode>
  {
    using ADC1_EN = MDR_ADCUI_CTRL1_ADC1_EN_Values<MDR_ADCUI::CTRL1, 0, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ADC2_EN = MDR_ADCUI_CTRL1_ADC2_EN_Values<MDR_ADCUI::CTRL1, 1, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ADC3_EN = MDR_ADCUI_CTRL1_ADC3_EN_Values<MDR_ADCUI::CTRL1, 2, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ADC4_EN = MDR_ADCUI_CTRL1_ADC4_EN_Values<MDR_ADCUI::CTRL1, 3, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ADC5_EN = MDR_ADCUI_CTRL1_ADC5_EN_Values<MDR_ADCUI::CTRL1, 4, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ADC6_EN = MDR_ADCUI_CTRL1_ADC6_EN_Values<MDR_ADCUI::CTRL1, 5, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ADC7_EN = MDR_ADCUI_CTRL1_ADC7_EN_Values<MDR_ADCUI::CTRL1, 6, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ADC8_EN = MDR_ADCUI_CTRL1_ADC8_EN_Values<MDR_ADCUI::CTRL1, 7, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using REF_EX = MDR_ADCUI_CTRL1_REF_EX_Values<MDR_ADCUI::CTRL1, 8, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP1_EN = MDR_ADCUI_CTRL1_CHP1_EN_Values<MDR_ADCUI::CTRL1, 9, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP2_EN = MDR_ADCUI_CTRL1_CHP2_EN_Values<MDR_ADCUI::CTRL1, 10, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP3_EN = MDR_ADCUI_CTRL1_CHP3_EN_Values<MDR_ADCUI::CTRL1, 11, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP4_EN = MDR_ADCUI_CTRL1_CHP4_EN_Values<MDR_ADCUI::CTRL1, 12, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP5_EN = MDR_ADCUI_CTRL1_CHP5_EN_Values<MDR_ADCUI::CTRL1, 13, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP6_EN = MDR_ADCUI_CTRL1_CHP6_EN_Values<MDR_ADCUI::CTRL1, 14, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP7_EN = MDR_ADCUI_CTRL1_CHP7_EN_Values<MDR_ADCUI::CTRL1, 15, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHP8_EN = MDR_ADCUI_CTRL1_CHP8_EN_Values<MDR_ADCUI::CTRL1, 16, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using FieldValues = MDR_ADCUI_CTRL1_CHP8_EN_Values<MDR_ADCUI::CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRL1Pack  = Register<0x40068000, 32, ReadWriteMode, MDR_ADCUICTRL1Base, T...> ;

  struct MDR_ADCUIANGAINBase {} ;

  struct ANGAIN : public RegisterBase<0x40068004, 32, ReadWriteMode>
  {
    using ADC1_PGA = MDR_ADCUI_ANGAIN_ADC1_PGA_Values<MDR_ADCUI::ANGAIN, 0, 2, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using ADC2_PGA = MDR_ADCUI_ANGAIN_ADC2_PGA_Values<MDR_ADCUI::ANGAIN, 2, 2, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using ADC3_PGA = MDR_ADCUI_ANGAIN_ADC3_PGA_Values<MDR_ADCUI::ANGAIN, 4, 2, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using ADC4_PGA = MDR_ADCUI_ANGAIN_ADC4_PGA_Values<MDR_ADCUI::ANGAIN, 6, 2, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using ADC5_PGA = MDR_ADCUI_ANGAIN_ADC5_PGA_Values<MDR_ADCUI::ANGAIN, 8, 2, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using ADC6_PGA = MDR_ADCUI_ANGAIN_ADC6_PGA_Values<MDR_ADCUI::ANGAIN, 10, 2, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using ADC7_PGA = MDR_ADCUI_ANGAIN_ADC7_PGA_Values<MDR_ADCUI::ANGAIN, 12, 2, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using ADC8_PGA = MDR_ADCUI_ANGAIN_ADC8_PGA_Values<MDR_ADCUI::ANGAIN, 14, 3, ReadWriteMode, MDR_ADCUIANGAINBase> ;
    using FieldValues = MDR_ADCUI_ANGAIN_ADC8_PGA_Values<MDR_ADCUI::ANGAIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANGAINPack  = Register<0x40068004, 32, ReadWriteMode, MDR_ADCUIANGAINBase, T...> ;

  struct MDR_ADCUIDIGGAINBase {} ;

  struct DIGGAIN : public RegisterBase<0x40068008, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DIGGAINPack  = Register<0x40068008, 32, ReadMode, MDR_ADCUIDIGGAINBase, T...> ;

  struct MDR_ADCUIDMAENBase {} ;

  struct DMAEN : public RegisterBase<0x4006800C, 32, ReadWriteMode>
  {
    using DMA1_EN = MDR_ADCUI_DMAEN_DMA1_EN_Values<MDR_ADCUI::DMAEN, 0, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using DMA2_EN = MDR_ADCUI_DMAEN_DMA2_EN_Values<MDR_ADCUI::DMAEN, 1, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using DMA3_EN = MDR_ADCUI_DMAEN_DMA3_EN_Values<MDR_ADCUI::DMAEN, 2, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using DMA4_EN = MDR_ADCUI_DMAEN_DMA4_EN_Values<MDR_ADCUI::DMAEN, 3, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using DMA5_EN = MDR_ADCUI_DMAEN_DMA5_EN_Values<MDR_ADCUI::DMAEN, 4, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using DMA6_EN = MDR_ADCUI_DMAEN_DMA6_EN_Values<MDR_ADCUI::DMAEN, 5, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using DMA7_EN = MDR_ADCUI_DMAEN_DMA7_EN_Values<MDR_ADCUI::DMAEN, 6, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using DMA8_EN = MDR_ADCUI_DMAEN_DMA8_EN_Values<MDR_ADCUI::DMAEN, 7, 1, ReadWriteMode, MDR_ADCUIDMAENBase> ;
    using FieldValues = MDR_ADCUI_DMAEN_DMA8_EN_Values<MDR_ADCUI::DMAEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAENPack  = Register<0x4006800C, 32, ReadWriteMode, MDR_ADCUIDMAENBase, T...> ;

  struct MDR_ADCUICTRL2Base {} ;

  struct CTRL2 : public RegisterBase<0x40068010, 32, ReadWriteMode>
  {
    using SFF = MDR_ADCUI_CTRL2_SFF_Values<MDR_ADCUI::CTRL2, 0, 7, ReadWriteMode, MDR_ADCUICTRL2Base> ;
    using SFC = MDR_ADCUI_CTRL2_SFC_Values<MDR_ADCUI::CTRL2, 7, 3, ReadWriteMode, MDR_ADCUICTRL2Base> ;
    using Reset = MDR_ADCUI_CTRL2_Reset_Values<MDR_ADCUI::CTRL2, 10, 1, ReadWriteMode, MDR_ADCUICTRL2Base> ;
    using BF_bp = MDR_ADCUI_CTRL2_BF_bp_Values<MDR_ADCUI::CTRL2, 11, 1, ReadWriteMode, MDR_ADCUICTRL2Base> ;
    using CHOP_Freq = MDR_ADCUI_CTRL2_CHOP_Freq_Values<MDR_ADCUI::CTRL2, 12, 2, ReadWriteMode, MDR_ADCUICTRL2Base> ;
    using FieldValues = MDR_ADCUI_CTRL2_CHOP_Freq_Values<MDR_ADCUI::CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRL2Pack  = Register<0x40068010, 32, ReadWriteMode, MDR_ADCUICTRL2Base, T...> ;

  struct MDR_ADCUIINTENBase {} ;

  struct INTEN : public RegisterBase<0x40068014, 32, ReadWriteMode>
  {
    using NS1_EN = MDR_ADCUI_INTEN_NS1_EN_Values<MDR_ADCUI::INTEN, 0, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using NS2_EN = MDR_ADCUI_INTEN_NS2_EN_Values<MDR_ADCUI::INTEN, 1, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using NS3_EN = MDR_ADCUI_INTEN_NS3_EN_Values<MDR_ADCUI::INTEN, 2, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using NS4_EN = MDR_ADCUI_INTEN_NS4_EN_Values<MDR_ADCUI::INTEN, 3, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using NS5_EN = MDR_ADCUI_INTEN_NS5_EN_Values<MDR_ADCUI::INTEN, 4, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using NS6_EN = MDR_ADCUI_INTEN_NS6_EN_Values<MDR_ADCUI::INTEN, 5, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using NS7_EN = MDR_ADCUI_INTEN_NS7_EN_Values<MDR_ADCUI::INTEN, 6, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using NS8_EN = MDR_ADCUI_INTEN_NS8_EN_Values<MDR_ADCUI::INTEN, 7, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV1_EN = MDR_ADCUI_INTEN_OV1_EN_Values<MDR_ADCUI::INTEN, 8, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV2_EN = MDR_ADCUI_INTEN_OV2_EN_Values<MDR_ADCUI::INTEN, 9, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV3_EN = MDR_ADCUI_INTEN_OV3_EN_Values<MDR_ADCUI::INTEN, 10, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV4_EN = MDR_ADCUI_INTEN_OV4_EN_Values<MDR_ADCUI::INTEN, 11, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV5_EN = MDR_ADCUI_INTEN_OV5_EN_Values<MDR_ADCUI::INTEN, 12, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV6_EN = MDR_ADCUI_INTEN_OV6_EN_Values<MDR_ADCUI::INTEN, 13, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV7_EN = MDR_ADCUI_INTEN_OV7_EN_Values<MDR_ADCUI::INTEN, 14, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using OV8_EN = MDR_ADCUI_INTEN_OV8_EN_Values<MDR_ADCUI::INTEN, 15, 1, ReadWriteMode, MDR_ADCUIINTENBase> ;
    using FieldValues = MDR_ADCUI_INTEN_OV8_EN_Values<MDR_ADCUI::INTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENPack  = Register<0x40068014, 32, ReadWriteMode, MDR_ADCUIINTENBase, T...> ;

  struct MDR_ADCUISTATBase {} ;

  struct STAT : public RegisterBase<0x40068018, 32, ReadWriteMode>
  {
    using NS1 = MDR_ADCUI_STAT_NS1_Values<MDR_ADCUI::STAT, 0, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using NS2 = MDR_ADCUI_STAT_NS2_Values<MDR_ADCUI::STAT, 1, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using NS3 = MDR_ADCUI_STAT_NS3_Values<MDR_ADCUI::STAT, 2, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using NS4 = MDR_ADCUI_STAT_NS4_Values<MDR_ADCUI::STAT, 3, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using NS5 = MDR_ADCUI_STAT_NS5_Values<MDR_ADCUI::STAT, 4, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using NS6 = MDR_ADCUI_STAT_NS6_Values<MDR_ADCUI::STAT, 5, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using NS7 = MDR_ADCUI_STAT_NS7_Values<MDR_ADCUI::STAT, 6, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using NS8 = MDR_ADCUI_STAT_NS8_Values<MDR_ADCUI::STAT, 7, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV1 = MDR_ADCUI_STAT_OV1_Values<MDR_ADCUI::STAT, 8, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV2 = MDR_ADCUI_STAT_OV2_Values<MDR_ADCUI::STAT, 9, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV3 = MDR_ADCUI_STAT_OV3_Values<MDR_ADCUI::STAT, 10, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV4 = MDR_ADCUI_STAT_OV4_Values<MDR_ADCUI::STAT, 11, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV5 = MDR_ADCUI_STAT_OV5_Values<MDR_ADCUI::STAT, 12, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV6 = MDR_ADCUI_STAT_OV6_Values<MDR_ADCUI::STAT, 13, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV7 = MDR_ADCUI_STAT_OV7_Values<MDR_ADCUI::STAT, 14, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using OV8 = MDR_ADCUI_STAT_OV8_Values<MDR_ADCUI::STAT, 15, 1, ReadWriteMode, MDR_ADCUISTATBase> ;
    using FieldValues = MDR_ADCUI_STAT_OV8_Values<MDR_ADCUI::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40068018, 32, ReadWriteMode, MDR_ADCUISTATBase, T...> ;

  struct MDR_ADCUITSTBase {} ;

  struct TST : public RegisterBase<0x4006803C, 32, ReadWriteMode>
  {
    using TST2 = MDR_ADCUI_TST_TST2_Values<MDR_ADCUI::TST, 1, 1, ReadWriteMode, MDR_ADCUITSTBase> ;
    using FieldValues = MDR_ADCUI_TST_TST2_Values<MDR_ADCUI::TST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSTPack  = Register<0x4006803C, 32, ReadWriteMode, MDR_ADCUITSTBase, T...> ;

  struct MDR_ADCUIADC1_DATBase {} ;

  struct ADC1_DAT : public RegisterBase<0x4006801C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC1_DATPack  = Register<0x4006801C, 32, ReadMode, MDR_ADCUIADC1_DATBase, T...> ;

  struct MDR_ADCUIADC2_DATBase {} ;

  struct ADC2_DAT : public RegisterBase<0x40068020, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC2_DATPack  = Register<0x40068020, 32, ReadMode, MDR_ADCUIADC2_DATBase, T...> ;

  struct MDR_ADCUIADC3_DATBase {} ;

  struct ADC3_DAT : public RegisterBase<0x40068024, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC3_DATPack  = Register<0x40068024, 32, ReadMode, MDR_ADCUIADC3_DATBase, T...> ;

  struct MDR_ADCUIADC4_DATBase {} ;

  struct ADC4_DAT : public RegisterBase<0x40068028, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC4_DATPack  = Register<0x40068028, 32, ReadMode, MDR_ADCUIADC4_DATBase, T...> ;

  struct MDR_ADCUIADC5_DATBase {} ;

  struct ADC5_DAT : public RegisterBase<0x4006802C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC5_DATPack  = Register<0x4006802C, 32, ReadMode, MDR_ADCUIADC5_DATBase, T...> ;

  struct MDR_ADCUIADC6_DATBase {} ;

  struct ADC6_DAT : public RegisterBase<0x40068030, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC6_DATPack  = Register<0x40068030, 32, ReadMode, MDR_ADCUIADC6_DATBase, T...> ;

  struct MDR_ADCUIADC7_DATBase {} ;

  struct ADC7_DAT : public RegisterBase<0x40068034, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC7_DATPack  = Register<0x40068034, 32, ReadMode, MDR_ADCUIADC7_DATBase, T...> ;

  struct MDR_ADCUIADC8_DATBase {} ;

  struct ADC8_DAT : public RegisterBase<0x40068038, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC8_DATPack  = Register<0x40068038, 32, ReadMode, MDR_ADCUIADC8_DATBase, T...> ;

} ;

#endif //#if !defined(MDRADCUIREGISTERS_HPP)
