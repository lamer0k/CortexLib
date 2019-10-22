/*******************************************************************************
* Filename      : spi2registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
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
  struct SPI2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40003800, 32, ReadWriteMode>
  {
    using BIDIMODE = SPI2_CR1_BIDIMODE_Values<SPI2::CR1, 15, 1, ReadWriteMode, SPI2CR1Base> ;
    using BIDIOE = SPI2_CR1_BIDIOE_Values<SPI2::CR1, 14, 1, ReadWriteMode, SPI2CR1Base> ;
    using CRCEN = SPI2_CR1_CRCEN_Values<SPI2::CR1, 13, 1, ReadWriteMode, SPI2CR1Base> ;
    using CRCNEXT = SPI2_CR1_CRCNEXT_Values<SPI2::CR1, 12, 1, ReadWriteMode, SPI2CR1Base> ;
    using DFF = SPI2_CR1_DFF_Values<SPI2::CR1, 11, 1, ReadWriteMode, SPI2CR1Base> ;
    using RXONLY = SPI2_CR1_RXONLY_Values<SPI2::CR1, 10, 1, ReadWriteMode, SPI2CR1Base> ;
    using SSM = SPI2_CR1_SSM_Values<SPI2::CR1, 9, 1, ReadWriteMode, SPI2CR1Base> ;
    using SSI = SPI2_CR1_SSI_Values<SPI2::CR1, 8, 1, ReadWriteMode, SPI2CR1Base> ;
    using LSBFIRST = SPI2_CR1_LSBFIRST_Values<SPI2::CR1, 7, 1, ReadWriteMode, SPI2CR1Base> ;
    using SPE = SPI2_CR1_SPE_Values<SPI2::CR1, 6, 1, ReadWriteMode, SPI2CR1Base> ;
    using BR = SPI2_CR1_BR_Values<SPI2::CR1, 3, 3, ReadWriteMode, SPI2CR1Base> ;
    using MSTR = SPI2_CR1_MSTR_Values<SPI2::CR1, 2, 1, ReadWriteMode, SPI2CR1Base> ;
    using CPOL = SPI2_CR1_CPOL_Values<SPI2::CR1, 1, 1, ReadWriteMode, SPI2CR1Base> ;
    using CPHA = SPI2_CR1_CPHA_Values<SPI2::CR1, 0, 1, ReadWriteMode, SPI2CR1Base> ;
    using FieldValues = SPI2_CR1_CPHA_Values<SPI2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40003800, 32, ReadWriteMode, SPI2CR1Base, T...> ;

  struct SPI2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40003804, 32, ReadWriteMode>
  {
    using TXEIE = SPI2_CR2_TXEIE_Values<SPI2::CR2, 7, 1, ReadWriteMode, SPI2CR2Base> ;
    using RXNEIE = SPI2_CR2_RXNEIE_Values<SPI2::CR2, 6, 1, ReadWriteMode, SPI2CR2Base> ;
    using ERRIE = SPI2_CR2_ERRIE_Values<SPI2::CR2, 5, 1, ReadWriteMode, SPI2CR2Base> ;
    using FRF = SPI2_CR2_FRF_Values<SPI2::CR2, 4, 1, ReadWriteMode, SPI2CR2Base> ;
    using SSOE = SPI2_CR2_SSOE_Values<SPI2::CR2, 2, 1, ReadWriteMode, SPI2CR2Base> ;
    using TXDMAEN = SPI2_CR2_TXDMAEN_Values<SPI2::CR2, 1, 1, ReadWriteMode, SPI2CR2Base> ;
    using RXDMAEN = SPI2_CR2_RXDMAEN_Values<SPI2::CR2, 0, 1, ReadWriteMode, SPI2CR2Base> ;
    using FieldValues = SPI2_CR2_RXDMAEN_Values<SPI2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40003804, 32, ReadWriteMode, SPI2CR2Base, T...> ;

  struct SPI2SRBase {} ;

  struct SR : public RegisterBase<0x40003808, 32, ReadWriteMode>
  {
    using TIFRFE = SPI2_SR_TIFRFE_Values<SPI2::SR, 8, 1, ReadMode, SPI2SRBase> ;
    using BSY = SPI2_SR_BSY_Values<SPI2::SR, 7, 1, ReadMode, SPI2SRBase> ;
    using OVR = SPI2_SR_OVR_Values<SPI2::SR, 6, 1, ReadMode, SPI2SRBase> ;
    using MODF = SPI2_SR_MODF_Values<SPI2::SR, 5, 1, ReadMode, SPI2SRBase> ;
    using CRCERR = SPI2_SR_CRCERR_Values<SPI2::SR, 4, 1, ReadWriteMode, SPI2SRBase> ;
    using UDR = SPI2_SR_UDR_Values<SPI2::SR, 3, 1, ReadMode, SPI2SRBase> ;
    using CHSIDE = SPI2_SR_CHSIDE_Values<SPI2::SR, 2, 1, ReadMode, SPI2SRBase> ;
    using TXE = SPI2_SR_TXE_Values<SPI2::SR, 1, 1, ReadMode, SPI2SRBase> ;
    using RXNE = SPI2_SR_RXNE_Values<SPI2::SR, 0, 1, ReadMode, SPI2SRBase> ;
    using FieldValues = SPI2_SR_RXNE_Values<SPI2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40003808, 32, ReadWriteMode, SPI2SRBase, T...> ;

  struct SPI2DRBase {} ;

  struct DR : public RegisterBase<0x4000380C, 32, ReadWriteMode>
  {
    using DRField = SPI2_DR_DR_Values<SPI2::DR, 0, 16, ReadWriteMode, SPI2DRBase> ;
    using FieldValues = SPI2_DR_DR_Values<SPI2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4000380C, 32, ReadWriteMode, SPI2DRBase, T...> ;

  struct SPI2CRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40003810, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI2_CRCPR_CRCPOLY_Values<SPI2::CRCPR, 0, 16, ReadWriteMode, SPI2CRCPRBase> ;
    using FieldValues = SPI2_CRCPR_CRCPOLY_Values<SPI2::CRCPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40003810, 32, ReadWriteMode, SPI2CRCPRBase, T...> ;

  struct SPI2RXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40003814, 32, ReadMode>
  {
    using RxCRC = SPI2_RXCRCR_RxCRC_Values<SPI2::RXCRCR, 0, 16, ReadMode, SPI2RXCRCRBase> ;
    using FieldValues = SPI2_RXCRCR_RxCRC_Values<SPI2::RXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40003814, 32, ReadMode, SPI2RXCRCRBase, T...> ;

  struct SPI2TXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40003818, 32, ReadMode>
  {
    using TxCRC = SPI2_TXCRCR_TxCRC_Values<SPI2::TXCRCR, 0, 16, ReadMode, SPI2TXCRCRBase> ;
    using FieldValues = SPI2_TXCRCR_TxCRC_Values<SPI2::TXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40003818, 32, ReadMode, SPI2TXCRCRBase, T...> ;

  struct SPI2I2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x4000381C, 32, ReadWriteMode>
  {
    using I2SMOD = SPI2_I2SCFGR_I2SMOD_Values<SPI2::I2SCFGR, 11, 1, ReadWriteMode, SPI2I2SCFGRBase> ;
    using I2SE = SPI2_I2SCFGR_I2SE_Values<SPI2::I2SCFGR, 10, 1, ReadWriteMode, SPI2I2SCFGRBase> ;
    using I2SCFG = SPI2_I2SCFGR_I2SCFG_Values<SPI2::I2SCFGR, 8, 2, ReadWriteMode, SPI2I2SCFGRBase> ;
    using PCMSYNC = SPI2_I2SCFGR_PCMSYNC_Values<SPI2::I2SCFGR, 7, 1, ReadWriteMode, SPI2I2SCFGRBase> ;
    using I2SSTD = SPI2_I2SCFGR_I2SSTD_Values<SPI2::I2SCFGR, 4, 2, ReadWriteMode, SPI2I2SCFGRBase> ;
    using CKPOL = SPI2_I2SCFGR_CKPOL_Values<SPI2::I2SCFGR, 3, 1, ReadWriteMode, SPI2I2SCFGRBase> ;
    using DATLEN = SPI2_I2SCFGR_DATLEN_Values<SPI2::I2SCFGR, 1, 2, ReadWriteMode, SPI2I2SCFGRBase> ;
    using CHLEN = SPI2_I2SCFGR_CHLEN_Values<SPI2::I2SCFGR, 0, 1, ReadWriteMode, SPI2I2SCFGRBase> ;
    using FieldValues = SPI2_I2SCFGR_CHLEN_Values<SPI2::I2SCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x4000381C, 32, ReadWriteMode, SPI2I2SCFGRBase, T...> ;

  struct SPI2I2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40003820, 32, ReadWriteMode>
  {
    using MCKOE = SPI2_I2SPR_MCKOE_Values<SPI2::I2SPR, 9, 1, ReadWriteMode, SPI2I2SPRBase> ;
    using ODD = SPI2_I2SPR_ODD_Values<SPI2::I2SPR, 8, 1, ReadWriteMode, SPI2I2SPRBase> ;
    using I2SDIV = SPI2_I2SPR_I2SDIV_Values<SPI2::I2SPR, 0, 8, ReadWriteMode, SPI2I2SPRBase> ;
    using FieldValues = SPI2_I2SPR_I2SDIV_Values<SPI2::I2SPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40003820, 32, ReadWriteMode, SPI2I2SPRBase, T...> ;

} ;

#endif //#if !defined(SPI2REGISTERS_HPP)
