/*******************************************************************************
* Filename      : adc2registers.hpp
*
* Details       : Analog-to-digital converter. This header file is
*                 auto-generated for STM32F407 device.
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
  struct ADC2SRBase {} ;

  struct SR : public RegisterBase<0x40012100, 32, ReadWriteMode>
  {
    using OVR = ADC2_SR_OVR_Values<ADC2::SR, 5, 1, ReadWriteMode, ADC2SRBase> ;
    using STRT = ADC2_SR_STRT_Values<ADC2::SR, 4, 1, ReadWriteMode, ADC2SRBase> ;
    using JSTRT = ADC2_SR_JSTRT_Values<ADC2::SR, 3, 1, ReadWriteMode, ADC2SRBase> ;
    using JEOC = ADC2_SR_JEOC_Values<ADC2::SR, 2, 1, ReadWriteMode, ADC2SRBase> ;
    using EOC = ADC2_SR_EOC_Values<ADC2::SR, 1, 1, ReadWriteMode, ADC2SRBase> ;
    using AWD = ADC2_SR_AWD_Values<ADC2::SR, 0, 1, ReadWriteMode, ADC2SRBase> ;
    using FieldValues = ADC2_SR_AWD_Values<ADC2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40012100, 32, ReadWriteMode, ADC2SRBase, T...> ;

  struct ADC2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40012104, 32, ReadWriteMode>
  {
    using OVRIE = ADC2_CR1_OVRIE_Values<ADC2::CR1, 26, 1, ReadWriteMode, ADC2CR1Base> ;
    using RES = ADC2_CR1_RES_Values<ADC2::CR1, 24, 2, ReadWriteMode, ADC2CR1Base> ;
    using AWDEN = ADC2_CR1_AWDEN_Values<ADC2::CR1, 23, 1, ReadWriteMode, ADC2CR1Base> ;
    using JAWDEN = ADC2_CR1_JAWDEN_Values<ADC2::CR1, 22, 1, ReadWriteMode, ADC2CR1Base> ;
    using DISCNUM = ADC2_CR1_DISCNUM_Values<ADC2::CR1, 13, 3, ReadWriteMode, ADC2CR1Base> ;
    using JDISCEN = ADC2_CR1_JDISCEN_Values<ADC2::CR1, 12, 1, ReadWriteMode, ADC2CR1Base> ;
    using DISCEN = ADC2_CR1_DISCEN_Values<ADC2::CR1, 11, 1, ReadWriteMode, ADC2CR1Base> ;
    using JAUTO = ADC2_CR1_JAUTO_Values<ADC2::CR1, 10, 1, ReadWriteMode, ADC2CR1Base> ;
    using AWDSGL = ADC2_CR1_AWDSGL_Values<ADC2::CR1, 9, 1, ReadWriteMode, ADC2CR1Base> ;
    using SCAN = ADC2_CR1_SCAN_Values<ADC2::CR1, 8, 1, ReadWriteMode, ADC2CR1Base> ;
    using JEOCIE = ADC2_CR1_JEOCIE_Values<ADC2::CR1, 7, 1, ReadWriteMode, ADC2CR1Base> ;
    using AWDIE = ADC2_CR1_AWDIE_Values<ADC2::CR1, 6, 1, ReadWriteMode, ADC2CR1Base> ;
    using EOCIE = ADC2_CR1_EOCIE_Values<ADC2::CR1, 5, 1, ReadWriteMode, ADC2CR1Base> ;
    using AWDCH = ADC2_CR1_AWDCH_Values<ADC2::CR1, 0, 5, ReadWriteMode, ADC2CR1Base> ;
    using FieldValues = ADC2_CR1_AWDCH_Values<ADC2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40012104, 32, ReadWriteMode, ADC2CR1Base, T...> ;

  struct ADC2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40012108, 32, ReadWriteMode>
  {
    using SWSTART = ADC2_CR2_SWSTART_Values<ADC2::CR2, 30, 1, ReadWriteMode, ADC2CR2Base> ;
    using EXTEN = ADC2_CR2_EXTEN_Values<ADC2::CR2, 28, 2, ReadWriteMode, ADC2CR2Base> ;
    using EXTSEL = ADC2_CR2_EXTSEL_Values<ADC2::CR2, 24, 4, ReadWriteMode, ADC2CR2Base> ;
    using JSWSTART = ADC2_CR2_JSWSTART_Values<ADC2::CR2, 22, 1, ReadWriteMode, ADC2CR2Base> ;
    using JEXTEN = ADC2_CR2_JEXTEN_Values<ADC2::CR2, 20, 2, ReadWriteMode, ADC2CR2Base> ;
    using JEXTSEL = ADC2_CR2_JEXTSEL_Values<ADC2::CR2, 16, 4, ReadWriteMode, ADC2CR2Base> ;
    using ALIGN = ADC2_CR2_ALIGN_Values<ADC2::CR2, 11, 1, ReadWriteMode, ADC2CR2Base> ;
    using EOCS = ADC2_CR2_EOCS_Values<ADC2::CR2, 10, 1, ReadWriteMode, ADC2CR2Base> ;
    using DDS = ADC2_CR2_DDS_Values<ADC2::CR2, 9, 1, ReadWriteMode, ADC2CR2Base> ;
    using DMA = ADC2_CR2_DMA_Values<ADC2::CR2, 8, 1, ReadWriteMode, ADC2CR2Base> ;
    using CONT = ADC2_CR2_CONT_Values<ADC2::CR2, 1, 1, ReadWriteMode, ADC2CR2Base> ;
    using ADON = ADC2_CR2_ADON_Values<ADC2::CR2, 0, 1, ReadWriteMode, ADC2CR2Base> ;
    using FieldValues = ADC2_CR2_ADON_Values<ADC2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40012108, 32, ReadWriteMode, ADC2CR2Base, T...> ;

  struct ADC2SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x4001210C, 32, ReadWriteMode>
  {
    using SMPx_x = ADC2_SMPR1_SMPx_x_Values<ADC2::SMPR1, 0, 32, ReadWriteMode, ADC2SMPR1Base> ;
    using FieldValues = ADC2_SMPR1_SMPx_x_Values<ADC2::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x4001210C, 32, ReadWriteMode, ADC2SMPR1Base, T...> ;

  struct ADC2SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x40012110, 32, ReadWriteMode>
  {
    using SMPx_x = ADC2_SMPR2_SMPx_x_Values<ADC2::SMPR2, 0, 32, ReadWriteMode, ADC2SMPR2Base> ;
    using FieldValues = ADC2_SMPR2_SMPx_x_Values<ADC2::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x40012110, 32, ReadWriteMode, ADC2SMPR2Base, T...> ;

  struct ADC2JOFR1Base {} ;

  struct JOFR1 : public RegisterBase<0x40012114, 32, ReadWriteMode>
  {
    using JOFFSET1 = ADC2_JOFR1_JOFFSET1_Values<ADC2::JOFR1, 0, 12, ReadWriteMode, ADC2JOFR1Base> ;
    using FieldValues = ADC2_JOFR1_JOFFSET1_Values<ADC2::JOFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR1Pack  = Register<0x40012114, 32, ReadWriteMode, ADC2JOFR1Base, T...> ;

  struct ADC2JOFR2Base {} ;

  struct JOFR2 : public RegisterBase<0x40012118, 32, ReadWriteMode>
  {
    using JOFFSET2 = ADC2_JOFR2_JOFFSET2_Values<ADC2::JOFR2, 0, 12, ReadWriteMode, ADC2JOFR2Base> ;
    using FieldValues = ADC2_JOFR2_JOFFSET2_Values<ADC2::JOFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR2Pack  = Register<0x40012118, 32, ReadWriteMode, ADC2JOFR2Base, T...> ;

  struct ADC2JOFR3Base {} ;

  struct JOFR3 : public RegisterBase<0x4001211C, 32, ReadWriteMode>
  {
    using JOFFSET3 = ADC2_JOFR3_JOFFSET3_Values<ADC2::JOFR3, 0, 12, ReadWriteMode, ADC2JOFR3Base> ;
    using FieldValues = ADC2_JOFR3_JOFFSET3_Values<ADC2::JOFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR3Pack  = Register<0x4001211C, 32, ReadWriteMode, ADC2JOFR3Base, T...> ;

  struct ADC2JOFR4Base {} ;

  struct JOFR4 : public RegisterBase<0x40012120, 32, ReadWriteMode>
  {
    using JOFFSET4 = ADC2_JOFR4_JOFFSET4_Values<ADC2::JOFR4, 0, 12, ReadWriteMode, ADC2JOFR4Base> ;
    using FieldValues = ADC2_JOFR4_JOFFSET4_Values<ADC2::JOFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR4Pack  = Register<0x40012120, 32, ReadWriteMode, ADC2JOFR4Base, T...> ;

  struct ADC2HTRBase {} ;

  struct HTR : public RegisterBase<0x40012124, 32, ReadWriteMode>
  {
    using HT = ADC2_HTR_HT_Values<ADC2::HTR, 0, 12, ReadWriteMode, ADC2HTRBase> ;
    using FieldValues = ADC2_HTR_HT_Values<ADC2::HTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HTRPack  = Register<0x40012124, 32, ReadWriteMode, ADC2HTRBase, T...> ;

  struct ADC2LTRBase {} ;

  struct LTR : public RegisterBase<0x40012128, 32, ReadWriteMode>
  {
    using LT = ADC2_LTR_LT_Values<ADC2::LTR, 0, 12, ReadWriteMode, ADC2LTRBase> ;
    using FieldValues = ADC2_LTR_LT_Values<ADC2::LTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LTRPack  = Register<0x40012128, 32, ReadWriteMode, ADC2LTRBase, T...> ;

  struct ADC2SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x4001212C, 32, ReadWriteMode>
  {
    using L = ADC2_SQR1_L_Values<ADC2::SQR1, 20, 4, ReadWriteMode, ADC2SQR1Base> ;
    using SQ16 = ADC2_SQR1_SQ16_Values<ADC2::SQR1, 15, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ15 = ADC2_SQR1_SQ15_Values<ADC2::SQR1, 10, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ14 = ADC2_SQR1_SQ14_Values<ADC2::SQR1, 5, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ13 = ADC2_SQR1_SQ13_Values<ADC2::SQR1, 0, 5, ReadWriteMode, ADC2SQR1Base> ;
    using FieldValues = ADC2_SQR1_SQ13_Values<ADC2::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x4001212C, 32, ReadWriteMode, ADC2SQR1Base, T...> ;

  struct ADC2SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x40012130, 32, ReadWriteMode>
  {
    using SQ12 = ADC2_SQR2_SQ12_Values<ADC2::SQR2, 25, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ11 = ADC2_SQR2_SQ11_Values<ADC2::SQR2, 20, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ10 = ADC2_SQR2_SQ10_Values<ADC2::SQR2, 15, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ9 = ADC2_SQR2_SQ9_Values<ADC2::SQR2, 10, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ8 = ADC2_SQR2_SQ8_Values<ADC2::SQR2, 5, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ7 = ADC2_SQR2_SQ7_Values<ADC2::SQR2, 0, 5, ReadWriteMode, ADC2SQR2Base> ;
    using FieldValues = ADC2_SQR2_SQ7_Values<ADC2::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x40012130, 32, ReadWriteMode, ADC2SQR2Base, T...> ;

  struct ADC2SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x40012134, 32, ReadWriteMode>
  {
    using SQ6 = ADC2_SQR3_SQ6_Values<ADC2::SQR3, 25, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ5 = ADC2_SQR3_SQ5_Values<ADC2::SQR3, 20, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ4 = ADC2_SQR3_SQ4_Values<ADC2::SQR3, 15, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ3 = ADC2_SQR3_SQ3_Values<ADC2::SQR3, 10, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ2 = ADC2_SQR3_SQ2_Values<ADC2::SQR3, 5, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ1 = ADC2_SQR3_SQ1_Values<ADC2::SQR3, 0, 5, ReadWriteMode, ADC2SQR3Base> ;
    using FieldValues = ADC2_SQR3_SQ1_Values<ADC2::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x40012134, 32, ReadWriteMode, ADC2SQR3Base, T...> ;

  struct ADC2JSQRBase {} ;

  struct JSQR : public RegisterBase<0x40012138, 32, ReadWriteMode>
  {
    using JL = ADC2_JSQR_JL_Values<ADC2::JSQR, 20, 2, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ4 = ADC2_JSQR_JSQ4_Values<ADC2::JSQR, 15, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ3 = ADC2_JSQR_JSQ3_Values<ADC2::JSQR, 10, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ2 = ADC2_JSQR_JSQ2_Values<ADC2::JSQR, 5, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ1 = ADC2_JSQR_JSQ1_Values<ADC2::JSQR, 0, 5, ReadWriteMode, ADC2JSQRBase> ;
    using FieldValues = ADC2_JSQR_JSQ1_Values<ADC2::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x40012138, 32, ReadWriteMode, ADC2JSQRBase, T...> ;

  struct ADC2JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x4001213C, 32, ReadMode>
  {
    using JDATA = ADC2_JDR1_JDATA_Values<ADC2::JDR1, 0, 16, ReadMode, ADC2JDR1Base> ;
    using FieldValues = ADC2_JDR1_JDATA_Values<ADC2::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x4001213C, 32, ReadMode, ADC2JDR1Base, T...> ;

  struct ADC2JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x40012140, 32, ReadMode>
  {
    using JDATA = ADC2_JDR2_JDATA_Values<ADC2::JDR2, 0, 16, ReadMode, ADC2JDR2Base> ;
    using FieldValues = ADC2_JDR2_JDATA_Values<ADC2::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x40012140, 32, ReadMode, ADC2JDR2Base, T...> ;

  struct ADC2JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x40012144, 32, ReadMode>
  {
    using JDATA = ADC2_JDR3_JDATA_Values<ADC2::JDR3, 0, 16, ReadMode, ADC2JDR3Base> ;
    using FieldValues = ADC2_JDR3_JDATA_Values<ADC2::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x40012144, 32, ReadMode, ADC2JDR3Base, T...> ;

  struct ADC2JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x40012148, 32, ReadMode>
  {
    using JDATA = ADC2_JDR4_JDATA_Values<ADC2::JDR4, 0, 16, ReadMode, ADC2JDR4Base> ;
    using FieldValues = ADC2_JDR4_JDATA_Values<ADC2::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x40012148, 32, ReadMode, ADC2JDR4Base, T...> ;

  struct ADC2DRBase {} ;

  struct DR : public RegisterBase<0x4001214C, 32, ReadMode>
  {
    using DATA = ADC2_DR_DATA_Values<ADC2::DR, 0, 16, ReadMode, ADC2DRBase> ;
    using FieldValues = ADC2_DR_DATA_Values<ADC2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4001214C, 32, ReadMode, ADC2DRBase, T...> ;

} ;

#endif //#if !defined(ADC2REGISTERS_HPP)
