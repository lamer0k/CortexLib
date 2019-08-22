/*******************************************************************************
* Filename      : spi4registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SPI4REGISTERS_HPP)
#define SPI4REGISTERS_HPP

#include "spi4bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Spi4
{
  struct Cr1 : public RegisterBase<0x40013400, 32, ReadWriteMode>
  {
    using Bidimode = SpiCrBidimodeValues<Spi4::Cr1, 15, 1, ReadWriteMode, SpiCrBidimodeValuesBase> ;
    using Bidioe = SpiCrBidioeValues<Spi4::Cr1, 14, 1, ReadWriteMode, SpiCrBidioeValuesBase> ;
    using Crcen = SpiCrCrcenValues<Spi4::Cr1, 13, 1, ReadWriteMode, SpiCrCrcenValuesBase> ;
    using Crcnext = SpiCrCrcnextValues<Spi4::Cr1, 12, 1, ReadWriteMode, SpiCrCrcnextValuesBase> ;
    using Dff = SpiCrDffValues<Spi4::Cr1, 11, 1, ReadWriteMode, SpiCrDffValuesBase> ;
    using Rxonly = SpiCrRxonlyValues<Spi4::Cr1, 10, 1, ReadWriteMode, SpiCrRxonlyValuesBase> ;
    using Ssm = SpiCrSsmValues<Spi4::Cr1, 9, 1, ReadWriteMode, SpiCrSsmValuesBase> ;
    using Ssi = SpiCrSsiValues<Spi4::Cr1, 8, 1, ReadWriteMode, SpiCrSsiValuesBase> ;
    using Lsbfirst = SpiCrLsbfirstValues<Spi4::Cr1, 7, 1, ReadWriteMode, SpiCrLsbfirstValuesBase> ;
    using Spe = SpiCrSpeValues<Spi4::Cr1, 6, 1, ReadWriteMode, SpiCrSpeValuesBase> ;
    using Br = SpiCrBrValues<Spi4::Cr1, 3, 3, ReadWriteMode, SpiCrBrValuesBase> ;
    using Mstr = SpiCrMstrValues<Spi4::Cr1, 2, 1, ReadWriteMode, SpiCrMstrValuesBase> ;
    using Cpol = SpiCrCpolValues<Spi4::Cr1, 1, 1, ReadWriteMode, SpiCrCpolValuesBase> ;
    using Cpha = SpiCrCphaValues<Spi4::Cr1, 0, 1, ReadWriteMode, SpiCrCphaValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40013400, 32, ReadWriteMode, SpiCrBidimodeValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40013404, 32, ReadWriteMode>
  {
    using Txeie = SpiCrTxeieValues<Spi4::Cr2, 7, 1, ReadWriteMode, SpiCrTxeieValuesBase> ;
    using Rxneie = SpiCrRxneieValues<Spi4::Cr2, 6, 1, ReadWriteMode, SpiCrRxneieValuesBase> ;
    using Errie = SpiCrErrieValues<Spi4::Cr2, 5, 1, ReadWriteMode, SpiCrErrieValuesBase> ;
    using Frf = SpiCrFrfValues<Spi4::Cr2, 4, 1, ReadWriteMode, SpiCrFrfValuesBase> ;
    using Ssoe = SpiCrSsoeValues<Spi4::Cr2, 2, 1, ReadWriteMode, SpiCrSsoeValuesBase> ;
    using Txdmaen = SpiCrTxdmaenValues<Spi4::Cr2, 1, 1, ReadWriteMode, SpiCrTxdmaenValuesBase> ;
    using Rxdmaen = SpiCrRxdmaenValues<Spi4::Cr2, 0, 1, ReadWriteMode, SpiCrRxdmaenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40013404, 32, ReadWriteMode, SpiCrTxeieValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40013408, 32, ReadWriteMode>
  {
    using Tifrfe = SpiSrTifrfeValues<Spi4::Sr, 8, 1, ReadMode, SpiSrTifrfeValuesBase> ;
    using Bsy = SpiSrBsyValues<Spi4::Sr, 7, 1, ReadMode, SpiSrBsyValuesBase> ;
    using Ovr = SpiSrOvrValues<Spi4::Sr, 6, 1, ReadMode, SpiSrOvrValuesBase> ;
    using Modf = SpiSrModfValues<Spi4::Sr, 5, 1, ReadMode, SpiSrModfValuesBase> ;
    using Crcerr = SpiSrCrcerrValues<Spi4::Sr, 4, 1, ReadWriteMode, SpiSrCrcerrValuesBase> ;
    using Udr = SpiSrUdrValues<Spi4::Sr, 3, 1, ReadMode, SpiSrUdrValuesBase> ;
    using Chside = SpiSrChsideValues<Spi4::Sr, 2, 1, ReadMode, SpiSrChsideValuesBase> ;
    using Txe = SpiSrTxeValues<Spi4::Sr, 1, 1, ReadMode, SpiSrTxeValuesBase> ;
    using Rxne = SpiSrRxneValues<Spi4::Sr, 0, 1, ReadMode, SpiSrRxneValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40013408, 32, ReadWriteMode, SpiSrTifrfeValuesBase, T...> ;

  struct Dr : public RegisterBase<0x4001340C, 32, ReadWriteMode>
  {
    using DrField = ReadWriteMode<Spi4::Dr, 0, 16> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x4001340C, 32, ReadWriteMode, SpiDrDrValuesBase, T...> ;

  struct Crcpr : public RegisterBase<0x40013410, 32, ReadWriteMode>
  {
    using Crcpoly = ReadWriteMode<Spi4::Crcpr, 0, 16> ;
  } ;

  template<typename... T> 
  using CrcprPack  = Register<0x40013410, 32, ReadWriteMode, SpiCrcprCrcpolyValuesBase, T...> ;

  struct Rxcrcr : public RegisterBase<0x40013414, 32, ReadMode>
  {
    using Rxcrc = ReadMode<Spi4::Rxcrcr, 0, 16> ;
  } ;

  template<typename... T> 
  using RxcrcrPack  = Register<0x40013414, 32, ReadMode, SpiRxcrcrRxcrcValuesBase, T...> ;

  struct Txcrcr : public RegisterBase<0x40013418, 32, ReadMode>
  {
    using Txcrc = ReadMode<Spi4::Txcrcr, 0, 16> ;
  } ;

  template<typename... T> 
  using TxcrcrPack  = Register<0x40013418, 32, ReadMode, SpiTxcrcrTxcrcValuesBase, T...> ;

  struct I2Scfgr : public RegisterBase<0x4001341C, 32, ReadWriteMode>
  {
    using I2Smod = SpiIScfgrISmodValues<Spi4::I2Scfgr, 11, 1, ReadWriteMode, SpiIScfgrISmodValuesBase> ;
    using I2Se = SpiIScfgrISeValues<Spi4::I2Scfgr, 10, 1, ReadWriteMode, SpiIScfgrISeValuesBase> ;
    using I2Scfg = SpiIScfgrIScfgValues<Spi4::I2Scfgr, 8, 2, ReadWriteMode, SpiIScfgrIScfgValuesBase> ;
    using Pcmsync = SpiIScfgrPcmsyncValues<Spi4::I2Scfgr, 7, 1, ReadWriteMode, SpiIScfgrPcmsyncValuesBase> ;
    using I2Sstd = SpiIScfgrISstdValues<Spi4::I2Scfgr, 4, 2, ReadWriteMode, SpiIScfgrISstdValuesBase> ;
    using Ckpol = SpiIScfgrCkpolValues<Spi4::I2Scfgr, 3, 1, ReadWriteMode, SpiIScfgrCkpolValuesBase> ;
    using Datlen = SpiIScfgrDatlenValues<Spi4::I2Scfgr, 1, 2, ReadWriteMode, SpiIScfgrDatlenValuesBase> ;
    using Chlen = SpiIScfgrChlenValues<Spi4::I2Scfgr, 0, 1, ReadWriteMode, SpiIScfgrChlenValuesBase> ;
  } ;

  template<typename... T> 
  using I2ScfgrPack  = Register<0x4001341C, 32, ReadWriteMode, SpiIScfgrISmodValuesBase, T...> ;

  struct I2Spr : public RegisterBase<0x40013420, 32, ReadWriteMode>
  {
    using Mckoe = SpiISprMckoeValues<Spi4::I2Spr, 9, 1, ReadWriteMode, SpiISprMckoeValuesBase> ;
    using Odd = SpiISprOddValues<Spi4::I2Spr, 8, 1, ReadWriteMode, SpiISprOddValuesBase> ;
    using I2Sdiv = ReadWriteMode<Spi4::I2Spr, 0, 8> ;
  } ;

  template<typename... T> 
  using I2SprPack  = Register<0x40013420, 32, ReadWriteMode, SpiISprMckoeValuesBase, T...> ;

} ;

#endif //#if !defined(SPI4REGISTERS_HPP)
