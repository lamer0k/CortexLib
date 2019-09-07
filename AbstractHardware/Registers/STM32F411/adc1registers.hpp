/*******************************************************************************
* Filename      : adc1registers.hpp
*
* Details       : Analog-to-digital converter. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(ADC1REGISTERS_HPP)
#define ADC1REGISTERS_HPP

#include "adc1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC1
{
  struct ADC1SRBase {} ;

  struct SR : public RegisterBase<0x40012000, 32, ReadWriteMode>
  {
    using OVR = ADC_SR_OVR_Values<ADC1::SR, 5, 1, ReadWriteMode, ADC1SRBase> ;
    using STRT = ADC_SR_STRT_Values<ADC1::SR, 4, 1, ReadWriteMode, ADC1SRBase> ;
    using JSTRT = ADC_SR_JSTRT_Values<ADC1::SR, 3, 1, ReadWriteMode, ADC1SRBase> ;
    using JEOC = ADC_SR_JEOC_Values<ADC1::SR, 2, 1, ReadWriteMode, ADC1SRBase> ;
    using EOC = ADC_SR_EOC_Values<ADC1::SR, 1, 1, ReadWriteMode, ADC1SRBase> ;
    using AWD = ADC_SR_AWD_Values<ADC1::SR, 0, 1, ReadWriteMode, ADC1SRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40012000, 32, ReadWriteMode, ADC1SRBase, T...> ;

  struct ADC1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40012004, 32, ReadWriteMode>
  {
    using OVRIE = ADC_CR_OVRIE_Values<ADC1::CR1, 26, 1, ReadWriteMode, ADC1CR1Base> ;
    using RES = ADC_CR_RES_Values<ADC1::CR1, 24, 2, ReadWriteMode, ADC1CR1Base> ;
    using AWDEN = ADC_CR_AWDEN_Values<ADC1::CR1, 23, 1, ReadWriteMode, ADC1CR1Base> ;
    using JAWDEN = ADC_CR_JAWDEN_Values<ADC1::CR1, 22, 1, ReadWriteMode, ADC1CR1Base> ;
    using DISCNUM = ADC_CR_DISCNUM_Values<ADC1::CR1, 13, 3, ReadWriteMode, ADC1CR1Base> ;
    using JDISCEN = ADC_CR_JDISCEN_Values<ADC1::CR1, 12, 1, ReadWriteMode, ADC1CR1Base> ;
    using DISCEN = ADC_CR_DISCEN_Values<ADC1::CR1, 11, 1, ReadWriteMode, ADC1CR1Base> ;
    using JAUTO = ADC_CR_JAUTO_Values<ADC1::CR1, 10, 1, ReadWriteMode, ADC1CR1Base> ;
    using AWDSGL = ADC_CR_AWDSGL_Values<ADC1::CR1, 9, 1, ReadWriteMode, ADC1CR1Base> ;
    using SCAN = ADC_CR_SCAN_Values<ADC1::CR1, 8, 1, ReadWriteMode, ADC1CR1Base> ;
    using JEOCIE = ADC_CR_JEOCIE_Values<ADC1::CR1, 7, 1, ReadWriteMode, ADC1CR1Base> ;
    using AWDIE = ADC_CR_AWDIE_Values<ADC1::CR1, 6, 1, ReadWriteMode, ADC1CR1Base> ;
    using EOCIE = ADC_CR_EOCIE_Values<ADC1::CR1, 5, 1, ReadWriteMode, ADC1CR1Base> ;
    using AWDCH = ADC_CR_AWDCH_Values<ADC1::CR1, 0, 5, ReadWriteMode, ADC1CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40012004, 32, ReadWriteMode, ADC1CR1Base, T...> ;

  struct ADC1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40012008, 32, ReadWriteMode>
  {
    using SWSTART = ADC_CR_SWSTART_Values<ADC1::CR2, 30, 1, ReadWriteMode, ADC1CR2Base> ;
    using EXTEN = ADC_CR_EXTEN_Values<ADC1::CR2, 28, 2, ReadWriteMode, ADC1CR2Base> ;
    using EXTSEL = ADC_CR_EXTSEL_Values<ADC1::CR2, 24, 4, ReadWriteMode, ADC1CR2Base> ;
    using JSWSTART = ADC_CR_JSWSTART_Values<ADC1::CR2, 22, 1, ReadWriteMode, ADC1CR2Base> ;
    using JEXTEN = ADC_CR_JEXTEN_Values<ADC1::CR2, 20, 2, ReadWriteMode, ADC1CR2Base> ;
    using JEXTSEL = ADC_CR_JEXTSEL_Values<ADC1::CR2, 16, 4, ReadWriteMode, ADC1CR2Base> ;
    using ALIGN = ADC_CR_ALIGN_Values<ADC1::CR2, 11, 1, ReadWriteMode, ADC1CR2Base> ;
    using EOCS = ADC_CR_EOCS_Values<ADC1::CR2, 10, 1, ReadWriteMode, ADC1CR2Base> ;
    using DDS = ADC_CR_DDS_Values<ADC1::CR2, 9, 1, ReadWriteMode, ADC1CR2Base> ;
    using DMA = ADC_CR_DMA_Values<ADC1::CR2, 8, 1, ReadWriteMode, ADC1CR2Base> ;
    using CONT = ADC_CR_CONT_Values<ADC1::CR2, 1, 1, ReadWriteMode, ADC1CR2Base> ;
    using ADON = ADC_CR_ADON_Values<ADC1::CR2, 0, 1, ReadWriteMode, ADC1CR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40012008, 32, ReadWriteMode, ADC1CR2Base, T...> ;

  struct ADC1SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x4001200C, 32, ReadWriteMode>
  {
    using SMPx_x = ADC_SMPR_SMPx_x_Values<ADC1::SMPR1, 0, 32, ReadWriteMode, ADC1SMPR1Base> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x4001200C, 32, ReadWriteMode, ADC1SMPR1Base, T...> ;

  struct ADC1SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x40012010, 32, ReadWriteMode>
  {
    using SMPx_x = ADC_SMPR_SMPx_x_Values<ADC1::SMPR2, 0, 32, ReadWriteMode, ADC1SMPR2Base> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x40012010, 32, ReadWriteMode, ADC1SMPR2Base, T...> ;

  struct ADC1JOFR1Base {} ;

  struct JOFR1 : public RegisterBase<0x40012014, 32, ReadWriteMode>
  {
    using JOFFSET1 = ADC_JOFR_JOFFSET_Values<ADC1::JOFR1, 0, 12, ReadWriteMode, ADC1JOFR1Base> ;
  } ;

  template<typename... T> 
  using JOFR1Pack  = Register<0x40012014, 32, ReadWriteMode, ADC1JOFR1Base, T...> ;

  struct ADC1JOFR2Base {} ;

  struct JOFR2 : public RegisterBase<0x40012018, 32, ReadWriteMode>
  {
    using JOFFSET2 = ADC_JOFR_JOFFSET_Values<ADC1::JOFR2, 0, 12, ReadWriteMode, ADC1JOFR2Base> ;
  } ;

  template<typename... T> 
  using JOFR2Pack  = Register<0x40012018, 32, ReadWriteMode, ADC1JOFR2Base, T...> ;

  struct ADC1JOFR3Base {} ;

  struct JOFR3 : public RegisterBase<0x4001201C, 32, ReadWriteMode>
  {
    using JOFFSET3 = ADC_JOFR_JOFFSET_Values<ADC1::JOFR3, 0, 12, ReadWriteMode, ADC1JOFR3Base> ;
  } ;

  template<typename... T> 
  using JOFR3Pack  = Register<0x4001201C, 32, ReadWriteMode, ADC1JOFR3Base, T...> ;

  struct ADC1JOFR4Base {} ;

  struct JOFR4 : public RegisterBase<0x40012020, 32, ReadWriteMode>
  {
    using JOFFSET4 = ADC_JOFR_JOFFSET_Values<ADC1::JOFR4, 0, 12, ReadWriteMode, ADC1JOFR4Base> ;
  } ;

  template<typename... T> 
  using JOFR4Pack  = Register<0x40012020, 32, ReadWriteMode, ADC1JOFR4Base, T...> ;

  struct ADC1HTRBase {} ;

  struct HTR : public RegisterBase<0x40012024, 32, ReadWriteMode>
  {
    using HT = ADC_HTR_HT_Values<ADC1::HTR, 0, 12, ReadWriteMode, ADC1HTRBase> ;
  } ;

  template<typename... T> 
  using HTRPack  = Register<0x40012024, 32, ReadWriteMode, ADC1HTRBase, T...> ;

  struct ADC1LTRBase {} ;

  struct LTR : public RegisterBase<0x40012028, 32, ReadWriteMode>
  {
    using LT = ADC_LTR_LT_Values<ADC1::LTR, 0, 12, ReadWriteMode, ADC1LTRBase> ;
  } ;

  template<typename... T> 
  using LTRPack  = Register<0x40012028, 32, ReadWriteMode, ADC1LTRBase, T...> ;

  struct ADC1SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x4001202C, 32, ReadWriteMode>
  {
    using L = ADC_SQR_L_Values<ADC1::SQR1, 20, 4, ReadWriteMode, ADC1SQR1Base> ;
    using SQ16 = ADC_SQR_SQ_Values<ADC1::SQR1, 15, 5, ReadWriteMode, ADC1SQR1Base> ;
    using SQ15 = ADC_SQR_SQ_Values<ADC1::SQR1, 10, 5, ReadWriteMode, ADC1SQR1Base> ;
    using SQ14 = ADC_SQR_SQ_Values<ADC1::SQR1, 5, 5, ReadWriteMode, ADC1SQR1Base> ;
    using SQ13 = ADC_SQR_SQ_Values<ADC1::SQR1, 0, 5, ReadWriteMode, ADC1SQR1Base> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x4001202C, 32, ReadWriteMode, ADC1SQR1Base, T...> ;

  struct ADC1SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x40012030, 32, ReadWriteMode>
  {
    using SQ12 = ADC_SQR_SQ_Values<ADC1::SQR2, 25, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ11 = ADC_SQR_SQ_Values<ADC1::SQR2, 20, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ10 = ADC_SQR_SQ_Values<ADC1::SQR2, 15, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ9 = ADC_SQR_SQ_Values<ADC1::SQR2, 10, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ8 = ADC_SQR_SQ_Values<ADC1::SQR2, 5, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ7 = ADC_SQR_SQ_Values<ADC1::SQR2, 0, 5, ReadWriteMode, ADC1SQR2Base> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x40012030, 32, ReadWriteMode, ADC1SQR2Base, T...> ;

  struct ADC1SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x40012034, 32, ReadWriteMode>
  {
    using SQ6 = ADC_SQR_SQ_Values<ADC1::SQR3, 25, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ5 = ADC_SQR_SQ_Values<ADC1::SQR3, 20, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ4 = ADC_SQR_SQ_Values<ADC1::SQR3, 15, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ3 = ADC_SQR_SQ_Values<ADC1::SQR3, 10, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ2 = ADC_SQR_SQ_Values<ADC1::SQR3, 5, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ1 = ADC_SQR_SQ_Values<ADC1::SQR3, 0, 5, ReadWriteMode, ADC1SQR3Base> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x40012034, 32, ReadWriteMode, ADC1SQR3Base, T...> ;

  struct ADC1JSQRBase {} ;

  struct JSQR : public RegisterBase<0x40012038, 32, ReadWriteMode>
  {
    using JL = ADC_JSQR_JL_Values<ADC1::JSQR, 20, 2, ReadWriteMode, ADC1JSQRBase> ;
    using JSQ4 = ADC_JSQR_JSQ_Values<ADC1::JSQR, 15, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JSQ3 = ADC_JSQR_JSQ_Values<ADC1::JSQR, 10, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JSQ2 = ADC_JSQR_JSQ_Values<ADC1::JSQR, 5, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JSQ1 = ADC_JSQR_JSQ_Values<ADC1::JSQR, 0, 5, ReadWriteMode, ADC1JSQRBase> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x40012038, 32, ReadWriteMode, ADC1JSQRBase, T...> ;

  struct ADC1JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x4001203C, 32, ReadMode>
  {
    using JDATA = ADC_JDR_JDATA_Values<ADC1::JDR1, 0, 16, ReadMode, ADC1JDR1Base> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x4001203C, 32, ReadMode, ADC1JDR1Base, T...> ;

  struct ADC1JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x40012040, 32, ReadMode>
  {
    using JDATA = ADC_JDR_JDATA_Values<ADC1::JDR2, 0, 16, ReadMode, ADC1JDR2Base> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x40012040, 32, ReadMode, ADC1JDR2Base, T...> ;

  struct ADC1JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x40012044, 32, ReadMode>
  {
    using JDATA = ADC_JDR_JDATA_Values<ADC1::JDR3, 0, 16, ReadMode, ADC1JDR3Base> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x40012044, 32, ReadMode, ADC1JDR3Base, T...> ;

  struct ADC1JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x40012048, 32, ReadMode>
  {
    using JDATA = ADC_JDR_JDATA_Values<ADC1::JDR4, 0, 16, ReadMode, ADC1JDR4Base> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x40012048, 32, ReadMode, ADC1JDR4Base, T...> ;

  struct ADC1DRBase {} ;

  struct DR : public RegisterBase<0x4001204C, 32, ReadMode>
  {
    using DATA = ADC_DR_DATA_Values<ADC1::DR, 0, 16, ReadMode, ADC1DRBase> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4001204C, 32, ReadMode, ADC1DRBase, T...> ;

} ;

#endif //#if !defined(ADC1REGISTERS_HPP)
