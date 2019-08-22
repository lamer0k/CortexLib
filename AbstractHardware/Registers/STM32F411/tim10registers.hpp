/*******************************************************************************
* Filename      : tim10registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM10REGISTERS_HPP)
#define TIM10REGISTERS_HPP

#include "tim10bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Tim10
{
  struct Cr1 : public RegisterBase<0x40014400, 32, ReadWriteMode>
  {
    using Ckd = TimCrCkdValues<Tim10::Cr1, 8, 2, ReadWriteMode, TimCrCkdValuesBase> ;
    using Arpe = TimCrArpeValues<Tim10::Cr1, 7, 1, ReadWriteMode, TimCrArpeValuesBase> ;
    using Urs = TimCrUrsValues<Tim10::Cr1, 2, 1, ReadWriteMode, TimCrUrsValuesBase> ;
    using Udis = TimCrUdisValues<Tim10::Cr1, 1, 1, ReadWriteMode, TimCrUdisValuesBase> ;
    using Cen = TimCrCenValues<Tim10::Cr1, 0, 1, ReadWriteMode, TimCrCenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40014400, 32, ReadWriteMode, TimCrCkdValuesBase, T...> ;

  struct Dier : public RegisterBase<0x4001440C, 32, ReadWriteMode>
  {
    using Cc1Ie = TimDierCcIeValues<Tim10::Dier, 1, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Uie = TimDierUieValues<Tim10::Dier, 0, 1, ReadWriteMode, TimDierUieValuesBase> ;
  } ;

  template<typename... T> 
  using DierPack  = Register<0x4001440C, 32, ReadWriteMode, TimDierCcIeValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40014410, 32, ReadWriteMode>
  {
    using Cc1Of = TimSrCcOfValues<Tim10::Sr, 9, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc1If = TimSrCcIfValues<Tim10::Sr, 1, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Uif = TimSrUifValues<Tim10::Sr, 0, 1, ReadWriteMode, TimSrUifValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40014410, 32, ReadWriteMode, TimSrCcOfValuesBase, T...> ;

  struct Egr : public RegisterBase<0x40014414, 32, WriteMode>
  {
    using Cc1G = TimEgrCcGValues<Tim10::Egr, 1, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Ug = TimEgrUgValues<Tim10::Egr, 0, 1, WriteMode, TimEgrUgValuesBase> ;
  } ;

  template<typename... T> 
  using EgrPack  = Register<0x40014414, 32, WriteMode, TimEgrCcGValuesBase, T...> ;

  struct Ccmr1Output : public RegisterBase<0x40014418, 32, ReadWriteMode>
  {
    using Oc1M = TimCcmrOutputOcMValues<Tim10::Ccmr1Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc1Pe = TimCcmrOutputOcPeValues<Tim10::Ccmr1Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc1Fe = TimCcmrOutputOcFeValues<Tim10::Ccmr1Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc1S = TimCcmrOutputCcSValues<Tim10::Ccmr1Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1OutputPack  = Register<0x40014418, 32, ReadWriteMode, TimCcmrOutputOcMValuesBase, T...> ;

  struct Ccmr1Input : public RegisterBase<0x40014418, 32, ReadWriteMode>
  {
    using Ic1F = TimCcmrInputIcFValues<Tim10::Ccmr1Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Icpcs = TimCcmrInputIcpcsValues<Tim10::Ccmr1Input, 2, 2, ReadWriteMode, TimCcmrInputIcpcsValuesBase> ;
    using Cc1S = TimCcmrInputCcSValues<Tim10::Ccmr1Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1InputPack  = Register<0x40014418, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccer : public RegisterBase<0x40014420, 32, ReadWriteMode>
  {
    using Cc1Np = TimCcerCcNpValues<Tim10::Ccer, 3, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc1P = TimCcerCcPValues<Tim10::Ccer, 1, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc1E = TimCcerCcEValues<Tim10::Ccer, 0, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
  } ;

  template<typename... T> 
  using CcerPack  = Register<0x40014420, 32, ReadWriteMode, TimCcerCcNpValuesBase, T...> ;

  struct Cnt : public RegisterBase<0x40014424, 32, ReadWriteMode>
  {
    using CntField = ReadWriteMode<Tim10::Cnt, 0, 16> ;
  } ;

  template<typename... T> 
  using CntPack  = Register<0x40014424, 32, ReadWriteMode, TimCntCntValuesBase, T...> ;

  struct Psc : public RegisterBase<0x40014428, 32, ReadWriteMode>
  {
    using PscField = ReadWriteMode<Tim10::Psc, 0, 16> ;
  } ;

  template<typename... T> 
  using PscPack  = Register<0x40014428, 32, ReadWriteMode, TimPscPscValuesBase, T...> ;

  struct Arr : public RegisterBase<0x4001442C, 32, ReadWriteMode>
  {
    using ArrField = ReadWriteMode<Tim10::Arr, 0, 16> ;
  } ;

  template<typename... T> 
  using ArrPack  = Register<0x4001442C, 32, ReadWriteMode, TimArrArrValuesBase, T...> ;

  struct Ccr1 : public RegisterBase<0x40014434, 32, ReadWriteMode>
  {
    using Ccr1Field = ReadWriteMode<Tim10::Ccr1, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr1Pack  = Register<0x40014434, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

} ;

#endif //#if !defined(TIM10REGISTERS_HPP)
