/*******************************************************************************
* Filename      : otgfshostregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSHOSTREGISTERS_HPP)
#define OTGFSHOSTREGISTERS_HPP

#include "otgfshostbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OtgFsHost
{
  struct FsHcfg : public RegisterBase<0x50000400, 32, ReadWriteMode>
  {
    using Fslspcs = OtgFsHostFsHcfgFslspcsValues<OtgFsHost::FsHcfg, 0, 2, ReadWriteMode, OtgFsHostFsHcfgFslspcsValuesBase> ;
    using Fslss = OtgFsHostFsHcfgFslssValues<OtgFsHost::FsHcfg, 2, 1, ReadMode, OtgFsHostFsHcfgFslssValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcfgPack  = Register<0x50000400, 32, ReadWriteMode, OtgFsHostFsHcfgFslspcsValuesBase, T...> ;

  struct Hfir : public RegisterBase<0x50000404, 32, ReadWriteMode>
  {
    using Frivl = ReadWriteMode<OtgFsHost::Hfir, 0, 16> ;
  } ;

  template<typename... T> 
  using HfirPack  = Register<0x50000404, 32, ReadWriteMode, OtgFsHostHfirFrivlValuesBase, T...> ;

  struct FsHfnum : public RegisterBase<0x50000408, 32, ReadMode>
  {
    using Frnum = ReadMode<OtgFsHost::FsHfnum, 0, 16> ;
    using Ftrem = ReadMode<OtgFsHost::FsHfnum, 16, 16> ;
  } ;

  template<typename... T> 
  using FsHfnumPack  = Register<0x50000408, 32, ReadMode, OtgFsHostFsHfnumFrnumValuesBase, T...> ;

  struct FsHptxsts : public RegisterBase<0x50000410, 32, ReadWriteMode>
  {
    using Ptxfsavl = ReadWriteMode<OtgFsHost::FsHptxsts, 0, 16> ;
    using Ptxqsav = ReadMode<OtgFsHost::FsHptxsts, 16, 8> ;
    using Ptxqtop = ReadMode<OtgFsHost::FsHptxsts, 24, 8> ;
  } ;

  template<typename... T> 
  using FsHptxstsPack  = Register<0x50000410, 32, ReadWriteMode, OtgFsHostFsHptxstsPtxfsavlValuesBase, T...> ;

  struct Haint : public RegisterBase<0x50000414, 32, ReadMode>
  {
    using HaintField = ReadMode<OtgFsHost::Haint, 0, 16> ;
  } ;

  template<typename... T> 
  using HaintPack  = Register<0x50000414, 32, ReadMode, OtgFsHostHaintHaintValuesBase, T...> ;

  struct Haintmsk : public RegisterBase<0x50000418, 32, ReadWriteMode>
  {
    using Haintm = ReadWriteMode<OtgFsHost::Haintmsk, 0, 16> ;
  } ;

  template<typename... T> 
  using HaintmskPack  = Register<0x50000418, 32, ReadWriteMode, OtgFsHostHaintmskHaintmValuesBase, T...> ;

  struct FsHprt : public RegisterBase<0x50000440, 32, ReadWriteMode>
  {
    using Pcsts = OtgFsHostFsHprtPcstsValues<OtgFsHost::FsHprt, 0, 1, ReadMode, OtgFsHostFsHprtPcstsValuesBase> ;
    using Pcdet = OtgFsHostFsHprtPcdetValues<OtgFsHost::FsHprt, 1, 1, ReadWriteMode, OtgFsHostFsHprtPcdetValuesBase> ;
    using Pena = OtgFsHostFsHprtPenaValues<OtgFsHost::FsHprt, 2, 1, ReadWriteMode, OtgFsHostFsHprtPenaValuesBase> ;
    using Penchng = OtgFsHostFsHprtPenchngValues<OtgFsHost::FsHprt, 3, 1, ReadWriteMode, OtgFsHostFsHprtPenchngValuesBase> ;
    using Poca = OtgFsHostFsHprtPocaValues<OtgFsHost::FsHprt, 4, 1, ReadMode, OtgFsHostFsHprtPocaValuesBase> ;
    using Pocchng = OtgFsHostFsHprtPocchngValues<OtgFsHost::FsHprt, 5, 1, ReadWriteMode, OtgFsHostFsHprtPocchngValuesBase> ;
    using Pres = OtgFsHostFsHprtPresValues<OtgFsHost::FsHprt, 6, 1, ReadWriteMode, OtgFsHostFsHprtPresValuesBase> ;
    using Psusp = OtgFsHostFsHprtPsuspValues<OtgFsHost::FsHprt, 7, 1, ReadWriteMode, OtgFsHostFsHprtPsuspValuesBase> ;
    using Prst = OtgFsHostFsHprtPrstValues<OtgFsHost::FsHprt, 8, 1, ReadWriteMode, OtgFsHostFsHprtPrstValuesBase> ;
    using Plsts = OtgFsHostFsHprtPlstsValues<OtgFsHost::FsHprt, 10, 2, ReadMode, OtgFsHostFsHprtPlstsValuesBase> ;
    using Ppwr = OtgFsHostFsHprtPpwrValues<OtgFsHost::FsHprt, 12, 1, ReadWriteMode, OtgFsHostFsHprtPpwrValuesBase> ;
    using Ptctl = OtgFsHostFsHprtPtctlValues<OtgFsHost::FsHprt, 13, 4, ReadWriteMode, OtgFsHostFsHprtPtctlValuesBase> ;
    using Pspd = OtgFsHostFsHprtPspdValues<OtgFsHost::FsHprt, 17, 2, ReadMode, OtgFsHostFsHprtPspdValuesBase> ;
  } ;

  template<typename... T> 
  using FsHprtPack  = Register<0x50000440, 32, ReadWriteMode, OtgFsHostFsHprtPcstsValuesBase, T...> ;

  struct FsHcchar0 : public RegisterBase<0x50000500, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar0, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar0, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar0, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar0, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar0, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar0, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar0, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar0, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar0, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar0, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar0Pack  = Register<0x50000500, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcchar1 : public RegisterBase<0x50000520, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar1, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar1, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar1, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar1, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar1, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar1, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar1, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar1, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar1, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar1, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar1Pack  = Register<0x50000520, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcchar2 : public RegisterBase<0x50000540, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar2, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar2, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar2, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar2, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar2, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar2, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar2, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar2, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar2, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar2, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar2Pack  = Register<0x50000540, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcchar3 : public RegisterBase<0x50000560, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar3, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar3, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar3, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar3, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar3, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar3, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar3, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar3, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar3, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar3, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar3Pack  = Register<0x50000560, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcchar4 : public RegisterBase<0x50000580, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar4, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar4, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar4, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar4, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar4, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar4, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar4, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar4, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar4, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar4, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar4Pack  = Register<0x50000580, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcchar5 : public RegisterBase<0x500005A0, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar5, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar5, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar5, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar5, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar5, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar5, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar5, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar5, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar5, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar5, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar5Pack  = Register<0x500005A0, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcchar6 : public RegisterBase<0x500005C0, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar6, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar6, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar6, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar6, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar6, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar6, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar6, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar6, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar6, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar6, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar6Pack  = Register<0x500005C0, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcchar7 : public RegisterBase<0x500005E0, 32, ReadWriteMode>
  {
    using Mpsiz = ReadWriteMode<OtgFsHost::FsHcchar7, 0, 11> ;
    using Epnum = OtgFsHostFsHccharEpnumValues<OtgFsHost::FsHcchar7, 11, 4, ReadWriteMode, OtgFsHostFsHccharEpnumValuesBase> ;
    using Epdir = OtgFsHostFsHccharEpdirValues<OtgFsHost::FsHcchar7, 15, 1, ReadWriteMode, OtgFsHostFsHccharEpdirValuesBase> ;
    using Lsdev = OtgFsHostFsHccharLsdevValues<OtgFsHost::FsHcchar7, 17, 1, ReadWriteMode, OtgFsHostFsHccharLsdevValuesBase> ;
    using Eptyp = OtgFsHostFsHccharEptypValues<OtgFsHost::FsHcchar7, 18, 2, ReadWriteMode, OtgFsHostFsHccharEptypValuesBase> ;
    using Mcnt = OtgFsHostFsHccharMcntValues<OtgFsHost::FsHcchar7, 20, 2, ReadWriteMode, OtgFsHostFsHccharMcntValuesBase> ;
    using Dad = ReadWriteMode<OtgFsHost::FsHcchar7, 22, 7> ;
    using Oddfrm = OtgFsHostFsHccharOddfrmValues<OtgFsHost::FsHcchar7, 29, 1, ReadWriteMode, OtgFsHostFsHccharOddfrmValuesBase> ;
    using Chdis = OtgFsHostFsHccharChdisValues<OtgFsHost::FsHcchar7, 30, 1, ReadWriteMode, OtgFsHostFsHccharChdisValuesBase> ;
    using Chena = OtgFsHostFsHccharChenaValues<OtgFsHost::FsHcchar7, 31, 1, ReadWriteMode, OtgFsHostFsHccharChenaValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcchar7Pack  = Register<0x500005E0, 32, ReadWriteMode, OtgFsHostFsHccharMpsizValuesBase, T...> ;

  struct FsHcint0 : public RegisterBase<0x50000508, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint0, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint0, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint0, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint0, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint0, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint0, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint0, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint0, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint0, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint0Pack  = Register<0x50000508, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcint1 : public RegisterBase<0x50000528, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint1, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint1, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint1, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint1, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint1, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint1, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint1, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint1, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint1, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint1Pack  = Register<0x50000528, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcint2 : public RegisterBase<0x50000548, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint2, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint2, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint2, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint2, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint2, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint2, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint2, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint2, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint2, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint2Pack  = Register<0x50000548, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcint3 : public RegisterBase<0x50000568, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint3, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint3, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint3, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint3, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint3, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint3, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint3, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint3, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint3, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint3Pack  = Register<0x50000568, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcint4 : public RegisterBase<0x50000588, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint4, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint4, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint4, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint4, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint4, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint4, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint4, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint4, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint4, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint4Pack  = Register<0x50000588, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcint5 : public RegisterBase<0x500005A8, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint5, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint5, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint5, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint5, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint5, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint5, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint5, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint5, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint5, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint5Pack  = Register<0x500005A8, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcint6 : public RegisterBase<0x500005C8, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint6, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint6, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint6, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint6, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint6, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint6, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint6, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint6, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint6, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint6Pack  = Register<0x500005C8, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcint7 : public RegisterBase<0x500005E8, 32, ReadWriteMode>
  {
    using Xfrc = OtgFsHostFsHcintXfrcValues<OtgFsHost::FsHcint7, 0, 1, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase> ;
    using Chh = OtgFsHostFsHcintChhValues<OtgFsHost::FsHcint7, 1, 1, ReadWriteMode, OtgFsHostFsHcintChhValuesBase> ;
    using Stall = OtgFsHostFsHcintStallValues<OtgFsHost::FsHcint7, 3, 1, ReadWriteMode, OtgFsHostFsHcintStallValuesBase> ;
    using Nak = OtgFsHostFsHcintNakValues<OtgFsHost::FsHcint7, 4, 1, ReadWriteMode, OtgFsHostFsHcintNakValuesBase> ;
    using Ack = OtgFsHostFsHcintAckValues<OtgFsHost::FsHcint7, 5, 1, ReadWriteMode, OtgFsHostFsHcintAckValuesBase> ;
    using Txerr = OtgFsHostFsHcintTxerrValues<OtgFsHost::FsHcint7, 7, 1, ReadWriteMode, OtgFsHostFsHcintTxerrValuesBase> ;
    using Bberr = OtgFsHostFsHcintBberrValues<OtgFsHost::FsHcint7, 8, 1, ReadWriteMode, OtgFsHostFsHcintBberrValuesBase> ;
    using Frmor = OtgFsHostFsHcintFrmorValues<OtgFsHost::FsHcint7, 9, 1, ReadWriteMode, OtgFsHostFsHcintFrmorValuesBase> ;
    using Dterr = OtgFsHostFsHcintDterrValues<OtgFsHost::FsHcint7, 10, 1, ReadWriteMode, OtgFsHostFsHcintDterrValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcint7Pack  = Register<0x500005E8, 32, ReadWriteMode, OtgFsHostFsHcintXfrcValuesBase, T...> ;

  struct FsHcintmsk0 : public RegisterBase<0x5000050C, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk0, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk0, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk0, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk0, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk0, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk0, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk0, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk0, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk0, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk0, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk0Pack  = Register<0x5000050C, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHcintmsk1 : public RegisterBase<0x5000052C, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk1, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk1, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk1, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk1, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk1, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk1, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk1, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk1, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk1, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk1, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk1Pack  = Register<0x5000052C, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHcintmsk2 : public RegisterBase<0x5000054C, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk2, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk2, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk2, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk2, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk2, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk2, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk2, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk2, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk2, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk2, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk2Pack  = Register<0x5000054C, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHcintmsk3 : public RegisterBase<0x5000056C, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk3, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk3, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk3, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk3, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk3, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk3, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk3, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk3, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk3, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk3, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk3Pack  = Register<0x5000056C, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHcintmsk4 : public RegisterBase<0x5000058C, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk4, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk4, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk4, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk4, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk4, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk4, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk4, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk4, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk4, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk4, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk4Pack  = Register<0x5000058C, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHcintmsk5 : public RegisterBase<0x500005AC, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk5, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk5, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk5, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk5, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk5, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk5, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk5, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk5, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk5, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk5, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk5Pack  = Register<0x500005AC, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHcintmsk6 : public RegisterBase<0x500005CC, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk6, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk6, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk6, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk6, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk6, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk6, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk6, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk6, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk6, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk6, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk6Pack  = Register<0x500005CC, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHcintmsk7 : public RegisterBase<0x500005EC, 32, ReadWriteMode>
  {
    using Xfrcm = OtgFsHostFsHcintmskXfrcmValues<OtgFsHost::FsHcintmsk7, 0, 1, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase> ;
    using Chhm = OtgFsHostFsHcintmskChhmValues<OtgFsHost::FsHcintmsk7, 1, 1, ReadWriteMode, OtgFsHostFsHcintmskChhmValuesBase> ;
    using Stallm = OtgFsHostFsHcintmskStallmValues<OtgFsHost::FsHcintmsk7, 3, 1, ReadWriteMode, OtgFsHostFsHcintmskStallmValuesBase> ;
    using Nakm = OtgFsHostFsHcintmskNakmValues<OtgFsHost::FsHcintmsk7, 4, 1, ReadWriteMode, OtgFsHostFsHcintmskNakmValuesBase> ;
    using Ackm = OtgFsHostFsHcintmskAckmValues<OtgFsHost::FsHcintmsk7, 5, 1, ReadWriteMode, OtgFsHostFsHcintmskAckmValuesBase> ;
    using Nyet = OtgFsHostFsHcintmskNyetValues<OtgFsHost::FsHcintmsk7, 6, 1, ReadWriteMode, OtgFsHostFsHcintmskNyetValuesBase> ;
    using Txerrm = OtgFsHostFsHcintmskTxerrmValues<OtgFsHost::FsHcintmsk7, 7, 1, ReadWriteMode, OtgFsHostFsHcintmskTxerrmValuesBase> ;
    using Bberrm = OtgFsHostFsHcintmskBberrmValues<OtgFsHost::FsHcintmsk7, 8, 1, ReadWriteMode, OtgFsHostFsHcintmskBberrmValuesBase> ;
    using Frmorm = OtgFsHostFsHcintmskFrmormValues<OtgFsHost::FsHcintmsk7, 9, 1, ReadWriteMode, OtgFsHostFsHcintmskFrmormValuesBase> ;
    using Dterrm = OtgFsHostFsHcintmskDterrmValues<OtgFsHost::FsHcintmsk7, 10, 1, ReadWriteMode, OtgFsHostFsHcintmskDterrmValuesBase> ;
  } ;

  template<typename... T> 
  using FsHcintmsk7Pack  = Register<0x500005EC, 32, ReadWriteMode, OtgFsHostFsHcintmskXfrcmValuesBase, T...> ;

  struct FsHctsiz0 : public RegisterBase<0x50000510, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz0, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz0, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz0, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz0Pack  = Register<0x50000510, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

  struct FsHctsiz1 : public RegisterBase<0x50000530, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz1, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz1, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz1, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz1Pack  = Register<0x50000530, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

  struct FsHctsiz2 : public RegisterBase<0x50000550, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz2, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz2, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz2, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz2Pack  = Register<0x50000550, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

  struct FsHctsiz3 : public RegisterBase<0x50000570, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz3, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz3, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz3, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz3Pack  = Register<0x50000570, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

  struct FsHctsiz4 : public RegisterBase<0x50000590, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz4, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz4, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz4, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz4Pack  = Register<0x50000590, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

  struct FsHctsiz5 : public RegisterBase<0x500005B0, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz5, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz5, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz5, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz5Pack  = Register<0x500005B0, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

  struct FsHctsiz6 : public RegisterBase<0x500005D0, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz6, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz6, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz6, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz6Pack  = Register<0x500005D0, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

  struct FsHctsiz7 : public RegisterBase<0x500005F0, 32, ReadWriteMode>
  {
    using Xfrsiz = ReadWriteMode<OtgFsHost::FsHctsiz7, 0, 19> ;
    using Pktcnt = ReadWriteMode<OtgFsHost::FsHctsiz7, 19, 10> ;
    using Dpid = OtgFsHostFsHctsizDpidValues<OtgFsHost::FsHctsiz7, 29, 2, ReadWriteMode, OtgFsHostFsHctsizDpidValuesBase> ;
  } ;

  template<typename... T> 
  using FsHctsiz7Pack  = Register<0x500005F0, 32, ReadWriteMode, OtgFsHostFsHctsizXfrsizValuesBase, T...> ;

} ;

#endif //#if !defined(OTGFSHOSTREGISTERS_HPP)
