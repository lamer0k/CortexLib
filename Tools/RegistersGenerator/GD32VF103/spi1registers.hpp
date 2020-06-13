/*******************************************************************************
* Filename      : spi1registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(SPI1REGISTERS_HPP)
#define SPI1REGISTERS_HPP

#include "spi1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI1
{
  struct SPI1CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40003800, 16, ReadWriteMode>
  {
    using BDEN = SPI1_CTL0_BDEN_Values<SPI1::CTL0, 15, 1, ReadWriteMode, SPI1CTL0Base> ;
    using BDOEN = SPI1_CTL0_BDOEN_Values<SPI1::CTL0, 14, 1, ReadWriteMode, SPI1CTL0Base> ;
    using CRCEN = SPI1_CTL0_CRCEN_Values<SPI1::CTL0, 13, 1, ReadWriteMode, SPI1CTL0Base> ;
    using CRCNT = SPI1_CTL0_CRCNT_Values<SPI1::CTL0, 12, 1, ReadWriteMode, SPI1CTL0Base> ;
    using FF16 = SPI1_CTL0_FF16_Values<SPI1::CTL0, 11, 1, ReadWriteMode, SPI1CTL0Base> ;
    using RO = SPI1_CTL0_RO_Values<SPI1::CTL0, 10, 1, ReadWriteMode, SPI1CTL0Base> ;
    using SWNSSEN = SPI1_CTL0_SWNSSEN_Values<SPI1::CTL0, 9, 1, ReadWriteMode, SPI1CTL0Base> ;
    using SWNSS = SPI1_CTL0_SWNSS_Values<SPI1::CTL0, 8, 1, ReadWriteMode, SPI1CTL0Base> ;
    using LF = SPI1_CTL0_LF_Values<SPI1::CTL0, 7, 1, ReadWriteMode, SPI1CTL0Base> ;
    using SPIEN = SPI1_CTL0_SPIEN_Values<SPI1::CTL0, 6, 1, ReadWriteMode, SPI1CTL0Base> ;
    using PSC = SPI1_CTL0_PSC_Values<SPI1::CTL0, 3, 3, ReadWriteMode, SPI1CTL0Base> ;
    using MSTMOD = SPI1_CTL0_MSTMOD_Values<SPI1::CTL0, 2, 1, ReadWriteMode, SPI1CTL0Base> ;
    using CKPL = SPI1_CTL0_CKPL_Values<SPI1::CTL0, 1, 1, ReadWriteMode, SPI1CTL0Base> ;
    using CKPH = SPI1_CTL0_CKPH_Values<SPI1::CTL0, 0, 1, ReadWriteMode, SPI1CTL0Base> ;
    using FieldValues = SPI1_CTL0_CKPH_Values<SPI1::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40003800, 16, ReadWriteMode, SPI1CTL0Base, T...> ;

  struct SPI1CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40003804, 16, ReadWriteMode>
  {
    using TBEIE = SPI1_CTL1_TBEIE_Values<SPI1::CTL1, 7, 1, ReadWriteMode, SPI1CTL1Base> ;
    using RBNEIE = SPI1_CTL1_RBNEIE_Values<SPI1::CTL1, 6, 1, ReadWriteMode, SPI1CTL1Base> ;
    using ERRIE = SPI1_CTL1_ERRIE_Values<SPI1::CTL1, 5, 1, ReadWriteMode, SPI1CTL1Base> ;
    using TMOD = SPI1_CTL1_TMOD_Values<SPI1::CTL1, 4, 1, ReadWriteMode, SPI1CTL1Base> ;
    using NSSP = SPI1_CTL1_NSSP_Values<SPI1::CTL1, 3, 1, ReadWriteMode, SPI1CTL1Base> ;
    using NSSDRV = SPI1_CTL1_NSSDRV_Values<SPI1::CTL1, 2, 1, ReadWriteMode, SPI1CTL1Base> ;
    using DMATEN = SPI1_CTL1_DMATEN_Values<SPI1::CTL1, 1, 1, ReadWriteMode, SPI1CTL1Base> ;
    using DMAREN = SPI1_CTL1_DMAREN_Values<SPI1::CTL1, 0, 1, ReadWriteMode, SPI1CTL1Base> ;
    using FieldValues = SPI1_CTL1_DMAREN_Values<SPI1::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40003804, 16, ReadWriteMode, SPI1CTL1Base, T...> ;

  struct SPI1STATBase {} ;

  struct STAT : public RegisterBase<0x40003808, 16, ReadWriteMode>
  {
    using FERR = SPI1_STAT_FERR_Values<SPI1::STAT, 8, 1, ReadMode, SPI1STATBase> ;
    using TRANS = SPI1_STAT_TRANS_Values<SPI1::STAT, 7, 1, ReadMode, SPI1STATBase> ;
    using RXORERR = SPI1_STAT_RXORERR_Values<SPI1::STAT, 6, 1, ReadMode, SPI1STATBase> ;
    using CONFERR = SPI1_STAT_CONFERR_Values<SPI1::STAT, 5, 1, ReadMode, SPI1STATBase> ;
    using CRCERR = SPI1_STAT_CRCERR_Values<SPI1::STAT, 4, 1, ReadWriteMode, SPI1STATBase> ;
    using TXURERR = SPI1_STAT_TXURERR_Values<SPI1::STAT, 3, 1, ReadMode, SPI1STATBase> ;
    using I2SCH = SPI1_STAT_I2SCH_Values<SPI1::STAT, 2, 1, ReadMode, SPI1STATBase> ;
    using TBE = SPI1_STAT_TBE_Values<SPI1::STAT, 1, 1, ReadMode, SPI1STATBase> ;
    using RBNE = SPI1_STAT_RBNE_Values<SPI1::STAT, 0, 1, ReadMode, SPI1STATBase> ;
    using FieldValues = SPI1_STAT_RBNE_Values<SPI1::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40003808, 16, ReadWriteMode, SPI1STATBase, T...> ;

  struct SPI1DATABase {} ;

  struct DATA : public RegisterBase<0x4000380C, 16, ReadWriteMode>
  {
    using SPI_DATA = SPI1_DATA_SPI_DATA_Values<SPI1::DATA, 0, 16, ReadWriteMode, SPI1DATABase> ;
    using FieldValues = SPI1_DATA_SPI_DATA_Values<SPI1::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x4000380C, 16, ReadWriteMode, SPI1DATABase, T...> ;

  struct SPI1CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40003810, 16, ReadWriteMode>
  {
    using CRCPOLYField = SPI1_CRCPOLY_CRCPOLY_Values<SPI1::CRCPOLY, 0, 16, ReadWriteMode, SPI1CRCPOLYBase> ;
    using FieldValues = SPI1_CRCPOLY_CRCPOLY_Values<SPI1::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40003810, 16, ReadWriteMode, SPI1CRCPOLYBase, T...> ;

  struct SPI1RCRCBase {} ;

  struct RCRC : public RegisterBase<0x40003814, 16, ReadMode>
  {
    using RCRCField = SPI1_RCRC_RCRC_Values<SPI1::RCRC, 0, 16, ReadMode, SPI1RCRCBase> ;
    using FieldValues = SPI1_RCRC_RCRC_Values<SPI1::RCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRCPack  = Register<0x40003814, 16, ReadMode, SPI1RCRCBase, T...> ;

  struct SPI1TCRCBase {} ;

  struct TCRC : public RegisterBase<0x40003818, 16, ReadMode>
  {
    using TCRCField = SPI1_TCRC_TCRC_Values<SPI1::TCRC, 0, 16, ReadMode, SPI1TCRCBase> ;
    using FieldValues = SPI1_TCRC_TCRC_Values<SPI1::TCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TCRCPack  = Register<0x40003818, 16, ReadMode, SPI1TCRCBase, T...> ;

  struct SPI1I2SCTLBase {} ;

  struct I2SCTL : public RegisterBase<0x4000381C, 16, ReadWriteMode>
  {
    using I2SSEL = SPI1_I2SCTL_I2SSEL_Values<SPI1::I2SCTL, 11, 1, ReadWriteMode, SPI1I2SCTLBase> ;
    using I2SEN = SPI1_I2SCTL_I2SEN_Values<SPI1::I2SCTL, 10, 1, ReadWriteMode, SPI1I2SCTLBase> ;
    using I2SOPMOD = SPI1_I2SCTL_I2SOPMOD_Values<SPI1::I2SCTL, 8, 2, ReadWriteMode, SPI1I2SCTLBase> ;
    using PCMSMOD = SPI1_I2SCTL_PCMSMOD_Values<SPI1::I2SCTL, 7, 1, ReadWriteMode, SPI1I2SCTLBase> ;
    using I2SSTD = SPI1_I2SCTL_I2SSTD_Values<SPI1::I2SCTL, 4, 2, ReadWriteMode, SPI1I2SCTLBase> ;
    using CKPL = SPI1_I2SCTL_CKPL_Values<SPI1::I2SCTL, 3, 1, ReadWriteMode, SPI1I2SCTLBase> ;
    using DTLEN = SPI1_I2SCTL_DTLEN_Values<SPI1::I2SCTL, 1, 2, ReadWriteMode, SPI1I2SCTLBase> ;
    using CHLEN = SPI1_I2SCTL_CHLEN_Values<SPI1::I2SCTL, 0, 1, ReadWriteMode, SPI1I2SCTLBase> ;
    using FieldValues = SPI1_I2SCTL_CHLEN_Values<SPI1::I2SCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCTLPack  = Register<0x4000381C, 16, ReadWriteMode, SPI1I2SCTLBase, T...> ;

  struct SPI1I2SPSCBase {} ;

  struct I2SPSC : public RegisterBase<0x40003820, 16, ReadWriteMode>
  {
    using MCKOEN = SPI1_I2SPSC_MCKOEN_Values<SPI1::I2SPSC, 9, 1, ReadWriteMode, SPI1I2SPSCBase> ;
    using OF = SPI1_I2SPSC_OF_Values<SPI1::I2SPSC, 8, 1, ReadWriteMode, SPI1I2SPSCBase> ;
    using DIV = SPI1_I2SPSC_DIV_Values<SPI1::I2SPSC, 0, 8, ReadWriteMode, SPI1I2SPSCBase> ;
    using FieldValues = SPI1_I2SPSC_DIV_Values<SPI1::I2SPSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPSCPack  = Register<0x40003820, 16, ReadWriteMode, SPI1I2SPSCBase, T...> ;

} ;

#endif //#if !defined(SPI1REGISTERS_HPP)
