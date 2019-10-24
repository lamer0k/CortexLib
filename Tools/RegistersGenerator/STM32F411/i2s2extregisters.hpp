/*******************************************************************************
* Filename      : i2s2extregisters.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2S2EXTREGISTERS_HPP)
#define I2S2EXTREGISTERS_HPP

#include "i2s2extfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2S2ext
{
  struct I2S2extCR1Base {} ;

  struct CR1 : public RegisterBase<0x40003400, 32, ReadWriteMode>
  {
    using BIDIMODE = I2S2ext_CR1_BIDIMODE_Values<I2S2ext::CR1, 15, 1, ReadWriteMode, I2S2extCR1Base> ;
    using BIDIOE = I2S2ext_CR1_BIDIOE_Values<I2S2ext::CR1, 14, 1, ReadWriteMode, I2S2extCR1Base> ;
    using CRCEN = I2S2ext_CR1_CRCEN_Values<I2S2ext::CR1, 13, 1, ReadWriteMode, I2S2extCR1Base> ;
    using CRCNEXT = I2S2ext_CR1_CRCNEXT_Values<I2S2ext::CR1, 12, 1, ReadWriteMode, I2S2extCR1Base> ;
    using DFF = I2S2ext_CR1_DFF_Values<I2S2ext::CR1, 11, 1, ReadWriteMode, I2S2extCR1Base> ;
    using RXONLY = I2S2ext_CR1_RXONLY_Values<I2S2ext::CR1, 10, 1, ReadWriteMode, I2S2extCR1Base> ;
    using SSM = I2S2ext_CR1_SSM_Values<I2S2ext::CR1, 9, 1, ReadWriteMode, I2S2extCR1Base> ;
    using SSI = I2S2ext_CR1_SSI_Values<I2S2ext::CR1, 8, 1, ReadWriteMode, I2S2extCR1Base> ;
    using LSBFIRST = I2S2ext_CR1_LSBFIRST_Values<I2S2ext::CR1, 7, 1, ReadWriteMode, I2S2extCR1Base> ;
    using SPE = I2S2ext_CR1_SPE_Values<I2S2ext::CR1, 6, 1, ReadWriteMode, I2S2extCR1Base> ;
    using BR = I2S2ext_CR1_BR_Values<I2S2ext::CR1, 3, 3, ReadWriteMode, I2S2extCR1Base> ;
    using MSTR = I2S2ext_CR1_MSTR_Values<I2S2ext::CR1, 2, 1, ReadWriteMode, I2S2extCR1Base> ;
    using CPOL = I2S2ext_CR1_CPOL_Values<I2S2ext::CR1, 1, 1, ReadWriteMode, I2S2extCR1Base> ;
    using CPHA = I2S2ext_CR1_CPHA_Values<I2S2ext::CR1, 0, 1, ReadWriteMode, I2S2extCR1Base> ;
    using FieldValues = I2S2ext_CR1_CPHA_Values<I2S2ext::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40003400, 32, ReadWriteMode, I2S2extCR1Base, T...> ;

  struct I2S2extCR2Base {} ;

  struct CR2 : public RegisterBase<0x40003404, 32, ReadWriteMode>
  {
    using TXEIE = I2S2ext_CR2_TXEIE_Values<I2S2ext::CR2, 7, 1, ReadWriteMode, I2S2extCR2Base> ;
    using RXNEIE = I2S2ext_CR2_RXNEIE_Values<I2S2ext::CR2, 6, 1, ReadWriteMode, I2S2extCR2Base> ;
    using ERRIE = I2S2ext_CR2_ERRIE_Values<I2S2ext::CR2, 5, 1, ReadWriteMode, I2S2extCR2Base> ;
    using FRF = I2S2ext_CR2_FRF_Values<I2S2ext::CR2, 4, 1, ReadWriteMode, I2S2extCR2Base> ;
    using SSOE = I2S2ext_CR2_SSOE_Values<I2S2ext::CR2, 2, 1, ReadWriteMode, I2S2extCR2Base> ;
    using TXDMAEN = I2S2ext_CR2_TXDMAEN_Values<I2S2ext::CR2, 1, 1, ReadWriteMode, I2S2extCR2Base> ;
    using RXDMAEN = I2S2ext_CR2_RXDMAEN_Values<I2S2ext::CR2, 0, 1, ReadWriteMode, I2S2extCR2Base> ;
    using FieldValues = I2S2ext_CR2_RXDMAEN_Values<I2S2ext::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40003404, 32, ReadWriteMode, I2S2extCR2Base, T...> ;

  struct I2S2extSRBase {} ;

  struct SR : public RegisterBase<0x40003408, 32, ReadWriteMode>
  {
    using TIFRFE = I2S2ext_SR_TIFRFE_Values<I2S2ext::SR, 8, 1, ReadMode, I2S2extSRBase> ;
    using BSY = I2S2ext_SR_BSY_Values<I2S2ext::SR, 7, 1, ReadMode, I2S2extSRBase> ;
    using OVR = I2S2ext_SR_OVR_Values<I2S2ext::SR, 6, 1, ReadMode, I2S2extSRBase> ;
    using MODF = I2S2ext_SR_MODF_Values<I2S2ext::SR, 5, 1, ReadMode, I2S2extSRBase> ;
    using CRCERR = I2S2ext_SR_CRCERR_Values<I2S2ext::SR, 4, 1, ReadWriteMode, I2S2extSRBase> ;
    using UDR = I2S2ext_SR_UDR_Values<I2S2ext::SR, 3, 1, ReadMode, I2S2extSRBase> ;
    using CHSIDE = I2S2ext_SR_CHSIDE_Values<I2S2ext::SR, 2, 1, ReadMode, I2S2extSRBase> ;
    using TXE = I2S2ext_SR_TXE_Values<I2S2ext::SR, 1, 1, ReadMode, I2S2extSRBase> ;
    using RXNE = I2S2ext_SR_RXNE_Values<I2S2ext::SR, 0, 1, ReadMode, I2S2extSRBase> ;
    using FieldValues = I2S2ext_SR_RXNE_Values<I2S2ext::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40003408, 32, ReadWriteMode, I2S2extSRBase, T...> ;

  struct I2S2extDRBase {} ;

  struct DR : public RegisterBase<0x4000340C, 32, ReadWriteMode>
  {
    using DRField = I2S2ext_DR_DR_Values<I2S2ext::DR, 0, 16, ReadWriteMode, I2S2extDRBase> ;
    using FieldValues = I2S2ext_DR_DR_Values<I2S2ext::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4000340C, 32, ReadWriteMode, I2S2extDRBase, T...> ;

  struct I2S2extCRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40003410, 32, ReadWriteMode>
  {
    using CRCPOLY = I2S2ext_CRCPR_CRCPOLY_Values<I2S2ext::CRCPR, 0, 16, ReadWriteMode, I2S2extCRCPRBase> ;
    using FieldValues = I2S2ext_CRCPR_CRCPOLY_Values<I2S2ext::CRCPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40003410, 32, ReadWriteMode, I2S2extCRCPRBase, T...> ;

  struct I2S2extRXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40003414, 32, ReadMode>
  {
    using RxCRC = I2S2ext_RXCRCR_RxCRC_Values<I2S2ext::RXCRCR, 0, 16, ReadMode, I2S2extRXCRCRBase> ;
    using FieldValues = I2S2ext_RXCRCR_RxCRC_Values<I2S2ext::RXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40003414, 32, ReadMode, I2S2extRXCRCRBase, T...> ;

  struct I2S2extTXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40003418, 32, ReadMode>
  {
    using TxCRC = I2S2ext_TXCRCR_TxCRC_Values<I2S2ext::TXCRCR, 0, 16, ReadMode, I2S2extTXCRCRBase> ;
    using FieldValues = I2S2ext_TXCRCR_TxCRC_Values<I2S2ext::TXCRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40003418, 32, ReadMode, I2S2extTXCRCRBase, T...> ;

  struct I2S2extI2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x4000341C, 32, ReadWriteMode>
  {
    using I2SMOD = I2S2ext_I2SCFGR_I2SMOD_Values<I2S2ext::I2SCFGR, 11, 1, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using I2SE = I2S2ext_I2SCFGR_I2SE_Values<I2S2ext::I2SCFGR, 10, 1, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using I2SCFG = I2S2ext_I2SCFGR_I2SCFG_Values<I2S2ext::I2SCFGR, 8, 2, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using PCMSYNC = I2S2ext_I2SCFGR_PCMSYNC_Values<I2S2ext::I2SCFGR, 7, 1, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using I2SSTD = I2S2ext_I2SCFGR_I2SSTD_Values<I2S2ext::I2SCFGR, 4, 2, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using CKPOL = I2S2ext_I2SCFGR_CKPOL_Values<I2S2ext::I2SCFGR, 3, 1, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using DATLEN = I2S2ext_I2SCFGR_DATLEN_Values<I2S2ext::I2SCFGR, 1, 2, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using CHLEN = I2S2ext_I2SCFGR_CHLEN_Values<I2S2ext::I2SCFGR, 0, 1, ReadWriteMode, I2S2extI2SCFGRBase> ;
    using FieldValues = I2S2ext_I2SCFGR_CHLEN_Values<I2S2ext::I2SCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x4000341C, 32, ReadWriteMode, I2S2extI2SCFGRBase, T...> ;

  struct I2S2extI2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40003420, 32, ReadWriteMode>
  {
    using MCKOE = I2S2ext_I2SPR_MCKOE_Values<I2S2ext::I2SPR, 9, 1, ReadWriteMode, I2S2extI2SPRBase> ;
    using ODD = I2S2ext_I2SPR_ODD_Values<I2S2ext::I2SPR, 8, 1, ReadWriteMode, I2S2extI2SPRBase> ;
    using I2SDIV = I2S2ext_I2SPR_I2SDIV_Values<I2S2ext::I2SPR, 0, 8, ReadWriteMode, I2S2extI2SPRBase> ;
    using FieldValues = I2S2ext_I2SPR_I2SDIV_Values<I2S2ext::I2SPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40003420, 32, ReadWriteMode, I2S2extI2SPRBase, T...> ;

} ;

#endif //#if !defined(I2S2EXTREGISTERS_HPP)
