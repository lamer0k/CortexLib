/*******************************************************************************
* Filename      : spi0registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(SPI0REGISTERS_HPP)
#define SPI0REGISTERS_HPP

#include "spi0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI0
{
  struct SPI0CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40013000, 16, ReadWriteMode>
  {
    using BDEN = SPI0_CTL0_BDEN_Values<SPI0::CTL0, 15, 1, ReadWriteMode, SPI0CTL0Base> ;
    using BDOEN = SPI0_CTL0_BDOEN_Values<SPI0::CTL0, 14, 1, ReadWriteMode, SPI0CTL0Base> ;
    using CRCEN = SPI0_CTL0_CRCEN_Values<SPI0::CTL0, 13, 1, ReadWriteMode, SPI0CTL0Base> ;
    using CRCNT = SPI0_CTL0_CRCNT_Values<SPI0::CTL0, 12, 1, ReadWriteMode, SPI0CTL0Base> ;
    using FF16 = SPI0_CTL0_FF16_Values<SPI0::CTL0, 11, 1, ReadWriteMode, SPI0CTL0Base> ;
    using RO = SPI0_CTL0_RO_Values<SPI0::CTL0, 10, 1, ReadWriteMode, SPI0CTL0Base> ;
    using SWNSSEN = SPI0_CTL0_SWNSSEN_Values<SPI0::CTL0, 9, 1, ReadWriteMode, SPI0CTL0Base> ;
    using SWNSS = SPI0_CTL0_SWNSS_Values<SPI0::CTL0, 8, 1, ReadWriteMode, SPI0CTL0Base> ;
    using LF = SPI0_CTL0_LF_Values<SPI0::CTL0, 7, 1, ReadWriteMode, SPI0CTL0Base> ;
    using SPIEN = SPI0_CTL0_SPIEN_Values<SPI0::CTL0, 6, 1, ReadWriteMode, SPI0CTL0Base> ;
    using PSC = SPI0_CTL0_PSC_Values<SPI0::CTL0, 3, 3, ReadWriteMode, SPI0CTL0Base> ;
    using MSTMOD = SPI0_CTL0_MSTMOD_Values<SPI0::CTL0, 2, 1, ReadWriteMode, SPI0CTL0Base> ;
    using CKPL = SPI0_CTL0_CKPL_Values<SPI0::CTL0, 1, 1, ReadWriteMode, SPI0CTL0Base> ;
    using CKPH = SPI0_CTL0_CKPH_Values<SPI0::CTL0, 0, 1, ReadWriteMode, SPI0CTL0Base> ;
    using FieldValues = SPI0_CTL0_CKPH_Values<SPI0::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40013000, 16, ReadWriteMode, SPI0CTL0Base, T...> ;

  struct SPI0CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40013004, 16, ReadWriteMode>
  {
    using TBEIE = SPI0_CTL1_TBEIE_Values<SPI0::CTL1, 7, 1, ReadWriteMode, SPI0CTL1Base> ;
    using RBNEIE = SPI0_CTL1_RBNEIE_Values<SPI0::CTL1, 6, 1, ReadWriteMode, SPI0CTL1Base> ;
    using ERRIE = SPI0_CTL1_ERRIE_Values<SPI0::CTL1, 5, 1, ReadWriteMode, SPI0CTL1Base> ;
    using TMOD = SPI0_CTL1_TMOD_Values<SPI0::CTL1, 4, 1, ReadWriteMode, SPI0CTL1Base> ;
    using NSSP = SPI0_CTL1_NSSP_Values<SPI0::CTL1, 3, 1, ReadWriteMode, SPI0CTL1Base> ;
    using NSSDRV = SPI0_CTL1_NSSDRV_Values<SPI0::CTL1, 2, 1, ReadWriteMode, SPI0CTL1Base> ;
    using DMATEN = SPI0_CTL1_DMATEN_Values<SPI0::CTL1, 1, 1, ReadWriteMode, SPI0CTL1Base> ;
    using DMAREN = SPI0_CTL1_DMAREN_Values<SPI0::CTL1, 0, 1, ReadWriteMode, SPI0CTL1Base> ;
    using FieldValues = SPI0_CTL1_DMAREN_Values<SPI0::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40013004, 16, ReadWriteMode, SPI0CTL1Base, T...> ;

  struct SPI0STATBase {} ;

  struct STAT : public RegisterBase<0x40013008, 16, ReadWriteMode>
  {
    using FERR = SPI0_STAT_FERR_Values<SPI0::STAT, 8, 1, ReadMode, SPI0STATBase> ;
    using TRANS = SPI0_STAT_TRANS_Values<SPI0::STAT, 7, 1, ReadMode, SPI0STATBase> ;
    using RXORERR = SPI0_STAT_RXORERR_Values<SPI0::STAT, 6, 1, ReadMode, SPI0STATBase> ;
    using CONFERR = SPI0_STAT_CONFERR_Values<SPI0::STAT, 5, 1, ReadMode, SPI0STATBase> ;
    using CRCERR = SPI0_STAT_CRCERR_Values<SPI0::STAT, 4, 1, ReadWriteMode, SPI0STATBase> ;
    using TXURERR = SPI0_STAT_TXURERR_Values<SPI0::STAT, 3, 1, ReadMode, SPI0STATBase> ;
    using I2SCH = SPI0_STAT_I2SCH_Values<SPI0::STAT, 2, 1, ReadMode, SPI0STATBase> ;
    using TBE = SPI0_STAT_TBE_Values<SPI0::STAT, 1, 1, ReadMode, SPI0STATBase> ;
    using RBNE = SPI0_STAT_RBNE_Values<SPI0::STAT, 0, 1, ReadMode, SPI0STATBase> ;
    using FieldValues = SPI0_STAT_RBNE_Values<SPI0::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40013008, 16, ReadWriteMode, SPI0STATBase, T...> ;

  struct SPI0DATABase {} ;

  struct DATA : public RegisterBase<0x4001300C, 16, ReadWriteMode>
  {
    using SPI_DATA = SPI0_DATA_SPI_DATA_Values<SPI0::DATA, 0, 16, ReadWriteMode, SPI0DATABase> ;
    using FieldValues = SPI0_DATA_SPI_DATA_Values<SPI0::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x4001300C, 16, ReadWriteMode, SPI0DATABase, T...> ;

  struct SPI0CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40013010, 16, ReadWriteMode>
  {
    using CRCPOLYField = SPI0_CRCPOLY_CRCPOLY_Values<SPI0::CRCPOLY, 0, 16, ReadWriteMode, SPI0CRCPOLYBase> ;
    using FieldValues = SPI0_CRCPOLY_CRCPOLY_Values<SPI0::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40013010, 16, ReadWriteMode, SPI0CRCPOLYBase, T...> ;

  struct SPI0RCRCBase {} ;

  struct RCRC : public RegisterBase<0x40013014, 16, ReadMode>
  {
    using RCRCField = SPI0_RCRC_RCRC_Values<SPI0::RCRC, 0, 16, ReadMode, SPI0RCRCBase> ;
    using FieldValues = SPI0_RCRC_RCRC_Values<SPI0::RCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRCPack  = Register<0x40013014, 16, ReadMode, SPI0RCRCBase, T...> ;

  struct SPI0TCRCBase {} ;

  struct TCRC : public RegisterBase<0x40013018, 16, ReadMode>
  {
    using TCRCField = SPI0_TCRC_TCRC_Values<SPI0::TCRC, 0, 16, ReadMode, SPI0TCRCBase> ;
    using FieldValues = SPI0_TCRC_TCRC_Values<SPI0::TCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TCRCPack  = Register<0x40013018, 16, ReadMode, SPI0TCRCBase, T...> ;

  struct SPI0I2SCTLBase {} ;

  struct I2SCTL : public RegisterBase<0x4001301C, 16, ReadWriteMode>
  {
    using I2SSEL = SPI0_I2SCTL_I2SSEL_Values<SPI0::I2SCTL, 11, 1, ReadWriteMode, SPI0I2SCTLBase> ;
    using I2SEN = SPI0_I2SCTL_I2SEN_Values<SPI0::I2SCTL, 10, 1, ReadWriteMode, SPI0I2SCTLBase> ;
    using I2SOPMOD = SPI0_I2SCTL_I2SOPMOD_Values<SPI0::I2SCTL, 8, 2, ReadWriteMode, SPI0I2SCTLBase> ;
    using PCMSMOD = SPI0_I2SCTL_PCMSMOD_Values<SPI0::I2SCTL, 7, 1, ReadWriteMode, SPI0I2SCTLBase> ;
    using I2SSTD = SPI0_I2SCTL_I2SSTD_Values<SPI0::I2SCTL, 4, 2, ReadWriteMode, SPI0I2SCTLBase> ;
    using CKPL = SPI0_I2SCTL_CKPL_Values<SPI0::I2SCTL, 3, 1, ReadWriteMode, SPI0I2SCTLBase> ;
    using DTLEN = SPI0_I2SCTL_DTLEN_Values<SPI0::I2SCTL, 1, 2, ReadWriteMode, SPI0I2SCTLBase> ;
    using CHLEN = SPI0_I2SCTL_CHLEN_Values<SPI0::I2SCTL, 0, 1, ReadWriteMode, SPI0I2SCTLBase> ;
    using FieldValues = SPI0_I2SCTL_CHLEN_Values<SPI0::I2SCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCTLPack  = Register<0x4001301C, 16, ReadWriteMode, SPI0I2SCTLBase, T...> ;

  struct SPI0I2SPSCBase {} ;

  struct I2SPSC : public RegisterBase<0x40013020, 16, ReadWriteMode>
  {
    using MCKOEN = SPI0_I2SPSC_MCKOEN_Values<SPI0::I2SPSC, 9, 1, ReadWriteMode, SPI0I2SPSCBase> ;
    using OF = SPI0_I2SPSC_OF_Values<SPI0::I2SPSC, 8, 1, ReadWriteMode, SPI0I2SPSCBase> ;
    using DIV = SPI0_I2SPSC_DIV_Values<SPI0::I2SPSC, 0, 8, ReadWriteMode, SPI0I2SPSCBase> ;
    using FieldValues = SPI0_I2SPSC_DIV_Values<SPI0::I2SPSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPSCPack  = Register<0x40013020, 16, ReadWriteMode, SPI0I2SPSCBase, T...> ;

} ;

#endif //#if !defined(SPI0REGISTERS_HPP)
