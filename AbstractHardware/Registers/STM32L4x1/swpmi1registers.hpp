/*******************************************************************************
* Filename      : swpmi1registers.hpp
*
* Details       : Single Wire Protocol Master Interface. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(SWPMI1REGISTERS_HPP)
#define SWPMI1REGISTERS_HPP

#include "swpmi1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SWPMI1
{
  struct SWPMI1CRBase {} ;

  struct CR : public RegisterBase<0x40008800, 32, ReadWriteMode>
  {
    using RXDMA = SWPMI1_CR_RXDMA_Values<SWPMI1::CR, 0, 1, ReadWriteMode, SWPMI1CRBase> ;
    using TXDMA = SWPMI1_CR_TXDMA_Values<SWPMI1::CR, 1, 1, ReadWriteMode, SWPMI1CRBase> ;
    using RXMODE = SWPMI1_CR_RXMODE_Values<SWPMI1::CR, 2, 1, ReadWriteMode, SWPMI1CRBase> ;
    using TXMODE = SWPMI1_CR_TXMODE_Values<SWPMI1::CR, 3, 1, ReadWriteMode, SWPMI1CRBase> ;
    using LPBK = SWPMI1_CR_LPBK_Values<SWPMI1::CR, 4, 1, ReadWriteMode, SWPMI1CRBase> ;
    using SWPME = SWPMI1_CR_SWPME_Values<SWPMI1::CR, 5, 1, ReadWriteMode, SWPMI1CRBase> ;
    using DEACT = SWPMI1_CR_DEACT_Values<SWPMI1::CR, 10, 1, ReadWriteMode, SWPMI1CRBase> ;
    using FieldValues = SWPMI1_CR_DEACT_Values<SWPMI1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40008800, 32, ReadWriteMode, SWPMI1CRBase, T...> ;

  struct SWPMI1BRRBase {} ;

  struct BRR : public RegisterBase<0x40008804, 32, ReadWriteMode>
  {
    using BR = SWPMI1_BRR_BR_Values<SWPMI1::BRR, 0, 6, ReadWriteMode, SWPMI1BRRBase> ;
    using FieldValues = SWPMI1_BRR_BR_Values<SWPMI1::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40008804, 32, ReadWriteMode, SWPMI1BRRBase, T...> ;

  struct SWPMI1ISRBase {} ;

  struct ISR : public RegisterBase<0x4000880C, 32, ReadMode>
  {
    using RXBFF = SWPMI1_ISR_RXBFF_Values<SWPMI1::ISR, 0, 1, ReadMode, SWPMI1ISRBase> ;
    using TXBEF = SWPMI1_ISR_TXBEF_Values<SWPMI1::ISR, 1, 1, ReadMode, SWPMI1ISRBase> ;
    using RXBERF = SWPMI1_ISR_RXBERF_Values<SWPMI1::ISR, 2, 1, ReadMode, SWPMI1ISRBase> ;
    using RXOVRF = SWPMI1_ISR_RXOVRF_Values<SWPMI1::ISR, 3, 1, ReadMode, SWPMI1ISRBase> ;
    using TXUNRF = SWPMI1_ISR_TXUNRF_Values<SWPMI1::ISR, 4, 1, ReadMode, SWPMI1ISRBase> ;
    using RXNE = SWPMI1_ISR_RXNE_Values<SWPMI1::ISR, 5, 1, ReadMode, SWPMI1ISRBase> ;
    using TXE = SWPMI1_ISR_TXE_Values<SWPMI1::ISR, 6, 1, ReadMode, SWPMI1ISRBase> ;
    using TCF = SWPMI1_ISR_TCF_Values<SWPMI1::ISR, 7, 1, ReadMode, SWPMI1ISRBase> ;
    using SRF = SWPMI1_ISR_SRF_Values<SWPMI1::ISR, 8, 1, ReadMode, SWPMI1ISRBase> ;
    using SUSP = SWPMI1_ISR_SUSP_Values<SWPMI1::ISR, 9, 1, ReadMode, SWPMI1ISRBase> ;
    using DEACTF = SWPMI1_ISR_DEACTF_Values<SWPMI1::ISR, 10, 1, ReadMode, SWPMI1ISRBase> ;
    using FieldValues = SWPMI1_ISR_DEACTF_Values<SWPMI1::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000880C, 32, ReadMode, SWPMI1ISRBase, T...> ;

  struct SWPMI1ICRBase {} ;

  struct ICR : public RegisterBase<0x40008810, 32, WriteMode>
  {
    using CRXBFF = SWPMI1_ICR_CRXBFF_Values<SWPMI1::ICR, 0, 1, WriteMode, SWPMI1ICRBase> ;
    using CTXBEF = SWPMI1_ICR_CTXBEF_Values<SWPMI1::ICR, 1, 1, WriteMode, SWPMI1ICRBase> ;
    using CRXBERF = SWPMI1_ICR_CRXBERF_Values<SWPMI1::ICR, 2, 1, WriteMode, SWPMI1ICRBase> ;
    using CRXOVRF = SWPMI1_ICR_CRXOVRF_Values<SWPMI1::ICR, 3, 1, WriteMode, SWPMI1ICRBase> ;
    using CTXUNRF = SWPMI1_ICR_CTXUNRF_Values<SWPMI1::ICR, 4, 1, WriteMode, SWPMI1ICRBase> ;
    using CTCF = SWPMI1_ICR_CTCF_Values<SWPMI1::ICR, 7, 1, WriteMode, SWPMI1ICRBase> ;
    using CSRF = SWPMI1_ICR_CSRF_Values<SWPMI1::ICR, 8, 1, WriteMode, SWPMI1ICRBase> ;
    using FieldValues = SWPMI1_ICR_CSRF_Values<SWPMI1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40008810, 32, WriteMode, SWPMI1ICRBase, T...> ;

  struct SWPMI1IERBase {} ;

  struct IER : public RegisterBase<0x40008814, 32, ReadWriteMode>
  {
    using RXBFIE = SWPMI1_IER_RXBFIE_Values<SWPMI1::IER, 0, 1, ReadWriteMode, SWPMI1IERBase> ;
    using TXBEIE = SWPMI1_IER_TXBEIE_Values<SWPMI1::IER, 1, 1, ReadWriteMode, SWPMI1IERBase> ;
    using RXBERIE = SWPMI1_IER_RXBERIE_Values<SWPMI1::IER, 2, 1, ReadWriteMode, SWPMI1IERBase> ;
    using RXOVRIE = SWPMI1_IER_RXOVRIE_Values<SWPMI1::IER, 3, 1, ReadWriteMode, SWPMI1IERBase> ;
    using TXUNRIE = SWPMI1_IER_TXUNRIE_Values<SWPMI1::IER, 4, 1, ReadWriteMode, SWPMI1IERBase> ;
    using RIE = SWPMI1_IER_RIE_Values<SWPMI1::IER, 5, 1, ReadWriteMode, SWPMI1IERBase> ;
    using TIE = SWPMI1_IER_TIE_Values<SWPMI1::IER, 6, 1, ReadWriteMode, SWPMI1IERBase> ;
    using TCIE = SWPMI1_IER_TCIE_Values<SWPMI1::IER, 7, 1, ReadWriteMode, SWPMI1IERBase> ;
    using SRIE = SWPMI1_IER_SRIE_Values<SWPMI1::IER, 8, 1, ReadWriteMode, SWPMI1IERBase> ;
    using FieldValues = SWPMI1_IER_SRIE_Values<SWPMI1::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40008814, 32, ReadWriteMode, SWPMI1IERBase, T...> ;

  struct SWPMI1RFLBase {} ;

  struct RFL : public RegisterBase<0x40008818, 32, ReadMode>
  {
    using RFLField = SWPMI1_RFL_RFL_Values<SWPMI1::RFL, 0, 5, ReadMode, SWPMI1RFLBase> ;
    using FieldValues = SWPMI1_RFL_RFL_Values<SWPMI1::RFL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFLPack  = Register<0x40008818, 32, ReadMode, SWPMI1RFLBase, T...> ;

  struct SWPMI1TDRBase {} ;

  struct TDR : public RegisterBase<0x4000881C, 32, WriteMode>
  {
    using TD = SWPMI1_TDR_TD_Values<SWPMI1::TDR, 0, 32, WriteMode, SWPMI1TDRBase> ;
    using FieldValues = SWPMI1_TDR_TD_Values<SWPMI1::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x4000881C, 32, WriteMode, SWPMI1TDRBase, T...> ;

  struct SWPMI1RDRBase {} ;

  struct RDR : public RegisterBase<0x40008820, 32, ReadMode>
  {
    using RD = SWPMI1_RDR_RD_Values<SWPMI1::RDR, 0, 32, ReadMode, SWPMI1RDRBase> ;
    using FieldValues = SWPMI1_RDR_RD_Values<SWPMI1::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40008820, 32, ReadMode, SWPMI1RDRBase, T...> ;

} ;

#endif //#if !defined(SWPMI1REGISTERS_HPP)
