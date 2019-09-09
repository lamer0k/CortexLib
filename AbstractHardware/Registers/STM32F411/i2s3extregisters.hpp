/*******************************************************************************
* Filename      : i2s3extregisters.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2S3EXTREGISTERS_HPP)
#define I2S3EXTREGISTERS_HPP

#include "i2s3extfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2S3ext
{
  struct I2S3extCR1Base {} ;

  struct CR1 : public RegisterBase<0x40004000, 32, ReadWriteMode>
  {
    using BIDIMODE = ISext_CR_BIDIMODE_Values<I2S3ext::CR1, 15, 1, ReadWriteMode, I2S3extCR1Base> ;
    using BIDIOE = ISext_CR_BIDIOE_Values<I2S3ext::CR1, 14, 1, ReadWriteMode, I2S3extCR1Base> ;
    using CRCEN = ISext_CR_CRCEN_Values<I2S3ext::CR1, 13, 1, ReadWriteMode, I2S3extCR1Base> ;
    using CRCNEXT = ISext_CR_CRCNEXT_Values<I2S3ext::CR1, 12, 1, ReadWriteMode, I2S3extCR1Base> ;
    using DFF = ISext_CR_DFF_Values<I2S3ext::CR1, 11, 1, ReadWriteMode, I2S3extCR1Base> ;
    using RXONLY = ISext_CR_RXONLY_Values<I2S3ext::CR1, 10, 1, ReadWriteMode, I2S3extCR1Base> ;
    using SSM = ISext_CR_SSM_Values<I2S3ext::CR1, 9, 1, ReadWriteMode, I2S3extCR1Base> ;
    using SSI = ISext_CR_SSI_Values<I2S3ext::CR1, 8, 1, ReadWriteMode, I2S3extCR1Base> ;
    using LSBFIRST = ISext_CR_LSBFIRST_Values<I2S3ext::CR1, 7, 1, ReadWriteMode, I2S3extCR1Base> ;
    using SPE = ISext_CR_SPE_Values<I2S3ext::CR1, 6, 1, ReadWriteMode, I2S3extCR1Base> ;
    using BR = ISext_CR_BR_Values<I2S3ext::CR1, 3, 3, ReadWriteMode, I2S3extCR1Base> ;
    using MSTR = ISext_CR_MSTR_Values<I2S3ext::CR1, 2, 1, ReadWriteMode, I2S3extCR1Base> ;
    using CPOL = ISext_CR_CPOL_Values<I2S3ext::CR1, 1, 1, ReadWriteMode, I2S3extCR1Base> ;
    using CPHA = ISext_CR_CPHA_Values<I2S3ext::CR1, 0, 1, ReadWriteMode, I2S3extCR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40004000, 32, ReadWriteMode, I2S3extCR1Base, T...> ;

  struct I2S3extCR2Base {} ;

  struct CR2 : public RegisterBase<0x40004004, 32, ReadWriteMode>
  {
    using TXEIE = ISext_CR_TXEIE_Values<I2S3ext::CR2, 7, 1, ReadWriteMode, I2S3extCR2Base> ;
    using RXNEIE = ISext_CR_RXNEIE_Values<I2S3ext::CR2, 6, 1, ReadWriteMode, I2S3extCR2Base> ;
    using ERRIE = ISext_CR_ERRIE_Values<I2S3ext::CR2, 5, 1, ReadWriteMode, I2S3extCR2Base> ;
    using FRF = ISext_CR_FRF_Values<I2S3ext::CR2, 4, 1, ReadWriteMode, I2S3extCR2Base> ;
    using SSOE = ISext_CR_SSOE_Values<I2S3ext::CR2, 2, 1, ReadWriteMode, I2S3extCR2Base> ;
    using TXDMAEN = ISext_CR_TXDMAEN_Values<I2S3ext::CR2, 1, 1, ReadWriteMode, I2S3extCR2Base> ;
    using RXDMAEN = ISext_CR_RXDMAEN_Values<I2S3ext::CR2, 0, 1, ReadWriteMode, I2S3extCR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004004, 32, ReadWriteMode, I2S3extCR2Base, T...> ;

  struct I2S3extSRBase {} ;

  struct SR : public RegisterBase<0x40004008, 32, ReadWriteMode>
  {
    using TIFRFE = ISext_SR_TIFRFE_Values<I2S3ext::SR, 8, 1, ReadMode, I2S3extSRBase> ;
    using BSY = ISext_SR_BSY_Values<I2S3ext::SR, 7, 1, ReadMode, I2S3extSRBase> ;
    using OVR = ISext_SR_OVR_Values<I2S3ext::SR, 6, 1, ReadMode, I2S3extSRBase> ;
    using MODF = ISext_SR_MODF_Values<I2S3ext::SR, 5, 1, ReadMode, I2S3extSRBase> ;
    using CRCERR = ISext_SR_CRCERR_Values<I2S3ext::SR, 4, 1, ReadWriteMode, I2S3extSRBase> ;
    using UDR = ISext_SR_UDR_Values<I2S3ext::SR, 3, 1, ReadMode, I2S3extSRBase> ;
    using CHSIDE = ISext_SR_CHSIDE_Values<I2S3ext::SR, 2, 1, ReadMode, I2S3extSRBase> ;
    using TXE = ISext_SR_TXE_Values<I2S3ext::SR, 1, 1, ReadMode, I2S3extSRBase> ;
    using RXNE = ISext_SR_RXNE_Values<I2S3ext::SR, 0, 1, ReadMode, I2S3extSRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40004008, 32, ReadWriteMode, I2S3extSRBase, T...> ;

  struct I2S3extDRBase {} ;

  struct DR : public RegisterBase<0x4000400C, 32, ReadWriteMode>
  {
    using DRField = ISext_DR_DR_Values<I2S3ext::DR, 0, 16, ReadWriteMode, I2S3extDRBase> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4000400C, 32, ReadWriteMode, I2S3extDRBase, T...> ;

  struct I2S3extCRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40004010, 32, ReadWriteMode>
  {
    using CRCPOLY = ISext_CRCPR_CRCPOLY_Values<I2S3ext::CRCPR, 0, 16, ReadWriteMode, I2S3extCRCPRBase> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40004010, 32, ReadWriteMode, I2S3extCRCPRBase, T...> ;

  struct I2S3extRXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40004014, 32, ReadMode>
  {
    using RxCRC = ISext_RXCRCR_RxCRC_Values<I2S3ext::RXCRCR, 0, 16, ReadMode, I2S3extRXCRCRBase> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40004014, 32, ReadMode, I2S3extRXCRCRBase, T...> ;

  struct I2S3extTXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40004018, 32, ReadMode>
  {
    using TxCRC = ISext_TXCRCR_TxCRC_Values<I2S3ext::TXCRCR, 0, 16, ReadMode, I2S3extTXCRCRBase> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40004018, 32, ReadMode, I2S3extTXCRCRBase, T...> ;

  struct I2S3extI2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x4000401C, 32, ReadWriteMode>
  {
    using I2SMOD = ISext_ISCFGR_ISMOD_Values<I2S3ext::I2SCFGR, 11, 1, ReadWriteMode, I2S3extI2SCFGRBase> ;
    using I2SE = ISext_ISCFGR_ISE_Values<I2S3ext::I2SCFGR, 10, 1, ReadWriteMode, I2S3extI2SCFGRBase> ;
    using I2SCFG = ISext_ISCFGR_ISCFG_Values<I2S3ext::I2SCFGR, 8, 2, ReadWriteMode, I2S3extI2SCFGRBase> ;
    using PCMSYNC = ISext_ISCFGR_PCMSYNC_Values<I2S3ext::I2SCFGR, 7, 1, ReadWriteMode, I2S3extI2SCFGRBase> ;
    using I2SSTD = ISext_ISCFGR_ISSTD_Values<I2S3ext::I2SCFGR, 4, 2, ReadWriteMode, I2S3extI2SCFGRBase> ;
    using CKPOL = ISext_ISCFGR_CKPOL_Values<I2S3ext::I2SCFGR, 3, 1, ReadWriteMode, I2S3extI2SCFGRBase> ;
    using DATLEN = ISext_ISCFGR_DATLEN_Values<I2S3ext::I2SCFGR, 1, 2, ReadWriteMode, I2S3extI2SCFGRBase> ;
    using CHLEN = ISext_ISCFGR_CHLEN_Values<I2S3ext::I2SCFGR, 0, 1, ReadWriteMode, I2S3extI2SCFGRBase> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x4000401C, 32, ReadWriteMode, I2S3extI2SCFGRBase, T...> ;

  struct I2S3extI2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40004020, 32, ReadWriteMode>
  {
    using MCKOE = ISext_ISPR_MCKOE_Values<I2S3ext::I2SPR, 9, 1, ReadWriteMode, I2S3extI2SPRBase> ;
    using ODD = ISext_ISPR_ODD_Values<I2S3ext::I2SPR, 8, 1, ReadWriteMode, I2S3extI2SPRBase> ;
    using I2SDIV = ISext_ISPR_ISDIV_Values<I2S3ext::I2SPR, 0, 8, ReadWriteMode, I2S3extI2SPRBase> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40004020, 32, ReadWriteMode, I2S3extI2SPRBase, T...> ;

} ;

#endif //#if !defined(I2S3EXTREGISTERS_HPP)
