/*******************************************************************************
* Filename      : spi1registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "spi1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI1
{
  struct SPI1SPI_CTRL1Base {} ;

  struct SPI_CTRL1 : public RegisterBase<0x40013000, 32, ReadWriteMode>
  {
    using CLKPHA = SPI1_SPI_CTRL1_CLKPHA_Values<SPI1::SPI_CTRL1, 0, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using CLKPOL = SPI1_SPI_CTRL1_CLKPOL_Values<SPI1::SPI_CTRL1, 1, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using MSEL_ = SPI1_SPI_CTRL1_MSEL__Values<SPI1::SPI_CTRL1, 2, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using BR = SPI1_SPI_CTRL1_BR_Values<SPI1::SPI_CTRL1, 3, 3, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using SPIEN = SPI1_SPI_CTRL1_SPIEN_Values<SPI1::SPI_CTRL1, 6, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using LSBFF_ = SPI1_SPI_CTRL1_LSBFF__Values<SPI1::SPI_CTRL1, 7, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using SSEL = SPI1_SPI_CTRL1_SSEL_Values<SPI1::SPI_CTRL1, 8, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using SSMEN = SPI1_SPI_CTRL1_SSMEN_Values<SPI1::SPI_CTRL1, 9, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using RONLY = SPI1_SPI_CTRL1_RONLY_Values<SPI1::SPI_CTRL1, 10, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using DATFF = SPI1_SPI_CTRL1_DATFF_Values<SPI1::SPI_CTRL1, 11, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using CRCNEXT = SPI1_SPI_CTRL1_CRCNEXT_Values<SPI1::SPI_CTRL1, 12, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using CRCEN = SPI1_SPI_CTRL1_CRCEN_Values<SPI1::SPI_CTRL1, 13, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using BIDIROEN = SPI1_SPI_CTRL1_BIDIROEN_Values<SPI1::SPI_CTRL1, 14, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using BIDIRMODE = SPI1_SPI_CTRL1_BIDIRMODE_Values<SPI1::SPI_CTRL1, 15, 1, ReadWriteMode, SPI1SPI_CTRL1Base> ;
    using FieldValues = SPI1_SPI_CTRL1_BIDIRMODE_Values<SPI1::SPI_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CTRL1Pack  = Register<0x40013000, 32, ReadWriteMode, SPI1SPI_CTRL1Base, T...> ;

  struct SPI1SPI_CTRL2Base {} ;

  struct SPI_CTRL2 : public RegisterBase<0x40013004, 32, ReadWriteMode>
  {
    using RDMAEN = SPI1_SPI_CTRL2_RDMAEN_Values<SPI1::SPI_CTRL2, 0, 1, ReadWriteMode, SPI1SPI_CTRL2Base> ;
    using TDMAEN = SPI1_SPI_CTRL2_TDMAEN_Values<SPI1::SPI_CTRL2, 1, 1, ReadWriteMode, SPI1SPI_CTRL2Base> ;
    using SSOEN_ = SPI1_SPI_CTRL2_SSOEN__Values<SPI1::SPI_CTRL2, 2, 1, ReadWriteMode, SPI1SPI_CTRL2Base> ;
    using ERRINTEN__ = SPI1_SPI_CTRL2_ERRINTEN___Values<SPI1::SPI_CTRL2, 5, 1, ReadWriteMode, SPI1SPI_CTRL2Base> ;
    using RNEINTEN = SPI1_SPI_CTRL2_RNEINTEN_Values<SPI1::SPI_CTRL2, 6, 1, ReadWriteMode, SPI1SPI_CTRL2Base> ;
    using TEINTEN = SPI1_SPI_CTRL2_TEINTEN_Values<SPI1::SPI_CTRL2, 7, 1, ReadWriteMode, SPI1SPI_CTRL2Base> ;
    using FieldValues = SPI1_SPI_CTRL2_TEINTEN_Values<SPI1::SPI_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CTRL2Pack  = Register<0x40013004, 32, ReadWriteMode, SPI1SPI_CTRL2Base, T...> ;

  struct SPI1SPI_STSBase {} ;

  struct SPI_STS : public RegisterBase<0x40013008, 32, ReadWriteMode>
  {
    using RNE = SPI1_SPI_STS_RNE_Values<SPI1::SPI_STS, 0, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using TE = SPI1_SPI_STS_TE_Values<SPI1::SPI_STS, 1, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using CHSIDE = SPI1_SPI_STS_CHSIDE_Values<SPI1::SPI_STS, 2, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using UNDER = SPI1_SPI_STS_UNDER_Values<SPI1::SPI_STS, 3, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using CRCERR = SPI1_SPI_STS_CRCERR_Values<SPI1::SPI_STS, 4, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using MODERR = SPI1_SPI_STS_MODERR_Values<SPI1::SPI_STS, 5, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using OVER = SPI1_SPI_STS_OVER_Values<SPI1::SPI_STS, 6, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using BUSY_ = SPI1_SPI_STS_BUSY__Values<SPI1::SPI_STS, 7, 1, ReadWriteMode, SPI1SPI_STSBase> ;
    using FieldValues = SPI1_SPI_STS_BUSY__Values<SPI1::SPI_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_STSPack  = Register<0x40013008, 32, ReadWriteMode, SPI1SPI_STSBase, T...> ;

  struct SPI1SPI_DATBase {} ;

  struct SPI_DAT : public RegisterBase<0x4001300C, 32, ReadWriteMode>
  {
    using DAT = SPI1_SPI_DAT_DAT_Values<SPI1::SPI_DAT, 0, 16, ReadWriteMode, SPI1SPI_DATBase> ;
    using FieldValues = SPI1_SPI_DAT_DAT_Values<SPI1::SPI_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_DATPack  = Register<0x4001300C, 32, ReadWriteMode, SPI1SPI_DATBase, T...> ;

  struct SPI1SPI_CRCPOLYBase {} ;

  struct SPI_CRCPOLY : public RegisterBase<0x40013010, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI1_SPI_CRCPOLY_CRCPOLY_Values<SPI1::SPI_CRCPOLY, 0, 16, ReadWriteMode, SPI1SPI_CRCPOLYBase> ;
    using FieldValues = SPI1_SPI_CRCPOLY_CRCPOLY_Values<SPI1::SPI_CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CRCPOLYPack  = Register<0x40013010, 32, ReadWriteMode, SPI1SPI_CRCPOLYBase, T...> ;

  struct SPI1SPI_CRCRDATBase {} ;

  struct SPI_CRCRDAT : public RegisterBase<0x40013014, 32, ReadWriteMode>
  {
    using CRCRDAT = SPI1_SPI_CRCRDAT_CRCRDAT_Values<SPI1::SPI_CRCRDAT, 0, 16, ReadWriteMode, SPI1SPI_CRCRDATBase> ;
    using FieldValues = SPI1_SPI_CRCRDAT_CRCRDAT_Values<SPI1::SPI_CRCRDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CRCRDATPack  = Register<0x40013014, 32, ReadWriteMode, SPI1SPI_CRCRDATBase, T...> ;

  struct SPI1SPI_CRCTDATBase {} ;

  struct SPI_CRCTDAT : public RegisterBase<0x40013018, 32, ReadWriteMode>
  {
    using CRCTDAT = SPI1_SPI_CRCTDAT_CRCTDAT_Values<SPI1::SPI_CRCTDAT, 0, 16, ReadWriteMode, SPI1SPI_CRCTDATBase> ;
    using FieldValues = SPI1_SPI_CRCTDAT_CRCTDAT_Values<SPI1::SPI_CRCTDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CRCTDATPack  = Register<0x40013018, 32, ReadWriteMode, SPI1SPI_CRCTDATBase, T...> ;

  struct SPI1SPI_I2SCFGBase {} ;

  struct SPI_I2SCFG : public RegisterBase<0x4001301C, 32, ReadWriteMode>
  {
    using CHBITS = SPI1_SPI_I2SCFG_CHBITS_Values<SPI1::SPI_I2SCFG, 0, 1, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using TDATLEN = SPI1_SPI_I2SCFG_TDATLEN_Values<SPI1::SPI_I2SCFG, 1, 2, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using CLKPOL = SPI1_SPI_I2SCFG_CLKPOL_Values<SPI1::SPI_I2SCFG, 3, 1, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using STDSEL = SPI1_SPI_I2SCFG_STDSEL_Values<SPI1::SPI_I2SCFG, 4, 2, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using PCMFSYNC = SPI1_SPI_I2SCFG_PCMFSYNC_Values<SPI1::SPI_I2SCFG, 7, 1, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using MODCFG = SPI1_SPI_I2SCFG_MODCFG_Values<SPI1::SPI_I2SCFG, 8, 2, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using I2SEN = SPI1_SPI_I2SCFG_I2SEN_Values<SPI1::SPI_I2SCFG, 10, 1, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using MODSEL = SPI1_SPI_I2SCFG_MODSEL_Values<SPI1::SPI_I2SCFG, 11, 1, ReadWriteMode, SPI1SPI_I2SCFGBase> ;
    using FieldValues = SPI1_SPI_I2SCFG_MODSEL_Values<SPI1::SPI_I2SCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_I2SCFGPack  = Register<0x4001301C, 32, ReadWriteMode, SPI1SPI_I2SCFGBase, T...> ;

  struct SPI1SPI_I2SPREDIVBase {} ;

  struct SPI_I2SPREDIV : public RegisterBase<0x40013020, 32, ReadWriteMode>
  {
    using LDIV = SPI1_SPI_I2SPREDIV_LDIV_Values<SPI1::SPI_I2SPREDIV, 0, 8, ReadWriteMode, SPI1SPI_I2SPREDIVBase> ;
    using ODD_EVEN_ = SPI1_SPI_I2SPREDIV_ODD_EVEN__Values<SPI1::SPI_I2SPREDIV, 8, 1, ReadWriteMode, SPI1SPI_I2SPREDIVBase> ;
    using MCLKOEN = SPI1_SPI_I2SPREDIV_MCLKOEN_Values<SPI1::SPI_I2SPREDIV, 9, 1, ReadWriteMode, SPI1SPI_I2SPREDIVBase> ;
    using FieldValues = SPI1_SPI_I2SPREDIV_MCLKOEN_Values<SPI1::SPI_I2SPREDIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_I2SPREDIVPack  = Register<0x40013020, 32, ReadWriteMode, SPI1SPI_I2SPREDIVBase, T...> ;

} ;

