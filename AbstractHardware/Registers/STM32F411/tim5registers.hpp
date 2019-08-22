/*******************************************************************************
* Filename      : tim5registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM5REGISTERS_HPP)
#define TIM5REGISTERS_HPP

#include "tim5bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Tim5
{
  struct Cr1 : public RegisterBase<0x40000C00, 32, ReadWriteMode>
  {
    using Ckd = TimCrCkdValues<Tim5::Cr1, 8, 2, ReadWriteMode, TimCrCkdValuesBase> ;
    using Arpe = TimCrArpeValues<Tim5::Cr1, 7, 1, ReadWriteMode, TimCrArpeValuesBase> ;
    using Cms = TimCrCmsValues<Tim5::Cr1, 5, 2, ReadWriteMode, TimCrCmsValuesBase> ;
    using Dir = TimCrDirValues<Tim5::Cr1, 4, 1, ReadWriteMode, TimCrDirValuesBase> ;
    using Opm = TimCrOpmValues<Tim5::Cr1, 3, 1, ReadWriteMode, TimCrOpmValuesBase> ;
    using Urs = TimCrUrsValues<Tim5::Cr1, 2, 1, ReadWriteMode, TimCrUrsValuesBase> ;
    using Udis = TimCrUdisValues<Tim5::Cr1, 1, 1, ReadWriteMode, TimCrUdisValuesBase> ;
    using Cen = TimCrCenValues<Tim5::Cr1, 0, 1, ReadWriteMode, TimCrCenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40000C00, 32, ReadWriteMode, TimCrCkdValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40000C04, 32, ReadWriteMode>
  {
    using Ti1S = TimCrTiSValues<Tim5::Cr2, 7, 1, ReadWriteMode, TimCrTiSValuesBase> ;
    using Mms = TimCrMmsValues<Tim5::Cr2, 4, 3, ReadWriteMode, TimCrMmsValuesBase> ;
    using Ccds = TimCrCcdsValues<Tim5::Cr2, 3, 1, ReadWriteMode, TimCrCcdsValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40000C04, 32, ReadWriteMode, TimCrTiSValuesBase, T...> ;

  struct Smcr : public RegisterBase<0x40000C08, 32, ReadWriteMode>
  {
    using Etp = TimSmcrEtpValues<Tim5::Smcr, 15, 1, ReadWriteMode, TimSmcrEtpValuesBase> ;
    using Ece = TimSmcrEceValues<Tim5::Smcr, 14, 1, ReadWriteMode, TimSmcrEceValuesBase> ;
    using Etps = TimSmcrEtpsValues<Tim5::Smcr, 12, 2, ReadWriteMode, TimSmcrEtpsValuesBase> ;
    using Etf = TimSmcrEtfValues<Tim5::Smcr, 8, 4, ReadWriteMode, TimSmcrEtfValuesBase> ;
    using Msm = TimSmcrMsmValues<Tim5::Smcr, 7, 1, ReadWriteMode, TimSmcrMsmValuesBase> ;
    using Ts = TimSmcrTsValues<Tim5::Smcr, 4, 3, ReadWriteMode, TimSmcrTsValuesBase> ;
    using Sms = TimSmcrSmsValues<Tim5::Smcr, 0, 3, ReadWriteMode, TimSmcrSmsValuesBase> ;
  } ;

  template<typename... T> 
  using SmcrPack  = Register<0x40000C08, 32, ReadWriteMode, TimSmcrEtpValuesBase, T...> ;

  struct Dier : public RegisterBase<0x40000C0C, 32, ReadWriteMode>
  {
    using Tde = TimDierTdeValues<Tim5::Dier, 14, 1, ReadWriteMode, TimDierTdeValuesBase> ;
    using Cc4De = TimDierCcDeValues<Tim5::Dier, 12, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc3De = TimDierCcDeValues<Tim5::Dier, 11, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc2De = TimDierCcDeValues<Tim5::Dier, 10, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Cc1De = TimDierCcDeValues<Tim5::Dier, 9, 1, ReadWriteMode, TimDierCcDeValuesBase> ;
    using Ude = TimDierUdeValues<Tim5::Dier, 8, 1, ReadWriteMode, TimDierUdeValuesBase> ;
    using Tie = TimDierTieValues<Tim5::Dier, 6, 1, ReadWriteMode, TimDierTieValuesBase> ;
    using Cc4Ie = TimDierCcIeValues<Tim5::Dier, 4, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc3Ie = TimDierCcIeValues<Tim5::Dier, 3, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc2Ie = TimDierCcIeValues<Tim5::Dier, 2, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Cc1Ie = TimDierCcIeValues<Tim5::Dier, 1, 1, ReadWriteMode, TimDierCcIeValuesBase> ;
    using Uie = TimDierUieValues<Tim5::Dier, 0, 1, ReadWriteMode, TimDierUieValuesBase> ;
  } ;

  template<typename... T> 
  using DierPack  = Register<0x40000C0C, 32, ReadWriteMode, TimDierTdeValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40000C10, 32, ReadWriteMode>
  {
    using Cc4Of = TimSrCcOfValues<Tim5::Sr, 12, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc3Of = TimSrCcOfValues<Tim5::Sr, 11, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc2Of = TimSrCcOfValues<Tim5::Sr, 10, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Cc1Of = TimSrCcOfValues<Tim5::Sr, 9, 1, ReadWriteMode, TimSrCcOfValuesBase> ;
    using Tif = TimSrTifValues<Tim5::Sr, 6, 1, ReadWriteMode, TimSrTifValuesBase> ;
    using Cc4If = TimSrCcIfValues<Tim5::Sr, 4, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc3If = TimSrCcIfValues<Tim5::Sr, 3, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc2If = TimSrCcIfValues<Tim5::Sr, 2, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Cc1If = TimSrCcIfValues<Tim5::Sr, 1, 1, ReadWriteMode, TimSrCcIfValuesBase> ;
    using Uif = TimSrUifValues<Tim5::Sr, 0, 1, ReadWriteMode, TimSrUifValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40000C10, 32, ReadWriteMode, TimSrCcOfValuesBase, T...> ;

  struct Egr : public RegisterBase<0x40000C14, 32, WriteMode>
  {
    using Tg = TimEgrTgValues<Tim5::Egr, 6, 1, WriteMode, TimEgrTgValuesBase> ;
    using Cc4G = TimEgrCcGValues<Tim5::Egr, 4, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc3G = TimEgrCcGValues<Tim5::Egr, 3, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc2G = TimEgrCcGValues<Tim5::Egr, 2, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Cc1G = TimEgrCcGValues<Tim5::Egr, 1, 1, WriteMode, TimEgrCcGValuesBase> ;
    using Ug = TimEgrUgValues<Tim5::Egr, 0, 1, WriteMode, TimEgrUgValuesBase> ;
  } ;

  template<typename... T> 
  using EgrPack  = Register<0x40000C14, 32, WriteMode, TimEgrTgValuesBase, T...> ;

  struct Ccmr1Output : public RegisterBase<0x40000C18, 32, ReadWriteMode>
  {
    using Oc2Ce = TimCcmrOutputOcCeValues<Tim5::Ccmr1Output, 15, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc2M = TimCcmrOutputOcMValues<Tim5::Ccmr1Output, 12, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc2Pe = TimCcmrOutputOcPeValues<Tim5::Ccmr1Output, 11, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc2Fe = TimCcmrOutputOcFeValues<Tim5::Ccmr1Output, 10, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc2S = TimCcmrOutputCcSValues<Tim5::Ccmr1Output, 8, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
    using Oc1Ce = TimCcmrOutputOcCeValues<Tim5::Ccmr1Output, 7, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc1M = TimCcmrOutputOcMValues<Tim5::Ccmr1Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc1Pe = TimCcmrOutputOcPeValues<Tim5::Ccmr1Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc1Fe = TimCcmrOutputOcFeValues<Tim5::Ccmr1Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc1S = TimCcmrOutputCcSValues<Tim5::Ccmr1Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1OutputPack  = Register<0x40000C18, 32, ReadWriteMode, TimCcmrOutputOcCeValuesBase, T...> ;

  struct Ccmr1Input : public RegisterBase<0x40000C18, 32, ReadWriteMode>
  {
    using Ic2F = TimCcmrInputIcFValues<Tim5::Ccmr1Input, 12, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic2Pcs = TimCcmrInputIcPcsValues<Tim5::Ccmr1Input, 10, 2, ReadWriteMode, TimCcmrInputIcPcsValuesBase> ;
    using Cc2S = TimCcmrInputCcSValues<Tim5::Ccmr1Input, 8, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
    using Ic1F = TimCcmrInputIcFValues<Tim5::Ccmr1Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Icpcs = TimCcmrInputIcpcsValues<Tim5::Ccmr1Input, 2, 2, ReadWriteMode, TimCcmrInputIcpcsValuesBase> ;
    using Cc1S = TimCcmrInputCcSValues<Tim5::Ccmr1Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr1InputPack  = Register<0x40000C18, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccmr2Output : public RegisterBase<0x40000C1C, 32, ReadWriteMode>
  {
    using O24Ce = TimCcmrOutputOCeValues<Tim5::Ccmr2Output, 15, 1, ReadWriteMode, TimCcmrOutputOCeValuesBase> ;
    using Oc4M = TimCcmrOutputOcMValues<Tim5::Ccmr2Output, 12, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc4Pe = TimCcmrOutputOcPeValues<Tim5::Ccmr2Output, 11, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc4Fe = TimCcmrOutputOcFeValues<Tim5::Ccmr2Output, 10, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc4S = TimCcmrOutputCcSValues<Tim5::Ccmr2Output, 8, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
    using Oc3Ce = TimCcmrOutputOcCeValues<Tim5::Ccmr2Output, 7, 1, ReadWriteMode, TimCcmrOutputOcCeValuesBase> ;
    using Oc3M = TimCcmrOutputOcMValues<Tim5::Ccmr2Output, 4, 3, ReadWriteMode, TimCcmrOutputOcMValuesBase> ;
    using Oc3Pe = TimCcmrOutputOcPeValues<Tim5::Ccmr2Output, 3, 1, ReadWriteMode, TimCcmrOutputOcPeValuesBase> ;
    using Oc3Fe = TimCcmrOutputOcFeValues<Tim5::Ccmr2Output, 2, 1, ReadWriteMode, TimCcmrOutputOcFeValuesBase> ;
    using Cc3S = TimCcmrOutputCcSValues<Tim5::Ccmr2Output, 0, 2, ReadWriteMode, TimCcmrOutputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr2OutputPack  = Register<0x40000C1C, 32, ReadWriteMode, TimCcmrOutputOCeValuesBase, T...> ;

  struct Ccmr2Input : public RegisterBase<0x40000C1C, 32, ReadWriteMode>
  {
    using Ic4F = TimCcmrInputIcFValues<Tim5::Ccmr2Input, 12, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic4Psc = TimCcmrInputIcPscValues<Tim5::Ccmr2Input, 10, 2, ReadWriteMode, TimCcmrInputIcPscValuesBase> ;
    using Cc4S = TimCcmrInputCcSValues<Tim5::Ccmr2Input, 8, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
    using Ic3F = TimCcmrInputIcFValues<Tim5::Ccmr2Input, 4, 4, ReadWriteMode, TimCcmrInputIcFValuesBase> ;
    using Ic3Psc = TimCcmrInputIcPscValues<Tim5::Ccmr2Input, 2, 2, ReadWriteMode, TimCcmrInputIcPscValuesBase> ;
    using Cc3S = TimCcmrInputCcSValues<Tim5::Ccmr2Input, 0, 2, ReadWriteMode, TimCcmrInputCcSValuesBase> ;
  } ;

  template<typename... T> 
  using Ccmr2InputPack  = Register<0x40000C1C, 32, ReadWriteMode, TimCcmrInputIcFValuesBase, T...> ;

  struct Ccer : public RegisterBase<0x40000C20, 32, ReadWriteMode>
  {
    using Cc4Np = TimCcerCcNpValues<Tim5::Ccer, 15, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc4P = TimCcerCcPValues<Tim5::Ccer, 13, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc4E = TimCcerCcEValues<Tim5::Ccer, 12, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc3Np = TimCcerCcNpValues<Tim5::Ccer, 11, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc3P = TimCcerCcPValues<Tim5::Ccer, 9, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc3E = TimCcerCcEValues<Tim5::Ccer, 8, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc2Np = TimCcerCcNpValues<Tim5::Ccer, 7, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc2P = TimCcerCcPValues<Tim5::Ccer, 5, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc2E = TimCcerCcEValues<Tim5::Ccer, 4, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
    using Cc1Np = TimCcerCcNpValues<Tim5::Ccer, 3, 1, ReadWriteMode, TimCcerCcNpValuesBase> ;
    using Cc1P = TimCcerCcPValues<Tim5::Ccer, 1, 1, ReadWriteMode, TimCcerCcPValuesBase> ;
    using Cc1E = TimCcerCcEValues<Tim5::Ccer, 0, 1, ReadWriteMode, TimCcerCcEValuesBase> ;
  } ;

  template<typename... T> 
  using CcerPack  = Register<0x40000C20, 32, ReadWriteMode, TimCcerCcNpValuesBase, T...> ;

  struct Cnt : public RegisterBase<0x40000C24, 32, ReadWriteMode>
  {
    using CntH = ReadWriteMode<Tim5::Cnt, 16, 16> ;
    using CntL = ReadWriteMode<Tim5::Cnt, 0, 16> ;
  } ;

  template<typename... T> 
  using CntPack  = Register<0x40000C24, 32, ReadWriteMode, TimCntCntHValuesBase, T...> ;

  struct Psc : public RegisterBase<0x40000C28, 32, ReadWriteMode>
  {
    using PscField = ReadWriteMode<Tim5::Psc, 0, 16> ;
  } ;

  template<typename... T> 
  using PscPack  = Register<0x40000C28, 32, ReadWriteMode, TimPscPscValuesBase, T...> ;

  struct Arr : public RegisterBase<0x40000C2C, 32, ReadWriteMode>
  {
    using ArrH = ReadWriteMode<Tim5::Arr, 16, 16> ;
    using ArrL = ReadWriteMode<Tim5::Arr, 0, 16> ;
  } ;

  template<typename... T> 
  using ArrPack  = Register<0x40000C2C, 32, ReadWriteMode, TimArrArrHValuesBase, T...> ;

  struct Ccr1 : public RegisterBase<0x40000C34, 32, ReadWriteMode>
  {
    using Ccr1H = ReadWriteMode<Tim5::Ccr1, 16, 16> ;
    using Ccr1L = ReadWriteMode<Tim5::Ccr1, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr1Pack  = Register<0x40000C34, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Ccr2 : public RegisterBase<0x40000C38, 32, ReadWriteMode>
  {
    using Ccr2H = ReadWriteMode<Tim5::Ccr2, 16, 16> ;
    using Ccr2L = ReadWriteMode<Tim5::Ccr2, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr2Pack  = Register<0x40000C38, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Ccr3 : public RegisterBase<0x40000C3C, 32, ReadWriteMode>
  {
    using Ccr3H = ReadWriteMode<Tim5::Ccr3, 16, 16> ;
    using Ccr3L = ReadWriteMode<Tim5::Ccr3, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr3Pack  = Register<0x40000C3C, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Ccr4 : public RegisterBase<0x40000C40, 32, ReadWriteMode>
  {
    using Ccr4H = ReadWriteMode<Tim5::Ccr4, 16, 16> ;
    using Ccr4L = ReadWriteMode<Tim5::Ccr4, 0, 16> ;
  } ;

  template<typename... T> 
  using Ccr4Pack  = Register<0x40000C40, 32, ReadWriteMode, TimCcrCcrHValuesBase, T...> ;

  struct Dcr : public RegisterBase<0x40000C48, 32, ReadWriteMode>
  {
    using Dbl = TimDcrDblValues<Tim5::Dcr, 8, 5, ReadWriteMode, TimDcrDblValuesBase> ;
    using Dba = TimDcrDbaValues<Tim5::Dcr, 0, 5, ReadWriteMode, TimDcrDbaValuesBase> ;
  } ;

  template<typename... T> 
  using DcrPack  = Register<0x40000C48, 32, ReadWriteMode, TimDcrDblValuesBase, T...> ;

  struct Dmar : public RegisterBase<0x40000C4C, 32, ReadWriteMode>
  {
    using Dmab = ReadWriteMode<Tim5::Dmar, 0, 16> ;
  } ;

  template<typename... T> 
  using DmarPack  = Register<0x40000C4C, 32, ReadWriteMode, TimDmarDmabValuesBase, T...> ;

  struct Or : public RegisterBase<0x40000C50, 32, ReadWriteMode>
  {
    using It4Rmp = TimOrItRmpValues<Tim5::Or, 6, 2, ReadWriteMode, TimOrItRmpValuesBase> ;
  } ;

  template<typename... T> 
  using OrPack  = Register<0x40000C50, 32, ReadWriteMode, TimOrItRmpValuesBase, T...> ;

} ;

#endif //#if !defined(TIM5REGISTERS_HPP)
