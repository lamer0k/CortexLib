/*******************************************************************************
* Filename      : usart4registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USART4REGISTERS_HPP)
#define USART4REGISTERS_HPP

#include "usart4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART4
{
  struct USART4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40004C00, 32, ReadWriteMode>
  {
    using UE = USART4_CR1_UE_Values<USART4::CR1, 0, 1, ReadWriteMode, USART4CR1Base> ;
    using UESM = USART4_CR1_UESM_Values<USART4::CR1, 1, 1, ReadWriteMode, USART4CR1Base> ;
    using RE = USART4_CR1_RE_Values<USART4::CR1, 2, 1, ReadWriteMode, USART4CR1Base> ;
    using TE = USART4_CR1_TE_Values<USART4::CR1, 3, 1, ReadWriteMode, USART4CR1Base> ;
    using IDLEIE = USART4_CR1_IDLEIE_Values<USART4::CR1, 4, 1, ReadWriteMode, USART4CR1Base> ;
    using RXNEIE = USART4_CR1_RXNEIE_Values<USART4::CR1, 5, 1, ReadWriteMode, USART4CR1Base> ;
    using TCIE = USART4_CR1_TCIE_Values<USART4::CR1, 6, 1, ReadWriteMode, USART4CR1Base> ;
    using TXEIE = USART4_CR1_TXEIE_Values<USART4::CR1, 7, 1, ReadWriteMode, USART4CR1Base> ;
    using PEIE = USART4_CR1_PEIE_Values<USART4::CR1, 8, 1, ReadWriteMode, USART4CR1Base> ;
    using PS = USART4_CR1_PS_Values<USART4::CR1, 9, 1, ReadWriteMode, USART4CR1Base> ;
    using PCE = USART4_CR1_PCE_Values<USART4::CR1, 10, 1, ReadWriteMode, USART4CR1Base> ;
    using WAKE = USART4_CR1_WAKE_Values<USART4::CR1, 11, 1, ReadWriteMode, USART4CR1Base> ;
    using M = USART4_CR1_M_Values<USART4::CR1, 12, 1, ReadWriteMode, USART4CR1Base> ;
    using MME = USART4_CR1_MME_Values<USART4::CR1, 13, 1, ReadWriteMode, USART4CR1Base> ;
    using CMIE = USART4_CR1_CMIE_Values<USART4::CR1, 14, 1, ReadWriteMode, USART4CR1Base> ;
    using OVER8 = USART4_CR1_OVER8_Values<USART4::CR1, 15, 1, ReadWriteMode, USART4CR1Base> ;
    using DEDT = USART4_CR1_DEDT_Values<USART4::CR1, 16, 5, ReadWriteMode, USART4CR1Base> ;
    using DEAT = USART4_CR1_DEAT_Values<USART4::CR1, 21, 5, ReadWriteMode, USART4CR1Base> ;
    using RTOIE = USART4_CR1_RTOIE_Values<USART4::CR1, 26, 1, ReadWriteMode, USART4CR1Base> ;
    using EOBIE = USART4_CR1_EOBIE_Values<USART4::CR1, 27, 1, ReadWriteMode, USART4CR1Base> ;
    using M1 = USART4_CR1_M1_Values<USART4::CR1, 28, 1, ReadWriteMode, USART4CR1Base> ;
    using FieldValues = USART4_CR1_M1_Values<USART4::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40004C00, 32, ReadWriteMode, USART4CR1Base, T...> ;

  struct USART4CR2Base {} ;

  struct CR2 : public RegisterBase<0x40004C04, 32, ReadWriteMode>
  {
    using ADD4 = USART4_CR2_ADD4_Values<USART4::CR2, 28, 4, ReadWriteMode, USART4CR2Base> ;
    using ADD0 = USART4_CR2_ADD0_Values<USART4::CR2, 24, 4, ReadWriteMode, USART4CR2Base> ;
    using RTOEN = USART4_CR2_RTOEN_Values<USART4::CR2, 23, 1, ReadWriteMode, USART4CR2Base> ;
    using ABRMOD = USART4_CR2_ABRMOD_Values<USART4::CR2, 21, 2, ReadWriteMode, USART4CR2Base> ;
    using ABREN = USART4_CR2_ABREN_Values<USART4::CR2, 20, 1, ReadWriteMode, USART4CR2Base> ;
    using MSBFIRST = USART4_CR2_MSBFIRST_Values<USART4::CR2, 19, 1, ReadWriteMode, USART4CR2Base> ;
    using DATAINV = USART4_CR2_DATAINV_Values<USART4::CR2, 18, 1, ReadWriteMode, USART4CR2Base> ;
    using TXINV = USART4_CR2_TXINV_Values<USART4::CR2, 17, 1, ReadWriteMode, USART4CR2Base> ;
    using RXINV = USART4_CR2_RXINV_Values<USART4::CR2, 16, 1, ReadWriteMode, USART4CR2Base> ;
    using SWAP = USART4_CR2_SWAP_Values<USART4::CR2, 15, 1, ReadWriteMode, USART4CR2Base> ;
    using LINEN = USART4_CR2_LINEN_Values<USART4::CR2, 14, 1, ReadWriteMode, USART4CR2Base> ;
    using STOP = USART4_CR2_STOP_Values<USART4::CR2, 12, 2, ReadWriteMode, USART4CR2Base> ;
    using CLKEN = USART4_CR2_CLKEN_Values<USART4::CR2, 11, 1, ReadWriteMode, USART4CR2Base> ;
    using CPOL = USART4_CR2_CPOL_Values<USART4::CR2, 10, 1, ReadWriteMode, USART4CR2Base> ;
    using CPHA = USART4_CR2_CPHA_Values<USART4::CR2, 9, 1, ReadWriteMode, USART4CR2Base> ;
    using LBCL = USART4_CR2_LBCL_Values<USART4::CR2, 8, 1, ReadWriteMode, USART4CR2Base> ;
    using LBDIE = USART4_CR2_LBDIE_Values<USART4::CR2, 6, 1, ReadWriteMode, USART4CR2Base> ;
    using LBDL = USART4_CR2_LBDL_Values<USART4::CR2, 5, 1, ReadWriteMode, USART4CR2Base> ;
    using ADDM7 = USART4_CR2_ADDM7_Values<USART4::CR2, 4, 1, ReadWriteMode, USART4CR2Base> ;
    using FieldValues = USART4_CR2_ADDM7_Values<USART4::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004C04, 32, ReadWriteMode, USART4CR2Base, T...> ;

  struct USART4CR3Base {} ;

  struct CR3 : public RegisterBase<0x40004C08, 32, ReadWriteMode>
  {
    using WUFIE = USART4_CR3_WUFIE_Values<USART4::CR3, 22, 1, ReadWriteMode, USART4CR3Base> ;
    using WUS = USART4_CR3_WUS_Values<USART4::CR3, 20, 2, ReadWriteMode, USART4CR3Base> ;
    using SCARCNT = USART4_CR3_SCARCNT_Values<USART4::CR3, 17, 3, ReadWriteMode, USART4CR3Base> ;
    using DEP = USART4_CR3_DEP_Values<USART4::CR3, 15, 1, ReadWriteMode, USART4CR3Base> ;
    using DEM = USART4_CR3_DEM_Values<USART4::CR3, 14, 1, ReadWriteMode, USART4CR3Base> ;
    using DDRE = USART4_CR3_DDRE_Values<USART4::CR3, 13, 1, ReadWriteMode, USART4CR3Base> ;
    using OVRDIS = USART4_CR3_OVRDIS_Values<USART4::CR3, 12, 1, ReadWriteMode, USART4CR3Base> ;
    using ONEBIT = USART4_CR3_ONEBIT_Values<USART4::CR3, 11, 1, ReadWriteMode, USART4CR3Base> ;
    using CTSIE = USART4_CR3_CTSIE_Values<USART4::CR3, 10, 1, ReadWriteMode, USART4CR3Base> ;
    using CTSE = USART4_CR3_CTSE_Values<USART4::CR3, 9, 1, ReadWriteMode, USART4CR3Base> ;
    using RTSE = USART4_CR3_RTSE_Values<USART4::CR3, 8, 1, ReadWriteMode, USART4CR3Base> ;
    using DMAT = USART4_CR3_DMAT_Values<USART4::CR3, 7, 1, ReadWriteMode, USART4CR3Base> ;
    using DMAR = USART4_CR3_DMAR_Values<USART4::CR3, 6, 1, ReadWriteMode, USART4CR3Base> ;
    using SCEN = USART4_CR3_SCEN_Values<USART4::CR3, 5, 1, ReadWriteMode, USART4CR3Base> ;
    using NACK = USART4_CR3_NACK_Values<USART4::CR3, 4, 1, ReadWriteMode, USART4CR3Base> ;
    using HDSEL = USART4_CR3_HDSEL_Values<USART4::CR3, 3, 1, ReadWriteMode, USART4CR3Base> ;
    using IRLP = USART4_CR3_IRLP_Values<USART4::CR3, 2, 1, ReadWriteMode, USART4CR3Base> ;
    using IREN = USART4_CR3_IREN_Values<USART4::CR3, 1, 1, ReadWriteMode, USART4CR3Base> ;
    using EIE = USART4_CR3_EIE_Values<USART4::CR3, 0, 1, ReadWriteMode, USART4CR3Base> ;
    using FieldValues = USART4_CR3_EIE_Values<USART4::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40004C08, 32, ReadWriteMode, USART4CR3Base, T...> ;

  struct USART4BRRBase {} ;

  struct BRR : public RegisterBase<0x40004C0C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART4_BRR_DIV_Mantissa_Values<USART4::BRR, 4, 12, ReadWriteMode, USART4BRRBase> ;
    using DIV_Fraction = USART4_BRR_DIV_Fraction_Values<USART4::BRR, 0, 4, ReadWriteMode, USART4BRRBase> ;
    using FieldValues = USART4_BRR_DIV_Fraction_Values<USART4::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40004C0C, 32, ReadWriteMode, USART4BRRBase, T...> ;

  struct USART4GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40004C10, 32, ReadWriteMode>
  {
    using GT = USART4_GTPR_GT_Values<USART4::GTPR, 8, 8, ReadWriteMode, USART4GTPRBase> ;
    using PSC = USART4_GTPR_PSC_Values<USART4::GTPR, 0, 8, ReadWriteMode, USART4GTPRBase> ;
    using FieldValues = USART4_GTPR_PSC_Values<USART4::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40004C10, 32, ReadWriteMode, USART4GTPRBase, T...> ;

  struct USART4RTORBase {} ;

  struct RTOR : public RegisterBase<0x40004C14, 32, ReadWriteMode>
  {
    using BLEN = USART4_RTOR_BLEN_Values<USART4::RTOR, 24, 8, ReadWriteMode, USART4RTORBase> ;
    using RTO = USART4_RTOR_RTO_Values<USART4::RTOR, 0, 24, ReadWriteMode, USART4RTORBase> ;
    using FieldValues = USART4_RTOR_RTO_Values<USART4::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40004C14, 32, ReadWriteMode, USART4RTORBase, T...> ;

  struct USART4RQRBase {} ;

  struct RQR : public RegisterBase<0x40004C18, 32, ReadWriteMode>
  {
    using TXFRQ = USART4_RQR_TXFRQ_Values<USART4::RQR, 4, 1, ReadWriteMode, USART4RQRBase> ;
    using RXFRQ = USART4_RQR_RXFRQ_Values<USART4::RQR, 3, 1, ReadWriteMode, USART4RQRBase> ;
    using MMRQ = USART4_RQR_MMRQ_Values<USART4::RQR, 2, 1, ReadWriteMode, USART4RQRBase> ;
    using SBKRQ = USART4_RQR_SBKRQ_Values<USART4::RQR, 1, 1, ReadWriteMode, USART4RQRBase> ;
    using ABRRQ = USART4_RQR_ABRRQ_Values<USART4::RQR, 0, 1, ReadWriteMode, USART4RQRBase> ;
    using FieldValues = USART4_RQR_ABRRQ_Values<USART4::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40004C18, 32, ReadWriteMode, USART4RQRBase, T...> ;

  struct USART4ISRBase {} ;

  struct ISR : public RegisterBase<0x40004C1C, 32, ReadMode>
  {
    using REACK = USART4_ISR_REACK_Values<USART4::ISR, 22, 1, ReadMode, USART4ISRBase> ;
    using TEACK = USART4_ISR_TEACK_Values<USART4::ISR, 21, 1, ReadMode, USART4ISRBase> ;
    using WUF = USART4_ISR_WUF_Values<USART4::ISR, 20, 1, ReadMode, USART4ISRBase> ;
    using RWU = USART4_ISR_RWU_Values<USART4::ISR, 19, 1, ReadMode, USART4ISRBase> ;
    using SBKF = USART4_ISR_SBKF_Values<USART4::ISR, 18, 1, ReadMode, USART4ISRBase> ;
    using CMF = USART4_ISR_CMF_Values<USART4::ISR, 17, 1, ReadMode, USART4ISRBase> ;
    using BUSY = USART4_ISR_BUSY_Values<USART4::ISR, 16, 1, ReadMode, USART4ISRBase> ;
    using ABRF = USART4_ISR_ABRF_Values<USART4::ISR, 15, 1, ReadMode, USART4ISRBase> ;
    using ABRE = USART4_ISR_ABRE_Values<USART4::ISR, 14, 1, ReadMode, USART4ISRBase> ;
    using EOBF = USART4_ISR_EOBF_Values<USART4::ISR, 12, 1, ReadMode, USART4ISRBase> ;
    using RTOF = USART4_ISR_RTOF_Values<USART4::ISR, 11, 1, ReadMode, USART4ISRBase> ;
    using CTS = USART4_ISR_CTS_Values<USART4::ISR, 10, 1, ReadMode, USART4ISRBase> ;
    using CTSIF = USART4_ISR_CTSIF_Values<USART4::ISR, 9, 1, ReadMode, USART4ISRBase> ;
    using LBDF = USART4_ISR_LBDF_Values<USART4::ISR, 8, 1, ReadMode, USART4ISRBase> ;
    using TXE = USART4_ISR_TXE_Values<USART4::ISR, 7, 1, ReadMode, USART4ISRBase> ;
    using TC = USART4_ISR_TC_Values<USART4::ISR, 6, 1, ReadMode, USART4ISRBase> ;
    using RXNE = USART4_ISR_RXNE_Values<USART4::ISR, 5, 1, ReadMode, USART4ISRBase> ;
    using IDLE = USART4_ISR_IDLE_Values<USART4::ISR, 4, 1, ReadMode, USART4ISRBase> ;
    using ORE = USART4_ISR_ORE_Values<USART4::ISR, 3, 1, ReadMode, USART4ISRBase> ;
    using NF = USART4_ISR_NF_Values<USART4::ISR, 2, 1, ReadMode, USART4ISRBase> ;
    using FE = USART4_ISR_FE_Values<USART4::ISR, 1, 1, ReadMode, USART4ISRBase> ;
    using PE = USART4_ISR_PE_Values<USART4::ISR, 0, 1, ReadMode, USART4ISRBase> ;
    using FieldValues = USART4_ISR_PE_Values<USART4::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40004C1C, 32, ReadMode, USART4ISRBase, T...> ;

  struct USART4ICRBase {} ;

  struct ICR : public RegisterBase<0x40004C20, 32, ReadWriteMode>
  {
    using WUCF = USART4_ICR_WUCF_Values<USART4::ICR, 20, 1, ReadWriteMode, USART4ICRBase> ;
    using CMCF = USART4_ICR_CMCF_Values<USART4::ICR, 17, 1, ReadWriteMode, USART4ICRBase> ;
    using EOBCF = USART4_ICR_EOBCF_Values<USART4::ICR, 12, 1, ReadWriteMode, USART4ICRBase> ;
    using RTOCF = USART4_ICR_RTOCF_Values<USART4::ICR, 11, 1, ReadWriteMode, USART4ICRBase> ;
    using CTSCF = USART4_ICR_CTSCF_Values<USART4::ICR, 9, 1, ReadWriteMode, USART4ICRBase> ;
    using LBDCF = USART4_ICR_LBDCF_Values<USART4::ICR, 8, 1, ReadWriteMode, USART4ICRBase> ;
    using TCCF = USART4_ICR_TCCF_Values<USART4::ICR, 6, 1, ReadWriteMode, USART4ICRBase> ;
    using IDLECF = USART4_ICR_IDLECF_Values<USART4::ICR, 4, 1, ReadWriteMode, USART4ICRBase> ;
    using ORECF = USART4_ICR_ORECF_Values<USART4::ICR, 3, 1, ReadWriteMode, USART4ICRBase> ;
    using NCF = USART4_ICR_NCF_Values<USART4::ICR, 2, 1, ReadWriteMode, USART4ICRBase> ;
    using FECF = USART4_ICR_FECF_Values<USART4::ICR, 1, 1, ReadWriteMode, USART4ICRBase> ;
    using PECF = USART4_ICR_PECF_Values<USART4::ICR, 0, 1, ReadWriteMode, USART4ICRBase> ;
    using FieldValues = USART4_ICR_PECF_Values<USART4::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40004C20, 32, ReadWriteMode, USART4ICRBase, T...> ;

  struct USART4RDRBase {} ;

  struct RDR : public RegisterBase<0x40004C24, 32, ReadMode>
  {
    using RDRField = USART4_RDR_RDR_Values<USART4::RDR, 0, 9, ReadMode, USART4RDRBase> ;
    using FieldValues = USART4_RDR_RDR_Values<USART4::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40004C24, 32, ReadMode, USART4RDRBase, T...> ;

  struct USART4TDRBase {} ;

  struct TDR : public RegisterBase<0x40004C28, 32, ReadWriteMode>
  {
    using TDRField = USART4_TDR_TDR_Values<USART4::TDR, 0, 9, ReadWriteMode, USART4TDRBase> ;
    using FieldValues = USART4_TDR_TDR_Values<USART4::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40004C28, 32, ReadWriteMode, USART4TDRBase, T...> ;

} ;

#endif //#if !defined(USART4REGISTERS_HPP)
