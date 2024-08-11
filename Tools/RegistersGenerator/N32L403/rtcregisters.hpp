/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real time clock. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "rtcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC
{
  struct RTCRTC_TSHBase {} ;

  struct RTC_TSH : public RegisterBase<0x40002800, 32, ReadWriteMode>
  {
    using SCU = RTC_RTC_TSH_SCU_Values<RTC::RTC_TSH, 0, 4, ReadWriteMode, RTCRTC_TSHBase> ;
    using SCT = RTC_RTC_TSH_SCT_Values<RTC::RTC_TSH, 4, 3, ReadWriteMode, RTCRTC_TSHBase> ;
    using MIU = RTC_RTC_TSH_MIU_Values<RTC::RTC_TSH, 8, 4, ReadWriteMode, RTCRTC_TSHBase> ;
    using MIT = RTC_RTC_TSH_MIT_Values<RTC::RTC_TSH, 12, 3, ReadWriteMode, RTCRTC_TSHBase> ;
    using HOU = RTC_RTC_TSH_HOU_Values<RTC::RTC_TSH, 16, 4, ReadWriteMode, RTCRTC_TSHBase> ;
    using HOT = RTC_RTC_TSH_HOT_Values<RTC::RTC_TSH, 20, 2, ReadWriteMode, RTCRTC_TSHBase> ;
    using APM = RTC_RTC_TSH_APM_Values<RTC::RTC_TSH, 22, 1, ReadWriteMode, RTCRTC_TSHBase> ;
    using FieldValues = RTC_RTC_TSH_APM_Values<RTC::RTC_TSH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSHPack  = Register<0x40002800, 32, ReadWriteMode, RTCRTC_TSHBase, T...> ;

  struct RTCRTC_DATEBase {} ;

  struct RTC_DATE : public RegisterBase<0x40002804, 32, ReadWriteMode>
  {
    using DAU = RTC_RTC_DATE_DAU_Values<RTC::RTC_DATE, 0, 4, ReadWriteMode, RTCRTC_DATEBase> ;
    using DAT = RTC_RTC_DATE_DAT_Values<RTC::RTC_DATE, 4, 2, ReadWriteMode, RTCRTC_DATEBase> ;
    using MOU = RTC_RTC_DATE_MOU_Values<RTC::RTC_DATE, 8, 4, ReadWriteMode, RTCRTC_DATEBase> ;
    using MOT = RTC_RTC_DATE_MOT_Values<RTC::RTC_DATE, 12, 1, ReadWriteMode, RTCRTC_DATEBase> ;
    using WDU = RTC_RTC_DATE_WDU_Values<RTC::RTC_DATE, 13, 3, ReadWriteMode, RTCRTC_DATEBase> ;
    using YRU = RTC_RTC_DATE_YRU_Values<RTC::RTC_DATE, 16, 4, ReadWriteMode, RTCRTC_DATEBase> ;
    using YRT = RTC_RTC_DATE_YRT_Values<RTC::RTC_DATE, 20, 4, ReadWriteMode, RTCRTC_DATEBase> ;
    using FieldValues = RTC_RTC_DATE_YRT_Values<RTC::RTC_DATE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_DATEPack  = Register<0x40002804, 32, ReadWriteMode, RTCRTC_DATEBase, T...> ;

  struct RTCRTC_CTRLBase {} ;

  struct RTC_CTRL : public RegisterBase<0x40002808, 32, ReadWriteMode>
  {
    using WKUPSEL = RTC_RTC_CTRL_WKUPSEL_Values<RTC::RTC_CTRL, 0, 3, ReadWriteMode, RTCRTC_CTRLBase> ;
    using TEDGE = RTC_RTC_CTRL_TEDGE_Values<RTC::RTC_CTRL, 3, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using REFCLKEN = RTC_RTC_CTRL_REFCLKEN_Values<RTC::RTC_CTRL, 4, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using BYPS = RTC_RTC_CTRL_BYPS_Values<RTC::RTC_CTRL, 5, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using HFMT = RTC_RTC_CTRL_HFMT_Values<RTC::RTC_CTRL, 6, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using ALAEN = RTC_RTC_CTRL_ALAEN_Values<RTC::RTC_CTRL, 8, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using ALBEN = RTC_RTC_CTRL_ALBEN_Values<RTC::RTC_CTRL, 9, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using WTEN = RTC_RTC_CTRL_WTEN_Values<RTC::RTC_CTRL, 10, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using TSEN = RTC_RTC_CTRL_TSEN_Values<RTC::RTC_CTRL, 11, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using ALAIEN = RTC_RTC_CTRL_ALAIEN_Values<RTC::RTC_CTRL, 12, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using ALBIEN = RTC_RTC_CTRL_ALBIEN_Values<RTC::RTC_CTRL, 13, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using WTIEN = RTC_RTC_CTRL_WTIEN_Values<RTC::RTC_CTRL, 14, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using TSIEN = RTC_RTC_CTRL_TSIEN_Values<RTC::RTC_CTRL, 15, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using AD1H = RTC_RTC_CTRL_AD1H_Values<RTC::RTC_CTRL, 16, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using SU1H = RTC_RTC_CTRL_SU1H_Values<RTC::RTC_CTRL, 17, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using BAKP = RTC_RTC_CTRL_BAKP_Values<RTC::RTC_CTRL, 18, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using CALOSEL = RTC_RTC_CTRL_CALOSEL_Values<RTC::RTC_CTRL, 19, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using OPOL = RTC_RTC_CTRL_OPOL_Values<RTC::RTC_CTRL, 20, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using OUTSEL = RTC_RTC_CTRL_OUTSEL_Values<RTC::RTC_CTRL, 21, 2, ReadWriteMode, RTCRTC_CTRLBase> ;
    using COEN = RTC_RTC_CTRL_COEN_Values<RTC::RTC_CTRL, 23, 1, ReadWriteMode, RTCRTC_CTRLBase> ;
    using FieldValues = RTC_RTC_CTRL_COEN_Values<RTC::RTC_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_CTRLPack  = Register<0x40002808, 32, ReadWriteMode, RTCRTC_CTRLBase, T...> ;

  struct RTCRTC_INITSTSBase {} ;

  struct RTC_INITSTS : public RegisterBase<0x4000280C, 32, ReadWriteMode>
  {
    using ALAWF = RTC_RTC_INITSTS_ALAWF_Values<RTC::RTC_INITSTS, 0, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using ALBWF = RTC_RTC_INITSTS_ALBWF_Values<RTC::RTC_INITSTS, 1, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using WTWF = RTC_RTC_INITSTS_WTWF_Values<RTC::RTC_INITSTS, 2, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using SHOPF = RTC_RTC_INITSTS_SHOPF_Values<RTC::RTC_INITSTS, 3, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using INITSF = RTC_RTC_INITSTS_INITSF_Values<RTC::RTC_INITSTS, 4, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using RSYF = RTC_RTC_INITSTS_RSYF_Values<RTC::RTC_INITSTS, 5, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using INITF = RTC_RTC_INITSTS_INITF_Values<RTC::RTC_INITSTS, 6, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using INITM = RTC_RTC_INITSTS_INITM_Values<RTC::RTC_INITSTS, 7, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using ALAF = RTC_RTC_INITSTS_ALAF_Values<RTC::RTC_INITSTS, 8, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using ALBF = RTC_RTC_INITSTS_ALBF_Values<RTC::RTC_INITSTS, 9, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using WTF = RTC_RTC_INITSTS_WTF_Values<RTC::RTC_INITSTS, 10, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using TISF = RTC_RTC_INITSTS_TISF_Values<RTC::RTC_INITSTS, 11, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using TISOVF = RTC_RTC_INITSTS_TISOVF_Values<RTC::RTC_INITSTS, 12, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using TAM1F = RTC_RTC_INITSTS_TAM1F_Values<RTC::RTC_INITSTS, 13, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using TAM2F = RTC_RTC_INITSTS_TAM2F_Values<RTC::RTC_INITSTS, 14, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using TAM3F = RTC_RTC_INITSTS_TAM3F_Values<RTC::RTC_INITSTS, 15, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using RECPF = RTC_RTC_INITSTS_RECPF_Values<RTC::RTC_INITSTS, 16, 1, ReadWriteMode, RTCRTC_INITSTSBase> ;
    using FieldValues = RTC_RTC_INITSTS_RECPF_Values<RTC::RTC_INITSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_INITSTSPack  = Register<0x4000280C, 32, ReadWriteMode, RTCRTC_INITSTSBase, T...> ;

  struct RTCRTC_PREBase {} ;

  struct RTC_PRE : public RegisterBase<0x40002810, 32, ReadWriteMode>
  {
    using DIVS = RTC_RTC_PRE_DIVS_Values<RTC::RTC_PRE, 0, 15, ReadWriteMode, RTCRTC_PREBase> ;
    using DIVA = RTC_RTC_PRE_DIVA_Values<RTC::RTC_PRE, 16, 7, ReadWriteMode, RTCRTC_PREBase> ;
    using FieldValues = RTC_RTC_PRE_DIVA_Values<RTC::RTC_PRE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_PREPack  = Register<0x40002810, 32, ReadWriteMode, RTCRTC_PREBase, T...> ;

  struct RTCRTC_WKUPTBase {} ;

  struct RTC_WKUPT : public RegisterBase<0x40002814, 32, ReadWriteMode>
  {
    using WKUPT = RTC_RTC_WKUPT_WKUPT_Values<RTC::RTC_WKUPT, 0, 16, ReadWriteMode, RTCRTC_WKUPTBase> ;
    using FieldValues = RTC_RTC_WKUPT_WKUPT_Values<RTC::RTC_WKUPT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_WKUPTPack  = Register<0x40002814, 32, ReadWriteMode, RTCRTC_WKUPTBase, T...> ;

  struct RTCRTC_ALARMABase {} ;

  struct RTC_ALARMA : public RegisterBase<0x4000281C, 32, ReadWriteMode>
  {
    using SEU = RTC_RTC_ALARMA_SEU_Values<RTC::RTC_ALARMA, 0, 4, ReadWriteMode, RTCRTC_ALARMABase> ;
    using SET = RTC_RTC_ALARMA_SET_Values<RTC::RTC_ALARMA, 4, 3, ReadWriteMode, RTCRTC_ALARMABase> ;
    using MASK1 = RTC_RTC_ALARMA_MASK1_Values<RTC::RTC_ALARMA, 7, 1, ReadWriteMode, RTCRTC_ALARMABase> ;
    using MIU = RTC_RTC_ALARMA_MIU_Values<RTC::RTC_ALARMA, 8, 4, ReadWriteMode, RTCRTC_ALARMABase> ;
    using MIT = RTC_RTC_ALARMA_MIT_Values<RTC::RTC_ALARMA, 12, 3, ReadWriteMode, RTCRTC_ALARMABase> ;
    using MASK2 = RTC_RTC_ALARMA_MASK2_Values<RTC::RTC_ALARMA, 15, 1, ReadWriteMode, RTCRTC_ALARMABase> ;
    using HOU = RTC_RTC_ALARMA_HOU_Values<RTC::RTC_ALARMA, 16, 4, ReadWriteMode, RTCRTC_ALARMABase> ;
    using HOT = RTC_RTC_ALARMA_HOT_Values<RTC::RTC_ALARMA, 20, 2, ReadWriteMode, RTCRTC_ALARMABase> ;
    using APM = RTC_RTC_ALARMA_APM_Values<RTC::RTC_ALARMA, 22, 1, ReadWriteMode, RTCRTC_ALARMABase> ;
    using MASK3 = RTC_RTC_ALARMA_MASK3_Values<RTC::RTC_ALARMA, 23, 1, ReadWriteMode, RTCRTC_ALARMABase> ;
    using DTU = RTC_RTC_ALARMA_DTU_Values<RTC::RTC_ALARMA, 24, 4, ReadWriteMode, RTCRTC_ALARMABase> ;
    using DTT = RTC_RTC_ALARMA_DTT_Values<RTC::RTC_ALARMA, 28, 2, ReadWriteMode, RTCRTC_ALARMABase> ;
    using WKDSEL = RTC_RTC_ALARMA_WKDSEL_Values<RTC::RTC_ALARMA, 30, 1, ReadWriteMode, RTCRTC_ALARMABase> ;
    using MASK4 = RTC_RTC_ALARMA_MASK4_Values<RTC::RTC_ALARMA, 31, 1, ReadWriteMode, RTCRTC_ALARMABase> ;
    using FieldValues = RTC_RTC_ALARMA_MASK4_Values<RTC::RTC_ALARMA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALARMAPack  = Register<0x4000281C, 32, ReadWriteMode, RTCRTC_ALARMABase, T...> ;

  struct RTCRTC_ALARMBBase {} ;

  struct RTC_ALARMB : public RegisterBase<0x40002820, 32, ReadWriteMode>
  {
    using SEU = RTC_RTC_ALARMB_SEU_Values<RTC::RTC_ALARMB, 0, 4, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using SET = RTC_RTC_ALARMB_SET_Values<RTC::RTC_ALARMB, 4, 3, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using MASK1 = RTC_RTC_ALARMB_MASK1_Values<RTC::RTC_ALARMB, 7, 1, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using MIU = RTC_RTC_ALARMB_MIU_Values<RTC::RTC_ALARMB, 8, 4, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using MIT = RTC_RTC_ALARMB_MIT_Values<RTC::RTC_ALARMB, 12, 3, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using MASK2 = RTC_RTC_ALARMB_MASK2_Values<RTC::RTC_ALARMB, 15, 1, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using HOU = RTC_RTC_ALARMB_HOU_Values<RTC::RTC_ALARMB, 16, 4, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using HOT = RTC_RTC_ALARMB_HOT_Values<RTC::RTC_ALARMB, 20, 2, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using APM = RTC_RTC_ALARMB_APM_Values<RTC::RTC_ALARMB, 22, 1, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using MASK3 = RTC_RTC_ALARMB_MASK3_Values<RTC::RTC_ALARMB, 23, 1, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using DTU = RTC_RTC_ALARMB_DTU_Values<RTC::RTC_ALARMB, 24, 4, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using DTT = RTC_RTC_ALARMB_DTT_Values<RTC::RTC_ALARMB, 28, 2, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using WKDSEL = RTC_RTC_ALARMB_WKDSEL_Values<RTC::RTC_ALARMB, 30, 1, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using MASK4 = RTC_RTC_ALARMB_MASK4_Values<RTC::RTC_ALARMB, 31, 1, ReadWriteMode, RTCRTC_ALARMBBase> ;
    using FieldValues = RTC_RTC_ALARMB_MASK4_Values<RTC::RTC_ALARMB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALARMBPack  = Register<0x40002820, 32, ReadWriteMode, RTCRTC_ALARMBBase, T...> ;

  struct RTCRTC_WRPBase {} ;

  struct RTC_WRP : public RegisterBase<0x40002824, 32, ReadWriteMode>
  {
    using PKEY = RTC_RTC_WRP_PKEY_Values<RTC::RTC_WRP, 0, 8, ReadWriteMode, RTCRTC_WRPBase> ;
    using FieldValues = RTC_RTC_WRP_PKEY_Values<RTC::RTC_WRP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_WRPPack  = Register<0x40002824, 32, ReadWriteMode, RTCRTC_WRPBase, T...> ;

  struct RTCRTC_SUBSBase {} ;

  struct RTC_SUBS : public RegisterBase<0x40002828, 32, ReadWriteMode>
  {
    using SS = RTC_RTC_SUBS_SS_Values<RTC::RTC_SUBS, 0, 16, ReadWriteMode, RTCRTC_SUBSBase> ;
    using FieldValues = RTC_RTC_SUBS_SS_Values<RTC::RTC_SUBS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_SUBSPack  = Register<0x40002828, 32, ReadWriteMode, RTCRTC_SUBSBase, T...> ;

  struct RTCRTC_SCTRLBase {} ;

  struct RTC_SCTRL : public RegisterBase<0x4000282C, 32, ReadWriteMode>
  {
    using SUBF = RTC_RTC_SCTRL_SUBF_Values<RTC::RTC_SCTRL, 0, 15, ReadWriteMode, RTCRTC_SCTRLBase> ;
    using ADD1S = RTC_RTC_SCTRL_ADD1S_Values<RTC::RTC_SCTRL, 31, 1, ReadWriteMode, RTCRTC_SCTRLBase> ;
    using FieldValues = RTC_RTC_SCTRL_ADD1S_Values<RTC::RTC_SCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_SCTRLPack  = Register<0x4000282C, 32, ReadWriteMode, RTCRTC_SCTRLBase, T...> ;

  struct RTCRTC_TSTBase {} ;

  struct RTC_TST : public RegisterBase<0x40002830, 32, ReadWriteMode>
  {
    using SEU = RTC_RTC_TST_SEU_Values<RTC::RTC_TST, 0, 4, ReadWriteMode, RTCRTC_TSTBase> ;
    using SET = RTC_RTC_TST_SET_Values<RTC::RTC_TST, 4, 3, ReadWriteMode, RTCRTC_TSTBase> ;
    using MIU = RTC_RTC_TST_MIU_Values<RTC::RTC_TST, 8, 4, ReadWriteMode, RTCRTC_TSTBase> ;
    using MIT = RTC_RTC_TST_MIT_Values<RTC::RTC_TST, 12, 3, ReadWriteMode, RTCRTC_TSTBase> ;
    using HOU = RTC_RTC_TST_HOU_Values<RTC::RTC_TST, 16, 4, ReadWriteMode, RTCRTC_TSTBase> ;
    using HOT = RTC_RTC_TST_HOT_Values<RTC::RTC_TST, 20, 2, ReadWriteMode, RTCRTC_TSTBase> ;
    using APM = RTC_RTC_TST_APM_Values<RTC::RTC_TST, 22, 1, ReadWriteMode, RTCRTC_TSTBase> ;
    using FieldValues = RTC_RTC_TST_APM_Values<RTC::RTC_TST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSTPack  = Register<0x40002830, 32, ReadWriteMode, RTCRTC_TSTBase, T...> ;

  struct RTCRTC_TSDBase {} ;

  struct RTC_TSD : public RegisterBase<0x40002834, 32, ReadWriteMode>
  {
    using DAU = RTC_RTC_TSD_DAU_Values<RTC::RTC_TSD, 0, 4, ReadWriteMode, RTCRTC_TSDBase> ;
    using DAT = RTC_RTC_TSD_DAT_Values<RTC::RTC_TSD, 4, 2, ReadWriteMode, RTCRTC_TSDBase> ;
    using MOU = RTC_RTC_TSD_MOU_Values<RTC::RTC_TSD, 8, 4, ReadWriteMode, RTCRTC_TSDBase> ;
    using MOT = RTC_RTC_TSD_MOT_Values<RTC::RTC_TSD, 12, 1, ReadWriteMode, RTCRTC_TSDBase> ;
    using WDU = RTC_RTC_TSD_WDU_Values<RTC::RTC_TSD, 13, 3, ReadWriteMode, RTCRTC_TSDBase> ;
    using YRU = RTC_RTC_TSD_YRU_Values<RTC::RTC_TSD, 16, 4, ReadWriteMode, RTCRTC_TSDBase> ;
    using YRT = RTC_RTC_TSD_YRT_Values<RTC::RTC_TSD, 20, 4, ReadWriteMode, RTCRTC_TSDBase> ;
    using FieldValues = RTC_RTC_TSD_YRT_Values<RTC::RTC_TSD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSDPack  = Register<0x40002834, 32, ReadWriteMode, RTCRTC_TSDBase, T...> ;

  struct RTCRTC_TSSSBase {} ;

  struct RTC_TSSS : public RegisterBase<0x40002838, 32, ReadWriteMode>
  {
    using SSE = RTC_RTC_TSSS_SSE_Values<RTC::RTC_TSSS, 0, 16, ReadWriteMode, RTCRTC_TSSSBase> ;
    using FieldValues = RTC_RTC_TSSS_SSE_Values<RTC::RTC_TSSS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSSSPack  = Register<0x40002838, 32, ReadWriteMode, RTCRTC_TSSSBase, T...> ;

  struct RTCRTC_CALIBBase {} ;

  struct RTC_CALIB : public RegisterBase<0x4000283C, 32, ReadWriteMode>
  {
    using CM = RTC_RTC_CALIB_CM_Values<RTC::RTC_CALIB, 0, 9, ReadWriteMode, RTCRTC_CALIBBase> ;
    using CW16 = RTC_RTC_CALIB_CW16_Values<RTC::RTC_CALIB, 13, 1, ReadWriteMode, RTCRTC_CALIBBase> ;
    using CW8 = RTC_RTC_CALIB_CW8_Values<RTC::RTC_CALIB, 14, 1, ReadWriteMode, RTCRTC_CALIBBase> ;
    using CP = RTC_RTC_CALIB_CP_Values<RTC::RTC_CALIB, 15, 1, ReadWriteMode, RTCRTC_CALIBBase> ;
    using FieldValues = RTC_RTC_CALIB_CP_Values<RTC::RTC_CALIB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_CALIBPack  = Register<0x4000283C, 32, ReadWriteMode, RTCRTC_CALIBBase, T...> ;

  struct RTCRTC_TMPCFGBase {} ;

  struct RTC_TMPCFG : public RegisterBase<0x40002840, 32, ReadWriteMode>
  {
    using TP1EN = RTC_RTC_TMPCFG_TP1EN_Values<RTC::RTC_TMPCFG, 0, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP1TRG = RTC_RTC_TMPCFG_TP1TRG_Values<RTC::RTC_TMPCFG, 1, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TPINTEN = RTC_RTC_TMPCFG_TPINTEN_Values<RTC::RTC_TMPCFG, 2, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP2EN = RTC_RTC_TMPCFG_TP2EN_Values<RTC::RTC_TMPCFG, 3, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP2TRG = RTC_RTC_TMPCFG_TP2TRG_Values<RTC::RTC_TMPCFG, 4, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP3EN = RTC_RTC_TMPCFG_TP3EN_Values<RTC::RTC_TMPCFG, 5, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP3TRG = RTC_RTC_TMPCFG_TP3TRG_Values<RTC::RTC_TMPCFG, 6, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TPTS = RTC_RTC_TMPCFG_TPTS_Values<RTC::RTC_TMPCFG, 7, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TPFREQ = RTC_RTC_TMPCFG_TPFREQ_Values<RTC::RTC_TMPCFG, 8, 3, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TPFLT = RTC_RTC_TMPCFG_TPFLT_Values<RTC::RTC_TMPCFG, 11, 2, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TPPRCH = RTC_RTC_TMPCFG_TPPRCH_Values<RTC::RTC_TMPCFG, 13, 2, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TPPUDIS = RTC_RTC_TMPCFG_TPPUDIS_Values<RTC::RTC_TMPCFG, 15, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP1INTEN = RTC_RTC_TMPCFG_TP1INTEN_Values<RTC::RTC_TMPCFG, 16, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP1NOE = RTC_RTC_TMPCFG_TP1NOE_Values<RTC::RTC_TMPCFG, 17, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP1MF = RTC_RTC_TMPCFG_TP1MF_Values<RTC::RTC_TMPCFG, 18, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP2INTEN = RTC_RTC_TMPCFG_TP2INTEN_Values<RTC::RTC_TMPCFG, 19, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP2NOE = RTC_RTC_TMPCFG_TP2NOE_Values<RTC::RTC_TMPCFG, 20, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP2MF = RTC_RTC_TMPCFG_TP2MF_Values<RTC::RTC_TMPCFG, 21, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP3INTEN = RTC_RTC_TMPCFG_TP3INTEN_Values<RTC::RTC_TMPCFG, 22, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP3NOE = RTC_RTC_TMPCFG_TP3NOE_Values<RTC::RTC_TMPCFG, 23, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using TP3MF = RTC_RTC_TMPCFG_TP3MF_Values<RTC::RTC_TMPCFG, 24, 1, ReadWriteMode, RTCRTC_TMPCFGBase> ;
    using FieldValues = RTC_RTC_TMPCFG_TP3MF_Values<RTC::RTC_TMPCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TMPCFGPack  = Register<0x40002840, 32, ReadWriteMode, RTCRTC_TMPCFGBase, T...> ;

  struct RTCRTC_ALRMASSBase {} ;

  struct RTC_ALRMASS : public RegisterBase<0x40002844, 32, ReadWriteMode>
  {
    using SSV = RTC_RTC_ALRMASS_SSV_Values<RTC::RTC_ALRMASS, 0, 15, ReadWriteMode, RTCRTC_ALRMASSBase> ;
    using MASKSSB = RTC_RTC_ALRMASS_MASKSSB_Values<RTC::RTC_ALRMASS, 24, 4, ReadWriteMode, RTCRTC_ALRMASSBase> ;
    using FieldValues = RTC_RTC_ALRMASS_MASKSSB_Values<RTC::RTC_ALRMASS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALRMASSPack  = Register<0x40002844, 32, ReadWriteMode, RTCRTC_ALRMASSBase, T...> ;

  struct RTCRTC_ALRMBSSBase {} ;

  struct RTC_ALRMBSS : public RegisterBase<0x40002848, 32, ReadWriteMode>
  {
    using SSV = RTC_RTC_ALRMBSS_SSV_Values<RTC::RTC_ALRMBSS, 0, 15, ReadWriteMode, RTCRTC_ALRMBSSBase> ;
    using MASKSSB = RTC_RTC_ALRMBSS_MASKSSB_Values<RTC::RTC_ALRMBSS, 24, 4, ReadWriteMode, RTCRTC_ALRMBSSBase> ;
    using FieldValues = RTC_RTC_ALRMBSS_MASKSSB_Values<RTC::RTC_ALRMBSS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALRMBSSPack  = Register<0x40002848, 32, ReadWriteMode, RTCRTC_ALRMBSSBase, T...> ;

  struct RTCRTC_OPTBase {} ;

  struct RTC_OPT : public RegisterBase<0x4000284C, 32, ReadWriteMode>
  {
    using TYPE = RTC_RTC_OPT_TYPE_Values<RTC::RTC_OPT, 0, 1, ReadWriteMode, RTCRTC_OPTBase> ;
    using FieldValues = RTC_RTC_OPT_TYPE_Values<RTC::RTC_OPT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_OPTPack  = Register<0x4000284C, 32, ReadWriteMode, RTCRTC_OPTBase, T...> ;

  struct RTCRTC_BKP1Base {} ;

  struct RTC_BKP1 : public RegisterBase<0x40002850, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP1_BF_Values<RTC::RTC_BKP1, 0, 32, ReadWriteMode, RTCRTC_BKP1Base> ;
    using FieldValues = RTC_RTC_BKP1_BF_Values<RTC::RTC_BKP1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP1Pack  = Register<0x40002850, 32, ReadWriteMode, RTCRTC_BKP1Base, T...> ;

  struct RTCRTC_BKP2Base {} ;

  struct RTC_BKP2 : public RegisterBase<0x40002854, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP2_BF_Values<RTC::RTC_BKP2, 0, 32, ReadWriteMode, RTCRTC_BKP2Base> ;
    using FieldValues = RTC_RTC_BKP2_BF_Values<RTC::RTC_BKP2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP2Pack  = Register<0x40002854, 32, ReadWriteMode, RTCRTC_BKP2Base, T...> ;

  struct RTCRTC_BKP3Base {} ;

  struct RTC_BKP3 : public RegisterBase<0x40002858, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP3_BF_Values<RTC::RTC_BKP3, 0, 32, ReadWriteMode, RTCRTC_BKP3Base> ;
    using FieldValues = RTC_RTC_BKP3_BF_Values<RTC::RTC_BKP3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP3Pack  = Register<0x40002858, 32, ReadWriteMode, RTCRTC_BKP3Base, T...> ;

  struct RTCRTC_BKP4Base {} ;

  struct RTC_BKP4 : public RegisterBase<0x4000285C, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP4_BF_Values<RTC::RTC_BKP4, 0, 32, ReadWriteMode, RTCRTC_BKP4Base> ;
    using FieldValues = RTC_RTC_BKP4_BF_Values<RTC::RTC_BKP4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP4Pack  = Register<0x4000285C, 32, ReadWriteMode, RTCRTC_BKP4Base, T...> ;

  struct RTCRTC_BKP5Base {} ;

  struct RTC_BKP5 : public RegisterBase<0x40002860, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP5_BF_Values<RTC::RTC_BKP5, 0, 32, ReadWriteMode, RTCRTC_BKP5Base> ;
    using FieldValues = RTC_RTC_BKP5_BF_Values<RTC::RTC_BKP5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP5Pack  = Register<0x40002860, 32, ReadWriteMode, RTCRTC_BKP5Base, T...> ;

  struct RTCRTC_BKP6Base {} ;

  struct RTC_BKP6 : public RegisterBase<0x40002864, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP6_BF_Values<RTC::RTC_BKP6, 0, 32, ReadWriteMode, RTCRTC_BKP6Base> ;
    using FieldValues = RTC_RTC_BKP6_BF_Values<RTC::RTC_BKP6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP6Pack  = Register<0x40002864, 32, ReadWriteMode, RTCRTC_BKP6Base, T...> ;

  struct RTCRTC_BKP7Base {} ;

  struct RTC_BKP7 : public RegisterBase<0x40002868, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP7_BF_Values<RTC::RTC_BKP7, 0, 32, ReadWriteMode, RTCRTC_BKP7Base> ;
    using FieldValues = RTC_RTC_BKP7_BF_Values<RTC::RTC_BKP7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP7Pack  = Register<0x40002868, 32, ReadWriteMode, RTCRTC_BKP7Base, T...> ;

  struct RTCRTC_BKP8Base {} ;

  struct RTC_BKP8 : public RegisterBase<0x4000286C, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP8_BF_Values<RTC::RTC_BKP8, 0, 32, ReadWriteMode, RTCRTC_BKP8Base> ;
    using FieldValues = RTC_RTC_BKP8_BF_Values<RTC::RTC_BKP8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP8Pack  = Register<0x4000286C, 32, ReadWriteMode, RTCRTC_BKP8Base, T...> ;

  struct RTCRTC_BKP9Base {} ;

  struct RTC_BKP9 : public RegisterBase<0x40002870, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP9_BF_Values<RTC::RTC_BKP9, 0, 32, ReadWriteMode, RTCRTC_BKP9Base> ;
    using FieldValues = RTC_RTC_BKP9_BF_Values<RTC::RTC_BKP9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP9Pack  = Register<0x40002870, 32, ReadWriteMode, RTCRTC_BKP9Base, T...> ;

  struct RTCRTC_BKP10Base {} ;

  struct RTC_BKP10 : public RegisterBase<0x40002874, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP10_BF_Values<RTC::RTC_BKP10, 0, 32, ReadWriteMode, RTCRTC_BKP10Base> ;
    using FieldValues = RTC_RTC_BKP10_BF_Values<RTC::RTC_BKP10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP10Pack  = Register<0x40002874, 32, ReadWriteMode, RTCRTC_BKP10Base, T...> ;

  struct RTCRTC_BKP11Base {} ;

  struct RTC_BKP11 : public RegisterBase<0x40002878, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP11_BF_Values<RTC::RTC_BKP11, 0, 32, ReadWriteMode, RTCRTC_BKP11Base> ;
    using FieldValues = RTC_RTC_BKP11_BF_Values<RTC::RTC_BKP11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP11Pack  = Register<0x40002878, 32, ReadWriteMode, RTCRTC_BKP11Base, T...> ;

  struct RTCRTC_BKP12Base {} ;

  struct RTC_BKP12 : public RegisterBase<0x4000287C, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP12_BF_Values<RTC::RTC_BKP12, 0, 32, ReadWriteMode, RTCRTC_BKP12Base> ;
    using FieldValues = RTC_RTC_BKP12_BF_Values<RTC::RTC_BKP12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP12Pack  = Register<0x4000287C, 32, ReadWriteMode, RTCRTC_BKP12Base, T...> ;

  struct RTCRTC_BKP13Base {} ;

  struct RTC_BKP13 : public RegisterBase<0x40002880, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP13_BF_Values<RTC::RTC_BKP13, 0, 32, ReadWriteMode, RTCRTC_BKP13Base> ;
    using FieldValues = RTC_RTC_BKP13_BF_Values<RTC::RTC_BKP13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP13Pack  = Register<0x40002880, 32, ReadWriteMode, RTCRTC_BKP13Base, T...> ;

  struct RTCRTC_BKP14Base {} ;

  struct RTC_BKP14 : public RegisterBase<0x40002884, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP14_BF_Values<RTC::RTC_BKP14, 0, 32, ReadWriteMode, RTCRTC_BKP14Base> ;
    using FieldValues = RTC_RTC_BKP14_BF_Values<RTC::RTC_BKP14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP14Pack  = Register<0x40002884, 32, ReadWriteMode, RTCRTC_BKP14Base, T...> ;

  struct RTCRTC_BKP15Base {} ;

  struct RTC_BKP15 : public RegisterBase<0x40002888, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP15_BF_Values<RTC::RTC_BKP15, 0, 32, ReadWriteMode, RTCRTC_BKP15Base> ;
    using FieldValues = RTC_RTC_BKP15_BF_Values<RTC::RTC_BKP15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP15Pack  = Register<0x40002888, 32, ReadWriteMode, RTCRTC_BKP15Base, T...> ;

  struct RTCRTC_BKP16Base {} ;

  struct RTC_BKP16 : public RegisterBase<0x4000288C, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP16_BF_Values<RTC::RTC_BKP16, 0, 32, ReadWriteMode, RTCRTC_BKP16Base> ;
    using FieldValues = RTC_RTC_BKP16_BF_Values<RTC::RTC_BKP16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP16Pack  = Register<0x4000288C, 32, ReadWriteMode, RTCRTC_BKP16Base, T...> ;

  struct RTCRTC_BKP17Base {} ;

  struct RTC_BKP17 : public RegisterBase<0x40002890, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP17_BF_Values<RTC::RTC_BKP17, 0, 32, ReadWriteMode, RTCRTC_BKP17Base> ;
    using FieldValues = RTC_RTC_BKP17_BF_Values<RTC::RTC_BKP17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP17Pack  = Register<0x40002890, 32, ReadWriteMode, RTCRTC_BKP17Base, T...> ;

  struct RTCRTC_BKP18Base {} ;

  struct RTC_BKP18 : public RegisterBase<0x40002894, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP18_BF_Values<RTC::RTC_BKP18, 0, 32, ReadWriteMode, RTCRTC_BKP18Base> ;
    using FieldValues = RTC_RTC_BKP18_BF_Values<RTC::RTC_BKP18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP18Pack  = Register<0x40002894, 32, ReadWriteMode, RTCRTC_BKP18Base, T...> ;

  struct RTCRTC_BKP19Base {} ;

  struct RTC_BKP19 : public RegisterBase<0x40002898, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP19_BF_Values<RTC::RTC_BKP19, 0, 32, ReadWriteMode, RTCRTC_BKP19Base> ;
    using FieldValues = RTC_RTC_BKP19_BF_Values<RTC::RTC_BKP19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP19Pack  = Register<0x40002898, 32, ReadWriteMode, RTCRTC_BKP19Base, T...> ;

  struct RTCRTC_BKP20Base {} ;

  struct RTC_BKP20 : public RegisterBase<0x4000289C, 32, ReadWriteMode>
  {
    using BF = RTC_RTC_BKP20_BF_Values<RTC::RTC_BKP20, 0, 32, ReadWriteMode, RTCRTC_BKP20Base> ;
    using FieldValues = RTC_RTC_BKP20_BF_Values<RTC::RTC_BKP20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP20Pack  = Register<0x4000289C, 32, ReadWriteMode, RTCRTC_BKP20Base, T...> ;

  struct RTCRTC_TSCWKUPCTRLBase {} ;

  struct RTC_TSCWKUPCTRL : public RegisterBase<0x400028A0, 32, ReadWriteMode>
  {
    using WKUPEN = RTC_RTC_TSCWKUPCTRL_WKUPEN_Values<RTC::RTC_TSCWKUPCTRL, 0, 1, ReadWriteMode, RTCRTC_TSCWKUPCTRLBase> ;
    using WKUPCNF = RTC_RTC_TSCWKUPCTRL_WKUPCNF_Values<RTC::RTC_TSCWKUPCTRL, 2, 1, ReadWriteMode, RTCRTC_TSCWKUPCTRLBase> ;
    using WKUPOFF = RTC_RTC_TSCWKUPCTRL_WKUPOFF_Values<RTC::RTC_TSCWKUPCTRL, 3, 1, ReadWriteMode, RTCRTC_TSCWKUPCTRLBase> ;
    using FieldValues = RTC_RTC_TSCWKUPCTRL_WKUPOFF_Values<RTC::RTC_TSCWKUPCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSCWKUPCTRLPack  = Register<0x400028A0, 32, ReadWriteMode, RTCRTC_TSCWKUPCTRLBase, T...> ;

  struct RTCRTC_TSCWKUPCNTBase {} ;

  struct RTC_TSCWKUPCNT : public RegisterBase<0x400028A4, 32, ReadWriteMode>
  {
    using CNT = RTC_RTC_TSCWKUPCNT_CNT_Values<RTC::RTC_TSCWKUPCNT, 0, 14, ReadWriteMode, RTCRTC_TSCWKUPCNTBase> ;
    using FieldValues = RTC_RTC_TSCWKUPCNT_CNT_Values<RTC::RTC_TSCWKUPCNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSCWKUPCNTPack  = Register<0x400028A4, 32, ReadWriteMode, RTCRTC_TSCWKUPCNTBase, T...> ;

} ;

