/*******************************************************************************
* Filename      : usart1registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USART1REGISTERS_HPP)
#define USART1REGISTERS_HPP

#include "usart1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART1
{
  struct USART1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40013800, 32, ReadWriteMode>
  {
    using UE = USART1_CR1_UE_Values<USART1::CR1, 0, 1, ReadWriteMode, USART1CR1Base> ;
    using UESM = USART1_CR1_UESM_Values<USART1::CR1, 1, 1, ReadWriteMode, USART1CR1Base> ;
    using RE = USART1_CR1_RE_Values<USART1::CR1, 2, 1, ReadWriteMode, USART1CR1Base> ;
    using TE = USART1_CR1_TE_Values<USART1::CR1, 3, 1, ReadWriteMode, USART1CR1Base> ;
    using IDLEIE = USART1_CR1_IDLEIE_Values<USART1::CR1, 4, 1, ReadWriteMode, USART1CR1Base> ;
    using RXNEIE = USART1_CR1_RXNEIE_Values<USART1::CR1, 5, 1, ReadWriteMode, USART1CR1Base> ;
    using TCIE = USART1_CR1_TCIE_Values<USART1::CR1, 6, 1, ReadWriteMode, USART1CR1Base> ;
    using TXEIE = USART1_CR1_TXEIE_Values<USART1::CR1, 7, 1, ReadWriteMode, USART1CR1Base> ;
    using PEIE = USART1_CR1_PEIE_Values<USART1::CR1, 8, 1, ReadWriteMode, USART1CR1Base> ;
    using PS = USART1_CR1_PS_Values<USART1::CR1, 9, 1, ReadWriteMode, USART1CR1Base> ;
    using PCE = USART1_CR1_PCE_Values<USART1::CR1, 10, 1, ReadWriteMode, USART1CR1Base> ;
    using WAKE = USART1_CR1_WAKE_Values<USART1::CR1, 11, 1, ReadWriteMode, USART1CR1Base> ;
    using M = USART1_CR1_M_Values<USART1::CR1, 12, 1, ReadWriteMode, USART1CR1Base> ;
    using MME = USART1_CR1_MME_Values<USART1::CR1, 13, 1, ReadWriteMode, USART1CR1Base> ;
    using CMIE = USART1_CR1_CMIE_Values<USART1::CR1, 14, 1, ReadWriteMode, USART1CR1Base> ;
    using OVER8 = USART1_CR1_OVER8_Values<USART1::CR1, 15, 1, ReadWriteMode, USART1CR1Base> ;
    using DEDT = USART1_CR1_DEDT_Values<USART1::CR1, 16, 5, ReadWriteMode, USART1CR1Base> ;
    using DEAT = USART1_CR1_DEAT_Values<USART1::CR1, 21, 5, ReadWriteMode, USART1CR1Base> ;
    using RTOIE = USART1_CR1_RTOIE_Values<USART1::CR1, 26, 1, ReadWriteMode, USART1CR1Base> ;
    using EOBIE = USART1_CR1_EOBIE_Values<USART1::CR1, 27, 1, ReadWriteMode, USART1CR1Base> ;
    using M1 = USART1_CR1_M1_Values<USART1::CR1, 28, 1, ReadWriteMode, USART1CR1Base> ;
    using FieldValues = USART1_CR1_M1_Values<USART1::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40013800, 32, ReadWriteMode, USART1CR1Base, T...> ;

  struct USART1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40013804, 32, ReadWriteMode>
  {
    using ADD4 = USART1_CR2_ADD4_Values<USART1::CR2, 28, 4, ReadWriteMode, USART1CR2Base> ;
    using ADD0 = USART1_CR2_ADD0_Values<USART1::CR2, 24, 4, ReadWriteMode, USART1CR2Base> ;
    using RTOEN = USART1_CR2_RTOEN_Values<USART1::CR2, 23, 1, ReadWriteMode, USART1CR2Base> ;
    using ABRMOD = USART1_CR2_ABRMOD_Values<USART1::CR2, 21, 2, ReadWriteMode, USART1CR2Base> ;
    using ABREN = USART1_CR2_ABREN_Values<USART1::CR2, 20, 1, ReadWriteMode, USART1CR2Base> ;
    using MSBFIRST = USART1_CR2_MSBFIRST_Values<USART1::CR2, 19, 1, ReadWriteMode, USART1CR2Base> ;
    using DATAINV = USART1_CR2_DATAINV_Values<USART1::CR2, 18, 1, ReadWriteMode, USART1CR2Base> ;
    using TXINV = USART1_CR2_TXINV_Values<USART1::CR2, 17, 1, ReadWriteMode, USART1CR2Base> ;
    using RXINV = USART1_CR2_RXINV_Values<USART1::CR2, 16, 1, ReadWriteMode, USART1CR2Base> ;
    using SWAP = USART1_CR2_SWAP_Values<USART1::CR2, 15, 1, ReadWriteMode, USART1CR2Base> ;
    using LINEN = USART1_CR2_LINEN_Values<USART1::CR2, 14, 1, ReadWriteMode, USART1CR2Base> ;
    using STOP = USART1_CR2_STOP_Values<USART1::CR2, 12, 2, ReadWriteMode, USART1CR2Base> ;
    using CLKEN = USART1_CR2_CLKEN_Values<USART1::CR2, 11, 1, ReadWriteMode, USART1CR2Base> ;
    using CPOL = USART1_CR2_CPOL_Values<USART1::CR2, 10, 1, ReadWriteMode, USART1CR2Base> ;
    using CPHA = USART1_CR2_CPHA_Values<USART1::CR2, 9, 1, ReadWriteMode, USART1CR2Base> ;
    using LBCL = USART1_CR2_LBCL_Values<USART1::CR2, 8, 1, ReadWriteMode, USART1CR2Base> ;
    using LBDIE = USART1_CR2_LBDIE_Values<USART1::CR2, 6, 1, ReadWriteMode, USART1CR2Base> ;
    using LBDL = USART1_CR2_LBDL_Values<USART1::CR2, 5, 1, ReadWriteMode, USART1CR2Base> ;
    using ADDM7 = USART1_CR2_ADDM7_Values<USART1::CR2, 4, 1, ReadWriteMode, USART1CR2Base> ;
    using FieldValues = USART1_CR2_ADDM7_Values<USART1::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40013804, 32, ReadWriteMode, USART1CR2Base, T...> ;

  struct USART1CR3Base {} ;

  struct CR3 : public RegisterBase<0x40013808, 32, ReadWriteMode>
  {
    using WUFIE = USART1_CR3_WUFIE_Values<USART1::CR3, 22, 1, ReadWriteMode, USART1CR3Base> ;
    using WUS = USART1_CR3_WUS_Values<USART1::CR3, 20, 2, ReadWriteMode, USART1CR3Base> ;
    using SCARCNT = USART1_CR3_SCARCNT_Values<USART1::CR3, 17, 3, ReadWriteMode, USART1CR3Base> ;
    using DEP = USART1_CR3_DEP_Values<USART1::CR3, 15, 1, ReadWriteMode, USART1CR3Base> ;
    using DEM = USART1_CR3_DEM_Values<USART1::CR3, 14, 1, ReadWriteMode, USART1CR3Base> ;
    using DDRE = USART1_CR3_DDRE_Values<USART1::CR3, 13, 1, ReadWriteMode, USART1CR3Base> ;
    using OVRDIS = USART1_CR3_OVRDIS_Values<USART1::CR3, 12, 1, ReadWriteMode, USART1CR3Base> ;
    using ONEBIT = USART1_CR3_ONEBIT_Values<USART1::CR3, 11, 1, ReadWriteMode, USART1CR3Base> ;
    using CTSIE = USART1_CR3_CTSIE_Values<USART1::CR3, 10, 1, ReadWriteMode, USART1CR3Base> ;
    using CTSE = USART1_CR3_CTSE_Values<USART1::CR3, 9, 1, ReadWriteMode, USART1CR3Base> ;
    using RTSE = USART1_CR3_RTSE_Values<USART1::CR3, 8, 1, ReadWriteMode, USART1CR3Base> ;
    using DMAT = USART1_CR3_DMAT_Values<USART1::CR3, 7, 1, ReadWriteMode, USART1CR3Base> ;
    using DMAR = USART1_CR3_DMAR_Values<USART1::CR3, 6, 1, ReadWriteMode, USART1CR3Base> ;
    using SCEN = USART1_CR3_SCEN_Values<USART1::CR3, 5, 1, ReadWriteMode, USART1CR3Base> ;
    using NACK = USART1_CR3_NACK_Values<USART1::CR3, 4, 1, ReadWriteMode, USART1CR3Base> ;
    using HDSEL = USART1_CR3_HDSEL_Values<USART1::CR3, 3, 1, ReadWriteMode, USART1CR3Base> ;
    using IRLP = USART1_CR3_IRLP_Values<USART1::CR3, 2, 1, ReadWriteMode, USART1CR3Base> ;
    using IREN = USART1_CR3_IREN_Values<USART1::CR3, 1, 1, ReadWriteMode, USART1CR3Base> ;
    using EIE = USART1_CR3_EIE_Values<USART1::CR3, 0, 1, ReadWriteMode, USART1CR3Base> ;
    using FieldValues = USART1_CR3_EIE_Values<USART1::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40013808, 32, ReadWriteMode, USART1CR3Base, T...> ;

  struct USART1BRRBase {} ;

  struct BRR : public RegisterBase<0x4001380C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART1_BRR_DIV_Mantissa_Values<USART1::BRR, 4, 12, ReadWriteMode, USART1BRRBase> ;
    using DIV_Fraction = USART1_BRR_DIV_Fraction_Values<USART1::BRR, 0, 4, ReadWriteMode, USART1BRRBase> ;
    using FieldValues = USART1_BRR_DIV_Fraction_Values<USART1::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4001380C, 32, ReadWriteMode, USART1BRRBase, T...> ;

  struct USART1GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40013810, 32, ReadWriteMode>
  {
    using GT = USART1_GTPR_GT_Values<USART1::GTPR, 8, 8, ReadWriteMode, USART1GTPRBase> ;
    using PSC = USART1_GTPR_PSC_Values<USART1::GTPR, 0, 8, ReadWriteMode, USART1GTPRBase> ;
    using FieldValues = USART1_GTPR_PSC_Values<USART1::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40013810, 32, ReadWriteMode, USART1GTPRBase, T...> ;

  struct USART1RTORBase {} ;

  struct RTOR : public RegisterBase<0x40013814, 32, ReadWriteMode>
  {
    using BLEN = USART1_RTOR_BLEN_Values<USART1::RTOR, 24, 8, ReadWriteMode, USART1RTORBase> ;
    using RTO = USART1_RTOR_RTO_Values<USART1::RTOR, 0, 24, ReadWriteMode, USART1RTORBase> ;
    using FieldValues = USART1_RTOR_RTO_Values<USART1::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40013814, 32, ReadWriteMode, USART1RTORBase, T...> ;

  struct USART1RQRBase {} ;

  struct RQR : public RegisterBase<0x40013818, 32, ReadWriteMode>
  {
    using TXFRQ = USART1_RQR_TXFRQ_Values<USART1::RQR, 4, 1, ReadWriteMode, USART1RQRBase> ;
    using RXFRQ = USART1_RQR_RXFRQ_Values<USART1::RQR, 3, 1, ReadWriteMode, USART1RQRBase> ;
    using MMRQ = USART1_RQR_MMRQ_Values<USART1::RQR, 2, 1, ReadWriteMode, USART1RQRBase> ;
    using SBKRQ = USART1_RQR_SBKRQ_Values<USART1::RQR, 1, 1, ReadWriteMode, USART1RQRBase> ;
    using ABRRQ = USART1_RQR_ABRRQ_Values<USART1::RQR, 0, 1, ReadWriteMode, USART1RQRBase> ;
    using FieldValues = USART1_RQR_ABRRQ_Values<USART1::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40013818, 32, ReadWriteMode, USART1RQRBase, T...> ;

  struct USART1ISRBase {} ;

  struct ISR : public RegisterBase<0x4001381C, 32, ReadMode>
  {
    using REACK = USART1_ISR_REACK_Values<USART1::ISR, 22, 1, ReadMode, USART1ISRBase> ;
    using TEACK = USART1_ISR_TEACK_Values<USART1::ISR, 21, 1, ReadMode, USART1ISRBase> ;
    using WUF = USART1_ISR_WUF_Values<USART1::ISR, 20, 1, ReadMode, USART1ISRBase> ;
    using RWU = USART1_ISR_RWU_Values<USART1::ISR, 19, 1, ReadMode, USART1ISRBase> ;
    using SBKF = USART1_ISR_SBKF_Values<USART1::ISR, 18, 1, ReadMode, USART1ISRBase> ;
    using CMF = USART1_ISR_CMF_Values<USART1::ISR, 17, 1, ReadMode, USART1ISRBase> ;
    using BUSY = USART1_ISR_BUSY_Values<USART1::ISR, 16, 1, ReadMode, USART1ISRBase> ;
    using ABRF = USART1_ISR_ABRF_Values<USART1::ISR, 15, 1, ReadMode, USART1ISRBase> ;
    using ABRE = USART1_ISR_ABRE_Values<USART1::ISR, 14, 1, ReadMode, USART1ISRBase> ;
    using EOBF = USART1_ISR_EOBF_Values<USART1::ISR, 12, 1, ReadMode, USART1ISRBase> ;
    using RTOF = USART1_ISR_RTOF_Values<USART1::ISR, 11, 1, ReadMode, USART1ISRBase> ;
    using CTS = USART1_ISR_CTS_Values<USART1::ISR, 10, 1, ReadMode, USART1ISRBase> ;
    using CTSIF = USART1_ISR_CTSIF_Values<USART1::ISR, 9, 1, ReadMode, USART1ISRBase> ;
    using LBDF = USART1_ISR_LBDF_Values<USART1::ISR, 8, 1, ReadMode, USART1ISRBase> ;
    using TXE = USART1_ISR_TXE_Values<USART1::ISR, 7, 1, ReadMode, USART1ISRBase> ;
    using TC = USART1_ISR_TC_Values<USART1::ISR, 6, 1, ReadMode, USART1ISRBase> ;
    using RXNE = USART1_ISR_RXNE_Values<USART1::ISR, 5, 1, ReadMode, USART1ISRBase> ;
    using IDLE = USART1_ISR_IDLE_Values<USART1::ISR, 4, 1, ReadMode, USART1ISRBase> ;
    using ORE = USART1_ISR_ORE_Values<USART1::ISR, 3, 1, ReadMode, USART1ISRBase> ;
    using NF = USART1_ISR_NF_Values<USART1::ISR, 2, 1, ReadMode, USART1ISRBase> ;
    using FE = USART1_ISR_FE_Values<USART1::ISR, 1, 1, ReadMode, USART1ISRBase> ;
    using PE = USART1_ISR_PE_Values<USART1::ISR, 0, 1, ReadMode, USART1ISRBase> ;
    using FieldValues = USART1_ISR_PE_Values<USART1::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4001381C, 32, ReadMode, USART1ISRBase, T...> ;

  struct USART1ICRBase {} ;

  struct ICR : public RegisterBase<0x40013820, 32, ReadWriteMode>
  {
    using WUCF = USART1_ICR_WUCF_Values<USART1::ICR, 20, 1, ReadWriteMode, USART1ICRBase> ;
    using CMCF = USART1_ICR_CMCF_Values<USART1::ICR, 17, 1, ReadWriteMode, USART1ICRBase> ;
    using EOBCF = USART1_ICR_EOBCF_Values<USART1::ICR, 12, 1, ReadWriteMode, USART1ICRBase> ;
    using RTOCF = USART1_ICR_RTOCF_Values<USART1::ICR, 11, 1, ReadWriteMode, USART1ICRBase> ;
    using CTSCF = USART1_ICR_CTSCF_Values<USART1::ICR, 9, 1, ReadWriteMode, USART1ICRBase> ;
    using LBDCF = USART1_ICR_LBDCF_Values<USART1::ICR, 8, 1, ReadWriteMode, USART1ICRBase> ;
    using TCCF = USART1_ICR_TCCF_Values<USART1::ICR, 6, 1, ReadWriteMode, USART1ICRBase> ;
    using IDLECF = USART1_ICR_IDLECF_Values<USART1::ICR, 4, 1, ReadWriteMode, USART1ICRBase> ;
    using ORECF = USART1_ICR_ORECF_Values<USART1::ICR, 3, 1, ReadWriteMode, USART1ICRBase> ;
    using NCF = USART1_ICR_NCF_Values<USART1::ICR, 2, 1, ReadWriteMode, USART1ICRBase> ;
    using FECF = USART1_ICR_FECF_Values<USART1::ICR, 1, 1, ReadWriteMode, USART1ICRBase> ;
    using PECF = USART1_ICR_PECF_Values<USART1::ICR, 0, 1, ReadWriteMode, USART1ICRBase> ;
    using FieldValues = USART1_ICR_PECF_Values<USART1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40013820, 32, ReadWriteMode, USART1ICRBase, T...> ;

  struct USART1RDRBase {} ;

  struct RDR : public RegisterBase<0x40013824, 32, ReadMode>
  {
    using RDRField = USART1_RDR_RDR_Values<USART1::RDR, 0, 9, ReadMode, USART1RDRBase> ;
    using FieldValues = USART1_RDR_RDR_Values<USART1::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40013824, 32, ReadMode, USART1RDRBase, T...> ;

  struct USART1TDRBase {} ;

  struct TDR : public RegisterBase<0x40013828, 32, ReadWriteMode>
  {
    using TDRField = USART1_TDR_TDR_Values<USART1::TDR, 0, 9, ReadWriteMode, USART1TDRBase> ;
    using FieldValues = USART1_TDR_TDR_Values<USART1::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40013828, 32, ReadWriteMode, USART1TDRBase, T...> ;

} ;

#endif //#if !defined(USART1REGISTERS_HPP)
