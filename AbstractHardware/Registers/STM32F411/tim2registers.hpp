/*******************************************************************************
* Filename      : tim2registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM2REGISTERS_HPP)
#define TIM2REGISTERS_HPP

#include "tim2bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Tim2
{
  struct Cr1 : public RegisterBase<0x40000000, 32, ReadWriteMode>
  {
    using Ckd = TimCrCkdValues<Tim2::Cr1, 8, 2, ReadWriteMode, TimCrCkdValuesBase> ;
    using Arpe = TimCrArpeValues<Tim2::Cr1, 7, 1, ReadWriteMode, TimCrArpeValuesBase> ;
    using Cms = TimCrCmsValues<Tim2::Cr1, 5, 2, ReadWriteMode, TimCrCmsValuesBase> ;
    using Dir = TimCrDirValues<Tim2::Cr1, 4, 1, ReadWriteMode, TimCrDirValuesBase> ;
    using Opm = TimCrOpmValues<Tim2::Cr1, 3, 1, ReadWriteMode, TimCrOpmValuesBase> ;
    using Urs = TimCrUrsValues<Tim2::Cr1, 2, 1, ReadWriteMode, TimCrUrsValuesBase> ;
    using Udis = TimCrUdisValues<Tim2::Cr1, 1, 1, ReadWriteMode, TimCrUdisValuesBase> ;
    using Cen = TimCrCenValues<Tim2::Cr1, 0, 1, ReadWriteMode, TimCrCenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40000000, 32, ReadWriteMode, TimCrCkdValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40000004, 32, ReadWriteMode>
  {
    using Ti1S = TimCrTiSValues<Tim2::Cr2, 7, 1, ReadWriteMode, TimCrTiSValuesBase> ;
    using Mms = TimCrMmsValues<Tim2::Cr2, 4, 3, ReadWriteMode, TimCrMmsValuesBase> ;
    using Ccds = TimCrCcdsValues<Tim2::Cr2, 3, 1, ReadWriteMode, TimCrCcdsValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40000004, 32, ReadWriteMode, TimCrTiSValuesBase, T...> ;

  struct Smcr : public RegisterBase<0x40000008, 32, ReadWriteMode>
  {
    using Etp = TimSmcrEtpValues<Tim2::Smcr, 15, 1, ReadWriteMode, TimSmcrEtpValuesBase> ;
    using Ece = TimSmcrEceValues<Tim2::Smcr, 14, 1, ReadWriteMode, TimSmcrEceValuesBase> ;
    using Etps = TimSmcrEtpsValues<Tim2::Smcr, 12, 2, ReadWriteMode, TimSmcrEtpsValuesBase> ;
    using Etf = TimSmcrEtfValues<Tim2::Smcr, 8, 4, ReadWriteMode, TimSmcrEtfValuesBase> ;
    using Msm = TimSmcrMsmValues<Tim2::Smcr, 7, 1, ReadWriteMode, TimSmcrMsmValuesBase> ;
    using Ts = TimSmcrTsValues<Tim2::Smcr, 4, 3, ReadWriteMode, TimSmcrTsValuesBase> ;
    using Sms = TimSmcrSmsValues<Tim2::Smcr, 0, 3, ReadWriteMode, TimSmcrSmsValuesBase> ;
  } ;

  template<typename... T> 
  using SmcrPack  = Register<0x40000008, 32, ReadWriteMode, TimSmcrEtpValuesBase, T...> ;

  struct Dier : public RegisterBase<0x4000000C, 32, ReadWriteMode>
  {
    using Tde = TimDierTdeValues<Tim2::Dier, 14, 1, ReadWriteMode, TimDierTdeValuesBase> ;
    using Cc4De = TimDierCcDeValues<Tim2::Dier, 12, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc3De = TimDierCcDeValues<Tim2::Dier, 11, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc2De = TimDierCcDeValues<Tim2::Dier, 10, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc1De = TimDierCcDeValues<Tim2::Dier, 9, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Ude = TimDierUdeValues<Tim2::Dier, 8, 1, ReadWriteMode, TimDierUdeValuesBase> ;
    using Tie = TimDierTieValues<Tim2::Dier, 6, 1, ReadWriteMode, TimDierTieValuesBase> ;
    using Cc4Ie = TimDierCcIeValues<Tim2::Dier, 4, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc3Ie = TimDierCcIeValues<Tim2::Dier, 3, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc2Ie = TimDierCcIeValues<Tim2::Dier, 2, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc1Ie = TimDierCcIeValues<Tim2::Dier, 1, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Uie = TimDierUieValues<Tim2::Dier, 0, 1, ReadWriteMode, TimDierUieValuesBase> ;
  } ;

  template<typename... T> 
  using DierPack  = Register<0x4000000C, 32, ReadWriteMode, TimDierTdeValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40000010, 32, ReadWriteMode>
  {
    using Cc4Of = TimSrCcOfValues<Tim2::Sr, 12, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc3Of = TimSrCcOfValues<Tim2::Sr, 11, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc2Of = TimSrCcOfValues<Tim2::Sr, 10, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc1Of = TimSrCcOfValues<Tim2::Sr, 9, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Tif = TimSrTifValues<Tim2::Sr, 6, 1, ReadWriteMode, TimSrTifValuesBase> ;
    using Cc4If = TimSrCcIfValues<Tim2::Sr, 4, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc3If = TimSrCcIfValues<Tim2::Sr, 3, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc2If = TimSrCcIfValues<Tim2::Sr, 2, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc1If = TimSrCcIfValues<Tim2::Sr, 1, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Uif = TimSrUifValues<Tim2::Sr, 0, 1, ReadWriteMode, TimSrUifValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40000010, 32, ReadWriteMode, TimSrCcOfValuesBase, T...> ;

  struct Egr : public RegisterBase<0x40000014, 32, WriteMode>
  {
    using Tg = TimEgrTgValues<Tim2::Egr, 6, 1, WriteMode, TimEgrTgValuesBase> ;
    using Cc4G = TimEgrCcGValues<Tim2::Egr, 4, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc3G = TimEgrCcGValues<Tim2::Egr, 3, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc2G = TimEgrCcGValues<Tim2::Egr, 2, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc1G = TimEgrCcGValues<Tim2::Egr, 1, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Ug = TimEgrUgValues<Tim2::Egr, 0, 1, WriteMode, TimEgrUgValuesBase> ;
  } ;

  template<typename... T> 
  using EgrPack  = Register<0x40000014, 32, WriteMode, TimEgrTgValuesBase, T...> ;

  struct Ccmr1Output : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using Oc2Ce = TimCcmrOutputOcCeValues<Tim2::Ccmr1Output, 15, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc2M = TimCcmrOutputOcMValues<Tim2::Ccmr1Output, 12, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc2Pe = TimCcmrOutputOcPeValues<Tim2::Ccmr1Output, 11, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc2Fe = TimCcmrOutputOcFeValues<Tim2::Ccmr1Output, 10, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc2S = TimCcmrOutputCcSValues<Tim2::Ccmr1Output, 8, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
    using Oc1Ce = TimCcmrOutputOcCeValues<Tim2::Ccmr1Output, 7, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc1M = TimCcmrOutputOcMValues<Tim2::Ccmr1Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc1Pe = TimCcmrOutputOcPeValues<Tim2::Ccmr1Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc1Fe = TimCcmrOutputOcFeValues<Tim2::Ccmr1Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc1S = TimCcmrOutputCcSValues<Tim2::Ccmr1Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1OutputPack  = Register<0x40000018, 32, ReadWriteMode, TimCcmrOutputOcCeValuesBase, T...> ;

  struct Ccmr1Input : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using Ic2F = TimCcmrInputIcFValues<Tim2::Ccmr1Input, 12, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic2Pcs = TimCcmrInputIcPcsValues<Tim2::Ccmr1Input, 10, 2, ReadWriteMode, TimCcmrInputIcPcsValuesBase> ;
    using Cc2S = TimCcmrInputCcSValues<Tim2::Ccmr1Input, 8, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
    using Ic1F = TimCcmrInputIcFValues<Tim2::Ccmr1Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Icpcs = TimCcmrInputIcpcsValues<Tim2::Ccmr1Input, 2, 2, ReadWriteMode, TimCcmrInputIcpcsValuesBase> ;
    using Cc1S = TimCcmrInputCcSValues<Tim2::Ccmr1Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1InputPack  = Register<0x40000018, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccmr2Output : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using O24Ce = TimCcmrOutputOCeValues<Tim2::Ccmr2Output, 15, 1, ReadWriteMode, TimCcmrOutputOCeValuesBase> ;
    using Oc4M = TimCcmrOutputOcMValues<Tim2::Ccmr2Output, 12, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc4Pe = TimCcmrOutputOcPeValues<Tim2::Ccmr2Output, 11, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc4Fe = TimCcmrOutputOcFeValues<Tim2::Ccmr2Output, 10, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc4S = TimCcmrOutputCcSValues<Tim2::Ccmr2Output, 8, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
    using Oc3Ce = TimCcmrOutputOcCeValues<Tim2::Ccmr2Output, 7, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc3M = TimCcmrOutputOcMValues<Tim2::Ccmr2Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc3Pe = TimCcmrOutputOcPeValues<Tim2::Ccmr2Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc3Fe = TimCcmrOutputOcFeValues<Tim2::Ccmr2Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc3S = TimCcmrOutputCcSValues<Tim2::Ccmr2Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr2OutputPack  = Register<0x4000001C, 32, ReadWriteMode, TimCcmrOutputOCeValuesBase, T...> ;

  struct Ccmr2Input : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using Ic4F = TimCcmrInputIcFValues<Tim2::Ccmr2Input, 12, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic4Psc = TimCcmrInputIcPscValues<Tim2::Ccmr2Input, 10, 2, ReadWriteMode, TimCcmrInputIcPscValuesBase> ;
    using Cc4S = TimCcmrInputCcSValues<Tim2::Ccmr2Input, 8, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
    using Ic3F = TimCcmrInputIcFValues<Tim2::Ccmr2Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic3Psc = TimCcmrInputIcPscValues<Tim2::Ccmr2Input, 2, 2, ReadWriteMode, TimCcmrInputIcPscValuesBase> ;
    using Cc3S = TimCcmrInputCcSValues<Tim2::Ccmr2Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr2InputPack  = Register<0x4000001C, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccer : public RegisterBase<0x40000020, 32, ReadWriteMode>
  {
    using Cc4Np = TimCcerCcNpValues<Tim2::Ccer, 15, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc4P = TimCcerCcPValues<Tim2::Ccer, 13, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc4E = TimCcerCcEValues<Tim2::Ccer, 12, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc3Np = TimCcerCcNpValues<Tim2::Ccer, 11, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc3P = TimCcerCcPValues<Tim2::Ccer, 9, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc3E = TimCcerCcEValues<Tim2::Ccer, 8, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc2Np = TimCcerCcNpValues<Tim2::Ccer, 7, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc2P = TimCcerCcPValues<Tim2::Ccer, 5, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc2E = TimCcerCcEValues<Tim2::Ccer, 4, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc1Np = TimCcerCcNpValues<Tim2::Ccer, 3, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc1P = TimCcerCcPValues<Tim2::Ccer, 1, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc1E = TimCcerCcEValues<Tim2::Ccer, 0, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
  } ;

  template<typename... T> 
  using CcerPack  = Register<0x40000020, 32, ReadWriteMode, TimCcerCcNpValuesBase, T...> ;

  struct Cnt : public RegisterBase<0x40000024, 32, ReadWriteMode>
  {
    using CntH = ReadWriteMode<Tim2::Cnt, 16, 16> ;
    using CntL = ReadWriteMode<Tim2::Cnt, 0, 16> ;
  } ;

  template<typename... T> 
  using CntPack  = Register<0x40000024, 32, ReadWriteMode, TimCntCntHValuesBase, T...> ;

  struct Psc : public RegisterBase<0x40000028, 32, ReadWriteMode>
  {
    using PscField = ReadWriteMode<Tim2::Psc, 0, 16> ;
  } ;

  template<typename... T> 
  using PscPack  = Register<0x40000028, 32, ReadWriteMode, TimPscPscValuesBase, T...> ;

  struct Arr : public RegisterBase<0x4000002C, 32, ReadWriteMode>
  {
    using ArrH = ReadWriteMode<Tim2::Arr, 16, 16> ;
    using ArrL = ReadWriteMode<Tim2::Arr, 0, 16> ;
  } ;

  template<typename... T> 
  using ArrPack  = Register<0x4000002C, 32, ReadWriteMode, TimArrArrHValuesBase, T...> ;

  struct Ccr1 : public RegisterBase<0x40000034, 32, ReadWriteMode>
  {
    using Ccr1H = ReadWriteMode<Tim2::Ccr1, 16, 16> ;
    using Ccr1L = ReadWriteMode<Tim2::Ccr1, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr1Pack  = Register<0x40000034, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Ccr2 : public RegisterBase<0x40000038, 32, ReadWriteMode>
  {
    using Ccr2H = ReadWriteMode<Tim2::Ccr2, 16, 16> ;
    using Ccr2L = ReadWriteMode<Tim2::Ccr2, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr2Pack  = Register<0x40000038, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Ccr3 : public RegisterBase<0x4000003C, 32, ReadWriteMode>
  {
    using Ccr3H = ReadWriteMode<Tim2::Ccr3, 16, 16> ;
    using Ccr3L = ReadWriteMode<Tim2::Ccr3, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr3Pack  = Register<0x4000003C, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Ccr4 : public RegisterBase<0x40000040, 32, ReadWriteMode>
  {
    using Ccr4H = ReadWriteMode<Tim2::Ccr4, 16, 16> ;
    using Ccr4L = ReadWriteMode<Tim2::Ccr4, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr4Pack  = Register<0x40000040, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Dcr : public RegisterBase<0x40000048, 32, ReadWriteMode>
  {
    using Dbl = TimDcrDblValues<Tim2::Dcr, 8, 5, ReadWriteMode, TimDcrDblValuesBase> ;
    using Dba = TimDcrDbaValues<Tim2::Dcr, 0, 5, ReadWriteMode, TimDcrDbaValuesBase> ;
  } ;

  template<typename... T> 
  using DcrPack  = Register<0x40000048, 32, ReadWriteMode, TimDcrDblValuesBase, T...> ;

  struct Dmar : public RegisterBase<0x4000004C, 32, ReadWriteMode>
  {
    using Dmab = ReadWriteMode<Tim2::Dmar, 0, 16> ;
  } ;

  template<typename... T> 
  using DmarPack  = Register<0x4000004C, 32, ReadWriteMode, TimDmarDmabValuesBase, T...> ;

  struct Or : public RegisterBase<0x40000050, 32, ReadWriteMode>
  {
    using Itr1Rmp = TimOrItrRmpValues<Tim2::Or, 10, 2, ReadWriteMode, TimOrItrRmpValuesBase> ;
  } ;

  template<typename... T> 
  using OrPack  = Register<0x40000050, 32, ReadWriteMode, TimOrItrRmpValuesBase, T...> ;

} ;

#endif //#if !defined(TIM2REGISTERS_HPP)
