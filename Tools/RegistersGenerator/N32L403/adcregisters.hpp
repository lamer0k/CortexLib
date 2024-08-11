/*******************************************************************************
* Filename      : adcregisters.hpp
*
* Details       : analog to digital converter. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "adcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC
{
  struct ADCADC_STSBase {} ;

  struct ADC_STS : public RegisterBase<0x40020800, 32, ReadWriteMode>
  {
    using AWDG = ADC_ADC_STS_AWDG_Values<ADC::ADC_STS, 0, 1, ReadWriteMode, ADCADC_STSBase> ;
    using ENDC = ADC_ADC_STS_ENDC_Values<ADC::ADC_STS, 1, 1, ReadWriteMode, ADCADC_STSBase> ;
    using JENDC = ADC_ADC_STS_JENDC_Values<ADC::ADC_STS, 2, 1, ReadWriteMode, ADCADC_STSBase> ;
    using JSTR = ADC_ADC_STS_JSTR_Values<ADC::ADC_STS, 3, 1, ReadWriteMode, ADCADC_STSBase> ;
    using STR = ADC_ADC_STS_STR_Values<ADC::ADC_STS, 4, 1, ReadWriteMode, ADCADC_STSBase> ;
    using ENDCA = ADC_ADC_STS_ENDCA_Values<ADC::ADC_STS, 5, 1, ReadWriteMode, ADCADC_STSBase> ;
    using JENDCA = ADC_ADC_STS_JENDCA_Values<ADC::ADC_STS, 6, 1, ReadWriteMode, ADCADC_STSBase> ;
    using FieldValues = ADC_ADC_STS_JENDCA_Values<ADC::ADC_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_STSPack  = Register<0x40020800, 32, ReadWriteMode, ADCADC_STSBase, T...> ;

  struct ADCADC_CTRL1Base {} ;

  struct ADC_CTRL1 : public RegisterBase<0x40020804, 32, ReadWriteMode>
  {
    using AWDGCH = ADC_ADC_CTRL1_AWDGCH_Values<ADC::ADC_CTRL1, 0, 5, ReadWriteMode, ADCADC_CTRL1Base> ;
    using ENDIEN = ADC_ADC_CTRL1_ENDIEN_Values<ADC::ADC_CTRL1, 5, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using AWDGIEN = ADC_ADC_CTRL1_AWDGIEN_Values<ADC::ADC_CTRL1, 6, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using JENDCIEN = ADC_ADC_CTRL1_JENDCIEN_Values<ADC::ADC_CTRL1, 7, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using SCANMD = ADC_ADC_CTRL1_SCANMD_Values<ADC::ADC_CTRL1, 8, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using AWDGSGLEN = ADC_ADC_CTRL1_AWDGSGLEN_Values<ADC::ADC_CTRL1, 9, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using AUTOJC = ADC_ADC_CTRL1_AUTOJC_Values<ADC::ADC_CTRL1, 10, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using DREGCH = ADC_ADC_CTRL1_DREGCH_Values<ADC::ADC_CTRL1, 11, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using DJCH = ADC_ADC_CTRL1_DJCH_Values<ADC::ADC_CTRL1, 12, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using DTU = ADC_ADC_CTRL1_DTU_Values<ADC::ADC_CTRL1, 13, 3, ReadWriteMode, ADCADC_CTRL1Base> ;
    using AWDGEJCH = ADC_ADC_CTRL1_AWDGEJCH_Values<ADC::ADC_CTRL1, 22, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using AWDGERCH = ADC_ADC_CTRL1_AWDGERCH_Values<ADC::ADC_CTRL1, 23, 1, ReadWriteMode, ADCADC_CTRL1Base> ;
    using FieldValues = ADC_ADC_CTRL1_AWDGERCH_Values<ADC::ADC_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_CTRL1Pack  = Register<0x40020804, 32, ReadWriteMode, ADCADC_CTRL1Base, T...> ;

  struct ADCADC_CTRL2Base {} ;

  struct ADC_CTRL2 : public RegisterBase<0x40020808, 32, ReadWriteMode>
  {
    using ON = ADC_ADC_CTRL2_ON_Values<ADC::ADC_CTRL2, 0, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using CTU = ADC_ADC_CTRL2_CTU_Values<ADC::ADC_CTRL2, 1, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using ENCAL = ADC_ADC_CTRL2_ENCAL_Values<ADC::ADC_CTRL2, 2, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using ENDMA = ADC_ADC_CTRL2_ENDMA_Values<ADC::ADC_CTRL2, 8, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using ALIG = ADC_ADC_CTRL2_ALIG_Values<ADC::ADC_CTRL2, 11, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using EXTJSEL = ADC_ADC_CTRL2_EXTJSEL_Values<ADC::ADC_CTRL2, 12, 3, ReadWriteMode, ADCADC_CTRL2Base> ;
    using EXTJTRIG = ADC_ADC_CTRL2_EXTJTRIG_Values<ADC::ADC_CTRL2, 15, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using EXTRSEL = ADC_ADC_CTRL2_EXTRSEL_Values<ADC::ADC_CTRL2, 17, 3, ReadWriteMode, ADCADC_CTRL2Base> ;
    using EXTRTRIG = ADC_ADC_CTRL2_EXTRTRIG_Values<ADC::ADC_CTRL2, 20, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using SWSTRJCH = ADC_ADC_CTRL2_SWSTRJCH_Values<ADC::ADC_CTRL2, 21, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using SWSTRRCH = ADC_ADC_CTRL2_SWSTRRCH_Values<ADC::ADC_CTRL2, 22, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using TEMPEN = ADC_ADC_CTRL2_TEMPEN_Values<ADC::ADC_CTRL2, 23, 1, ReadWriteMode, ADCADC_CTRL2Base> ;
    using FieldValues = ADC_ADC_CTRL2_TEMPEN_Values<ADC::ADC_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_CTRL2Pack  = Register<0x40020808, 32, ReadWriteMode, ADCADC_CTRL2Base, T...> ;

  struct ADCADC_SMPR1Base {} ;

  struct ADC_SMPR1 : public RegisterBase<0x4002080C, 32, ReadWriteMode>
  {
    using SAMP10 = ADC_ADC_SMPR1_SAMP10_Values<ADC::ADC_SMPR1, 0, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using SAMP11 = ADC_ADC_SMPR1_SAMP11_Values<ADC::ADC_SMPR1, 3, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using SAMP12 = ADC_ADC_SMPR1_SAMP12_Values<ADC::ADC_SMPR1, 6, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using SAMP13 = ADC_ADC_SMPR1_SAMP13_Values<ADC::ADC_SMPR1, 9, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using SAMP14 = ADC_ADC_SMPR1_SAMP14_Values<ADC::ADC_SMPR1, 12, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using SAMP15 = ADC_ADC_SMPR1_SAMP15_Values<ADC::ADC_SMPR1, 15, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using SAMP16 = ADC_ADC_SMPR1_SAMP16_Values<ADC::ADC_SMPR1, 18, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using SAMP17 = ADC_ADC_SMPR1_SAMP17_Values<ADC::ADC_SMPR1, 21, 3, ReadWriteMode, ADCADC_SMPR1Base> ;
    using FieldValues = ADC_ADC_SMPR1_SAMP17_Values<ADC::ADC_SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_SMPR1Pack  = Register<0x4002080C, 32, ReadWriteMode, ADCADC_SMPR1Base, T...> ;

  struct ADCADC_SMPR2Base {} ;

  struct ADC_SMPR2 : public RegisterBase<0x40020810, 32, ReadWriteMode>
  {
    using SAMP0 = ADC_ADC_SMPR2_SAMP0_Values<ADC::ADC_SMPR2, 0, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP1 = ADC_ADC_SMPR2_SAMP1_Values<ADC::ADC_SMPR2, 3, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP2 = ADC_ADC_SMPR2_SAMP2_Values<ADC::ADC_SMPR2, 6, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP3 = ADC_ADC_SMPR2_SAMP3_Values<ADC::ADC_SMPR2, 9, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP4 = ADC_ADC_SMPR2_SAMP4_Values<ADC::ADC_SMPR2, 12, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP5 = ADC_ADC_SMPR2_SAMP5_Values<ADC::ADC_SMPR2, 15, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP6 = ADC_ADC_SMPR2_SAMP6_Values<ADC::ADC_SMPR2, 18, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP7 = ADC_ADC_SMPR2_SAMP7_Values<ADC::ADC_SMPR2, 21, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP8 = ADC_ADC_SMPR2_SAMP8_Values<ADC::ADC_SMPR2, 24, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using SAMP9 = ADC_ADC_SMPR2_SAMP9_Values<ADC::ADC_SMPR2, 27, 3, ReadWriteMode, ADCADC_SMPR2Base> ;
    using FieldValues = ADC_ADC_SMPR2_SAMP9_Values<ADC::ADC_SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_SMPR2Pack  = Register<0x40020810, 32, ReadWriteMode, ADCADC_SMPR2Base, T...> ;

  struct ADCADC_JOFFSET1Base {} ;

  struct ADC_JOFFSET1 : public RegisterBase<0x40020814, 32, ReadWriteMode>
  {
    using OFFSETJCH2 = ADC_ADC_JOFFSET1_OFFSETJCH2_Values<ADC::ADC_JOFFSET1, 0, 12, ReadWriteMode, ADCADC_JOFFSET1Base> ;
    using FieldValues = ADC_ADC_JOFFSET1_OFFSETJCH2_Values<ADC::ADC_JOFFSET1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JOFFSET1Pack  = Register<0x40020814, 32, ReadWriteMode, ADCADC_JOFFSET1Base, T...> ;

  struct ADCADC_JOFFSET2Base {} ;

  struct ADC_JOFFSET2 : public RegisterBase<0x40020818, 32, ReadWriteMode>
  {
    using OFFSETJCH2 = ADC_ADC_JOFFSET2_OFFSETJCH2_Values<ADC::ADC_JOFFSET2, 0, 12, ReadWriteMode, ADCADC_JOFFSET2Base> ;
    using FieldValues = ADC_ADC_JOFFSET2_OFFSETJCH2_Values<ADC::ADC_JOFFSET2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JOFFSET2Pack  = Register<0x40020818, 32, ReadWriteMode, ADCADC_JOFFSET2Base, T...> ;

  struct ADCADC_JOFFSET3Base {} ;

  struct ADC_JOFFSET3 : public RegisterBase<0x4002081C, 32, ReadWriteMode>
  {
    using OFFSETJCH3 = ADC_ADC_JOFFSET3_OFFSETJCH3_Values<ADC::ADC_JOFFSET3, 0, 12, ReadWriteMode, ADCADC_JOFFSET3Base> ;
    using FieldValues = ADC_ADC_JOFFSET3_OFFSETJCH3_Values<ADC::ADC_JOFFSET3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JOFFSET3Pack  = Register<0x4002081C, 32, ReadWriteMode, ADCADC_JOFFSET3Base, T...> ;

  struct ADCADC_JOFFSET4Base {} ;

  struct ADC_JOFFSET4 : public RegisterBase<0x40020820, 32, ReadWriteMode>
  {
    using OFFSETJCH4 = ADC_ADC_JOFFSET4_OFFSETJCH4_Values<ADC::ADC_JOFFSET4, 0, 12, ReadWriteMode, ADCADC_JOFFSET4Base> ;
    using FieldValues = ADC_ADC_JOFFSET4_OFFSETJCH4_Values<ADC::ADC_JOFFSET4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JOFFSET4Pack  = Register<0x40020820, 32, ReadWriteMode, ADCADC_JOFFSET4Base, T...> ;

  struct ADCADC_WDGHIGHBase {} ;

  struct ADC_WDGHIGH : public RegisterBase<0x40020824, 32, ReadWriteMode>
  {
    using HTH = ADC_ADC_WDGHIGH_HTH_Values<ADC::ADC_WDGHIGH, 0, 16, ReadWriteMode, ADCADC_WDGHIGHBase> ;
    using FieldValues = ADC_ADC_WDGHIGH_HTH_Values<ADC::ADC_WDGHIGH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_WDGHIGHPack  = Register<0x40020824, 32, ReadWriteMode, ADCADC_WDGHIGHBase, T...> ;

  struct ADCADC_WDGLOWBase {} ;

  struct ADC_WDGLOW : public RegisterBase<0x40020828, 32, ReadWriteMode>
  {
    using LTH = ADC_ADC_WDGLOW_LTH_Values<ADC::ADC_WDGLOW, 0, 16, ReadWriteMode, ADCADC_WDGLOWBase> ;
    using FieldValues = ADC_ADC_WDGLOW_LTH_Values<ADC::ADC_WDGLOW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_WDGLOWPack  = Register<0x40020828, 32, ReadWriteMode, ADCADC_WDGLOWBase, T...> ;

  struct ADCADC_RSEQ1Base {} ;

  struct ADC_RSEQ1 : public RegisterBase<0x4002082C, 32, ReadWriteMode>
  {
    using SEQ13 = ADC_ADC_RSEQ1_SEQ13_Values<ADC::ADC_RSEQ1, 0, 5, ReadWriteMode, ADCADC_RSEQ1Base> ;
    using SEQ14 = ADC_ADC_RSEQ1_SEQ14_Values<ADC::ADC_RSEQ1, 5, 5, ReadWriteMode, ADCADC_RSEQ1Base> ;
    using SEQ15 = ADC_ADC_RSEQ1_SEQ15_Values<ADC::ADC_RSEQ1, 10, 5, ReadWriteMode, ADCADC_RSEQ1Base> ;
    using SEQ16 = ADC_ADC_RSEQ1_SEQ16_Values<ADC::ADC_RSEQ1, 15, 5, ReadWriteMode, ADCADC_RSEQ1Base> ;
    using LEN = ADC_ADC_RSEQ1_LEN_Values<ADC::ADC_RSEQ1, 20, 4, ReadWriteMode, ADCADC_RSEQ1Base> ;
    using FieldValues = ADC_ADC_RSEQ1_LEN_Values<ADC::ADC_RSEQ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_RSEQ1Pack  = Register<0x4002082C, 32, ReadWriteMode, ADCADC_RSEQ1Base, T...> ;

  struct ADCADC_RSEQ2Base {} ;

  struct ADC_RSEQ2 : public RegisterBase<0x40020830, 32, ReadWriteMode>
  {
    using SEQ7 = ADC_ADC_RSEQ2_SEQ7_Values<ADC::ADC_RSEQ2, 0, 5, ReadWriteMode, ADCADC_RSEQ2Base> ;
    using SEQ8 = ADC_ADC_RSEQ2_SEQ8_Values<ADC::ADC_RSEQ2, 5, 5, ReadWriteMode, ADCADC_RSEQ2Base> ;
    using SEQ9 = ADC_ADC_RSEQ2_SEQ9_Values<ADC::ADC_RSEQ2, 10, 5, ReadWriteMode, ADCADC_RSEQ2Base> ;
    using SEQ10 = ADC_ADC_RSEQ2_SEQ10_Values<ADC::ADC_RSEQ2, 15, 5, ReadWriteMode, ADCADC_RSEQ2Base> ;
    using SEQ11 = ADC_ADC_RSEQ2_SEQ11_Values<ADC::ADC_RSEQ2, 20, 5, ReadWriteMode, ADCADC_RSEQ2Base> ;
    using SEQ12 = ADC_ADC_RSEQ2_SEQ12_Values<ADC::ADC_RSEQ2, 25, 5, ReadWriteMode, ADCADC_RSEQ2Base> ;
    using FieldValues = ADC_ADC_RSEQ2_SEQ12_Values<ADC::ADC_RSEQ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_RSEQ2Pack  = Register<0x40020830, 32, ReadWriteMode, ADCADC_RSEQ2Base, T...> ;

  struct ADCADC_RSEQ3Base {} ;

  struct ADC_RSEQ3 : public RegisterBase<0x40020834, 32, ReadWriteMode>
  {
    using SEQ7 = ADC_ADC_RSEQ3_SEQ7_Values<ADC::ADC_RSEQ3, 0, 5, ReadWriteMode, ADCADC_RSEQ3Base> ;
    using SEQ8 = ADC_ADC_RSEQ3_SEQ8_Values<ADC::ADC_RSEQ3, 5, 5, ReadWriteMode, ADCADC_RSEQ3Base> ;
    using SEQ9 = ADC_ADC_RSEQ3_SEQ9_Values<ADC::ADC_RSEQ3, 10, 5, ReadWriteMode, ADCADC_RSEQ3Base> ;
    using SEQ10 = ADC_ADC_RSEQ3_SEQ10_Values<ADC::ADC_RSEQ3, 15, 5, ReadWriteMode, ADCADC_RSEQ3Base> ;
    using SEQ11 = ADC_ADC_RSEQ3_SEQ11_Values<ADC::ADC_RSEQ3, 20, 5, ReadWriteMode, ADCADC_RSEQ3Base> ;
    using SEQ12 = ADC_ADC_RSEQ3_SEQ12_Values<ADC::ADC_RSEQ3, 25, 5, ReadWriteMode, ADCADC_RSEQ3Base> ;
    using FieldValues = ADC_ADC_RSEQ3_SEQ12_Values<ADC::ADC_RSEQ3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_RSEQ3Pack  = Register<0x40020834, 32, ReadWriteMode, ADCADC_RSEQ3Base, T...> ;

  struct ADCADC_JSEQBase {} ;

  struct ADC_JSEQ : public RegisterBase<0x40020838, 32, ReadWriteMode>
  {
    using JSEQ1 = ADC_ADC_JSEQ_JSEQ1_Values<ADC::ADC_JSEQ, 0, 5, ReadWriteMode, ADCADC_JSEQBase> ;
    using JSEQ2 = ADC_ADC_JSEQ_JSEQ2_Values<ADC::ADC_JSEQ, 5, 5, ReadWriteMode, ADCADC_JSEQBase> ;
    using JSEQ3 = ADC_ADC_JSEQ_JSEQ3_Values<ADC::ADC_JSEQ, 10, 5, ReadWriteMode, ADCADC_JSEQBase> ;
    using JSEQ4 = ADC_ADC_JSEQ_JSEQ4_Values<ADC::ADC_JSEQ, 15, 5, ReadWriteMode, ADCADC_JSEQBase> ;
    using JLEN = ADC_ADC_JSEQ_JLEN_Values<ADC::ADC_JSEQ, 20, 2, ReadWriteMode, ADCADC_JSEQBase> ;
    using FieldValues = ADC_ADC_JSEQ_JLEN_Values<ADC::ADC_JSEQ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JSEQPack  = Register<0x40020838, 32, ReadWriteMode, ADCADC_JSEQBase, T...> ;

  struct ADCADC_JDAT1Base {} ;

  struct ADC_JDAT1 : public RegisterBase<0x4002083C, 32, ReadWriteMode>
  {
    using JDAT1 = ADC_ADC_JDAT1_JDAT1_Values<ADC::ADC_JDAT1, 0, 16, ReadWriteMode, ADCADC_JDAT1Base> ;
    using FieldValues = ADC_ADC_JDAT1_JDAT1_Values<ADC::ADC_JDAT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JDAT1Pack  = Register<0x4002083C, 32, ReadWriteMode, ADCADC_JDAT1Base, T...> ;

  struct ADCADC_JDAT2Base {} ;

  struct ADC_JDAT2 : public RegisterBase<0x40020840, 32, ReadWriteMode>
  {
    using JDAT2 = ADC_ADC_JDAT2_JDAT2_Values<ADC::ADC_JDAT2, 0, 16, ReadWriteMode, ADCADC_JDAT2Base> ;
    using FieldValues = ADC_ADC_JDAT2_JDAT2_Values<ADC::ADC_JDAT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JDAT2Pack  = Register<0x40020840, 32, ReadWriteMode, ADCADC_JDAT2Base, T...> ;

  struct ADCADC_JDAT3Base {} ;

  struct ADC_JDAT3 : public RegisterBase<0x40020844, 32, ReadWriteMode>
  {
    using JDAT3 = ADC_ADC_JDAT3_JDAT3_Values<ADC::ADC_JDAT3, 0, 16, ReadWriteMode, ADCADC_JDAT3Base> ;
    using FieldValues = ADC_ADC_JDAT3_JDAT3_Values<ADC::ADC_JDAT3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JDAT3Pack  = Register<0x40020844, 32, ReadWriteMode, ADCADC_JDAT3Base, T...> ;

  struct ADCADC_JDAT4Base {} ;

  struct ADC_JDAT4 : public RegisterBase<0x40020848, 32, ReadWriteMode>
  {
    using JDAT4 = ADC_ADC_JDAT4_JDAT4_Values<ADC::ADC_JDAT4, 0, 16, ReadWriteMode, ADCADC_JDAT4Base> ;
    using FieldValues = ADC_ADC_JDAT4_JDAT4_Values<ADC::ADC_JDAT4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JDAT4Pack  = Register<0x40020848, 32, ReadWriteMode, ADCADC_JDAT4Base, T...> ;

  struct ADCADC_JDATBase {} ;

  struct ADC_JDAT : public RegisterBase<0x4002084C, 32, ReadWriteMode>
  {
    using JDAT = ADC_ADC_JDAT_JDAT_Values<ADC::ADC_JDAT, 0, 16, ReadWriteMode, ADCADC_JDATBase> ;
    using FieldValues = ADC_ADC_JDAT_JDAT_Values<ADC::ADC_JDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_JDATPack  = Register<0x4002084C, 32, ReadWriteMode, ADCADC_JDATBase, T...> ;

  struct ADCADC_DIFSELBase {} ;

  struct ADC_DIFSEL : public RegisterBase<0x40020850, 32, ReadWriteMode>
  {
    using DIFSEL = ADC_ADC_DIFSEL_DIFSEL_Values<ADC::ADC_DIFSEL, 1, 18, ReadWriteMode, ADCADC_DIFSELBase> ;
    using FieldValues = ADC_ADC_DIFSEL_DIFSEL_Values<ADC::ADC_DIFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_DIFSELPack  = Register<0x40020850, 32, ReadWriteMode, ADCADC_DIFSELBase, T...> ;

  struct ADCADC_CALFACTBase {} ;

  struct ADC_CALFACT : public RegisterBase<0x40020854, 32, ReadWriteMode>
  {
    using CALFACTS = ADC_ADC_CALFACT_CALFACTS_Values<ADC::ADC_CALFACT, 0, 7, ReadWriteMode, ADCADC_CALFACTBase> ;
    using CALFACTD = ADC_ADC_CALFACT_CALFACTD_Values<ADC::ADC_CALFACT, 16, 7, ReadWriteMode, ADCADC_CALFACTBase> ;
    using FieldValues = ADC_ADC_CALFACT_CALFACTD_Values<ADC::ADC_CALFACT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_CALFACTPack  = Register<0x40020854, 32, ReadWriteMode, ADCADC_CALFACTBase, T...> ;

  struct ADCADC_CTRL3Base {} ;

  struct ADC_CTRL3 : public RegisterBase<0x40020858, 32, ReadWriteMode>
  {
    using RES = ADC_ADC_CTRL3_RES_Values<ADC::ADC_CTRL3, 0, 2, ReadWriteMode, ADCADC_CTRL3Base> ;
    using CALDIF = ADC_ADC_CTRL3_CALDIF_Values<ADC::ADC_CTRL3, 2, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using CALALD = ADC_ADC_CTRL3_CALALD_Values<ADC::ADC_CTRL3, 3, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using CKMOD = ADC_ADC_CTRL3_CKMOD_Values<ADC::ADC_CTRL3, 4, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using RDY = ADC_ADC_CTRL3_RDY_Values<ADC::ADC_CTRL3, 5, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using PDRDY = ADC_ADC_CTRL3_PDRDY_Values<ADC::ADC_CTRL3, 6, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using BPCAL = ADC_ADC_CTRL3_BPCAL_Values<ADC::ADC_CTRL3, 7, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using ENDCAIEN = ADC_ADC_CTRL3_ENDCAIEN_Values<ADC::ADC_CTRL3, 8, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using JENDCAIEN = ADC_ADC_CTRL3_JENDCAIEN_Values<ADC::ADC_CTRL3, 9, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using DPWMOD = ADC_ADC_CTRL3_DPWMOD_Values<ADC::ADC_CTRL3, 10, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using VABTMEN = ADC_ADC_CTRL3_VABTMEN_Values<ADC::ADC_CTRL3, 11, 1, ReadWriteMode, ADCADC_CTRL3Base> ;
    using FieldValues = ADC_ADC_CTRL3_VABTMEN_Values<ADC::ADC_CTRL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_CTRL3Pack  = Register<0x40020858, 32, ReadWriteMode, ADCADC_CTRL3Base, T...> ;

  struct ADCADC_SAMPT3Base {} ;

  struct ADC_SAMPT3 : public RegisterBase<0x4002085C, 32, ReadWriteMode>
  {
    using SAMP = ADC_ADC_SAMPT3_SAMP_Values<ADC::ADC_SAMPT3, 0, 3, ReadWriteMode, ADCADC_SAMPT3Base> ;
    using SAMPSEL = ADC_ADC_SAMPT3_SAMPSEL_Values<ADC::ADC_SAMPT3, 3, 1, ReadWriteMode, ADCADC_SAMPT3Base> ;
    using FieldValues = ADC_ADC_SAMPT3_SAMPSEL_Values<ADC::ADC_SAMPT3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_SAMPT3Pack  = Register<0x4002085C, 32, ReadWriteMode, ADCADC_SAMPT3Base, T...> ;

} ;

