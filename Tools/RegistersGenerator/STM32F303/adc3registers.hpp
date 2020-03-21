/*******************************************************************************
* Filename      : adc3registers.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(ADC3REGISTERS_HPP)
#define ADC3REGISTERS_HPP

#include "adc3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC3
{
  struct ADC3ISRBase {} ;

  struct ISR : public RegisterBase<0x50000400, 32, ReadWriteMode>
  {
    using JQOVF = ADC3_ISR_JQOVF_Values<ADC3::ISR, 10, 1, ReadWriteMode, ADC3ISRBase> ;
    using AWD3 = ADC3_ISR_AWD3_Values<ADC3::ISR, 9, 1, ReadWriteMode, ADC3ISRBase> ;
    using AWD2 = ADC3_ISR_AWD2_Values<ADC3::ISR, 8, 1, ReadWriteMode, ADC3ISRBase> ;
    using AWD1 = ADC3_ISR_AWD1_Values<ADC3::ISR, 7, 1, ReadWriteMode, ADC3ISRBase> ;
    using JEOS = ADC3_ISR_JEOS_Values<ADC3::ISR, 6, 1, ReadWriteMode, ADC3ISRBase> ;
    using JEOC = ADC3_ISR_JEOC_Values<ADC3::ISR, 5, 1, ReadWriteMode, ADC3ISRBase> ;
    using OVR = ADC3_ISR_OVR_Values<ADC3::ISR, 4, 1, ReadWriteMode, ADC3ISRBase> ;
    using EOS = ADC3_ISR_EOS_Values<ADC3::ISR, 3, 1, ReadWriteMode, ADC3ISRBase> ;
    using EOC = ADC3_ISR_EOC_Values<ADC3::ISR, 2, 1, ReadWriteMode, ADC3ISRBase> ;
    using EOSMP = ADC3_ISR_EOSMP_Values<ADC3::ISR, 1, 1, ReadWriteMode, ADC3ISRBase> ;
    using ADRDY = ADC3_ISR_ADRDY_Values<ADC3::ISR, 0, 1, ReadWriteMode, ADC3ISRBase> ;
    using FieldValues = ADC3_ISR_ADRDY_Values<ADC3::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x50000400, 32, ReadWriteMode, ADC3ISRBase, T...> ;

  struct ADC3IERBase {} ;

  struct IER : public RegisterBase<0x50000404, 32, ReadWriteMode>
  {
    using JQOVFIE = ADC3_IER_JQOVFIE_Values<ADC3::IER, 10, 1, ReadWriteMode, ADC3IERBase> ;
    using AWD3IE = ADC3_IER_AWD3IE_Values<ADC3::IER, 9, 1, ReadWriteMode, ADC3IERBase> ;
    using AWD2IE = ADC3_IER_AWD2IE_Values<ADC3::IER, 8, 1, ReadWriteMode, ADC3IERBase> ;
    using AWD1IE = ADC3_IER_AWD1IE_Values<ADC3::IER, 7, 1, ReadWriteMode, ADC3IERBase> ;
    using JEOSIE = ADC3_IER_JEOSIE_Values<ADC3::IER, 6, 1, ReadWriteMode, ADC3IERBase> ;
    using JEOCIE = ADC3_IER_JEOCIE_Values<ADC3::IER, 5, 1, ReadWriteMode, ADC3IERBase> ;
    using OVRIE = ADC3_IER_OVRIE_Values<ADC3::IER, 4, 1, ReadWriteMode, ADC3IERBase> ;
    using EOSIE = ADC3_IER_EOSIE_Values<ADC3::IER, 3, 1, ReadWriteMode, ADC3IERBase> ;
    using EOCIE = ADC3_IER_EOCIE_Values<ADC3::IER, 2, 1, ReadWriteMode, ADC3IERBase> ;
    using EOSMPIE = ADC3_IER_EOSMPIE_Values<ADC3::IER, 1, 1, ReadWriteMode, ADC3IERBase> ;
    using ADRDYIE = ADC3_IER_ADRDYIE_Values<ADC3::IER, 0, 1, ReadWriteMode, ADC3IERBase> ;
    using FieldValues = ADC3_IER_ADRDYIE_Values<ADC3::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x50000404, 32, ReadWriteMode, ADC3IERBase, T...> ;

  struct ADC3CRBase {} ;

  struct CR : public RegisterBase<0x50000408, 32, ReadWriteMode>
  {
    using ADCAL = ADC3_CR_ADCAL_Values<ADC3::CR, 31, 1, ReadWriteMode, ADC3CRBase> ;
    using ADCALDIF = ADC3_CR_ADCALDIF_Values<ADC3::CR, 30, 1, ReadWriteMode, ADC3CRBase> ;
    using DEEPPWD = ADC3_CR_DEEPPWD_Values<ADC3::CR, 29, 1, ReadWriteMode, ADC3CRBase> ;
    using ADVREGEN = ADC3_CR_ADVREGEN_Values<ADC3::CR, 28, 1, ReadWriteMode, ADC3CRBase> ;
    using JADSTP = ADC3_CR_JADSTP_Values<ADC3::CR, 5, 1, ReadWriteMode, ADC3CRBase> ;
    using ADSTP = ADC3_CR_ADSTP_Values<ADC3::CR, 4, 1, ReadWriteMode, ADC3CRBase> ;
    using JADSTART = ADC3_CR_JADSTART_Values<ADC3::CR, 3, 1, ReadWriteMode, ADC3CRBase> ;
    using ADSTART = ADC3_CR_ADSTART_Values<ADC3::CR, 2, 1, ReadWriteMode, ADC3CRBase> ;
    using ADDIS = ADC3_CR_ADDIS_Values<ADC3::CR, 1, 1, ReadWriteMode, ADC3CRBase> ;
    using ADEN = ADC3_CR_ADEN_Values<ADC3::CR, 0, 1, ReadWriteMode, ADC3CRBase> ;
    using FieldValues = ADC3_CR_ADEN_Values<ADC3::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50000408, 32, ReadWriteMode, ADC3CRBase, T...> ;

  struct ADC3CFGRBase {} ;

  struct CFGR : public RegisterBase<0x5000040C, 32, ReadWriteMode>
  {
    using AWDCH1CH = ADC3_CFGR_AWDCH1CH_Values<ADC3::CFGR, 26, 5, ReadWriteMode, ADC3CFGRBase> ;
    using JAUTO = ADC3_CFGR_JAUTO_Values<ADC3::CFGR, 25, 1, ReadWriteMode, ADC3CFGRBase> ;
    using JAWD1EN = ADC3_CFGR_JAWD1EN_Values<ADC3::CFGR, 24, 1, ReadWriteMode, ADC3CFGRBase> ;
    using AWD1EN = ADC3_CFGR_AWD1EN_Values<ADC3::CFGR, 23, 1, ReadWriteMode, ADC3CFGRBase> ;
    using AWD1SGL = ADC3_CFGR_AWD1SGL_Values<ADC3::CFGR, 22, 1, ReadWriteMode, ADC3CFGRBase> ;
    using JQM = ADC3_CFGR_JQM_Values<ADC3::CFGR, 21, 1, ReadWriteMode, ADC3CFGRBase> ;
    using JDISCEN = ADC3_CFGR_JDISCEN_Values<ADC3::CFGR, 20, 1, ReadWriteMode, ADC3CFGRBase> ;
    using DISCNUM = ADC3_CFGR_DISCNUM_Values<ADC3::CFGR, 17, 3, ReadWriteMode, ADC3CFGRBase> ;
    using DISCEN = ADC3_CFGR_DISCEN_Values<ADC3::CFGR, 16, 1, ReadWriteMode, ADC3CFGRBase> ;
    using AUTOFF = ADC3_CFGR_AUTOFF_Values<ADC3::CFGR, 15, 1, ReadWriteMode, ADC3CFGRBase> ;
    using AUTDLY = ADC3_CFGR_AUTDLY_Values<ADC3::CFGR, 14, 1, ReadWriteMode, ADC3CFGRBase> ;
    using CONT = ADC3_CFGR_CONT_Values<ADC3::CFGR, 13, 1, ReadWriteMode, ADC3CFGRBase> ;
    using OVRMOD = ADC3_CFGR_OVRMOD_Values<ADC3::CFGR, 12, 1, ReadWriteMode, ADC3CFGRBase> ;
    using EXTEN = ADC3_CFGR_EXTEN_Values<ADC3::CFGR, 10, 2, ReadWriteMode, ADC3CFGRBase> ;
    using EXTSEL = ADC3_CFGR_EXTSEL_Values<ADC3::CFGR, 6, 4, ReadWriteMode, ADC3CFGRBase> ;
    using ALIGN = ADC3_CFGR_ALIGN_Values<ADC3::CFGR, 5, 1, ReadWriteMode, ADC3CFGRBase> ;
    using RES = ADC3_CFGR_RES_Values<ADC3::CFGR, 3, 2, ReadWriteMode, ADC3CFGRBase> ;
    using DMACFG = ADC3_CFGR_DMACFG_Values<ADC3::CFGR, 1, 1, ReadWriteMode, ADC3CFGRBase> ;
    using DMAEN = ADC3_CFGR_DMAEN_Values<ADC3::CFGR, 0, 1, ReadWriteMode, ADC3CFGRBase> ;
    using FieldValues = ADC3_CFGR_DMAEN_Values<ADC3::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x5000040C, 32, ReadWriteMode, ADC3CFGRBase, T...> ;

  struct ADC3SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x50000414, 32, ReadWriteMode>
  {
    using SMP9 = ADC3_SMPR1_SMP9_Values<ADC3::SMPR1, 27, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP8 = ADC3_SMPR1_SMP8_Values<ADC3::SMPR1, 24, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP7 = ADC3_SMPR1_SMP7_Values<ADC3::SMPR1, 21, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP6 = ADC3_SMPR1_SMP6_Values<ADC3::SMPR1, 18, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP5 = ADC3_SMPR1_SMP5_Values<ADC3::SMPR1, 15, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP4 = ADC3_SMPR1_SMP4_Values<ADC3::SMPR1, 12, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP3 = ADC3_SMPR1_SMP3_Values<ADC3::SMPR1, 9, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP2 = ADC3_SMPR1_SMP2_Values<ADC3::SMPR1, 6, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP1 = ADC3_SMPR1_SMP1_Values<ADC3::SMPR1, 3, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using FieldValues = ADC3_SMPR1_SMP1_Values<ADC3::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x50000414, 32, ReadWriteMode, ADC3SMPR1Base, T...> ;

  struct ADC3SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x50000418, 32, ReadWriteMode>
  {
    using SMP18 = ADC3_SMPR2_SMP18_Values<ADC3::SMPR2, 24, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP17 = ADC3_SMPR2_SMP17_Values<ADC3::SMPR2, 21, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP16 = ADC3_SMPR2_SMP16_Values<ADC3::SMPR2, 18, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP15 = ADC3_SMPR2_SMP15_Values<ADC3::SMPR2, 15, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP14 = ADC3_SMPR2_SMP14_Values<ADC3::SMPR2, 12, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP13 = ADC3_SMPR2_SMP13_Values<ADC3::SMPR2, 9, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP12 = ADC3_SMPR2_SMP12_Values<ADC3::SMPR2, 6, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP11 = ADC3_SMPR2_SMP11_Values<ADC3::SMPR2, 3, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP10 = ADC3_SMPR2_SMP10_Values<ADC3::SMPR2, 0, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using FieldValues = ADC3_SMPR2_SMP10_Values<ADC3::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x50000418, 32, ReadWriteMode, ADC3SMPR2Base, T...> ;

  struct ADC3TR1Base {} ;

  struct TR1 : public RegisterBase<0x50000420, 32, ReadWriteMode>
  {
    using HT1 = ADC3_TR1_HT1_Values<ADC3::TR1, 16, 12, ReadWriteMode, ADC3TR1Base> ;
    using LT1 = ADC3_TR1_LT1_Values<ADC3::TR1, 0, 12, ReadWriteMode, ADC3TR1Base> ;
    using FieldValues = ADC3_TR1_LT1_Values<ADC3::TR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR1Pack  = Register<0x50000420, 32, ReadWriteMode, ADC3TR1Base, T...> ;

  struct ADC3TR2Base {} ;

  struct TR2 : public RegisterBase<0x50000424, 32, ReadWriteMode>
  {
    using HT2 = ADC3_TR2_HT2_Values<ADC3::TR2, 16, 8, ReadWriteMode, ADC3TR2Base> ;
    using LT2 = ADC3_TR2_LT2_Values<ADC3::TR2, 0, 8, ReadWriteMode, ADC3TR2Base> ;
    using FieldValues = ADC3_TR2_LT2_Values<ADC3::TR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR2Pack  = Register<0x50000424, 32, ReadWriteMode, ADC3TR2Base, T...> ;

  struct ADC3TR3Base {} ;

  struct TR3 : public RegisterBase<0x50000428, 32, ReadWriteMode>
  {
    using HT3 = ADC3_TR3_HT3_Values<ADC3::TR3, 16, 8, ReadWriteMode, ADC3TR3Base> ;
    using LT3 = ADC3_TR3_LT3_Values<ADC3::TR3, 0, 8, ReadWriteMode, ADC3TR3Base> ;
    using FieldValues = ADC3_TR3_LT3_Values<ADC3::TR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR3Pack  = Register<0x50000428, 32, ReadWriteMode, ADC3TR3Base, T...> ;

  struct ADC3SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x50000430, 32, ReadWriteMode>
  {
    using SQ4 = ADC3_SQR1_SQ4_Values<ADC3::SQR1, 24, 5, ReadWriteMode, ADC3SQR1Base> ;
    using SQ3 = ADC3_SQR1_SQ3_Values<ADC3::SQR1, 18, 5, ReadWriteMode, ADC3SQR1Base> ;
    using SQ2 = ADC3_SQR1_SQ2_Values<ADC3::SQR1, 12, 5, ReadWriteMode, ADC3SQR1Base> ;
    using SQ1 = ADC3_SQR1_SQ1_Values<ADC3::SQR1, 6, 5, ReadWriteMode, ADC3SQR1Base> ;
    using L3 = ADC3_SQR1_L3_Values<ADC3::SQR1, 0, 4, ReadWriteMode, ADC3SQR1Base> ;
    using FieldValues = ADC3_SQR1_L3_Values<ADC3::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x50000430, 32, ReadWriteMode, ADC3SQR1Base, T...> ;

  struct ADC3SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x50000434, 32, ReadWriteMode>
  {
    using SQ9 = ADC3_SQR2_SQ9_Values<ADC3::SQR2, 24, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ8 = ADC3_SQR2_SQ8_Values<ADC3::SQR2, 18, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ7 = ADC3_SQR2_SQ7_Values<ADC3::SQR2, 12, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ6 = ADC3_SQR2_SQ6_Values<ADC3::SQR2, 6, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ5 = ADC3_SQR2_SQ5_Values<ADC3::SQR2, 0, 5, ReadWriteMode, ADC3SQR2Base> ;
    using FieldValues = ADC3_SQR2_SQ5_Values<ADC3::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x50000434, 32, ReadWriteMode, ADC3SQR2Base, T...> ;

  struct ADC3SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x50000438, 32, ReadWriteMode>
  {
    using SQ14 = ADC3_SQR3_SQ14_Values<ADC3::SQR3, 24, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ13 = ADC3_SQR3_SQ13_Values<ADC3::SQR3, 18, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ12 = ADC3_SQR3_SQ12_Values<ADC3::SQR3, 12, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ11 = ADC3_SQR3_SQ11_Values<ADC3::SQR3, 6, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ10 = ADC3_SQR3_SQ10_Values<ADC3::SQR3, 0, 5, ReadWriteMode, ADC3SQR3Base> ;
    using FieldValues = ADC3_SQR3_SQ10_Values<ADC3::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x50000438, 32, ReadWriteMode, ADC3SQR3Base, T...> ;

  struct ADC3SQR4Base {} ;

  struct SQR4 : public RegisterBase<0x5000043C, 32, ReadWriteMode>
  {
    using SQ16 = ADC3_SQR4_SQ16_Values<ADC3::SQR4, 6, 5, ReadWriteMode, ADC3SQR4Base> ;
    using SQ15 = ADC3_SQR4_SQ15_Values<ADC3::SQR4, 0, 5, ReadWriteMode, ADC3SQR4Base> ;
    using FieldValues = ADC3_SQR4_SQ15_Values<ADC3::SQR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR4Pack  = Register<0x5000043C, 32, ReadWriteMode, ADC3SQR4Base, T...> ;

  struct ADC3DRBase {} ;

  struct DR : public RegisterBase<0x50000440, 32, ReadMode>
  {
    using regularDATA = ADC3_DR_regularDATA_Values<ADC3::DR, 0, 16, ReadMode, ADC3DRBase> ;
    using FieldValues = ADC3_DR_regularDATA_Values<ADC3::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x50000440, 32, ReadMode, ADC3DRBase, T...> ;

  struct ADC3JSQRBase {} ;

  struct JSQR : public RegisterBase<0x5000044C, 32, ReadWriteMode>
  {
    using JSQ4 = ADC3_JSQR_JSQ4_Values<ADC3::JSQR, 26, 5, ReadWriteMode, ADC3JSQRBase> ;
    using JSQ3 = ADC3_JSQR_JSQ3_Values<ADC3::JSQR, 20, 5, ReadWriteMode, ADC3JSQRBase> ;
    using JSQ2 = ADC3_JSQR_JSQ2_Values<ADC3::JSQR, 14, 5, ReadWriteMode, ADC3JSQRBase> ;
    using JSQ1 = ADC3_JSQR_JSQ1_Values<ADC3::JSQR, 8, 5, ReadWriteMode, ADC3JSQRBase> ;
    using JEXTEN = ADC3_JSQR_JEXTEN_Values<ADC3::JSQR, 6, 2, ReadWriteMode, ADC3JSQRBase> ;
    using JEXTSEL = ADC3_JSQR_JEXTSEL_Values<ADC3::JSQR, 2, 4, ReadWriteMode, ADC3JSQRBase> ;
    using JL = ADC3_JSQR_JL_Values<ADC3::JSQR, 0, 2, ReadWriteMode, ADC3JSQRBase> ;
    using FieldValues = ADC3_JSQR_JL_Values<ADC3::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x5000044C, 32, ReadWriteMode, ADC3JSQRBase, T...> ;

  struct ADC3OFR1Base {} ;

  struct OFR1 : public RegisterBase<0x50000460, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC3_OFR1_OFFSET1_EN_Values<ADC3::OFR1, 31, 1, ReadWriteMode, ADC3OFR1Base> ;
    using OFFSET1_CH = ADC3_OFR1_OFFSET1_CH_Values<ADC3::OFR1, 26, 5, ReadWriteMode, ADC3OFR1Base> ;
    using OFFSET1 = ADC3_OFR1_OFFSET1_Values<ADC3::OFR1, 0, 12, ReadWriteMode, ADC3OFR1Base> ;
    using FieldValues = ADC3_OFR1_OFFSET1_Values<ADC3::OFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR1Pack  = Register<0x50000460, 32, ReadWriteMode, ADC3OFR1Base, T...> ;

  struct ADC3OFR2Base {} ;

  struct OFR2 : public RegisterBase<0x50000464, 32, ReadWriteMode>
  {
    using OFFSET2_EN = ADC3_OFR2_OFFSET2_EN_Values<ADC3::OFR2, 31, 1, ReadWriteMode, ADC3OFR2Base> ;
    using OFFSET2_CH = ADC3_OFR2_OFFSET2_CH_Values<ADC3::OFR2, 26, 5, ReadWriteMode, ADC3OFR2Base> ;
    using OFFSET2 = ADC3_OFR2_OFFSET2_Values<ADC3::OFR2, 0, 12, ReadWriteMode, ADC3OFR2Base> ;
    using FieldValues = ADC3_OFR2_OFFSET2_Values<ADC3::OFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR2Pack  = Register<0x50000464, 32, ReadWriteMode, ADC3OFR2Base, T...> ;

  struct ADC3OFR3Base {} ;

  struct OFR3 : public RegisterBase<0x50000468, 32, ReadWriteMode>
  {
    using OFFSET3_EN = ADC3_OFR3_OFFSET3_EN_Values<ADC3::OFR3, 31, 1, ReadWriteMode, ADC3OFR3Base> ;
    using OFFSET3_CH = ADC3_OFR3_OFFSET3_CH_Values<ADC3::OFR3, 26, 5, ReadWriteMode, ADC3OFR3Base> ;
    using OFFSET3 = ADC3_OFR3_OFFSET3_Values<ADC3::OFR3, 0, 12, ReadWriteMode, ADC3OFR3Base> ;
    using FieldValues = ADC3_OFR3_OFFSET3_Values<ADC3::OFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR3Pack  = Register<0x50000468, 32, ReadWriteMode, ADC3OFR3Base, T...> ;

  struct ADC3OFR4Base {} ;

  struct OFR4 : public RegisterBase<0x5000046C, 32, ReadWriteMode>
  {
    using OFFSET4_EN = ADC3_OFR4_OFFSET4_EN_Values<ADC3::OFR4, 31, 1, ReadWriteMode, ADC3OFR4Base> ;
    using OFFSET4_CH = ADC3_OFR4_OFFSET4_CH_Values<ADC3::OFR4, 26, 5, ReadWriteMode, ADC3OFR4Base> ;
    using OFFSET4 = ADC3_OFR4_OFFSET4_Values<ADC3::OFR4, 0, 12, ReadWriteMode, ADC3OFR4Base> ;
    using FieldValues = ADC3_OFR4_OFFSET4_Values<ADC3::OFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR4Pack  = Register<0x5000046C, 32, ReadWriteMode, ADC3OFR4Base, T...> ;

  struct ADC3JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x50000480, 32, ReadMode>
  {
    using JDATA1 = ADC3_JDR1_JDATA1_Values<ADC3::JDR1, 0, 16, ReadMode, ADC3JDR1Base> ;
    using FieldValues = ADC3_JDR1_JDATA1_Values<ADC3::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x50000480, 32, ReadMode, ADC3JDR1Base, T...> ;

  struct ADC3JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x50000484, 32, ReadMode>
  {
    using JDATA2 = ADC3_JDR2_JDATA2_Values<ADC3::JDR2, 0, 16, ReadMode, ADC3JDR2Base> ;
    using FieldValues = ADC3_JDR2_JDATA2_Values<ADC3::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x50000484, 32, ReadMode, ADC3JDR2Base, T...> ;

  struct ADC3JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x50000488, 32, ReadMode>
  {
    using JDATA3 = ADC3_JDR3_JDATA3_Values<ADC3::JDR3, 0, 16, ReadMode, ADC3JDR3Base> ;
    using FieldValues = ADC3_JDR3_JDATA3_Values<ADC3::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x50000488, 32, ReadMode, ADC3JDR3Base, T...> ;

  struct ADC3JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x5000048C, 32, ReadMode>
  {
    using JDATA4 = ADC3_JDR4_JDATA4_Values<ADC3::JDR4, 0, 16, ReadMode, ADC3JDR4Base> ;
    using FieldValues = ADC3_JDR4_JDATA4_Values<ADC3::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x5000048C, 32, ReadMode, ADC3JDR4Base, T...> ;

  struct ADC3AWD2CRBase {} ;

  struct AWD2CR : public RegisterBase<0x500004A0, 32, ReadWriteMode>
  {
    using AWD2CH = ADC3_AWD2CR_AWD2CH_Values<ADC3::AWD2CR, 1, 18, ReadWriteMode, ADC3AWD2CRBase> ;
    using FieldValues = ADC3_AWD2CR_AWD2CH_Values<ADC3::AWD2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD2CRPack  = Register<0x500004A0, 32, ReadWriteMode, ADC3AWD2CRBase, T...> ;

  struct ADC3AWD3CRBase {} ;

  struct AWD3CR : public RegisterBase<0x500004A4, 32, ReadWriteMode>
  {
    using AWD3CH = ADC3_AWD3CR_AWD3CH_Values<ADC3::AWD3CR, 1, 18, ReadWriteMode, ADC3AWD3CRBase> ;
    using FieldValues = ADC3_AWD3CR_AWD3CH_Values<ADC3::AWD3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD3CRPack  = Register<0x500004A4, 32, ReadWriteMode, ADC3AWD3CRBase, T...> ;

  struct ADC3DIFSELBase {} ;

  struct DIFSEL : public RegisterBase<0x500004B0, 32, ReadWriteMode>
  {
    using DIFSEL_1_15 = ADC3_DIFSEL_DIFSEL_1_15_Values<ADC3::DIFSEL, 1, 15, ReadWriteMode, ADC3DIFSELBase> ;
    using DIFSEL_16_18 = ADC3_DIFSEL_DIFSEL_16_18_Values<ADC3::DIFSEL, 16, 3, ReadMode, ADC3DIFSELBase> ;
    using FieldValues = ADC3_DIFSEL_DIFSEL_16_18_Values<ADC3::DIFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIFSELPack  = Register<0x500004B0, 32, ReadWriteMode, ADC3DIFSELBase, T...> ;

  struct ADC3CALFACTBase {} ;

  struct CALFACT : public RegisterBase<0x500004B4, 32, ReadWriteMode>
  {
    using CALFACT_D = ADC3_CALFACT_CALFACT_D_Values<ADC3::CALFACT, 16, 7, ReadWriteMode, ADC3CALFACTBase> ;
    using CALFACT_S = ADC3_CALFACT_CALFACT_S_Values<ADC3::CALFACT, 0, 7, ReadWriteMode, ADC3CALFACTBase> ;
    using FieldValues = ADC3_CALFACT_CALFACT_S_Values<ADC3::CALFACT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALFACTPack  = Register<0x500004B4, 32, ReadWriteMode, ADC3CALFACTBase, T...> ;

} ;

#endif //#if !defined(ADC3REGISTERS_HPP)
