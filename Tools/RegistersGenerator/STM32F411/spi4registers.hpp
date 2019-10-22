/*******************************************************************************
* Filename      : spi4registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SPI4REGISTERS_HPP)
#define SPI4REGISTERS_HPP

#include "spi4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI4
{
  struct SPI4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40013400, 32, ReadWriteMode>
  {
    using BIDIMODE = SPI4_CR1_BIDIMODE_Values<SPI4::CR1, 15, 1, ReadWriteMode, SPI4CR1Base> ;
    using BIDIOE = SPI4_CR1_BIDIOE_Values<SPI4::CR1, 14, 1, ReadWriteMode, SPI4CR1Base> ;
    using CRCEN = SPI4_CR1_CRCEN_Values<SPI4::CR1, 13, 1, ReadWriteMode, SPI4CR1Base> ;
    using CRCNEXT = SPI4_CR1_CRCNEXT_Values<SPI4::CR1, 12, 1, ReadWriteMode, SPI4CR1Base> ;
    using DFF = SPI4_CR1_DFF_Values<SPI4::CR1, 11, 1, ReadWriteMode, SPI4CR1Base> ;
    using RXONLY = SPI4_CR1_RXONLY_Values<SPI4::CR1, 10, 1, ReadWriteMode, SPI4CR1Base> ;
    using SSM = SPI4_CR1_SSM_Values<SPI4::CR1, 9, 1, ReadWriteMode, SPI4CR1Base> ;
    using SSI = SPI4_CR1_SSI_Values<SPI4::CR1, 8, 1, ReadWriteMode, SPI4CR1Base> ;
    using LSBFIRST = SPI4_CR1_LSBFIRST_Values<SPI4::CR1, 7, 1, ReadWriteMode, SPI4CR1Base> ;
    using SPE = SPI4_CR1_SPE_Values<SPI4::CR1, 6, 1, ReadWriteMode, SPI4CR1Base> ;
    using BR = SPI4_CR1_BR_Values<SPI4::CR1, 3, 3, ReadWriteMode, SPI4CR1Base> ;
    using MSTR = SPI4_CR1_MSTR_Values<SPI4::CR1, 2, 1, ReadWriteMode, SPI4CR1Base> ;
    using CPOL = SPI4_CR1_CPOL_Values<SPI4::CR1, 1, 1, ReadWriteMode, SPI4CR1Base> ;
    using CPHA = SPI4_CR1_CPHA_Values<SPI4::CR1, 0, 1, ReadWriteMode, SPI4CR1Base> ;
    using FieldValues = SPI4_CR1_CPHA_Values<SPI4::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40013400, 32, ReadWriteMode, SPI4CR1Base, T...> ;

  struct SPI4CR2Base {} ;

  struct CR2 : public RegisterBase<0x40013404, 32, ReadWriteMode>
  {
    using TXEIE = SPI4_CR2_TXEIE_Values<SPI4::CR2, 7, 1, ReadWriteMode, SPI4CR2Base> ;
    using RXNEIE = SPI4_CR2_RXNEIE_Values<SPI4::CR2, 6, 1, ReadWriteMode, SPI4CR2Base> ;
    using ERRIE = SPI4_CR2_ERRIE_Values<SPI4::CR2, 5, 1, ReadWriteMode, SPI4CR2Base> ;
    using FRF = SPI4_CR2_FRF_Values<SPI4::CR2, 4, 1, ReadWriteMode, SPI4CR2Base> ;
    using SSOE = SPI4_CR2_SSOE_Values<SPI4::CR2, 2, 1, ReadWriteMode, SPI4CR2Base> ;
    using TXDMAEN = SPI4_CR2_TXDMAEN_Values<SPI4::CR2, 1, 1, ReadWriteMode, SPI4CR2Base> ;
    using RXDMAEN = SPI4_CR2_RXDMAEN_Values<SPI4::CR2, 0, 1, ReadWriteMode, SPI4CR2Base> ;
    using FieldValues = SPI4_CR2_RXDMAEN_Values<SPI4::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40013404, 32, ReadWriteMode, SPI4CR2Base, T...> ;

  struct SPI4SRBase {} ;

  struct SR : public RegisterBase<0x40013408, 32, ReadWriteMode>
  {
    using TIFRFE = SPI4_SR_TIFRFE_Values<SPI4::SR, 8, 1, ReadMode, SPI4SRBase> ;
    using BSY = SPI4_SR_BSY_Values<SPI4::SR, 7, 1, ReadMode, SPI4SRBase> ;
    using OVR = SPI4_SR_OVR_Values<SPI4::SR, 6, 1, ReadMode, SPI4SRBase> ;
    using MODF = SPI4_SR_MODF_Values<SPI4::SR, 5, 1, ReadMode, SPI4SRBase> ;
    using CRCERR = SPI4_SR_CRCERR_Values<SPI4::SR, 4, 1, ReadWriteMode, SPI4SRBase> ;
    using UDR = SPI4_SR_UDR_Values<SPI4::SR, 3, 1, ReadMode, SPI4SRBase> ;
    using CHSIDE = SPI4_SR_CHSIDE_Values<SPI4::SR, 2, 1, ReadMode, SPI4SRBase> ;
    using TXE = SPI4_SR_TXE_Values<SPI4::SR, 1, 1, ReadMode, SPI4SRBase> ;
    using RXNE = SPI4_SR_RXNE_Values<SPI4::SR, 0, 1, ReadMode, SPI4SRBase> ;
    using FieldValues = SPI4_SR_RXNE_Values<SPI4::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40013408, 32, ReadWriteMode, SPI4SRBase, T...> ;

  struct SPI4DRBase {} ;

  struct DR : public RegisterBase<0x4001340C, 32, ReadWriteMode>
  {
    using DRField = SPI4_DR_DR_Values<SPI4::DR, 0, 16, ReadWriteMode, SPI4DRBase> ;
    using FieldValues = SPI4_DR_DR_Values<SPI4::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4001340C, 32, ReadWriteMode, SPI4DRBase, T...> ;

  struct SPI4CRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40013410, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI4_CRCPR_CRCPOLY_Values<SPI4::CRCPR, 0, 16, ReadWriteMode, SPI4CRCPRBase> ;
    using FieldValues = SPI4_CRCPR_CRCPOLY_Values<SPI4::CRCPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40013410, 32, ReadWriteMode, SPI4CRCPRBase, T...> ;

  struct SPI4RXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40013414, 32, ReadMode>
  {
    using RxCRC = SPI4_RXCRCR_RxCRC_Values<SPI4::RXCRCR, 0, 16, ReadMode, SPI4RXCRCRBase> ;
    using FieldValues = SPI4_RXCRCR_RxCRC_Values<SPI4::RXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40013414, 32, ReadMode, SPI4RXCRCRBase, T...> ;

  struct SPI4TXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40013418, 32, ReadMode>
  {
    using TxCRC = SPI4_TXCRCR_TxCRC_Values<SPI4::TXCRCR, 0, 16, ReadMode, SPI4TXCRCRBase> ;
    using FieldValues = SPI4_TXCRCR_TxCRC_Values<SPI4::TXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40013418, 32, ReadMode, SPI4TXCRCRBase, T...> ;

  struct SPI4I2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x4001341C, 32, ReadWriteMode>
  {
    using I2SMOD = SPI4_I2SCFGR_I2SMOD_Values<SPI4::I2SCFGR, 11, 1, ReadWriteMode, SPI4I2SCFGRBase> ;
    using I2SE = SPI4_I2SCFGR_I2SE_Values<SPI4::I2SCFGR, 10, 1, ReadWriteMode, SPI4I2SCFGRBase> ;
    using I2SCFG = SPI4_I2SCFGR_I2SCFG_Values<SPI4::I2SCFGR, 8, 2, ReadWriteMode, SPI4I2SCFGRBase> ;
    using PCMSYNC = SPI4_I2SCFGR_PCMSYNC_Values<SPI4::I2SCFGR, 7, 1, ReadWriteMode, SPI4I2SCFGRBase> ;
    using I2SSTD = SPI4_I2SCFGR_I2SSTD_Values<SPI4::I2SCFGR, 4, 2, ReadWriteMode, SPI4I2SCFGRBase> ;
    using CKPOL = SPI4_I2SCFGR_CKPOL_Values<SPI4::I2SCFGR, 3, 1, ReadWriteMode, SPI4I2SCFGRBase> ;
    using DATLEN = SPI4_I2SCFGR_DATLEN_Values<SPI4::I2SCFGR, 1, 2, ReadWriteMode, SPI4I2SCFGRBase> ;
    using CHLEN = SPI4_I2SCFGR_CHLEN_Values<SPI4::I2SCFGR, 0, 1, ReadWriteMode, SPI4I2SCFGRBase> ;
    using FieldValues = SPI4_I2SCFGR_CHLEN_Values<SPI4::I2SCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x4001341C, 32, ReadWriteMode, SPI4I2SCFGRBase, T...> ;

  struct SPI4I2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40013420, 32, ReadWriteMode>
  {
    using MCKOE = SPI4_I2SPR_MCKOE_Values<SPI4::I2SPR, 9, 1, ReadWriteMode, SPI4I2SPRBase> ;
    using ODD = SPI4_I2SPR_ODD_Values<SPI4::I2SPR, 8, 1, ReadWriteMode, SPI4I2SPRBase> ;
    using I2SDIV = SPI4_I2SPR_I2SDIV_Values<SPI4::I2SPR, 0, 8, ReadWriteMode, SPI4I2SPRBase> ;
    using FieldValues = SPI4_I2SPR_I2SDIV_Values<SPI4::I2SPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40013420, 32, ReadWriteMode, SPI4I2SPRBase, T...> ;

} ;

#endif //#if !defined(SPI4REGISTERS_HPP)
