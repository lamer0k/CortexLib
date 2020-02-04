/*******************************************************************************
* Filename      : usart2registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USART2REGISTERS_HPP)
#define USART2REGISTERS_HPP

#include "usart2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART2
{
  struct USART2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40004400, 32, ReadWriteMode>
  {
    using UE = USART2_CR1_UE_Values<USART2::CR1, 0, 1, ReadWriteMode, USART2CR1Base> ;
    using UESM = USART2_CR1_UESM_Values<USART2::CR1, 1, 1, ReadWriteMode, USART2CR1Base> ;
    using RE = USART2_CR1_RE_Values<USART2::CR1, 2, 1, ReadWriteMode, USART2CR1Base> ;
    using TE = USART2_CR1_TE_Values<USART2::CR1, 3, 1, ReadWriteMode, USART2CR1Base> ;
    using IDLEIE = USART2_CR1_IDLEIE_Values<USART2::CR1, 4, 1, ReadWriteMode, USART2CR1Base> ;
    using RXNEIE = USART2_CR1_RXNEIE_Values<USART2::CR1, 5, 1, ReadWriteMode, USART2CR1Base> ;
    using TCIE = USART2_CR1_TCIE_Values<USART2::CR1, 6, 1, ReadWriteMode, USART2CR1Base> ;
    using TXEIE = USART2_CR1_TXEIE_Values<USART2::CR1, 7, 1, ReadWriteMode, USART2CR1Base> ;
    using PEIE = USART2_CR1_PEIE_Values<USART2::CR1, 8, 1, ReadWriteMode, USART2CR1Base> ;
    using PS = USART2_CR1_PS_Values<USART2::CR1, 9, 1, ReadWriteMode, USART2CR1Base> ;
    using PCE = USART2_CR1_PCE_Values<USART2::CR1, 10, 1, ReadWriteMode, USART2CR1Base> ;
    using WAKE = USART2_CR1_WAKE_Values<USART2::CR1, 11, 1, ReadWriteMode, USART2CR1Base> ;
    using M = USART2_CR1_M_Values<USART2::CR1, 12, 1, ReadWriteMode, USART2CR1Base> ;
    using MME = USART2_CR1_MME_Values<USART2::CR1, 13, 1, ReadWriteMode, USART2CR1Base> ;
    using CMIE = USART2_CR1_CMIE_Values<USART2::CR1, 14, 1, ReadWriteMode, USART2CR1Base> ;
    using OVER8 = USART2_CR1_OVER8_Values<USART2::CR1, 15, 1, ReadWriteMode, USART2CR1Base> ;
    using DEDT = USART2_CR1_DEDT_Values<USART2::CR1, 16, 5, ReadWriteMode, USART2CR1Base> ;
    using DEAT = USART2_CR1_DEAT_Values<USART2::CR1, 21, 5, ReadWriteMode, USART2CR1Base> ;
    using RTOIE = USART2_CR1_RTOIE_Values<USART2::CR1, 26, 1, ReadWriteMode, USART2CR1Base> ;
    using EOBIE = USART2_CR1_EOBIE_Values<USART2::CR1, 27, 1, ReadWriteMode, USART2CR1Base> ;
    using M1 = USART2_CR1_M1_Values<USART2::CR1, 28, 1, ReadWriteMode, USART2CR1Base> ;
    using FieldValues = USART2_CR1_M1_Values<USART2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40004400, 32, ReadWriteMode, USART2CR1Base, T...> ;

  struct USART2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40004404, 32, ReadWriteMode>
  {
    using ADD4 = USART2_CR2_ADD4_Values<USART2::CR2, 28, 4, ReadWriteMode, USART2CR2Base> ;
    using ADD0 = USART2_CR2_ADD0_Values<USART2::CR2, 24, 4, ReadWriteMode, USART2CR2Base> ;
    using RTOEN = USART2_CR2_RTOEN_Values<USART2::CR2, 23, 1, ReadWriteMode, USART2CR2Base> ;
    using ABRMOD = USART2_CR2_ABRMOD_Values<USART2::CR2, 21, 2, ReadWriteMode, USART2CR2Base> ;
    using ABREN = USART2_CR2_ABREN_Values<USART2::CR2, 20, 1, ReadWriteMode, USART2CR2Base> ;
    using MSBFIRST = USART2_CR2_MSBFIRST_Values<USART2::CR2, 19, 1, ReadWriteMode, USART2CR2Base> ;
    using DATAINV = USART2_CR2_DATAINV_Values<USART2::CR2, 18, 1, ReadWriteMode, USART2CR2Base> ;
    using TXINV = USART2_CR2_TXINV_Values<USART2::CR2, 17, 1, ReadWriteMode, USART2CR2Base> ;
    using RXINV = USART2_CR2_RXINV_Values<USART2::CR2, 16, 1, ReadWriteMode, USART2CR2Base> ;
    using SWAP = USART2_CR2_SWAP_Values<USART2::CR2, 15, 1, ReadWriteMode, USART2CR2Base> ;
    using LINEN = USART2_CR2_LINEN_Values<USART2::CR2, 14, 1, ReadWriteMode, USART2CR2Base> ;
    using STOP = USART2_CR2_STOP_Values<USART2::CR2, 12, 2, ReadWriteMode, USART2CR2Base> ;
    using CLKEN = USART2_CR2_CLKEN_Values<USART2::CR2, 11, 1, ReadWriteMode, USART2CR2Base> ;
    using CPOL = USART2_CR2_CPOL_Values<USART2::CR2, 10, 1, ReadWriteMode, USART2CR2Base> ;
    using CPHA = USART2_CR2_CPHA_Values<USART2::CR2, 9, 1, ReadWriteMode, USART2CR2Base> ;
    using LBCL = USART2_CR2_LBCL_Values<USART2::CR2, 8, 1, ReadWriteMode, USART2CR2Base> ;
    using LBDIE = USART2_CR2_LBDIE_Values<USART2::CR2, 6, 1, ReadWriteMode, USART2CR2Base> ;
    using LBDL = USART2_CR2_LBDL_Values<USART2::CR2, 5, 1, ReadWriteMode, USART2CR2Base> ;
    using ADDM7 = USART2_CR2_ADDM7_Values<USART2::CR2, 4, 1, ReadWriteMode, USART2CR2Base> ;
    using FieldValues = USART2_CR2_ADDM7_Values<USART2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004404, 32, ReadWriteMode, USART2CR2Base, T...> ;

  struct USART2CR3Base {} ;

  struct CR3 : public RegisterBase<0x40004408, 32, ReadWriteMode>
  {
    using WUFIE = USART2_CR3_WUFIE_Values<USART2::CR3, 22, 1, ReadWriteMode, USART2CR3Base> ;
    using WUS = USART2_CR3_WUS_Values<USART2::CR3, 20, 2, ReadWriteMode, USART2CR3Base> ;
    using SCARCNT = USART2_CR3_SCARCNT_Values<USART2::CR3, 17, 3, ReadWriteMode, USART2CR3Base> ;
    using DEP = USART2_CR3_DEP_Values<USART2::CR3, 15, 1, ReadWriteMode, USART2CR3Base> ;
    using DEM = USART2_CR3_DEM_Values<USART2::CR3, 14, 1, ReadWriteMode, USART2CR3Base> ;
    using DDRE = USART2_CR3_DDRE_Values<USART2::CR3, 13, 1, ReadWriteMode, USART2CR3Base> ;
    using OVRDIS = USART2_CR3_OVRDIS_Values<USART2::CR3, 12, 1, ReadWriteMode, USART2CR3Base> ;
    using ONEBIT = USART2_CR3_ONEBIT_Values<USART2::CR3, 11, 1, ReadWriteMode, USART2CR3Base> ;
    using CTSIE = USART2_CR3_CTSIE_Values<USART2::CR3, 10, 1, ReadWriteMode, USART2CR3Base> ;
    using CTSE = USART2_CR3_CTSE_Values<USART2::CR3, 9, 1, ReadWriteMode, USART2CR3Base> ;
    using RTSE = USART2_CR3_RTSE_Values<USART2::CR3, 8, 1, ReadWriteMode, USART2CR3Base> ;
    using DMAT = USART2_CR3_DMAT_Values<USART2::CR3, 7, 1, ReadWriteMode, USART2CR3Base> ;
    using DMAR = USART2_CR3_DMAR_Values<USART2::CR3, 6, 1, ReadWriteMode, USART2CR3Base> ;
    using SCEN = USART2_CR3_SCEN_Values<USART2::CR3, 5, 1, ReadWriteMode, USART2CR3Base> ;
    using NACK = USART2_CR3_NACK_Values<USART2::CR3, 4, 1, ReadWriteMode, USART2CR3Base> ;
    using HDSEL = USART2_CR3_HDSEL_Values<USART2::CR3, 3, 1, ReadWriteMode, USART2CR3Base> ;
    using IRLP = USART2_CR3_IRLP_Values<USART2::CR3, 2, 1, ReadWriteMode, USART2CR3Base> ;
    using IREN = USART2_CR3_IREN_Values<USART2::CR3, 1, 1, ReadWriteMode, USART2CR3Base> ;
    using EIE = USART2_CR3_EIE_Values<USART2::CR3, 0, 1, ReadWriteMode, USART2CR3Base> ;
    using FieldValues = USART2_CR3_EIE_Values<USART2::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40004408, 32, ReadWriteMode, USART2CR3Base, T...> ;

  struct USART2BRRBase {} ;

  struct BRR : public RegisterBase<0x4000440C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART2_BRR_DIV_Mantissa_Values<USART2::BRR, 4, 12, ReadWriteMode, USART2BRRBase> ;
    using DIV_Fraction = USART2_BRR_DIV_Fraction_Values<USART2::BRR, 0, 4, ReadWriteMode, USART2BRRBase> ;
    using FieldValues = USART2_BRR_DIV_Fraction_Values<USART2::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4000440C, 32, ReadWriteMode, USART2BRRBase, T...> ;

  struct USART2GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40004410, 32, ReadWriteMode>
  {
    using GT = USART2_GTPR_GT_Values<USART2::GTPR, 8, 8, ReadWriteMode, USART2GTPRBase> ;
    using PSC = USART2_GTPR_PSC_Values<USART2::GTPR, 0, 8, ReadWriteMode, USART2GTPRBase> ;
    using FieldValues = USART2_GTPR_PSC_Values<USART2::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40004410, 32, ReadWriteMode, USART2GTPRBase, T...> ;

  struct USART2RTORBase {} ;

  struct RTOR : public RegisterBase<0x40004414, 32, ReadWriteMode>
  {
    using BLEN = USART2_RTOR_BLEN_Values<USART2::RTOR, 24, 8, ReadWriteMode, USART2RTORBase> ;
    using RTO = USART2_RTOR_RTO_Values<USART2::RTOR, 0, 24, ReadWriteMode, USART2RTORBase> ;
    using FieldValues = USART2_RTOR_RTO_Values<USART2::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40004414, 32, ReadWriteMode, USART2RTORBase, T...> ;

  struct USART2RQRBase {} ;

  struct RQR : public RegisterBase<0x40004418, 32, ReadWriteMode>
  {
    using TXFRQ = USART2_RQR_TXFRQ_Values<USART2::RQR, 4, 1, ReadWriteMode, USART2RQRBase> ;
    using RXFRQ = USART2_RQR_RXFRQ_Values<USART2::RQR, 3, 1, ReadWriteMode, USART2RQRBase> ;
    using MMRQ = USART2_RQR_MMRQ_Values<USART2::RQR, 2, 1, ReadWriteMode, USART2RQRBase> ;
    using SBKRQ = USART2_RQR_SBKRQ_Values<USART2::RQR, 1, 1, ReadWriteMode, USART2RQRBase> ;
    using ABRRQ = USART2_RQR_ABRRQ_Values<USART2::RQR, 0, 1, ReadWriteMode, USART2RQRBase> ;
    using FieldValues = USART2_RQR_ABRRQ_Values<USART2::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40004418, 32, ReadWriteMode, USART2RQRBase, T...> ;

  struct USART2ISRBase {} ;

  struct ISR : public RegisterBase<0x4000441C, 32, ReadMode>
  {
    using REACK = USART2_ISR_REACK_Values<USART2::ISR, 22, 1, ReadMode, USART2ISRBase> ;
    using TEACK = USART2_ISR_TEACK_Values<USART2::ISR, 21, 1, ReadMode, USART2ISRBase> ;
    using WUF = USART2_ISR_WUF_Values<USART2::ISR, 20, 1, ReadMode, USART2ISRBase> ;
    using RWU = USART2_ISR_RWU_Values<USART2::ISR, 19, 1, ReadMode, USART2ISRBase> ;
    using SBKF = USART2_ISR_SBKF_Values<USART2::ISR, 18, 1, ReadMode, USART2ISRBase> ;
    using CMF = USART2_ISR_CMF_Values<USART2::ISR, 17, 1, ReadMode, USART2ISRBase> ;
    using BUSY = USART2_ISR_BUSY_Values<USART2::ISR, 16, 1, ReadMode, USART2ISRBase> ;
    using ABRF = USART2_ISR_ABRF_Values<USART2::ISR, 15, 1, ReadMode, USART2ISRBase> ;
    using ABRE = USART2_ISR_ABRE_Values<USART2::ISR, 14, 1, ReadMode, USART2ISRBase> ;
    using EOBF = USART2_ISR_EOBF_Values<USART2::ISR, 12, 1, ReadMode, USART2ISRBase> ;
    using RTOF = USART2_ISR_RTOF_Values<USART2::ISR, 11, 1, ReadMode, USART2ISRBase> ;
    using CTS = USART2_ISR_CTS_Values<USART2::ISR, 10, 1, ReadMode, USART2ISRBase> ;
    using CTSIF = USART2_ISR_CTSIF_Values<USART2::ISR, 9, 1, ReadMode, USART2ISRBase> ;
    using LBDF = USART2_ISR_LBDF_Values<USART2::ISR, 8, 1, ReadMode, USART2ISRBase> ;
    using TXE = USART2_ISR_TXE_Values<USART2::ISR, 7, 1, ReadMode, USART2ISRBase> ;
    using TC = USART2_ISR_TC_Values<USART2::ISR, 6, 1, ReadMode, USART2ISRBase> ;
    using RXNE = USART2_ISR_RXNE_Values<USART2::ISR, 5, 1, ReadMode, USART2ISRBase> ;
    using IDLE = USART2_ISR_IDLE_Values<USART2::ISR, 4, 1, ReadMode, USART2ISRBase> ;
    using ORE = USART2_ISR_ORE_Values<USART2::ISR, 3, 1, ReadMode, USART2ISRBase> ;
    using NF = USART2_ISR_NF_Values<USART2::ISR, 2, 1, ReadMode, USART2ISRBase> ;
    using FE = USART2_ISR_FE_Values<USART2::ISR, 1, 1, ReadMode, USART2ISRBase> ;
    using PE = USART2_ISR_PE_Values<USART2::ISR, 0, 1, ReadMode, USART2ISRBase> ;
    using FieldValues = USART2_ISR_PE_Values<USART2::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000441C, 32, ReadMode, USART2ISRBase, T...> ;

  struct USART2ICRBase {} ;

  struct ICR : public RegisterBase<0x40004420, 32, ReadWriteMode>
  {
    using WUCF = USART2_ICR_WUCF_Values<USART2::ICR, 20, 1, ReadWriteMode, USART2ICRBase> ;
    using CMCF = USART2_ICR_CMCF_Values<USART2::ICR, 17, 1, ReadWriteMode, USART2ICRBase> ;
    using EOBCF = USART2_ICR_EOBCF_Values<USART2::ICR, 12, 1, ReadWriteMode, USART2ICRBase> ;
    using RTOCF = USART2_ICR_RTOCF_Values<USART2::ICR, 11, 1, ReadWriteMode, USART2ICRBase> ;
    using CTSCF = USART2_ICR_CTSCF_Values<USART2::ICR, 9, 1, ReadWriteMode, USART2ICRBase> ;
    using LBDCF = USART2_ICR_LBDCF_Values<USART2::ICR, 8, 1, ReadWriteMode, USART2ICRBase> ;
    using TCCF = USART2_ICR_TCCF_Values<USART2::ICR, 6, 1, ReadWriteMode, USART2ICRBase> ;
    using IDLECF = USART2_ICR_IDLECF_Values<USART2::ICR, 4, 1, ReadWriteMode, USART2ICRBase> ;
    using ORECF = USART2_ICR_ORECF_Values<USART2::ICR, 3, 1, ReadWriteMode, USART2ICRBase> ;
    using NCF = USART2_ICR_NCF_Values<USART2::ICR, 2, 1, ReadWriteMode, USART2ICRBase> ;
    using FECF = USART2_ICR_FECF_Values<USART2::ICR, 1, 1, ReadWriteMode, USART2ICRBase> ;
    using PECF = USART2_ICR_PECF_Values<USART2::ICR, 0, 1, ReadWriteMode, USART2ICRBase> ;
    using FieldValues = USART2_ICR_PECF_Values<USART2::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40004420, 32, ReadWriteMode, USART2ICRBase, T...> ;

  struct USART2RDRBase {} ;

  struct RDR : public RegisterBase<0x40004424, 32, ReadMode>
  {
    using RDRField = USART2_RDR_RDR_Values<USART2::RDR, 0, 9, ReadMode, USART2RDRBase> ;
    using FieldValues = USART2_RDR_RDR_Values<USART2::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40004424, 32, ReadMode, USART2RDRBase, T...> ;

  struct USART2TDRBase {} ;

  struct TDR : public RegisterBase<0x40004428, 32, ReadWriteMode>
  {
    using TDRField = USART2_TDR_TDR_Values<USART2::TDR, 0, 9, ReadWriteMode, USART2TDRBase> ;
    using FieldValues = USART2_TDR_TDR_Values<USART2::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40004428, 32, ReadWriteMode, USART2TDRBase, T...> ;

} ;

#endif //#if !defined(USART2REGISTERS_HPP)
