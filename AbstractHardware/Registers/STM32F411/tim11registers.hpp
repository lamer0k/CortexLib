/*******************************************************************************
* Filename      : tim11registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM11REGISTERS_HPP)
#define TIM11REGISTERS_HPP

#include "tim11bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Tim11
{
  struct Cr1 : public RegisterBase<0x40014800, 32, ReadWriteMode>
  {
    using Ckd = TimCrCkdValues<Tim11::Cr1, 8, 2, ReadWriteMode, TimCrCkdValuesBase> ;
    using Arpe = TimCrArpeValues<Tim11::Cr1, 7, 1, ReadWriteMode, TimCrArpeValuesBase> ;
    using Urs = TimCrUrsValues<Tim11::Cr1, 2, 1, ReadWriteMode, TimCrUrsValuesBase> ;
    using Udis = TimCrUdisValues<Tim11::Cr1, 1, 1, ReadWriteMode, TimCrUdisValuesBase> ;
    using Cen = TimCrCenValues<Tim11::Cr1, 0, 1, ReadWriteMode, TimCrCenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40014800, 32, ReadWriteMode, TimCrCkdValuesBase, T...> ;

  struct Dier : public RegisterBase<0x4001480C, 32, ReadWriteMode>
  {
    using Cc1Ie = TimDierCcIeValues<Tim11::Dier, 1, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Uie = TimDierUieValues<Tim11::Dier, 0, 1, ReadWriteMode, TimDierUieValuesBase> ;
  } ;

  template<typename... T> 
  using DierPack  = Register<0x4001480C, 32, ReadWriteMode, TimDierCcIeValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40014810, 32, ReadWriteMode>
  {
    using Cc1Of = TimSrCcOfValues<Tim11::Sr, 9, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc1If = TimSrCcIfValues<Tim11::Sr, 1, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Uif = TimSrUifValues<Tim11::Sr, 0, 1, ReadWriteMode, TimSrUifValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40014810, 32, ReadWriteMode, TimSrCcOfValuesBase, T...> ;

  struct Egr : public RegisterBase<0x40014814, 32, WriteMode>
  {
    using Cc1G = TimEgrCcGValues<Tim11::Egr, 1, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Ug = TimEgrUgValues<Tim11::Egr, 0, 1, WriteMode, TimEgrUgValuesBase> ;
  } ;

  template<typename... T> 
  using EgrPack  = Register<0x40014814, 32, WriteMode, TimEgrCcGValuesBase, T...> ;

  struct Ccmr1Output : public RegisterBase<0x40014818, 32, ReadWriteMode>
  {
    using Oc1M = TimCcmrOutputOcMValues<Tim11::Ccmr1Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc1Pe = TimCcmrOutputOcPeValues<Tim11::Ccmr1Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc1Fe = TimCcmrOutputOcFeValues<Tim11::Ccmr1Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc1S = TimCcmrOutputCcSValues<Tim11::Ccmr1Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1OutputPack  = Register<0x40014818, 32, ReadWriteMode, TimCcmrOutputOcMValuesBase, T...> ;

  struct Ccmr1Input : public RegisterBase<0x40014818, 32, ReadWriteMode>
  {
    using Ic1F = TimCcmrInputIcFValues<Tim11::Ccmr1Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Icpcs = TimCcmrInputIcpcsValues<Tim11::Ccmr1Input, 2, 2, ReadWriteMode, TimCcmrInputIcpcsValuesBase> ;
    using Cc1S = TimCcmrInputCcSValues<Tim11::Ccmr1Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1InputPack  = Register<0x40014818, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccer : public RegisterBase<0x40014820, 32, ReadWriteMode>
  {
    using Cc1Np = TimCcerCcNpValues<Tim11::Ccer, 3, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc1P = TimCcerCcPValues<Tim11::Ccer, 1, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc1E = TimCcerCcEValues<Tim11::Ccer, 0, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
  } ;

  template<typename... T> 
  using CcerPack  = Register<0x40014820, 32, ReadWriteMode, TimCcerCcNpValuesBase, T...> ;

  struct Cnt : public RegisterBase<0x40014824, 32, ReadWriteMode>
  {
    using CntField = ReadWriteMode<Tim11::Cnt, 0, 16> ;
  } ;

  template<typename... T> 
  using CntPack  = Register<0x40014824, 32, ReadWriteMode, TimCntCntValuesBase, T...> ;

  struct Psc : public RegisterBase<0x40014828, 32, ReadWriteMode>
  {
    using PscField = ReadWriteMode<Tim11::Psc, 0, 16> ;
  } ;

  template<typename... T> 
  using PscPack  = Register<0x40014828, 32, ReadWriteMode, TimPscPscValuesBase, T...> ;

  struct Arr : public RegisterBase<0x4001482C, 32, ReadWriteMode>
  {
    using ArrField = ReadWriteMode<Tim11::Arr, 0, 16> ;
  } ;

  template<typename... T> 
  using ArrPack  = Register<0x4001482C, 32, ReadWriteMode, TimArrArrValuesBase, T...> ;

  struct Ccr1 : public RegisterBase<0x40014834, 32, ReadWriteMode>
  {
    using Ccr1Field = ReadWriteMode<Tim11::Ccr1, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr1Pack  = Register<0x40014834, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

  struct Or : public RegisterBase<0x40014850, 32, ReadWriteMode>
  {
    using Rmp = TimOrRmpValues<Tim11::Or, 0, 2, ReadWriteMode, TimOrRmpValuesBase> ;
  } ;

  template<typename... T> 
  using OrPack  = Register<0x40014850, 32, ReadWriteMode, TimOrRmpValuesBase, T...> ;

} ;

#endif //#if !defined(TIM11REGISTERS_HPP)
