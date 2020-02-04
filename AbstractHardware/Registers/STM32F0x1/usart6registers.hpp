/*******************************************************************************
* Filename      : usart6registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USART6REGISTERS_HPP)
#define USART6REGISTERS_HPP

#include "usart6fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART6
{
  struct USART6CR1Base {} ;

  struct CR1 : public RegisterBase<0x40011400, 32, ReadWriteMode>
  {
    using UE = USART6_CR1_UE_Values<USART6::CR1, 0, 1, ReadWriteMode, USART6CR1Base> ;
    using UESM = USART6_CR1_UESM_Values<USART6::CR1, 1, 1, ReadWriteMode, USART6CR1Base> ;
    using RE = USART6_CR1_RE_Values<USART6::CR1, 2, 1, ReadWriteMode, USART6CR1Base> ;
    using TE = USART6_CR1_TE_Values<USART6::CR1, 3, 1, ReadWriteMode, USART6CR1Base> ;
    using IDLEIE = USART6_CR1_IDLEIE_Values<USART6::CR1, 4, 1, ReadWriteMode, USART6CR1Base> ;
    using RXNEIE = USART6_CR1_RXNEIE_Values<USART6::CR1, 5, 1, ReadWriteMode, USART6CR1Base> ;
    using TCIE = USART6_CR1_TCIE_Values<USART6::CR1, 6, 1, ReadWriteMode, USART6CR1Base> ;
    using TXEIE = USART6_CR1_TXEIE_Values<USART6::CR1, 7, 1, ReadWriteMode, USART6CR1Base> ;
    using PEIE = USART6_CR1_PEIE_Values<USART6::CR1, 8, 1, ReadWriteMode, USART6CR1Base> ;
    using PS = USART6_CR1_PS_Values<USART6::CR1, 9, 1, ReadWriteMode, USART6CR1Base> ;
    using PCE = USART6_CR1_PCE_Values<USART6::CR1, 10, 1, ReadWriteMode, USART6CR1Base> ;
    using WAKE = USART6_CR1_WAKE_Values<USART6::CR1, 11, 1, ReadWriteMode, USART6CR1Base> ;
    using M = USART6_CR1_M_Values<USART6::CR1, 12, 1, ReadWriteMode, USART6CR1Base> ;
    using MME = USART6_CR1_MME_Values<USART6::CR1, 13, 1, ReadWriteMode, USART6CR1Base> ;
    using CMIE = USART6_CR1_CMIE_Values<USART6::CR1, 14, 1, ReadWriteMode, USART6CR1Base> ;
    using OVER8 = USART6_CR1_OVER8_Values<USART6::CR1, 15, 1, ReadWriteMode, USART6CR1Base> ;
    using DEDT = USART6_CR1_DEDT_Values<USART6::CR1, 16, 5, ReadWriteMode, USART6CR1Base> ;
    using DEAT = USART6_CR1_DEAT_Values<USART6::CR1, 21, 5, ReadWriteMode, USART6CR1Base> ;
    using RTOIE = USART6_CR1_RTOIE_Values<USART6::CR1, 26, 1, ReadWriteMode, USART6CR1Base> ;
    using EOBIE = USART6_CR1_EOBIE_Values<USART6::CR1, 27, 1, ReadWriteMode, USART6CR1Base> ;
    using M1 = USART6_CR1_M1_Values<USART6::CR1, 28, 1, ReadWriteMode, USART6CR1Base> ;
    using FieldValues = USART6_CR1_M1_Values<USART6::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40011400, 32, ReadWriteMode, USART6CR1Base, T...> ;

  struct USART6CR2Base {} ;

  struct CR2 : public RegisterBase<0x40011404, 32, ReadWriteMode>
  {
    using ADD4 = USART6_CR2_ADD4_Values<USART6::CR2, 28, 4, ReadWriteMode, USART6CR2Base> ;
    using ADD0 = USART6_CR2_ADD0_Values<USART6::CR2, 24, 4, ReadWriteMode, USART6CR2Base> ;
    using RTOEN = USART6_CR2_RTOEN_Values<USART6::CR2, 23, 1, ReadWriteMode, USART6CR2Base> ;
    using ABRMOD = USART6_CR2_ABRMOD_Values<USART6::CR2, 21, 2, ReadWriteMode, USART6CR2Base> ;
    using ABREN = USART6_CR2_ABREN_Values<USART6::CR2, 20, 1, ReadWriteMode, USART6CR2Base> ;
    using MSBFIRST = USART6_CR2_MSBFIRST_Values<USART6::CR2, 19, 1, ReadWriteMode, USART6CR2Base> ;
    using DATAINV = USART6_CR2_DATAINV_Values<USART6::CR2, 18, 1, ReadWriteMode, USART6CR2Base> ;
    using TXINV = USART6_CR2_TXINV_Values<USART6::CR2, 17, 1, ReadWriteMode, USART6CR2Base> ;
    using RXINV = USART6_CR2_RXINV_Values<USART6::CR2, 16, 1, ReadWriteMode, USART6CR2Base> ;
    using SWAP = USART6_CR2_SWAP_Values<USART6::CR2, 15, 1, ReadWriteMode, USART6CR2Base> ;
    using LINEN = USART6_CR2_LINEN_Values<USART6::CR2, 14, 1, ReadWriteMode, USART6CR2Base> ;
    using STOP = USART6_CR2_STOP_Values<USART6::CR2, 12, 2, ReadWriteMode, USART6CR2Base> ;
    using CLKEN = USART6_CR2_CLKEN_Values<USART6::CR2, 11, 1, ReadWriteMode, USART6CR2Base> ;
    using CPOL = USART6_CR2_CPOL_Values<USART6::CR2, 10, 1, ReadWriteMode, USART6CR2Base> ;
    using CPHA = USART6_CR2_CPHA_Values<USART6::CR2, 9, 1, ReadWriteMode, USART6CR2Base> ;
    using LBCL = USART6_CR2_LBCL_Values<USART6::CR2, 8, 1, ReadWriteMode, USART6CR2Base> ;
    using LBDIE = USART6_CR2_LBDIE_Values<USART6::CR2, 6, 1, ReadWriteMode, USART6CR2Base> ;
    using LBDL = USART6_CR2_LBDL_Values<USART6::CR2, 5, 1, ReadWriteMode, USART6CR2Base> ;
    using ADDM7 = USART6_CR2_ADDM7_Values<USART6::CR2, 4, 1, ReadWriteMode, USART6CR2Base> ;
    using FieldValues = USART6_CR2_ADDM7_Values<USART6::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40011404, 32, ReadWriteMode, USART6CR2Base, T...> ;

  struct USART6CR3Base {} ;

  struct CR3 : public RegisterBase<0x40011408, 32, ReadWriteMode>
  {
    using WUFIE = USART6_CR3_WUFIE_Values<USART6::CR3, 22, 1, ReadWriteMode, USART6CR3Base> ;
    using WUS = USART6_CR3_WUS_Values<USART6::CR3, 20, 2, ReadWriteMode, USART6CR3Base> ;
    using SCARCNT = USART6_CR3_SCARCNT_Values<USART6::CR3, 17, 3, ReadWriteMode, USART6CR3Base> ;
    using DEP = USART6_CR3_DEP_Values<USART6::CR3, 15, 1, ReadWriteMode, USART6CR3Base> ;
    using DEM = USART6_CR3_DEM_Values<USART6::CR3, 14, 1, ReadWriteMode, USART6CR3Base> ;
    using DDRE = USART6_CR3_DDRE_Values<USART6::CR3, 13, 1, ReadWriteMode, USART6CR3Base> ;
    using OVRDIS = USART6_CR3_OVRDIS_Values<USART6::CR3, 12, 1, ReadWriteMode, USART6CR3Base> ;
    using ONEBIT = USART6_CR3_ONEBIT_Values<USART6::CR3, 11, 1, ReadWriteMode, USART6CR3Base> ;
    using CTSIE = USART6_CR3_CTSIE_Values<USART6::CR3, 10, 1, ReadWriteMode, USART6CR3Base> ;
    using CTSE = USART6_CR3_CTSE_Values<USART6::CR3, 9, 1, ReadWriteMode, USART6CR3Base> ;
    using RTSE = USART6_CR3_RTSE_Values<USART6::CR3, 8, 1, ReadWriteMode, USART6CR3Base> ;
    using DMAT = USART6_CR3_DMAT_Values<USART6::CR3, 7, 1, ReadWriteMode, USART6CR3Base> ;
    using DMAR = USART6_CR3_DMAR_Values<USART6::CR3, 6, 1, ReadWriteMode, USART6CR3Base> ;
    using SCEN = USART6_CR3_SCEN_Values<USART6::CR3, 5, 1, ReadWriteMode, USART6CR3Base> ;
    using NACK = USART6_CR3_NACK_Values<USART6::CR3, 4, 1, ReadWriteMode, USART6CR3Base> ;
    using HDSEL = USART6_CR3_HDSEL_Values<USART6::CR3, 3, 1, ReadWriteMode, USART6CR3Base> ;
    using IRLP = USART6_CR3_IRLP_Values<USART6::CR3, 2, 1, ReadWriteMode, USART6CR3Base> ;
    using IREN = USART6_CR3_IREN_Values<USART6::CR3, 1, 1, ReadWriteMode, USART6CR3Base> ;
    using EIE = USART6_CR3_EIE_Values<USART6::CR3, 0, 1, ReadWriteMode, USART6CR3Base> ;
    using FieldValues = USART6_CR3_EIE_Values<USART6::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40011408, 32, ReadWriteMode, USART6CR3Base, T...> ;

  struct USART6BRRBase {} ;

  struct BRR : public RegisterBase<0x4001140C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART6_BRR_DIV_Mantissa_Values<USART6::BRR, 4, 12, ReadWriteMode, USART6BRRBase> ;
    using DIV_Fraction = USART6_BRR_DIV_Fraction_Values<USART6::BRR, 0, 4, ReadWriteMode, USART6BRRBase> ;
    using FieldValues = USART6_BRR_DIV_Fraction_Values<USART6::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4001140C, 32, ReadWriteMode, USART6BRRBase, T...> ;

  struct USART6GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40011410, 32, ReadWriteMode>
  {
    using GT = USART6_GTPR_GT_Values<USART6::GTPR, 8, 8, ReadWriteMode, USART6GTPRBase> ;
    using PSC = USART6_GTPR_PSC_Values<USART6::GTPR, 0, 8, ReadWriteMode, USART6GTPRBase> ;
    using FieldValues = USART6_GTPR_PSC_Values<USART6::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40011410, 32, ReadWriteMode, USART6GTPRBase, T...> ;

  struct USART6RTORBase {} ;

  struct RTOR : public RegisterBase<0x40011414, 32, ReadWriteMode>
  {
    using BLEN = USART6_RTOR_BLEN_Values<USART6::RTOR, 24, 8, ReadWriteMode, USART6RTORBase> ;
    using RTO = USART6_RTOR_RTO_Values<USART6::RTOR, 0, 24, ReadWriteMode, USART6RTORBase> ;
    using FieldValues = USART6_RTOR_RTO_Values<USART6::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40011414, 32, ReadWriteMode, USART6RTORBase, T...> ;

  struct USART6RQRBase {} ;

  struct RQR : public RegisterBase<0x40011418, 32, ReadWriteMode>
  {
    using TXFRQ = USART6_RQR_TXFRQ_Values<USART6::RQR, 4, 1, ReadWriteMode, USART6RQRBase> ;
    using RXFRQ = USART6_RQR_RXFRQ_Values<USART6::RQR, 3, 1, ReadWriteMode, USART6RQRBase> ;
    using MMRQ = USART6_RQR_MMRQ_Values<USART6::RQR, 2, 1, ReadWriteMode, USART6RQRBase> ;
    using SBKRQ = USART6_RQR_SBKRQ_Values<USART6::RQR, 1, 1, ReadWriteMode, USART6RQRBase> ;
    using ABRRQ = USART6_RQR_ABRRQ_Values<USART6::RQR, 0, 1, ReadWriteMode, USART6RQRBase> ;
    using FieldValues = USART6_RQR_ABRRQ_Values<USART6::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40011418, 32, ReadWriteMode, USART6RQRBase, T...> ;

  struct USART6ISRBase {} ;

  struct ISR : public RegisterBase<0x4001141C, 32, ReadMode>
  {
    using REACK = USART6_ISR_REACK_Values<USART6::ISR, 22, 1, ReadMode, USART6ISRBase> ;
    using TEACK = USART6_ISR_TEACK_Values<USART6::ISR, 21, 1, ReadMode, USART6ISRBase> ;
    using WUF = USART6_ISR_WUF_Values<USART6::ISR, 20, 1, ReadMode, USART6ISRBase> ;
    using RWU = USART6_ISR_RWU_Values<USART6::ISR, 19, 1, ReadMode, USART6ISRBase> ;
    using SBKF = USART6_ISR_SBKF_Values<USART6::ISR, 18, 1, ReadMode, USART6ISRBase> ;
    using CMF = USART6_ISR_CMF_Values<USART6::ISR, 17, 1, ReadMode, USART6ISRBase> ;
    using BUSY = USART6_ISR_BUSY_Values<USART6::ISR, 16, 1, ReadMode, USART6ISRBase> ;
    using ABRF = USART6_ISR_ABRF_Values<USART6::ISR, 15, 1, ReadMode, USART6ISRBase> ;
    using ABRE = USART6_ISR_ABRE_Values<USART6::ISR, 14, 1, ReadMode, USART6ISRBase> ;
    using EOBF = USART6_ISR_EOBF_Values<USART6::ISR, 12, 1, ReadMode, USART6ISRBase> ;
    using RTOF = USART6_ISR_RTOF_Values<USART6::ISR, 11, 1, ReadMode, USART6ISRBase> ;
    using CTS = USART6_ISR_CTS_Values<USART6::ISR, 10, 1, ReadMode, USART6ISRBase> ;
    using CTSIF = USART6_ISR_CTSIF_Values<USART6::ISR, 9, 1, ReadMode, USART6ISRBase> ;
    using LBDF = USART6_ISR_LBDF_Values<USART6::ISR, 8, 1, ReadMode, USART6ISRBase> ;
    using TXE = USART6_ISR_TXE_Values<USART6::ISR, 7, 1, ReadMode, USART6ISRBase> ;
    using TC = USART6_ISR_TC_Values<USART6::ISR, 6, 1, ReadMode, USART6ISRBase> ;
    using RXNE = USART6_ISR_RXNE_Values<USART6::ISR, 5, 1, ReadMode, USART6ISRBase> ;
    using IDLE = USART6_ISR_IDLE_Values<USART6::ISR, 4, 1, ReadMode, USART6ISRBase> ;
    using ORE = USART6_ISR_ORE_Values<USART6::ISR, 3, 1, ReadMode, USART6ISRBase> ;
    using NF = USART6_ISR_NF_Values<USART6::ISR, 2, 1, ReadMode, USART6ISRBase> ;
    using FE = USART6_ISR_FE_Values<USART6::ISR, 1, 1, ReadMode, USART6ISRBase> ;
    using PE = USART6_ISR_PE_Values<USART6::ISR, 0, 1, ReadMode, USART6ISRBase> ;
    using FieldValues = USART6_ISR_PE_Values<USART6::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4001141C, 32, ReadMode, USART6ISRBase, T...> ;

  struct USART6ICRBase {} ;

  struct ICR : public RegisterBase<0x40011420, 32, ReadWriteMode>
  {
    using WUCF = USART6_ICR_WUCF_Values<USART6::ICR, 20, 1, ReadWriteMode, USART6ICRBase> ;
    using CMCF = USART6_ICR_CMCF_Values<USART6::ICR, 17, 1, ReadWriteMode, USART6ICRBase> ;
    using EOBCF = USART6_ICR_EOBCF_Values<USART6::ICR, 12, 1, ReadWriteMode, USART6ICRBase> ;
    using RTOCF = USART6_ICR_RTOCF_Values<USART6::ICR, 11, 1, ReadWriteMode, USART6ICRBase> ;
    using CTSCF = USART6_ICR_CTSCF_Values<USART6::ICR, 9, 1, ReadWriteMode, USART6ICRBase> ;
    using LBDCF = USART6_ICR_LBDCF_Values<USART6::ICR, 8, 1, ReadWriteMode, USART6ICRBase> ;
    using TCCF = USART6_ICR_TCCF_Values<USART6::ICR, 6, 1, ReadWriteMode, USART6ICRBase> ;
    using IDLECF = USART6_ICR_IDLECF_Values<USART6::ICR, 4, 1, ReadWriteMode, USART6ICRBase> ;
    using ORECF = USART6_ICR_ORECF_Values<USART6::ICR, 3, 1, ReadWriteMode, USART6ICRBase> ;
    using NCF = USART6_ICR_NCF_Values<USART6::ICR, 2, 1, ReadWriteMode, USART6ICRBase> ;
    using FECF = USART6_ICR_FECF_Values<USART6::ICR, 1, 1, ReadWriteMode, USART6ICRBase> ;
    using PECF = USART6_ICR_PECF_Values<USART6::ICR, 0, 1, ReadWriteMode, USART6ICRBase> ;
    using FieldValues = USART6_ICR_PECF_Values<USART6::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40011420, 32, ReadWriteMode, USART6ICRBase, T...> ;

  struct USART6RDRBase {} ;

  struct RDR : public RegisterBase<0x40011424, 32, ReadMode>
  {
    using RDRField = USART6_RDR_RDR_Values<USART6::RDR, 0, 9, ReadMode, USART6RDRBase> ;
    using FieldValues = USART6_RDR_RDR_Values<USART6::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40011424, 32, ReadMode, USART6RDRBase, T...> ;

  struct USART6TDRBase {} ;

  struct TDR : public RegisterBase<0x40011428, 32, ReadWriteMode>
  {
    using TDRField = USART6_TDR_TDR_Values<USART6::TDR, 0, 9, ReadWriteMode, USART6TDRBase> ;
    using FieldValues = USART6_TDR_TDR_Values<USART6::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40011428, 32, ReadWriteMode, USART6TDRBase, T...> ;

} ;

#endif //#if !defined(USART6REGISTERS_HPP)
