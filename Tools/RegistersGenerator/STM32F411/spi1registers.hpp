/*******************************************************************************
* Filename      : spi1registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
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
  struct SPI1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40013000, 32, ReadWriteMode>
  {
    using BIDIMODE = SPI1_CR1_BIDIMODE_Values<SPI1::CR1, 15, 1, ReadWriteMode, SPI1CR1Base> ;
    using BIDIOE = SPI1_CR1_BIDIOE_Values<SPI1::CR1, 14, 1, ReadWriteMode, SPI1CR1Base> ;
    using CRCEN = SPI1_CR1_CRCEN_Values<SPI1::CR1, 13, 1, ReadWriteMode, SPI1CR1Base> ;
    using CRCNEXT = SPI1_CR1_CRCNEXT_Values<SPI1::CR1, 12, 1, ReadWriteMode, SPI1CR1Base> ;
    using DFF = SPI1_CR1_DFF_Values<SPI1::CR1, 11, 1, ReadWriteMode, SPI1CR1Base> ;
    using RXONLY = SPI1_CR1_RXONLY_Values<SPI1::CR1, 10, 1, ReadWriteMode, SPI1CR1Base> ;
    using SSM = SPI1_CR1_SSM_Values<SPI1::CR1, 9, 1, ReadWriteMode, SPI1CR1Base> ;
    using SSI = SPI1_CR1_SSI_Values<SPI1::CR1, 8, 1, ReadWriteMode, SPI1CR1Base> ;
    using LSBFIRST = SPI1_CR1_LSBFIRST_Values<SPI1::CR1, 7, 1, ReadWriteMode, SPI1CR1Base> ;
    using SPE = SPI1_CR1_SPE_Values<SPI1::CR1, 6, 1, ReadWriteMode, SPI1CR1Base> ;
    using BR = SPI1_CR1_BR_Values<SPI1::CR1, 3, 3, ReadWriteMode, SPI1CR1Base> ;
    using MSTR = SPI1_CR1_MSTR_Values<SPI1::CR1, 2, 1, ReadWriteMode, SPI1CR1Base> ;
    using CPOL = SPI1_CR1_CPOL_Values<SPI1::CR1, 1, 1, ReadWriteMode, SPI1CR1Base> ;
    using CPHA = SPI1_CR1_CPHA_Values<SPI1::CR1, 0, 1, ReadWriteMode, SPI1CR1Base> ;
    using FieldValues = SPI1_CR1_CPHA_Values<SPI1::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40013000, 32, ReadWriteMode, SPI1CR1Base, T...> ;

  struct SPI1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40013004, 32, ReadWriteMode>
  {
    using TXEIE = SPI1_CR2_TXEIE_Values<SPI1::CR2, 7, 1, ReadWriteMode, SPI1CR2Base> ;
    using RXNEIE = SPI1_CR2_RXNEIE_Values<SPI1::CR2, 6, 1, ReadWriteMode, SPI1CR2Base> ;
    using ERRIE = SPI1_CR2_ERRIE_Values<SPI1::CR2, 5, 1, ReadWriteMode, SPI1CR2Base> ;
    using FRF = SPI1_CR2_FRF_Values<SPI1::CR2, 4, 1, ReadWriteMode, SPI1CR2Base> ;
    using SSOE = SPI1_CR2_SSOE_Values<SPI1::CR2, 2, 1, ReadWriteMode, SPI1CR2Base> ;
    using TXDMAEN = SPI1_CR2_TXDMAEN_Values<SPI1::CR2, 1, 1, ReadWriteMode, SPI1CR2Base> ;
    using RXDMAEN = SPI1_CR2_RXDMAEN_Values<SPI1::CR2, 0, 1, ReadWriteMode, SPI1CR2Base> ;
    using FieldValues = SPI1_CR2_RXDMAEN_Values<SPI1::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40013004, 32, ReadWriteMode, SPI1CR2Base, T...> ;

  struct SPI1SRBase {} ;

  struct SR : public RegisterBase<0x40013008, 32, ReadWriteMode>
  {
    using TIFRFE = SPI1_SR_TIFRFE_Values<SPI1::SR, 8, 1, ReadMode, SPI1SRBase> ;
    using BSY = SPI1_SR_BSY_Values<SPI1::SR, 7, 1, ReadMode, SPI1SRBase> ;
    using OVR = SPI1_SR_OVR_Values<SPI1::SR, 6, 1, ReadMode, SPI1SRBase> ;
    using MODF = SPI1_SR_MODF_Values<SPI1::SR, 5, 1, ReadMode, SPI1SRBase> ;
    using CRCERR = SPI1_SR_CRCERR_Values<SPI1::SR, 4, 1, ReadWriteMode, SPI1SRBase> ;
    using UDR = SPI1_SR_UDR_Values<SPI1::SR, 3, 1, ReadMode, SPI1SRBase> ;
    using CHSIDE = SPI1_SR_CHSIDE_Values<SPI1::SR, 2, 1, ReadMode, SPI1SRBase> ;
    using TXE = SPI1_SR_TXE_Values<SPI1::SR, 1, 1, ReadMode, SPI1SRBase> ;
    using RXNE = SPI1_SR_RXNE_Values<SPI1::SR, 0, 1, ReadMode, SPI1SRBase> ;
    using FieldValues = SPI1_SR_RXNE_Values<SPI1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40013008, 32, ReadWriteMode, SPI1SRBase, T...> ;

  struct SPI1DRBase {} ;

  struct DR : public RegisterBase<0x4001300C, 32, ReadWriteMode>
  {
    using DRField = SPI1_DR_DR_Values<SPI1::DR, 0, 16, ReadWriteMode, SPI1DRBase> ;
    using FieldValues = SPI1_DR_DR_Values<SPI1::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4001300C, 32, ReadWriteMode, SPI1DRBase, T...> ;

  struct SPI1CRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40013010, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI1_CRCPR_CRCPOLY_Values<SPI1::CRCPR, 0, 16, ReadWriteMode, SPI1CRCPRBase> ;
    using FieldValues = SPI1_CRCPR_CRCPOLY_Values<SPI1::CRCPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40013010, 32, ReadWriteMode, SPI1CRCPRBase, T...> ;

  struct SPI1RXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40013014, 32, ReadMode>
  {
    using RxCRC = SPI1_RXCRCR_RxCRC_Values<SPI1::RXCRCR, 0, 16, ReadMode, SPI1RXCRCRBase> ;
    using FieldValues = SPI1_RXCRCR_RxCRC_Values<SPI1::RXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40013014, 32, ReadMode, SPI1RXCRCRBase, T...> ;

  struct SPI1TXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40013018, 32, ReadMode>
  {
    using TxCRC = SPI1_TXCRCR_TxCRC_Values<SPI1::TXCRCR, 0, 16, ReadMode, SPI1TXCRCRBase> ;
    using FieldValues = SPI1_TXCRCR_TxCRC_Values<SPI1::TXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40013018, 32, ReadMode, SPI1TXCRCRBase, T...> ;

  struct SPI1I2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x4001301C, 32, ReadWriteMode>
  {
    using I2SMOD = SPI1_I2SCFGR_I2SMOD_Values<SPI1::I2SCFGR, 11, 1, ReadWriteMode, SPI1I2SCFGRBase> ;
    using I2SE = SPI1_I2SCFGR_I2SE_Values<SPI1::I2SCFGR, 10, 1, ReadWriteMode, SPI1I2SCFGRBase> ;
    using I2SCFG = SPI1_I2SCFGR_I2SCFG_Values<SPI1::I2SCFGR, 8, 2, ReadWriteMode, SPI1I2SCFGRBase> ;
    using PCMSYNC = SPI1_I2SCFGR_PCMSYNC_Values<SPI1::I2SCFGR, 7, 1, ReadWriteMode, SPI1I2SCFGRBase> ;
    using I2SSTD = SPI1_I2SCFGR_I2SSTD_Values<SPI1::I2SCFGR, 4, 2, ReadWriteMode, SPI1I2SCFGRBase> ;
    using CKPOL = SPI1_I2SCFGR_CKPOL_Values<SPI1::I2SCFGR, 3, 1, ReadWriteMode, SPI1I2SCFGRBase> ;
    using DATLEN = SPI1_I2SCFGR_DATLEN_Values<SPI1::I2SCFGR, 1, 2, ReadWriteMode, SPI1I2SCFGRBase> ;
    using CHLEN = SPI1_I2SCFGR_CHLEN_Values<SPI1::I2SCFGR, 0, 1, ReadWriteMode, SPI1I2SCFGRBase> ;
    using FieldValues = SPI1_I2SCFGR_CHLEN_Values<SPI1::I2SCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x4001301C, 32, ReadWriteMode, SPI1I2SCFGRBase, T...> ;

  struct SPI1I2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40013020, 32, ReadWriteMode>
  {
    using MCKOE = SPI1_I2SPR_MCKOE_Values<SPI1::I2SPR, 9, 1, ReadWriteMode, SPI1I2SPRBase> ;
    using ODD = SPI1_I2SPR_ODD_Values<SPI1::I2SPR, 8, 1, ReadWriteMode, SPI1I2SPRBase> ;
    using I2SDIV = SPI1_I2SPR_I2SDIV_Values<SPI1::I2SPR, 0, 8, ReadWriteMode, SPI1I2SPRBase> ;
    using FieldValues = SPI1_I2SPR_I2SDIV_Values<SPI1::I2SPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40013020, 32, ReadWriteMode, SPI1I2SPRBase, T...> ;

} ;

#endif //#if !defined(SPI1REGISTERS_HPP)
