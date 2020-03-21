/*******************************************************************************
* Filename      : uart5registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(UART5REGISTERS_HPP)
#define UART5REGISTERS_HPP

#include "uart5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART5
{
  struct UART5CR1Base {} ;

  struct CR1 : public RegisterBase<0x40005000, 32, ReadWriteMode>
  {
    using EOBIE = UART5_CR1_EOBIE_Values<UART5::CR1, 27, 1, ReadWriteMode, UART5CR1Base> ;
    using RTOIE = UART5_CR1_RTOIE_Values<UART5::CR1, 26, 1, ReadWriteMode, UART5CR1Base> ;
    using DEAT = UART5_CR1_DEAT_Values<UART5::CR1, 21, 5, ReadWriteMode, UART5CR1Base> ;
    using DEDT = UART5_CR1_DEDT_Values<UART5::CR1, 16, 5, ReadWriteMode, UART5CR1Base> ;
    using OVER8 = UART5_CR1_OVER8_Values<UART5::CR1, 15, 1, ReadWriteMode, UART5CR1Base> ;
    using CMIE = UART5_CR1_CMIE_Values<UART5::CR1, 14, 1, ReadWriteMode, UART5CR1Base> ;
    using MME = UART5_CR1_MME_Values<UART5::CR1, 13, 1, ReadWriteMode, UART5CR1Base> ;
    using M = UART5_CR1_M_Values<UART5::CR1, 12, 1, ReadWriteMode, UART5CR1Base> ;
    using WAKE = UART5_CR1_WAKE_Values<UART5::CR1, 11, 1, ReadWriteMode, UART5CR1Base> ;
    using PCE = UART5_CR1_PCE_Values<UART5::CR1, 10, 1, ReadWriteMode, UART5CR1Base> ;
    using PS = UART5_CR1_PS_Values<UART5::CR1, 9, 1, ReadWriteMode, UART5CR1Base> ;
    using PEIE = UART5_CR1_PEIE_Values<UART5::CR1, 8, 1, ReadWriteMode, UART5CR1Base> ;
    using TXEIE = UART5_CR1_TXEIE_Values<UART5::CR1, 7, 1, ReadWriteMode, UART5CR1Base> ;
    using TCIE = UART5_CR1_TCIE_Values<UART5::CR1, 6, 1, ReadWriteMode, UART5CR1Base> ;
    using RXNEIE = UART5_CR1_RXNEIE_Values<UART5::CR1, 5, 1, ReadWriteMode, UART5CR1Base> ;
    using IDLEIE = UART5_CR1_IDLEIE_Values<UART5::CR1, 4, 1, ReadWriteMode, UART5CR1Base> ;
    using TE = UART5_CR1_TE_Values<UART5::CR1, 3, 1, ReadWriteMode, UART5CR1Base> ;
    using RE = UART5_CR1_RE_Values<UART5::CR1, 2, 1, ReadWriteMode, UART5CR1Base> ;
    using UESM = UART5_CR1_UESM_Values<UART5::CR1, 1, 1, ReadWriteMode, UART5CR1Base> ;
    using UE = UART5_CR1_UE_Values<UART5::CR1, 0, 1, ReadWriteMode, UART5CR1Base> ;
    using FieldValues = UART5_CR1_UE_Values<UART5::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40005000, 32, ReadWriteMode, UART5CR1Base, T...> ;

  struct UART5CR2Base {} ;

  struct CR2 : public RegisterBase<0x40005004, 32, ReadWriteMode>
  {
    using ADD4 = UART5_CR2_ADD4_Values<UART5::CR2, 28, 4, ReadWriteMode, UART5CR2Base> ;
    using ADD0 = UART5_CR2_ADD0_Values<UART5::CR2, 24, 4, ReadWriteMode, UART5CR2Base> ;
    using RTOEN = UART5_CR2_RTOEN_Values<UART5::CR2, 23, 1, ReadWriteMode, UART5CR2Base> ;
    using ABRMOD = UART5_CR2_ABRMOD_Values<UART5::CR2, 21, 2, ReadWriteMode, UART5CR2Base> ;
    using ABREN = UART5_CR2_ABREN_Values<UART5::CR2, 20, 1, ReadWriteMode, UART5CR2Base> ;
    using MSBFIRST = UART5_CR2_MSBFIRST_Values<UART5::CR2, 19, 1, ReadWriteMode, UART5CR2Base> ;
    using DATAINV = UART5_CR2_DATAINV_Values<UART5::CR2, 18, 1, ReadWriteMode, UART5CR2Base> ;
    using TXINV = UART5_CR2_TXINV_Values<UART5::CR2, 17, 1, ReadWriteMode, UART5CR2Base> ;
    using RXINV = UART5_CR2_RXINV_Values<UART5::CR2, 16, 1, ReadWriteMode, UART5CR2Base> ;
    using SWAP = UART5_CR2_SWAP_Values<UART5::CR2, 15, 1, ReadWriteMode, UART5CR2Base> ;
    using LINEN = UART5_CR2_LINEN_Values<UART5::CR2, 14, 1, ReadWriteMode, UART5CR2Base> ;
    using STOP = UART5_CR2_STOP_Values<UART5::CR2, 12, 2, ReadWriteMode, UART5CR2Base> ;
    using CLKEN = UART5_CR2_CLKEN_Values<UART5::CR2, 11, 1, ReadWriteMode, UART5CR2Base> ;
    using CPOL = UART5_CR2_CPOL_Values<UART5::CR2, 10, 1, ReadWriteMode, UART5CR2Base> ;
    using CPHA = UART5_CR2_CPHA_Values<UART5::CR2, 9, 1, ReadWriteMode, UART5CR2Base> ;
    using LBCL = UART5_CR2_LBCL_Values<UART5::CR2, 8, 1, ReadWriteMode, UART5CR2Base> ;
    using LBDIE = UART5_CR2_LBDIE_Values<UART5::CR2, 6, 1, ReadWriteMode, UART5CR2Base> ;
    using LBDL = UART5_CR2_LBDL_Values<UART5::CR2, 5, 1, ReadWriteMode, UART5CR2Base> ;
    using ADDM7 = UART5_CR2_ADDM7_Values<UART5::CR2, 4, 1, ReadWriteMode, UART5CR2Base> ;
    using FieldValues = UART5_CR2_ADDM7_Values<UART5::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40005004, 32, ReadWriteMode, UART5CR2Base, T...> ;

  struct UART5CR3Base {} ;

  struct CR3 : public RegisterBase<0x40005008, 32, ReadWriteMode>
  {
    using WUFIE = UART5_CR3_WUFIE_Values<UART5::CR3, 22, 1, ReadWriteMode, UART5CR3Base> ;
    using WUS = UART5_CR3_WUS_Values<UART5::CR3, 20, 2, ReadWriteMode, UART5CR3Base> ;
    using SCARCNT = UART5_CR3_SCARCNT_Values<UART5::CR3, 17, 3, ReadWriteMode, UART5CR3Base> ;
    using DEP = UART5_CR3_DEP_Values<UART5::CR3, 15, 1, ReadWriteMode, UART5CR3Base> ;
    using DEM = UART5_CR3_DEM_Values<UART5::CR3, 14, 1, ReadWriteMode, UART5CR3Base> ;
    using DDRE = UART5_CR3_DDRE_Values<UART5::CR3, 13, 1, ReadWriteMode, UART5CR3Base> ;
    using OVRDIS = UART5_CR3_OVRDIS_Values<UART5::CR3, 12, 1, ReadWriteMode, UART5CR3Base> ;
    using ONEBIT = UART5_CR3_ONEBIT_Values<UART5::CR3, 11, 1, ReadWriteMode, UART5CR3Base> ;
    using CTSIE = UART5_CR3_CTSIE_Values<UART5::CR3, 10, 1, ReadWriteMode, UART5CR3Base> ;
    using CTSE = UART5_CR3_CTSE_Values<UART5::CR3, 9, 1, ReadWriteMode, UART5CR3Base> ;
    using RTSE = UART5_CR3_RTSE_Values<UART5::CR3, 8, 1, ReadWriteMode, UART5CR3Base> ;
    using DMAT = UART5_CR3_DMAT_Values<UART5::CR3, 7, 1, ReadWriteMode, UART5CR3Base> ;
    using DMAR = UART5_CR3_DMAR_Values<UART5::CR3, 6, 1, ReadWriteMode, UART5CR3Base> ;
    using SCEN = UART5_CR3_SCEN_Values<UART5::CR3, 5, 1, ReadWriteMode, UART5CR3Base> ;
    using NACK = UART5_CR3_NACK_Values<UART5::CR3, 4, 1, ReadWriteMode, UART5CR3Base> ;
    using HDSEL = UART5_CR3_HDSEL_Values<UART5::CR3, 3, 1, ReadWriteMode, UART5CR3Base> ;
    using IRLP = UART5_CR3_IRLP_Values<UART5::CR3, 2, 1, ReadWriteMode, UART5CR3Base> ;
    using IREN = UART5_CR3_IREN_Values<UART5::CR3, 1, 1, ReadWriteMode, UART5CR3Base> ;
    using EIE = UART5_CR3_EIE_Values<UART5::CR3, 0, 1, ReadWriteMode, UART5CR3Base> ;
    using FieldValues = UART5_CR3_EIE_Values<UART5::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40005008, 32, ReadWriteMode, UART5CR3Base, T...> ;

  struct UART5BRRBase {} ;

  struct BRR : public RegisterBase<0x4000500C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = UART5_BRR_DIV_Mantissa_Values<UART5::BRR, 4, 12, ReadWriteMode, UART5BRRBase> ;
    using DIV_Fraction = UART5_BRR_DIV_Fraction_Values<UART5::BRR, 0, 4, ReadWriteMode, UART5BRRBase> ;
    using FieldValues = UART5_BRR_DIV_Fraction_Values<UART5::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4000500C, 32, ReadWriteMode, UART5BRRBase, T...> ;

  struct UART5GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40005010, 32, ReadWriteMode>
  {
    using GT = UART5_GTPR_GT_Values<UART5::GTPR, 8, 8, ReadWriteMode, UART5GTPRBase> ;
    using PSC = UART5_GTPR_PSC_Values<UART5::GTPR, 0, 8, ReadWriteMode, UART5GTPRBase> ;
    using FieldValues = UART5_GTPR_PSC_Values<UART5::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40005010, 32, ReadWriteMode, UART5GTPRBase, T...> ;

  struct UART5RTORBase {} ;

  struct RTOR : public RegisterBase<0x40005014, 32, ReadWriteMode>
  {
    using BLEN = UART5_RTOR_BLEN_Values<UART5::RTOR, 24, 8, ReadWriteMode, UART5RTORBase> ;
    using RTO = UART5_RTOR_RTO_Values<UART5::RTOR, 0, 24, ReadWriteMode, UART5RTORBase> ;
    using FieldValues = UART5_RTOR_RTO_Values<UART5::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40005014, 32, ReadWriteMode, UART5RTORBase, T...> ;

  struct UART5RQRBase {} ;

  struct RQR : public RegisterBase<0x40005018, 32, ReadWriteMode>
  {
    using TXFRQ = UART5_RQR_TXFRQ_Values<UART5::RQR, 4, 1, ReadWriteMode, UART5RQRBase> ;
    using RXFRQ = UART5_RQR_RXFRQ_Values<UART5::RQR, 3, 1, ReadWriteMode, UART5RQRBase> ;
    using MMRQ = UART5_RQR_MMRQ_Values<UART5::RQR, 2, 1, ReadWriteMode, UART5RQRBase> ;
    using SBKRQ = UART5_RQR_SBKRQ_Values<UART5::RQR, 1, 1, ReadWriteMode, UART5RQRBase> ;
    using ABRRQ = UART5_RQR_ABRRQ_Values<UART5::RQR, 0, 1, ReadWriteMode, UART5RQRBase> ;
    using FieldValues = UART5_RQR_ABRRQ_Values<UART5::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40005018, 32, ReadWriteMode, UART5RQRBase, T...> ;

  struct UART5ISRBase {} ;

  struct ISR : public RegisterBase<0x4000501C, 32, ReadMode>
  {
    using REACK = UART5_ISR_REACK_Values<UART5::ISR, 22, 1, ReadMode, UART5ISRBase> ;
    using TEACK = UART5_ISR_TEACK_Values<UART5::ISR, 21, 1, ReadMode, UART5ISRBase> ;
    using WUF = UART5_ISR_WUF_Values<UART5::ISR, 20, 1, ReadMode, UART5ISRBase> ;
    using RWU = UART5_ISR_RWU_Values<UART5::ISR, 19, 1, ReadMode, UART5ISRBase> ;
    using SBKF = UART5_ISR_SBKF_Values<UART5::ISR, 18, 1, ReadMode, UART5ISRBase> ;
    using CMF = UART5_ISR_CMF_Values<UART5::ISR, 17, 1, ReadMode, UART5ISRBase> ;
    using BUSY = UART5_ISR_BUSY_Values<UART5::ISR, 16, 1, ReadMode, UART5ISRBase> ;
    using ABRF = UART5_ISR_ABRF_Values<UART5::ISR, 15, 1, ReadMode, UART5ISRBase> ;
    using ABRE = UART5_ISR_ABRE_Values<UART5::ISR, 14, 1, ReadMode, UART5ISRBase> ;
    using EOBF = UART5_ISR_EOBF_Values<UART5::ISR, 12, 1, ReadMode, UART5ISRBase> ;
    using RTOF = UART5_ISR_RTOF_Values<UART5::ISR, 11, 1, ReadMode, UART5ISRBase> ;
    using CTS = UART5_ISR_CTS_Values<UART5::ISR, 10, 1, ReadMode, UART5ISRBase> ;
    using CTSIF = UART5_ISR_CTSIF_Values<UART5::ISR, 9, 1, ReadMode, UART5ISRBase> ;
    using LBDF = UART5_ISR_LBDF_Values<UART5::ISR, 8, 1, ReadMode, UART5ISRBase> ;
    using TXE = UART5_ISR_TXE_Values<UART5::ISR, 7, 1, ReadMode, UART5ISRBase> ;
    using TC = UART5_ISR_TC_Values<UART5::ISR, 6, 1, ReadMode, UART5ISRBase> ;
    using RXNE = UART5_ISR_RXNE_Values<UART5::ISR, 5, 1, ReadMode, UART5ISRBase> ;
    using IDLE = UART5_ISR_IDLE_Values<UART5::ISR, 4, 1, ReadMode, UART5ISRBase> ;
    using ORE = UART5_ISR_ORE_Values<UART5::ISR, 3, 1, ReadMode, UART5ISRBase> ;
    using NF = UART5_ISR_NF_Values<UART5::ISR, 2, 1, ReadMode, UART5ISRBase> ;
    using FE = UART5_ISR_FE_Values<UART5::ISR, 1, 1, ReadMode, UART5ISRBase> ;
    using PE = UART5_ISR_PE_Values<UART5::ISR, 0, 1, ReadMode, UART5ISRBase> ;
    using FieldValues = UART5_ISR_PE_Values<UART5::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000501C, 32, ReadMode, UART5ISRBase, T...> ;

  struct UART5ICRBase {} ;

  struct ICR : public RegisterBase<0x40005020, 32, ReadWriteMode>
  {
    using WUCF = UART5_ICR_WUCF_Values<UART5::ICR, 20, 1, ReadWriteMode, UART5ICRBase> ;
    using CMCF = UART5_ICR_CMCF_Values<UART5::ICR, 17, 1, ReadWriteMode, UART5ICRBase> ;
    using EOBCF = UART5_ICR_EOBCF_Values<UART5::ICR, 12, 1, ReadWriteMode, UART5ICRBase> ;
    using RTOCF = UART5_ICR_RTOCF_Values<UART5::ICR, 11, 1, ReadWriteMode, UART5ICRBase> ;
    using CTSCF = UART5_ICR_CTSCF_Values<UART5::ICR, 9, 1, ReadWriteMode, UART5ICRBase> ;
    using LBDCF = UART5_ICR_LBDCF_Values<UART5::ICR, 8, 1, ReadWriteMode, UART5ICRBase> ;
    using TCCF = UART5_ICR_TCCF_Values<UART5::ICR, 6, 1, ReadWriteMode, UART5ICRBase> ;
    using IDLECF = UART5_ICR_IDLECF_Values<UART5::ICR, 4, 1, ReadWriteMode, UART5ICRBase> ;
    using ORECF = UART5_ICR_ORECF_Values<UART5::ICR, 3, 1, ReadWriteMode, UART5ICRBase> ;
    using NCF = UART5_ICR_NCF_Values<UART5::ICR, 2, 1, ReadWriteMode, UART5ICRBase> ;
    using FECF = UART5_ICR_FECF_Values<UART5::ICR, 1, 1, ReadWriteMode, UART5ICRBase> ;
    using PECF = UART5_ICR_PECF_Values<UART5::ICR, 0, 1, ReadWriteMode, UART5ICRBase> ;
    using FieldValues = UART5_ICR_PECF_Values<UART5::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40005020, 32, ReadWriteMode, UART5ICRBase, T...> ;

  struct UART5RDRBase {} ;

  struct RDR : public RegisterBase<0x40005024, 32, ReadMode>
  {
    using RDRField = UART5_RDR_RDR_Values<UART5::RDR, 0, 9, ReadMode, UART5RDRBase> ;
    using FieldValues = UART5_RDR_RDR_Values<UART5::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40005024, 32, ReadMode, UART5RDRBase, T...> ;

  struct UART5TDRBase {} ;

  struct TDR : public RegisterBase<0x40005028, 32, ReadWriteMode>
  {
    using TDRField = UART5_TDR_TDR_Values<UART5::TDR, 0, 9, ReadWriteMode, UART5TDRBase> ;
    using FieldValues = UART5_TDR_TDR_Values<UART5::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40005028, 32, ReadWriteMode, UART5TDRBase, T...> ;

} ;

#endif //#if !defined(UART5REGISTERS_HPP)
