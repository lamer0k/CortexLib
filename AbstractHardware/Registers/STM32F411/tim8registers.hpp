/*******************************************************************************
* Filename      : tim8registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM8REGISTERS_HPP)
#define TIM8REGISTERS_HPP

#include "tim8bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Tim8
{
  struct Cr1 : public RegisterBase<0x40010400, 32, ReadWriteMode>
  {
    using Ckd = TimCrCkdValues<Tim8::Cr1, 8, 2, ReadWriteMode, TimCrCkdValuesBase> ;
    using Arpe = TimCrArpeValues<Tim8::Cr1, 7, 1, ReadWriteMode, TimCrArpeValuesBase> ;
    using Cms = TimCrCmsValues<Tim8::Cr1, 5, 2, ReadWriteMode, TimCrCmsValuesBase> ;
    using Dir = TimCrDirValues<Tim8::Cr1, 4, 1, ReadWriteMode, TimCrDirValuesBase> ;
    using Opm = TimCrOpmValues<Tim8::Cr1, 3, 1, ReadWriteMode, TimCrOpmValuesBase> ;
    using Urs = TimCrUrsValues<Tim8::Cr1, 2, 1, ReadWriteMode, TimCrUrsValuesBase> ;
    using Udis = TimCrUdisValues<Tim8::Cr1, 1, 1, ReadWriteMode, TimCrUdisValuesBase> ;
    using Cen = TimCrCenValues<Tim8::Cr1, 0, 1, ReadWriteMode, TimCrCenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40010400, 32, ReadWriteMode, TimCrCkdValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using Ois4 = TimCrOisValues<Tim8::Cr2, 14, 1, ReadWriteMode, TimCrOisValuesBase> ;
    using Ois3N = TimCrOisNValues<Tim8::Cr2, 13, 1, ReadWriteMode, TimCrOisNValuesBase> ;
    using Ois3 = TimCrOisValues<Tim8::Cr2, 12, 1, ReadWriteMode, TimCrOisValuesBase> ;
    using Ois2N = TimCrOisNValues<Tim8::Cr2, 11, 1, ReadWriteMode, TimCrOisNValuesBase> ;
    using Ois2 = TimCrOisValues<Tim8::Cr2, 10, 1, ReadWriteMode, TimCrOisValuesBase> ;
    using Ois1N = TimCrOisNValues<Tim8::Cr2, 9, 1, ReadWriteMode, TimCrOisNValuesBase> ;
    using Ois1 = TimCrOisValues<Tim8::Cr2, 8, 1, ReadWriteMode, TimCrOisValuesBase> ;
    using Ti1S = TimCrTiSValues<Tim8::Cr2, 7, 1, ReadWriteMode, TimCrTiSValuesBase> ;
    using Mms = TimCrMmsValues<Tim8::Cr2, 4, 3, ReadWriteMode, TimCrMmsValuesBase> ;
    using Ccds = TimCrCcdsValues<Tim8::Cr2, 3, 1, ReadWriteMode, TimCrCcdsValuesBase> ;
    using Ccus = TimCrCcusValues<Tim8::Cr2, 2, 1, ReadWriteMode, TimCrCcusValuesBase> ;
    using Ccpc = TimCrCcpcValues<Tim8::Cr2, 0, 1, ReadWriteMode, TimCrCcpcValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40010404, 32, ReadWriteMode, TimCrOisValuesBase, T...> ;

  struct Smcr : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using Etp = TimSmcrEtpValues<Tim8::Smcr, 15, 1, ReadWriteMode, TimSmcrEtpValuesBase> ;
    using Ece = TimSmcrEceValues<Tim8::Smcr, 14, 1, ReadWriteMode, TimSmcrEceValuesBase> ;
    using Etps = TimSmcrEtpsValues<Tim8::Smcr, 12, 2, ReadWriteMode, TimSmcrEtpsValuesBase> ;
    using Etf = TimSmcrEtfValues<Tim8::Smcr, 8, 4, ReadWriteMode, TimSmcrEtfValuesBase> ;
    using Msm = TimSmcrMsmValues<Tim8::Smcr, 7, 1, ReadWriteMode, TimSmcrMsmValuesBase> ;
    using Ts = TimSmcrTsValues<Tim8::Smcr, 4, 3, ReadWriteMode, TimSmcrTsValuesBase> ;
    using Sms = TimSmcrSmsValues<Tim8::Smcr, 0, 3, ReadWriteMode, TimSmcrSmsValuesBase> ;
  } ;

  template<typename... T> 
  using SmcrPack  = Register<0x40010408, 32, ReadWriteMode, TimSmcrEtpValuesBase, T...> ;

  struct Dier : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using Tde = TimDierTdeValues<Tim8::Dier, 14, 1, ReadWriteMode, TimDierTdeValuesBase> ;
    using Comde = TimDierComdeValues<Tim8::Dier, 13, 1, ReadWriteMode, TimDierComdeValuesBase> ;
    using Cc4De = TimDierCcDeValues<Tim8::Dier, 12, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc3De = TimDierCcDeValues<Tim8::Dier, 11, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc2De = TimDierCcDeValues<Tim8::Dier, 10, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc1De = TimDierCcDeValues<Tim8::Dier, 9, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Ude = TimDierUdeValues<Tim8::Dier, 8, 1, ReadWriteMode, TimDierUdeValuesBase> ;
    using Bie = TimDierBieValues<Tim8::Dier, 7, 1, ReadWriteMode, TimDierBieValuesBase> ;
    using Tie = TimDierTieValues<Tim8::Dier, 6, 1, ReadWriteMode, TimDierTieValuesBase> ;
    using Comie = TimDierComieValues<Tim8::Dier, 5, 1, ReadWriteMode, TimDierComieValuesBase> ;
    using Cc4Ie = TimDierCcIeValues<Tim8::Dier, 4, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc3Ie = TimDierCcIeValues<Tim8::Dier, 3, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc2Ie = TimDierCcIeValues<Tim8::Dier, 2, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc1Ie = TimDierCcIeValues<Tim8::Dier, 1, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Uie = TimDierUieValues<Tim8::Dier, 0, 1, ReadWriteMode, TimDierUieValuesBase> ;
  } ;

  template<typename... T> 
  using DierPack  = Register<0x4001040C, 32, ReadWriteMode, TimDierTdeValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using Cc4Of = TimSrCcOfValues<Tim8::Sr, 12, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc3Of = TimSrCcOfValues<Tim8::Sr, 11, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc2Of = TimSrCcOfValues<Tim8::Sr, 10, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc1Of = TimSrCcOfValues<Tim8::Sr, 9, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Bif = TimSrBifValues<Tim8::Sr, 7, 1, ReadWriteMode, TimSrBifValuesBase> ;
    using Tif = TimSrTifValues<Tim8::Sr, 6, 1, ReadWriteMode, TimSrTifValuesBase> ;
    using Comif = TimSrComifValues<Tim8::Sr, 5, 1, ReadWriteMode, TimSrComifValuesBase> ;
    using Cc4If = TimSrCcIfValues<Tim8::Sr, 4, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc3If = TimSrCcIfValues<Tim8::Sr, 3, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc2If = TimSrCcIfValues<Tim8::Sr, 2, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc1If = TimSrCcIfValues<Tim8::Sr, 1, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Uif = TimSrUifValues<Tim8::Sr, 0, 1, ReadWriteMode, TimSrUifValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40010410, 32, ReadWriteMode, TimSrCcOfValuesBase, T...> ;

  struct Egr : public RegisterBase<0x40010414, 32, WriteMode>
  {
    using Bg = TimEgrBgValues<Tim8::Egr, 7, 1, WriteMode, TimEgrBgValuesBase> ;
    using Tg = TimEgrTgValues<Tim8::Egr, 6, 1, WriteMode, TimEgrTgValuesBase> ;
    using Comg = TimEgrComgValues<Tim8::Egr, 5, 1, WriteMode, TimEgrComgValuesBase> ;
    using Cc4G = TimEgrCcGValues<Tim8::Egr, 4, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc3G = TimEgrCcGValues<Tim8::Egr, 3, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc2G = TimEgrCcGValues<Tim8::Egr, 2, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc1G = TimEgrCcGValues<Tim8::Egr, 1, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Ug = TimEgrUgValues<Tim8::Egr, 0, 1, WriteMode, TimEgrUgValuesBase> ;
  } ;

  template<typename... T> 
  using EgrPack  = Register<0x40010414, 32, WriteMode, TimEgrBgValuesBase, T...> ;

  struct Ccmr1Output : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using Oc2Ce = TimCcmrOutputOcCeValues<Tim8::Ccmr1Output, 15, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc2M = TimCcmrOutputOcMValues<Tim8::Ccmr1Output, 12, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc2Pe = TimCcmrOutputOcPeValues<Tim8::Ccmr1Output, 11, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc2Fe = TimCcmrOutputOcFeValues<Tim8::Ccmr1Output, 10, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc2S = TimCcmrOutputCcSValues<Tim8::Ccmr1Output, 8, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
    using Oc1Ce = TimCcmrOutputOcCeValues<Tim8::Ccmr1Output, 7, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc1M = TimCcmrOutputOcMValues<Tim8::Ccmr1Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc1Pe = TimCcmrOutputOcPeValues<Tim8::Ccmr1Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc1Fe = TimCcmrOutputOcFeValues<Tim8::Ccmr1Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc1S = TimCcmrOutputCcSValues<Tim8::Ccmr1Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1OutputPack  = Register<0x40010418, 32, ReadWriteMode, TimCcmrOutputOcCeValuesBase, T...> ;

  struct Ccmr1Input : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using Ic2F = TimCcmrInputIcFValues<Tim8::Ccmr1Input, 12, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic2Pcs = TimCcmrInputIcPcsValues<Tim8::Ccmr1Input, 10, 2, ReadWriteMode, TimCcmrInputIcPcsValuesBase> ;
    using Cc2S = TimCcmrInputCcSValues<Tim8::Ccmr1Input, 8, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
    using Ic1F = TimCcmrInputIcFValues<Tim8::Ccmr1Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Icpcs = TimCcmrInputIcpcsValues<Tim8::Ccmr1Input, 2, 2, ReadWriteMode, TimCcmrInputIcpcsValuesBase> ;
    using Cc1S = TimCcmrInputCcSValues<Tim8::Ccmr1Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1InputPack  = Register<0x40010418, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccmr2Output : public RegisterBase<0x4001041C, 32, ReadWriteMode>
  {
    using Oc4Ce = TimCcmrOutputOcCeValues<Tim8::Ccmr2Output, 15, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc4M = TimCcmrOutputOcMValues<Tim8::Ccmr2Output, 12, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc4Pe = TimCcmrOutputOcPeValues<Tim8::Ccmr2Output, 11, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc4Fe = TimCcmrOutputOcFeValues<Tim8::Ccmr2Output, 10, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc4S = TimCcmrOutputCcSValues<Tim8::Ccmr2Output, 8, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
    using Oc3Ce = TimCcmrOutputOcCeValues<Tim8::Ccmr2Output, 7, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc3M = TimCcmrOutputOcMValues<Tim8::Ccmr2Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc3Pe = TimCcmrOutputOcPeValues<Tim8::Ccmr2Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc3Fe = TimCcmrOutputOcFeValues<Tim8::Ccmr2Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc3S = TimCcmrOutputCcSValues<Tim8::Ccmr2Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr2OutputPack  = Register<0x4001041C, 32, ReadWriteMode, TimCcmrOutputOcCeValuesBase, T...> ;

  struct Ccmr2Input : public RegisterBase<0x4001041C, 32, ReadWriteMode>
  {
    using Ic4F = TimCcmrInputIcFValues<Tim8::Ccmr2Input, 12, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic4Psc = TimCcmrInputIcPscValues<Tim8::Ccmr2Input, 10, 2, ReadWriteMode, TimCcmrInputIcPscValuesBase> ;
    using Cc4S = TimCcmrInputCcSValues<Tim8::Ccmr2Input, 8, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
    using Ic3F = TimCcmrInputIcFValues<Tim8::Ccmr2Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic3Psc = TimCcmrInputIcPscValues<Tim8::Ccmr2Input, 2, 2, ReadWriteMode, TimCcmrInputIcPscValuesBase> ;
    using Cc3S = TimCcmrInputCcSValues<Tim8::Ccmr2Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr2InputPack  = Register<0x4001041C, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccer : public RegisterBase<0x40010420, 32, ReadWriteMode>
  {
    using Cc4P = TimCcerCcPValues<Tim8::Ccer, 13, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc4E = TimCcerCcEValues<Tim8::Ccer, 12, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc3Np = TimCcerCcNpValues<Tim8::Ccer, 11, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc3Ne = TimCcerCcNeValues<Tim8::Ccer, 10, 1, ReadWriteMode, TimCcerCcNeValuesBase> ;
    using Cc3P = TimCcerCcPValues<Tim8::Ccer, 9, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc3E = TimCcerCcEValues<Tim8::Ccer, 8, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc2Np = TimCcerCcNpValues<Tim8::Ccer, 7, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc2Ne = TimCcerCcNeValues<Tim8::Ccer, 6, 1, ReadWriteMode, TimCcerCcNeValuesBase> ;
    using Cc2P = TimCcerCcPValues<Tim8::Ccer, 5, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc2E = TimCcerCcEValues<Tim8::Ccer, 4, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc1Np = TimCcerCcNpValues<Tim8::Ccer, 3, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc1Ne = TimCcerCcNeValues<Tim8::Ccer, 2, 1, ReadWriteMode, TimCcerCcNeValuesBase> ;
    using Cc1P = TimCcerCcPValues<Tim8::Ccer, 1, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc1E = TimCcerCcEValues<Tim8::Ccer, 0, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
  } ;

  template<typename... T> 
  using CcerPack  = Register<0x40010420, 32, ReadWriteMode, TimCcerCcPValuesBase, T...> ;

  struct Cnt : public RegisterBase<0x40010424, 32, ReadWriteMode>
  {
    using CntField = ReadWriteMode<Tim8::Cnt, 0, 16> ;
  } ;

  template<typename... T> 
  using CntPack  = Register<0x40010424, 32, ReadWriteMode, TimCntCntValuesBase, T...> ;

  struct Psc : public RegisterBase<0x40010428, 32, ReadWriteMode>
  {
    using PscField = ReadWriteMode<Tim8::Psc, 0, 16> ;
  } ;

  template<typename... T> 
  using PscPack  = Register<0x40010428, 32, ReadWriteMode, TimPscPscValuesBase, T...> ;

  struct Arr : public RegisterBase<0x4001042C, 32, ReadWriteMode>
  {
    using ArrField = ReadWriteMode<Tim8::Arr, 0, 16> ;
  } ;

  template<typename... T> 
  using ArrPack  = Register<0x4001042C, 32, ReadWriteMode, TimArrArrValuesBase, T...> ;

  struct Ccr1 : public RegisterBase<0x40010434, 32, ReadWriteMode>
  {
    using Ccr1Field = ReadWriteMode<Tim8::Ccr1, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr1Pack  = Register<0x40010434, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

  struct Ccr2 : public RegisterBase<0x40010438, 32, ReadWriteMode>
  {
    using Ccr2Field = ReadWriteMode<Tim8::Ccr2, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr2Pack  = Register<0x40010438, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

  struct Ccr3 : public RegisterBase<0x4001043C, 32, ReadWriteMode>
  {
    using Ccr3Field = ReadWriteMode<Tim8::Ccr3, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr3Pack  = Register<0x4001043C, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

  struct Ccr4 : public RegisterBase<0x40010440, 32, ReadWriteMode>
  {
    using Ccr4Field = ReadWriteMode<Tim8::Ccr4, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr4Pack  = Register<0x40010440, 32, ReadWriteMode, TimCcrCcrValuesBase, T...> ;

  struct Dcr : public RegisterBase<0x40010448, 32, ReadWriteMode>
  {
    using Dbl = TimDcrDblValues<Tim8::Dcr, 8, 5, ReadWriteMode, TimDcrDblValuesBase> ;
    using Dba = TimDcrDbaValues<Tim8::Dcr, 0, 5, ReadWriteMode, TimDcrDbaValuesBase> ;
  } ;

  template<typename... T> 
  using DcrPack  = Register<0x40010448, 32, ReadWriteMode, TimDcrDblValuesBase, T...> ;

  struct Dmar : public RegisterBase<0x4001044C, 32, ReadWriteMode>
  {
    using Dmab = ReadWriteMode<Tim8::Dmar, 0, 16> ;
  } ;

  template<typename... T> 
  using DmarPack  = Register<0x4001044C, 32, ReadWriteMode, TimDmarDmabValuesBase, T...> ;

  struct Rcr : public RegisterBase<0x40010430, 32, ReadWriteMode>
  {
    using Rep = ReadWriteMode<Tim8::Rcr, 0, 8> ;
  } ;

  template<typename... T> 
  using RcrPack  = Register<0x40010430, 32, ReadWriteMode, TimRcrRepValuesBase, T...> ;

  struct Bdtr : public RegisterBase<0x40010444, 32, ReadWriteMode>
  {
    using Moe = TimBdtrMoeValues<Tim8::Bdtr, 15, 1, ReadWriteMode, TimBdtrMoeValuesBase> ;
    using Aoe = TimBdtrAoeValues<Tim8::Bdtr, 14, 1, ReadWriteMode, TimBdtrAoeValuesBase> ;
    using Bkp = TimBdtrBkpValues<Tim8::Bdtr, 13, 1, ReadWriteMode, TimBdtrBkpValuesBase> ;
    using Bke = TimBdtrBkeValues<Tim8::Bdtr, 12, 1, ReadWriteMode, TimBdtrBkeValuesBase> ;
    using Ossr = TimBdtrOssrValues<Tim8::Bdtr, 11, 1, ReadWriteMode, TimBdtrOssrValuesBase> ;
    using Ossi = TimBdtrOssiValues<Tim8::Bdtr, 10, 1, ReadWriteMode, TimBdtrOssiValuesBase> ;
    using Lock = TimBdtrLockValues<Tim8::Bdtr, 8, 2, ReadWriteMode, TimBdtrLockValuesBase> ;
    using Dtg = ReadWriteMode<Tim8::Bdtr, 0, 8> ;
  } ;

  template<typename... T> 
  using BdtrPack  = Register<0x40010444, 32, ReadWriteMode, TimBdtrMoeValuesBase, T...> ;

} ;

#endif //#if !defined(TIM8REGISTERS_HPP)
