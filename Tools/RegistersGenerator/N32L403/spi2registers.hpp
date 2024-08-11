/*******************************************************************************
* Filename      : spi2registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "spi2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI2
{
  struct SPI2SPI_CTRL1Base {} ;

  struct SPI_CTRL1 : public RegisterBase<0x40013C00, 32, ReadWriteMode>
  {
    using CLKPHA = SPI2_SPI_CTRL1_CLKPHA_Values<SPI2::SPI_CTRL1, 0, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using CLKPOL = SPI2_SPI_CTRL1_CLKPOL_Values<SPI2::SPI_CTRL1, 1, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using MSEL_ = SPI2_SPI_CTRL1_MSEL__Values<SPI2::SPI_CTRL1, 2, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using BR = SPI2_SPI_CTRL1_BR_Values<SPI2::SPI_CTRL1, 3, 3, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using SPIEN = SPI2_SPI_CTRL1_SPIEN_Values<SPI2::SPI_CTRL1, 6, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using LSBFF_ = SPI2_SPI_CTRL1_LSBFF__Values<SPI2::SPI_CTRL1, 7, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using SSEL = SPI2_SPI_CTRL1_SSEL_Values<SPI2::SPI_CTRL1, 8, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using SSMEN = SPI2_SPI_CTRL1_SSMEN_Values<SPI2::SPI_CTRL1, 9, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using RONLY = SPI2_SPI_CTRL1_RONLY_Values<SPI2::SPI_CTRL1, 10, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using DATFF = SPI2_SPI_CTRL1_DATFF_Values<SPI2::SPI_CTRL1, 11, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using CRCNEXT = SPI2_SPI_CTRL1_CRCNEXT_Values<SPI2::SPI_CTRL1, 12, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using CRCEN = SPI2_SPI_CTRL1_CRCEN_Values<SPI2::SPI_CTRL1, 13, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using BIDIROEN = SPI2_SPI_CTRL1_BIDIROEN_Values<SPI2::SPI_CTRL1, 14, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using BIDIRMODE = SPI2_SPI_CTRL1_BIDIRMODE_Values<SPI2::SPI_CTRL1, 15, 1, ReadWriteMode, SPI2SPI_CTRL1Base> ;
    using FieldValues = SPI2_SPI_CTRL1_BIDIRMODE_Values<SPI2::SPI_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CTRL1Pack  = Register<0x40013C00, 32, ReadWriteMode, SPI2SPI_CTRL1Base, T...> ;

  struct SPI2SPI_CTRL2Base {} ;

  struct SPI_CTRL2 : public RegisterBase<0x40013C04, 32, ReadWriteMode>
  {
    using RDMAEN = SPI2_SPI_CTRL2_RDMAEN_Values<SPI2::SPI_CTRL2, 0, 1, ReadWriteMode, SPI2SPI_CTRL2Base> ;
    using TDMAEN = SPI2_SPI_CTRL2_TDMAEN_Values<SPI2::SPI_CTRL2, 1, 1, ReadWriteMode, SPI2SPI_CTRL2Base> ;
    using SSOEN_ = SPI2_SPI_CTRL2_SSOEN__Values<SPI2::SPI_CTRL2, 2, 1, ReadWriteMode, SPI2SPI_CTRL2Base> ;
    using ERRINTEN__ = SPI2_SPI_CTRL2_ERRINTEN___Values<SPI2::SPI_CTRL2, 5, 1, ReadWriteMode, SPI2SPI_CTRL2Base> ;
    using RNEINTEN = SPI2_SPI_CTRL2_RNEINTEN_Values<SPI2::SPI_CTRL2, 6, 1, ReadWriteMode, SPI2SPI_CTRL2Base> ;
    using TEINTEN = SPI2_SPI_CTRL2_TEINTEN_Values<SPI2::SPI_CTRL2, 7, 1, ReadWriteMode, SPI2SPI_CTRL2Base> ;
    using FieldValues = SPI2_SPI_CTRL2_TEINTEN_Values<SPI2::SPI_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CTRL2Pack  = Register<0x40013C04, 32, ReadWriteMode, SPI2SPI_CTRL2Base, T...> ;

  struct SPI2SPI_STSBase {} ;

  struct SPI_STS : public RegisterBase<0x40013C08, 32, ReadWriteMode>
  {
    using RNE = SPI2_SPI_STS_RNE_Values<SPI2::SPI_STS, 0, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using TE = SPI2_SPI_STS_TE_Values<SPI2::SPI_STS, 1, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using CHSIDE = SPI2_SPI_STS_CHSIDE_Values<SPI2::SPI_STS, 2, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using UNDER = SPI2_SPI_STS_UNDER_Values<SPI2::SPI_STS, 3, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using CRCERR = SPI2_SPI_STS_CRCERR_Values<SPI2::SPI_STS, 4, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using MODERR = SPI2_SPI_STS_MODERR_Values<SPI2::SPI_STS, 5, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using OVER = SPI2_SPI_STS_OVER_Values<SPI2::SPI_STS, 6, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using BUSY_ = SPI2_SPI_STS_BUSY__Values<SPI2::SPI_STS, 7, 1, ReadWriteMode, SPI2SPI_STSBase> ;
    using FieldValues = SPI2_SPI_STS_BUSY__Values<SPI2::SPI_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_STSPack  = Register<0x40013C08, 32, ReadWriteMode, SPI2SPI_STSBase, T...> ;

  struct SPI2SPI_DATBase {} ;

  struct SPI_DAT : public RegisterBase<0x40013C0C, 32, ReadWriteMode>
  {
    using DAT = SPI2_SPI_DAT_DAT_Values<SPI2::SPI_DAT, 0, 16, ReadWriteMode, SPI2SPI_DATBase> ;
    using FieldValues = SPI2_SPI_DAT_DAT_Values<SPI2::SPI_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_DATPack  = Register<0x40013C0C, 32, ReadWriteMode, SPI2SPI_DATBase, T...> ;

  struct SPI2SPI_CRCPOLYBase {} ;

  struct SPI_CRCPOLY : public RegisterBase<0x40013C10, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI2_SPI_CRCPOLY_CRCPOLY_Values<SPI2::SPI_CRCPOLY, 0, 16, ReadWriteMode, SPI2SPI_CRCPOLYBase> ;
    using FieldValues = SPI2_SPI_CRCPOLY_CRCPOLY_Values<SPI2::SPI_CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CRCPOLYPack  = Register<0x40013C10, 32, ReadWriteMode, SPI2SPI_CRCPOLYBase, T...> ;

  struct SPI2SPI_CRCRDATBase {} ;

  struct SPI_CRCRDAT : public RegisterBase<0x40013C14, 32, ReadWriteMode>
  {
    using CRCRDAT = SPI2_SPI_CRCRDAT_CRCRDAT_Values<SPI2::SPI_CRCRDAT, 0, 16, ReadWriteMode, SPI2SPI_CRCRDATBase> ;
    using FieldValues = SPI2_SPI_CRCRDAT_CRCRDAT_Values<SPI2::SPI_CRCRDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CRCRDATPack  = Register<0x40013C14, 32, ReadWriteMode, SPI2SPI_CRCRDATBase, T...> ;

  struct SPI2SPI_CRCTDATBase {} ;

  struct SPI_CRCTDAT : public RegisterBase<0x40013C18, 32, ReadWriteMode>
  {
    using CRCTDAT = SPI2_SPI_CRCTDAT_CRCTDAT_Values<SPI2::SPI_CRCTDAT, 0, 16, ReadWriteMode, SPI2SPI_CRCTDATBase> ;
    using FieldValues = SPI2_SPI_CRCTDAT_CRCTDAT_Values<SPI2::SPI_CRCTDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_CRCTDATPack  = Register<0x40013C18, 32, ReadWriteMode, SPI2SPI_CRCTDATBase, T...> ;

  struct SPI2SPI_I2SCFGBase {} ;

  struct SPI_I2SCFG : public RegisterBase<0x40013C1C, 32, ReadWriteMode>
  {
    using CHBITS = SPI2_SPI_I2SCFG_CHBITS_Values<SPI2::SPI_I2SCFG, 0, 1, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using TDATLEN = SPI2_SPI_I2SCFG_TDATLEN_Values<SPI2::SPI_I2SCFG, 1, 2, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using CLKPOL = SPI2_SPI_I2SCFG_CLKPOL_Values<SPI2::SPI_I2SCFG, 3, 1, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using STDSEL = SPI2_SPI_I2SCFG_STDSEL_Values<SPI2::SPI_I2SCFG, 4, 2, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using PCMFSYNC = SPI2_SPI_I2SCFG_PCMFSYNC_Values<SPI2::SPI_I2SCFG, 7, 1, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using MODCFG = SPI2_SPI_I2SCFG_MODCFG_Values<SPI2::SPI_I2SCFG, 8, 2, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using I2SEN = SPI2_SPI_I2SCFG_I2SEN_Values<SPI2::SPI_I2SCFG, 10, 1, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using MODSEL = SPI2_SPI_I2SCFG_MODSEL_Values<SPI2::SPI_I2SCFG, 11, 1, ReadWriteMode, SPI2SPI_I2SCFGBase> ;
    using FieldValues = SPI2_SPI_I2SCFG_MODSEL_Values<SPI2::SPI_I2SCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_I2SCFGPack  = Register<0x40013C1C, 32, ReadWriteMode, SPI2SPI_I2SCFGBase, T...> ;

  struct SPI2SPI_I2SPREDIVBase {} ;

  struct SPI_I2SPREDIV : public RegisterBase<0x40013C20, 32, ReadWriteMode>
  {
    using LDIV = SPI2_SPI_I2SPREDIV_LDIV_Values<SPI2::SPI_I2SPREDIV, 0, 8, ReadWriteMode, SPI2SPI_I2SPREDIVBase> ;
    using ODD_EVEN_ = SPI2_SPI_I2SPREDIV_ODD_EVEN__Values<SPI2::SPI_I2SPREDIV, 8, 1, ReadWriteMode, SPI2SPI_I2SPREDIVBase> ;
    using MCLKOEN = SPI2_SPI_I2SPREDIV_MCLKOEN_Values<SPI2::SPI_I2SPREDIV, 9, 1, ReadWriteMode, SPI2SPI_I2SPREDIVBase> ;
    using FieldValues = SPI2_SPI_I2SPREDIV_MCLKOEN_Values<SPI2::SPI_I2SPREDIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SPI_I2SPREDIVPack  = Register<0x40013C20, 32, ReadWriteMode, SPI2SPI_I2SPREDIVBase, T...> ;

} ;

