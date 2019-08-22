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

#include "adc1bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Adc1
{
  struct Sr : public RegisterBase<0x40012000, 32, ReadWriteMode>
  {
    using Ovr = AdcSrOvrValues<Adc1::Sr, 5, 1, ReadWriteMode, AdcSrOvrValuesBase> ;
    using Strt = AdcSrStrtValues<Adc1::Sr, 4, 1, ReadWriteMode, AdcSrStrtValuesBase> ;
    using Jstrt = AdcSrJstrtValues<Adc1::Sr, 3, 1, ReadWriteMode, AdcSrJstrtValuesBase> ;
    using Jeoc = AdcSrJeocValues<Adc1::Sr, 2, 1, ReadWriteMode, AdcSrJeocValuesBase> ;
    using Eoc = AdcSrEocValues<Adc1::Sr, 1, 1, ReadWriteMode, AdcSrEocValuesBase> ;
    using Awd = AdcSrAwdValues<Adc1::Sr, 0, 1, ReadWriteMode, AdcSrAwdValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40012000, 32, ReadWriteMode, AdcSrOvrValuesBase, T...> ;

  struct Cr1 : public RegisterBase<0x40012004, 32, ReadWriteMode>
  {
    using Ovrie = AdcCrOvrieValues<Adc1::Cr1, 26, 1, ReadWriteMode, AdcCrOvrieValuesBase> ;
    using Res = AdcCrResValues<Adc1::Cr1, 24, 2, ReadWriteMode, AdcCrResValuesBase> ;
    using Awden = AdcCrAwdenValues<Adc1::Cr1, 23, 1, ReadWriteMode, AdcCrAwdenValuesBase> ;
    using Jawden = AdcCrJawdenValues<Adc1::Cr1, 22, 1, ReadWriteMode, AdcCrJawdenValuesBase> ;
    using Discnum = AdcCrDiscnumValues<Adc1::Cr1, 13, 3, ReadWriteMode, AdcCrDiscnumValuesBase> ;
    using Jdiscen = AdcCrJdiscenValues<Adc1::Cr1, 12, 1, ReadWriteMode, AdcCrJdiscenValuesBase> ;
    using Discen = AdcCrDiscenValues<Adc1::Cr1, 11, 1, ReadWriteMode, AdcCrDiscenValuesBase> ;
    using Jauto = AdcCrJautoValues<Adc1::Cr1, 10, 1, ReadWriteMode, AdcCrJautoValuesBase> ;
    using Awdsgl = AdcCrAwdsglValues<Adc1::Cr1, 9, 1, ReadWriteMode, AdcCrAwdsglValuesBase> ;
    using Scan = AdcCrScanValues<Adc1::Cr1, 8, 1, ReadWriteMode, AdcCrScanValuesBase> ;
    using Jeocie = AdcCrJeocieValues<Adc1::Cr1, 7, 1, ReadWriteMode, AdcCrJeocieValuesBase> ;
    using Awdie = AdcCrAwdieValues<Adc1::Cr1, 6, 1, ReadWriteMode, AdcCrAwdieValuesBase> ;
    using Eocie = AdcCrEocieValues<Adc1::Cr1, 5, 1, ReadWriteMode, AdcCrEocieValuesBase> ;
    using Awdch = AdcCrAwdchValues<Adc1::Cr1, 0, 5, ReadWriteMode, AdcCrAwdchValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40012004, 32, ReadWriteMode, AdcCrOvrieValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40012008, 32, ReadWriteMode>
  {
    using Swstart = AdcCrSwstartValues<Adc1::Cr2, 30, 1, ReadWriteMode, AdcCrSwstartValuesBase> ;
    using Exten = AdcCrExtenValues<Adc1::Cr2, 28, 2, ReadWriteMode, AdcCrExtenValuesBase> ;
    using Extsel = AdcCrExtselValues<Adc1::Cr2, 24, 4, ReadWriteMode, AdcCrExtselValuesBase> ;
    using Jswstart = AdcCrJswstartValues<Adc1::Cr2, 22, 1, ReadWriteMode, AdcCrJswstartValuesBase> ;
    using Jexten = AdcCrJextenValues<Adc1::Cr2, 20, 2, ReadWriteMode, AdcCrJextenValuesBase> ;
    using Jextsel = AdcCrJextselValues<Adc1::Cr2, 16, 4, ReadWriteMode, AdcCrJextselValuesBase> ;
    using Align = AdcCrAlignValues<Adc1::Cr2, 11, 1, ReadWriteMode, AdcCrAlignValuesBase> ;
    using Eocs = AdcCrEocsValues<Adc1::Cr2, 10, 1, ReadWriteMode, AdcCrEocsValuesBase> ;
    using Dds = AdcCrDdsValues<Adc1::Cr2, 9, 1, ReadWriteMode, AdcCrDdsValuesBase> ;
    using Dma = AdcCrDmaValues<Adc1::Cr2, 8, 1, ReadWriteMode, AdcCrDmaValuesBase> ;
    using Cont = AdcCrContValues<Adc1::Cr2, 1, 1, ReadWriteMode, AdcCrContValuesBase> ;
    using Adon = AdcCrAdonValues<Adc1::Cr2, 0, 1, ReadWriteMode, AdcCrAdonValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40012008, 32, ReadWriteMode, AdcCrSwstartValuesBase, T...> ;

  struct Smpr1 : public RegisterBase<0x4001200C, 32, ReadWriteMode>
  {
    using SmpxX = ReadWriteMode<Adc1::Smpr1, 0, 32> ;
  } ;

  template<typename... T> 
  using Smpr1Pack  = Register<0x4001200C, 32, ReadWriteMode, AdcSmprSmpxXValuesBase, T...> ;

  struct Smpr2 : public RegisterBase<0x40012010, 32, ReadWriteMode>
  {
    using SmpxX = ReadWriteMode<Adc1::Smpr2, 0, 32> ;
  } ;

  template<typename... T> 
  using Smpr2Pack  = Register<0x40012010, 32, ReadWriteMode, AdcSmprSmpxXValuesBase, T...> ;

  struct Jofr1 : public RegisterBase<0x40012014, 32, ReadWriteMode>
  {
    using Joffset1 = ReadWriteMode<Adc1::Jofr1, 0, 12> ;
  } ;

  template<typename... T> 
  using Jofr1Pack  = Register<0x40012014, 32, ReadWriteMode, AdcJofrJoffsetValuesBase, T...> ;

  struct Jofr2 : public RegisterBase<0x40012018, 32, ReadWriteMode>
  {
    using Joffset2 = ReadWriteMode<Adc1::Jofr2, 0, 12> ;
  } ;

  template<typename... T> 
  using Jofr2Pack  = Register<0x40012018, 32, ReadWriteMode, AdcJofrJoffsetValuesBase, T...> ;

  struct Jofr3 : public RegisterBase<0x4001201C, 32, ReadWriteMode>
  {
    using Joffset3 = ReadWriteMode<Adc1::Jofr3, 0, 12> ;
  } ;

  template<typename... T> 
  using Jofr3Pack  = Register<0x4001201C, 32, ReadWriteMode, AdcJofrJoffsetValuesBase, T...> ;

  struct Jofr4 : public RegisterBase<0x40012020, 32, ReadWriteMode>
  {
    using Joffset4 = ReadWriteMode<Adc1::Jofr4, 0, 12> ;
  } ;

  template<typename... T> 
  using Jofr4Pack  = Register<0x40012020, 32, ReadWriteMode, AdcJofrJoffsetValuesBase, T...> ;

  struct Htr : public RegisterBase<0x40012024, 32, ReadWriteMode>
  {
    using Ht = ReadWriteMode<Adc1::Htr, 0, 12> ;
  } ;

  template<typename... T> 
  using HtrPack  = Register<0x40012024, 32, ReadWriteMode, AdcHtrHtValuesBase, T...> ;

  struct Ltr : public RegisterBase<0x40012028, 32, ReadWriteMode>
  {
    using Lt = ReadWriteMode<Adc1::Ltr, 0, 12> ;
  } ;

  template<typename... T> 
  using LtrPack  = Register<0x40012028, 32, ReadWriteMode, AdcLtrLtValuesBase, T...> ;

  struct Sqr1 : public RegisterBase<0x4001202C, 32, ReadWriteMode>
  {
    using L = AdcSqrLValues<Adc1::Sqr1, 20, 4, ReadWriteMode, AdcSqrLValuesBase> ;
    using Sq16 = AdcSqrSqValues<Adc1::Sqr1, 15, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq15 = AdcSqrSqValues<Adc1::Sqr1, 10, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq14 = AdcSqrSqValues<Adc1::Sqr1, 5, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq13 = AdcSqrSqValues<Adc1::Sqr1, 0, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
  } ;

  template<typename... T> 
  using Sqr1Pack  = Register<0x4001202C, 32, ReadWriteMode, AdcSqrLValuesBase, T...> ;

  struct Sqr2 : public RegisterBase<0x40012030, 32, ReadWriteMode>
  {
    using Sq12 = AdcSqrSqValues<Adc1::Sqr2, 25, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq11 = AdcSqrSqValues<Adc1::Sqr2, 20, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq10 = AdcSqrSqValues<Adc1::Sqr2, 15, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq9 = AdcSqrSqValues<Adc1::Sqr2, 10, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq8 = AdcSqrSqValues<Adc1::Sqr2, 5, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq7 = AdcSqrSqValues<Adc1::Sqr2, 0, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
  } ;

  template<typename... T> 
  using Sqr2Pack  = Register<0x40012030, 32, ReadWriteMode, AdcSqrSqValuesBase, T...> ;

  struct Sqr3 : public RegisterBase<0x40012034, 32, ReadWriteMode>
  {
    using Sq6 = AdcSqrSqValues<Adc1::Sqr3, 25, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq5 = AdcSqrSqValues<Adc1::Sqr3, 20, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq4 = AdcSqrSqValues<Adc1::Sqr3, 15, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq3 = AdcSqrSqValues<Adc1::Sqr3, 10, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq2 = AdcSqrSqValues<Adc1::Sqr3, 5, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
    using Sq1 = AdcSqrSqValues<Adc1::Sqr3, 0, 5, ReadWriteMode, AdcSqrSqValuesBase> ;
  } ;

  template<typename... T> 
  using Sqr3Pack  = Register<0x40012034, 32, ReadWriteMode, AdcSqrSqValuesBase, T...> ;

  struct Jsqr : public RegisterBase<0x40012038, 32, ReadWriteMode>
  {
    using Jl = AdcJsqrJlValues<Adc1::Jsqr, 20, 2, ReadWriteMode, AdcJsqrJlValuesBase> ;
    using Jsq4 = AdcJsqrJsqValues<Adc1::Jsqr, 15, 5, ReadWriteMode, AdcJsqrJsqValuesBase> ;
    using Jsq3 = AdcJsqrJsqValues<Adc1::Jsqr, 10, 5, ReadWriteMode, AdcJsqrJsqValuesBase> ;
    using Jsq2 = AdcJsqrJsqValues<Adc1::Jsqr, 5, 5, ReadWriteMode, AdcJsqrJsqValuesBase> ;
    using Jsq1 = AdcJsqrJsqValues<Adc1::Jsqr, 0, 5, ReadWriteMode, AdcJsqrJsqValuesBase> ;
  } ;

  template<typename... T> 
  using JsqrPack  = Register<0x40012038, 32, ReadWriteMode, AdcJsqrJlValuesBase, T...> ;

  struct Jdr1 : public RegisterBase<0x4001203C, 32, ReadMode>
  {
    using Jdata = ReadMode<Adc1::Jdr1, 0, 16> ;
  } ;

  template<typename... T> 
  using Jdr1Pack  = Register<0x4001203C, 32, ReadMode, AdcJdrJdataValuesBase, T...> ;

  struct Jdr2 : public RegisterBase<0x40012040, 32, ReadMode>
  {
    using Jdata = ReadMode<Adc1::Jdr2, 0, 16> ;
  } ;

  template<typename... T> 
  using Jdr2Pack  = Register<0x40012040, 32, ReadMode, AdcJdrJdataValuesBase, T...> ;

  struct Jdr3 : public RegisterBase<0x40012044, 32, ReadMode>
  {
    using Jdata = ReadMode<Adc1::Jdr3, 0, 16> ;
  } ;

  template<typename... T> 
  using Jdr3Pack  = Register<0x40012044, 32, ReadMode, AdcJdrJdataValuesBase, T...> ;

  struct Jdr4 : public RegisterBase<0x40012048, 32, ReadMode>
  {
    using Jdata = ReadMode<Adc1::Jdr4, 0, 16> ;
  } ;

  template<typename... T> 
  using Jdr4Pack  = Register<0x40012048, 32, ReadMode, AdcJdrJdataValuesBase, T...> ;

  struct Dr : public RegisterBase<0x4001204C, 32, ReadMode>
  {
    using Data = ReadMode<Adc1::Dr, 0, 16> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x4001204C, 32, ReadMode, AdcDrDataValuesBase, T...> ;

} ;

#endif //#if !defined(ADC1REGISTERS_HPP)
