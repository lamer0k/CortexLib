/*******************************************************************************
* Filename      : adc2registers.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(ADC2REGISTERS_HPP)
#define ADC2REGISTERS_HPP

#include "adc2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC2
{
  struct ADC2ISRBase {} ;

  struct ISR : public RegisterBase<0x50000100, 32, ReadWriteMode>
  {
    using JQOVF = ADC2_ISR_JQOVF_Values<ADC2::ISR, 10, 1, ReadWriteMode, ADC2ISRBase> ;
    using AWD3 = ADC2_ISR_AWD3_Values<ADC2::ISR, 9, 1, ReadWriteMode, ADC2ISRBase> ;
    using AWD2 = ADC2_ISR_AWD2_Values<ADC2::ISR, 8, 1, ReadWriteMode, ADC2ISRBase> ;
    using AWD1 = ADC2_ISR_AWD1_Values<ADC2::ISR, 7, 1, ReadWriteMode, ADC2ISRBase> ;
    using JEOS = ADC2_ISR_JEOS_Values<ADC2::ISR, 6, 1, ReadWriteMode, ADC2ISRBase> ;
    using JEOC = ADC2_ISR_JEOC_Values<ADC2::ISR, 5, 1, ReadWriteMode, ADC2ISRBase> ;
    using OVR = ADC2_ISR_OVR_Values<ADC2::ISR, 4, 1, ReadWriteMode, ADC2ISRBase> ;
    using EOS = ADC2_ISR_EOS_Values<ADC2::ISR, 3, 1, ReadWriteMode, ADC2ISRBase> ;
    using EOC = ADC2_ISR_EOC_Values<ADC2::ISR, 2, 1, ReadWriteMode, ADC2ISRBase> ;
    using EOSMP = ADC2_ISR_EOSMP_Values<ADC2::ISR, 1, 1, ReadWriteMode, ADC2ISRBase> ;
    using ADRDY = ADC2_ISR_ADRDY_Values<ADC2::ISR, 0, 1, ReadWriteMode, ADC2ISRBase> ;
    using FieldValues = ADC2_ISR_ADRDY_Values<ADC2::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x50000100, 32, ReadWriteMode, ADC2ISRBase, T...> ;

  struct ADC2IERBase {} ;

  struct IER : public RegisterBase<0x50000104, 32, ReadWriteMode>
  {
    using JQOVFIE = ADC2_IER_JQOVFIE_Values<ADC2::IER, 10, 1, ReadWriteMode, ADC2IERBase> ;
    using AWD3IE = ADC2_IER_AWD3IE_Values<ADC2::IER, 9, 1, ReadWriteMode, ADC2IERBase> ;
    using AWD2IE = ADC2_IER_AWD2IE_Values<ADC2::IER, 8, 1, ReadWriteMode, ADC2IERBase> ;
    using AWD1IE = ADC2_IER_AWD1IE_Values<ADC2::IER, 7, 1, ReadWriteMode, ADC2IERBase> ;
    using JEOSIE = ADC2_IER_JEOSIE_Values<ADC2::IER, 6, 1, ReadWriteMode, ADC2IERBase> ;
    using JEOCIE = ADC2_IER_JEOCIE_Values<ADC2::IER, 5, 1, ReadWriteMode, ADC2IERBase> ;
    using OVRIE = ADC2_IER_OVRIE_Values<ADC2::IER, 4, 1, ReadWriteMode, ADC2IERBase> ;
    using EOSIE = ADC2_IER_EOSIE_Values<ADC2::IER, 3, 1, ReadWriteMode, ADC2IERBase> ;
    using EOCIE = ADC2_IER_EOCIE_Values<ADC2::IER, 2, 1, ReadWriteMode, ADC2IERBase> ;
    using EOSMPIE = ADC2_IER_EOSMPIE_Values<ADC2::IER, 1, 1, ReadWriteMode, ADC2IERBase> ;
    using ADRDYIE = ADC2_IER_ADRDYIE_Values<ADC2::IER, 0, 1, ReadWriteMode, ADC2IERBase> ;
    using FieldValues = ADC2_IER_ADRDYIE_Values<ADC2::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x50000104, 32, ReadWriteMode, ADC2IERBase, T...> ;

  struct ADC2CRBase {} ;

  struct CR : public RegisterBase<0x50000108, 32, ReadWriteMode>
  {
    using ADCAL = ADC2_CR_ADCAL_Values<ADC2::CR, 31, 1, ReadWriteMode, ADC2CRBase> ;
    using ADCALDIF = ADC2_CR_ADCALDIF_Values<ADC2::CR, 30, 1, ReadWriteMode, ADC2CRBase> ;
    using DEEPPWD = ADC2_CR_DEEPPWD_Values<ADC2::CR, 29, 1, ReadWriteMode, ADC2CRBase> ;
    using ADVREGEN = ADC2_CR_ADVREGEN_Values<ADC2::CR, 28, 1, ReadWriteMode, ADC2CRBase> ;
    using JADSTP = ADC2_CR_JADSTP_Values<ADC2::CR, 5, 1, ReadWriteMode, ADC2CRBase> ;
    using ADSTP = ADC2_CR_ADSTP_Values<ADC2::CR, 4, 1, ReadWriteMode, ADC2CRBase> ;
    using JADSTART = ADC2_CR_JADSTART_Values<ADC2::CR, 3, 1, ReadWriteMode, ADC2CRBase> ;
    using ADSTART = ADC2_CR_ADSTART_Values<ADC2::CR, 2, 1, ReadWriteMode, ADC2CRBase> ;
    using ADDIS = ADC2_CR_ADDIS_Values<ADC2::CR, 1, 1, ReadWriteMode, ADC2CRBase> ;
    using ADEN = ADC2_CR_ADEN_Values<ADC2::CR, 0, 1, ReadWriteMode, ADC2CRBase> ;
    using FieldValues = ADC2_CR_ADEN_Values<ADC2::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50000108, 32, ReadWriteMode, ADC2CRBase, T...> ;

  struct ADC2CFGRBase {} ;

  struct CFGR : public RegisterBase<0x5000010C, 32, ReadWriteMode>
  {
    using AWDCH1CH = ADC2_CFGR_AWDCH1CH_Values<ADC2::CFGR, 26, 5, ReadWriteMode, ADC2CFGRBase> ;
    using JAUTO = ADC2_CFGR_JAUTO_Values<ADC2::CFGR, 25, 1, ReadWriteMode, ADC2CFGRBase> ;
    using JAWD1EN = ADC2_CFGR_JAWD1EN_Values<ADC2::CFGR, 24, 1, ReadWriteMode, ADC2CFGRBase> ;
    using AWD1EN = ADC2_CFGR_AWD1EN_Values<ADC2::CFGR, 23, 1, ReadWriteMode, ADC2CFGRBase> ;
    using AWD1SGL = ADC2_CFGR_AWD1SGL_Values<ADC2::CFGR, 22, 1, ReadWriteMode, ADC2CFGRBase> ;
    using JQM = ADC2_CFGR_JQM_Values<ADC2::CFGR, 21, 1, ReadWriteMode, ADC2CFGRBase> ;
    using JDISCEN = ADC2_CFGR_JDISCEN_Values<ADC2::CFGR, 20, 1, ReadWriteMode, ADC2CFGRBase> ;
    using DISCNUM = ADC2_CFGR_DISCNUM_Values<ADC2::CFGR, 17, 3, ReadWriteMode, ADC2CFGRBase> ;
    using DISCEN = ADC2_CFGR_DISCEN_Values<ADC2::CFGR, 16, 1, ReadWriteMode, ADC2CFGRBase> ;
    using AUTOFF = ADC2_CFGR_AUTOFF_Values<ADC2::CFGR, 15, 1, ReadWriteMode, ADC2CFGRBase> ;
    using AUTDLY = ADC2_CFGR_AUTDLY_Values<ADC2::CFGR, 14, 1, ReadWriteMode, ADC2CFGRBase> ;
    using CONT = ADC2_CFGR_CONT_Values<ADC2::CFGR, 13, 1, ReadWriteMode, ADC2CFGRBase> ;
    using OVRMOD = ADC2_CFGR_OVRMOD_Values<ADC2::CFGR, 12, 1, ReadWriteMode, ADC2CFGRBase> ;
    using EXTEN = ADC2_CFGR_EXTEN_Values<ADC2::CFGR, 10, 2, ReadWriteMode, ADC2CFGRBase> ;
    using EXTSEL = ADC2_CFGR_EXTSEL_Values<ADC2::CFGR, 6, 4, ReadWriteMode, ADC2CFGRBase> ;
    using ALIGN = ADC2_CFGR_ALIGN_Values<ADC2::CFGR, 5, 1, ReadWriteMode, ADC2CFGRBase> ;
    using RES = ADC2_CFGR_RES_Values<ADC2::CFGR, 3, 2, ReadWriteMode, ADC2CFGRBase> ;
    using DMACFG = ADC2_CFGR_DMACFG_Values<ADC2::CFGR, 1, 1, ReadWriteMode, ADC2CFGRBase> ;
    using DMAEN = ADC2_CFGR_DMAEN_Values<ADC2::CFGR, 0, 1, ReadWriteMode, ADC2CFGRBase> ;
    using FieldValues = ADC2_CFGR_DMAEN_Values<ADC2::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x5000010C, 32, ReadWriteMode, ADC2CFGRBase, T...> ;

  struct ADC2SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x50000114, 32, ReadWriteMode>
  {
    using SMP9 = ADC2_SMPR1_SMP9_Values<ADC2::SMPR1, 27, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP8 = ADC2_SMPR1_SMP8_Values<ADC2::SMPR1, 24, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP7 = ADC2_SMPR1_SMP7_Values<ADC2::SMPR1, 21, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP6 = ADC2_SMPR1_SMP6_Values<ADC2::SMPR1, 18, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP5 = ADC2_SMPR1_SMP5_Values<ADC2::SMPR1, 15, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP4 = ADC2_SMPR1_SMP4_Values<ADC2::SMPR1, 12, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP3 = ADC2_SMPR1_SMP3_Values<ADC2::SMPR1, 9, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP2 = ADC2_SMPR1_SMP2_Values<ADC2::SMPR1, 6, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP1 = ADC2_SMPR1_SMP1_Values<ADC2::SMPR1, 3, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using FieldValues = ADC2_SMPR1_SMP1_Values<ADC2::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x50000114, 32, ReadWriteMode, ADC2SMPR1Base, T...> ;

  struct ADC2SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x50000118, 32, ReadWriteMode>
  {
    using SMP18 = ADC2_SMPR2_SMP18_Values<ADC2::SMPR2, 24, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP17 = ADC2_SMPR2_SMP17_Values<ADC2::SMPR2, 21, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP16 = ADC2_SMPR2_SMP16_Values<ADC2::SMPR2, 18, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP15 = ADC2_SMPR2_SMP15_Values<ADC2::SMPR2, 15, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP14 = ADC2_SMPR2_SMP14_Values<ADC2::SMPR2, 12, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP13 = ADC2_SMPR2_SMP13_Values<ADC2::SMPR2, 9, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP12 = ADC2_SMPR2_SMP12_Values<ADC2::SMPR2, 6, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP11 = ADC2_SMPR2_SMP11_Values<ADC2::SMPR2, 3, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP10 = ADC2_SMPR2_SMP10_Values<ADC2::SMPR2, 0, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using FieldValues = ADC2_SMPR2_SMP10_Values<ADC2::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x50000118, 32, ReadWriteMode, ADC2SMPR2Base, T...> ;

  struct ADC2TR1Base {} ;

  struct TR1 : public RegisterBase<0x50000120, 32, ReadWriteMode>
  {
    using HT1 = ADC2_TR1_HT1_Values<ADC2::TR1, 16, 12, ReadWriteMode, ADC2TR1Base> ;
    using LT1 = ADC2_TR1_LT1_Values<ADC2::TR1, 0, 12, ReadWriteMode, ADC2TR1Base> ;
    using FieldValues = ADC2_TR1_LT1_Values<ADC2::TR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR1Pack  = Register<0x50000120, 32, ReadWriteMode, ADC2TR1Base, T...> ;

  struct ADC2TR2Base {} ;

  struct TR2 : public RegisterBase<0x50000124, 32, ReadWriteMode>
  {
    using HT2 = ADC2_TR2_HT2_Values<ADC2::TR2, 16, 8, ReadWriteMode, ADC2TR2Base> ;
    using LT2 = ADC2_TR2_LT2_Values<ADC2::TR2, 0, 8, ReadWriteMode, ADC2TR2Base> ;
    using FieldValues = ADC2_TR2_LT2_Values<ADC2::TR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR2Pack  = Register<0x50000124, 32, ReadWriteMode, ADC2TR2Base, T...> ;

  struct ADC2TR3Base {} ;

  struct TR3 : public RegisterBase<0x50000128, 32, ReadWriteMode>
  {
    using HT3 = ADC2_TR3_HT3_Values<ADC2::TR3, 16, 8, ReadWriteMode, ADC2TR3Base> ;
    using LT3 = ADC2_TR3_LT3_Values<ADC2::TR3, 0, 8, ReadWriteMode, ADC2TR3Base> ;
    using FieldValues = ADC2_TR3_LT3_Values<ADC2::TR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR3Pack  = Register<0x50000128, 32, ReadWriteMode, ADC2TR3Base, T...> ;

  struct ADC2SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x50000130, 32, ReadWriteMode>
  {
    using SQ4 = ADC2_SQR1_SQ4_Values<ADC2::SQR1, 24, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ3 = ADC2_SQR1_SQ3_Values<ADC2::SQR1, 18, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ2 = ADC2_SQR1_SQ2_Values<ADC2::SQR1, 12, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ1 = ADC2_SQR1_SQ1_Values<ADC2::SQR1, 6, 5, ReadWriteMode, ADC2SQR1Base> ;
    using L3 = ADC2_SQR1_L3_Values<ADC2::SQR1, 0, 4, ReadWriteMode, ADC2SQR1Base> ;
    using FieldValues = ADC2_SQR1_L3_Values<ADC2::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x50000130, 32, ReadWriteMode, ADC2SQR1Base, T...> ;

  struct ADC2SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x50000134, 32, ReadWriteMode>
  {
    using SQ9 = ADC2_SQR2_SQ9_Values<ADC2::SQR2, 24, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ8 = ADC2_SQR2_SQ8_Values<ADC2::SQR2, 18, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ7 = ADC2_SQR2_SQ7_Values<ADC2::SQR2, 12, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ6 = ADC2_SQR2_SQ6_Values<ADC2::SQR2, 6, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ5 = ADC2_SQR2_SQ5_Values<ADC2::SQR2, 0, 5, ReadWriteMode, ADC2SQR2Base> ;
    using FieldValues = ADC2_SQR2_SQ5_Values<ADC2::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x50000134, 32, ReadWriteMode, ADC2SQR2Base, T...> ;

  struct ADC2SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x50000138, 32, ReadWriteMode>
  {
    using SQ14 = ADC2_SQR3_SQ14_Values<ADC2::SQR3, 24, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ13 = ADC2_SQR3_SQ13_Values<ADC2::SQR3, 18, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ12 = ADC2_SQR3_SQ12_Values<ADC2::SQR3, 12, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ11 = ADC2_SQR3_SQ11_Values<ADC2::SQR3, 6, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ10 = ADC2_SQR3_SQ10_Values<ADC2::SQR3, 0, 5, ReadWriteMode, ADC2SQR3Base> ;
    using FieldValues = ADC2_SQR3_SQ10_Values<ADC2::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x50000138, 32, ReadWriteMode, ADC2SQR3Base, T...> ;

  struct ADC2SQR4Base {} ;

  struct SQR4 : public RegisterBase<0x5000013C, 32, ReadWriteMode>
  {
    using SQ16 = ADC2_SQR4_SQ16_Values<ADC2::SQR4, 6, 5, ReadWriteMode, ADC2SQR4Base> ;
    using SQ15 = ADC2_SQR4_SQ15_Values<ADC2::SQR4, 0, 5, ReadWriteMode, ADC2SQR4Base> ;
    using FieldValues = ADC2_SQR4_SQ15_Values<ADC2::SQR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR4Pack  = Register<0x5000013C, 32, ReadWriteMode, ADC2SQR4Base, T...> ;

  struct ADC2DRBase {} ;

  struct DR : public RegisterBase<0x50000140, 32, ReadMode>
  {
    using regularDATA = ADC2_DR_regularDATA_Values<ADC2::DR, 0, 16, ReadMode, ADC2DRBase> ;
    using FieldValues = ADC2_DR_regularDATA_Values<ADC2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x50000140, 32, ReadMode, ADC2DRBase, T...> ;

  struct ADC2JSQRBase {} ;

  struct JSQR : public RegisterBase<0x5000014C, 32, ReadWriteMode>
  {
    using JSQ4 = ADC2_JSQR_JSQ4_Values<ADC2::JSQR, 26, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ3 = ADC2_JSQR_JSQ3_Values<ADC2::JSQR, 20, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ2 = ADC2_JSQR_JSQ2_Values<ADC2::JSQR, 14, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ1 = ADC2_JSQR_JSQ1_Values<ADC2::JSQR, 8, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JEXTEN = ADC2_JSQR_JEXTEN_Values<ADC2::JSQR, 6, 2, ReadWriteMode, ADC2JSQRBase> ;
    using JEXTSEL = ADC2_JSQR_JEXTSEL_Values<ADC2::JSQR, 2, 4, ReadWriteMode, ADC2JSQRBase> ;
    using JL = ADC2_JSQR_JL_Values<ADC2::JSQR, 0, 2, ReadWriteMode, ADC2JSQRBase> ;
    using FieldValues = ADC2_JSQR_JL_Values<ADC2::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x5000014C, 32, ReadWriteMode, ADC2JSQRBase, T...> ;

  struct ADC2OFR1Base {} ;

  struct OFR1 : public RegisterBase<0x50000160, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC2_OFR1_OFFSET1_EN_Values<ADC2::OFR1, 31, 1, ReadWriteMode, ADC2OFR1Base> ;
    using OFFSET1_CH = ADC2_OFR1_OFFSET1_CH_Values<ADC2::OFR1, 26, 5, ReadWriteMode, ADC2OFR1Base> ;
    using OFFSET1 = ADC2_OFR1_OFFSET1_Values<ADC2::OFR1, 0, 12, ReadWriteMode, ADC2OFR1Base> ;
    using FieldValues = ADC2_OFR1_OFFSET1_Values<ADC2::OFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR1Pack  = Register<0x50000160, 32, ReadWriteMode, ADC2OFR1Base, T...> ;

  struct ADC2OFR2Base {} ;

  struct OFR2 : public RegisterBase<0x50000164, 32, ReadWriteMode>
  {
    using OFFSET2_EN = ADC2_OFR2_OFFSET2_EN_Values<ADC2::OFR2, 31, 1, ReadWriteMode, ADC2OFR2Base> ;
    using OFFSET2_CH = ADC2_OFR2_OFFSET2_CH_Values<ADC2::OFR2, 26, 5, ReadWriteMode, ADC2OFR2Base> ;
    using OFFSET2 = ADC2_OFR2_OFFSET2_Values<ADC2::OFR2, 0, 12, ReadWriteMode, ADC2OFR2Base> ;
    using FieldValues = ADC2_OFR2_OFFSET2_Values<ADC2::OFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR2Pack  = Register<0x50000164, 32, ReadWriteMode, ADC2OFR2Base, T...> ;

  struct ADC2OFR3Base {} ;

  struct OFR3 : public RegisterBase<0x50000168, 32, ReadWriteMode>
  {
    using OFFSET3_EN = ADC2_OFR3_OFFSET3_EN_Values<ADC2::OFR3, 31, 1, ReadWriteMode, ADC2OFR3Base> ;
    using OFFSET3_CH = ADC2_OFR3_OFFSET3_CH_Values<ADC2::OFR3, 26, 5, ReadWriteMode, ADC2OFR3Base> ;
    using OFFSET3 = ADC2_OFR3_OFFSET3_Values<ADC2::OFR3, 0, 12, ReadWriteMode, ADC2OFR3Base> ;
    using FieldValues = ADC2_OFR3_OFFSET3_Values<ADC2::OFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR3Pack  = Register<0x50000168, 32, ReadWriteMode, ADC2OFR3Base, T...> ;

  struct ADC2OFR4Base {} ;

  struct OFR4 : public RegisterBase<0x5000016C, 32, ReadWriteMode>
  {
    using OFFSET4_EN = ADC2_OFR4_OFFSET4_EN_Values<ADC2::OFR4, 31, 1, ReadWriteMode, ADC2OFR4Base> ;
    using OFFSET4_CH = ADC2_OFR4_OFFSET4_CH_Values<ADC2::OFR4, 26, 5, ReadWriteMode, ADC2OFR4Base> ;
    using OFFSET4 = ADC2_OFR4_OFFSET4_Values<ADC2::OFR4, 0, 12, ReadWriteMode, ADC2OFR4Base> ;
    using FieldValues = ADC2_OFR4_OFFSET4_Values<ADC2::OFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR4Pack  = Register<0x5000016C, 32, ReadWriteMode, ADC2OFR4Base, T...> ;

  struct ADC2JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x50000180, 32, ReadMode>
  {
    using JDATA1 = ADC2_JDR1_JDATA1_Values<ADC2::JDR1, 0, 16, ReadMode, ADC2JDR1Base> ;
    using FieldValues = ADC2_JDR1_JDATA1_Values<ADC2::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x50000180, 32, ReadMode, ADC2JDR1Base, T...> ;

  struct ADC2JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x50000184, 32, ReadMode>
  {
    using JDATA2 = ADC2_JDR2_JDATA2_Values<ADC2::JDR2, 0, 16, ReadMode, ADC2JDR2Base> ;
    using FieldValues = ADC2_JDR2_JDATA2_Values<ADC2::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x50000184, 32, ReadMode, ADC2JDR2Base, T...> ;

  struct ADC2JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x50000188, 32, ReadMode>
  {
    using JDATA3 = ADC2_JDR3_JDATA3_Values<ADC2::JDR3, 0, 16, ReadMode, ADC2JDR3Base> ;
    using FieldValues = ADC2_JDR3_JDATA3_Values<ADC2::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x50000188, 32, ReadMode, ADC2JDR3Base, T...> ;

  struct ADC2JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x5000018C, 32, ReadMode>
  {
    using JDATA4 = ADC2_JDR4_JDATA4_Values<ADC2::JDR4, 0, 16, ReadMode, ADC2JDR4Base> ;
    using FieldValues = ADC2_JDR4_JDATA4_Values<ADC2::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x5000018C, 32, ReadMode, ADC2JDR4Base, T...> ;

  struct ADC2AWD2CRBase {} ;

  struct AWD2CR : public RegisterBase<0x500001A0, 32, ReadWriteMode>
  {
    using AWD2CH = ADC2_AWD2CR_AWD2CH_Values<ADC2::AWD2CR, 1, 18, ReadWriteMode, ADC2AWD2CRBase> ;
    using FieldValues = ADC2_AWD2CR_AWD2CH_Values<ADC2::AWD2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD2CRPack  = Register<0x500001A0, 32, ReadWriteMode, ADC2AWD2CRBase, T...> ;

  struct ADC2AWD3CRBase {} ;

  struct AWD3CR : public RegisterBase<0x500001A4, 32, ReadWriteMode>
  {
    using AWD3CH = ADC2_AWD3CR_AWD3CH_Values<ADC2::AWD3CR, 1, 18, ReadWriteMode, ADC2AWD3CRBase> ;
    using FieldValues = ADC2_AWD3CR_AWD3CH_Values<ADC2::AWD3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD3CRPack  = Register<0x500001A4, 32, ReadWriteMode, ADC2AWD3CRBase, T...> ;

  struct ADC2DIFSELBase {} ;

  struct DIFSEL : public RegisterBase<0x500001B0, 32, ReadWriteMode>
  {
    using DIFSEL_1_15 = ADC2_DIFSEL_DIFSEL_1_15_Values<ADC2::DIFSEL, 1, 15, ReadWriteMode, ADC2DIFSELBase> ;
    using DIFSEL_16_18 = ADC2_DIFSEL_DIFSEL_16_18_Values<ADC2::DIFSEL, 16, 3, ReadMode, ADC2DIFSELBase> ;
    using FieldValues = ADC2_DIFSEL_DIFSEL_16_18_Values<ADC2::DIFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIFSELPack  = Register<0x500001B0, 32, ReadWriteMode, ADC2DIFSELBase, T...> ;

  struct ADC2CALFACTBase {} ;

  struct CALFACT : public RegisterBase<0x500001B4, 32, ReadWriteMode>
  {
    using CALFACT_D = ADC2_CALFACT_CALFACT_D_Values<ADC2::CALFACT, 16, 7, ReadWriteMode, ADC2CALFACTBase> ;
    using CALFACT_S = ADC2_CALFACT_CALFACT_S_Values<ADC2::CALFACT, 0, 7, ReadWriteMode, ADC2CALFACTBase> ;
    using FieldValues = ADC2_CALFACT_CALFACT_S_Values<ADC2::CALFACT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALFACTPack  = Register<0x500001B4, 32, ReadWriteMode, ADC2CALFACTBase, T...> ;

} ;

#endif //#if !defined(ADC2REGISTERS_HPP)
