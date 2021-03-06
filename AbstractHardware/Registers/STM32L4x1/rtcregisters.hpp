/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real-time clock. This header file is auto-generated for
*                 STM32L4x1 device.
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
    using WCKSEL = RTC_CR_WCKSEL_Values<RTC::CR, 0, 3, ReadWriteMode, RTCCRBase> ;
    using TSEDGE = RTC_CR_TSEDGE_Values<RTC::CR, 3, 1, ReadWriteMode, RTCCRBase> ;
    using REFCKON = RTC_CR_REFCKON_Values<RTC::CR, 4, 1, ReadWriteMode, RTCCRBase> ;
    using BYPSHAD = RTC_CR_BYPSHAD_Values<RTC::CR, 5, 1, ReadWriteMode, RTCCRBase> ;
    using FMT = RTC_CR_FMT_Values<RTC::CR, 6, 1, ReadWriteMode, RTCCRBase> ;
    using ALRAE = RTC_CR_ALRAE_Values<RTC::CR, 8, 1, ReadWriteMode, RTCCRBase> ;
    using ALRBE = RTC_CR_ALRBE_Values<RTC::CR, 9, 1, ReadWriteMode, RTCCRBase> ;
    using WUTE = RTC_CR_WUTE_Values<RTC::CR, 10, 1, ReadWriteMode, RTCCRBase> ;
    using TSE = RTC_CR_TSE_Values<RTC::CR, 11, 1, ReadWriteMode, RTCCRBase> ;
    using ALRAIE = RTC_CR_ALRAIE_Values<RTC::CR, 12, 1, ReadWriteMode, RTCCRBase> ;
    using ALRBIE = RTC_CR_ALRBIE_Values<RTC::CR, 13, 1, ReadWriteMode, RTCCRBase> ;
    using WUTIE = RTC_CR_WUTIE_Values<RTC::CR, 14, 1, ReadWriteMode, RTCCRBase> ;
    using TSIE = RTC_CR_TSIE_Values<RTC::CR, 15, 1, ReadWriteMode, RTCCRBase> ;
    using ADD1H = RTC_CR_ADD1H_Values<RTC::CR, 16, 1, ReadWriteMode, RTCCRBase> ;
    using SUB1H = RTC_CR_SUB1H_Values<RTC::CR, 17, 1, ReadWriteMode, RTCCRBase> ;
    using BKP = RTC_CR_BKP_Values<RTC::CR, 18, 1, ReadWriteMode, RTCCRBase> ;
    using COSEL = RTC_CR_COSEL_Values<RTC::CR, 19, 1, ReadWriteMode, RTCCRBase> ;
    using POL = RTC_CR_POL_Values<RTC::CR, 20, 1, ReadWriteMode, RTCCRBase> ;
    using OSEL = RTC_CR_OSEL_Values<RTC::CR, 21, 2, ReadWriteMode, RTCCRBase> ;
    using COE = RTC_CR_COE_Values<RTC::CR, 23, 1, ReadWriteMode, RTCCRBase> ;
    using ITSE = RTC_CR_ITSE_Values<RTC::CR, 24, 1, ReadWriteMode, RTCCRBase> ;
    using FieldValues = RTC_CR_ITSE_Values<RTC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40002808, 32, ReadWriteMode, RTCCRBase, T...> ;

  struct RTCISRBase {} ;

  struct ISR : public RegisterBase<0x4000280C, 32, ReadWriteMode>
  {
    using ALRAWF = RTC_ISR_ALRAWF_Values<RTC::ISR, 0, 1, ReadMode, RTCISRBase> ;
    using ALRBWF = RTC_ISR_ALRBWF_Values<RTC::ISR, 1, 1, ReadMode, RTCISRBase> ;
    using WUTWF = RTC_ISR_WUTWF_Values<RTC::ISR, 2, 1, ReadMode, RTCISRBase> ;
    using SHPF = RTC_ISR_SHPF_Values<RTC::ISR, 3, 1, ReadWriteMode, RTCISRBase> ;
    using INITS = RTC_ISR_INITS_Values<RTC::ISR, 4, 1, ReadMode, RTCISRBase> ;
    using RSF = RTC_ISR_RSF_Values<RTC::ISR, 5, 1, ReadWriteMode, RTCISRBase> ;
    using INITF = RTC_ISR_INITF_Values<RTC::ISR, 6, 1, ReadMode, RTCISRBase> ;
    using INIT = RTC_ISR_INIT_Values<RTC::ISR, 7, 1, ReadWriteMode, RTCISRBase> ;
    using ALRAF = RTC_ISR_ALRAF_Values<RTC::ISR, 8, 1, ReadWriteMode, RTCISRBase> ;
    using ALRBF = RTC_ISR_ALRBF_Values<RTC::ISR, 9, 1, ReadWriteMode, RTCISRBase> ;
    using WUTF = RTC_ISR_WUTF_Values<RTC::ISR, 10, 1, ReadWriteMode, RTCISRBase> ;
    using TSF = RTC_ISR_TSF_Values<RTC::ISR, 11, 1, ReadWriteMode, RTCISRBase> ;
    using TSOVF = RTC_ISR_TSOVF_Values<RTC::ISR, 12, 1, ReadWriteMode, RTCISRBase> ;
    using TAMP1F = RTC_ISR_TAMP1F_Values<RTC::ISR, 13, 1, ReadWriteMode, RTCISRBase> ;
    using TAMP2F = RTC_ISR_TAMP2F_Values<RTC::ISR, 14, 1, ReadWriteMode, RTCISRBase> ;
    using TAMP3F = RTC_ISR_TAMP3F_Values<RTC::ISR, 15, 1, ReadWriteMode, RTCISRBase> ;
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

  struct RTCWUTRBase {} ;

  struct WUTR : public RegisterBase<0x40002814, 32, ReadWriteMode>
  {
    using WUT = RTC_WUTR_WUT_Values<RTC::WUTR, 0, 16, ReadWriteMode, RTCWUTRBase> ;
    using FieldValues = RTC_WUTR_WUT_Values<RTC::WUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WUTRPack  = Register<0x40002814, 32, ReadWriteMode, RTCWUTRBase, T...> ;

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

  struct RTCALRMBRBase {} ;

  struct ALRMBR : public RegisterBase<0x40002820, 32, ReadWriteMode>
  {
    using MSK4 = RTC_ALRMBR_MSK4_Values<RTC::ALRMBR, 31, 1, ReadWriteMode, RTCALRMBRBase> ;
    using WDSEL = RTC_ALRMBR_WDSEL_Values<RTC::ALRMBR, 30, 1, ReadWriteMode, RTCALRMBRBase> ;
    using DT = RTC_ALRMBR_DT_Values<RTC::ALRMBR, 28, 2, ReadWriteMode, RTCALRMBRBase> ;
    using DU = RTC_ALRMBR_DU_Values<RTC::ALRMBR, 24, 4, ReadWriteMode, RTCALRMBRBase> ;
    using MSK3 = RTC_ALRMBR_MSK3_Values<RTC::ALRMBR, 23, 1, ReadWriteMode, RTCALRMBRBase> ;
    using PM = RTC_ALRMBR_PM_Values<RTC::ALRMBR, 22, 1, ReadWriteMode, RTCALRMBRBase> ;
    using HT = RTC_ALRMBR_HT_Values<RTC::ALRMBR, 20, 2, ReadWriteMode, RTCALRMBRBase> ;
    using HU = RTC_ALRMBR_HU_Values<RTC::ALRMBR, 16, 4, ReadWriteMode, RTCALRMBRBase> ;
    using MSK2 = RTC_ALRMBR_MSK2_Values<RTC::ALRMBR, 15, 1, ReadWriteMode, RTCALRMBRBase> ;
    using MNT = RTC_ALRMBR_MNT_Values<RTC::ALRMBR, 12, 3, ReadWriteMode, RTCALRMBRBase> ;
    using MNU = RTC_ALRMBR_MNU_Values<RTC::ALRMBR, 8, 4, ReadWriteMode, RTCALRMBRBase> ;
    using MSK1 = RTC_ALRMBR_MSK1_Values<RTC::ALRMBR, 7, 1, ReadWriteMode, RTCALRMBRBase> ;
    using ST = RTC_ALRMBR_ST_Values<RTC::ALRMBR, 4, 3, ReadWriteMode, RTCALRMBRBase> ;
    using SU = RTC_ALRMBR_SU_Values<RTC::ALRMBR, 0, 4, ReadWriteMode, RTCALRMBRBase> ;
    using FieldValues = RTC_ALRMBR_SU_Values<RTC::ALRMBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMBRPack  = Register<0x40002820, 32, ReadWriteMode, RTCALRMBRBase, T...> ;

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
    using SU = RTC_TSTR_SU_Values<RTC::TSTR, 0, 4, ReadMode, RTCTSTRBase> ;
    using ST = RTC_TSTR_ST_Values<RTC::TSTR, 4, 3, ReadMode, RTCTSTRBase> ;
    using MNU = RTC_TSTR_MNU_Values<RTC::TSTR, 8, 4, ReadMode, RTCTSTRBase> ;
    using MNT = RTC_TSTR_MNT_Values<RTC::TSTR, 12, 3, ReadMode, RTCTSTRBase> ;
    using HU = RTC_TSTR_HU_Values<RTC::TSTR, 16, 4, ReadMode, RTCTSTRBase> ;
    using HT = RTC_TSTR_HT_Values<RTC::TSTR, 20, 2, ReadMode, RTCTSTRBase> ;
    using PM = RTC_TSTR_PM_Values<RTC::TSTR, 22, 1, ReadMode, RTCTSTRBase> ;
    using FieldValues = RTC_TSTR_PM_Values<RTC::TSTR, 0, 0, NoAccess, NoAccess> ;
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

  struct RTCTAMPCRBase {} ;

  struct TAMPCR : public RegisterBase<0x40002840, 32, ReadWriteMode>
  {
    using TAMP1E = RTC_TAMPCR_TAMP1E_Values<RTC::TAMPCR, 0, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP1TRG = RTC_TAMPCR_TAMP1TRG_Values<RTC::TAMPCR, 1, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMPIE = RTC_TAMPCR_TAMPIE_Values<RTC::TAMPCR, 2, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP2E = RTC_TAMPCR_TAMP2E_Values<RTC::TAMPCR, 3, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP2TRG = RTC_TAMPCR_TAMP2TRG_Values<RTC::TAMPCR, 4, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP3E = RTC_TAMPCR_TAMP3E_Values<RTC::TAMPCR, 5, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP3TRG = RTC_TAMPCR_TAMP3TRG_Values<RTC::TAMPCR, 6, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMPTS = RTC_TAMPCR_TAMPTS_Values<RTC::TAMPCR, 7, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMPFREQ = RTC_TAMPCR_TAMPFREQ_Values<RTC::TAMPCR, 8, 3, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMPFLT = RTC_TAMPCR_TAMPFLT_Values<RTC::TAMPCR, 11, 2, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMPPRCH = RTC_TAMPCR_TAMPPRCH_Values<RTC::TAMPCR, 13, 2, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMPPUDIS = RTC_TAMPCR_TAMPPUDIS_Values<RTC::TAMPCR, 15, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP1IE = RTC_TAMPCR_TAMP1IE_Values<RTC::TAMPCR, 16, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP1NOERASE = RTC_TAMPCR_TAMP1NOERASE_Values<RTC::TAMPCR, 17, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP1MF = RTC_TAMPCR_TAMP1MF_Values<RTC::TAMPCR, 18, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP2IE = RTC_TAMPCR_TAMP2IE_Values<RTC::TAMPCR, 19, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP2NOERASE = RTC_TAMPCR_TAMP2NOERASE_Values<RTC::TAMPCR, 20, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP2MF = RTC_TAMPCR_TAMP2MF_Values<RTC::TAMPCR, 21, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP3IE = RTC_TAMPCR_TAMP3IE_Values<RTC::TAMPCR, 22, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP3NOERASE = RTC_TAMPCR_TAMP3NOERASE_Values<RTC::TAMPCR, 23, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using TAMP3MF = RTC_TAMPCR_TAMP3MF_Values<RTC::TAMPCR, 24, 1, ReadWriteMode, RTCTAMPCRBase> ;
    using FieldValues = RTC_TAMPCR_TAMP3MF_Values<RTC::TAMPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TAMPCRPack  = Register<0x40002840, 32, ReadWriteMode, RTCTAMPCRBase, T...> ;

  struct RTCALRMASSRBase {} ;

  struct ALRMASSR : public RegisterBase<0x40002844, 32, ReadWriteMode>
  {
    using MASKSS = RTC_ALRMASSR_MASKSS_Values<RTC::ALRMASSR, 24, 4, ReadWriteMode, RTCALRMASSRBase> ;
    using SS = RTC_ALRMASSR_SS_Values<RTC::ALRMASSR, 0, 15, ReadWriteMode, RTCALRMASSRBase> ;
    using FieldValues = RTC_ALRMASSR_SS_Values<RTC::ALRMASSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMASSRPack  = Register<0x40002844, 32, ReadWriteMode, RTCALRMASSRBase, T...> ;

  struct RTCALRMBSSRBase {} ;

  struct ALRMBSSR : public RegisterBase<0x40002848, 32, ReadWriteMode>
  {
    using MASKSS = RTC_ALRMBSSR_MASKSS_Values<RTC::ALRMBSSR, 24, 4, ReadWriteMode, RTCALRMBSSRBase> ;
    using SS = RTC_ALRMBSSR_SS_Values<RTC::ALRMBSSR, 0, 15, ReadWriteMode, RTCALRMBSSRBase> ;
    using FieldValues = RTC_ALRMBSSR_SS_Values<RTC::ALRMBSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMBSSRPack  = Register<0x40002848, 32, ReadWriteMode, RTCALRMBSSRBase, T...> ;

  struct RTCORBase {} ;

  struct OR : public RegisterBase<0x4000284C, 32, ReadWriteMode>
  {
    using RTC_ALARM_TYPE = RTC_OR_RTC_ALARM_TYPE_Values<RTC::OR, 0, 1, ReadWriteMode, RTCORBase> ;
    using RTC_OUT_RMP = RTC_OR_RTC_OUT_RMP_Values<RTC::OR, 1, 1, ReadWriteMode, RTCORBase> ;
    using FieldValues = RTC_OR_RTC_OUT_RMP_Values<RTC::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x4000284C, 32, ReadWriteMode, RTCORBase, T...> ;

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

  struct RTCBKP5RBase {} ;

  struct BKP5R : public RegisterBase<0x40002864, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP5R_BKP_Values<RTC::BKP5R, 0, 32, ReadWriteMode, RTCBKP5RBase> ;
    using FieldValues = RTC_BKP5R_BKP_Values<RTC::BKP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP5RPack  = Register<0x40002864, 32, ReadWriteMode, RTCBKP5RBase, T...> ;

  struct RTCBKP6RBase {} ;

  struct BKP6R : public RegisterBase<0x40002868, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP6R_BKP_Values<RTC::BKP6R, 0, 32, ReadWriteMode, RTCBKP6RBase> ;
    using FieldValues = RTC_BKP6R_BKP_Values<RTC::BKP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP6RPack  = Register<0x40002868, 32, ReadWriteMode, RTCBKP6RBase, T...> ;

  struct RTCBKP7RBase {} ;

  struct BKP7R : public RegisterBase<0x4000286C, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP7R_BKP_Values<RTC::BKP7R, 0, 32, ReadWriteMode, RTCBKP7RBase> ;
    using FieldValues = RTC_BKP7R_BKP_Values<RTC::BKP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP7RPack  = Register<0x4000286C, 32, ReadWriteMode, RTCBKP7RBase, T...> ;

  struct RTCBKP8RBase {} ;

  struct BKP8R : public RegisterBase<0x40002870, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP8R_BKP_Values<RTC::BKP8R, 0, 32, ReadWriteMode, RTCBKP8RBase> ;
    using FieldValues = RTC_BKP8R_BKP_Values<RTC::BKP8R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP8RPack  = Register<0x40002870, 32, ReadWriteMode, RTCBKP8RBase, T...> ;

  struct RTCBKP9RBase {} ;

  struct BKP9R : public RegisterBase<0x40002874, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP9R_BKP_Values<RTC::BKP9R, 0, 32, ReadWriteMode, RTCBKP9RBase> ;
    using FieldValues = RTC_BKP9R_BKP_Values<RTC::BKP9R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP9RPack  = Register<0x40002874, 32, ReadWriteMode, RTCBKP9RBase, T...> ;

  struct RTCBKP10RBase {} ;

  struct BKP10R : public RegisterBase<0x40002878, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP10R_BKP_Values<RTC::BKP10R, 0, 32, ReadWriteMode, RTCBKP10RBase> ;
    using FieldValues = RTC_BKP10R_BKP_Values<RTC::BKP10R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP10RPack  = Register<0x40002878, 32, ReadWriteMode, RTCBKP10RBase, T...> ;

  struct RTCBKP11RBase {} ;

  struct BKP11R : public RegisterBase<0x4000287C, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP11R_BKP_Values<RTC::BKP11R, 0, 32, ReadWriteMode, RTCBKP11RBase> ;
    using FieldValues = RTC_BKP11R_BKP_Values<RTC::BKP11R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP11RPack  = Register<0x4000287C, 32, ReadWriteMode, RTCBKP11RBase, T...> ;

  struct RTCBKP12RBase {} ;

  struct BKP12R : public RegisterBase<0x40002880, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP12R_BKP_Values<RTC::BKP12R, 0, 32, ReadWriteMode, RTCBKP12RBase> ;
    using FieldValues = RTC_BKP12R_BKP_Values<RTC::BKP12R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP12RPack  = Register<0x40002880, 32, ReadWriteMode, RTCBKP12RBase, T...> ;

  struct RTCBKP13RBase {} ;

  struct BKP13R : public RegisterBase<0x40002884, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP13R_BKP_Values<RTC::BKP13R, 0, 32, ReadWriteMode, RTCBKP13RBase> ;
    using FieldValues = RTC_BKP13R_BKP_Values<RTC::BKP13R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP13RPack  = Register<0x40002884, 32, ReadWriteMode, RTCBKP13RBase, T...> ;

  struct RTCBKP14RBase {} ;

  struct BKP14R : public RegisterBase<0x40002888, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP14R_BKP_Values<RTC::BKP14R, 0, 32, ReadWriteMode, RTCBKP14RBase> ;
    using FieldValues = RTC_BKP14R_BKP_Values<RTC::BKP14R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP14RPack  = Register<0x40002888, 32, ReadWriteMode, RTCBKP14RBase, T...> ;

  struct RTCBKP15RBase {} ;

  struct BKP15R : public RegisterBase<0x4000288C, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP15R_BKP_Values<RTC::BKP15R, 0, 32, ReadWriteMode, RTCBKP15RBase> ;
    using FieldValues = RTC_BKP15R_BKP_Values<RTC::BKP15R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP15RPack  = Register<0x4000288C, 32, ReadWriteMode, RTCBKP15RBase, T...> ;

  struct RTCBKP16RBase {} ;

  struct BKP16R : public RegisterBase<0x40002890, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP16R_BKP_Values<RTC::BKP16R, 0, 32, ReadWriteMode, RTCBKP16RBase> ;
    using FieldValues = RTC_BKP16R_BKP_Values<RTC::BKP16R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP16RPack  = Register<0x40002890, 32, ReadWriteMode, RTCBKP16RBase, T...> ;

  struct RTCBKP17RBase {} ;

  struct BKP17R : public RegisterBase<0x40002894, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP17R_BKP_Values<RTC::BKP17R, 0, 32, ReadWriteMode, RTCBKP17RBase> ;
    using FieldValues = RTC_BKP17R_BKP_Values<RTC::BKP17R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP17RPack  = Register<0x40002894, 32, ReadWriteMode, RTCBKP17RBase, T...> ;

  struct RTCBKP18RBase {} ;

  struct BKP18R : public RegisterBase<0x40002898, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP18R_BKP_Values<RTC::BKP18R, 0, 32, ReadWriteMode, RTCBKP18RBase> ;
    using FieldValues = RTC_BKP18R_BKP_Values<RTC::BKP18R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP18RPack  = Register<0x40002898, 32, ReadWriteMode, RTCBKP18RBase, T...> ;

  struct RTCBKP19RBase {} ;

  struct BKP19R : public RegisterBase<0x4000289C, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP19R_BKP_Values<RTC::BKP19R, 0, 32, ReadWriteMode, RTCBKP19RBase> ;
    using FieldValues = RTC_BKP19R_BKP_Values<RTC::BKP19R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP19RPack  = Register<0x4000289C, 32, ReadWriteMode, RTCBKP19RBase, T...> ;

  struct RTCBKP20RBase {} ;

  struct BKP20R : public RegisterBase<0x400028A0, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP20R_BKP_Values<RTC::BKP20R, 0, 32, ReadWriteMode, RTCBKP20RBase> ;
    using FieldValues = RTC_BKP20R_BKP_Values<RTC::BKP20R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP20RPack  = Register<0x400028A0, 32, ReadWriteMode, RTCBKP20RBase, T...> ;

  struct RTCBKP21RBase {} ;

  struct BKP21R : public RegisterBase<0x400028A4, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP21R_BKP_Values<RTC::BKP21R, 0, 32, ReadWriteMode, RTCBKP21RBase> ;
    using FieldValues = RTC_BKP21R_BKP_Values<RTC::BKP21R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP21RPack  = Register<0x400028A4, 32, ReadWriteMode, RTCBKP21RBase, T...> ;

  struct RTCBKP22RBase {} ;

  struct BKP22R : public RegisterBase<0x400028A8, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP22R_BKP_Values<RTC::BKP22R, 0, 32, ReadWriteMode, RTCBKP22RBase> ;
    using FieldValues = RTC_BKP22R_BKP_Values<RTC::BKP22R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP22RPack  = Register<0x400028A8, 32, ReadWriteMode, RTCBKP22RBase, T...> ;

  struct RTCBKP23RBase {} ;

  struct BKP23R : public RegisterBase<0x400028AC, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP23R_BKP_Values<RTC::BKP23R, 0, 32, ReadWriteMode, RTCBKP23RBase> ;
    using FieldValues = RTC_BKP23R_BKP_Values<RTC::BKP23R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP23RPack  = Register<0x400028AC, 32, ReadWriteMode, RTCBKP23RBase, T...> ;

  struct RTCBKP24RBase {} ;

  struct BKP24R : public RegisterBase<0x400028B0, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP24R_BKP_Values<RTC::BKP24R, 0, 32, ReadWriteMode, RTCBKP24RBase> ;
    using FieldValues = RTC_BKP24R_BKP_Values<RTC::BKP24R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP24RPack  = Register<0x400028B0, 32, ReadWriteMode, RTCBKP24RBase, T...> ;

  struct RTCBKP25RBase {} ;

  struct BKP25R : public RegisterBase<0x400028B4, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP25R_BKP_Values<RTC::BKP25R, 0, 32, ReadWriteMode, RTCBKP25RBase> ;
    using FieldValues = RTC_BKP25R_BKP_Values<RTC::BKP25R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP25RPack  = Register<0x400028B4, 32, ReadWriteMode, RTCBKP25RBase, T...> ;

  struct RTCBKP26RBase {} ;

  struct BKP26R : public RegisterBase<0x400028B8, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP26R_BKP_Values<RTC::BKP26R, 0, 32, ReadWriteMode, RTCBKP26RBase> ;
    using FieldValues = RTC_BKP26R_BKP_Values<RTC::BKP26R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP26RPack  = Register<0x400028B8, 32, ReadWriteMode, RTCBKP26RBase, T...> ;

  struct RTCBKP27RBase {} ;

  struct BKP27R : public RegisterBase<0x400028BC, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP27R_BKP_Values<RTC::BKP27R, 0, 32, ReadWriteMode, RTCBKP27RBase> ;
    using FieldValues = RTC_BKP27R_BKP_Values<RTC::BKP27R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP27RPack  = Register<0x400028BC, 32, ReadWriteMode, RTCBKP27RBase, T...> ;

  struct RTCBKP28RBase {} ;

  struct BKP28R : public RegisterBase<0x400028C0, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP28R_BKP_Values<RTC::BKP28R, 0, 32, ReadWriteMode, RTCBKP28RBase> ;
    using FieldValues = RTC_BKP28R_BKP_Values<RTC::BKP28R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP28RPack  = Register<0x400028C0, 32, ReadWriteMode, RTCBKP28RBase, T...> ;

  struct RTCBKP29RBase {} ;

  struct BKP29R : public RegisterBase<0x400028C4, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP29R_BKP_Values<RTC::BKP29R, 0, 32, ReadWriteMode, RTCBKP29RBase> ;
    using FieldValues = RTC_BKP29R_BKP_Values<RTC::BKP29R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP29RPack  = Register<0x400028C4, 32, ReadWriteMode, RTCBKP29RBase, T...> ;

  struct RTCBKP30RBase {} ;

  struct BKP30R : public RegisterBase<0x400028C8, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP30R_BKP_Values<RTC::BKP30R, 0, 32, ReadWriteMode, RTCBKP30RBase> ;
    using FieldValues = RTC_BKP30R_BKP_Values<RTC::BKP30R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP30RPack  = Register<0x400028C8, 32, ReadWriteMode, RTCBKP30RBase, T...> ;

  struct RTCBKP31RBase {} ;

  struct BKP31R : public RegisterBase<0x400028CC, 32, ReadWriteMode>
  {
    using BKP = RTC_BKP31R_BKP_Values<RTC::BKP31R, 0, 32, ReadWriteMode, RTCBKP31RBase> ;
    using FieldValues = RTC_BKP31R_BKP_Values<RTC::BKP31R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP31RPack  = Register<0x400028CC, 32, ReadWriteMode, RTCBKP31RBase, T...> ;

} ;

#endif //#if !defined(RTCREGISTERS_HPP)
