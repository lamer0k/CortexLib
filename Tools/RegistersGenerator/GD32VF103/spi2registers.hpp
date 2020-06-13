/*******************************************************************************
* Filename      : spi2registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(SPI2REGISTERS_HPP)
#define SPI2REGISTERS_HPP

#include "spi2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI2
{
  struct SPI2CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40003C00, 16, ReadWriteMode>
  {
    using BDEN = SPI2_CTL0_BDEN_Values<SPI2::CTL0, 15, 1, ReadWriteMode, SPI2CTL0Base> ;
    using BDOEN = SPI2_CTL0_BDOEN_Values<SPI2::CTL0, 14, 1, ReadWriteMode, SPI2CTL0Base> ;
    using CRCEN = SPI2_CTL0_CRCEN_Values<SPI2::CTL0, 13, 1, ReadWriteMode, SPI2CTL0Base> ;
    using CRCNT = SPI2_CTL0_CRCNT_Values<SPI2::CTL0, 12, 1, ReadWriteMode, SPI2CTL0Base> ;
    using FF16 = SPI2_CTL0_FF16_Values<SPI2::CTL0, 11, 1, ReadWriteMode, SPI2CTL0Base> ;
    using RO = SPI2_CTL0_RO_Values<SPI2::CTL0, 10, 1, ReadWriteMode, SPI2CTL0Base> ;
    using SWNSSEN = SPI2_CTL0_SWNSSEN_Values<SPI2::CTL0, 9, 1, ReadWriteMode, SPI2CTL0Base> ;
    using SWNSS = SPI2_CTL0_SWNSS_Values<SPI2::CTL0, 8, 1, ReadWriteMode, SPI2CTL0Base> ;
    using LF = SPI2_CTL0_LF_Values<SPI2::CTL0, 7, 1, ReadWriteMode, SPI2CTL0Base> ;
    using SPIEN = SPI2_CTL0_SPIEN_Values<SPI2::CTL0, 6, 1, ReadWriteMode, SPI2CTL0Base> ;
    using PSC = SPI2_CTL0_PSC_Values<SPI2::CTL0, 3, 3, ReadWriteMode, SPI2CTL0Base> ;
    using MSTMOD = SPI2_CTL0_MSTMOD_Values<SPI2::CTL0, 2, 1, ReadWriteMode, SPI2CTL0Base> ;
    using CKPL = SPI2_CTL0_CKPL_Values<SPI2::CTL0, 1, 1, ReadWriteMode, SPI2CTL0Base> ;
    using CKPH = SPI2_CTL0_CKPH_Values<SPI2::CTL0, 0, 1, ReadWriteMode, SPI2CTL0Base> ;
    using FieldValues = SPI2_CTL0_CKPH_Values<SPI2::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40003C00, 16, ReadWriteMode, SPI2CTL0Base, T...> ;

  struct SPI2CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40003C04, 16, ReadWriteMode>
  {
    using TBEIE = SPI2_CTL1_TBEIE_Values<SPI2::CTL1, 7, 1, ReadWriteMode, SPI2CTL1Base> ;
    using RBNEIE = SPI2_CTL1_RBNEIE_Values<SPI2::CTL1, 6, 1, ReadWriteMode, SPI2CTL1Base> ;
    using ERRIE = SPI2_CTL1_ERRIE_Values<SPI2::CTL1, 5, 1, ReadWriteMode, SPI2CTL1Base> ;
    using TMOD = SPI2_CTL1_TMOD_Values<SPI2::CTL1, 4, 1, ReadWriteMode, SPI2CTL1Base> ;
    using NSSP = SPI2_CTL1_NSSP_Values<SPI2::CTL1, 3, 1, ReadWriteMode, SPI2CTL1Base> ;
    using NSSDRV = SPI2_CTL1_NSSDRV_Values<SPI2::CTL1, 2, 1, ReadWriteMode, SPI2CTL1Base> ;
    using DMATEN = SPI2_CTL1_DMATEN_Values<SPI2::CTL1, 1, 1, ReadWriteMode, SPI2CTL1Base> ;
    using DMAREN = SPI2_CTL1_DMAREN_Values<SPI2::CTL1, 0, 1, ReadWriteMode, SPI2CTL1Base> ;
    using FieldValues = SPI2_CTL1_DMAREN_Values<SPI2::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40003C04, 16, ReadWriteMode, SPI2CTL1Base, T...> ;

  struct SPI2STATBase {} ;

  struct STAT : public RegisterBase<0x40003C08, 16, ReadWriteMode>
  {
    using FERR = SPI2_STAT_FERR_Values<SPI2::STAT, 8, 1, ReadMode, SPI2STATBase> ;
    using TRANS = SPI2_STAT_TRANS_Values<SPI2::STAT, 7, 1, ReadMode, SPI2STATBase> ;
    using RXORERR = SPI2_STAT_RXORERR_Values<SPI2::STAT, 6, 1, ReadMode, SPI2STATBase> ;
    using CONFERR = SPI2_STAT_CONFERR_Values<SPI2::STAT, 5, 1, ReadMode, SPI2STATBase> ;
    using CRCERR = SPI2_STAT_CRCERR_Values<SPI2::STAT, 4, 1, ReadWriteMode, SPI2STATBase> ;
    using TXURERR = SPI2_STAT_TXURERR_Values<SPI2::STAT, 3, 1, ReadMode, SPI2STATBase> ;
    using I2SCH = SPI2_STAT_I2SCH_Values<SPI2::STAT, 2, 1, ReadMode, SPI2STATBase> ;
    using TBE = SPI2_STAT_TBE_Values<SPI2::STAT, 1, 1, ReadMode, SPI2STATBase> ;
    using RBNE = SPI2_STAT_RBNE_Values<SPI2::STAT, 0, 1, ReadMode, SPI2STATBase> ;
    using FieldValues = SPI2_STAT_RBNE_Values<SPI2::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40003C08, 16, ReadWriteMode, SPI2STATBase, T...> ;

  struct SPI2DATABase {} ;

  struct DATA : public RegisterBase<0x40003C0C, 16, ReadWriteMode>
  {
    using SPI_DATA = SPI2_DATA_SPI_DATA_Values<SPI2::DATA, 0, 16, ReadWriteMode, SPI2DATABase> ;
    using FieldValues = SPI2_DATA_SPI_DATA_Values<SPI2::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40003C0C, 16, ReadWriteMode, SPI2DATABase, T...> ;

  struct SPI2CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40003C10, 16, ReadWriteMode>
  {
    using CRCPOLYField = SPI2_CRCPOLY_CRCPOLY_Values<SPI2::CRCPOLY, 0, 16, ReadWriteMode, SPI2CRCPOLYBase> ;
    using FieldValues = SPI2_CRCPOLY_CRCPOLY_Values<SPI2::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40003C10, 16, ReadWriteMode, SPI2CRCPOLYBase, T...> ;

  struct SPI2RCRCBase {} ;

  struct RCRC : public RegisterBase<0x40003C14, 16, ReadMode>
  {
    using RCRCField = SPI2_RCRC_RCRC_Values<SPI2::RCRC, 0, 16, ReadMode, SPI2RCRCBase> ;
    using FieldValues = SPI2_RCRC_RCRC_Values<SPI2::RCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRCPack  = Register<0x40003C14, 16, ReadMode, SPI2RCRCBase, T...> ;

  struct SPI2TCRCBase {} ;

  struct TCRC : public RegisterBase<0x40003C18, 16, ReadMode>
  {
    using TCRCField = SPI2_TCRC_TCRC_Values<SPI2::TCRC, 0, 16, ReadMode, SPI2TCRCBase> ;
    using FieldValues = SPI2_TCRC_TCRC_Values<SPI2::TCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TCRCPack  = Register<0x40003C18, 16, ReadMode, SPI2TCRCBase, T...> ;

  struct SPI2I2SCTLBase {} ;

  struct I2SCTL : public RegisterBase<0x40003C1C, 16, ReadWriteMode>
  {
    using I2SSEL = SPI2_I2SCTL_I2SSEL_Values<SPI2::I2SCTL, 11, 1, ReadWriteMode, SPI2I2SCTLBase> ;
    using I2SEN = SPI2_I2SCTL_I2SEN_Values<SPI2::I2SCTL, 10, 1, ReadWriteMode, SPI2I2SCTLBase> ;
    using I2SOPMOD = SPI2_I2SCTL_I2SOPMOD_Values<SPI2::I2SCTL, 8, 2, ReadWriteMode, SPI2I2SCTLBase> ;
    using PCMSMOD = SPI2_I2SCTL_PCMSMOD_Values<SPI2::I2SCTL, 7, 1, ReadWriteMode, SPI2I2SCTLBase> ;
    using I2SSTD = SPI2_I2SCTL_I2SSTD_Values<SPI2::I2SCTL, 4, 2, ReadWriteMode, SPI2I2SCTLBase> ;
    using CKPL = SPI2_I2SCTL_CKPL_Values<SPI2::I2SCTL, 3, 1, ReadWriteMode, SPI2I2SCTLBase> ;
    using DTLEN = SPI2_I2SCTL_DTLEN_Values<SPI2::I2SCTL, 1, 2, ReadWriteMode, SPI2I2SCTLBase> ;
    using CHLEN = SPI2_I2SCTL_CHLEN_Values<SPI2::I2SCTL, 0, 1, ReadWriteMode, SPI2I2SCTLBase> ;
    using FieldValues = SPI2_I2SCTL_CHLEN_Values<SPI2::I2SCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCTLPack  = Register<0x40003C1C, 16, ReadWriteMode, SPI2I2SCTLBase, T...> ;

  struct SPI2I2SPSCBase {} ;

  struct I2SPSC : public RegisterBase<0x40003C20, 16, ReadWriteMode>
  {
    using MCKOEN = SPI2_I2SPSC_MCKOEN_Values<SPI2::I2SPSC, 9, 1, ReadWriteMode, SPI2I2SPSCBase> ;
    using OF = SPI2_I2SPSC_OF_Values<SPI2::I2SPSC, 8, 1, ReadWriteMode, SPI2I2SPSCBase> ;
    using DIV = SPI2_I2SPSC_DIV_Values<SPI2::I2SPSC, 0, 8, ReadWriteMode, SPI2I2SPSCBase> ;
    using FieldValues = SPI2_I2SPSC_DIV_Values<SPI2::I2SPSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPSCPack  = Register<0x40003C20, 16, ReadWriteMode, SPI2I2SPSCBase, T...> ;

} ;

#endif //#if !defined(SPI2REGISTERS_HPP)
