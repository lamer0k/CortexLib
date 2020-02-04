/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real-time clock. This header file is auto-generated for
*                 STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(RTCREGISTERS_HPP)
#define RTCREGISTERS_HPP

#include "rtcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC
{
  struct RTCTRBase {} ;

  struct TR : public RegisterBase<0x40002800, 32, ReadWriteMode>
  {
    using PM = RTC_TR_PM_Values<RTC::TR, 22, 1, ReadWriteMode, RTCTRBase> ;
    using HT = RTC_TR_HT_Values<RTC::TR, 20, 2, ReadWriteMode, RTCTRBase> ;
    using HU = RTC_TR_HU_Values<RTC::TR, 16, 4, ReadWriteMode, RTCTRBase> ;
    using MNT = RTC_TR_MNT_Values<RTC::TR, 12, 3, ReadWriteMode, RTCTRBase> ;
    using MNU = RTC_TR_MNU_Values<RTC::TR, 8, 4, ReadWriteMode, RTCTRBase> ;
    using ST = RTC_TR_ST_Values<RTC::TR, 4, 3, ReadWriteMode, RTCTRBase> ;
    using SU = RTC_TR_SU_Values<RTC::TR, 0, 4, ReadWriteMode, RTCTRBase> ;
    using FieldValues = RTC_TR_SU_Values<RTC::TR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TRPack  = Register<0x40002800, 32, ReadWriteMode, RTCTRBase, T...> ;

  struct RTCDRBase {} ;

  struct DR : public RegisterBase<0x40002804, 32, ReadWriteMode>
  {
    using YT = RTC_DR_YT_Values<RTC::DR, 20, 4, ReadWriteMode, RTCDRBase> ;
    using YU = RTC_DR_YU_Values<RTC::DR, 16, 4, ReadWriteMode, RTCDRBase> ;
    using WDU = RTC_DR_WDU_Values<RTC::DR, 13, 3, ReadWriteMode, RTCDRBase> ;
    using MT = RTC_DR_MT_Values<RTC::DR, 12, 1, ReadWriteMode, RTCDRBase> ;
    using MU = RTC_DR_MU_Values<RTC::DR, 8, 4, ReadWriteMode, RTCDRBase> ;
    using DT = RTC_DR_DT_Values<RTC::DR, 4, 2, ReadWriteMode, RTCDRBase> ;
    using DU = RTC_DR_DU_Values<RTC::DR, 0, 4, ReadWriteMode, RTCDRBase> ;
    using FieldValues = RTC_DR_DU_Values<RTC::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40002804, 32, ReadWriteMode, RTCDRBase, T...> ;

  struct RTCCRBase {} ;

  struct CR : public RegisterBase<0x40002808, 32, ReadWriteMode>
  {
    using TSEDGE = RTC_CR_TSEDGE_Values<RTC::CR, 3, 1, ReadWriteMode, RTCCRBase> ;
    using REFCKON = RTC_CR_REFCKON_Values<RTC::CR, 4, 1, ReadWriteMode, RTCCRBase> ;
    using BYPSHAD = RTC_CR_BYPSHAD_Values<RTC::CR, 5, 1, ReadWriteMode, RTCCRBase> ;
    using FMT = RTC_CR_FMT_Values<RTC::CR, 6, 1, ReadWriteMode, RTCCRBase> ;
    using ALRAE = RTC_CR_ALRAE_Values<RTC::CR, 8, 1, ReadWriteMode, RTCCRBase> ;
    using TSE = RTC_CR_TSE_Values<RTC::CR, 11, 1, ReadWriteMode, RTCCRBase> ;
    using ALRAIE = RTC_CR_ALRAIE_Values<RTC::CR, 12, 1, ReadWriteMode, RTCCRBase> ;
    using TSIE = RTC_CR_TSIE_Values<RTC::CR, 15, 1, ReadWriteMode, RTCCRBase> ;
    using ADD1H = RTC_CR_ADD1H_Values<RTC::CR, 16, 1, WriteMode, RTCCRBase> ;
    using SUB1H = RTC_CR_SUB1H_Values<RTC::CR, 17, 1, WriteMode, RTCCRBase> ;
    using BKP = RTC_CR_BKP_Values<RTC::CR, 18, 1, ReadWriteMode, RTCCRBase> ;
    using COSEL = RTC_CR_COSEL_Values<RTC::CR, 19, 1, ReadWriteMode, RTCCRBase> ;
    using POL = RTC_CR_POL_Values<RTC::CR, 20, 1, ReadWriteMode, RTCCRBase> ;
    using OSEL = RTC_CR_OSEL_Values<RTC::CR, 21, 2, ReadWriteMode, RTCCRBase> ;
    using COE = RTC_CR_COE_Values<RTC::CR, 23, 1, ReadWriteMode, RTCCRBase> ;
    using FieldValues = RTC_CR_COE_Values<RTC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40002808, 32, ReadWriteMode, RTCCRBase, T...> ;

  struct RTCISRBase {} ;

  struct ISR : public RegisterBase<0x4000280C, 32, ReadWriteMode>
  {
    using ALRAWF = RTC_ISR_ALRAWF_Values<RTC::ISR, 0, 1, ReadMode, RTCISRBase> ;
    using SHPF = RTC_ISR_SHPF_Values<RTC::ISR, 3, 1, ReadWriteMode, RTCISRBase> ;
    using INITS = RTC_ISR_INITS_Values<RTC::ISR, 4, 1, ReadMode, RTCISRBase> ;
    using RSF = RTC_ISR_RSF_Values<RTC::ISR, 5, 1, ReadWriteMode, RTCISRBase> ;
    using INITF = RTC_ISR_INITF_Values<RTC::ISR, 6, 1, ReadMode, RTCISRBase> ;
    using INIT = RTC_ISR_INIT_Values<RTC::ISR, 7, 1, ReadWriteMode, RTCISRBase> ;
    using ALRAF = RTC_ISR_ALRAF_Values<RTC::ISR, 8, 1, ReadWriteMode, RTCISRBase> ;
    using TSF = RTC_ISR_TSF_Values<RTC::ISR, 11, 1, ReadWriteMode, RTCISRBase> ;
    using TSOVF = RTC_ISR_TSOVF_Values<RTC::ISR, 12, 1, ReadWriteMode, RTCISRBase> ;
    using TAMP1F = RTC_ISR_TAMP1F_Values<RTC::ISR, 13, 1, ReadWriteMode, RTCISRBase> ;
    using TAMP2F = RTC_ISR_TAMP2F_Values<RTC::ISR, 14, 1, ReadWriteMode, RTCISRBase> ;
    using RECALPF = RTC_ISR_RECALPF_Values<RTC::ISR, 16, 1, ReadMode, RTCISRBase> ;
    using FieldValues = RTC_ISR_RECALPF_Values<RTC::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000280C, 32, ReadWriteMode, RTCISRBase, T...> ;

  struct RTCPRERBase {} ;

  struct PRER : public RegisterBase<0x40002810, 32, ReadWriteMode>
  {
    using PREDIV_A = RTC_PRER_PREDIV_A_Values<RTC::PRER, 16, 7, ReadWriteMode, RTCPRERBase> ;
    using PREDIV_S = RTC_PRER_PREDIV_S_Values<RTC::PRER, 0, 15, ReadWriteMode, RTCPRERBase> ;
    using FieldValues = RTC_PRER_PREDIV_S_Values<RTC::PRER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRERPack  = Register<0x40002810, 32, ReadWriteMode, RTCPRERBase, T...> ;

  struct RTCALRMARBase {} ;

  struct ALRMAR : public RegisterBase<0x4000281C, 32, ReadWriteMode>
  {
    using MSK4 = RTC_ALRMAR_MSK4_Values<RTC::ALRMAR, 31, 1, ReadWriteMode, RTCALRMARBase> ;
    using WDSEL = RTC_ALRMAR_WDSEL_Values<RTC::ALRMAR, 30, 1, ReadWriteMode, RTCALRMARBase> ;
    using DT = RTC_ALRMAR_DT_Values<RTC::ALRMAR, 28, 2, ReadWriteMode, RTCALRMARBase> ;
    using DU = RTC_ALRMAR_DU_Values<RTC::ALRMAR, 24, 4, ReadWriteMode, RTCALRMARBase> ;
    using MSK3 = RTC_ALRMAR_MSK3_Values<RTC::ALRMAR, 23, 1, ReadWriteMode, RTCALRMARBase> ;
    using PM = RTC_ALRMAR_PM_Values<RTC::ALRMAR, 22, 1, ReadWriteMode, RTCALRMARBase> ;
    using HT = RTC_ALRMAR_HT_Values<RTC::ALRMAR, 20, 2, ReadWriteMode, RTCALRMARBase> ;
    using HU = RTC_ALRMAR_HU_Values<RTC::ALRMAR, 16, 4, ReadWriteMode, RTCALRMARBase> ;
    using MSK2 = RTC_ALRMAR_MSK2_Values<RTC::ALRMAR, 15, 1, ReadWriteMode, RTCALRMARBase> ;
    using MNT = RTC_ALRMAR_MNT_Values<RTC::ALRMAR, 12, 3, ReadWriteMode, RTCALRMARBase> ;
    using MNU = RTC_ALRMAR_MNU_Values<RTC::ALRMAR, 8, 4, ReadWriteMode, RTCALRMARBase> ;
    using MSK1 = RTC_ALRMAR_MSK1_Values<RTC::ALRMAR, 7, 1, ReadWriteMode, RTCALRMARBase> ;
    using ST = RTC_ALRMAR_ST_Values<RTC::ALRMAR, 4, 3, ReadWriteMode, RTCALRMARBase> ;
    using SU = RTC_ALRMAR_SU_Values<RTC::ALRMAR, 0, 4, ReadWriteMode, RTCALRMARBase> ;
    using FieldValues = RTC_ALRMAR_SU_Values<RTC::ALRMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMARPack  = Register<0x4000281C, 32, ReadWriteMode, RTCALRMARBase, T...> ;

  struct RTCWPRBase {} ;

  struct WPR : public RegisterBase<0x40002824, 32, WriteMode>
  {
    using KEY = RTC_WPR_KEY_Values<RTC::WPR, 0, 8, WriteMode, RTCWPRBase> ;
    using FieldValues = RTC_WPR_KEY_Values<RTC::WPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WPRPack  = Register<0x40002824, 32, WriteMode, RTCWPRBase, T...> ;

  struct RTCSSRBase {} ;

  struct SSR : public RegisterBase<0x40002828, 32, ReadMode>
  {
    using SS = RTC_SSR_SS_Values<RTC::SSR, 0, 16, ReadMode, RTCSSRBase> ;
    using FieldValues = RTC_SSR_SS_Values<RTC::SSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SSRPack  = Register<0x40002828, 32, ReadMode, RTCSSRBase, T...> ;

  struct RTCSHIFTRBase {} ;

  struct SHIFTR : public RegisterBase<0x4000282C, 32, WriteMode>
  {
    using ADD1S = RTC_SHIFTR_ADD1S_Values<RTC::SHIFTR, 31, 1, WriteMode, RTCSHIFTRBase> ;
    using SUBFS = RTC_SHIFTR_SUBFS_Values<RTC::SHIFTR, 0, 15, WriteMode, RTCSHIFTRBase> ;
    using FieldValues = RTC_SHIFTR_SUBFS_Values<RTC::SHIFTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHIFTRPack  = Register<0x4000282C, 32, WriteMode, RTCSHIFTRBase, T...> ;

  struct RTCTSTRBase {} ;

  struct TSTR : public RegisterBase<0x40002830, 32, ReadMode>
  {
    using PM = RTC_TSTR_PM_Values<RTC::TSTR, 22, 1, ReadMode, RTCTSTRBase> ;
    using HT = RTC_TSTR_HT_Values<RTC::TSTR, 20, 2, ReadMode, RTCTSTRBase> ;
    using HU = RTC_TSTR_HU_Values<RTC::TSTR, 16, 4, ReadMode, RTCTSTRBase> ;
    using MNT = RTC_TSTR_MNT_Values<RTC::TSTR, 12, 3, ReadMode, RTCTSTRBase> ;
    using MNU = RTC_TSTR_MNU_Values<RTC::TSTR, 8, 4, ReadMode, RTCTSTRBase> ;
    using ST = RTC_TSTR_ST_Values<RTC::TSTR, 4, 3, ReadMode, RTCTSTRBase> ;
    using SU = RTC_TSTR_SU_Values<RTC::TSTR, 0, 4, ReadMode, RTCTSTRBase> ;
    using FieldValues = RTC_TSTR_SU_Values<RTC::TSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSTRPack  = Register<0x40002830, 32, ReadMode, RTCTSTRBase, T...> ;

  struct RTCTSDRBase {} ;

  struct TSDR : public RegisterBase<0x40002834, 32, ReadMode>
  {
    using WDU = RTC_TSDR_WDU_Values<RTC::TSDR, 13, 3, ReadMode, RTCTSDRBase> ;
    using MT = RTC_TSDR_MT_Values<RTC::TSDR, 12, 1, ReadMode, RTCTSDRBase> ;
    using MU = RTC_TSDR_MU_Values<RTC::TSDR, 8, 4, ReadMode, RTCTSDRBase> ;
    using DT = RTC_TSDR_DT_Values<RTC::TSDR, 4, 2, ReadMode, RTCTSDRBase> ;
    using DU = RTC_TSDR_DU_Values<RTC::TSDR, 0, 4, ReadMode, RTCTSDRBase> ;
    using FieldValues = RTC_TSDR_DU_Values<RTC::TSDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSDRPack  = Register<0x40002834, 32, ReadMode, RTCTSDRBase, T...> ;

  struct RTCTSSSRBase {} ;

  struct TSSSR : public RegisterBase<0x40002838, 32, ReadMode>
  {
    using SS = RTC_TSSSR_SS_Values<RTC::TSSSR, 0, 16, ReadMode, RTCTSSSRBase> ;
    using FieldValues = RTC_TSSSR_SS_Values<RTC::TSSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSSSRPack  = Register<0x40002838, 32, ReadMode, RTCTSSSRBase, T...> ;

  struct RTCCALRBase {} ;

  struct CALR : public RegisterBase<0x4000283C, 32, ReadWriteMode>
  {
    using CALP = RTC_CALR_CALP_Values<RTC::CALR, 15, 1, ReadWriteMode, RTCCALRBase> ;
    using CALW8 = RTC_CALR_CALW8_Values<RTC::CALR, 14, 1, ReadWriteMode, RTCCALRBase> ;
    using CALW16 = RTC_CALR_CALW16_Values<RTC::CALR, 13, 1, ReadWriteMode, RTCCALRBase> ;
    using CALM = RTC_CALR_CALM_Values<RTC::CALR, 0, 9, ReadWriteMode, RTCCALRBase> ;
    using FieldValues = RTC_CALR_CALM_Values<RTC::CALR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALRPack  = Register<0x4000283C, 32, ReadWriteMode, RTCCALRBase, T...> ;

  struct RTCTAFCRBase {} ;

  struct TAFCR : public RegisterBase<0x40002840, 32, ReadWriteMode>
  {
    using PC15MODE = RTC_TAFCR_PC15MODE_Values<RTC::TAFCR, 23, 1, ReadWriteMode, RTCTAFCRBase> ;
    using PC15VALUE = RTC_TAFCR_PC15VALUE_Values<RTC::TAFCR, 22, 1, ReadWriteMode, RTCTAFCRBase> ;
    using PC14MODE = RTC_TAFCR_PC14MODE_Values<RTC::TAFCR, 21, 1, ReadWriteMode, RTCTAFCRBase> ;
    using PC14VALUE = RTC_TAFCR_PC14VALUE_Values<RTC::TAFCR, 20, 1, ReadWriteMode, RTCTAFCRBase> ;
    using PC13MODE = RTC_TAFCR_PC13MODE_Values<RTC::TAFCR, 19, 1, ReadWriteMode, RTCTAFCRBase> ;
    using PC13VALUE = RTC_TAFCR_PC13VALUE_Values<RTC::TAFCR, 18, 1, ReadWriteMode, RTCTAFCRBase> ;
    using TAMP_PUDIS = RTC_TAFCR_TAMP_PUDIS_Values<RTC::TAFCR, 15, 1, ReadWriteMode, RTCTAFCRBase> ;
    using TAMP_PRCH = RTC_TAFCR_TAMP_PRCH_Values<RTC::TAFCR, 13, 2, ReadWriteMode, RTCTAFCRBase> ;
    using TAMPFLT = RTC_TAFCR_TAMPFLT_Values<RTC::TAFCR, 11, 2, ReadWriteMode, RTCTAFCRBase> ;
    using TAMPFREQ = RTC_TAFCR_TAMPFREQ_Values<RTC::TAFCR, 8, 3, ReadWriteMode, RTCTAFCRBase> ;
    using TAMPTS = RTC_TAFCR_TAMPTS_Values<RTC::TAFCR, 7, 1, ReadWriteMode, RTCTAFCRBase> ;
    using TAMP2_TRG = RTC_TAFCR_TAMP2_TRG_Values<RTC::TAFCR, 4, 1, ReadWriteMode, RTCTAFCRBase> ;
    using TAMP2E = RTC_TAFCR_TAMP2E_Values<RTC::TAFCR, 3, 1, ReadWriteMode, RTCTAFCRBase> ;
    using TAMPIE = RTC_TAFCR_TAMPIE_Values<RTC::TAFCR, 2, 1, ReadWriteMode, RTCTAFCRBase> ;
    using TAMP1TRG = RTC_TAFCR_TAMP1TRG_Values<RTC::TAFCR, 1, 1, ReadWriteMode, RTCTAFCRBase> ;
    using TAMP1E = RTC_TAFCR_TAMP1E_Values<RTC::TAFCR, 0, 1, ReadWriteMode, RTCTAFCRBase> ;
    using FieldValues = RTC_TAFCR_TAMP1E_Values<RTC::TAFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TAFCRPack  = Register<0x40002840, 32, ReadWriteMode, RTCTAFCRBase, T...> ;

  struct RTCALRMASSRBase {} ;

  struct ALRMASSR : public RegisterBase<0x40002844, 32, ReadWriteMode>
  {
    using MASKSS = RTC_ALRMASSR_MASKSS_Values<RTC::ALRMASSR, 24, 4, ReadWriteMode, RTCALRMASSRBase> ;
    using SS = RTC_ALRMASSR_SS_Values<RTC::ALRMASSR, 0, 15, ReadWriteMode, RTCALRMASSRBase> ;
    using FieldValues = RTC_ALRMASSR_SS_Values<RTC::ALRMASSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMASSRPack  = Register<0x40002844, 32, ReadWriteMode, RTCALRMASSRBase, T...> ;

  struct RTCBKP0RBase {} ;

  struct BKP0R : public RegisterBase<0x40002850, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP0R_BKP_Values<RTC::BKP0R, 0, 32, ReadWriteMode, RTCBKP0RBase> ;
    using FieldValues = RTC_BKP0R_BKP_Values<RTC::BKP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP0RPack  = Register<0x40002850, 32, ReadWriteMode, RTCBKP0RBase, T...> ;

  struct RTCBKP1RBase {} ;

  struct BKP1R : public RegisterBase<0x40002854, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP1R_BKP_Values<RTC::BKP1R, 0, 32, ReadWriteMode, RTCBKP1RBase> ;
    using FieldValues = RTC_BKP1R_BKP_Values<RTC::BKP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP1RPack  = Register<0x40002854, 32, ReadWriteMode, RTCBKP1RBase, T...> ;

  struct RTCBKP2RBase {} ;

  struct BKP2R : public RegisterBase<0x40002858, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP2R_BKP_Values<RTC::BKP2R, 0, 32, ReadWriteMode, RTCBKP2RBase> ;
    using FieldValues = RTC_BKP2R_BKP_Values<RTC::BKP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP2RPack  = Register<0x40002858, 32, ReadWriteMode, RTCBKP2RBase, T...> ;

  struct RTCBKP3RBase {} ;

  struct BKP3R : public RegisterBase<0x4000285C, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP3R_BKP_Values<RTC::BKP3R, 0, 32, ReadWriteMode, RTCBKP3RBase> ;
    using FieldValues = RTC_BKP3R_BKP_Values<RTC::BKP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP3RPack  = Register<0x4000285C, 32, ReadWriteMode, RTCBKP3RBase, T...> ;

  struct RTCBKP4RBase {} ;

  struct BKP4R : public RegisterBase<0x40002860, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP4R_BKP_Values<RTC::BKP4R, 0, 32, ReadWriteMode, RTCBKP4RBase> ;
    using FieldValues = RTC_BKP4R_BKP_Values<RTC::BKP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP4RPack  = Register<0x40002860, 32, ReadWriteMode, RTCBKP4RBase, T...> ;

} ;

#endif //#if !defined(RTCREGISTERS_HPP)
