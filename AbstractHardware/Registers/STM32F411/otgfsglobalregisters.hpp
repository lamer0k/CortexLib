/*******************************************************************************
* Filename      : otgfsglobalregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSGLOBALREGISTERS_HPP)
#define OTGFSGLOBALREGISTERS_HPP

#include "otgfsglobalbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OtgFsGlobal
{
  struct FsGotgctl : public RegisterBase<0x50000000, 32, ReadWriteMode>
  {
    using Srqscs = OtgFsGlobalFsGotgctlSrqscsValues<OtgFsGlobal::FsGotgctl, 0, 1, ReadMode, OtgFsGlobalFsGotgctlSrqscsValuesBase> ;
    using Srq = OtgFsGlobalFsGotgctlSrqValues<OtgFsGlobal::FsGotgctl, 1, 1, ReadWriteMode, OtgFsGlobalFsGotgctlSrqValuesBase> ;
    using Hngscs = OtgFsGlobalFsGotgctlHngscsValues<OtgFsGlobal::FsGotgctl, 8, 1, ReadMode, OtgFsGlobalFsGotgctlHngscsValuesBase> ;
    using Hnprq = OtgFsGlobalFsGotgctlHnprqValues<OtgFsGlobal::FsGotgctl, 9, 1, ReadWriteMode, OtgFsGlobalFsGotgctlHnprqValuesBase> ;
    using Hshnpen = OtgFsGlobalFsGotgctlHshnpenValues<OtgFsGlobal::FsGotgctl, 10, 1, ReadWriteMode, OtgFsGlobalFsGotgctlHshnpenValuesBase> ;
    using Dhnpen = OtgFsGlobalFsGotgctlDhnpenValues<OtgFsGlobal::FsGotgctl, 11, 1, ReadWriteMode, OtgFsGlobalFsGotgctlDhnpenValuesBase> ;
    using Cidsts = OtgFsGlobalFsGotgctlCidstsValues<OtgFsGlobal::FsGotgctl, 16, 1, ReadMode, OtgFsGlobalFsGotgctlCidstsValuesBase> ;
    using Dbct = OtgFsGlobalFsGotgctlDbctValues<OtgFsGlobal::FsGotgctl, 17, 1, ReadMode, OtgFsGlobalFsGotgctlDbctValuesBase> ;
    using Asvld = OtgFsGlobalFsGotgctlAsvldValues<OtgFsGlobal::FsGotgctl, 18, 1, ReadMode, OtgFsGlobalFsGotgctlAsvldValuesBase> ;
    using Bsvld = OtgFsGlobalFsGotgctlBsvldValues<OtgFsGlobal::FsGotgctl, 19, 1, ReadMode, OtgFsGlobalFsGotgctlBsvldValuesBase> ;
  } ;

  template<typename... T> 
  using FsGotgctlPack  = Register<0x50000000, 32, ReadWriteMode, OtgFsGlobalFsGotgctlSrqscsValuesBase, T...> ;

  struct FsGotgint : public RegisterBase<0x50000004, 32, ReadWriteMode>
  {
    using Sedet = OtgFsGlobalFsGotgintSedetValues<OtgFsGlobal::FsGotgint, 2, 1, ReadWriteMode, OtgFsGlobalFsGotgintSedetValuesBase> ;
    using Srsschg = OtgFsGlobalFsGotgintSrsschgValues<OtgFsGlobal::FsGotgint, 8, 1, ReadWriteMode, OtgFsGlobalFsGotgintSrsschgValuesBase> ;
    using Hnsschg = OtgFsGlobalFsGotgintHnsschgValues<OtgFsGlobal::FsGotgint, 9, 1, ReadWriteMode, OtgFsGlobalFsGotgintHnsschgValuesBase> ;
    using Hngdet = OtgFsGlobalFsGotgintHngdetValues<OtgFsGlobal::FsGotgint, 17, 1, ReadWriteMode, OtgFsGlobalFsGotgintHngdetValuesBase> ;
    using Adtochg = OtgFsGlobalFsGotgintAdtochgValues<OtgFsGlobal::FsGotgint, 18, 1, ReadWriteMode, OtgFsGlobalFsGotgintAdtochgValuesBase> ;
    using Dbcdne = OtgFsGlobalFsGotgintDbcdneValues<OtgFsGlobal::FsGotgint, 19, 1, ReadWriteMode, OtgFsGlobalFsGotgintDbcdneValuesBase> ;
  } ;

  template<typename... T> 
  using FsGotgintPack  = Register<0x50000004, 32, ReadWriteMode, OtgFsGlobalFsGotgintSedetValuesBase, T...> ;

  struct FsGahbcfg : public RegisterBase<0x50000008, 32, ReadWriteMode>
  {
    using Gint = OtgFsGlobalFsGahbcfgGintValues<OtgFsGlobal::FsGahbcfg, 0, 1, ReadWriteMode, OtgFsGlobalFsGahbcfgGintValuesBase> ;
    using Txfelvl = OtgFsGlobalFsGahbcfgTxfelvlValues<OtgFsGlobal::FsGahbcfg, 7, 1, ReadWriteMode, OtgFsGlobalFsGahbcfgTxfelvlValuesBase> ;
    using Ptxfelvl = OtgFsGlobalFsGahbcfgPtxfelvlValues<OtgFsGlobal::FsGahbcfg, 8, 1, ReadWriteMode, OtgFsGlobalFsGahbcfgPtxfelvlValuesBase> ;
  } ;

  template<typename... T> 
  using FsGahbcfgPack  = Register<0x50000008, 32, ReadWriteMode, OtgFsGlobalFsGahbcfgGintValuesBase, T...> ;

  struct FsGusbcfg : public RegisterBase<0x5000000C, 32, ReadWriteMode>
  {
    using Tocal = OtgFsGlobalFsGusbcfgTocalValues<OtgFsGlobal::FsGusbcfg, 0, 3, ReadWriteMode, OtgFsGlobalFsGusbcfgTocalValuesBase> ;
    using Physel = OtgFsGlobalFsGusbcfgPhyselValues<OtgFsGlobal::FsGusbcfg, 6, 1, WriteMode, OtgFsGlobalFsGusbcfgPhyselValuesBase> ;
    using Srpcap = OtgFsGlobalFsGusbcfgSrpcapValues<OtgFsGlobal::FsGusbcfg, 8, 1, ReadWriteMode, OtgFsGlobalFsGusbcfgSrpcapValuesBase> ;
    using Hnpcap = OtgFsGlobalFsGusbcfgHnpcapValues<OtgFsGlobal::FsGusbcfg, 9, 1, ReadWriteMode, OtgFsGlobalFsGusbcfgHnpcapValuesBase> ;
    using Trdt = OtgFsGlobalFsGusbcfgTrdtValues<OtgFsGlobal::FsGusbcfg, 10, 4, ReadWriteMode, OtgFsGlobalFsGusbcfgTrdtValuesBase> ;
    using Fhmod = OtgFsGlobalFsGusbcfgFhmodValues<OtgFsGlobal::FsGusbcfg, 29, 1, ReadWriteMode, OtgFsGlobalFsGusbcfgFhmodValuesBase> ;
    using Fdmod = OtgFsGlobalFsGusbcfgFdmodValues<OtgFsGlobal::FsGusbcfg, 30, 1, ReadWriteMode, OtgFsGlobalFsGusbcfgFdmodValuesBase> ;
    using Ctxpkt = OtgFsGlobalFsGusbcfgCtxpktValues<OtgFsGlobal::FsGusbcfg, 31, 1, ReadWriteMode, OtgFsGlobalFsGusbcfgCtxpktValuesBase> ;
  } ;

  template<typename... T> 
  using FsGusbcfgPack  = Register<0x5000000C, 32, ReadWriteMode, OtgFsGlobalFsGusbcfgTocalValuesBase, T...> ;

  struct FsGrstctl : public RegisterBase<0x50000010, 32, ReadWriteMode>
  {
    using Csrst = OtgFsGlobalFsGrstctlCsrstValues<OtgFsGlobal::FsGrstctl, 0, 1, ReadWriteMode, OtgFsGlobalFsGrstctlCsrstValuesBase> ;
    using Hsrst = OtgFsGlobalFsGrstctlHsrstValues<OtgFsGlobal::FsGrstctl, 1, 1, ReadWriteMode, OtgFsGlobalFsGrstctlHsrstValuesBase> ;
    using Fcrst = OtgFsGlobalFsGrstctlFcrstValues<OtgFsGlobal::FsGrstctl, 2, 1, ReadWriteMode, OtgFsGlobalFsGrstctlFcrstValuesBase> ;
    using Rxfflsh = OtgFsGlobalFsGrstctlRxfflshValues<OtgFsGlobal::FsGrstctl, 4, 1, ReadWriteMode, OtgFsGlobalFsGrstctlRxfflshValuesBase> ;
    using Txfflsh = OtgFsGlobalFsGrstctlTxfflshValues<OtgFsGlobal::FsGrstctl, 5, 1, ReadWriteMode, OtgFsGlobalFsGrstctlTxfflshValuesBase> ;
    using Txfnum = OtgFsGlobalFsGrstctlTxfnumValues<OtgFsGlobal::FsGrstctl, 6, 5, ReadWriteMode, OtgFsGlobalFsGrstctlTxfnumValuesBase> ;
    using Ahbidl = OtgFsGlobalFsGrstctlAhbidlValues<OtgFsGlobal::FsGrstctl, 31, 1, ReadMode, OtgFsGlobalFsGrstctlAhbidlValuesBase> ;
  } ;

  template<typename... T> 
  using FsGrstctlPack  = Register<0x50000010, 32, ReadWriteMode, OtgFsGlobalFsGrstctlCsrstValuesBase, T...> ;

  struct FsGintsts : public RegisterBase<0x50000014, 32, ReadWriteMode>
  {
    using Cmod = OtgFsGlobalFsGintstsCmodValues<OtgFsGlobal::FsGintsts, 0, 1, ReadMode, OtgFsGlobalFsGintstsCmodValuesBase> ;
    using Mmis = OtgFsGlobalFsGintstsMmisValues<OtgFsGlobal::FsGintsts, 1, 1, ReadWriteMode, OtgFsGlobalFsGintstsMmisValuesBase> ;
    using Otgint = OtgFsGlobalFsGintstsOtgintValues<OtgFsGlobal::FsGintsts, 2, 1, ReadMode, OtgFsGlobalFsGintstsOtgintValuesBase> ;
    using Sof = OtgFsGlobalFsGintstsSofValues<OtgFsGlobal::FsGintsts, 3, 1, ReadWriteMode, OtgFsGlobalFsGintstsSofValuesBase> ;
    using Rxflvl = OtgFsGlobalFsGintstsRxflvlValues<OtgFsGlobal::FsGintsts, 4, 1, ReadMode, OtgFsGlobalFsGintstsRxflvlValuesBase> ;
    using Nptxfe = OtgFsGlobalFsGintstsNptxfeValues<OtgFsGlobal::FsGintsts, 5, 1, ReadMode, OtgFsGlobalFsGintstsNptxfeValuesBase> ;
    using Ginakeff = OtgFsGlobalFsGintstsGinakeffValues<OtgFsGlobal::FsGintsts, 6, 1, ReadMode, OtgFsGlobalFsGintstsGinakeffValuesBase> ;
    using Goutnakeff = OtgFsGlobalFsGintstsGoutnakeffValues<OtgFsGlobal::FsGintsts, 7, 1, ReadMode, OtgFsGlobalFsGintstsGoutnakeffValuesBase> ;
    using Esusp = OtgFsGlobalFsGintstsEsuspValues<OtgFsGlobal::FsGintsts, 10, 1, ReadWriteMode, OtgFsGlobalFsGintstsEsuspValuesBase> ;
    using Usbsusp = OtgFsGlobalFsGintstsUsbsuspValues<OtgFsGlobal::FsGintsts, 11, 1, ReadWriteMode, OtgFsGlobalFsGintstsUsbsuspValuesBase> ;
    using Usbrst = OtgFsGlobalFsGintstsUsbrstValues<OtgFsGlobal::FsGintsts, 12, 1, ReadWriteMode, OtgFsGlobalFsGintstsUsbrstValuesBase> ;
    using Enumdne = OtgFsGlobalFsGintstsEnumdneValues<OtgFsGlobal::FsGintsts, 13, 1, ReadWriteMode, OtgFsGlobalFsGintstsEnumdneValuesBase> ;
    using Isoodrp = OtgFsGlobalFsGintstsIsoodrpValues<OtgFsGlobal::FsGintsts, 14, 1, ReadWriteMode, OtgFsGlobalFsGintstsIsoodrpValuesBase> ;
    using Eopf = OtgFsGlobalFsGintstsEopfValues<OtgFsGlobal::FsGintsts, 15, 1, ReadWriteMode, OtgFsGlobalFsGintstsEopfValuesBase> ;
    using Iepint = OtgFsGlobalFsGintstsIepintValues<OtgFsGlobal::FsGintsts, 18, 1, ReadMode, OtgFsGlobalFsGintstsIepintValuesBase> ;
    using Oepint = OtgFsGlobalFsGintstsOepintValues<OtgFsGlobal::FsGintsts, 19, 1, ReadMode, OtgFsGlobalFsGintstsOepintValuesBase> ;
    using Iisoixfr = OtgFsGlobalFsGintstsIisoixfrValues<OtgFsGlobal::FsGintsts, 20, 1, ReadWriteMode, OtgFsGlobalFsGintstsIisoixfrValuesBase> ;
    using IpxfrIncompisoout = OtgFsGlobalFsGintstsIpxfrIncompisooutValues<OtgFsGlobal::FsGintsts, 21, 1, ReadWriteMode, OtgFsGlobalFsGintstsIpxfrIncompisooutValuesBase> ;
    using Hprtint = OtgFsGlobalFsGintstsHprtintValues<OtgFsGlobal::FsGintsts, 24, 1, ReadMode, OtgFsGlobalFsGintstsHprtintValuesBase> ;
    using Hcint = OtgFsGlobalFsGintstsHcintValues<OtgFsGlobal::FsGintsts, 25, 1, ReadMode, OtgFsGlobalFsGintstsHcintValuesBase> ;
    using Ptxfe = OtgFsGlobalFsGintstsPtxfeValues<OtgFsGlobal::FsGintsts, 26, 1, ReadMode, OtgFsGlobalFsGintstsPtxfeValuesBase> ;
    using Cidschg = OtgFsGlobalFsGintstsCidschgValues<OtgFsGlobal::FsGintsts, 28, 1, ReadWriteMode, OtgFsGlobalFsGintstsCidschgValuesBase> ;
    using Discint = OtgFsGlobalFsGintstsDiscintValues<OtgFsGlobal::FsGintsts, 29, 1, ReadWriteMode, OtgFsGlobalFsGintstsDiscintValuesBase> ;
    using Srqint = OtgFsGlobalFsGintstsSrqintValues<OtgFsGlobal::FsGintsts, 30, 1, ReadWriteMode, OtgFsGlobalFsGintstsSrqintValuesBase> ;
    using Wkupint = OtgFsGlobalFsGintstsWkupintValues<OtgFsGlobal::FsGintsts, 31, 1, ReadWriteMode, OtgFsGlobalFsGintstsWkupintValuesBase> ;
  } ;

  template<typename... T> 
  using FsGintstsPack  = Register<0x50000014, 32, ReadWriteMode, OtgFsGlobalFsGintstsCmodValuesBase, T...> ;

  struct FsGintmsk : public RegisterBase<0x50000018, 32, ReadWriteMode>
  {
    using Mmism = OtgFsGlobalFsGintmskMmismValues<OtgFsGlobal::FsGintmsk, 1, 1, ReadWriteMode, OtgFsGlobalFsGintmskMmismValuesBase> ;
    using Otgint = OtgFsGlobalFsGintmskOtgintValues<OtgFsGlobal::FsGintmsk, 2, 1, ReadWriteMode, OtgFsGlobalFsGintmskOtgintValuesBase> ;
    using Sofm = OtgFsGlobalFsGintmskSofmValues<OtgFsGlobal::FsGintmsk, 3, 1, ReadWriteMode, OtgFsGlobalFsGintmskSofmValuesBase> ;
    using Rxflvlm = OtgFsGlobalFsGintmskRxflvlmValues<OtgFsGlobal::FsGintmsk, 4, 1, ReadWriteMode, OtgFsGlobalFsGintmskRxflvlmValuesBase> ;
    using Nptxfem = OtgFsGlobalFsGintmskNptxfemValues<OtgFsGlobal::FsGintmsk, 5, 1, ReadWriteMode, OtgFsGlobalFsGintmskNptxfemValuesBase> ;
    using Ginakeffm = OtgFsGlobalFsGintmskGinakeffmValues<OtgFsGlobal::FsGintmsk, 6, 1, ReadWriteMode, OtgFsGlobalFsGintmskGinakeffmValuesBase> ;
    using Gonakeffm = OtgFsGlobalFsGintmskGonakeffmValues<OtgFsGlobal::FsGintmsk, 7, 1, ReadWriteMode, OtgFsGlobalFsGintmskGonakeffmValuesBase> ;
    using Esuspm = OtgFsGlobalFsGintmskEsuspmValues<OtgFsGlobal::FsGintmsk, 10, 1, ReadWriteMode, OtgFsGlobalFsGintmskEsuspmValuesBase> ;
    using Usbsuspm = OtgFsGlobalFsGintmskUsbsuspmValues<OtgFsGlobal::FsGintmsk, 11, 1, ReadWriteMode, OtgFsGlobalFsGintmskUsbsuspmValuesBase> ;
    using Usbrst = OtgFsGlobalFsGintmskUsbrstValues<OtgFsGlobal::FsGintmsk, 12, 1, ReadWriteMode, OtgFsGlobalFsGintmskUsbrstValuesBase> ;
    using Enumdnem = OtgFsGlobalFsGintmskEnumdnemValues<OtgFsGlobal::FsGintmsk, 13, 1, ReadWriteMode, OtgFsGlobalFsGintmskEnumdnemValuesBase> ;
    using Isoodrpm = OtgFsGlobalFsGintmskIsoodrpmValues<OtgFsGlobal::FsGintmsk, 14, 1, ReadWriteMode, OtgFsGlobalFsGintmskIsoodrpmValuesBase> ;
    using Eopfm = OtgFsGlobalFsGintmskEopfmValues<OtgFsGlobal::FsGintmsk, 15, 1, ReadWriteMode, OtgFsGlobalFsGintmskEopfmValuesBase> ;
    using Epmism = OtgFsGlobalFsGintmskEpmismValues<OtgFsGlobal::FsGintmsk, 17, 1, ReadWriteMode, OtgFsGlobalFsGintmskEpmismValuesBase> ;
    using Iepint = OtgFsGlobalFsGintmskIepintValues<OtgFsGlobal::FsGintmsk, 18, 1, ReadWriteMode, OtgFsGlobalFsGintmskIepintValuesBase> ;
    using Oepint = OtgFsGlobalFsGintmskOepintValues<OtgFsGlobal::FsGintmsk, 19, 1, ReadWriteMode, OtgFsGlobalFsGintmskOepintValuesBase> ;
    using Iisoixfrm = OtgFsGlobalFsGintmskIisoixfrmValues<OtgFsGlobal::FsGintmsk, 20, 1, ReadWriteMode, OtgFsGlobalFsGintmskIisoixfrmValuesBase> ;
    using IpxfrmIisooxfrm = OtgFsGlobalFsGintmskIpxfrmIisooxfrmValues<OtgFsGlobal::FsGintmsk, 21, 1, ReadWriteMode, OtgFsGlobalFsGintmskIpxfrmIisooxfrmValuesBase> ;
    using Prtim = OtgFsGlobalFsGintmskPrtimValues<OtgFsGlobal::FsGintmsk, 24, 1, ReadMode, OtgFsGlobalFsGintmskPrtimValuesBase> ;
    using Hcim = OtgFsGlobalFsGintmskHcimValues<OtgFsGlobal::FsGintmsk, 25, 1, ReadWriteMode, OtgFsGlobalFsGintmskHcimValuesBase> ;
    using Ptxfem = OtgFsGlobalFsGintmskPtxfemValues<OtgFsGlobal::FsGintmsk, 26, 1, ReadWriteMode, OtgFsGlobalFsGintmskPtxfemValuesBase> ;
    using Cidschgm = OtgFsGlobalFsGintmskCidschgmValues<OtgFsGlobal::FsGintmsk, 28, 1, ReadWriteMode, OtgFsGlobalFsGintmskCidschgmValuesBase> ;
    using Discint = OtgFsGlobalFsGintmskDiscintValues<OtgFsGlobal::FsGintmsk, 29, 1, ReadWriteMode, OtgFsGlobalFsGintmskDiscintValuesBase> ;
    using Srqim = OtgFsGlobalFsGintmskSrqimValues<OtgFsGlobal::FsGintmsk, 30, 1, ReadWriteMode, OtgFsGlobalFsGintmskSrqimValuesBase> ;
    using Wuim = OtgFsGlobalFsGintmskWuimValues<OtgFsGlobal::FsGintmsk, 31, 1, ReadWriteMode, OtgFsGlobalFsGintmskWuimValuesBase> ;
  } ;

  template<typename... T> 
  using FsGintmskPack  = Register<0x50000018, 32, ReadWriteMode, OtgFsGlobalFsGintmskMmismValuesBase, T...> ;

  struct FsGrxstsrDevice : public RegisterBase<0x5000001C, 32, ReadMode>
  {
    using Epnum = OtgFsGlobalFsGrxstsrDeviceEpnumValues<OtgFsGlobal::FsGrxstsrDevice, 0, 4, ReadMode, OtgFsGlobalFsGrxstsrDeviceEpnumValuesBase> ;
    using Bcnt = ReadMode<OtgFsGlobal::FsGrxstsrDevice, 4, 11> ;
    using Dpid = OtgFsGlobalFsGrxstsrDeviceDpidValues<OtgFsGlobal::FsGrxstsrDevice, 15, 2, ReadMode, OtgFsGlobalFsGrxstsrDeviceDpidValuesBase> ;
    using Pktsts = OtgFsGlobalFsGrxstsrDevicePktstsValues<OtgFsGlobal::FsGrxstsrDevice, 17, 4, ReadMode, OtgFsGlobalFsGrxstsrDevicePktstsValuesBase> ;
    using Frmnum = OtgFsGlobalFsGrxstsrDeviceFrmnumValues<OtgFsGlobal::FsGrxstsrDevice, 21, 4, ReadMode, OtgFsGlobalFsGrxstsrDeviceFrmnumValuesBase> ;
  } ;

  template<typename... T> 
  using FsGrxstsrDevicePack  = Register<0x5000001C, 32, ReadMode, OtgFsGlobalFsGrxstsrDeviceEpnumValuesBase, T...> ;

  struct FsGrxstsrHost : public RegisterBase<0x5000001C, 32, ReadMode>
  {
    using Epnum = OtgFsGlobalFsGrxstsrHostEpnumValues<OtgFsGlobal::FsGrxstsrHost, 0, 4, ReadMode, OtgFsGlobalFsGrxstsrHostEpnumValuesBase> ;
    using Bcnt = ReadMode<OtgFsGlobal::FsGrxstsrHost, 4, 11> ;
    using Dpid = OtgFsGlobalFsGrxstsrHostDpidValues<OtgFsGlobal::FsGrxstsrHost, 15, 2, ReadMode, OtgFsGlobalFsGrxstsrHostDpidValuesBase> ;
    using Pktsts = OtgFsGlobalFsGrxstsrHostPktstsValues<OtgFsGlobal::FsGrxstsrHost, 17, 4, ReadMode, OtgFsGlobalFsGrxstsrHostPktstsValuesBase> ;
    using Frmnum = OtgFsGlobalFsGrxstsrHostFrmnumValues<OtgFsGlobal::FsGrxstsrHost, 21, 4, ReadMode, OtgFsGlobalFsGrxstsrHostFrmnumValuesBase> ;
  } ;

  template<typename... T> 
  using FsGrxstsrHostPack  = Register<0x5000001C, 32, ReadMode, OtgFsGlobalFsGrxstsrHostEpnumValuesBase, T...> ;

  struct FsGrxfsiz : public RegisterBase<0x50000024, 32, ReadWriteMode>
  {
    using Rxfd = ReadWriteMode<OtgFsGlobal::FsGrxfsiz, 0, 16> ;
  } ;

  template<typename... T> 
  using FsGrxfsizPack  = Register<0x50000024, 32, ReadWriteMode, OtgFsGlobalFsGrxfsizRxfdValuesBase, T...> ;

  struct FsGnptxfsizDevice : public RegisterBase<0x50000028, 32, ReadWriteMode>
  {
    using Tx0Fsa = ReadWriteMode<OtgFsGlobal::FsGnptxfsizDevice, 0, 16> ;
    using Tx0Fd = ReadWriteMode<OtgFsGlobal::FsGnptxfsizDevice, 16, 16> ;
  } ;

  template<typename... T> 
  using FsGnptxfsizDevicePack  = Register<0x50000028, 32, ReadWriteMode, OtgFsGlobalFsGnptxfsizDeviceTxFsaValuesBase, T...> ;

  struct FsGnptxfsizHost : public RegisterBase<0x50000028, 32, ReadWriteMode>
  {
    using Nptxfsa = ReadWriteMode<OtgFsGlobal::FsGnptxfsizHost, 0, 16> ;
    using Nptxfd = ReadWriteMode<OtgFsGlobal::FsGnptxfsizHost, 16, 16> ;
  } ;

  template<typename... T> 
  using FsGnptxfsizHostPack  = Register<0x50000028, 32, ReadWriteMode, OtgFsGlobalFsGnptxfsizHostNptxfsaValuesBase, T...> ;

  struct FsGnptxsts : public RegisterBase<0x5000002C, 32, ReadMode>
  {
    using Nptxfsav = ReadMode<OtgFsGlobal::FsGnptxsts, 0, 16> ;
    using Nptqxsav = ReadMode<OtgFsGlobal::FsGnptxsts, 16, 8> ;
    using Nptxqtop = ReadMode<OtgFsGlobal::FsGnptxsts, 24, 7> ;
  } ;

  template<typename... T> 
  using FsGnptxstsPack  = Register<0x5000002C, 32, ReadMode, OtgFsGlobalFsGnptxstsNptxfsavValuesBase, T...> ;

  struct FsGccfg : public RegisterBase<0x50000038, 32, ReadWriteMode>
  {
    using Pwrdwn = OtgFsGlobalFsGccfgPwrdwnValues<OtgFsGlobal::FsGccfg, 16, 1, ReadWriteMode, OtgFsGlobalFsGccfgPwrdwnValuesBase> ;
    using Vbusasen = OtgFsGlobalFsGccfgVbusasenValues<OtgFsGlobal::FsGccfg, 18, 1, ReadWriteMode, OtgFsGlobalFsGccfgVbusasenValuesBase> ;
    using Vbusbsen = OtgFsGlobalFsGccfgVbusbsenValues<OtgFsGlobal::FsGccfg, 19, 1, ReadWriteMode, OtgFsGlobalFsGccfgVbusbsenValuesBase> ;
    using Sofouten = OtgFsGlobalFsGccfgSofoutenValues<OtgFsGlobal::FsGccfg, 20, 1, ReadWriteMode, OtgFsGlobalFsGccfgSofoutenValuesBase> ;
  } ;

  template<typename... T> 
  using FsGccfgPack  = Register<0x50000038, 32, ReadWriteMode, OtgFsGlobalFsGccfgPwrdwnValuesBase, T...> ;

  struct FsCid : public RegisterBase<0x5000003C, 32, ReadWriteMode>
  {
    using ProductId = ReadWriteMode<OtgFsGlobal::FsCid, 0, 32> ;
  } ;

  template<typename... T> 
  using FsCidPack  = Register<0x5000003C, 32, ReadWriteMode, OtgFsGlobalFsCidProductIdValuesBase, T...> ;

  struct FsHptxfsiz : public RegisterBase<0x50000100, 32, ReadWriteMode>
  {
    using Ptxsa = ReadWriteMode<OtgFsGlobal::FsHptxfsiz, 0, 16> ;
    using Ptxfsiz = ReadWriteMode<OtgFsGlobal::FsHptxfsiz, 16, 16> ;
  } ;

  template<typename... T> 
  using FsHptxfsizPack  = Register<0x50000100, 32, ReadWriteMode, OtgFsGlobalFsHptxfsizPtxsaValuesBase, T...> ;

  struct FsDieptxf1 : public RegisterBase<0x50000104, 32, ReadWriteMode>
  {
    using Ineptxsa = ReadWriteMode<OtgFsGlobal::FsDieptxf1, 0, 16> ;
    using Ineptxfd = ReadWriteMode<OtgFsGlobal::FsDieptxf1, 16, 16> ;
  } ;

  template<typename... T> 
  using FsDieptxf1Pack  = Register<0x50000104, 32, ReadWriteMode, OtgFsGlobalFsDieptxfIneptxsaValuesBase, T...> ;

  struct FsDieptxf2 : public RegisterBase<0x50000108, 32, ReadWriteMode>
  {
    using Ineptxsa = ReadWriteMode<OtgFsGlobal::FsDieptxf2, 0, 16> ;
    using Ineptxfd = ReadWriteMode<OtgFsGlobal::FsDieptxf2, 16, 16> ;
  } ;

  template<typename... T> 
  using FsDieptxf2Pack  = Register<0x50000108, 32, ReadWriteMode, OtgFsGlobalFsDieptxfIneptxsaValuesBase, T...> ;

  struct FsDieptxf3 : public RegisterBase<0x5000010C, 32, ReadWriteMode>
  {
    using Ineptxsa = ReadWriteMode<OtgFsGlobal::FsDieptxf3, 0, 16> ;
    using Ineptxfd = ReadWriteMode<OtgFsGlobal::FsDieptxf3, 16, 16> ;
  } ;

  template<typename... T> 
  using FsDieptxf3Pack  = Register<0x5000010C, 32, ReadWriteMode, OtgFsGlobalFsDieptxfIneptxsaValuesBase, T...> ;

} ;

#endif //#if !defined(OTGFSGLOBALREGISTERS_HPP)
