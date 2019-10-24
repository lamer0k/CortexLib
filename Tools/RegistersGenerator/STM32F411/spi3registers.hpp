/*******************************************************************************
* Filename      : spi3registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SPI3REGISTERS_HPP)
#define SPI3REGISTERS_HPP

#include "spi3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI3
{
  struct SPI3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40003C00, 32, ReadWriteMode>
  {
    using BIDIMODE = SPI3_CR1_BIDIMODE_Values<SPI3::CR1, 15, 1, ReadWriteMode, SPI3CR1Base> ;
    using BIDIOE = SPI3_CR1_BIDIOE_Values<SPI3::CR1, 14, 1, ReadWriteMode, SPI3CR1Base> ;
    using CRCEN = SPI3_CR1_CRCEN_Values<SPI3::CR1, 13, 1, ReadWriteMode, SPI3CR1Base> ;
    using CRCNEXT = SPI3_CR1_CRCNEXT_Values<SPI3::CR1, 12, 1, ReadWriteMode, SPI3CR1Base> ;
    using DFF = SPI3_CR1_DFF_Values<SPI3::CR1, 11, 1, ReadWriteMode, SPI3CR1Base> ;
    using RXONLY = SPI3_CR1_RXONLY_Values<SPI3::CR1, 10, 1, ReadWriteMode, SPI3CR1Base> ;
    using SSM = SPI3_CR1_SSM_Values<SPI3::CR1, 9, 1, ReadWriteMode, SPI3CR1Base> ;
    using SSI = SPI3_CR1_SSI_Values<SPI3::CR1, 8, 1, ReadWriteMode, SPI3CR1Base> ;
    using LSBFIRST = SPI3_CR1_LSBFIRST_Values<SPI3::CR1, 7, 1, ReadWriteMode, SPI3CR1Base> ;
    using SPE = SPI3_CR1_SPE_Values<SPI3::CR1, 6, 1, ReadWriteMode, SPI3CR1Base> ;
    using BR = SPI3_CR1_BR_Values<SPI3::CR1, 3, 3, ReadWriteMode, SPI3CR1Base> ;
    using MSTR = SPI3_CR1_MSTR_Values<SPI3::CR1, 2, 1, ReadWriteMode, SPI3CR1Base> ;
    using CPOL = SPI3_CR1_CPOL_Values<SPI3::CR1, 1, 1, ReadWriteMode, SPI3CR1Base> ;
    using CPHA = SPI3_CR1_CPHA_Values<SPI3::CR1, 0, 1, ReadWriteMode, SPI3CR1Base> ;
    using FieldValues = SPI3_CR1_CPHA_Values<SPI3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40003C00, 32, ReadWriteMode, SPI3CR1Base, T...> ;

  struct SPI3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40003C04, 32, ReadWriteMode>
  {
    using TXEIE = SPI3_CR2_TXEIE_Values<SPI3::CR2, 7, 1, ReadWriteMode, SPI3CR2Base> ;
    using RXNEIE = SPI3_CR2_RXNEIE_Values<SPI3::CR2, 6, 1, ReadWriteMode, SPI3CR2Base> ;
    using ERRIE = SPI3_CR2_ERRIE_Values<SPI3::CR2, 5, 1, ReadWriteMode, SPI3CR2Base> ;
    using FRF = SPI3_CR2_FRF_Values<SPI3::CR2, 4, 1, ReadWriteMode, SPI3CR2Base> ;
    using SSOE = SPI3_CR2_SSOE_Values<SPI3::CR2, 2, 1, ReadWriteMode, SPI3CR2Base> ;
    using TXDMAEN = SPI3_CR2_TXDMAEN_Values<SPI3::CR2, 1, 1, ReadWriteMode, SPI3CR2Base> ;
    using RXDMAEN = SPI3_CR2_RXDMAEN_Values<SPI3::CR2, 0, 1, ReadWriteMode, SPI3CR2Base> ;
    using FieldValues = SPI3_CR2_RXDMAEN_Values<SPI3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40003C04, 32, ReadWriteMode, SPI3CR2Base, T...> ;

  struct SPI3SRBase {} ;

  struct SR : public RegisterBase<0x40003C08, 32, ReadWriteMode>
  {
    using TIFRFE = SPI3_SR_TIFRFE_Values<SPI3::SR, 8, 1, ReadMode, SPI3SRBase> ;
    using BSY = SPI3_SR_BSY_Values<SPI3::SR, 7, 1, ReadMode, SPI3SRBase> ;
    using OVR = SPI3_SR_OVR_Values<SPI3::SR, 6, 1, ReadMode, SPI3SRBase> ;
    using MODF = SPI3_SR_MODF_Values<SPI3::SR, 5, 1, ReadMode, SPI3SRBase> ;
    using CRCERR = SPI3_SR_CRCERR_Values<SPI3::SR, 4, 1, ReadWriteMode, SPI3SRBase> ;
    using UDR = SPI3_SR_UDR_Values<SPI3::SR, 3, 1, ReadMode, SPI3SRBase> ;
    using CHSIDE = SPI3_SR_CHSIDE_Values<SPI3::SR, 2, 1, ReadMode, SPI3SRBase> ;
    using TXE = SPI3_SR_TXE_Values<SPI3::SR, 1, 1, ReadMode, SPI3SRBase> ;
    using RXNE = SPI3_SR_RXNE_Values<SPI3::SR, 0, 1, ReadMode, SPI3SRBase> ;
    using FieldValues = SPI3_SR_RXNE_Values<SPI3::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40003C08, 32, ReadWriteMode, SPI3SRBase, T...> ;

  struct SPI3DRBase {} ;

  struct DR : public RegisterBase<0x40003C0C, 32, ReadWriteMode>
  {
    using DRField = SPI3_DR_DR_Values<SPI3::DR, 0, 16, ReadWriteMode, SPI3DRBase> ;
    using FieldValues = SPI3_DR_DR_Values<SPI3::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40003C0C, 32, ReadWriteMode, SPI3DRBase, T...> ;

  struct SPI3CRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40003C10, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI3_CRCPR_CRCPOLY_Values<SPI3::CRCPR, 0, 16, ReadWriteMode, SPI3CRCPRBase> ;
    using FieldValues = SPI3_CRCPR_CRCPOLY_Values<SPI3::CRCPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40003C10, 32, ReadWriteMode, SPI3CRCPRBase, T...> ;

  struct SPI3RXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40003C14, 32, ReadMode>
  {
    using RxCRC = SPI3_RXCRCR_RxCRC_Values<SPI3::RXCRCR, 0, 16, ReadMode, SPI3RXCRCRBase> ;
    using FieldValues = SPI3_RXCRCR_RxCRC_Values<SPI3::RXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40003C14, 32, ReadMode, SPI3RXCRCRBase, T...> ;

  struct SPI3TXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40003C18, 32, ReadMode>
  {
    using TxCRC = SPI3_TXCRCR_TxCRC_Values<SPI3::TXCRCR, 0, 16, ReadMode, SPI3TXCRCRBase> ;
    using FieldValues = SPI3_TXCRCR_TxCRC_Values<SPI3::TXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40003C18, 32, ReadMode, SPI3TXCRCRBase, T...> ;

  struct SPI3I2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x40003C1C, 32, ReadWriteMode>
  {
    using I2SMOD = SPI3_I2SCFGR_I2SMOD_Values<SPI3::I2SCFGR, 11, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using I2SE = SPI3_I2SCFGR_I2SE_Values<SPI3::I2SCFGR, 10, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using I2SCFG = SPI3_I2SCFGR_I2SCFG_Values<SPI3::I2SCFGR, 8, 2, ReadWriteMode, SPI3I2SCFGRBase> ;
    using PCMSYNC = SPI3_I2SCFGR_PCMSYNC_Values<SPI3::I2SCFGR, 7, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using I2SSTD = SPI3_I2SCFGR_I2SSTD_Values<SPI3::I2SCFGR, 4, 2, ReadWriteMode, SPI3I2SCFGRBase> ;
    using CKPOL = SPI3_I2SCFGR_CKPOL_Values<SPI3::I2SCFGR, 3, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using DATLEN = SPI3_I2SCFGR_DATLEN_Values<SPI3::I2SCFGR, 1, 2, ReadWriteMode, SPI3I2SCFGRBase> ;
    using CHLEN = SPI3_I2SCFGR_CHLEN_Values<SPI3::I2SCFGR, 0, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using FieldValues = SPI3_I2SCFGR_CHLEN_Values<SPI3::I2SCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x40003C1C, 32, ReadWriteMode, SPI3I2SCFGRBase, T...> ;

  struct SPI3I2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40003C20, 32, ReadWriteMode>
  {
    using MCKOE = SPI3_I2SPR_MCKOE_Values<SPI3::I2SPR, 9, 1, ReadWriteMode, SPI3I2SPRBase> ;
    using ODD = SPI3_I2SPR_ODD_Values<SPI3::I2SPR, 8, 1, ReadWriteMode, SPI3I2SPRBase> ;
    using I2SDIV = SPI3_I2SPR_I2SDIV_Values<SPI3::I2SPR, 0, 8, ReadWriteMode, SPI3I2SPRBase> ;
    using FieldValues = SPI3_I2SPR_I2SDIV_Values<SPI3::I2SPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40003C20, 32, ReadWriteMode, SPI3I2SPRBase, T...> ;

} ;

#endif //#if !defined(SPI3REGISTERS_HPP)
