/*******************************************************************************
* Filename      : adcregisters.hpp
*
* Details       : Analog-to-digital converter. This header file is
*                 auto-generated for STM32F0x1 device.
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

  struct ISR : public RegisterBase<0x40012400, 32, ReadWriteMode>
  {
    using AWD = ADC_ISR_AWD_Values<ADC::ISR, 7, 1, ReadWriteMode, ADCISRBase> ;
    using OVR = ADC_ISR_OVR_Values<ADC::ISR, 4, 1, ReadWriteMode, ADCISRBase> ;
    using EOS = ADC_ISR_EOS_Values<ADC::ISR, 3, 1, ReadWriteMode, ADCISRBase> ;
    using EOC = ADC_ISR_EOC_Values<ADC::ISR, 2, 1, ReadWriteMode, ADCISRBase> ;
    using EOSMP = ADC_ISR_EOSMP_Values<ADC::ISR, 1, 1, ReadWriteMode, ADCISRBase> ;
    using ADRDY = ADC_ISR_ADRDY_Values<ADC::ISR, 0, 1, ReadWriteMode, ADCISRBase> ;
    using FieldValues = ADC_ISR_ADRDY_Values<ADC::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40012400, 32, ReadWriteMode, ADCISRBase, T...> ;

  struct ADCIERBase {} ;

  struct IER : public RegisterBase<0x40012404, 32, ReadWriteMode>
  {
    using AWDIE = ADC_IER_AWDIE_Values<ADC::IER, 7, 1, ReadWriteMode, ADCIERBase> ;
    using OVRIE = ADC_IER_OVRIE_Values<ADC::IER, 4, 1, ReadWriteMode, ADCIERBase> ;
    using EOSIE = ADC_IER_EOSIE_Values<ADC::IER, 3, 1, ReadWriteMode, ADCIERBase> ;
    using EOCIE = ADC_IER_EOCIE_Values<ADC::IER, 2, 1, ReadWriteMode, ADCIERBase> ;
    using EOSMPIE = ADC_IER_EOSMPIE_Values<ADC::IER, 1, 1, ReadWriteMode, ADCIERBase> ;
    using ADRDYIE = ADC_IER_ADRDYIE_Values<ADC::IER, 0, 1, ReadWriteMode, ADCIERBase> ;
    using FieldValues = ADC_IER_ADRDYIE_Values<ADC::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40012404, 32, ReadWriteMode, ADCIERBase, T...> ;

  struct ADCCRBase {} ;

  struct CR : public RegisterBase<0x40012408, 32, ReadWriteMode>
  {
    using ADCAL = ADC_CR_ADCAL_Values<ADC::CR, 31, 1, ReadWriteMode, ADCCRBase> ;
    using ADSTP = ADC_CR_ADSTP_Values<ADC::CR, 4, 1, ReadWriteMode, ADCCRBase> ;
    using ADSTART = ADC_CR_ADSTART_Values<ADC::CR, 2, 1, ReadWriteMode, ADCCRBase> ;
    using ADDIS = ADC_CR_ADDIS_Values<ADC::CR, 1, 1, ReadWriteMode, ADCCRBase> ;
    using ADEN = ADC_CR_ADEN_Values<ADC::CR, 0, 1, ReadWriteMode, ADCCRBase> ;
    using FieldValues = ADC_CR_ADEN_Values<ADC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40012408, 32, ReadWriteMode, ADCCRBase, T...> ;

  struct ADCCFGR1Base {} ;

  struct CFGR1 : public RegisterBase<0x4001240C, 32, ReadWriteMode>
  {
    using AWDCH = ADC_CFGR1_AWDCH_Values<ADC::CFGR1, 26, 5, ReadWriteMode, ADCCFGR1Base> ;
    using AWDEN = ADC_CFGR1_AWDEN_Values<ADC::CFGR1, 23, 1, ReadWriteMode, ADCCFGR1Base> ;
    using AWDSGL = ADC_CFGR1_AWDSGL_Values<ADC::CFGR1, 22, 1, ReadWriteMode, ADCCFGR1Base> ;
    using DISCEN = ADC_CFGR1_DISCEN_Values<ADC::CFGR1, 16, 1, ReadWriteMode, ADCCFGR1Base> ;
    using AUTOFF = ADC_CFGR1_AUTOFF_Values<ADC::CFGR1, 15, 1, ReadWriteMode, ADCCFGR1Base> ;
    using AUTDLY = ADC_CFGR1_AUTDLY_Values<ADC::CFGR1, 14, 1, ReadWriteMode, ADCCFGR1Base> ;
    using CONT = ADC_CFGR1_CONT_Values<ADC::CFGR1, 13, 1, ReadWriteMode, ADCCFGR1Base> ;
    using OVRMOD = ADC_CFGR1_OVRMOD_Values<ADC::CFGR1, 12, 1, ReadWriteMode, ADCCFGR1Base> ;
    using EXTEN = ADC_CFGR1_EXTEN_Values<ADC::CFGR1, 10, 2, ReadWriteMode, ADCCFGR1Base> ;
    using EXTSEL = ADC_CFGR1_EXTSEL_Values<ADC::CFGR1, 6, 3, ReadWriteMode, ADCCFGR1Base> ;
    using ALIGN = ADC_CFGR1_ALIGN_Values<ADC::CFGR1, 5, 1, ReadWriteMode, ADCCFGR1Base> ;
    using RES = ADC_CFGR1_RES_Values<ADC::CFGR1, 3, 2, ReadWriteMode, ADCCFGR1Base> ;
    using SCANDIR = ADC_CFGR1_SCANDIR_Values<ADC::CFGR1, 2, 1, ReadWriteMode, ADCCFGR1Base> ;
    using DMACFG = ADC_CFGR1_DMACFG_Values<ADC::CFGR1, 1, 1, ReadWriteMode, ADCCFGR1Base> ;
    using DMAEN = ADC_CFGR1_DMAEN_Values<ADC::CFGR1, 0, 1, ReadWriteMode, ADCCFGR1Base> ;
    using FieldValues = ADC_CFGR1_DMAEN_Values<ADC::CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR1Pack  = Register<0x4001240C, 32, ReadWriteMode, ADCCFGR1Base, T...> ;

  struct ADCCFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x40012410, 32, ReadWriteMode>
  {
    using JITOFF_D4 = ADC_CFGR2_JITOFF_D4_Values<ADC::CFGR2, 31, 1, ReadWriteMode, ADCCFGR2Base> ;
    using JITOFF_D2 = ADC_CFGR2_JITOFF_D2_Values<ADC::CFGR2, 30, 1, ReadWriteMode, ADCCFGR2Base> ;
    using FieldValues = ADC_CFGR2_JITOFF_D2_Values<ADC::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x40012410, 32, ReadWriteMode, ADCCFGR2Base, T...> ;

  struct ADCSMPRBase {} ;

  struct SMPR : public RegisterBase<0x40012414, 32, ReadWriteMode>
  {
    using SMPRField = ADC_SMPR_SMPR_Values<ADC::SMPR, 0, 3, ReadWriteMode, ADCSMPRBase> ;
    using FieldValues = ADC_SMPR_SMPR_Values<ADC::SMPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPRPack  = Register<0x40012414, 32, ReadWriteMode, ADCSMPRBase, T...> ;

  struct ADCTRBase {} ;

  struct TR : public RegisterBase<0x40012420, 32, ReadWriteMode>
  {
    using HT = ADC_TR_HT_Values<ADC::TR, 16, 12, ReadWriteMode, ADCTRBase> ;
    using LT = ADC_TR_LT_Values<ADC::TR, 0, 12, ReadWriteMode, ADCTRBase> ;
    using FieldValues = ADC_TR_LT_Values<ADC::TR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TRPack  = Register<0x40012420, 32, ReadWriteMode, ADCTRBase, T...> ;

  struct ADCCHSELRBase {} ;

  struct CHSELR : public RegisterBase<0x40012428, 32, ReadWriteMode>
  {
    using CHSEL18 = ADC_CHSELR_CHSEL18_Values<ADC::CHSELR, 18, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL17 = ADC_CHSELR_CHSEL17_Values<ADC::CHSELR, 17, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL16 = ADC_CHSELR_CHSEL16_Values<ADC::CHSELR, 16, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL15 = ADC_CHSELR_CHSEL15_Values<ADC::CHSELR, 15, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL14 = ADC_CHSELR_CHSEL14_Values<ADC::CHSELR, 14, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL13 = ADC_CHSELR_CHSEL13_Values<ADC::CHSELR, 13, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL12 = ADC_CHSELR_CHSEL12_Values<ADC::CHSELR, 12, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL11 = ADC_CHSELR_CHSEL11_Values<ADC::CHSELR, 11, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL10 = ADC_CHSELR_CHSEL10_Values<ADC::CHSELR, 10, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL9 = ADC_CHSELR_CHSEL9_Values<ADC::CHSELR, 9, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL8 = ADC_CHSELR_CHSEL8_Values<ADC::CHSELR, 8, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL7 = ADC_CHSELR_CHSEL7_Values<ADC::CHSELR, 7, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL6 = ADC_CHSELR_CHSEL6_Values<ADC::CHSELR, 6, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL5 = ADC_CHSELR_CHSEL5_Values<ADC::CHSELR, 5, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL4 = ADC_CHSELR_CHSEL4_Values<ADC::CHSELR, 4, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL3 = ADC_CHSELR_CHSEL3_Values<ADC::CHSELR, 3, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL2 = ADC_CHSELR_CHSEL2_Values<ADC::CHSELR, 2, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL1 = ADC_CHSELR_CHSEL1_Values<ADC::CHSELR, 1, 1, ReadWriteMode, ADCCHSELRBase> ;
    using CHSEL0 = ADC_CHSELR_CHSEL0_Values<ADC::CHSELR, 0, 1, ReadWriteMode, ADCCHSELRBase> ;
    using FieldValues = ADC_CHSELR_CHSEL0_Values<ADC::CHSELR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHSELRPack  = Register<0x40012428, 32, ReadWriteMode, ADCCHSELRBase, T...> ;

  struct ADCDRBase {} ;

  struct DR : public RegisterBase<0x40012440, 32, ReadMode>
  {
    using DATA = ADC_DR_DATA_Values<ADC::DR, 0, 16, ReadMode, ADCDRBase> ;
    using FieldValues = ADC_DR_DATA_Values<ADC::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40012440, 32, ReadMode, ADCDRBase, T...> ;

  struct ADCCCRBase {} ;

  struct CCR : public RegisterBase<0x40012708, 32, ReadWriteMode>
  {
    using VBATEN = ADC_CCR_VBATEN_Values<ADC::CCR, 24, 1, ReadWriteMode, ADCCCRBase> ;
    using TSEN = ADC_CCR_TSEN_Values<ADC::CCR, 23, 1, ReadWriteMode, ADCCCRBase> ;
    using VREFEN = ADC_CCR_VREFEN_Values<ADC::CCR, 22, 1, ReadWriteMode, ADCCCRBase> ;
    using FieldValues = ADC_CCR_VREFEN_Values<ADC::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x40012708, 32, ReadWriteMode, ADCCCRBase, T...> ;

} ;

#endif //#if !defined(ADCREGISTERS_HPP)
