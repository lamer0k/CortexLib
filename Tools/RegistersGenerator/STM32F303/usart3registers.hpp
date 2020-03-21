/*******************************************************************************
* Filename      : usart3registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(USART3REGISTERS_HPP)
#define USART3REGISTERS_HPP

#include "usart3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART3
{
  struct USART3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40004800, 32, ReadWriteMode>
  {
    using EOBIE = USART3_CR1_EOBIE_Values<USART3::CR1, 27, 1, ReadWriteMode, USART3CR1Base> ;
    using RTOIE = USART3_CR1_RTOIE_Values<USART3::CR1, 26, 1, ReadWriteMode, USART3CR1Base> ;
    using DEAT = USART3_CR1_DEAT_Values<USART3::CR1, 21, 5, ReadWriteMode, USART3CR1Base> ;
    using DEDT = USART3_CR1_DEDT_Values<USART3::CR1, 16, 5, ReadWriteMode, USART3CR1Base> ;
    using OVER8 = USART3_CR1_OVER8_Values<USART3::CR1, 15, 1, ReadWriteMode, USART3CR1Base> ;
    using CMIE = USART3_CR1_CMIE_Values<USART3::CR1, 14, 1, ReadWriteMode, USART3CR1Base> ;
    using MME = USART3_CR1_MME_Values<USART3::CR1, 13, 1, ReadWriteMode, USART3CR1Base> ;
    using M = USART3_CR1_M_Values<USART3::CR1, 12, 1, ReadWriteMode, USART3CR1Base> ;
    using WAKE = USART3_CR1_WAKE_Values<USART3::CR1, 11, 1, ReadWriteMode, USART3CR1Base> ;
    using PCE = USART3_CR1_PCE_Values<USART3::CR1, 10, 1, ReadWriteMode, USART3CR1Base> ;
    using PS = USART3_CR1_PS_Values<USART3::CR1, 9, 1, ReadWriteMode, USART3CR1Base> ;
    using PEIE = USART3_CR1_PEIE_Values<USART3::CR1, 8, 1, ReadWriteMode, USART3CR1Base> ;
    using TXEIE = USART3_CR1_TXEIE_Values<USART3::CR1, 7, 1, ReadWriteMode, USART3CR1Base> ;
    using TCIE = USART3_CR1_TCIE_Values<USART3::CR1, 6, 1, ReadWriteMode, USART3CR1Base> ;
    using RXNEIE = USART3_CR1_RXNEIE_Values<USART3::CR1, 5, 1, ReadWriteMode, USART3CR1Base> ;
    using IDLEIE = USART3_CR1_IDLEIE_Values<USART3::CR1, 4, 1, ReadWriteMode, USART3CR1Base> ;
    using TE = USART3_CR1_TE_Values<USART3::CR1, 3, 1, ReadWriteMode, USART3CR1Base> ;
    using RE = USART3_CR1_RE_Values<USART3::CR1, 2, 1, ReadWriteMode, USART3CR1Base> ;
    using UESM = USART3_CR1_UESM_Values<USART3::CR1, 1, 1, ReadWriteMode, USART3CR1Base> ;
    using UE = USART3_CR1_UE_Values<USART3::CR1, 0, 1, ReadWriteMode, USART3CR1Base> ;
    using FieldValues = USART3_CR1_UE_Values<USART3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40004800, 32, ReadWriteMode, USART3CR1Base, T...> ;

  struct USART3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40004804, 32, ReadWriteMode>
  {
    using ADD4 = USART3_CR2_ADD4_Values<USART3::CR2, 28, 4, ReadWriteMode, USART3CR2Base> ;
    using ADD0 = USART3_CR2_ADD0_Values<USART3::CR2, 24, 4, ReadWriteMode, USART3CR2Base> ;
    using RTOEN = USART3_CR2_RTOEN_Values<USART3::CR2, 23, 1, ReadWriteMode, USART3CR2Base> ;
    using ABRMOD = USART3_CR2_ABRMOD_Values<USART3::CR2, 21, 2, ReadWriteMode, USART3CR2Base> ;
    using ABREN = USART3_CR2_ABREN_Values<USART3::CR2, 20, 1, ReadWriteMode, USART3CR2Base> ;
    using MSBFIRST = USART3_CR2_MSBFIRST_Values<USART3::CR2, 19, 1, ReadWriteMode, USART3CR2Base> ;
    using DATAINV = USART3_CR2_DATAINV_Values<USART3::CR2, 18, 1, ReadWriteMode, USART3CR2Base> ;
    using TXINV = USART3_CR2_TXINV_Values<USART3::CR2, 17, 1, ReadWriteMode, USART3CR2Base> ;
    using RXINV = USART3_CR2_RXINV_Values<USART3::CR2, 16, 1, ReadWriteMode, USART3CR2Base> ;
    using SWAP = USART3_CR2_SWAP_Values<USART3::CR2, 15, 1, ReadWriteMode, USART3CR2Base> ;
    using LINEN = USART3_CR2_LINEN_Values<USART3::CR2, 14, 1, ReadWriteMode, USART3CR2Base> ;
    using STOP = USART3_CR2_STOP_Values<USART3::CR2, 12, 2, ReadWriteMode, USART3CR2Base> ;
    using CLKEN = USART3_CR2_CLKEN_Values<USART3::CR2, 11, 1, ReadWriteMode, USART3CR2Base> ;
    using CPOL = USART3_CR2_CPOL_Values<USART3::CR2, 10, 1, ReadWriteMode, USART3CR2Base> ;
    using CPHA = USART3_CR2_CPHA_Values<USART3::CR2, 9, 1, ReadWriteMode, USART3CR2Base> ;
    using LBCL = USART3_CR2_LBCL_Values<USART3::CR2, 8, 1, ReadWriteMode, USART3CR2Base> ;
    using LBDIE = USART3_CR2_LBDIE_Values<USART3::CR2, 6, 1, ReadWriteMode, USART3CR2Base> ;
    using LBDL = USART3_CR2_LBDL_Values<USART3::CR2, 5, 1, ReadWriteMode, USART3CR2Base> ;
    using ADDM7 = USART3_CR2_ADDM7_Values<USART3::CR2, 4, 1, ReadWriteMode, USART3CR2Base> ;
    using FieldValues = USART3_CR2_ADDM7_Values<USART3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004804, 32, ReadWriteMode, USART3CR2Base, T...> ;

  struct USART3CR3Base {} ;

  struct CR3 : public RegisterBase<0x40004808, 32, ReadWriteMode>
  {
    using WUFIE = USART3_CR3_WUFIE_Values<USART3::CR3, 22, 1, ReadWriteMode, USART3CR3Base> ;
    using WUS = USART3_CR3_WUS_Values<USART3::CR3, 20, 2, ReadWriteMode, USART3CR3Base> ;
    using SCARCNT = USART3_CR3_SCARCNT_Values<USART3::CR3, 17, 3, ReadWriteMode, USART3CR3Base> ;
    using DEP = USART3_CR3_DEP_Values<USART3::CR3, 15, 1, ReadWriteMode, USART3CR3Base> ;
    using DEM = USART3_CR3_DEM_Values<USART3::CR3, 14, 1, ReadWriteMode, USART3CR3Base> ;
    using DDRE = USART3_CR3_DDRE_Values<USART3::CR3, 13, 1, ReadWriteMode, USART3CR3Base> ;
    using OVRDIS = USART3_CR3_OVRDIS_Values<USART3::CR3, 12, 1, ReadWriteMode, USART3CR3Base> ;
    using ONEBIT = USART3_CR3_ONEBIT_Values<USART3::CR3, 11, 1, ReadWriteMode, USART3CR3Base> ;
    using CTSIE = USART3_CR3_CTSIE_Values<USART3::CR3, 10, 1, ReadWriteMode, USART3CR3Base> ;
    using CTSE = USART3_CR3_CTSE_Values<USART3::CR3, 9, 1, ReadWriteMode, USART3CR3Base> ;
    using RTSE = USART3_CR3_RTSE_Values<USART3::CR3, 8, 1, ReadWriteMode, USART3CR3Base> ;
    using DMAT = USART3_CR3_DMAT_Values<USART3::CR3, 7, 1, ReadWriteMode, USART3CR3Base> ;
    using DMAR = USART3_CR3_DMAR_Values<USART3::CR3, 6, 1, ReadWriteMode, USART3CR3Base> ;
    using SCEN = USART3_CR3_SCEN_Values<USART3::CR3, 5, 1, ReadWriteMode, USART3CR3Base> ;
    using NACK = USART3_CR3_NACK_Values<USART3::CR3, 4, 1, ReadWriteMode, USART3CR3Base> ;
    using HDSEL = USART3_CR3_HDSEL_Values<USART3::CR3, 3, 1, ReadWriteMode, USART3CR3Base> ;
    using IRLP = USART3_CR3_IRLP_Values<USART3::CR3, 2, 1, ReadWriteMode, USART3CR3Base> ;
    using IREN = USART3_CR3_IREN_Values<USART3::CR3, 1, 1, ReadWriteMode, USART3CR3Base> ;
    using EIE = USART3_CR3_EIE_Values<USART3::CR3, 0, 1, ReadWriteMode, USART3CR3Base> ;
    using FieldValues = USART3_CR3_EIE_Values<USART3::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40004808, 32, ReadWriteMode, USART3CR3Base, T...> ;

  struct USART3BRRBase {} ;

  struct BRR : public RegisterBase<0x4000480C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART3_BRR_DIV_Mantissa_Values<USART3::BRR, 4, 12, ReadWriteMode, USART3BRRBase> ;
    using DIV_Fraction = USART3_BRR_DIV_Fraction_Values<USART3::BRR, 0, 4, ReadWriteMode, USART3BRRBase> ;
    using FieldValues = USART3_BRR_DIV_Fraction_Values<USART3::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4000480C, 32, ReadWriteMode, USART3BRRBase, T...> ;

  struct USART3GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40004810, 32, ReadWriteMode>
  {
    using GT = USART3_GTPR_GT_Values<USART3::GTPR, 8, 8, ReadWriteMode, USART3GTPRBase> ;
    using PSC = USART3_GTPR_PSC_Values<USART3::GTPR, 0, 8, ReadWriteMode, USART3GTPRBase> ;
    using FieldValues = USART3_GTPR_PSC_Values<USART3::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40004810, 32, ReadWriteMode, USART3GTPRBase, T...> ;

  struct USART3RTORBase {} ;

  struct RTOR : public RegisterBase<0x40004814, 32, ReadWriteMode>
  {
    using BLEN = USART3_RTOR_BLEN_Values<USART3::RTOR, 24, 8, ReadWriteMode, USART3RTORBase> ;
    using RTO = USART3_RTOR_RTO_Values<USART3::RTOR, 0, 24, ReadWriteMode, USART3RTORBase> ;
    using FieldValues = USART3_RTOR_RTO_Values<USART3::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40004814, 32, ReadWriteMode, USART3RTORBase, T...> ;

  struct USART3RQRBase {} ;

  struct RQR : public RegisterBase<0x40004818, 32, ReadWriteMode>
  {
    using TXFRQ = USART3_RQR_TXFRQ_Values<USART3::RQR, 4, 1, ReadWriteMode, USART3RQRBase> ;
    using RXFRQ = USART3_RQR_RXFRQ_Values<USART3::RQR, 3, 1, ReadWriteMode, USART3RQRBase> ;
    using MMRQ = USART3_RQR_MMRQ_Values<USART3::RQR, 2, 1, ReadWriteMode, USART3RQRBase> ;
    using SBKRQ = USART3_RQR_SBKRQ_Values<USART3::RQR, 1, 1, ReadWriteMode, USART3RQRBase> ;
    using ABRRQ = USART3_RQR_ABRRQ_Values<USART3::RQR, 0, 1, ReadWriteMode, USART3RQRBase> ;
    using FieldValues = USART3_RQR_ABRRQ_Values<USART3::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40004818, 32, ReadWriteMode, USART3RQRBase, T...> ;

  struct USART3ISRBase {} ;

  struct ISR : public RegisterBase<0x4000481C, 32, ReadMode>
  {
    using REACK = USART3_ISR_REACK_Values<USART3::ISR, 22, 1, ReadMode, USART3ISRBase> ;
    using TEACK = USART3_ISR_TEACK_Values<USART3::ISR, 21, 1, ReadMode, USART3ISRBase> ;
    using WUF = USART3_ISR_WUF_Values<USART3::ISR, 20, 1, ReadMode, USART3ISRBase> ;
    using RWU = USART3_ISR_RWU_Values<USART3::ISR, 19, 1, ReadMode, USART3ISRBase> ;
    using SBKF = USART3_ISR_SBKF_Values<USART3::ISR, 18, 1, ReadMode, USART3ISRBase> ;
    using CMF = USART3_ISR_CMF_Values<USART3::ISR, 17, 1, ReadMode, USART3ISRBase> ;
    using BUSY = USART3_ISR_BUSY_Values<USART3::ISR, 16, 1, ReadMode, USART3ISRBase> ;
    using ABRF = USART3_ISR_ABRF_Values<USART3::ISR, 15, 1, ReadMode, USART3ISRBase> ;
    using ABRE = USART3_ISR_ABRE_Values<USART3::ISR, 14, 1, ReadMode, USART3ISRBase> ;
    using EOBF = USART3_ISR_EOBF_Values<USART3::ISR, 12, 1, ReadMode, USART3ISRBase> ;
    using RTOF = USART3_ISR_RTOF_Values<USART3::ISR, 11, 1, ReadMode, USART3ISRBase> ;
    using CTS = USART3_ISR_CTS_Values<USART3::ISR, 10, 1, ReadMode, USART3ISRBase> ;
    using CTSIF = USART3_ISR_CTSIF_Values<USART3::ISR, 9, 1, ReadMode, USART3ISRBase> ;
    using LBDF = USART3_ISR_LBDF_Values<USART3::ISR, 8, 1, ReadMode, USART3ISRBase> ;
    using TXE = USART3_ISR_TXE_Values<USART3::ISR, 7, 1, ReadMode, USART3ISRBase> ;
    using TC = USART3_ISR_TC_Values<USART3::ISR, 6, 1, ReadMode, USART3ISRBase> ;
    using RXNE = USART3_ISR_RXNE_Values<USART3::ISR, 5, 1, ReadMode, USART3ISRBase> ;
    using IDLE = USART3_ISR_IDLE_Values<USART3::ISR, 4, 1, ReadMode, USART3ISRBase> ;
    using ORE = USART3_ISR_ORE_Values<USART3::ISR, 3, 1, ReadMode, USART3ISRBase> ;
    using NF = USART3_ISR_NF_Values<USART3::ISR, 2, 1, ReadMode, USART3ISRBase> ;
    using FE = USART3_ISR_FE_Values<USART3::ISR, 1, 1, ReadMode, USART3ISRBase> ;
    using PE = USART3_ISR_PE_Values<USART3::ISR, 0, 1, ReadMode, USART3ISRBase> ;
    using FieldValues = USART3_ISR_PE_Values<USART3::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000481C, 32, ReadMode, USART3ISRBase, T...> ;

  struct USART3ICRBase {} ;

  struct ICR : public RegisterBase<0x40004820, 32, ReadWriteMode>
  {
    using WUCF = USART3_ICR_WUCF_Values<USART3::ICR, 20, 1, ReadWriteMode, USART3ICRBase> ;
    using CMCF = USART3_ICR_CMCF_Values<USART3::ICR, 17, 1, ReadWriteMode, USART3ICRBase> ;
    using EOBCF = USART3_ICR_EOBCF_Values<USART3::ICR, 12, 1, ReadWriteMode, USART3ICRBase> ;
    using RTOCF = USART3_ICR_RTOCF_Values<USART3::ICR, 11, 1, ReadWriteMode, USART3ICRBase> ;
    using CTSCF = USART3_ICR_CTSCF_Values<USART3::ICR, 9, 1, ReadWriteMode, USART3ICRBase> ;
    using LBDCF = USART3_ICR_LBDCF_Values<USART3::ICR, 8, 1, ReadWriteMode, USART3ICRBase> ;
    using TCCF = USART3_ICR_TCCF_Values<USART3::ICR, 6, 1, ReadWriteMode, USART3ICRBase> ;
    using IDLECF = USART3_ICR_IDLECF_Values<USART3::ICR, 4, 1, ReadWriteMode, USART3ICRBase> ;
    using ORECF = USART3_ICR_ORECF_Values<USART3::ICR, 3, 1, ReadWriteMode, USART3ICRBase> ;
    using NCF = USART3_ICR_NCF_Values<USART3::ICR, 2, 1, ReadWriteMode, USART3ICRBase> ;
    using FECF = USART3_ICR_FECF_Values<USART3::ICR, 1, 1, ReadWriteMode, USART3ICRBase> ;
    using PECF = USART3_ICR_PECF_Values<USART3::ICR, 0, 1, ReadWriteMode, USART3ICRBase> ;
    using FieldValues = USART3_ICR_PECF_Values<USART3::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40004820, 32, ReadWriteMode, USART3ICRBase, T...> ;

  struct USART3RDRBase {} ;

  struct RDR : public RegisterBase<0x40004824, 32, ReadMode>
  {
    using RDRField = USART3_RDR_RDR_Values<USART3::RDR, 0, 9, ReadMode, USART3RDRBase> ;
    using FieldValues = USART3_RDR_RDR_Values<USART3::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40004824, 32, ReadMode, USART3RDRBase, T...> ;

  struct USART3TDRBase {} ;

  struct TDR : public RegisterBase<0x40004828, 32, ReadWriteMode>
  {
    using TDRField = USART3_TDR_TDR_Values<USART3::TDR, 0, 9, ReadWriteMode, USART3TDRBase> ;
    using FieldValues = USART3_TDR_TDR_Values<USART3::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40004828, 32, ReadWriteMode, USART3TDRBase, T...> ;

} ;

#endif //#if !defined(USART3REGISTERS_HPP)
