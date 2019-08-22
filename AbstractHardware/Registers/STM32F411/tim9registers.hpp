/*******************************************************************************
* Filename      : tim9registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM9REGISTERS_HPP)
#define TIM9REGISTERS_HPP

#include "tim9bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Tim9
{
  struct Cr1 : public RegisterBase<0x40014000, 32, ReadWriteMode>
  {
    using Ckd = TimCrCkdValues<Tim9::Cr1, 8, 2, ReadWriteMode, TimCrCkdValuesBase> ;
    using Arpe = TimCrArpeValues<Tim9::Cr1, 7, 1, ReadWriteMode, TimCrArpeValuesBase> ;
    using Opm = TimCrOpmValues<Tim9::Cr1, 3, 1, ReadWriteMode, TimCrOpmValuesBase> ;
    using Urs = TimCrUrsValues<Tim9::Cr1, 2, 1, ReadWriteMode, TimCrUrsValuesBase> ;
    using Udis = TimCrUdisValues<Tim9::Cr1, 1, 1, ReadWriteMode, TimCrUdisValuesBase> ;
    using Cen = TimCrCenValues<Tim9::Cr1, 0, 1, ReadWriteMode, TimCrCenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40014000, 32, ReadWriteMode, TimCrCkdValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40014004, 32, ReadWriteMode>
  {
    using Mms = TimCrMmsValues<Tim9::Cr2, 4, 3, ReadWriteMode, TimCrMmsValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40014004, 32, ReadWriteMode, TimCrMmsValuesBase, T...> ;

  struct Smcr : public RegisterBase<0x40014008, 32, ReadWriteMode>
  {
    using Msm = TimSmcrMsmValues<Tim9::Smcr, 7, 1, ReadWriteMode, TimSmcrMsmValuesBase> ;
    using Ts = TimSmcrTsValues<Tim9::Smcr, 4, 3, ReadWriteMode, TimSmcrTsValuesBase> ;
    using Sms = TimSmcrSmsValues<Tim9::Smcr, 0, 3, ReadWriteMode, TimSmcrSmsValuesBase> ;
  } ;

  template<typename... T> 
  using SmcrPack  = Register<0x40014008, 32, ReadWriteMode, TimSmcrMsmValuesBase, T...> ;

  struct Dier : public RegisterBase<0x4001400C, 32, ReadWriteMode>
  {
    using Tie = TimDierTieValues<Tim9::Dier, 6, 1, ReadWriteMode, TimDierTieValuesBase> ;
    using Cc2Ie = TimDierCcIeValues<Tim9::Dier, 2, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc1Ie = TimDierCcIeValues<Tim9::Dier, 1, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Uie = TimDierUieValues<Tim9::Dier, 0, 1, ReadWriteMode, TimDierUieValuesBase> ;
  } ;

  template<typename... T> 
  using DierPack  = Register<0x4001400C, 32, ReadWriteMode, TimDierTieValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40014010, 32, ReadWriteMode>
  {
    using Cc2Of = TimSrCcOfValues<Tim9::Sr, 10, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc1Of = TimSrCcOfValues<Tim9::Sr, 9, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Tif = TimSrTifValues<Tim9::Sr, 6, 1, ReadWriteMode, TimSrTifValuesBase> ;
    using Cc2If = TimSrCcIfValues<Tim9::Sr, 2, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc1If = TimSrCcIfValues<Tim9::Sr, 1, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Uif = TimSrUifValues<Tim9::Sr, 0, 1, ReadWriteMode, TimSrUifValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40014010, 32, ReadWriteMode, TimSrCcOfValuesBase, T...> ;

  struct Egr : public RegisterBase<0x40014014, 32, WriteMode>
  {
    using Tg = TimEgrTgValues<Tim9::Egr, 6, 1, WriteMode, TimEgrTgValuesBase> ;
    using Cc2G = TimEgrCcGValues<Tim9::Egr, 2, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc1G = TimEgrCcGValues<Tim9::Egr, 1, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Ug = TimEgrUgValues<Tim9::Egr, 0, 1, WriteMode, TimEgrUgValuesBase> ;
  } ;

  template<typename... T> 
  using EgrPack  = Register<0x40014014, 32, WriteMode, TimEgrTgValuesBase, T...> ;

  struct Ccmr1Output : public RegisterBase<0x40014018, 32, ReadWriteMode>
  {
    using Oc2M = TimCcmrOutputOcMValues<Tim9::Ccmr1Output, 12, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc2Pe = TimCcmrOutputOcPeValues<Tim9::Ccmr1Output, 11, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc2Fe = TimCcmrOutputOcFeValues<Tim9::Ccmr1Output, 10, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc2S = TimCcmrOutputCcSValues<Tim9::Ccmr1Output, 8, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
    using Oc1M = TimCcmrOutputOcMValues<Tim9::Ccmr1Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc1Pe = TimCcmrOutputOcPeValues<Tim9::Ccmr1Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc1Fe = TimCcmrOutputOcFeValues<Tim9::Ccmr1Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc1S = TimCcmrOutputCcSValues<Tim9::Ccmr1Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1OutputPack  = Register<0x40014018, 32, ReadWriteMode, TimCcmrOutputOcMValuesBase, T...> ;

  struct Ccmr1Input : public RegisterBase<0x40014018, 32, ReadWriteMode>
  {
    using Ic2F = TimCcmrInputIcFValues<Tim9::Ccmr1Input, 12, 3, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic2Pcs = TimCcmrInputIcPcsValues<Tim9::Ccmr1Input, 10, 2, ReadWriteMode, TimCcmrInputIcPcsValuesBase> ;
    using Cc2S = TimCcmrInputCcSValues<Tim9::Ccmr1Input, 8, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
    using Ic1F = TimCcmrInputIcFValues<Tim9::Ccmr1Input, 4, 3, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Icpcs = TimCcmrInputIcpcsValues<Tim9::Ccmr1Input, 2, 2, ReadWriteMode, TimCcmrInputIcpcsValuesBase> ;
    using Cc1S = TimCcmrInputCcSValues<Tim9::Ccmr1Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1InputPack  = Register<0x40014018, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccer : public RegisterBase<0x40014020, 32, ReadWriteMode>
  {
    using Cc2Np = TimCcerCcNpValues<Tim9::Ccer, 7, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc2P = TimCcerCcPValues<Tim9::Ccer, 5, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc2E = TimCcerCcEValues<Tim9::Ccer, 4, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc1Np = TimCcerCcNpValues<Tim9::Ccer, 3, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc1P = TimCcerCcPValues<Tim9::Ccer, 1, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc1E = TimCcerCcEValues<Tim9::Ccer, 0, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
  } ;

  template<typename... T> 
  using CcerPack  = Register<0x40014020, 32, ReadWriteMode, TimCcerCcNpValuesBase, T...> ;

  struct Cnt : public RegisterBase<0x40014024, 32, ReadWriteMode>
  {
    using CntField = ReadWriteMode<Tim9::Cnt, 0, 16> ;
  } ;

  template<typename... T> 
  using CntPack  = Register<0x40014024, 32, ReadWriteMode, TimCntCntValuesBase, T...> ;

  struct Psc : public RegisterBase<0x40014028, 32, ReadWriteMode>
  {
    using PscField = ReadWriteMode<Tim9::Psc, 0, 16> ;
  } ;

  template<typename... T> 
  using PscPack  = Register<0x40014028, 32, ReadWriteMode, TimPscPscValuesBase, T...> ;

  struct Arr : public RegisterBase<0x4001402C, 32, ReadWriteMode>
  {
    using ArrField = ReadWriteMode<Tim9::Arr, 0, 16> ;
  } ;

  template<typename... T> 
  using ArrPack  = Register<0x4001402C, 32, ReadWriteMode, TimArrArrValuesBase, T...> ;

  struct Ccr1 : public RegisterBase<0x40014034, 32, ReadWriteMode>
  {
    using Ccr1Field = ReadWriteMode<Tim9::Ccr1, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr1Pack  = Register<0x40014034, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

  struct Ccr2 : public RegisterBase<0x40014038, 32, ReadWriteMode>
  {
    using Ccr2Field = ReadWriteMode<Tim9::Ccr2, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr2Pack  = Register<0x40014038, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

} ;

#endif //#if !defined(TIM9REGISTERS_HPP)
