/*******************************************************************************
* Filename      : adc4registers.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(ADC4REGISTERS_HPP)
#define ADC4REGISTERS_HPP

#include "adc4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC4
{
  struct ADC4ISRBase {} ;

  struct ISR : public RegisterBase<0x50000500, 32, ReadWriteMode>
  {
    using JQOVF = ADC4_ISR_JQOVF_Values<ADC4::ISR, 10, 1, ReadWriteMode, ADC4ISRBase> ;
    using AWD3 = ADC4_ISR_AWD3_Values<ADC4::ISR, 9, 1, ReadWriteMode, ADC4ISRBase> ;
    using AWD2 = ADC4_ISR_AWD2_Values<ADC4::ISR, 8, 1, ReadWriteMode, ADC4ISRBase> ;
    using AWD1 = ADC4_ISR_AWD1_Values<ADC4::ISR, 7, 1, ReadWriteMode, ADC4ISRBase> ;
    using JEOS = ADC4_ISR_JEOS_Values<ADC4::ISR, 6, 1, ReadWriteMode, ADC4ISRBase> ;
    using JEOC = ADC4_ISR_JEOC_Values<ADC4::ISR, 5, 1, ReadWriteMode, ADC4ISRBase> ;
    using OVR = ADC4_ISR_OVR_Values<ADC4::ISR, 4, 1, ReadWriteMode, ADC4ISRBase> ;
    using EOS = ADC4_ISR_EOS_Values<ADC4::ISR, 3, 1, ReadWriteMode, ADC4ISRBase> ;
    using EOC = ADC4_ISR_EOC_Values<ADC4::ISR, 2, 1, ReadWriteMode, ADC4ISRBase> ;
    using EOSMP = ADC4_ISR_EOSMP_Values<ADC4::ISR, 1, 1, ReadWriteMode, ADC4ISRBase> ;
    using ADRDY = ADC4_ISR_ADRDY_Values<ADC4::ISR, 0, 1, ReadWriteMode, ADC4ISRBase> ;
    using FieldValues = ADC4_ISR_ADRDY_Values<ADC4::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x50000500, 32, ReadWriteMode, ADC4ISRBase, T...> ;

  struct ADC4IERBase {} ;

  struct IER : public RegisterBase<0x50000504, 32, ReadWriteMode>
  {
    using JQOVFIE = ADC4_IER_JQOVFIE_Values<ADC4::IER, 10, 1, ReadWriteMode, ADC4IERBase> ;
    using AWD3IE = ADC4_IER_AWD3IE_Values<ADC4::IER, 9, 1, ReadWriteMode, ADC4IERBase> ;
    using AWD2IE = ADC4_IER_AWD2IE_Values<ADC4::IER, 8, 1, ReadWriteMode, ADC4IERBase> ;
    using AWD1IE = ADC4_IER_AWD1IE_Values<ADC4::IER, 7, 1, ReadWriteMode, ADC4IERBase> ;
    using JEOSIE = ADC4_IER_JEOSIE_Values<ADC4::IER, 6, 1, ReadWriteMode, ADC4IERBase> ;
    using JEOCIE = ADC4_IER_JEOCIE_Values<ADC4::IER, 5, 1, ReadWriteMode, ADC4IERBase> ;
    using OVRIE = ADC4_IER_OVRIE_Values<ADC4::IER, 4, 1, ReadWriteMode, ADC4IERBase> ;
    using EOSIE = ADC4_IER_EOSIE_Values<ADC4::IER, 3, 1, ReadWriteMode, ADC4IERBase> ;
    using EOCIE = ADC4_IER_EOCIE_Values<ADC4::IER, 2, 1, ReadWriteMode, ADC4IERBase> ;
    using EOSMPIE = ADC4_IER_EOSMPIE_Values<ADC4::IER, 1, 1, ReadWriteMode, ADC4IERBase> ;
    using ADRDYIE = ADC4_IER_ADRDYIE_Values<ADC4::IER, 0, 1, ReadWriteMode, ADC4IERBase> ;
    using FieldValues = ADC4_IER_ADRDYIE_Values<ADC4::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x50000504, 32, ReadWriteMode, ADC4IERBase, T...> ;

  struct ADC4CRBase {} ;

  struct CR : public RegisterBase<0x50000508, 32, ReadWriteMode>
  {
    using ADCAL = ADC4_CR_ADCAL_Values<ADC4::CR, 31, 1, ReadWriteMode, ADC4CRBase> ;
    using ADCALDIF = ADC4_CR_ADCALDIF_Values<ADC4::CR, 30, 1, ReadWriteMode, ADC4CRBase> ;
    using DEEPPWD = ADC4_CR_DEEPPWD_Values<ADC4::CR, 29, 1, ReadWriteMode, ADC4CRBase> ;
    using ADVREGEN = ADC4_CR_ADVREGEN_Values<ADC4::CR, 28, 1, ReadWriteMode, ADC4CRBase> ;
    using JADSTP = ADC4_CR_JADSTP_Values<ADC4::CR, 5, 1, ReadWriteMode, ADC4CRBase> ;
    using ADSTP = ADC4_CR_ADSTP_Values<ADC4::CR, 4, 1, ReadWriteMode, ADC4CRBase> ;
    using JADSTART = ADC4_CR_JADSTART_Values<ADC4::CR, 3, 1, ReadWriteMode, ADC4CRBase> ;
    using ADSTART = ADC4_CR_ADSTART_Values<ADC4::CR, 2, 1, ReadWriteMode, ADC4CRBase> ;
    using ADDIS = ADC4_CR_ADDIS_Values<ADC4::CR, 1, 1, ReadWriteMode, ADC4CRBase> ;
    using ADEN = ADC4_CR_ADEN_Values<ADC4::CR, 0, 1, ReadWriteMode, ADC4CRBase> ;
    using FieldValues = ADC4_CR_ADEN_Values<ADC4::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50000508, 32, ReadWriteMode, ADC4CRBase, T...> ;

  struct ADC4CFGRBase {} ;

  struct CFGR : public RegisterBase<0x5000050C, 32, ReadWriteMode>
  {
    using AWDCH1CH = ADC4_CFGR_AWDCH1CH_Values<ADC4::CFGR, 26, 5, ReadWriteMode, ADC4CFGRBase> ;
    using JAUTO = ADC4_CFGR_JAUTO_Values<ADC4::CFGR, 25, 1, ReadWriteMode, ADC4CFGRBase> ;
    using JAWD1EN = ADC4_CFGR_JAWD1EN_Values<ADC4::CFGR, 24, 1, ReadWriteMode, ADC4CFGRBase> ;
    using AWD1EN = ADC4_CFGR_AWD1EN_Values<ADC4::CFGR, 23, 1, ReadWriteMode, ADC4CFGRBase> ;
    using AWD1SGL = ADC4_CFGR_AWD1SGL_Values<ADC4::CFGR, 22, 1, ReadWriteMode, ADC4CFGRBase> ;
    using JQM = ADC4_CFGR_JQM_Values<ADC4::CFGR, 21, 1, ReadWriteMode, ADC4CFGRBase> ;
    using JDISCEN = ADC4_CFGR_JDISCEN_Values<ADC4::CFGR, 20, 1, ReadWriteMode, ADC4CFGRBase> ;
    using DISCNUM = ADC4_CFGR_DISCNUM_Values<ADC4::CFGR, 17, 3, ReadWriteMode, ADC4CFGRBase> ;
    using DISCEN = ADC4_CFGR_DISCEN_Values<ADC4::CFGR, 16, 1, ReadWriteMode, ADC4CFGRBase> ;
    using AUTOFF = ADC4_CFGR_AUTOFF_Values<ADC4::CFGR, 15, 1, ReadWriteMode, ADC4CFGRBase> ;
    using AUTDLY = ADC4_CFGR_AUTDLY_Values<ADC4::CFGR, 14, 1, ReadWriteMode, ADC4CFGRBase> ;
    using CONT = ADC4_CFGR_CONT_Values<ADC4::CFGR, 13, 1, ReadWriteMode, ADC4CFGRBase> ;
    using OVRMOD = ADC4_CFGR_OVRMOD_Values<ADC4::CFGR, 12, 1, ReadWriteMode, ADC4CFGRBase> ;
    using EXTEN = ADC4_CFGR_EXTEN_Values<ADC4::CFGR, 10, 2, ReadWriteMode, ADC4CFGRBase> ;
    using EXTSEL = ADC4_CFGR_EXTSEL_Values<ADC4::CFGR, 6, 4, ReadWriteMode, ADC4CFGRBase> ;
    using ALIGN = ADC4_CFGR_ALIGN_Values<ADC4::CFGR, 5, 1, ReadWriteMode, ADC4CFGRBase> ;
    using RES = ADC4_CFGR_RES_Values<ADC4::CFGR, 3, 2, ReadWriteMode, ADC4CFGRBase> ;
    using DMACFG = ADC4_CFGR_DMACFG_Values<ADC4::CFGR, 1, 1, ReadWriteMode, ADC4CFGRBase> ;
    using DMAEN = ADC4_CFGR_DMAEN_Values<ADC4::CFGR, 0, 1, ReadWriteMode, ADC4CFGRBase> ;
    using FieldValues = ADC4_CFGR_DMAEN_Values<ADC4::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x5000050C, 32, ReadWriteMode, ADC4CFGRBase, T...> ;

  struct ADC4SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x50000514, 32, ReadWriteMode>
  {
    using SMP9 = ADC4_SMPR1_SMP9_Values<ADC4::SMPR1, 27, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP8 = ADC4_SMPR1_SMP8_Values<ADC4::SMPR1, 24, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP7 = ADC4_SMPR1_SMP7_Values<ADC4::SMPR1, 21, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP6 = ADC4_SMPR1_SMP6_Values<ADC4::SMPR1, 18, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP5 = ADC4_SMPR1_SMP5_Values<ADC4::SMPR1, 15, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP4 = ADC4_SMPR1_SMP4_Values<ADC4::SMPR1, 12, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP3 = ADC4_SMPR1_SMP3_Values<ADC4::SMPR1, 9, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP2 = ADC4_SMPR1_SMP2_Values<ADC4::SMPR1, 6, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using SMP1 = ADC4_SMPR1_SMP1_Values<ADC4::SMPR1, 3, 3, ReadWriteMode, ADC4SMPR1Base> ;
    using FieldValues = ADC4_SMPR1_SMP1_Values<ADC4::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x50000514, 32, ReadWriteMode, ADC4SMPR1Base, T...> ;

  struct ADC4SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x50000518, 32, ReadWriteMode>
  {
    using SMP18 = ADC4_SMPR2_SMP18_Values<ADC4::SMPR2, 24, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP17 = ADC4_SMPR2_SMP17_Values<ADC4::SMPR2, 21, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP16 = ADC4_SMPR2_SMP16_Values<ADC4::SMPR2, 18, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP15 = ADC4_SMPR2_SMP15_Values<ADC4::SMPR2, 15, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP14 = ADC4_SMPR2_SMP14_Values<ADC4::SMPR2, 12, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP13 = ADC4_SMPR2_SMP13_Values<ADC4::SMPR2, 9, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP12 = ADC4_SMPR2_SMP12_Values<ADC4::SMPR2, 6, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP11 = ADC4_SMPR2_SMP11_Values<ADC4::SMPR2, 3, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using SMP10 = ADC4_SMPR2_SMP10_Values<ADC4::SMPR2, 0, 3, ReadWriteMode, ADC4SMPR2Base> ;
    using FieldValues = ADC4_SMPR2_SMP10_Values<ADC4::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x50000518, 32, ReadWriteMode, ADC4SMPR2Base, T...> ;

  struct ADC4TR1Base {} ;

  struct TR1 : public RegisterBase<0x50000520, 32, ReadWriteMode>
  {
    using HT1 = ADC4_TR1_HT1_Values<ADC4::TR1, 16, 12, ReadWriteMode, ADC4TR1Base> ;
    using LT1 = ADC4_TR1_LT1_Values<ADC4::TR1, 0, 12, ReadWriteMode, ADC4TR1Base> ;
    using FieldValues = ADC4_TR1_LT1_Values<ADC4::TR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR1Pack  = Register<0x50000520, 32, ReadWriteMode, ADC4TR1Base, T...> ;

  struct ADC4TR2Base {} ;

  struct TR2 : public RegisterBase<0x50000524, 32, ReadWriteMode>
  {
    using HT2 = ADC4_TR2_HT2_Values<ADC4::TR2, 16, 8, ReadWriteMode, ADC4TR2Base> ;
    using LT2 = ADC4_TR2_LT2_Values<ADC4::TR2, 0, 8, ReadWriteMode, ADC4TR2Base> ;
    using FieldValues = ADC4_TR2_LT2_Values<ADC4::TR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR2Pack  = Register<0x50000524, 32, ReadWriteMode, ADC4TR2Base, T...> ;

  struct ADC4TR3Base {} ;

  struct TR3 : public RegisterBase<0x50000528, 32, ReadWriteMode>
  {
    using HT3 = ADC4_TR3_HT3_Values<ADC4::TR3, 16, 8, ReadWriteMode, ADC4TR3Base> ;
    using LT3 = ADC4_TR3_LT3_Values<ADC4::TR3, 0, 8, ReadWriteMode, ADC4TR3Base> ;
    using FieldValues = ADC4_TR3_LT3_Values<ADC4::TR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR3Pack  = Register<0x50000528, 32, ReadWriteMode, ADC4TR3Base, T...> ;

  struct ADC4SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x50000530, 32, ReadWriteMode>
  {
    using SQ4 = ADC4_SQR1_SQ4_Values<ADC4::SQR1, 24, 5, ReadWriteMode, ADC4SQR1Base> ;
    using SQ3 = ADC4_SQR1_SQ3_Values<ADC4::SQR1, 18, 5, ReadWriteMode, ADC4SQR1Base> ;
    using SQ2 = ADC4_SQR1_SQ2_Values<ADC4::SQR1, 12, 5, ReadWriteMode, ADC4SQR1Base> ;
    using SQ1 = ADC4_SQR1_SQ1_Values<ADC4::SQR1, 6, 5, ReadWriteMode, ADC4SQR1Base> ;
    using L3 = ADC4_SQR1_L3_Values<ADC4::SQR1, 0, 4, ReadWriteMode, ADC4SQR1Base> ;
    using FieldValues = ADC4_SQR1_L3_Values<ADC4::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x50000530, 32, ReadWriteMode, ADC4SQR1Base, T...> ;

  struct ADC4SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x50000534, 32, ReadWriteMode>
  {
    using SQ9 = ADC4_SQR2_SQ9_Values<ADC4::SQR2, 24, 5, ReadWriteMode, ADC4SQR2Base> ;
    using SQ8 = ADC4_SQR2_SQ8_Values<ADC4::SQR2, 18, 5, ReadWriteMode, ADC4SQR2Base> ;
    using SQ7 = ADC4_SQR2_SQ7_Values<ADC4::SQR2, 12, 5, ReadWriteMode, ADC4SQR2Base> ;
    using SQ6 = ADC4_SQR2_SQ6_Values<ADC4::SQR2, 6, 5, ReadWriteMode, ADC4SQR2Base> ;
    using SQ5 = ADC4_SQR2_SQ5_Values<ADC4::SQR2, 0, 5, ReadWriteMode, ADC4SQR2Base> ;
    using FieldValues = ADC4_SQR2_SQ5_Values<ADC4::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x50000534, 32, ReadWriteMode, ADC4SQR2Base, T...> ;

  struct ADC4SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x50000538, 32, ReadWriteMode>
  {
    using SQ14 = ADC4_SQR3_SQ14_Values<ADC4::SQR3, 24, 5, ReadWriteMode, ADC4SQR3Base> ;
    using SQ13 = ADC4_SQR3_SQ13_Values<ADC4::SQR3, 18, 5, ReadWriteMode, ADC4SQR3Base> ;
    using SQ12 = ADC4_SQR3_SQ12_Values<ADC4::SQR3, 12, 5, ReadWriteMode, ADC4SQR3Base> ;
    using SQ11 = ADC4_SQR3_SQ11_Values<ADC4::SQR3, 6, 5, ReadWriteMode, ADC4SQR3Base> ;
    using SQ10 = ADC4_SQR3_SQ10_Values<ADC4::SQR3, 0, 5, ReadWriteMode, ADC4SQR3Base> ;
    using FieldValues = ADC4_SQR3_SQ10_Values<ADC4::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x50000538, 32, ReadWriteMode, ADC4SQR3Base, T...> ;

  struct ADC4SQR4Base {} ;

  struct SQR4 : public RegisterBase<0x5000053C, 32, ReadWriteMode>
  {
    using SQ16 = ADC4_SQR4_SQ16_Values<ADC4::SQR4, 6, 5, ReadWriteMode, ADC4SQR4Base> ;
    using SQ15 = ADC4_SQR4_SQ15_Values<ADC4::SQR4, 0, 5, ReadWriteMode, ADC4SQR4Base> ;
    using FieldValues = ADC4_SQR4_SQ15_Values<ADC4::SQR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR4Pack  = Register<0x5000053C, 32, ReadWriteMode, ADC4SQR4Base, T...> ;

  struct ADC4DRBase {} ;

  struct DR : public RegisterBase<0x50000540, 32, ReadMode>
  {
    using regularDATA = ADC4_DR_regularDATA_Values<ADC4::DR, 0, 16, ReadMode, ADC4DRBase> ;
    using FieldValues = ADC4_DR_regularDATA_Values<ADC4::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x50000540, 32, ReadMode, ADC4DRBase, T...> ;

  struct ADC4JSQRBase {} ;

  struct JSQR : public RegisterBase<0x5000054C, 32, ReadWriteMode>
  {
    using JSQ4 = ADC4_JSQR_JSQ4_Values<ADC4::JSQR, 26, 5, ReadWriteMode, ADC4JSQRBase> ;
    using JSQ3 = ADC4_JSQR_JSQ3_Values<ADC4::JSQR, 20, 5, ReadWriteMode, ADC4JSQRBase> ;
    using JSQ2 = ADC4_JSQR_JSQ2_Values<ADC4::JSQR, 14, 5, ReadWriteMode, ADC4JSQRBase> ;
    using JSQ1 = ADC4_JSQR_JSQ1_Values<ADC4::JSQR, 8, 5, ReadWriteMode, ADC4JSQRBase> ;
    using JEXTEN = ADC4_JSQR_JEXTEN_Values<ADC4::JSQR, 6, 2, ReadWriteMode, ADC4JSQRBase> ;
    using JEXTSEL = ADC4_JSQR_JEXTSEL_Values<ADC4::JSQR, 2, 4, ReadWriteMode, ADC4JSQRBase> ;
    using JL = ADC4_JSQR_JL_Values<ADC4::JSQR, 0, 2, ReadWriteMode, ADC4JSQRBase> ;
    using FieldValues = ADC4_JSQR_JL_Values<ADC4::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x5000054C, 32, ReadWriteMode, ADC4JSQRBase, T...> ;

  struct ADC4OFR1Base {} ;

  struct OFR1 : public RegisterBase<0x50000560, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC4_OFR1_OFFSET1_EN_Values<ADC4::OFR1, 31, 1, ReadWriteMode, ADC4OFR1Base> ;
    using OFFSET1_CH = ADC4_OFR1_OFFSET1_CH_Values<ADC4::OFR1, 26, 5, ReadWriteMode, ADC4OFR1Base> ;
    using OFFSET1 = ADC4_OFR1_OFFSET1_Values<ADC4::OFR1, 0, 12, ReadWriteMode, ADC4OFR1Base> ;
    using FieldValues = ADC4_OFR1_OFFSET1_Values<ADC4::OFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR1Pack  = Register<0x50000560, 32, ReadWriteMode, ADC4OFR1Base, T...> ;

  struct ADC4OFR2Base {} ;

  struct OFR2 : public RegisterBase<0x50000564, 32, ReadWriteMode>
  {
    using OFFSET2_EN = ADC4_OFR2_OFFSET2_EN_Values<ADC4::OFR2, 31, 1, ReadWriteMode, ADC4OFR2Base> ;
    using OFFSET2_CH = ADC4_OFR2_OFFSET2_CH_Values<ADC4::OFR2, 26, 5, ReadWriteMode, ADC4OFR2Base> ;
    using OFFSET2 = ADC4_OFR2_OFFSET2_Values<ADC4::OFR2, 0, 12, ReadWriteMode, ADC4OFR2Base> ;
    using FieldValues = ADC4_OFR2_OFFSET2_Values<ADC4::OFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR2Pack  = Register<0x50000564, 32, ReadWriteMode, ADC4OFR2Base, T...> ;

  struct ADC4OFR3Base {} ;

  struct OFR3 : public RegisterBase<0x50000568, 32, ReadWriteMode>
  {
    using OFFSET3_EN = ADC4_OFR3_OFFSET3_EN_Values<ADC4::OFR3, 31, 1, ReadWriteMode, ADC4OFR3Base> ;
    using OFFSET3_CH = ADC4_OFR3_OFFSET3_CH_Values<ADC4::OFR3, 26, 5, ReadWriteMode, ADC4OFR3Base> ;
    using OFFSET3 = ADC4_OFR3_OFFSET3_Values<ADC4::OFR3, 0, 12, ReadWriteMode, ADC4OFR3Base> ;
    using FieldValues = ADC4_OFR3_OFFSET3_Values<ADC4::OFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR3Pack  = Register<0x50000568, 32, ReadWriteMode, ADC4OFR3Base, T...> ;

  struct ADC4OFR4Base {} ;

  struct OFR4 : public RegisterBase<0x5000056C, 32, ReadWriteMode>
  {
    using OFFSET4_EN = ADC4_OFR4_OFFSET4_EN_Values<ADC4::OFR4, 31, 1, ReadWriteMode, ADC4OFR4Base> ;
    using OFFSET4_CH = ADC4_OFR4_OFFSET4_CH_Values<ADC4::OFR4, 26, 5, ReadWriteMode, ADC4OFR4Base> ;
    using OFFSET4 = ADC4_OFR4_OFFSET4_Values<ADC4::OFR4, 0, 12, ReadWriteMode, ADC4OFR4Base> ;
    using FieldValues = ADC4_OFR4_OFFSET4_Values<ADC4::OFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR4Pack  = Register<0x5000056C, 32, ReadWriteMode, ADC4OFR4Base, T...> ;

  struct ADC4JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x50000580, 32, ReadMode>
  {
    using JDATA1 = ADC4_JDR1_JDATA1_Values<ADC4::JDR1, 0, 16, ReadMode, ADC4JDR1Base> ;
    using FieldValues = ADC4_JDR1_JDATA1_Values<ADC4::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x50000580, 32, ReadMode, ADC4JDR1Base, T...> ;

  struct ADC4JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x50000584, 32, ReadMode>
  {
    using JDATA2 = ADC4_JDR2_JDATA2_Values<ADC4::JDR2, 0, 16, ReadMode, ADC4JDR2Base> ;
    using FieldValues = ADC4_JDR2_JDATA2_Values<ADC4::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x50000584, 32, ReadMode, ADC4JDR2Base, T...> ;

  struct ADC4JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x50000588, 32, ReadMode>
  {
    using JDATA3 = ADC4_JDR3_JDATA3_Values<ADC4::JDR3, 0, 16, ReadMode, ADC4JDR3Base> ;
    using FieldValues = ADC4_JDR3_JDATA3_Values<ADC4::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x50000588, 32, ReadMode, ADC4JDR3Base, T...> ;

  struct ADC4JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x5000058C, 32, ReadMode>
  {
    using JDATA4 = ADC4_JDR4_JDATA4_Values<ADC4::JDR4, 0, 16, ReadMode, ADC4JDR4Base> ;
    using FieldValues = ADC4_JDR4_JDATA4_Values<ADC4::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x5000058C, 32, ReadMode, ADC4JDR4Base, T...> ;

  struct ADC4AWD2CRBase {} ;

  struct AWD2CR : public RegisterBase<0x500005A0, 32, ReadWriteMode>
  {
    using AWD2CH = ADC4_AWD2CR_AWD2CH_Values<ADC4::AWD2CR, 1, 18, ReadWriteMode, ADC4AWD2CRBase> ;
    using FieldValues = ADC4_AWD2CR_AWD2CH_Values<ADC4::AWD2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD2CRPack  = Register<0x500005A0, 32, ReadWriteMode, ADC4AWD2CRBase, T...> ;

  struct ADC4AWD3CRBase {} ;

  struct AWD3CR : public RegisterBase<0x500005A4, 32, ReadWriteMode>
  {
    using AWD3CH = ADC4_AWD3CR_AWD3CH_Values<ADC4::AWD3CR, 1, 18, ReadWriteMode, ADC4AWD3CRBase> ;
    using FieldValues = ADC4_AWD3CR_AWD3CH_Values<ADC4::AWD3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD3CRPack  = Register<0x500005A4, 32, ReadWriteMode, ADC4AWD3CRBase, T...> ;

  struct ADC4DIFSELBase {} ;

  struct DIFSEL : public RegisterBase<0x500005B0, 32, ReadWriteMode>
  {
    using DIFSEL_1_15 = ADC4_DIFSEL_DIFSEL_1_15_Values<ADC4::DIFSEL, 1, 15, ReadWriteMode, ADC4DIFSELBase> ;
    using DIFSEL_16_18 = ADC4_DIFSEL_DIFSEL_16_18_Values<ADC4::DIFSEL, 16, 3, ReadMode, ADC4DIFSELBase> ;
    using FieldValues = ADC4_DIFSEL_DIFSEL_16_18_Values<ADC4::DIFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIFSELPack  = Register<0x500005B0, 32, ReadWriteMode, ADC4DIFSELBase, T...> ;

  struct ADC4CALFACTBase {} ;

  struct CALFACT : public RegisterBase<0x500005B4, 32, ReadWriteMode>
  {
    using CALFACT_D = ADC4_CALFACT_CALFACT_D_Values<ADC4::CALFACT, 16, 7, ReadWriteMode, ADC4CALFACTBase> ;
    using CALFACT_S = ADC4_CALFACT_CALFACT_S_Values<ADC4::CALFACT, 0, 7, ReadWriteMode, ADC4CALFACTBase> ;
    using FieldValues = ADC4_CALFACT_CALFACT_S_Values<ADC4::CALFACT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALFACTPack  = Register<0x500005B4, 32, ReadWriteMode, ADC4CALFACTBase, T...> ;

} ;

#endif //#if !defined(ADC4REGISTERS_HPP)
