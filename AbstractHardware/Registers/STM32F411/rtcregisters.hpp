/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real-time clock. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(RTCREGISTERS_HPP)
#define RTCREGISTERS_HPP

#include "rtcbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Rtc
{
  struct Tr : public RegisterBase<0x40002800, 32, ReadWriteMode>
  {
    using Pm = RtcTrPmValues<Rtc::Tr, 22, 1, ReadWriteMode, RtcTrPmValuesBase> ;
    using Ht = RtcTrHtValues<Rtc::Tr, 20, 2, ReadWriteMode, RtcTrHtValuesBase> ;
    using Hu = RtcTrHuValues<Rtc::Tr, 16, 4, ReadWriteMode, RtcTrHuValuesBase> ;
    using Mnt = RtcTrMntValues<Rtc::Tr, 12, 3, ReadWriteMode, RtcTrMntValuesBase> ;
    using Mnu = RtcTrMnuValues<Rtc::Tr, 8, 4, ReadWriteMode, RtcTrMnuValuesBase> ;
    using St = RtcTrStValues<Rtc::Tr, 4, 3, ReadWriteMode, RtcTrStValuesBase> ;
    using Su = RtcTrSuValues<Rtc::Tr, 0, 4, ReadWriteMode, RtcTrSuValuesBase> ;
  } ;

  template<typename... T> 
  using TrPack  = Register<0x40002800, 32, ReadWriteMode, RtcTrPmValuesBase, T...> ;

  struct Dr : public RegisterBase<0x40002804, 32, ReadWriteMode>
  {
    using Yt = RtcDrYtValues<Rtc::Dr, 20, 4, ReadWriteMode, RtcDrYtValuesBase> ;
    using Yu = RtcDrYuValues<Rtc::Dr, 16, 4, ReadWriteMode, RtcDrYuValuesBase> ;
    using Wdu = RtcDrWduValues<Rtc::Dr, 13, 3, ReadWriteMode, RtcDrWduValuesBase> ;
    using Mt = RtcDrMtValues<Rtc::Dr, 12, 1, ReadWriteMode, RtcDrMtValuesBase> ;
    using Mu = RtcDrMuValues<Rtc::Dr, 8, 4, ReadWriteMode, RtcDrMuValuesBase> ;
    using Dt = RtcDrDtValues<Rtc::Dr, 4, 2, ReadWriteMode, RtcDrDtValuesBase> ;
    using Du = RtcDrDuValues<Rtc::Dr, 0, 4, ReadWriteMode, RtcDrDuValuesBase> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x40002804, 32, ReadWriteMode, RtcDrYtValuesBase, T...> ;

  struct Cr : public RegisterBase<0x40002808, 32, ReadWriteMode>
  {
    using Coe = RtcCrCoeValues<Rtc::Cr, 23, 1, ReadWriteMode, RtcCrCoeValuesBase> ;
    using Osel = RtcCrOselValues<Rtc::Cr, 21, 2, ReadWriteMode, RtcCrOselValuesBase> ;
    using Pol = RtcCrPolValues<Rtc::Cr, 20, 1, ReadWriteMode, RtcCrPolValuesBase> ;
    using Cosel = RtcCrCoselValues<Rtc::Cr, 19, 1, ReadWriteMode, RtcCrCoselValuesBase> ;
    using Bkp = RtcCrBkpValues<Rtc::Cr, 18, 1, ReadWriteMode, RtcCrBkpValuesBase> ;
    using Sub1H = RtcCrSubHValues<Rtc::Cr, 17, 1, ReadWriteMode, RtcCrSubHValuesBase> ;
    using Add1H = RtcCrAddHValues<Rtc::Cr, 16, 1, ReadWriteMode, RtcCrAddHValuesBase> ;
    using Tsie = RtcCrTsieValues<Rtc::Cr, 15, 1, ReadWriteMode, RtcCrTsieValuesBase> ;
    using Wutie = RtcCrWutieValues<Rtc::Cr, 14, 1, ReadWriteMode, RtcCrWutieValuesBase> ;
    using Alrbie = RtcCrAlrbieValues<Rtc::Cr, 13, 1, ReadWriteMode, RtcCrAlrbieValuesBase> ;
    using Alraie = RtcCrAlraieValues<Rtc::Cr, 12, 1, ReadWriteMode, RtcCrAlraieValuesBase> ;
    using Tse = RtcCrTseValues<Rtc::Cr, 11, 1, ReadWriteMode, RtcCrTseValuesBase> ;
    using Wute = RtcCrWuteValues<Rtc::Cr, 10, 1, ReadWriteMode, RtcCrWuteValuesBase> ;
    using Alrbe = RtcCrAlrbeValues<Rtc::Cr, 9, 1, ReadWriteMode, RtcCrAlrbeValuesBase> ;
    using Alrae = RtcCrAlraeValues<Rtc::Cr, 8, 1, ReadWriteMode, RtcCrAlraeValuesBase> ;
    using Dce = RtcCrDceValues<Rtc::Cr, 7, 1, ReadWriteMode, RtcCrDceValuesBase> ;
    using Fmt = RtcCrFmtValues<Rtc::Cr, 6, 1, ReadWriteMode, RtcCrFmtValuesBase> ;
    using Bypshad = RtcCrBypshadValues<Rtc::Cr, 5, 1, ReadWriteMode, RtcCrBypshadValuesBase> ;
    using Refckon = RtcCrRefckonValues<Rtc::Cr, 4, 1, ReadWriteMode, RtcCrRefckonValuesBase> ;
    using Tsedge = RtcCrTsedgeValues<Rtc::Cr, 3, 1, ReadWriteMode, RtcCrTsedgeValuesBase> ;
    using Wcksel = RtcCrWckselValues<Rtc::Cr, 0, 3, ReadWriteMode, RtcCrWckselValuesBase> ;
  } ;

  template<typename... T> 
  using CrPack  = Register<0x40002808, 32, ReadWriteMode, RtcCrCoeValuesBase, T...> ;

  struct Isr : public RegisterBase<0x4000280C, 32, ReadWriteMode>
  {
    using Alrawf = RtcIsrAlrawfValues<Rtc::Isr, 0, 1, ReadMode, RtcIsrAlrawfValuesBase> ;
    using Alrbwf = RtcIsrAlrbwfValues<Rtc::Isr, 1, 1, ReadMode, RtcIsrAlrbwfValuesBase> ;
    using Wutwf = RtcIsrWutwfValues<Rtc::Isr, 2, 1, ReadMode, RtcIsrWutwfValuesBase> ;
    using Shpf = RtcIsrShpfValues<Rtc::Isr, 3, 1, ReadWriteMode, RtcIsrShpfValuesBase> ;
    using Inits = RtcIsrInitsValues<Rtc::Isr, 4, 1, ReadMode, RtcIsrInitsValuesBase> ;
    using Rsf = RtcIsrRsfValues<Rtc::Isr, 5, 1, ReadWriteMode, RtcIsrRsfValuesBase> ;
    using Initf = RtcIsrInitfValues<Rtc::Isr, 6, 1, ReadMode, RtcIsrInitfValuesBase> ;
    using Init = RtcIsrInitValues<Rtc::Isr, 7, 1, ReadWriteMode, RtcIsrInitValuesBase> ;
    using Alraf = RtcIsrAlrafValues<Rtc::Isr, 8, 1, ReadWriteMode, RtcIsrAlrafValuesBase> ;
    using Alrbf = RtcIsrAlrbfValues<Rtc::Isr, 9, 1, ReadWriteMode, RtcIsrAlrbfValuesBase> ;
    using Wutf = RtcIsrWutfValues<Rtc::Isr, 10, 1, ReadWriteMode, RtcIsrWutfValuesBase> ;
    using Tsf = RtcIsrTsfValues<Rtc::Isr, 11, 1, ReadWriteMode, RtcIsrTsfValuesBase> ;
    using Tsovf = RtcIsrTsovfValues<Rtc::Isr, 12, 1, ReadWriteMode, RtcIsrTsovfValuesBase> ;
    using Tamp1F = RtcIsrTampFValues<Rtc::Isr, 13, 1, ReadWriteMode, RtcIsrTampFValuesBase> ;
    using Tamp2F = RtcIsrTampFValues<Rtc::Isr, 14, 1, ReadWriteMode, RtcIsrTampFValuesBase> ;
    using Recalpf = RtcIsrRecalpfValues<Rtc::Isr, 16, 1, ReadMode, RtcIsrRecalpfValuesBase> ;
  } ;

  template<typename... T> 
  using IsrPack  = Register<0x4000280C, 32, ReadWriteMode, RtcIsrAlrawfValuesBase, T...> ;

  struct Prer : public RegisterBase<0x40002810, 32, ReadWriteMode>
  {
    using PredivA = ReadWriteMode<Rtc::Prer, 16, 7> ;
    using PredivS = ReadWriteMode<Rtc::Prer, 0, 15> ;
  } ;

  template<typename... T> 
  using PrerPack  = Register<0x40002810, 32, ReadWriteMode, RtcPrerPredivAValuesBase, T...> ;

  struct Wutr : public RegisterBase<0x40002814, 32, ReadWriteMode>
  {
    using Wut = ReadWriteMode<Rtc::Wutr, 0, 16> ;
  } ;

  template<typename... T> 
  using WutrPack  = Register<0x40002814, 32, ReadWriteMode, RtcWutrWutValuesBase, T...> ;

  struct Calibr : public RegisterBase<0x40002818, 32, ReadWriteMode>
  {
    using Dcs = RtcCalibrDcsValues<Rtc::Calibr, 7, 1, ReadWriteMode, RtcCalibrDcsValuesBase> ;
    using Dc = RtcCalibrDcValues<Rtc::Calibr, 0, 5, ReadWriteMode, RtcCalibrDcValuesBase> ;
  } ;

  template<typename... T> 
  using CalibrPack  = Register<0x40002818, 32, ReadWriteMode, RtcCalibrDcsValuesBase, T...> ;

  struct Alrmar : public RegisterBase<0x4000281C, 32, ReadWriteMode>
  {
    using Msk4 = RtcAlrmarMskValues<Rtc::Alrmar, 31, 1, ReadWriteMode, RtcAlrmarMskValuesBase> ;
    using Wdsel = RtcAlrmarWdselValues<Rtc::Alrmar, 30, 1, ReadWriteMode, RtcAlrmarWdselValuesBase> ;
    using Dt = RtcAlrmarDtValues<Rtc::Alrmar, 28, 2, ReadWriteMode, RtcAlrmarDtValuesBase> ;
    using Du = RtcAlrmarDuValues<Rtc::Alrmar, 24, 4, ReadWriteMode, RtcAlrmarDuValuesBase> ;
    using Msk3 = RtcAlrmarMskValues<Rtc::Alrmar, 23, 1, ReadWriteMode, RtcAlrmarMskValuesBase> ;
    using Pm = RtcAlrmarPmValues<Rtc::Alrmar, 22, 1, ReadWriteMode, RtcAlrmarPmValuesBase> ;
    using Ht = RtcAlrmarHtValues<Rtc::Alrmar, 20, 2, ReadWriteMode, RtcAlrmarHtValuesBase> ;
    using Hu = RtcAlrmarHuValues<Rtc::Alrmar, 16, 4, ReadWriteMode, RtcAlrmarHuValuesBase> ;
    using Msk2 = RtcAlrmarMskValues<Rtc::Alrmar, 15, 1, ReadWriteMode, RtcAlrmarMskValuesBase> ;
    using Mnt = RtcAlrmarMntValues<Rtc::Alrmar, 12, 3, ReadWriteMode, RtcAlrmarMntValuesBase> ;
    using Mnu = RtcAlrmarMnuValues<Rtc::Alrmar, 8, 4, ReadWriteMode, RtcAlrmarMnuValuesBase> ;
    using Msk1 = RtcAlrmarMskValues<Rtc::Alrmar, 7, 1, ReadWriteMode, RtcAlrmarMskValuesBase> ;
    using St = RtcAlrmarStValues<Rtc::Alrmar, 4, 3, ReadWriteMode, RtcAlrmarStValuesBase> ;
    using Su = RtcAlrmarSuValues<Rtc::Alrmar, 0, 4, ReadWriteMode, RtcAlrmarSuValuesBase> ;
  } ;

  template<typename... T> 
  using AlrmarPack  = Register<0x4000281C, 32, ReadWriteMode, RtcAlrmarMskValuesBase, T...> ;

  struct Alrmbr : public RegisterBase<0x40002820, 32, ReadWriteMode>
  {
    using Msk4 = RtcAlrmbrMskValues<Rtc::Alrmbr, 31, 1, ReadWriteMode, RtcAlrmbrMskValuesBase> ;
    using Wdsel = RtcAlrmbrWdselValues<Rtc::Alrmbr, 30, 1, ReadWriteMode, RtcAlrmbrWdselValuesBase> ;
    using Dt = RtcAlrmbrDtValues<Rtc::Alrmbr, 28, 2, ReadWriteMode, RtcAlrmbrDtValuesBase> ;
    using Du = RtcAlrmbrDuValues<Rtc::Alrmbr, 24, 4, ReadWriteMode, RtcAlrmbrDuValuesBase> ;
    using Msk3 = RtcAlrmbrMskValues<Rtc::Alrmbr, 23, 1, ReadWriteMode, RtcAlrmbrMskValuesBase> ;
    using Pm = RtcAlrmbrPmValues<Rtc::Alrmbr, 22, 1, ReadWriteMode, RtcAlrmbrPmValuesBase> ;
    using Ht = RtcAlrmbrHtValues<Rtc::Alrmbr, 20, 2, ReadWriteMode, RtcAlrmbrHtValuesBase> ;
    using Hu = RtcAlrmbrHuValues<Rtc::Alrmbr, 16, 4, ReadWriteMode, RtcAlrmbrHuValuesBase> ;
    using Msk2 = RtcAlrmbrMskValues<Rtc::Alrmbr, 15, 1, ReadWriteMode, RtcAlrmbrMskValuesBase> ;
    using Mnt = RtcAlrmbrMntValues<Rtc::Alrmbr, 12, 3, ReadWriteMode, RtcAlrmbrMntValuesBase> ;
    using Mnu = RtcAlrmbrMnuValues<Rtc::Alrmbr, 8, 4, ReadWriteMode, RtcAlrmbrMnuValuesBase> ;
    using Msk1 = RtcAlrmbrMskValues<Rtc::Alrmbr, 7, 1, ReadWriteMode, RtcAlrmbrMskValuesBase> ;
    using St = RtcAlrmbrStValues<Rtc::Alrmbr, 4, 3, ReadWriteMode, RtcAlrmbrStValuesBase> ;
    using Su = RtcAlrmbrSuValues<Rtc::Alrmbr, 0, 4, ReadWriteMode, RtcAlrmbrSuValuesBase> ;
  } ;

  template<typename... T> 
  using AlrmbrPack  = Register<0x40002820, 32, ReadWriteMode, RtcAlrmbrMskValuesBase, T...> ;

  struct Wpr : public RegisterBase<0x40002824, 32, WriteMode>
  {
    using Key = WriteMode<Rtc::Wpr, 0, 8> ;
  } ;

  template<typename... T> 
  using WprPack  = Register<0x40002824, 32, WriteMode, RtcWprKeyValuesBase, T...> ;

  struct Ssr : public RegisterBase<0x40002828, 32, ReadMode>
  {
    using Ss = ReadMode<Rtc::Ssr, 0, 16> ;
  } ;

  template<typename... T> 
  using SsrPack  = Register<0x40002828, 32, ReadMode, RtcSsrSsValuesBase, T...> ;

  struct Shiftr : public RegisterBase<0x4000282C, 32, WriteMode>
  {
    using Add1S = RtcShiftrAddSValues<Rtc::Shiftr, 31, 1, WriteMode, RtcShiftrAddSValuesBase> ;
    using Subfs = WriteMode<Rtc::Shiftr, 0, 15> ;
  } ;

  template<typename... T> 
  using ShiftrPack  = Register<0x4000282C, 32, WriteMode, RtcShiftrAddSValuesBase, T...> ;

  struct Tstr : public RegisterBase<0x40002830, 32, ReadMode>
  {
    using Pm = RtcTstrPmValues<Rtc::Tstr, 22, 1, ReadMode, RtcTstrPmValuesBase> ;
    using Ht = RtcTstrHtValues<Rtc::Tstr, 20, 2, ReadMode, RtcTstrHtValuesBase> ;
    using Hu = RtcTstrHuValues<Rtc::Tstr, 16, 4, ReadMode, RtcTstrHuValuesBase> ;
    using Mnt = RtcTstrMntValues<Rtc::Tstr, 12, 3, ReadMode, RtcTstrMntValuesBase> ;
    using Mnu = RtcTstrMnuValues<Rtc::Tstr, 8, 4, ReadMode, RtcTstrMnuValuesBase> ;
    using St = RtcTstrStValues<Rtc::Tstr, 4, 3, ReadMode, RtcTstrStValuesBase> ;
    using Su = RtcTstrSuValues<Rtc::Tstr, 0, 4, ReadMode, RtcTstrSuValuesBase> ;
  } ;

  template<typename... T> 
  using TstrPack  = Register<0x40002830, 32, ReadMode, RtcTstrPmValuesBase, T...> ;

  struct Tsdr : public RegisterBase<0x40002834, 32, ReadMode>
  {
    using Wdu = RtcTsdrWduValues<Rtc::Tsdr, 13, 3, ReadMode, RtcTsdrWduValuesBase> ;
    using Mt = RtcTsdrMtValues<Rtc::Tsdr, 12, 1, ReadMode, RtcTsdrMtValuesBase> ;
    using Mu = RtcTsdrMuValues<Rtc::Tsdr, 8, 4, ReadMode, RtcTsdrMuValuesBase> ;
    using Dt = RtcTsdrDtValues<Rtc::Tsdr, 4, 2, ReadMode, RtcTsdrDtValuesBase> ;
    using Du = RtcTsdrDuValues<Rtc::Tsdr, 0, 4, ReadMode, RtcTsdrDuValuesBase> ;
  } ;

  template<typename... T> 
  using TsdrPack  = Register<0x40002834, 32, ReadMode, RtcTsdrWduValuesBase, T...> ;

  struct Tsssr : public RegisterBase<0x40002838, 32, ReadMode>
  {
    using Ss = ReadMode<Rtc::Tsssr, 0, 16> ;
  } ;

  template<typename... T> 
  using TsssrPack  = Register<0x40002838, 32, ReadMode, RtcTsssrSsValuesBase, T...> ;

  struct Calr : public RegisterBase<0x4000283C, 32, ReadWriteMode>
  {
    using Calp = RtcCalrCalpValues<Rtc::Calr, 15, 1, ReadWriteMode, RtcCalrCalpValuesBase> ;
    using Calw8 = RtcCalrCalwValues<Rtc::Calr, 14, 1, ReadWriteMode, RtcCalrCalwValuesBase> ;
    using Calw16 = RtcCalrCalwValues<Rtc::Calr, 13, 1, ReadWriteMode, RtcCalrCalwValuesBase> ;
    using Calm = ReadWriteMode<Rtc::Calr, 0, 9> ;
  } ;

  template<typename... T> 
  using CalrPack  = Register<0x4000283C, 32, ReadWriteMode, RtcCalrCalpValuesBase, T...> ;

  struct Tafcr : public RegisterBase<0x40002840, 32, ReadWriteMode>
  {
    using Alarmouttype = RtcTafcrAlarmouttypeValues<Rtc::Tafcr, 18, 1, ReadWriteMode, RtcTafcrAlarmouttypeValuesBase> ;
    using Tsinsel = RtcTafcrTsinselValues<Rtc::Tafcr, 17, 1, ReadWriteMode, RtcTafcrTsinselValuesBase> ;
    using Tamp1Insel = RtcTafcrTampInselValues<Rtc::Tafcr, 16, 1, ReadWriteMode, RtcTafcrTampInselValuesBase> ;
    using Tamppudis = RtcTafcrTamppudisValues<Rtc::Tafcr, 15, 1, ReadWriteMode, RtcTafcrTamppudisValuesBase> ;
    using Tampprch = RtcTafcrTampprchValues<Rtc::Tafcr, 13, 2, ReadWriteMode, RtcTafcrTampprchValuesBase> ;
    using Tampflt = RtcTafcrTampfltValues<Rtc::Tafcr, 11, 2, ReadWriteMode, RtcTafcrTampfltValuesBase> ;
    using Tampfreq = RtcTafcrTampfreqValues<Rtc::Tafcr, 8, 3, ReadWriteMode, RtcTafcrTampfreqValuesBase> ;
    using Tampts = RtcTafcrTamptsValues<Rtc::Tafcr, 7, 1, ReadWriteMode, RtcTafcrTamptsValuesBase> ;
    using Tamp2Trg = RtcTafcrTampTrgValues<Rtc::Tafcr, 4, 1, ReadWriteMode, RtcTafcrTampTrgValuesBase> ;
    using Tamp2E = RtcTafcrTampEValues<Rtc::Tafcr, 3, 1, ReadWriteMode, RtcTafcrTampEValuesBase> ;
    using Tampie = RtcTafcrTampieValues<Rtc::Tafcr, 2, 1, ReadWriteMode, RtcTafcrTampieValuesBase> ;
    using Tamp1Trg = RtcTafcrTampTrgValues<Rtc::Tafcr, 1, 1, ReadWriteMode, RtcTafcrTampTrgValuesBase> ;
    using Tamp1E = RtcTafcrTampEValues<Rtc::Tafcr, 0, 1, ReadWriteMode, RtcTafcrTampEValuesBase> ;
  } ;

  template<typename... T> 
  using TafcrPack  = Register<0x40002840, 32, ReadWriteMode, RtcTafcrAlarmouttypeValuesBase, T...> ;

  struct Alrmassr : public RegisterBase<0x40002844, 32, ReadWriteMode>
  {
    using Maskss = RtcAlrmassrMaskssValues<Rtc::Alrmassr, 24, 4, ReadWriteMode, RtcAlrmassrMaskssValuesBase> ;
    using Ss = ReadWriteMode<Rtc::Alrmassr, 0, 15> ;
  } ;

  template<typename... T> 
  using AlrmassrPack  = Register<0x40002844, 32, ReadWriteMode, RtcAlrmassrMaskssValuesBase, T...> ;

  struct Alrmbssr : public RegisterBase<0x40002848, 32, ReadWriteMode>
  {
    using Maskss = RtcAlrmbssrMaskssValues<Rtc::Alrmbssr, 24, 4, ReadWriteMode, RtcAlrmbssrMaskssValuesBase> ;
    using Ss = ReadWriteMode<Rtc::Alrmbssr, 0, 15> ;
  } ;

  template<typename... T> 
  using AlrmbssrPack  = Register<0x40002848, 32, ReadWriteMode, RtcAlrmbssrMaskssValuesBase, T...> ;

  struct Bkp0R : public RegisterBase<0x40002850, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp0R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp0RPack  = Register<0x40002850, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp1R : public RegisterBase<0x40002854, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp1R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp1RPack  = Register<0x40002854, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp2R : public RegisterBase<0x40002858, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp2R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp2RPack  = Register<0x40002858, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp3R : public RegisterBase<0x4000285C, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp3R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp3RPack  = Register<0x4000285C, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp4R : public RegisterBase<0x40002860, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp4R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp4RPack  = Register<0x40002860, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp5R : public RegisterBase<0x40002864, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp5R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp5RPack  = Register<0x40002864, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp6R : public RegisterBase<0x40002868, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp6R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp6RPack  = Register<0x40002868, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp7R : public RegisterBase<0x4000286C, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp7R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp7RPack  = Register<0x4000286C, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp8R : public RegisterBase<0x40002870, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp8R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp8RPack  = Register<0x40002870, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp9R : public RegisterBase<0x40002874, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp9R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp9RPack  = Register<0x40002874, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp10R : public RegisterBase<0x40002878, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp10R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp10RPack  = Register<0x40002878, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp11R : public RegisterBase<0x4000287C, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp11R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp11RPack  = Register<0x4000287C, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp12R : public RegisterBase<0x40002880, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp12R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp12RPack  = Register<0x40002880, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp13R : public RegisterBase<0x40002884, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp13R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp13RPack  = Register<0x40002884, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp14R : public RegisterBase<0x40002888, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp14R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp14RPack  = Register<0x40002888, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp15R : public RegisterBase<0x4000288C, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp15R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp15RPack  = Register<0x4000288C, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp16R : public RegisterBase<0x40002890, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp16R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp16RPack  = Register<0x40002890, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp17R : public RegisterBase<0x40002894, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp17R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp17RPack  = Register<0x40002894, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp18R : public RegisterBase<0x40002898, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp18R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp18RPack  = Register<0x40002898, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

  struct Bkp19R : public RegisterBase<0x4000289C, 32, ReadWriteMode>
  {
    using Bkp = ReadWriteMode<Rtc::Bkp19R, 0, 32> ;
  } ;

  template<typename... T> 
  using Bkp19RPack  = Register<0x4000289C, 32, ReadWriteMode, RtcBkpRBkpValuesBase, T...> ;

} ;

#endif //#if !defined(RTCREGISTERS_HPP)
