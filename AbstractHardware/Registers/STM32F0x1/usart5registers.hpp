/*******************************************************************************
* Filename      : usart5registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USART5REGISTERS_HPP)
#define USART5REGISTERS_HPP

#include "usart5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART5
{
  struct USART5CR1Base {} ;

  struct CR1 : public RegisterBase<0x40005000, 32, ReadWriteMode>
  {
    using UE = USART5_CR1_UE_Values<USART5::CR1, 0, 1, ReadWriteMode, USART5CR1Base> ;
    using UESM = USART5_CR1_UESM_Values<USART5::CR1, 1, 1, ReadWriteMode, USART5CR1Base> ;
    using RE = USART5_CR1_RE_Values<USART5::CR1, 2, 1, ReadWriteMode, USART5CR1Base> ;
    using TE = USART5_CR1_TE_Values<USART5::CR1, 3, 1, ReadWriteMode, USART5CR1Base> ;
    using IDLEIE = USART5_CR1_IDLEIE_Values<USART5::CR1, 4, 1, ReadWriteMode, USART5CR1Base> ;
    using RXNEIE = USART5_CR1_RXNEIE_Values<USART5::CR1, 5, 1, ReadWriteMode, USART5CR1Base> ;
    using TCIE = USART5_CR1_TCIE_Values<USART5::CR1, 6, 1, ReadWriteMode, USART5CR1Base> ;
    using TXEIE = USART5_CR1_TXEIE_Values<USART5::CR1, 7, 1, ReadWriteMode, USART5CR1Base> ;
    using PEIE = USART5_CR1_PEIE_Values<USART5::CR1, 8, 1, ReadWriteMode, USART5CR1Base> ;
    using PS = USART5_CR1_PS_Values<USART5::CR1, 9, 1, ReadWriteMode, USART5CR1Base> ;
    using PCE = USART5_CR1_PCE_Values<USART5::CR1, 10, 1, ReadWriteMode, USART5CR1Base> ;
    using WAKE = USART5_CR1_WAKE_Values<USART5::CR1, 11, 1, ReadWriteMode, USART5CR1Base> ;
    using M = USART5_CR1_M_Values<USART5::CR1, 12, 1, ReadWriteMode, USART5CR1Base> ;
    using MME = USART5_CR1_MME_Values<USART5::CR1, 13, 1, ReadWriteMode, USART5CR1Base> ;
    using CMIE = USART5_CR1_CMIE_Values<USART5::CR1, 14, 1, ReadWriteMode, USART5CR1Base> ;
    using OVER8 = USART5_CR1_OVER8_Values<USART5::CR1, 15, 1, ReadWriteMode, USART5CR1Base> ;
    using DEDT = USART5_CR1_DEDT_Values<USART5::CR1, 16, 5, ReadWriteMode, USART5CR1Base> ;
    using DEAT = USART5_CR1_DEAT_Values<USART5::CR1, 21, 5, ReadWriteMode, USART5CR1Base> ;
    using RTOIE = USART5_CR1_RTOIE_Values<USART5::CR1, 26, 1, ReadWriteMode, USART5CR1Base> ;
    using EOBIE = USART5_CR1_EOBIE_Values<USART5::CR1, 27, 1, ReadWriteMode, USART5CR1Base> ;
    using M1 = USART5_CR1_M1_Values<USART5::CR1, 28, 1, ReadWriteMode, USART5CR1Base> ;
    using FieldValues = USART5_CR1_M1_Values<USART5::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40005000, 32, ReadWriteMode, USART5CR1Base, T...> ;

  struct USART5CR2Base {} ;

  struct CR2 : public RegisterBase<0x40005004, 32, ReadWriteMode>
  {
    using ADD4 = USART5_CR2_ADD4_Values<USART5::CR2, 28, 4, ReadWriteMode, USART5CR2Base> ;
    using ADD0 = USART5_CR2_ADD0_Values<USART5::CR2, 24, 4, ReadWriteMode, USART5CR2Base> ;
    using RTOEN = USART5_CR2_RTOEN_Values<USART5::CR2, 23, 1, ReadWriteMode, USART5CR2Base> ;
    using ABRMOD = USART5_CR2_ABRMOD_Values<USART5::CR2, 21, 2, ReadWriteMode, USART5CR2Base> ;
    using ABREN = USART5_CR2_ABREN_Values<USART5::CR2, 20, 1, ReadWriteMode, USART5CR2Base> ;
    using MSBFIRST = USART5_CR2_MSBFIRST_Values<USART5::CR2, 19, 1, ReadWriteMode, USART5CR2Base> ;
    using DATAINV = USART5_CR2_DATAINV_Values<USART5::CR2, 18, 1, ReadWriteMode, USART5CR2Base> ;
    using TXINV = USART5_CR2_TXINV_Values<USART5::CR2, 17, 1, ReadWriteMode, USART5CR2Base> ;
    using RXINV = USART5_CR2_RXINV_Values<USART5::CR2, 16, 1, ReadWriteMode, USART5CR2Base> ;
    using SWAP = USART5_CR2_SWAP_Values<USART5::CR2, 15, 1, ReadWriteMode, USART5CR2Base> ;
    using LINEN = USART5_CR2_LINEN_Values<USART5::CR2, 14, 1, ReadWriteMode, USART5CR2Base> ;
    using STOP = USART5_CR2_STOP_Values<USART5::CR2, 12, 2, ReadWriteMode, USART5CR2Base> ;
    using CLKEN = USART5_CR2_CLKEN_Values<USART5::CR2, 11, 1, ReadWriteMode, USART5CR2Base> ;
    using CPOL = USART5_CR2_CPOL_Values<USART5::CR2, 10, 1, ReadWriteMode, USART5CR2Base> ;
    using CPHA = USART5_CR2_CPHA_Values<USART5::CR2, 9, 1, ReadWriteMode, USART5CR2Base> ;
    using LBCL = USART5_CR2_LBCL_Values<USART5::CR2, 8, 1, ReadWriteMode, USART5CR2Base> ;
    using LBDIE = USART5_CR2_LBDIE_Values<USART5::CR2, 6, 1, ReadWriteMode, USART5CR2Base> ;
    using LBDL = USART5_CR2_LBDL_Values<USART5::CR2, 5, 1, ReadWriteMode, USART5CR2Base> ;
    using ADDM7 = USART5_CR2_ADDM7_Values<USART5::CR2, 4, 1, ReadWriteMode, USART5CR2Base> ;
    using FieldValues = USART5_CR2_ADDM7_Values<USART5::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40005004, 32, ReadWriteMode, USART5CR2Base, T...> ;

  struct USART5CR3Base {} ;

  struct CR3 : public RegisterBase<0x40005008, 32, ReadWriteMode>
  {
    using WUFIE = USART5_CR3_WUFIE_Values<USART5::CR3, 22, 1, ReadWriteMode, USART5CR3Base> ;
    using WUS = USART5_CR3_WUS_Values<USART5::CR3, 20, 2, ReadWriteMode, USART5CR3Base> ;
    using SCARCNT = USART5_CR3_SCARCNT_Values<USART5::CR3, 17, 3, ReadWriteMode, USART5CR3Base> ;
    using DEP = USART5_CR3_DEP_Values<USART5::CR3, 15, 1, ReadWriteMode, USART5CR3Base> ;
    using DEM = USART5_CR3_DEM_Values<USART5::CR3, 14, 1, ReadWriteMode, USART5CR3Base> ;
    using DDRE = USART5_CR3_DDRE_Values<USART5::CR3, 13, 1, ReadWriteMode, USART5CR3Base> ;
    using OVRDIS = USART5_CR3_OVRDIS_Values<USART5::CR3, 12, 1, ReadWriteMode, USART5CR3Base> ;
    using ONEBIT = USART5_CR3_ONEBIT_Values<USART5::CR3, 11, 1, ReadWriteMode, USART5CR3Base> ;
    using CTSIE = USART5_CR3_CTSIE_Values<USART5::CR3, 10, 1, ReadWriteMode, USART5CR3Base> ;
    using CTSE = USART5_CR3_CTSE_Values<USART5::CR3, 9, 1, ReadWriteMode, USART5CR3Base> ;
    using RTSE = USART5_CR3_RTSE_Values<USART5::CR3, 8, 1, ReadWriteMode, USART5CR3Base> ;
    using DMAT = USART5_CR3_DMAT_Values<USART5::CR3, 7, 1, ReadWriteMode, USART5CR3Base> ;
    using DMAR = USART5_CR3_DMAR_Values<USART5::CR3, 6, 1, ReadWriteMode, USART5CR3Base> ;
    using SCEN = USART5_CR3_SCEN_Values<USART5::CR3, 5, 1, ReadWriteMode, USART5CR3Base> ;
    using NACK = USART5_CR3_NACK_Values<USART5::CR3, 4, 1, ReadWriteMode, USART5CR3Base> ;
    using HDSEL = USART5_CR3_HDSEL_Values<USART5::CR3, 3, 1, ReadWriteMode, USART5CR3Base> ;
    using IRLP = USART5_CR3_IRLP_Values<USART5::CR3, 2, 1, ReadWriteMode, USART5CR3Base> ;
    using IREN = USART5_CR3_IREN_Values<USART5::CR3, 1, 1, ReadWriteMode, USART5CR3Base> ;
    using EIE = USART5_CR3_EIE_Values<USART5::CR3, 0, 1, ReadWriteMode, USART5CR3Base> ;
    using FieldValues = USART5_CR3_EIE_Values<USART5::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40005008, 32, ReadWriteMode, USART5CR3Base, T...> ;

  struct USART5BRRBase {} ;

  struct BRR : public RegisterBase<0x4000500C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART5_BRR_DIV_Mantissa_Values<USART5::BRR, 4, 12, ReadWriteMode, USART5BRRBase> ;
    using DIV_Fraction = USART5_BRR_DIV_Fraction_Values<USART5::BRR, 0, 4, ReadWriteMode, USART5BRRBase> ;
    using FieldValues = USART5_BRR_DIV_Fraction_Values<USART5::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4000500C, 32, ReadWriteMode, USART5BRRBase, T...> ;

  struct USART5GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40005010, 32, ReadWriteMode>
  {
    using GT = USART5_GTPR_GT_Values<USART5::GTPR, 8, 8, ReadWriteMode, USART5GTPRBase> ;
    using PSC = USART5_GTPR_PSC_Values<USART5::GTPR, 0, 8, ReadWriteMode, USART5GTPRBase> ;
    using FieldValues = USART5_GTPR_PSC_Values<USART5::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40005010, 32, ReadWriteMode, USART5GTPRBase, T...> ;

  struct USART5RTORBase {} ;

  struct RTOR : public RegisterBase<0x40005014, 32, ReadWriteMode>
  {
    using BLEN = USART5_RTOR_BLEN_Values<USART5::RTOR, 24, 8, ReadWriteMode, USART5RTORBase> ;
    using RTO = USART5_RTOR_RTO_Values<USART5::RTOR, 0, 24, ReadWriteMode, USART5RTORBase> ;
    using FieldValues = USART5_RTOR_RTO_Values<USART5::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40005014, 32, ReadWriteMode, USART5RTORBase, T...> ;

  struct USART5RQRBase {} ;

  struct RQR : public RegisterBase<0x40005018, 32, ReadWriteMode>
  {
    using TXFRQ = USART5_RQR_TXFRQ_Values<USART5::RQR, 4, 1, ReadWriteMode, USART5RQRBase> ;
    using RXFRQ = USART5_RQR_RXFRQ_Values<USART5::RQR, 3, 1, ReadWriteMode, USART5RQRBase> ;
    using MMRQ = USART5_RQR_MMRQ_Values<USART5::RQR, 2, 1, ReadWriteMode, USART5RQRBase> ;
    using SBKRQ = USART5_RQR_SBKRQ_Values<USART5::RQR, 1, 1, ReadWriteMode, USART5RQRBase> ;
    using ABRRQ = USART5_RQR_ABRRQ_Values<USART5::RQR, 0, 1, ReadWriteMode, USART5RQRBase> ;
    using FieldValues = USART5_RQR_ABRRQ_Values<USART5::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40005018, 32, ReadWriteMode, USART5RQRBase, T...> ;

  struct USART5ISRBase {} ;

  struct ISR : public RegisterBase<0x4000501C, 32, ReadMode>
  {
    using REACK = USART5_ISR_REACK_Values<USART5::ISR, 22, 1, ReadMode, USART5ISRBase> ;
    using TEACK = USART5_ISR_TEACK_Values<USART5::ISR, 21, 1, ReadMode, USART5ISRBase> ;
    using WUF = USART5_ISR_WUF_Values<USART5::ISR, 20, 1, ReadMode, USART5ISRBase> ;
    using RWU = USART5_ISR_RWU_Values<USART5::ISR, 19, 1, ReadMode, USART5ISRBase> ;
    using SBKF = USART5_ISR_SBKF_Values<USART5::ISR, 18, 1, ReadMode, USART5ISRBase> ;
    using CMF = USART5_ISR_CMF_Values<USART5::ISR, 17, 1, ReadMode, USART5ISRBase> ;
    using BUSY = USART5_ISR_BUSY_Values<USART5::ISR, 16, 1, ReadMode, USART5ISRBase> ;
    using ABRF = USART5_ISR_ABRF_Values<USART5::ISR, 15, 1, ReadMode, USART5ISRBase> ;
    using ABRE = USART5_ISR_ABRE_Values<USART5::ISR, 14, 1, ReadMode, USART5ISRBase> ;
    using EOBF = USART5_ISR_EOBF_Values<USART5::ISR, 12, 1, ReadMode, USART5ISRBase> ;
    using RTOF = USART5_ISR_RTOF_Values<USART5::ISR, 11, 1, ReadMode, USART5ISRBase> ;
    using CTS = USART5_ISR_CTS_Values<USART5::ISR, 10, 1, ReadMode, USART5ISRBase> ;
    using CTSIF = USART5_ISR_CTSIF_Values<USART5::ISR, 9, 1, ReadMode, USART5ISRBase> ;
    using LBDF = USART5_ISR_LBDF_Values<USART5::ISR, 8, 1, ReadMode, USART5ISRBase> ;
    using TXE = USART5_ISR_TXE_Values<USART5::ISR, 7, 1, ReadMode, USART5ISRBase> ;
    using TC = USART5_ISR_TC_Values<USART5::ISR, 6, 1, ReadMode, USART5ISRBase> ;
    using RXNE = USART5_ISR_RXNE_Values<USART5::ISR, 5, 1, ReadMode, USART5ISRBase> ;
    using IDLE = USART5_ISR_IDLE_Values<USART5::ISR, 4, 1, ReadMode, USART5ISRBase> ;
    using ORE = USART5_ISR_ORE_Values<USART5::ISR, 3, 1, ReadMode, USART5ISRBase> ;
    using NF = USART5_ISR_NF_Values<USART5::ISR, 2, 1, ReadMode, USART5ISRBase> ;
    using FE = USART5_ISR_FE_Values<USART5::ISR, 1, 1, ReadMode, USART5ISRBase> ;
    using PE = USART5_ISR_PE_Values<USART5::ISR, 0, 1, ReadMode, USART5ISRBase> ;
    using FieldValues = USART5_ISR_PE_Values<USART5::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000501C, 32, ReadMode, USART5ISRBase, T...> ;

  struct USART5ICRBase {} ;

  struct ICR : public RegisterBase<0x40005020, 32, ReadWriteMode>
  {
    using WUCF = USART5_ICR_WUCF_Values<USART5::ICR, 20, 1, ReadWriteMode, USART5ICRBase> ;
    using CMCF = USART5_ICR_CMCF_Values<USART5::ICR, 17, 1, ReadWriteMode, USART5ICRBase> ;
    using EOBCF = USART5_ICR_EOBCF_Values<USART5::ICR, 12, 1, ReadWriteMode, USART5ICRBase> ;
    using RTOCF = USART5_ICR_RTOCF_Values<USART5::ICR, 11, 1, ReadWriteMode, USART5ICRBase> ;
    using CTSCF = USART5_ICR_CTSCF_Values<USART5::ICR, 9, 1, ReadWriteMode, USART5ICRBase> ;
    using LBDCF = USART5_ICR_LBDCF_Values<USART5::ICR, 8, 1, ReadWriteMode, USART5ICRBase> ;
    using TCCF = USART5_ICR_TCCF_Values<USART5::ICR, 6, 1, ReadWriteMode, USART5ICRBase> ;
    using IDLECF = USART5_ICR_IDLECF_Values<USART5::ICR, 4, 1, ReadWriteMode, USART5ICRBase> ;
    using ORECF = USART5_ICR_ORECF_Values<USART5::ICR, 3, 1, ReadWriteMode, USART5ICRBase> ;
    using NCF = USART5_ICR_NCF_Values<USART5::ICR, 2, 1, ReadWriteMode, USART5ICRBase> ;
    using FECF = USART5_ICR_FECF_Values<USART5::ICR, 1, 1, ReadWriteMode, USART5ICRBase> ;
    using PECF = USART5_ICR_PECF_Values<USART5::ICR, 0, 1, ReadWriteMode, USART5ICRBase> ;
    using FieldValues = USART5_ICR_PECF_Values<USART5::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40005020, 32, ReadWriteMode, USART5ICRBase, T...> ;

  struct USART5RDRBase {} ;

  struct RDR : public RegisterBase<0x40005024, 32, ReadMode>
  {
    using RDRField = USART5_RDR_RDR_Values<USART5::RDR, 0, 9, ReadMode, USART5RDRBase> ;
    using FieldValues = USART5_RDR_RDR_Values<USART5::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40005024, 32, ReadMode, USART5RDRBase, T...> ;

  struct USART5TDRBase {} ;

  struct TDR : public RegisterBase<0x40005028, 32, ReadWriteMode>
  {
    using TDRField = USART5_TDR_TDR_Values<USART5::TDR, 0, 9, ReadWriteMode, USART5TDRBase> ;
    using FieldValues = USART5_TDR_TDR_Values<USART5::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40005028, 32, ReadWriteMode, USART5TDRBase, T...> ;

} ;

#endif //#if !defined(USART5REGISTERS_HPP)
