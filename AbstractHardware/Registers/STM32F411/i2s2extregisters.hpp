/*******************************************************************************
* Filename      : i2s2extregisters.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2S2EXTREGISTERS_HPP)
#define I2S2EXTREGISTERS_HPP

#include "i2s2extbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2S2Ext
{
  struct Cr1 : public RegisterBase<0x40003400, 32, ReadWriteMode>
  {
    using Bidimode = ISExtCrBidimodeValues<I2S2Ext::Cr1, 15, 1, ReadWriteMode, ISExtCrBidimodeValuesBase> ;
    using Bidioe = ISExtCrBidioeValues<I2S2Ext::Cr1, 14, 1, ReadWriteMode, ISExtCrBidioeValuesBase> ;
    using Crcen = ISExtCrCrcenValues<I2S2Ext::Cr1, 13, 1, ReadWriteMode, ISExtCrCrcenValuesBase> ;
    using Crcnext = ISExtCrCrcnextValues<I2S2Ext::Cr1, 12, 1, ReadWriteMode, ISExtCrCrcnextValuesBase> ;
    using Dff = ISExtCrDffValues<I2S2Ext::Cr1, 11, 1, ReadWriteMode, ISExtCrDffValuesBase> ;
    using Rxonly = ISExtCrRxonlyValues<I2S2Ext::Cr1, 10, 1, ReadWriteMode, ISExtCrRxonlyValuesBase> ;
    using Ssm = ISExtCrSsmValues<I2S2Ext::Cr1, 9, 1, ReadWriteMode, ISExtCrSsmValuesBase> ;
    using Ssi = ISExtCrSsiValues<I2S2Ext::Cr1, 8, 1, ReadWriteMode, ISExtCrSsiValuesBase> ;
    using Lsbfirst = ISExtCrLsbfirstValues<I2S2Ext::Cr1, 7, 1, ReadWriteMode, ISExtCrLsbfirstValuesBase> ;
    using Spe = ISExtCrSpeValues<I2S2Ext::Cr1, 6, 1, ReadWriteMode, ISExtCrSpeValuesBase> ;
    using Br = ISExtCrBrValues<I2S2Ext::Cr1, 3, 3, ReadWriteMode, ISExtCrBrValuesBase> ;
    using Mstr = ISExtCrMstrValues<I2S2Ext::Cr1, 2, 1, ReadWriteMode, ISExtCrMstrValuesBase> ;
    using Cpol = ISExtCrCpolValues<I2S2Ext::Cr1, 1, 1, ReadWriteMode, ISExtCrCpolValuesBase> ;
    using Cpha = ISExtCrCphaValues<I2S2Ext::Cr1, 0, 1, ReadWriteMode, ISExtCrCphaValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40003400, 32, ReadWriteMode, ISExtCrBidimodeValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40003404, 32, ReadWriteMode>
  {
    using Txeie = ISExtCrTxeieValues<I2S2Ext::Cr2, 7, 1, ReadWriteMode, ISExtCrTxeieValuesBase> ;
    using Rxneie = ISExtCrRxneieValues<I2S2Ext::Cr2, 6, 1, ReadWriteMode, ISExtCrRxneieValuesBase> ;
    using Errie = ISExtCrErrieValues<I2S2Ext::Cr2, 5, 1, ReadWriteMode, ISExtCrErrieValuesBase> ;
    using Frf = ISExtCrFrfValues<I2S2Ext::Cr2, 4, 1, ReadWriteMode, ISExtCrFrfValuesBase> ;
    using Ssoe = ISExtCrSsoeValues<I2S2Ext::Cr2, 2, 1, ReadWriteMode, ISExtCrSsoeValuesBase> ;
    using Txdmaen = ISExtCrTxdmaenValues<I2S2Ext::Cr2, 1, 1, ReadWriteMode, ISExtCrTxdmaenValuesBase> ;
    using Rxdmaen = ISExtCrRxdmaenValues<I2S2Ext::Cr2, 0, 1, ReadWriteMode, ISExtCrRxdmaenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40003404, 32, ReadWriteMode, ISExtCrTxeieValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40003408, 32, ReadWriteMode>
  {
    using Tifrfe = ISExtSrTifrfeValues<I2S2Ext::Sr, 8, 1, ReadMode, ISExtSrTifrfeValuesBase> ;
    using Bsy = ISExtSrBsyValues<I2S2Ext::Sr, 7, 1, ReadMode, ISExtSrBsyValuesBase> ;
    using Ovr = ISExtSrOvrValues<I2S2Ext::Sr, 6, 1, ReadMode, ISExtSrOvrValuesBase> ;
    using Modf = ISExtSrModfValues<I2S2Ext::Sr, 5, 1, ReadMode, ISExtSrModfValuesBase> ;
    using Crcerr = ISExtSrCrcerrValues<I2S2Ext::Sr, 4, 1, ReadWriteMode, ISExtSrCrcerrValuesBase> ;
    using Udr = ISExtSrUdrValues<I2S2Ext::Sr, 3, 1, ReadMode, ISExtSrUdrValuesBase> ;
    using Chside = ISExtSrChsideValues<I2S2Ext::Sr, 2, 1, ReadMode, ISExtSrChsideValuesBase> ;
    using Txe = ISExtSrTxeValues<I2S2Ext::Sr, 1, 1, ReadMode, ISExtSrTxeValuesBase> ;
    using Rxne = ISExtSrRxneValues<I2S2Ext::Sr, 0, 1, ReadMode, ISExtSrRxneValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40003408, 32, ReadWriteMode, ISExtSrTifrfeValuesBase, T...> ;

  struct Dr : public RegisterBase<0x4000340C, 32, ReadWriteMode>
  {
    using DrField = ReadWriteMode<I2S2Ext::Dr, 0, 16> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x4000340C, 32, ReadWriteMode, ISExtDrDrValuesBase, T...> ;

  struct Crcpr : public RegisterBase<0x40003410, 32, ReadWriteMode>
  {
    using Crcpoly = ReadWriteMode<I2S2Ext::Crcpr, 0, 16> ;
  } ;

  template<typename... T> 
  using CrcprPack  = Register<0x40003410, 32, ReadWriteMode, ISExtCrcprCrcpolyValuesBase, T...> ;

  struct Rxcrcr : public RegisterBase<0x40003414, 32, ReadMode>
  {
    using Rxcrc = ReadMode<I2S2Ext::Rxcrcr, 0, 16> ;
  } ;

  template<typename... T> 
  using RxcrcrPack  = Register<0x40003414, 32, ReadMode, ISExtRxcrcrRxcrcValuesBase, T...> ;

  struct Txcrcr : public RegisterBase<0x40003418, 32, ReadMode>
  {
    using Txcrc = ReadMode<I2S2Ext::Txcrcr, 0, 16> ;
  } ;

  template<typename... T> 
  using TxcrcrPack  = Register<0x40003418, 32, ReadMode, ISExtTxcrcrTxcrcValuesBase, T...> ;

  struct I2Scfgr : public RegisterBase<0x4000341C, 32, ReadWriteMode>
  {
    using I2Smod = ISExtIScfgrISmodValues<I2S2Ext::I2Scfgr, 11, 1, ReadWriteMode, ISExtIScfgrISmodValuesBase> ;
    using I2Se = ISExtIScfgrISeValues<I2S2Ext::I2Scfgr, 10, 1, ReadWriteMode, ISExtIScfgrISeValuesBase> ;
    using I2Scfg = ISExtIScfgrIScfgValues<I2S2Ext::I2Scfgr, 8, 2, ReadWriteMode, ISExtIScfgrIScfgValuesBase> ;
    using Pcmsync = ISExtIScfgrPcmsyncValues<I2S2Ext::I2Scfgr, 7, 1, ReadWriteMode, ISExtIScfgrPcmsyncValuesBase> ;
    using I2Sstd = ISExtIScfgrISstdValues<I2S2Ext::I2Scfgr, 4, 2, ReadWriteMode, ISExtIScfgrISstdValuesBase> ;
    using Ckpol = ISExtIScfgrCkpolValues<I2S2Ext::I2Scfgr, 3, 1, ReadWriteMode, ISExtIScfgrCkpolValuesBase> ;
    using Datlen = ISExtIScfgrDatlenValues<I2S2Ext::I2Scfgr, 1, 2, ReadWriteMode, ISExtIScfgrDatlenValuesBase> ;
    using Chlen = ISExtIScfgrChlenValues<I2S2Ext::I2Scfgr, 0, 1, ReadWriteMode, ISExtIScfgrChlenValuesBase> ;
  } ;

  template<typename... T> 
  using I2ScfgrPack  = Register<0x4000341C, 32, ReadWriteMode, ISExtIScfgrISmodValuesBase, T...> ;

  struct I2Spr : public RegisterBase<0x40003420, 32, ReadWriteMode>
  {
    using Mckoe = ISExtISprMckoeValues<I2S2Ext::I2Spr, 9, 1, ReadWriteMode, ISExtISprMckoeValuesBase> ;
    using Odd = ISExtISprOddValues<I2S2Ext::I2Spr, 8, 1, ReadWriteMode, ISExtISprOddValuesBase> ;
    using I2Sdiv = ReadWriteMode<I2S2Ext::I2Spr, 0, 8> ;
  } ;

  template<typename... T> 
  using I2SprPack  = Register<0x40003420, 32, ReadWriteMode, ISExtISprMckoeValuesBase, T...> ;

} ;

#endif //#if !defined(I2S2EXTREGISTERS_HPP)
