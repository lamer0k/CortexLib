/*******************************************************************************
* Filename      : spi6registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(SPI6REGISTERS_HPP)
#define SPI6REGISTERS_HPP

#include "spi6fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI6
{
  struct SPI6CR1Base {} ;

  struct CR1 : public RegisterBase<0x40015400, 32, ReadWriteMode>
  {
    using BIDIMODE = SPI6_CR1_BIDIMODE_Values<SPI6::CR1, 15, 1, ReadWriteMode, SPI6CR1Base> ;
    using BIDIOE = SPI6_CR1_BIDIOE_Values<SPI6::CR1, 14, 1, ReadWriteMode, SPI6CR1Base> ;
    using CRCEN = SPI6_CR1_CRCEN_Values<SPI6::CR1, 13, 1, ReadWriteMode, SPI6CR1Base> ;
    using CRCNEXT = SPI6_CR1_CRCNEXT_Values<SPI6::CR1, 12, 1, ReadWriteMode, SPI6CR1Base> ;
    using DFF = SPI6_CR1_DFF_Values<SPI6::CR1, 11, 1, ReadWriteMode, SPI6CR1Base> ;
    using RXONLY = SPI6_CR1_RXONLY_Values<SPI6::CR1, 10, 1, ReadWriteMode, SPI6CR1Base> ;
    using SSM = SPI6_CR1_SSM_Values<SPI6::CR1, 9, 1, ReadWriteMode, SPI6CR1Base> ;
    using SSI = SPI6_CR1_SSI_Values<SPI6::CR1, 8, 1, ReadWriteMode, SPI6CR1Base> ;
    using LSBFIRST = SPI6_CR1_LSBFIRST_Values<SPI6::CR1, 7, 1, ReadWriteMode, SPI6CR1Base> ;
    using SPE = SPI6_CR1_SPE_Values<SPI6::CR1, 6, 1, ReadWriteMode, SPI6CR1Base> ;
    using BR = SPI6_CR1_BR_Values<SPI6::CR1, 3, 3, ReadWriteMode, SPI6CR1Base> ;
    using MSTR = SPI6_CR1_MSTR_Values<SPI6::CR1, 2, 1, ReadWriteMode, SPI6CR1Base> ;
    using CPOL = SPI6_CR1_CPOL_Values<SPI6::CR1, 1, 1, ReadWriteMode, SPI6CR1Base> ;
    using CPHA = SPI6_CR1_CPHA_Values<SPI6::CR1, 0, 1, ReadWriteMode, SPI6CR1Base> ;
    using FieldValues = SPI6_CR1_CPHA_Values<SPI6::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40015400, 32, ReadWriteMode, SPI6CR1Base, T...> ;

  struct SPI6CR2Base {} ;

  struct CR2 : public RegisterBase<0x40015404, 32, ReadWriteMode>
  {
    using TXEIE = SPI6_CR2_TXEIE_Values<SPI6::CR2, 7, 1, ReadWriteMode, SPI6CR2Base> ;
    using RXNEIE = SPI6_CR2_RXNEIE_Values<SPI6::CR2, 6, 1, ReadWriteMode, SPI6CR2Base> ;
    using ERRIE = SPI6_CR2_ERRIE_Values<SPI6::CR2, 5, 1, ReadWriteMode, SPI6CR2Base> ;
    using FRF = SPI6_CR2_FRF_Values<SPI6::CR2, 4, 1, ReadWriteMode, SPI6CR2Base> ;
    using SSOE = SPI6_CR2_SSOE_Values<SPI6::CR2, 2, 1, ReadWriteMode, SPI6CR2Base> ;
    using TXDMAEN = SPI6_CR2_TXDMAEN_Values<SPI6::CR2, 1, 1, ReadWriteMode, SPI6CR2Base> ;
    using RXDMAEN = SPI6_CR2_RXDMAEN_Values<SPI6::CR2, 0, 1, ReadWriteMode, SPI6CR2Base> ;
    using FieldValues = SPI6_CR2_RXDMAEN_Values<SPI6::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40015404, 32, ReadWriteMode, SPI6CR2Base, T...> ;

  struct SPI6SRBase {} ;

  struct SR : public RegisterBase<0x40015408, 32, ReadWriteMode>
  {
    using TIFRFE = SPI6_SR_TIFRFE_Values<SPI6::SR, 8, 1, ReadMode, SPI6SRBase> ;
    using BSY = SPI6_SR_BSY_Values<SPI6::SR, 7, 1, ReadMode, SPI6SRBase> ;
    using OVR = SPI6_SR_OVR_Values<SPI6::SR, 6, 1, ReadMode, SPI6SRBase> ;
    using MODF = SPI6_SR_MODF_Values<SPI6::SR, 5, 1, ReadMode, SPI6SRBase> ;
    using CRCERR = SPI6_SR_CRCERR_Values<SPI6::SR, 4, 1, ReadWriteMode, SPI6SRBase> ;
    using UDR = SPI6_SR_UDR_Values<SPI6::SR, 3, 1, ReadMode, SPI6SRBase> ;
    using CHSIDE = SPI6_SR_CHSIDE_Values<SPI6::SR, 2, 1, ReadMode, SPI6SRBase> ;
    using TXE = SPI6_SR_TXE_Values<SPI6::SR, 1, 1, ReadMode, SPI6SRBase> ;
    using RXNE = SPI6_SR_RXNE_Values<SPI6::SR, 0, 1, ReadMode, SPI6SRBase> ;
    using FieldValues = SPI6_SR_RXNE_Values<SPI6::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40015408, 32, ReadWriteMode, SPI6SRBase, T...> ;

  struct SPI6DRBase {} ;

  struct DR : public RegisterBase<0x4001540C, 32, ReadWriteMode>
  {
    using DRField = SPI6_DR_DR_Values<SPI6::DR, 0, 16, ReadWriteMode, SPI6DRBase> ;
    using FieldValues = SPI6_DR_DR_Values<SPI6::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4001540C, 32, ReadWriteMode, SPI6DRBase, T...> ;

  struct SPI6CRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40015410, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI6_CRCPR_CRCPOLY_Values<SPI6::CRCPR, 0, 16, ReadWriteMode, SPI6CRCPRBase> ;
    using FieldValues = SPI6_CRCPR_CRCPOLY_Values<SPI6::CRCPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40015410, 32, ReadWriteMode, SPI6CRCPRBase, T...> ;

  struct SPI6RXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40015414, 32, ReadMode>
  {
    using RxCRC = SPI6_RXCRCR_RxCRC_Values<SPI6::RXCRCR, 0, 16, ReadMode, SPI6RXCRCRBase> ;
    using FieldValues = SPI6_RXCRCR_RxCRC_Values<SPI6::RXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40015414, 32, ReadMode, SPI6RXCRCRBase, T...> ;

  struct SPI6TXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40015418, 32, ReadMode>
  {
    using TxCRC = SPI6_TXCRCR_TxCRC_Values<SPI6::TXCRCR, 0, 16, ReadMode, SPI6TXCRCRBase> ;
    using FieldValues = SPI6_TXCRCR_TxCRC_Values<SPI6::TXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40015418, 32, ReadMode, SPI6TXCRCRBase, T...> ;

  struct SPI6I2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x4001541C, 32, ReadWriteMode>
  {
    using I2SMOD = SPI6_I2SCFGR_I2SMOD_Values<SPI6::I2SCFGR, 11, 1, ReadWriteMode, SPI6I2SCFGRBase> ;
    using I2SE = SPI6_I2SCFGR_I2SE_Values<SPI6::I2SCFGR, 10, 1, ReadWriteMode, SPI6I2SCFGRBase> ;
    using I2SCFG = SPI6_I2SCFGR_I2SCFG_Values<SPI6::I2SCFGR, 8, 2, ReadWriteMode, SPI6I2SCFGRBase> ;
    using PCMSYNC = SPI6_I2SCFGR_PCMSYNC_Values<SPI6::I2SCFGR, 7, 1, ReadWriteMode, SPI6I2SCFGRBase> ;
    using I2SSTD = SPI6_I2SCFGR_I2SSTD_Values<SPI6::I2SCFGR, 4, 2, ReadWriteMode, SPI6I2SCFGRBase> ;
    using CKPOL = SPI6_I2SCFGR_CKPOL_Values<SPI6::I2SCFGR, 3, 1, ReadWriteMode, SPI6I2SCFGRBase> ;
    using DATLEN = SPI6_I2SCFGR_DATLEN_Values<SPI6::I2SCFGR, 1, 2, ReadWriteMode, SPI6I2SCFGRBase> ;
    using CHLEN = SPI6_I2SCFGR_CHLEN_Values<SPI6::I2SCFGR, 0, 1, ReadWriteMode, SPI6I2SCFGRBase> ;
    using FieldValues = SPI6_I2SCFGR_CHLEN_Values<SPI6::I2SCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x4001541C, 32, ReadWriteMode, SPI6I2SCFGRBase, T...> ;

  struct SPI6I2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40015420, 32, ReadWriteMode>
  {
    using MCKOE = SPI6_I2SPR_MCKOE_Values<SPI6::I2SPR, 9, 1, ReadWriteMode, SPI6I2SPRBase> ;
    using ODD = SPI6_I2SPR_ODD_Values<SPI6::I2SPR, 8, 1, ReadWriteMode, SPI6I2SPRBase> ;
    using I2SDIV = SPI6_I2SPR_I2SDIV_Values<SPI6::I2SPR, 0, 8, ReadWriteMode, SPI6I2SPRBase> ;
    using FieldValues = SPI6_I2SPR_I2SDIV_Values<SPI6::I2SPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40015420, 32, ReadWriteMode, SPI6I2SPRBase, T...> ;

} ;

#endif //#if !defined(SPI6REGISTERS_HPP)
