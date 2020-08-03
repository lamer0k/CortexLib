/*******************************************************************************
* Filename      : adcregisters.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(ADCREGISTERS_HPP)
#define ADCREGISTERS_HPP

#include "adcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC
{
  struct ADCISRBase {} ;

  struct ISR : public RegisterBase<0x50040000, 32, ReadWriteMode>
  {
    using JQOVF = ADC_ISR_JQOVF_Values<ADC::ISR, 10, 1, ReadWriteMode, ADCISRBase> ;
    using AWD3 = ADC_ISR_AWD3_Values<ADC::ISR, 9, 1, ReadWriteMode, ADCISRBase> ;
    using AWD2 = ADC_ISR_AWD2_Values<ADC::ISR, 8, 1, ReadWriteMode, ADCISRBase> ;
    using AWD1 = ADC_ISR_AWD1_Values<ADC::ISR, 7, 1, ReadWriteMode, ADCISRBase> ;
    using JEOS = ADC_ISR_JEOS_Values<ADC::ISR, 6, 1, ReadWriteMode, ADCISRBase> ;
    using JEOC = ADC_ISR_JEOC_Values<ADC::ISR, 5, 1, ReadWriteMode, ADCISRBase> ;
    using OVR = ADC_ISR_OVR_Values<ADC::ISR, 4, 1, ReadWriteMode, ADCISRBase> ;
    using EOS = ADC_ISR_EOS_Values<ADC::ISR, 3, 1, ReadWriteMode, ADCISRBase> ;
    using EOC = ADC_ISR_EOC_Values<ADC::ISR, 2, 1, ReadWriteMode, ADCISRBase> ;
    using EOSMP = ADC_ISR_EOSMP_Values<ADC::ISR, 1, 1, ReadWriteMode, ADCISRBase> ;
    using ADRDY = ADC_ISR_ADRDY_Values<ADC::ISR, 0, 1, ReadWriteMode, ADCISRBase> ;
    using FieldValues = ADC_ISR_ADRDY_Values<ADC::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x50040000, 32, ReadWriteMode, ADCISRBase, T...> ;

  struct ADCIERBase {} ;

  struct IER : public RegisterBase<0x50040004, 32, ReadWriteMode>
  {
    using JQOVFIE = ADC_IER_JQOVFIE_Values<ADC::IER, 10, 1, ReadWriteMode, ADCIERBase> ;
    using AWD3IE = ADC_IER_AWD3IE_Values<ADC::IER, 9, 1, ReadWriteMode, ADCIERBase> ;
    using AWD2IE = ADC_IER_AWD2IE_Values<ADC::IER, 8, 1, ReadWriteMode, ADCIERBase> ;
    using AWD1IE = ADC_IER_AWD1IE_Values<ADC::IER, 7, 1, ReadWriteMode, ADCIERBase> ;
    using JEOSIE = ADC_IER_JEOSIE_Values<ADC::IER, 6, 1, ReadWriteMode, ADCIERBase> ;
    using JEOCIE = ADC_IER_JEOCIE_Values<ADC::IER, 5, 1, ReadWriteMode, ADCIERBase> ;
    using OVRIE = ADC_IER_OVRIE_Values<ADC::IER, 4, 1, ReadWriteMode, ADCIERBase> ;
    using EOSIE = ADC_IER_EOSIE_Values<ADC::IER, 3, 1, ReadWriteMode, ADCIERBase> ;
    using EOCIE = ADC_IER_EOCIE_Values<ADC::IER, 2, 1, ReadWriteMode, ADCIERBase> ;
    using EOSMPIE = ADC_IER_EOSMPIE_Values<ADC::IER, 1, 1, ReadWriteMode, ADCIERBase> ;
    using ADRDYIE = ADC_IER_ADRDYIE_Values<ADC::IER, 0, 1, ReadWriteMode, ADCIERBase> ;
    using FieldValues = ADC_IER_ADRDYIE_Values<ADC::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x50040004, 32, ReadWriteMode, ADCIERBase, T...> ;

  struct ADCCRBase {} ;

  struct CR : public RegisterBase<0x50040008, 32, ReadWriteMode>
  {
    using ADCAL = ADC_CR_ADCAL_Values<ADC::CR, 31, 1, ReadWriteMode, ADCCRBase> ;
    using ADCALDIF = ADC_CR_ADCALDIF_Values<ADC::CR, 30, 1, ReadWriteMode, ADCCRBase> ;
    using DEEPPWD = ADC_CR_DEEPPWD_Values<ADC::CR, 29, 1, ReadWriteMode, ADCCRBase> ;
    using ADVREGEN = ADC_CR_ADVREGEN_Values<ADC::CR, 28, 1, ReadWriteMode, ADCCRBase> ;
    using JADSTP = ADC_CR_JADSTP_Values<ADC::CR, 5, 1, ReadWriteMode, ADCCRBase> ;
    using ADSTP = ADC_CR_ADSTP_Values<ADC::CR, 4, 1, ReadWriteMode, ADCCRBase> ;
    using JADSTART = ADC_CR_JADSTART_Values<ADC::CR, 3, 1, ReadWriteMode, ADCCRBase> ;
    using ADSTART = ADC_CR_ADSTART_Values<ADC::CR, 2, 1, ReadWriteMode, ADCCRBase> ;
    using ADDIS = ADC_CR_ADDIS_Values<ADC::CR, 1, 1, ReadWriteMode, ADCCRBase> ;
    using ADEN = ADC_CR_ADEN_Values<ADC::CR, 0, 1, ReadWriteMode, ADCCRBase> ;
    using FieldValues = ADC_CR_ADEN_Values<ADC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50040008, 32, ReadWriteMode, ADCCRBase, T...> ;

  struct ADCCFGRBase {} ;

  struct CFGR : public RegisterBase<0x5004000C, 32, ReadWriteMode>
  {
    using AWDCH1CH = ADC_CFGR_AWDCH1CH_Values<ADC::CFGR, 26, 5, ReadWriteMode, ADCCFGRBase> ;
    using JAUTO = ADC_CFGR_JAUTO_Values<ADC::CFGR, 25, 1, ReadWriteMode, ADCCFGRBase> ;
    using JAWD1EN = ADC_CFGR_JAWD1EN_Values<ADC::CFGR, 24, 1, ReadWriteMode, ADCCFGRBase> ;
    using AWD1EN = ADC_CFGR_AWD1EN_Values<ADC::CFGR, 23, 1, ReadWriteMode, ADCCFGRBase> ;
    using AWD1SGL = ADC_CFGR_AWD1SGL_Values<ADC::CFGR, 22, 1, ReadWriteMode, ADCCFGRBase> ;
    using JQM = ADC_CFGR_JQM_Values<ADC::CFGR, 21, 1, ReadWriteMode, ADCCFGRBase> ;
    using JDISCEN = ADC_CFGR_JDISCEN_Values<ADC::CFGR, 20, 1, ReadWriteMode, ADCCFGRBase> ;
    using DISCNUM = ADC_CFGR_DISCNUM_Values<ADC::CFGR, 17, 3, ReadWriteMode, ADCCFGRBase> ;
    using DISCEN = ADC_CFGR_DISCEN_Values<ADC::CFGR, 16, 1, ReadWriteMode, ADCCFGRBase> ;
    using AUTOFF = ADC_CFGR_AUTOFF_Values<ADC::CFGR, 15, 1, ReadWriteMode, ADCCFGRBase> ;
    using AUTDLY = ADC_CFGR_AUTDLY_Values<ADC::CFGR, 14, 1, ReadWriteMode, ADCCFGRBase> ;
    using CONT = ADC_CFGR_CONT_Values<ADC::CFGR, 13, 1, ReadWriteMode, ADCCFGRBase> ;
    using OVRMOD = ADC_CFGR_OVRMOD_Values<ADC::CFGR, 12, 1, ReadWriteMode, ADCCFGRBase> ;
    using EXTEN = ADC_CFGR_EXTEN_Values<ADC::CFGR, 10, 2, ReadWriteMode, ADCCFGRBase> ;
    using EXTSEL = ADC_CFGR_EXTSEL_Values<ADC::CFGR, 6, 4, ReadWriteMode, ADCCFGRBase> ;
    using ALIGN = ADC_CFGR_ALIGN_Values<ADC::CFGR, 5, 1, ReadWriteMode, ADCCFGRBase> ;
    using RES = ADC_CFGR_RES_Values<ADC::CFGR, 3, 2, ReadWriteMode, ADCCFGRBase> ;
    using DMACFG = ADC_CFGR_DMACFG_Values<ADC::CFGR, 1, 1, ReadWriteMode, ADCCFGRBase> ;
    using DMAEN = ADC_CFGR_DMAEN_Values<ADC::CFGR, 0, 1, ReadWriteMode, ADCCFGRBase> ;
    using FieldValues = ADC_CFGR_DMAEN_Values<ADC::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x5004000C, 32, ReadWriteMode, ADCCFGRBase, T...> ;

  struct ADCCFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x50040010, 32, ReadWriteMode>
  {
    using ROVSM = ADC_CFGR2_ROVSM_Values<ADC::CFGR2, 10, 1, ReadWriteMode, ADCCFGR2Base> ;
    using TOVS = ADC_CFGR2_TOVS_Values<ADC::CFGR2, 9, 1, ReadWriteMode, ADCCFGR2Base> ;
    using OVSS = ADC_CFGR2_OVSS_Values<ADC::CFGR2, 5, 4, ReadWriteMode, ADCCFGR2Base> ;
    using OVSR = ADC_CFGR2_OVSR_Values<ADC::CFGR2, 2, 3, ReadWriteMode, ADCCFGR2Base> ;
    using JOVSE = ADC_CFGR2_JOVSE_Values<ADC::CFGR2, 1, 1, ReadWriteMode, ADCCFGR2Base> ;
    using ROVSE = ADC_CFGR2_ROVSE_Values<ADC::CFGR2, 0, 1, ReadWriteMode, ADCCFGR2Base> ;
    using FieldValues = ADC_CFGR2_ROVSE_Values<ADC::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x50040010, 32, ReadWriteMode, ADCCFGR2Base, T...> ;

  struct ADCSMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x50040014, 32, ReadWriteMode>
  {
    using SMP9 = ADC_SMPR1_SMP9_Values<ADC::SMPR1, 27, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP8 = ADC_SMPR1_SMP8_Values<ADC::SMPR1, 24, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP7 = ADC_SMPR1_SMP7_Values<ADC::SMPR1, 21, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP6 = ADC_SMPR1_SMP6_Values<ADC::SMPR1, 18, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP5 = ADC_SMPR1_SMP5_Values<ADC::SMPR1, 15, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP4 = ADC_SMPR1_SMP4_Values<ADC::SMPR1, 12, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP3 = ADC_SMPR1_SMP3_Values<ADC::SMPR1, 9, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP2 = ADC_SMPR1_SMP2_Values<ADC::SMPR1, 6, 3, ReadWriteMode, ADCSMPR1Base> ;
    using SMP1 = ADC_SMPR1_SMP1_Values<ADC::SMPR1, 3, 3, ReadWriteMode, ADCSMPR1Base> ;
    using FieldValues = ADC_SMPR1_SMP1_Values<ADC::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x50040014, 32, ReadWriteMode, ADCSMPR1Base, T...> ;

  struct ADCSMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x50040018, 32, ReadWriteMode>
  {
    using SMP18 = ADC_SMPR2_SMP18_Values<ADC::SMPR2, 24, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP17 = ADC_SMPR2_SMP17_Values<ADC::SMPR2, 21, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP16 = ADC_SMPR2_SMP16_Values<ADC::SMPR2, 18, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP15 = ADC_SMPR2_SMP15_Values<ADC::SMPR2, 15, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP14 = ADC_SMPR2_SMP14_Values<ADC::SMPR2, 12, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP13 = ADC_SMPR2_SMP13_Values<ADC::SMPR2, 9, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP12 = ADC_SMPR2_SMP12_Values<ADC::SMPR2, 6, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP11 = ADC_SMPR2_SMP11_Values<ADC::SMPR2, 3, 3, ReadWriteMode, ADCSMPR2Base> ;
    using SMP10 = ADC_SMPR2_SMP10_Values<ADC::SMPR2, 0, 3, ReadWriteMode, ADCSMPR2Base> ;
    using FieldValues = ADC_SMPR2_SMP10_Values<ADC::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x50040018, 32, ReadWriteMode, ADCSMPR2Base, T...> ;

  struct ADCTR1Base {} ;

  struct TR1 : public RegisterBase<0x50040020, 32, ReadWriteMode>
  {
    using HT1 = ADC_TR1_HT1_Values<ADC::TR1, 16, 12, ReadWriteMode, ADCTR1Base> ;
    using LT1 = ADC_TR1_LT1_Values<ADC::TR1, 0, 12, ReadWriteMode, ADCTR1Base> ;
    using FieldValues = ADC_TR1_LT1_Values<ADC::TR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR1Pack  = Register<0x50040020, 32, ReadWriteMode, ADCTR1Base, T...> ;

  struct ADCTR2Base {} ;

  struct TR2 : public RegisterBase<0x50040024, 32, ReadWriteMode>
  {
    using HT2 = ADC_TR2_HT2_Values<ADC::TR2, 16, 8, ReadWriteMode, ADCTR2Base> ;
    using LT2 = ADC_TR2_LT2_Values<ADC::TR2, 0, 8, ReadWriteMode, ADCTR2Base> ;
    using FieldValues = ADC_TR2_LT2_Values<ADC::TR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR2Pack  = Register<0x50040024, 32, ReadWriteMode, ADCTR2Base, T...> ;

  struct ADCTR3Base {} ;

  struct TR3 : public RegisterBase<0x50040028, 32, ReadWriteMode>
  {
    using HT3 = ADC_TR3_HT3_Values<ADC::TR3, 16, 8, ReadWriteMode, ADCTR3Base> ;
    using LT3 = ADC_TR3_LT3_Values<ADC::TR3, 0, 8, ReadWriteMode, ADCTR3Base> ;
    using FieldValues = ADC_TR3_LT3_Values<ADC::TR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR3Pack  = Register<0x50040028, 32, ReadWriteMode, ADCTR3Base, T...> ;

  struct ADCSQR1Base {} ;

  struct SQR1 : public RegisterBase<0x50040030, 32, ReadWriteMode>
  {
    using SQ4 = ADC_SQR1_SQ4_Values<ADC::SQR1, 24, 5, ReadWriteMode, ADCSQR1Base> ;
    using SQ3 = ADC_SQR1_SQ3_Values<ADC::SQR1, 18, 5, ReadWriteMode, ADCSQR1Base> ;
    using SQ2 = ADC_SQR1_SQ2_Values<ADC::SQR1, 12, 5, ReadWriteMode, ADCSQR1Base> ;
    using SQ1 = ADC_SQR1_SQ1_Values<ADC::SQR1, 6, 5, ReadWriteMode, ADCSQR1Base> ;
    using L3 = ADC_SQR1_L3_Values<ADC::SQR1, 0, 4, ReadWriteMode, ADCSQR1Base> ;
    using FieldValues = ADC_SQR1_L3_Values<ADC::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x50040030, 32, ReadWriteMode, ADCSQR1Base, T...> ;

  struct ADCSQR2Base {} ;

  struct SQR2 : public RegisterBase<0x50040034, 32, ReadWriteMode>
  {
    using SQ9 = ADC_SQR2_SQ9_Values<ADC::SQR2, 24, 5, ReadWriteMode, ADCSQR2Base> ;
    using SQ8 = ADC_SQR2_SQ8_Values<ADC::SQR2, 18, 5, ReadWriteMode, ADCSQR2Base> ;
    using SQ7 = ADC_SQR2_SQ7_Values<ADC::SQR2, 12, 5, ReadWriteMode, ADCSQR2Base> ;
    using SQ6 = ADC_SQR2_SQ6_Values<ADC::SQR2, 6, 5, ReadWriteMode, ADCSQR2Base> ;
    using SQ5 = ADC_SQR2_SQ5_Values<ADC::SQR2, 0, 5, ReadWriteMode, ADCSQR2Base> ;
    using FieldValues = ADC_SQR2_SQ5_Values<ADC::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x50040034, 32, ReadWriteMode, ADCSQR2Base, T...> ;

  struct ADCSQR3Base {} ;

  struct SQR3 : public RegisterBase<0x50040038, 32, ReadWriteMode>
  {
    using SQ14 = ADC_SQR3_SQ14_Values<ADC::SQR3, 24, 5, ReadWriteMode, ADCSQR3Base> ;
    using SQ13 = ADC_SQR3_SQ13_Values<ADC::SQR3, 18, 5, ReadWriteMode, ADCSQR3Base> ;
    using SQ12 = ADC_SQR3_SQ12_Values<ADC::SQR3, 12, 5, ReadWriteMode, ADCSQR3Base> ;
    using SQ11 = ADC_SQR3_SQ11_Values<ADC::SQR3, 6, 5, ReadWriteMode, ADCSQR3Base> ;
    using SQ10 = ADC_SQR3_SQ10_Values<ADC::SQR3, 0, 5, ReadWriteMode, ADCSQR3Base> ;
    using FieldValues = ADC_SQR3_SQ10_Values<ADC::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x50040038, 32, ReadWriteMode, ADCSQR3Base, T...> ;

  struct ADCSQR4Base {} ;

  struct SQR4 : public RegisterBase<0x5004003C, 32, ReadWriteMode>
  {
    using SQ16 = ADC_SQR4_SQ16_Values<ADC::SQR4, 6, 5, ReadWriteMode, ADCSQR4Base> ;
    using SQ15 = ADC_SQR4_SQ15_Values<ADC::SQR4, 0, 5, ReadWriteMode, ADCSQR4Base> ;
    using FieldValues = ADC_SQR4_SQ15_Values<ADC::SQR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR4Pack  = Register<0x5004003C, 32, ReadWriteMode, ADCSQR4Base, T...> ;

  struct ADCDRBase {} ;

  struct DR : public RegisterBase<0x50040040, 32, ReadMode>
  {
    using regularDATA = ADC_DR_regularDATA_Values<ADC::DR, 0, 16, ReadMode, ADCDRBase> ;
    using FieldValues = ADC_DR_regularDATA_Values<ADC::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x50040040, 32, ReadMode, ADCDRBase, T...> ;

  struct ADCJSQRBase {} ;

  struct JSQR : public RegisterBase<0x5004004C, 32, ReadWriteMode>
  {
    using JSQ4 = ADC_JSQR_JSQ4_Values<ADC::JSQR, 26, 5, ReadWriteMode, ADCJSQRBase> ;
    using JSQ3 = ADC_JSQR_JSQ3_Values<ADC::JSQR, 20, 5, ReadWriteMode, ADCJSQRBase> ;
    using JSQ2 = ADC_JSQR_JSQ2_Values<ADC::JSQR, 14, 5, ReadWriteMode, ADCJSQRBase> ;
    using JSQ1 = ADC_JSQR_JSQ1_Values<ADC::JSQR, 8, 5, ReadWriteMode, ADCJSQRBase> ;
    using JEXTEN = ADC_JSQR_JEXTEN_Values<ADC::JSQR, 6, 2, ReadWriteMode, ADCJSQRBase> ;
    using JEXTSEL = ADC_JSQR_JEXTSEL_Values<ADC::JSQR, 2, 4, ReadWriteMode, ADCJSQRBase> ;
    using JL = ADC_JSQR_JL_Values<ADC::JSQR, 0, 2, ReadWriteMode, ADCJSQRBase> ;
    using FieldValues = ADC_JSQR_JL_Values<ADC::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x5004004C, 32, ReadWriteMode, ADCJSQRBase, T...> ;

  struct ADCOFR1Base {} ;

  struct OFR1 : public RegisterBase<0x50040060, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC_OFR1_OFFSET1_EN_Values<ADC::OFR1, 31, 1, ReadWriteMode, ADCOFR1Base> ;
    using OFFSET1_CH = ADC_OFR1_OFFSET1_CH_Values<ADC::OFR1, 26, 5, ReadWriteMode, ADCOFR1Base> ;
    using OFFSET1 = ADC_OFR1_OFFSET1_Values<ADC::OFR1, 0, 12, ReadWriteMode, ADCOFR1Base> ;
    using FieldValues = ADC_OFR1_OFFSET1_Values<ADC::OFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR1Pack  = Register<0x50040060, 32, ReadWriteMode, ADCOFR1Base, T...> ;

  struct ADCOFR2Base {} ;

  struct OFR2 : public RegisterBase<0x50040064, 32, ReadWriteMode>
  {
    using OFFSET2_EN = ADC_OFR2_OFFSET2_EN_Values<ADC::OFR2, 31, 1, ReadWriteMode, ADCOFR2Base> ;
    using OFFSET2_CH = ADC_OFR2_OFFSET2_CH_Values<ADC::OFR2, 26, 5, ReadWriteMode, ADCOFR2Base> ;
    using OFFSET2 = ADC_OFR2_OFFSET2_Values<ADC::OFR2, 0, 12, ReadWriteMode, ADCOFR2Base> ;
    using FieldValues = ADC_OFR2_OFFSET2_Values<ADC::OFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR2Pack  = Register<0x50040064, 32, ReadWriteMode, ADCOFR2Base, T...> ;

  struct ADCOFR3Base {} ;

  struct OFR3 : public RegisterBase<0x50040068, 32, ReadWriteMode>
  {
    using OFFSET3_EN = ADC_OFR3_OFFSET3_EN_Values<ADC::OFR3, 31, 1, ReadWriteMode, ADCOFR3Base> ;
    using OFFSET3_CH = ADC_OFR3_OFFSET3_CH_Values<ADC::OFR3, 26, 5, ReadWriteMode, ADCOFR3Base> ;
    using OFFSET3 = ADC_OFR3_OFFSET3_Values<ADC::OFR3, 0, 12, ReadWriteMode, ADCOFR3Base> ;
    using FieldValues = ADC_OFR3_OFFSET3_Values<ADC::OFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR3Pack  = Register<0x50040068, 32, ReadWriteMode, ADCOFR3Base, T...> ;

  struct ADCOFR4Base {} ;

  struct OFR4 : public RegisterBase<0x5004006C, 32, ReadWriteMode>
  {
    using OFFSET4_EN = ADC_OFR4_OFFSET4_EN_Values<ADC::OFR4, 31, 1, ReadWriteMode, ADCOFR4Base> ;
    using OFFSET4_CH = ADC_OFR4_OFFSET4_CH_Values<ADC::OFR4, 26, 5, ReadWriteMode, ADCOFR4Base> ;
    using OFFSET4 = ADC_OFR4_OFFSET4_Values<ADC::OFR4, 0, 12, ReadWriteMode, ADCOFR4Base> ;
    using FieldValues = ADC_OFR4_OFFSET4_Values<ADC::OFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR4Pack  = Register<0x5004006C, 32, ReadWriteMode, ADCOFR4Base, T...> ;

  struct ADCJDR1Base {} ;

  struct JDR1 : public RegisterBase<0x50040080, 32, ReadMode>
  {
    using JDATA1 = ADC_JDR1_JDATA1_Values<ADC::JDR1, 0, 16, ReadMode, ADCJDR1Base> ;
    using FieldValues = ADC_JDR1_JDATA1_Values<ADC::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x50040080, 32, ReadMode, ADCJDR1Base, T...> ;

  struct ADCJDR2Base {} ;

  struct JDR2 : public RegisterBase<0x50040084, 32, ReadMode>
  {
    using JDATA2 = ADC_JDR2_JDATA2_Values<ADC::JDR2, 0, 16, ReadMode, ADCJDR2Base> ;
    using FieldValues = ADC_JDR2_JDATA2_Values<ADC::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x50040084, 32, ReadMode, ADCJDR2Base, T...> ;

  struct ADCJDR3Base {} ;

  struct JDR3 : public RegisterBase<0x50040088, 32, ReadMode>
  {
    using JDATA3 = ADC_JDR3_JDATA3_Values<ADC::JDR3, 0, 16, ReadMode, ADCJDR3Base> ;
    using FieldValues = ADC_JDR3_JDATA3_Values<ADC::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x50040088, 32, ReadMode, ADCJDR3Base, T...> ;

  struct ADCJDR4Base {} ;

  struct JDR4 : public RegisterBase<0x5004008C, 32, ReadMode>
  {
    using JDATA4 = ADC_JDR4_JDATA4_Values<ADC::JDR4, 0, 16, ReadMode, ADCJDR4Base> ;
    using FieldValues = ADC_JDR4_JDATA4_Values<ADC::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x5004008C, 32, ReadMode, ADCJDR4Base, T...> ;

  struct ADCAWD2CRBase {} ;

  struct AWD2CR : public RegisterBase<0x500400A0, 32, ReadWriteMode>
  {
    using AWD2CH = ADC_AWD2CR_AWD2CH_Values<ADC::AWD2CR, 1, 18, ReadWriteMode, ADCAWD2CRBase> ;
    using FieldValues = ADC_AWD2CR_AWD2CH_Values<ADC::AWD2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD2CRPack  = Register<0x500400A0, 32, ReadWriteMode, ADCAWD2CRBase, T...> ;

  struct ADCAWD3CRBase {} ;

  struct AWD3CR : public RegisterBase<0x500400A4, 32, ReadWriteMode>
  {
    using AWD3CH = ADC_AWD3CR_AWD3CH_Values<ADC::AWD3CR, 1, 18, ReadWriteMode, ADCAWD3CRBase> ;
    using FieldValues = ADC_AWD3CR_AWD3CH_Values<ADC::AWD3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD3CRPack  = Register<0x500400A4, 32, ReadWriteMode, ADCAWD3CRBase, T...> ;

  struct ADCDIFSELBase {} ;

  struct DIFSEL : public RegisterBase<0x500400B0, 32, ReadWriteMode>
  {
    using DIFSEL_1_15 = ADC_DIFSEL_DIFSEL_1_15_Values<ADC::DIFSEL, 1, 15, ReadWriteMode, ADCDIFSELBase> ;
    using DIFSEL_16_18 = ADC_DIFSEL_DIFSEL_16_18_Values<ADC::DIFSEL, 16, 3, ReadMode, ADCDIFSELBase> ;
    using FieldValues = ADC_DIFSEL_DIFSEL_16_18_Values<ADC::DIFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIFSELPack  = Register<0x500400B0, 32, ReadWriteMode, ADCDIFSELBase, T...> ;

  struct ADCCALFACTBase {} ;

  struct CALFACT : public RegisterBase<0x500400B4, 32, ReadWriteMode>
  {
    using CALFACT_D = ADC_CALFACT_CALFACT_D_Values<ADC::CALFACT, 16, 7, ReadWriteMode, ADCCALFACTBase> ;
    using CALFACT_S = ADC_CALFACT_CALFACT_S_Values<ADC::CALFACT, 0, 7, ReadWriteMode, ADCCALFACTBase> ;
    using FieldValues = ADC_CALFACT_CALFACT_S_Values<ADC::CALFACT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALFACTPack  = Register<0x500400B4, 32, ReadWriteMode, ADCCALFACTBase, T...> ;

} ;

#endif //#if !defined(ADCREGISTERS_HPP)
