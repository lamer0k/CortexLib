/*******************************************************************************
* Filename      : spi5registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SPI5REGISTERS_HPP)
#define SPI5REGISTERS_HPP

#include "spi5bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Spi5
{
  struct Cr1 : public RegisterBase<0x40015000, 32, ReadWriteMode>
  {
    using Bidimode = SpiCrBidimodeValues<Spi5::Cr1, 15, 1, ReadWriteMode, SpiCrBidimodeValuesBase> ;
    using Bidioe = SpiCrBidioeValues<Spi5::Cr1, 14, 1, ReadWriteMode, SpiCrBidioeValuesBase> ;
    using Crcen = SpiCrCrcenValues<Spi5::Cr1, 13, 1, ReadWriteMode, SpiCrCrcenValuesBase> ;
    using Crcnext = SpiCrCrcnextValues<Spi5::Cr1, 12, 1, ReadWriteMode, SpiCrCrcnextValuesBase> ;
    using Dff = SpiCrDffValues<Spi5::Cr1, 11, 1, ReadWriteMode, SpiCrDffValuesBase> ;
    using Rxonly = SpiCrRxonlyValues<Spi5::Cr1, 10, 1, ReadWriteMode, SpiCrRxonlyValuesBase> ;
    using Ssm = SpiCrSsmValues<Spi5::Cr1, 9, 1, ReadWriteMode, SpiCrSsmValuesBase> ;
    using Ssi = SpiCrSsiValues<Spi5::Cr1, 8, 1, ReadWriteMode, SpiCrSsiValuesBase> ;
    using Lsbfirst = SpiCrLsbfirstValues<Spi5::Cr1, 7, 1, ReadWriteMode, SpiCrLsbfirstValuesBase> ;
    using Spe = SpiCrSpeValues<Spi5::Cr1, 6, 1, ReadWriteMode, SpiCrSpeValuesBase> ;
    using Br = SpiCrBrValues<Spi5::Cr1, 3, 3, ReadWriteMode, SpiCrBrValuesBase> ;
    using Mstr = SpiCrMstrValues<Spi5::Cr1, 2, 1, ReadWriteMode, SpiCrMstrValuesBase> ;
    using Cpol = SpiCrCpolValues<Spi5::Cr1, 1, 1, ReadWriteMode, SpiCrCpolValuesBase> ;
    using Cpha = SpiCrCphaValues<Spi5::Cr1, 0, 1, ReadWriteMode, SpiCrCphaValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40015000, 32, ReadWriteMode, SpiCrBidimodeValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40015004, 32, ReadWriteMode>
  {
    using Txeie = SpiCrTxeieValues<Spi5::Cr2, 7, 1, ReadWriteMode, SpiCrTxeieValuesBase> ;
    using Rxneie = SpiCrRxneieValues<Spi5::Cr2, 6, 1, ReadWriteMode, SpiCrRxneieValuesBase> ;
    using Errie = SpiCrErrieValues<Spi5::Cr2, 5, 1, ReadWriteMode, SpiCrErrieValuesBase> ;
    using Frf = SpiCrFrfValues<Spi5::Cr2, 4, 1, ReadWriteMode, SpiCrFrfValuesBase> ;
    using Ssoe = SpiCrSsoeValues<Spi5::Cr2, 2, 1, ReadWriteMode, SpiCrSsoeValuesBase> ;
    using Txdmaen = SpiCrTxdmaenValues<Spi5::Cr2, 1, 1, ReadWriteMode, SpiCrTxdmaenValuesBase> ;
    using Rxdmaen = SpiCrRxdmaenValues<Spi5::Cr2, 0, 1, ReadWriteMode, SpiCrRxdmaenValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40015004, 32, ReadWriteMode, SpiCrTxeieValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40015008, 32, ReadWriteMode>
  {
    using Tifrfe = SpiSrTifrfeValues<Spi5::Sr, 8, 1, ReadMode, SpiSrTifrfeValuesBase> ;
    using Bsy = SpiSrBsyValues<Spi5::Sr, 7, 1, ReadMode, SpiSrBsyValuesBase> ;
    using Ovr = SpiSrOvrValues<Spi5::Sr, 6, 1, ReadMode, SpiSrOvrValuesBase> ;
    using Modf = SpiSrModfValues<Spi5::Sr, 5, 1, ReadMode, SpiSrModfValuesBase> ;
    using Crcerr = SpiSrCrcerrValues<Spi5::Sr, 4, 1, ReadWriteMode, SpiSrCrcerrValuesBase> ;
    using Udr = SpiSrUdrValues<Spi5::Sr, 3, 1, ReadMode, SpiSrUdrValuesBase> ;
    using Chside = SpiSrChsideValues<Spi5::Sr, 2, 1, ReadMode, SpiSrChsideValuesBase> ;
    using Txe = SpiSrTxeValues<Spi5::Sr, 1, 1, ReadMode, SpiSrTxeValuesBase> ;
    using Rxne = SpiSrRxneValues<Spi5::Sr, 0, 1, ReadMode, SpiSrRxneValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40015008, 32, ReadWriteMode, SpiSrTifrfeValuesBase, T...> ;

  struct Dr : public RegisterBase<0x4001500C, 32, ReadWriteMode>
  {
    using DrField = ReadWriteMode<Spi5::Dr, 0, 16> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x4001500C, 32, ReadWriteMode, SpiDrDrValuesBase, T...> ;

  struct Crcpr : public RegisterBase<0x40015010, 32, ReadWriteMode>
  {
    using Crcpoly = ReadWriteMode<Spi5::Crcpr, 0, 16> ;
  } ;

  template<typename... T> 
  using CrcprPack  = Register<0x40015010, 32, ReadWriteMode, SpiCrcprCrcpolyValuesBase, T...> ;

  struct Rxcrcr : public RegisterBase<0x40015014, 32, ReadMode>
  {
    using Rxcrc = ReadMode<Spi5::Rxcrcr, 0, 16> ;
  } ;

  template<typename... T> 
  using RxcrcrPack  = Register<0x40015014, 32, ReadMode, SpiRxcrcrRxcrcValuesBase, T...> ;

  struct Txcrcr : public RegisterBase<0x40015018, 32, ReadMode>
  {
    using Txcrc = ReadMode<Spi5::Txcrcr, 0, 16> ;
  } ;

  template<typename... T> 
  using TxcrcrPack  = Register<0x40015018, 32, ReadMode, SpiTxcrcrTxcrcValuesBase, T...> ;

  struct I2Scfgr : public RegisterBase<0x4001501C, 32, ReadWriteMode>
  {
    using I2Smod = SpiIScfgrISmodValues<Spi5::I2Scfgr, 11, 1, ReadWriteMode, SpiIScfgrISmodValuesBase> ;
    using I2Se = SpiIScfgrISeValues<Spi5::I2Scfgr, 10, 1, ReadWriteMode, SpiIScfgrISeValuesBase> ;
    using I2Scfg = SpiIScfgrIScfgValues<Spi5::I2Scfgr, 8, 2, ReadWriteMode, SpiIScfgrIScfgValuesBase> ;
    using Pcmsync = SpiIScfgrPcmsyncValues<Spi5::I2Scfgr, 7, 1, ReadWriteMode, SpiIScfgrPcmsyncValuesBase> ;
    using I2Sstd = SpiIScfgrISstdValues<Spi5::I2Scfgr, 4, 2, ReadWriteMode, SpiIScfgrISstdValuesBase> ;
    using Ckpol = SpiIScfgrCkpolValues<Spi5::I2Scfgr, 3, 1, ReadWriteMode, SpiIScfgrCkpolValuesBase> ;
    using Datlen = SpiIScfgrDatlenValues<Spi5::I2Scfgr, 1, 2, ReadWriteMode, SpiIScfgrDatlenValuesBase> ;
    using Chlen = SpiIScfgrChlenValues<Spi5::I2Scfgr, 0, 1, ReadWriteMode, SpiIScfgrChlenValuesBase> ;
  } ;

  template<typename... T> 
  using I2ScfgrPack  = Register<0x4001501C, 32, ReadWriteMode, SpiIScfgrISmodValuesBase, T...> ;

  struct I2Spr : public RegisterBase<0x40015020, 32, ReadWriteMode>
  {
    using Mckoe = SpiISprMckoeValues<Spi5::I2Spr, 9, 1, ReadWriteMode, SpiISprMckoeValuesBase> ;
    using Odd = SpiISprOddValues<Spi5::I2Spr, 8, 1, ReadWriteMode, SpiISprOddValuesBase> ;
    using I2Sdiv = ReadWriteMode<Spi5::I2Spr, 0, 8> ;
  } ;

  template<typename... T> 
  using I2SprPack  = Register<0x40015020, 32, ReadWriteMode, SpiISprMckoeValuesBase, T...> ;

} ;

#endif //#if !defined(SPI5REGISTERS_HPP)
