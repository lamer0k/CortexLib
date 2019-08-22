/*******************************************************************************
* Filename      : otgfsdeviceregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSDEVICEREGISTERS_HPP)
#define OTGFSDEVICEREGISTERS_HPP

#include "otgfsdevicebitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OtgFsDevice
{
  struct FsDcfg : public RegisterBase<0x50000800, 32, ReadWriteMode>
  {
    using Dspd = OtgFsDeviceFsDcfgDspdValues<OtgFsDevice::FsDcfg, 0, 2, ReadWriteMode, OtgFsDeviceFsDcfgDspdValuesBase> ;
    using Nzlsohsk = OtgFsDeviceFsDcfgNzlsohskValues<OtgFsDevice::FsDcfg, 2, 1, ReadWriteMode, OtgFsDeviceFsDcfgNzlsohskValuesBase> ;
    using Dad = ReadWriteMode<OtgFsDevice::FsDcfg, 4, 7> ;
    using Pfivl = OtgFsDeviceFsDcfgPfivlValues<OtgFsDevice::FsDcfg, 11, 2, ReadWriteMode, OtgFsDeviceFsDcfgPfivlValuesBase> ;
  } ;

  template<typename... T> 
  using FsDcfgPack  = Register<0x50000800, 32, ReadWriteMode, OtgFsDeviceFsDcfgDspdValuesBase, T...> ;

  struct FsDctl : public RegisterBase<0x50000804, 32, ReadWriteMode>
  {
    using Rwusig = OtgFsDeviceFsDctlRwusigValues<OtgFsDevice::FsDctl, 0, 1, ReadWriteMode, OtgFsDeviceFsDctlRwusigValuesBase> ;
    using Sdis = OtgFsDeviceFsDctlSdisValues<OtgFsDevice::FsDctl, 1, 1, ReadWriteMode, OtgFsDeviceFsDctlSdisValuesBase> ;
    using Ginsts = OtgFsDeviceFsDctlGinstsValues<OtgFsDevice::FsDctl, 2, 1, ReadMode, OtgFsDeviceFsDctlGinstsValuesBase> ;
    using Gonsts = OtgFsDeviceFsDctlGonstsValues<OtgFsDevice::FsDctl, 3, 1, ReadMode, OtgFsDeviceFsDctlGonstsValuesBase> ;
    using Tctl = OtgFsDeviceFsDctlTctlValues<OtgFsDevice::FsDctl, 4, 3, ReadWriteMode, OtgFsDeviceFsDctlTctlValuesBase> ;
    using Sginak = OtgFsDeviceFsDctlSginakValues<OtgFsDevice::FsDctl, 7, 1, ReadWriteMode, OtgFsDeviceFsDctlSginakValuesBase> ;
    using Cginak = OtgFsDeviceFsDctlCginakValues<OtgFsDevice::FsDctl, 8, 1, ReadWriteMode, OtgFsDeviceFsDctlCginakValuesBase> ;
    using Sgonak = OtgFsDeviceFsDctlSgonakValues<OtgFsDevice::FsDctl, 9, 1, ReadWriteMode, OtgFsDeviceFsDctlSgonakValuesBase> ;
    using Cgonak = OtgFsDeviceFsDctlCgonakValues<OtgFsDevice::FsDctl, 10, 1, ReadWriteMode, OtgFsDeviceFsDctlCgonakValuesBase> ;
    using Poprgdne = OtgFsDeviceFsDctlPoprgdneValues<OtgFsDevice::FsDctl, 11, 1, ReadWriteMode, OtgFsDeviceFsDctlPoprgdneValuesBase> ;
  } ;

  template<typename... T> 
  using FsDctlPack  = Register<0x50000804, 32, ReadWriteMode, OtgFsDeviceFsDctlRwusigValuesBase, T...> ;

  struct FsDsts : public RegisterBase<0x50000808, 32, ReadMode>
  {
    using Suspsts = OtgFsDeviceFsDstsSuspstsValues<OtgFsDevice::FsDsts, 0, 1, ReadMode, OtgFsDeviceFsDstsSuspstsValuesBase> ;
    using Enumspd = OtgFsDeviceFsDstsEnumspdValues<OtgFsDevice::FsDsts, 1, 2, ReadMode, OtgFsDeviceFsDstsEnumspdValuesBase> ;
    using Eerr = OtgFsDeviceFsDstsEerrValues<OtgFsDevice::FsDsts, 3, 1, ReadMode, OtgFsDeviceFsDstsEerrValuesBase> ;
    using Fnsof = ReadMode<OtgFsDevice::FsDsts, 8, 14> ;
  } ;

  template<typename... T> 
  using FsDstsPack  = Register<0x50000808, 32, ReadMode, OtgFsDeviceFsDstsSuspstsValuesBase, T...> ;

  struct FsDiepmsk : public RegisterBase<0x50000810, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsDeviceFsDiepmskXfrcmValues<OtgFsDevice::FsDiepmsk, 0, 1, ReadWriteMode, OtgFsDeviceFsDiepmskXfrcmValuesBase> ;
    using Epdm = OtgFsDeviceFsDiepmskEpdmValues<OtgFsDevice::FsDiepmsk, 1, 1, ReadWriteMode, OtgFsDeviceFsDiepmskEpdmValuesBase> ;
    using Tom = OtgFsDeviceFsDiepmskTomValues<OtgFsDevice::FsDiepmsk, 3, 1, ReadWriteMode, OtgFsDeviceFsDiepmskTomValuesBase> ;
    using Ittxfemsk = OtgFsDeviceFsDiepmskIttxfemskValues<OtgFsDevice::FsDiepmsk, 4, 1, ReadWriteMode, OtgFsDeviceFsDiepmskIttxfemskValuesBase> ;
    using Inepnmm = OtgFsDeviceFsDiepmskInepnmmValues<OtgFsDevice::FsDiepmsk, 5, 1, ReadWriteMode, OtgFsDeviceFsDiepmskInepnmmValuesBase> ;
    using Inepnem = OtgFsDeviceFsDiepmskInepnemValues<OtgFsDevice::FsDiepmsk, 6, 1, ReadWriteMode, OtgFsDeviceFsDiepmskInepnemValuesBase> ;
  } ;

  template<typename... T> 
  using FsDiepmskPack  = Register<0x50000810, 32, ReadWriteMode, OtgFsDeviceFsDiepmskXfrcmValuesBase, T...> ;

  struct FsDoepmsk : public RegisterBase<0x50000814, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsDeviceFsDoepmskXfrcmValues<OtgFsDevice::FsDoepmsk, 0, 1, ReadWriteMode, OtgFsDeviceFsDoepmskXfrcmValuesBase> ;
    using Epdm = OtgFsDeviceFsDoepmskEpdmValues<OtgFsDevice::FsDoepmsk, 1, 1, ReadWriteMode, OtgFsDeviceFsDoepmskEpdmValuesBase> ;
    using Stupm = OtgFsDeviceFsDoepmskStupmValues<OtgFsDevice::FsDoepmsk, 3, 1, ReadWriteMode, OtgFsDeviceFsDoepmskStupmValuesBase> ;
    using Otepdm = OtgFsDeviceFsDoepmskOtepdmValues<OtgFsDevice::FsDoepmsk, 4, 1, ReadWriteMode, OtgFsDeviceFsDoepmskOtepdmValuesBase> ;
  } ;

  template<typename... T> 
  using FsDoepmskPack  = Register<0x50000814, 32, ReadWriteMode, OtgFsDeviceFsDoepmskXfrcmValuesBase, T...> ;

  struct FsDaint : public RegisterBase<0x50000818, 32, ReadMode>
  {
    using Iepint = ReadMode<OtgFsDevice::FsDaint, 0, 16> ;
    using Oepint = ReadMode<OtgFsDevice::FsDaint, 16, 16> ;
  } ;

  template<typename... T> 
  using FsDaintPack  = Register<0x50000818, 32, ReadMode, OtgFsDeviceFsDaintIepintValuesBase, T...> ;

  struct FsDaintmsk : public RegisterBase<0x5000081C, 32, ReadWriteMode>
  {
    using Iepm = ReadWriteMode<OtgFsDevice::FsDaintmsk, 0, 16> ;
    using Oepint = ReadWriteMode<OtgFsDevice::FsDaintmsk, 16, 16> ;
  } ;

  template<typename... T> 
  using FsDaintmskPack  = Register<0x5000081C, 32, ReadWriteMode, OtgFsDeviceFsDaintmskIepmValuesBase, T...> ;

  struct Dvbusdis : public RegisterBase<0x50000828, 32, ReadWriteMode>
  {
    using Vbusdt = ReadWriteMode<OtgFsDevice::Dvbusdis, 0, 16> ;
  } ;

  template<typename... T> 
  using DvbusdisPack  = Register<0x50000828, 32, ReadWriteMode, OtgFsDeviceDvbusdisVbusdtValuesBase, T...> ;

  struct Dvbuspulse : public RegisterBase<0x5000082C, 32, ReadWriteMode>
  {
    using Dvbusp = ReadWriteMode<OtgFsDevice::Dvbuspulse, 0, 12> ;
  } ;

  template<typename... T> 
  using DvbuspulsePack  = Register<0x5000082C, 32, ReadWriteMode, OtgFsDeviceDvbuspulseDvbuspValuesBase, T...> ;

  struct Diepempmsk : public RegisterBase<0x50000834, 32, ReadWriteMode>
  {
    using Ineptxfem = ReadWriteMode<OtgFsDevice::Diepempmsk, 0, 16> ;
  } ;

  template<typename... T> 
  using DiepempmskPack  = Register<0x50000834, 32, ReadWriteMode, OtgFsDeviceDiepempmskIneptxfemValuesBase, T...> ;

  struct FsDiepctl0 : public RegisterBase<0x50000900, 32, ReadWriteMode>
  {
    using Mpsiz = OtgFsDeviceFsDiepctlMpsizValues<OtgFsDevice::FsDiepctl0, 0, 2, ReadWriteMode, OtgFsDeviceFsDiepctlMpsizValuesBase> ;
    using Usbaep = OtgFsDeviceFsDiepctlUsbaepValues<OtgFsDevice::FsDiepctl0, 15, 1, ReadMode, OtgFsDeviceFsDiepctlUsbaepValuesBase> ;
    using Naksts = OtgFsDeviceFsDiepctlNakstsValues<OtgFsDevice::FsDiepctl0, 17, 1, ReadMode, OtgFsDeviceFsDiepctlNakstsValuesBase> ;
    using Eptyp = OtgFsDeviceFsDiepctlEptypValues<OtgFsDevice::FsDiepctl0, 18, 2, ReadMode, OtgFsDeviceFsDiepctlEptypValuesBase> ;
    using Stall = OtgFsDeviceFsDiepctlStallValues<OtgFsDevice::FsDiepctl0, 21, 1, ReadWriteMode, OtgFsDeviceFsDiepctlStallValuesBase> ;
    using Txfnum = OtgFsDeviceFsDiepctlTxfnumValues<OtgFsDevice::FsDiepctl0, 22, 4, ReadWriteMode, OtgFsDeviceFsDiepctlTxfnumValuesBase> ;
    using Cnak = OtgFsDeviceFsDiepctlCnakValues<OtgFsDevice::FsDiepctl0, 26, 1, WriteMode, OtgFsDeviceFsDiepctlCnakValuesBase> ;
    using Snak = OtgFsDeviceFsDiepctlSnakValues<OtgFsDevice::FsDiepctl0, 27, 1, WriteMode, OtgFsDeviceFsDiepctlSnakValuesBase> ;
    using Epdis = OtgFsDeviceFsDiepctlEpdisValues<OtgFsDevice::FsDiepctl0, 30, 1, ReadMode, OtgFsDeviceFsDiepctlEpdisValuesBase> ;
    using Epena = OtgFsDeviceFsDiepctlEpenaValues<OtgFsDevice::FsDiepctl0, 31, 1, ReadMode, OtgFsDeviceFsDiepctlEpenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsDiepctl0Pack  = Register<0x50000900, 32, ReadWriteMode, OtgFsDeviceFsDiepctlMpsizValuesBase, T...> ;

  struct Diepctl1 : public RegisterBase<0x50000920, 32, ReadWriteMode>
  {
    using Epena = OtgFsDeviceDiepctlEpenaValues<OtgFsDevice::Diepctl1, 31, 1, ReadWriteMode, OtgFsDeviceDiepctlEpenaValuesBase> ;
    using Epdis = OtgFsDeviceDiepctlEpdisValues<OtgFsDevice::Diepctl1, 30, 1, ReadWriteMode, OtgFsDeviceDiepctlEpdisValuesBase> ;
    using SoddfrmSd1Pid = OtgFsDeviceDiepctlSoddfrmSdPidValues<OtgFsDevice::Diepctl1, 29, 1, WriteMode, OtgFsDeviceDiepctlSoddfrmSdPidValuesBase> ;
    using Sd0PidSevnfrm = OtgFsDeviceDiepctlSdPidSevnfrmValues<OtgFsDevice::Diepctl1, 28, 1, WriteMode, OtgFsDeviceDiepctlSdPidSevnfrmValuesBase> ;
    using Snak = OtgFsDeviceDiepctlSnakValues<OtgFsDevice::Diepctl1, 27, 1, WriteMode, OtgFsDeviceDiepctlSnakValuesBase> ;
    using Cnak = OtgFsDeviceDiepctlCnakValues<OtgFsDevice::Diepctl1, 26, 1, WriteMode, OtgFsDeviceDiepctlCnakValuesBase> ;
    using Txfnum = OtgFsDeviceDiepctlTxfnumValues<OtgFsDevice::Diepctl1, 22, 4, ReadWriteMode, OtgFsDeviceDiepctlTxfnumValuesBase> ;
    using Stall = OtgFsDeviceDiepctlStallValues<OtgFsDevice::Diepctl1, 21, 1, ReadWriteMode, OtgFsDeviceDiepctlStallValuesBase> ;
    using Eptyp = OtgFsDeviceDiepctlEptypValues<OtgFsDevice::Diepctl1, 18, 2, ReadWriteMode, OtgFsDeviceDiepctlEptypValuesBase> ;
    using Naksts = OtgFsDeviceDiepctlNakstsValues<OtgFsDevice::Diepctl1, 17, 1, ReadMode, OtgFsDeviceDiepctlNakstsValuesBase> ;
    using EonumDpid = OtgFsDeviceDiepctlEonumDpidValues<OtgFsDevice::Diepctl1, 16, 1, ReadMode, OtgFsDeviceDiepctlEonumDpidValuesBase> ;
    using Usbaep = OtgFsDeviceDiepctlUsbaepValues<OtgFsDevice::Diepctl1, 15, 1, ReadWriteMode, OtgFsDeviceDiepctlUsbaepValuesBase> ;
    using Mpsiz = ReadWriteMode<OtgFsDevice::Diepctl1, 0, 11> ;
  } ;

  template<typename... T> 
  using Diepctl1Pack  = Register<0x50000920, 32, ReadWriteMode, OtgFsDeviceDiepctlEpenaValuesBase, T...> ;

  struct Diepctl2 : public RegisterBase<0x50000940, 32, ReadWriteMode>
  {
    using Epena = OtgFsDeviceDiepctlEpenaValues<OtgFsDevice::Diepctl2, 31, 1, ReadWriteMode, OtgFsDeviceDiepctlEpenaValuesBase> ;
    using Epdis = OtgFsDeviceDiepctlEpdisValues<OtgFsDevice::Diepctl2, 30, 1, ReadWriteMode, OtgFsDeviceDiepctlEpdisValuesBase> ;
    using Soddfrm = OtgFsDeviceDiepctlSoddfrmValues<OtgFsDevice::Diepctl2, 29, 1, WriteMode, OtgFsDeviceDiepctlSoddfrmValuesBase> ;
    using Sd0PidSevnfrm = OtgFsDeviceDiepctlSdPidSevnfrmValues<OtgFsDevice::Diepctl2, 28, 1, WriteMode, OtgFsDeviceDiepctlSdPidSevnfrmValuesBase> ;
    using Snak = OtgFsDeviceDiepctlSnakValues<OtgFsDevice::Diepctl2, 27, 1, WriteMode, OtgFsDeviceDiepctlSnakValuesBase> ;
    using Cnak = OtgFsDeviceDiepctlCnakValues<OtgFsDevice::Diepctl2, 26, 1, WriteMode, OtgFsDeviceDiepctlCnakValuesBase> ;
    using Txfnum = OtgFsDeviceDiepctlTxfnumValues<OtgFsDevice::Diepctl2, 22, 4, ReadWriteMode, OtgFsDeviceDiepctlTxfnumValuesBase> ;
    using Stall = OtgFsDeviceDiepctlStallValues<OtgFsDevice::Diepctl2, 21, 1, ReadWriteMode, OtgFsDeviceDiepctlStallValuesBase> ;
    using Eptyp = OtgFsDeviceDiepctlEptypValues<OtgFsDevice::Diepctl2, 18, 2, ReadWriteMode, OtgFsDeviceDiepctlEptypValuesBase> ;
    using Naksts = OtgFsDeviceDiepctlNakstsValues<OtgFsDevice::Diepctl2, 17, 1, ReadMode, OtgFsDeviceDiepctlNakstsValuesBase> ;
    using EonumDpid = OtgFsDeviceDiepctlEonumDpidValues<OtgFsDevice::Diepctl2, 16, 1, ReadMode, OtgFsDeviceDiepctlEonumDpidValuesBase> ;
    using Usbaep = OtgFsDeviceDiepctlUsbaepValues<OtgFsDevice::Diepctl2, 15, 1, ReadWriteMode, OtgFsDeviceDiepctlUsbaepValuesBase> ;
    using Mpsiz = ReadWriteMode<OtgFsDevice::Diepctl2, 0, 11> ;
  } ;

  template<typename... T> 
  using Diepctl2Pack  = Register<0x50000940, 32, ReadWriteMode, OtgFsDeviceDiepctlEpenaValuesBase, T...> ;

  struct Diepctl3 : public RegisterBase<0x50000960, 32, ReadWriteMode>
  {
    using Epena = OtgFsDeviceDiepctlEpenaValues<OtgFsDevice::Diepctl3, 31, 1, ReadWriteMode, OtgFsDeviceDiepctlEpenaValuesBase> ;
    using Epdis = OtgFsDeviceDiepctlEpdisValues<OtgFsDevice::Diepctl3, 30, 1, ReadWriteMode, OtgFsDeviceDiepctlEpdisValuesBase> ;
    using Soddfrm = OtgFsDeviceDiepctlSoddfrmValues<OtgFsDevice::Diepctl3, 29, 1, WriteMode, OtgFsDeviceDiepctlSoddfrmValuesBase> ;
    using Sd0PidSevnfrm = OtgFsDeviceDiepctlSdPidSevnfrmValues<OtgFsDevice::Diepctl3, 28, 1, WriteMode, OtgFsDeviceDiepctlSdPidSevnfrmValuesBase> ;
    using Snak = OtgFsDeviceDiepctlSnakValues<OtgFsDevice::Diepctl3, 27, 1, WriteMode, OtgFsDeviceDiepctlSnakValuesBase> ;
    using Cnak = OtgFsDeviceDiepctlCnakValues<OtgFsDevice::Diepctl3, 26, 1, WriteMode, OtgFsDeviceDiepctlCnakValuesBase> ;
    using Txfnum = OtgFsDeviceDiepctlTxfnumValues<OtgFsDevice::Diepctl3, 22, 4, ReadWriteMode, OtgFsDeviceDiepctlTxfnumValuesBase> ;
    using Stall = OtgFsDeviceDiepctlStallValues<OtgFsDevice::Diepctl3, 21, 1, ReadWriteMode, OtgFsDeviceDiepctlStallValuesBase> ;
    using Eptyp = OtgFsDeviceDiepctlEptypValues<OtgFsDevice::Diepctl3, 18, 2, ReadWriteMode, OtgFsDeviceDiepctlEptypValuesBase> ;
    using Naksts = OtgFsDeviceDiepctlNakstsValues<OtgFsDevice::Diepctl3, 17, 1, ReadMode, OtgFsDeviceDiepctlNakstsValuesBase> ;
    using EonumDpid = OtgFsDeviceDiepctlEonumDpidValues<OtgFsDevice::Diepctl3, 16, 1, ReadMode, OtgFsDeviceDiepctlEonumDpidValuesBase> ;
    using Usbaep = OtgFsDeviceDiepctlUsbaepValues<OtgFsDevice::Diepctl3, 15, 1, ReadWriteMode, OtgFsDeviceDiepctlUsbaepValuesBase> ;
    using Mpsiz = ReadWriteMode<OtgFsDevice::Diepctl3, 0, 11> ;
  } ;

  template<typename... T> 
  using Diepctl3Pack  = Register<0x50000960, 32, ReadWriteMode, OtgFsDeviceDiepctlEpenaValuesBase, T...> ;

  struct Doepctl0 : public RegisterBase<0x50000B00, 32, ReadWriteMode>
  {
    using Epena = OtgFsDeviceDoepctlEpenaValues<OtgFsDevice::Doepctl0, 31, 1, WriteMode, OtgFsDeviceDoepctlEpenaValuesBase> ;
    using Epdis = OtgFsDeviceDoepctlEpdisValues<OtgFsDevice::Doepctl0, 30, 1, ReadMode, OtgFsDeviceDoepctlEpdisValuesBase> ;
    using Snak = OtgFsDeviceDoepctlSnakValues<OtgFsDevice::Doepctl0, 27, 1, WriteMode, OtgFsDeviceDoepctlSnakValuesBase> ;
    using Cnak = OtgFsDeviceDoepctlCnakValues<OtgFsDevice::Doepctl0, 26, 1, WriteMode, OtgFsDeviceDoepctlCnakValuesBase> ;
    using Stall = OtgFsDeviceDoepctlStallValues<OtgFsDevice::Doepctl0, 21, 1, ReadWriteMode, OtgFsDeviceDoepctlStallValuesBase> ;
    using Snpm = OtgFsDeviceDoepctlSnpmValues<OtgFsDevice::Doepctl0, 20, 1, ReadWriteMode, OtgFsDeviceDoepctlSnpmValuesBase> ;
    using Eptyp = OtgFsDeviceDoepctlEptypValues<OtgFsDevice::Doepctl0, 18, 2, ReadMode, OtgFsDeviceDoepctlEptypValuesBase> ;
    using Naksts = OtgFsDeviceDoepctlNakstsValues<OtgFsDevice::Doepctl0, 17, 1, ReadMode, OtgFsDeviceDoepctlNakstsValuesBase> ;
    using Usbaep = OtgFsDeviceDoepctlUsbaepValues<OtgFsDevice::Doepctl0, 15, 1, ReadMode, OtgFsDeviceDoepctlUsbaepValuesBase> ;
    using Mpsiz = OtgFsDeviceDoepctlMpsizValues<OtgFsDevice::Doepctl0, 0, 2, ReadMode, OtgFsDeviceDoepctlMpsizValuesBase> ;
  } ;

  template<typename... T> 
  using Doepctl0Pack  = Register<0x50000B00, 32, ReadWriteMode, OtgFsDeviceDoepctlEpenaValuesBase, T...> ;

  struct Doepctl1 : public RegisterBase<0x50000B20, 32, ReadWriteMode>
  {
    using Epena = OtgFsDeviceDoepctlEpenaValues<OtgFsDevice::Doepctl1, 31, 1, ReadWriteMode, OtgFsDeviceDoepctlEpenaValuesBase> ;
    using Epdis = OtgFsDeviceDoepctlEpdisValues<OtgFsDevice::Doepctl1, 30, 1, ReadWriteMode, OtgFsDeviceDoepctlEpdisValuesBase> ;
    using Soddfrm = OtgFsDeviceDoepctlSoddfrmValues<OtgFsDevice::Doepctl1, 29, 1, WriteMode, OtgFsDeviceDoepctlSoddfrmValuesBase> ;
    using Sd0PidSevnfrm = OtgFsDeviceDoepctlSdPidSevnfrmValues<OtgFsDevice::Doepctl1, 28, 1, WriteMode, OtgFsDeviceDoepctlSdPidSevnfrmValuesBase> ;
    using Snak = OtgFsDeviceDoepctlSnakValues<OtgFsDevice::Doepctl1, 27, 1, WriteMode, OtgFsDeviceDoepctlSnakValuesBase> ;
    using Cnak = OtgFsDeviceDoepctlCnakValues<OtgFsDevice::Doepctl1, 26, 1, WriteMode, OtgFsDeviceDoepctlCnakValuesBase> ;
    using Stall = OtgFsDeviceDoepctlStallValues<OtgFsDevice::Doepctl1, 21, 1, ReadWriteMode, OtgFsDeviceDoepctlStallValuesBase> ;
    using Snpm = OtgFsDeviceDoepctlSnpmValues<OtgFsDevice::Doepctl1, 20, 1, ReadWriteMode, OtgFsDeviceDoepctlSnpmValuesBase> ;
    using Eptyp = OtgFsDeviceDoepctlEptypValues<OtgFsDevice::Doepctl1, 18, 2, ReadWriteMode, OtgFsDeviceDoepctlEptypValuesBase> ;
    using Naksts = OtgFsDeviceDoepctlNakstsValues<OtgFsDevice::Doepctl1, 17, 1, ReadMode, OtgFsDeviceDoepctlNakstsValuesBase> ;
    using EonumDpid = OtgFsDeviceDoepctlEonumDpidValues<OtgFsDevice::Doepctl1, 16, 1, ReadMode, OtgFsDeviceDoepctlEonumDpidValuesBase> ;
    using Usbaep = OtgFsDeviceDoepctlUsbaepValues<OtgFsDevice::Doepctl1, 15, 1, ReadWriteMode, OtgFsDeviceDoepctlUsbaepValuesBase> ;
    using Mpsiz = ReadWriteMode<OtgFsDevice::Doepctl1, 0, 11> ;
  } ;

  template<typename... T> 
  using Doepctl1Pack  = Register<0x50000B20, 32, ReadWriteMode, OtgFsDeviceDoepctlEpenaValuesBase, T...> ;

  struct Doepctl2 : public RegisterBase<0x50000B40, 32, ReadWriteMode>
  {
    using Epena = OtgFsDeviceDoepctlEpenaValues<OtgFsDevice::Doepctl2, 31, 1, ReadWriteMode, OtgFsDeviceDoepctlEpenaValuesBase> ;
    using Epdis = OtgFsDeviceDoepctlEpdisValues<OtgFsDevice::Doepctl2, 30, 1, ReadWriteMode, OtgFsDeviceDoepctlEpdisValuesBase> ;
    using Soddfrm = OtgFsDeviceDoepctlSoddfrmValues<OtgFsDevice::Doepctl2, 29, 1, WriteMode, OtgFsDeviceDoepctlSoddfrmValuesBase> ;
    using Sd0PidSevnfrm = OtgFsDeviceDoepctlSdPidSevnfrmValues<OtgFsDevice::Doepctl2, 28, 1, WriteMode, OtgFsDeviceDoepctlSdPidSevnfrmValuesBase> ;
    using Snak = OtgFsDeviceDoepctlSnakValues<OtgFsDevice::Doepctl2, 27, 1, WriteMode, OtgFsDeviceDoepctlSnakValuesBase> ;
    using Cnak = OtgFsDeviceDoepctlCnakValues<OtgFsDevice::Doepctl2, 26, 1, WriteMode, OtgFsDeviceDoepctlCnakValuesBase> ;
    using Stall = OtgFsDeviceDoepctlStallValues<OtgFsDevice::Doepctl2, 21, 1, ReadWriteMode, OtgFsDeviceDoepctlStallValuesBase> ;
    using Snpm = OtgFsDeviceDoepctlSnpmValues<OtgFsDevice::Doepctl2, 20, 1, ReadWriteMode, OtgFsDeviceDoepctlSnpmValuesBase> ;
    using Eptyp = OtgFsDeviceDoepctlEptypValues<OtgFsDevice::Doepctl2, 18, 2, ReadWriteMode, OtgFsDeviceDoepctlEptypValuesBase> ;
    using Naksts = OtgFsDeviceDoepctlNakstsValues<OtgFsDevice::Doepctl2, 17, 1, ReadMode, OtgFsDeviceDoepctlNakstsValuesBase> ;
    using EonumDpid = OtgFsDeviceDoepctlEonumDpidValues<OtgFsDevice::Doepctl2, 16, 1, ReadMode, OtgFsDeviceDoepctlEonumDpidValuesBase> ;
    using Usbaep = OtgFsDeviceDoepctlUsbaepValues<OtgFsDevice::Doepctl2, 15, 1, ReadWriteMode, OtgFsDeviceDoepctlUsbaepValuesBase> ;
    using Mpsiz = ReadWriteMode<OtgFsDevice::Doepctl2, 0, 11> ;
  } ;

  template<typename... T> 
  using Doepctl2Pack  = Register<0x50000B40, 32, ReadWriteMode, OtgFsDeviceDoepctlEpenaValuesBase, T...> ;

  struct Doepctl3 : public RegisterBase<0x50000B60, 32, ReadWriteMode>
  {
    using Epena = OtgFsDeviceDoepctlEpenaValues<OtgFsDevice::Doepctl3, 31, 1, ReadWriteMode, OtgFsDeviceDoepctlEpenaValuesBase> ;
    using Epdis = OtgFsDeviceDoepctlEpdisValues<OtgFsDevice::Doepctl3, 30, 1, ReadWriteMode, OtgFsDeviceDoepctlEpdisValuesBase> ;
    using Soddfrm = OtgFsDeviceDoepctlSoddfrmValues<OtgFsDevice::Doepctl3, 29, 1, WriteMode, OtgFsDeviceDoepctlSoddfrmValuesBase> ;
    using Sd0PidSevnfrm = OtgFsDeviceDoepctlSdPidSevnfrmValues<OtgFsDevice::Doepctl3, 28, 1, WriteMode, OtgFsDeviceDoepctlSdPidSevnfrmValuesBase> ;
    using Snak = OtgFsDeviceDoepctlSnakValues<OtgFsDevice::Doepctl3, 27, 1, WriteMode, OtgFsDeviceDoepctlSnakValuesBase> ;
    using Cnak = OtgFsDeviceDoepctlCnakValues<OtgFsDevice::Doepctl3, 26, 1, WriteMode, OtgFsDeviceDoepctlCnakValuesBase> ;
    using Stall = OtgFsDeviceDoepctlStallValues<OtgFsDevice::Doepctl3, 21, 1, ReadWriteMode, OtgFsDeviceDoepctlStallValuesBase> ;
    using Snpm = OtgFsDeviceDoepctlSnpmValues<OtgFsDevice::Doepctl3, 20, 1, ReadWriteMode, OtgFsDeviceDoepctlSnpmValuesBase> ;
    using Eptyp = OtgFsDeviceDoepctlEptypValues<OtgFsDevice::Doepctl3, 18, 2, ReadWriteMode, OtgFsDeviceDoepctlEptypValuesBase> ;
    using Naksts = OtgFsDeviceDoepctlNakstsValues<OtgFsDevice::Doepctl3, 17, 1, ReadMode, OtgFsDeviceDoepctlNakstsValuesBase> ;
    using EonumDpid = OtgFsDeviceDoepctlEonumDpidValues<OtgFsDevice::Doepctl3, 16, 1, ReadMode, OtgFsDeviceDoepctlEonumDpidValuesBase> ;
    using Usbaep = OtgFsDeviceDoepctlUsbaepValues<OtgFsDevice::Doepctl3, 15, 1, ReadWriteMode, OtgFsDeviceDoepctlUsbaepValuesBase> ;
    using Mpsiz = ReadWriteMode<OtgFsDevice::Doepctl3, 0, 11> ;
  } ;

  template<typename... T> 
  using Doepctl3Pack  = Register<0x50000B60, 32, ReadWriteMode, OtgFsDeviceDoepctlEpenaValuesBase, T...> ;

  struct Diepint0 : public RegisterBase<0x50000908, 32, ReadWriteMode>
  {
    using Txfe = OtgFsDeviceDiepintTxfeValues<OtgFsDevice::Diepint0, 7, 1, ReadMode, OtgFsDeviceDiepintTxfeValuesBase> ;
    using Inepne = OtgFsDeviceDiepintInepneValues<OtgFsDevice::Diepint0, 6, 1, ReadWriteMode, OtgFsDeviceDiepintInepneValuesBase> ;
    using Ittxfe = OtgFsDeviceDiepintIttxfeValues<OtgFsDevice::Diepint0, 4, 1, ReadWriteMode, OtgFsDeviceDiepintIttxfeValuesBase> ;
    using Toc = OtgFsDeviceDiepintTocValues<OtgFsDevice::Diepint0, 3, 1, ReadWriteMode, OtgFsDeviceDiepintTocValuesBase> ;
    using Epdisd = OtgFsDeviceDiepintEpdisdValues<OtgFsDevice::Diepint0, 1, 1, ReadWriteMode, OtgFsDeviceDiepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDiepintXfrcValues<OtgFsDevice::Diepint0, 0, 1, ReadWriteMode, OtgFsDeviceDiepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Diepint0Pack  = Register<0x50000908, 32, ReadWriteMode, OtgFsDeviceDiepintTxfeValuesBase, T...> ;

  struct Diepint1 : public RegisterBase<0x50000928, 32, ReadWriteMode>
  {
    using Txfe = OtgFsDeviceDiepintTxfeValues<OtgFsDevice::Diepint1, 7, 1, ReadMode, OtgFsDeviceDiepintTxfeValuesBase> ;
    using Inepne = OtgFsDeviceDiepintInepneValues<OtgFsDevice::Diepint1, 6, 1, ReadWriteMode, OtgFsDeviceDiepintInepneValuesBase> ;
    using Ittxfe = OtgFsDeviceDiepintIttxfeValues<OtgFsDevice::Diepint1, 4, 1, ReadWriteMode, OtgFsDeviceDiepintIttxfeValuesBase> ;
    using Toc = OtgFsDeviceDiepintTocValues<OtgFsDevice::Diepint1, 3, 1, ReadWriteMode, OtgFsDeviceDiepintTocValuesBase> ;
    using Epdisd = OtgFsDeviceDiepintEpdisdValues<OtgFsDevice::Diepint1, 1, 1, ReadWriteMode, OtgFsDeviceDiepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDiepintXfrcValues<OtgFsDevice::Diepint1, 0, 1, ReadWriteMode, OtgFsDeviceDiepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Diepint1Pack  = Register<0x50000928, 32, ReadWriteMode, OtgFsDeviceDiepintTxfeValuesBase, T...> ;

  struct Diepint2 : public RegisterBase<0x50000948, 32, ReadWriteMode>
  {
    using Txfe = OtgFsDeviceDiepintTxfeValues<OtgFsDevice::Diepint2, 7, 1, ReadMode, OtgFsDeviceDiepintTxfeValuesBase> ;
    using Inepne = OtgFsDeviceDiepintInepneValues<OtgFsDevice::Diepint2, 6, 1, ReadWriteMode, OtgFsDeviceDiepintInepneValuesBase> ;
    using Ittxfe = OtgFsDeviceDiepintIttxfeValues<OtgFsDevice::Diepint2, 4, 1, ReadWriteMode, OtgFsDeviceDiepintIttxfeValuesBase> ;
    using Toc = OtgFsDeviceDiepintTocValues<OtgFsDevice::Diepint2, 3, 1, ReadWriteMode, OtgFsDeviceDiepintTocValuesBase> ;
    using Epdisd = OtgFsDeviceDiepintEpdisdValues<OtgFsDevice::Diepint2, 1, 1, ReadWriteMode, OtgFsDeviceDiepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDiepintXfrcValues<OtgFsDevice::Diepint2, 0, 1, ReadWriteMode, OtgFsDeviceDiepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Diepint2Pack  = Register<0x50000948, 32, ReadWriteMode, OtgFsDeviceDiepintTxfeValuesBase, T...> ;

  struct Diepint3 : public RegisterBase<0x50000968, 32, ReadWriteMode>
  {
    using Txfe = OtgFsDeviceDiepintTxfeValues<OtgFsDevice::Diepint3, 7, 1, ReadMode, OtgFsDeviceDiepintTxfeValuesBase> ;
    using Inepne = OtgFsDeviceDiepintInepneValues<OtgFsDevice::Diepint3, 6, 1, ReadWriteMode, OtgFsDeviceDiepintInepneValuesBase> ;
    using Ittxfe = OtgFsDeviceDiepintIttxfeValues<OtgFsDevice::Diepint3, 4, 1, ReadWriteMode, OtgFsDeviceDiepintIttxfeValuesBase> ;
    using Toc = OtgFsDeviceDiepintTocValues<OtgFsDevice::Diepint3, 3, 1, ReadWriteMode, OtgFsDeviceDiepintTocValuesBase> ;
    using Epdisd = OtgFsDeviceDiepintEpdisdValues<OtgFsDevice::Diepint3, 1, 1, ReadWriteMode, OtgFsDeviceDiepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDiepintXfrcValues<OtgFsDevice::Diepint3, 0, 1, ReadWriteMode, OtgFsDeviceDiepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Diepint3Pack  = Register<0x50000968, 32, ReadWriteMode, OtgFsDeviceDiepintTxfeValuesBase, T...> ;

  struct Doepint0 : public RegisterBase<0x50000B08, 32, ReadWriteMode>
  {
    using B2Bstup = OtgFsDeviceDoepintBBstupValues<OtgFsDevice::Doepint0, 6, 1, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase> ;
    using Otepdis = OtgFsDeviceDoepintOtepdisValues<OtgFsDevice::Doepint0, 4, 1, ReadWriteMode, OtgFsDeviceDoepintOtepdisValuesBase> ;
    using Stup = OtgFsDeviceDoepintStupValues<OtgFsDevice::Doepint0, 3, 1, ReadWriteMode, OtgFsDeviceDoepintStupValuesBase> ;
    using Epdisd = OtgFsDeviceDoepintEpdisdValues<OtgFsDevice::Doepint0, 1, 1, ReadWriteMode, OtgFsDeviceDoepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDoepintXfrcValues<OtgFsDevice::Doepint0, 0, 1, ReadWriteMode, OtgFsDeviceDoepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Doepint0Pack  = Register<0x50000B08, 32, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase, T...> ;

  struct Doepint1 : public RegisterBase<0x50000B28, 32, ReadWriteMode>
  {
    using B2Bstup = OtgFsDeviceDoepintBBstupValues<OtgFsDevice::Doepint1, 6, 1, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase> ;
    using Otepdis = OtgFsDeviceDoepintOtepdisValues<OtgFsDevice::Doepint1, 4, 1, ReadWriteMode, OtgFsDeviceDoepintOtepdisValuesBase> ;
    using Stup = OtgFsDeviceDoepintStupValues<OtgFsDevice::Doepint1, 3, 1, ReadWriteMode, OtgFsDeviceDoepintStupValuesBase> ;
    using Epdisd = OtgFsDeviceDoepintEpdisdValues<OtgFsDevice::Doepint1, 1, 1, ReadWriteMode, OtgFsDeviceDoepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDoepintXfrcValues<OtgFsDevice::Doepint1, 0, 1, ReadWriteMode, OtgFsDeviceDoepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Doepint1Pack  = Register<0x50000B28, 32, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase, T...> ;

  struct Doepint2 : public RegisterBase<0x50000B48, 32, ReadWriteMode>
  {
    using B2Bstup = OtgFsDeviceDoepintBBstupValues<OtgFsDevice::Doepint2, 6, 1, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase> ;
    using Otepdis = OtgFsDeviceDoepintOtepdisValues<OtgFsDevice::Doepint2, 4, 1, ReadWriteMode, OtgFsDeviceDoepintOtepdisValuesBase> ;
    using Stup = OtgFsDeviceDoepintStupValues<OtgFsDevice::Doepint2, 3, 1, ReadWriteMode, OtgFsDeviceDoepintStupValuesBase> ;
    using Epdisd = OtgFsDeviceDoepintEpdisdValues<OtgFsDevice::Doepint2, 1, 1, ReadWriteMode, OtgFsDeviceDoepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDoepintXfrcValues<OtgFsDevice::Doepint2, 0, 1, ReadWriteMode, OtgFsDeviceDoepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Doepint2Pack  = Register<0x50000B48, 32, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase, T...> ;

  struct Doepint3 : public RegisterBase<0x50000B68, 32, ReadWriteMode>
  {
    using B2Bstup = OtgFsDeviceDoepintBBstupValues<OtgFsDevice::Doepint3, 6, 1, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase> ;
    using Otepdis = OtgFsDeviceDoepintOtepdisValues<OtgFsDevice::Doepint3, 4, 1, ReadWriteMode, OtgFsDeviceDoepintOtepdisValuesBase> ;
    using Stup = OtgFsDeviceDoepintStupValues<OtgFsDevice::Doepint3, 3, 1, ReadWriteMode, OtgFsDeviceDoepintStupValuesBase> ;
    using Epdisd = OtgFsDeviceDoepintEpdisdValues<OtgFsDevice::Doepint3, 1, 1, ReadWriteMode, OtgFsDeviceDoepintEpdisdValuesBase> ;
    using Xfrc = OtgFsDeviceDoepintXfrcValues<OtgFsDevice::Doepint3, 0, 1, ReadWriteMode, OtgFsDeviceDoepintXfrcValuesBase> ;
  } ;

  template<typename... T> 
  using Doepint3Pack  = Register<0x50000B68, 32, ReadWriteMode, OtgFsDeviceDoepintBBstupValuesBase, T...> ;

  struct Dieptsiz0 : public RegisterBase<0x50000910, 32, ReadWriteMode>
  {
    using Pktcnt = OtgFsDeviceDieptsizPktcntValues<OtgFsDevice::Dieptsiz0, 19, 2, ReadWriteMode, OtgFsDeviceDieptsizPktcntValuesBase> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Dieptsiz0, 0, 7> ;
  } ;

  template<typename... T> 
  using Dieptsiz0Pack  = Register<0x50000910, 32, ReadWriteMode, OtgFsDeviceDieptsizPktcntValuesBase, T...> ;

  struct Doeptsiz0 : public RegisterBase<0x50000B10, 32, ReadWriteMode>
  {
    using Stupcnt = OtgFsDeviceDoeptsizStupcntValues<OtgFsDevice::Doeptsiz0, 29, 2, ReadWriteMode, OtgFsDeviceDoeptsizStupcntValuesBase> ;
    using Pktcnt = OtgFsDeviceDoeptsizPktcntValues<OtgFsDevice::Doeptsiz0, 19, 1, ReadWriteMode, OtgFsDeviceDoeptsizPktcntValuesBase> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Doeptsiz0, 0, 7> ;
  } ;

  template<typename... T> 
  using Doeptsiz0Pack  = Register<0x50000B10, 32, ReadWriteMode, OtgFsDeviceDoeptsizStupcntValuesBase, T...> ;

  struct Dieptsiz1 : public RegisterBase<0x50000930, 32, ReadWriteMode>
  {
    using Mcnt = OtgFsDeviceDieptsizMcntValues<OtgFsDevice::Dieptsiz1, 29, 2, ReadWriteMode, OtgFsDeviceDieptsizMcntValuesBase> ;
    using Pktcnt = ReadWriteMode<OtgFsDevice::Dieptsiz1, 19, 10> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Dieptsiz1, 0, 19> ;
  } ;

  template<typename... T> 
  using Dieptsiz1Pack  = Register<0x50000930, 32, ReadWriteMode, OtgFsDeviceDieptsizMcntValuesBase, T...> ;

  struct Dieptsiz2 : public RegisterBase<0x50000950, 32, ReadWriteMode>
  {
    using Mcnt = OtgFsDeviceDieptsizMcntValues<OtgFsDevice::Dieptsiz2, 29, 2, ReadWriteMode, OtgFsDeviceDieptsizMcntValuesBase> ;
    using Pktcnt = ReadWriteMode<OtgFsDevice::Dieptsiz2, 19, 10> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Dieptsiz2, 0, 19> ;
  } ;

  template<typename... T> 
  using Dieptsiz2Pack  = Register<0x50000950, 32, ReadWriteMode, OtgFsDeviceDieptsizMcntValuesBase, T...> ;

  struct Dieptsiz3 : public RegisterBase<0x50000970, 32, ReadWriteMode>
  {
    using Mcnt = OtgFsDeviceDieptsizMcntValues<OtgFsDevice::Dieptsiz3, 29, 2, ReadWriteMode, OtgFsDeviceDieptsizMcntValuesBase> ;
    using Pktcnt = ReadWriteMode<OtgFsDevice::Dieptsiz3, 19, 10> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Dieptsiz3, 0, 19> ;
  } ;

  template<typename... T> 
  using Dieptsiz3Pack  = Register<0x50000970, 32, ReadWriteMode, OtgFsDeviceDieptsizMcntValuesBase, T...> ;

  struct Dtxfsts0 : public RegisterBase<0x50000918, 32, ReadMode>
  {
    using Ineptfsav = ReadMode<OtgFsDevice::Dtxfsts0, 0, 16> ;
  } ;

  template<typename... T> 
  using Dtxfsts0Pack  = Register<0x50000918, 32, ReadMode, OtgFsDeviceDtxfstsIneptfsavValuesBase, T...> ;

  struct Dtxfsts1 : public RegisterBase<0x50000938, 32, ReadMode>
  {
    using Ineptfsav = ReadMode<OtgFsDevice::Dtxfsts1, 0, 16> ;
  } ;

  template<typename... T> 
  using Dtxfsts1Pack  = Register<0x50000938, 32, ReadMode, OtgFsDeviceDtxfstsIneptfsavValuesBase, T...> ;

  struct Dtxfsts2 : public RegisterBase<0x50000958, 32, ReadMode>
  {
    using Ineptfsav = ReadMode<OtgFsDevice::Dtxfsts2, 0, 16> ;
  } ;

  template<typename... T> 
  using Dtxfsts2Pack  = Register<0x50000958, 32, ReadMode, OtgFsDeviceDtxfstsIneptfsavValuesBase, T...> ;

  struct Dtxfsts3 : public RegisterBase<0x50000978, 32, ReadMode>
  {
    using Ineptfsav = ReadMode<OtgFsDevice::Dtxfsts3, 0, 16> ;
  } ;

  template<typename... T> 
  using Dtxfsts3Pack  = Register<0x50000978, 32, ReadMode, OtgFsDeviceDtxfstsIneptfsavValuesBase, T...> ;

  struct Doeptsiz1 : public RegisterBase<0x50000B30, 32, ReadWriteMode>
  {
    using RxdpidStupcnt = OtgFsDeviceDoeptsizRxdpidStupcntValues<OtgFsDevice::Doeptsiz1, 29, 2, ReadWriteMode, OtgFsDeviceDoeptsizRxdpidStupcntValuesBase> ;
    using Pktcnt = ReadWriteMode<OtgFsDevice::Doeptsiz1, 19, 10> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Doeptsiz1, 0, 19> ;
  } ;

  template<typename... T> 
  using Doeptsiz1Pack  = Register<0x50000B30, 32, ReadWriteMode, OtgFsDeviceDoeptsizRxdpidStupcntValuesBase, T...> ;

  struct Doeptsiz2 : public RegisterBase<0x50000B50, 32, ReadWriteMode>
  {
    using RxdpidStupcnt = OtgFsDeviceDoeptsizRxdpidStupcntValues<OtgFsDevice::Doeptsiz2, 29, 2, ReadWriteMode, OtgFsDeviceDoeptsizRxdpidStupcntValuesBase> ;
    using Pktcnt = ReadWriteMode<OtgFsDevice::Doeptsiz2, 19, 10> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Doeptsiz2, 0, 19> ;
  } ;

  template<typename... T> 
  using Doeptsiz2Pack  = Register<0x50000B50, 32, ReadWriteMode, OtgFsDeviceDoeptsizRxdpidStupcntValuesBase, T...> ;

  struct Doeptsiz3 : public RegisterBase<0x50000B70, 32, ReadWriteMode>
  {
    using RxdpidStupcnt = OtgFsDeviceDoeptsizRxdpidStupcntValues<OtgFsDevice::Doeptsiz3, 29, 2, ReadWriteMode, OtgFsDeviceDoeptsizRxdpidStupcntValuesBase> ;
    using Pktcnt = ReadWriteMode<OtgFsDevice::Doeptsiz3, 19, 10> ;
    using Xfrsiz = ReadWriteMode<OtgFsDevice::Doeptsiz3, 0, 19> ;
  } ;

  template<typename... T> 
  using Doeptsiz3Pack  = Register<0x50000B70, 32, ReadWriteMode, OtgFsDeviceDoeptsizRxdpidStupcntValuesBase, T...> ;

} ;

#endif //#if !defined(OTGFSDEVICEREGISTERS_HPP)
