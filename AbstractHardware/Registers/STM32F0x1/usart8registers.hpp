/*******************************************************************************
* Filename      : usart8registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USART8REGISTERS_HPP)
#define USART8REGISTERS_HPP

#include "usart8fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART8
{
  struct USART8CR1Base {} ;

  struct CR1 : public RegisterBase<0x40011C00, 32, ReadWriteMode>
  {
    using UE = USART8_CR1_UE_Values<USART8::CR1, 0, 1, ReadWriteMode, USART8CR1Base> ;
    using UESM = USART8_CR1_UESM_Values<USART8::CR1, 1, 1, ReadWriteMode, USART8CR1Base> ;
    using RE = USART8_CR1_RE_Values<USART8::CR1, 2, 1, ReadWriteMode, USART8CR1Base> ;
    using TE = USART8_CR1_TE_Values<USART8::CR1, 3, 1, ReadWriteMode, USART8CR1Base> ;
    using IDLEIE = USART8_CR1_IDLEIE_Values<USART8::CR1, 4, 1, ReadWriteMode, USART8CR1Base> ;
    using RXNEIE = USART8_CR1_RXNEIE_Values<USART8::CR1, 5, 1, ReadWriteMode, USART8CR1Base> ;
    using TCIE = USART8_CR1_TCIE_Values<USART8::CR1, 6, 1, ReadWriteMode, USART8CR1Base> ;
    using TXEIE = USART8_CR1_TXEIE_Values<USART8::CR1, 7, 1, ReadWriteMode, USART8CR1Base> ;
    using PEIE = USART8_CR1_PEIE_Values<USART8::CR1, 8, 1, ReadWriteMode, USART8CR1Base> ;
    using PS = USART8_CR1_PS_Values<USART8::CR1, 9, 1, ReadWriteMode, USART8CR1Base> ;
    using PCE = USART8_CR1_PCE_Values<USART8::CR1, 10, 1, ReadWriteMode, USART8CR1Base> ;
    using WAKE = USART8_CR1_WAKE_Values<USART8::CR1, 11, 1, ReadWriteMode, USART8CR1Base> ;
    using M = USART8_CR1_M_Values<USART8::CR1, 12, 1, ReadWriteMode, USART8CR1Base> ;
    using MME = USART8_CR1_MME_Values<USART8::CR1, 13, 1, ReadWriteMode, USART8CR1Base> ;
    using CMIE = USART8_CR1_CMIE_Values<USART8::CR1, 14, 1, ReadWriteMode, USART8CR1Base> ;
    using OVER8 = USART8_CR1_OVER8_Values<USART8::CR1, 15, 1, ReadWriteMode, USART8CR1Base> ;
    using DEDT = USART8_CR1_DEDT_Values<USART8::CR1, 16, 5, ReadWriteMode, USART8CR1Base> ;
    using DEAT = USART8_CR1_DEAT_Values<USART8::CR1, 21, 5, ReadWriteMode, USART8CR1Base> ;
    using RTOIE = USART8_CR1_RTOIE_Values<USART8::CR1, 26, 1, ReadWriteMode, USART8CR1Base> ;
    using EOBIE = USART8_CR1_EOBIE_Values<USART8::CR1, 27, 1, ReadWriteMode, USART8CR1Base> ;
    using M1 = USART8_CR1_M1_Values<USART8::CR1, 28, 1, ReadWriteMode, USART8CR1Base> ;
    using FieldValues = USART8_CR1_M1_Values<USART8::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40011C00, 32, ReadWriteMode, USART8CR1Base, T...> ;

  struct USART8CR2Base {} ;

  struct CR2 : public RegisterBase<0x40011C04, 32, ReadWriteMode>
  {
    using ADD4 = USART8_CR2_ADD4_Values<USART8::CR2, 28, 4, ReadWriteMode, USART8CR2Base> ;
    using ADD0 = USART8_CR2_ADD0_Values<USART8::CR2, 24, 4, ReadWriteMode, USART8CR2Base> ;
    using RTOEN = USART8_CR2_RTOEN_Values<USART8::CR2, 23, 1, ReadWriteMode, USART8CR2Base> ;
    using ABRMOD = USART8_CR2_ABRMOD_Values<USART8::CR2, 21, 2, ReadWriteMode, USART8CR2Base> ;
    using ABREN = USART8_CR2_ABREN_Values<USART8::CR2, 20, 1, ReadWriteMode, USART8CR2Base> ;
    using MSBFIRST = USART8_CR2_MSBFIRST_Values<USART8::CR2, 19, 1, ReadWriteMode, USART8CR2Base> ;
    using DATAINV = USART8_CR2_DATAINV_Values<USART8::CR2, 18, 1, ReadWriteMode, USART8CR2Base> ;
    using TXINV = USART8_CR2_TXINV_Values<USART8::CR2, 17, 1, ReadWriteMode, USART8CR2Base> ;
    using RXINV = USART8_CR2_RXINV_Values<USART8::CR2, 16, 1, ReadWriteMode, USART8CR2Base> ;
    using SWAP = USART8_CR2_SWAP_Values<USART8::CR2, 15, 1, ReadWriteMode, USART8CR2Base> ;
    using LINEN = USART8_CR2_LINEN_Values<USART8::CR2, 14, 1, ReadWriteMode, USART8CR2Base> ;
    using STOP = USART8_CR2_STOP_Values<USART8::CR2, 12, 2, ReadWriteMode, USART8CR2Base> ;
    using CLKEN = USART8_CR2_CLKEN_Values<USART8::CR2, 11, 1, ReadWriteMode, USART8CR2Base> ;
    using CPOL = USART8_CR2_CPOL_Values<USART8::CR2, 10, 1, ReadWriteMode, USART8CR2Base> ;
    using CPHA = USART8_CR2_CPHA_Values<USART8::CR2, 9, 1, ReadWriteMode, USART8CR2Base> ;
    using LBCL = USART8_CR2_LBCL_Values<USART8::CR2, 8, 1, ReadWriteMode, USART8CR2Base> ;
    using LBDIE = USART8_CR2_LBDIE_Values<USART8::CR2, 6, 1, ReadWriteMode, USART8CR2Base> ;
    using LBDL = USART8_CR2_LBDL_Values<USART8::CR2, 5, 1, ReadWriteMode, USART8CR2Base> ;
    using ADDM7 = USART8_CR2_ADDM7_Values<USART8::CR2, 4, 1, ReadWriteMode, USART8CR2Base> ;
    using FieldValues = USART8_CR2_ADDM7_Values<USART8::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40011C04, 32, ReadWriteMode, USART8CR2Base, T...> ;

  struct USART8CR3Base {} ;

  struct CR3 : public RegisterBase<0x40011C08, 32, ReadWriteMode>
  {
    using WUFIE = USART8_CR3_WUFIE_Values<USART8::CR3, 22, 1, ReadWriteMode, USART8CR3Base> ;
    using WUS = USART8_CR3_WUS_Values<USART8::CR3, 20, 2, ReadWriteMode, USART8CR3Base> ;
    using SCARCNT = USART8_CR3_SCARCNT_Values<USART8::CR3, 17, 3, ReadWriteMode, USART8CR3Base> ;
    using DEP = USART8_CR3_DEP_Values<USART8::CR3, 15, 1, ReadWriteMode, USART8CR3Base> ;
    using DEM = USART8_CR3_DEM_Values<USART8::CR3, 14, 1, ReadWriteMode, USART8CR3Base> ;
    using DDRE = USART8_CR3_DDRE_Values<USART8::CR3, 13, 1, ReadWriteMode, USART8CR3Base> ;
    using OVRDIS = USART8_CR3_OVRDIS_Values<USART8::CR3, 12, 1, ReadWriteMode, USART8CR3Base> ;
    using ONEBIT = USART8_CR3_ONEBIT_Values<USART8::CR3, 11, 1, ReadWriteMode, USART8CR3Base> ;
    using CTSIE = USART8_CR3_CTSIE_Values<USART8::CR3, 10, 1, ReadWriteMode, USART8CR3Base> ;
    using CTSE = USART8_CR3_CTSE_Values<USART8::CR3, 9, 1, ReadWriteMode, USART8CR3Base> ;
    using RTSE = USART8_CR3_RTSE_Values<USART8::CR3, 8, 1, ReadWriteMode, USART8CR3Base> ;
    using DMAT = USART8_CR3_DMAT_Values<USART8::CR3, 7, 1, ReadWriteMode, USART8CR3Base> ;
    using DMAR = USART8_CR3_DMAR_Values<USART8::CR3, 6, 1, ReadWriteMode, USART8CR3Base> ;
    using SCEN = USART8_CR3_SCEN_Values<USART8::CR3, 5, 1, ReadWriteMode, USART8CR3Base> ;
    using NACK = USART8_CR3_NACK_Values<USART8::CR3, 4, 1, ReadWriteMode, USART8CR3Base> ;
    using HDSEL = USART8_CR3_HDSEL_Values<USART8::CR3, 3, 1, ReadWriteMode, USART8CR3Base> ;
    using IRLP = USART8_CR3_IRLP_Values<USART8::CR3, 2, 1, ReadWriteMode, USART8CR3Base> ;
    using IREN = USART8_CR3_IREN_Values<USART8::CR3, 1, 1, ReadWriteMode, USART8CR3Base> ;
    using EIE = USART8_CR3_EIE_Values<USART8::CR3, 0, 1, ReadWriteMode, USART8CR3Base> ;
    using FieldValues = USART8_CR3_EIE_Values<USART8::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40011C08, 32, ReadWriteMode, USART8CR3Base, T...> ;

  struct USART8BRRBase {} ;

  struct BRR : public RegisterBase<0x40011C0C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART8_BRR_DIV_Mantissa_Values<USART8::BRR, 4, 12, ReadWriteMode, USART8BRRBase> ;
    using DIV_Fraction = USART8_BRR_DIV_Fraction_Values<USART8::BRR, 0, 4, ReadWriteMode, USART8BRRBase> ;
    using FieldValues = USART8_BRR_DIV_Fraction_Values<USART8::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011C0C, 32, ReadWriteMode, USART8BRRBase, T...> ;

  struct USART8GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40011C10, 32, ReadWriteMode>
  {
    using GT = USART8_GTPR_GT_Values<USART8::GTPR, 8, 8, ReadWriteMode, USART8GTPRBase> ;
    using PSC = USART8_GTPR_PSC_Values<USART8::GTPR, 0, 8, ReadWriteMode, USART8GTPRBase> ;
    using FieldValues = USART8_GTPR_PSC_Values<USART8::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40011C10, 32, ReadWriteMode, USART8GTPRBase, T...> ;

  struct USART8RTORBase {} ;

  struct RTOR : public RegisterBase<0x40011C14, 32, ReadWriteMode>
  {
    using BLEN = USART8_RTOR_BLEN_Values<USART8::RTOR, 24, 8, ReadWriteMode, USART8RTORBase> ;
    using RTO = USART8_RTOR_RTO_Values<USART8::RTOR, 0, 24, ReadWriteMode, USART8RTORBase> ;
    using FieldValues = USART8_RTOR_RTO_Values<USART8::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40011C14, 32, ReadWriteMode, USART8RTORBase, T...> ;

  struct USART8RQRBase {} ;

  struct RQR : public RegisterBase<0x40011C18, 32, ReadWriteMode>
  {
    using TXFRQ = USART8_RQR_TXFRQ_Values<USART8::RQR, 4, 1, ReadWriteMode, USART8RQRBase> ;
    using RXFRQ = USART8_RQR_RXFRQ_Values<USART8::RQR, 3, 1, ReadWriteMode, USART8RQRBase> ;
    using MMRQ = USART8_RQR_MMRQ_Values<USART8::RQR, 2, 1, ReadWriteMode, USART8RQRBase> ;
    using SBKRQ = USART8_RQR_SBKRQ_Values<USART8::RQR, 1, 1, ReadWriteMode, USART8RQRBase> ;
    using ABRRQ = USART8_RQR_ABRRQ_Values<USART8::RQR, 0, 1, ReadWriteMode, USART8RQRBase> ;
    using FieldValues = USART8_RQR_ABRRQ_Values<USART8::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40011C18, 32, ReadWriteMode, USART8RQRBase, T...> ;

  struct USART8ISRBase {} ;

  struct ISR : public RegisterBase<0x40011C1C, 32, ReadMode>
  {
    using REACK = USART8_ISR_REACK_Values<USART8::ISR, 22, 1, ReadMode, USART8ISRBase> ;
    using TEACK = USART8_ISR_TEACK_Values<USART8::ISR, 21, 1, ReadMode, USART8ISRBase> ;
    using WUF = USART8_ISR_WUF_Values<USART8::ISR, 20, 1, ReadMode, USART8ISRBase> ;
    using RWU = USART8_ISR_RWU_Values<USART8::ISR, 19, 1, ReadMode, USART8ISRBase> ;
    using SBKF = USART8_ISR_SBKF_Values<USART8::ISR, 18, 1, ReadMode, USART8ISRBase> ;
    using CMF = USART8_ISR_CMF_Values<USART8::ISR, 17, 1, ReadMode, USART8ISRBase> ;
    using BUSY = USART8_ISR_BUSY_Values<USART8::ISR, 16, 1, ReadMode, USART8ISRBase> ;
    using ABRF = USART8_ISR_ABRF_Values<USART8::ISR, 15, 1, ReadMode, USART8ISRBase> ;
    using ABRE = USART8_ISR_ABRE_Values<USART8::ISR, 14, 1, ReadMode, USART8ISRBase> ;
    using EOBF = USART8_ISR_EOBF_Values<USART8::ISR, 12, 1, ReadMode, USART8ISRBase> ;
    using RTOF = USART8_ISR_RTOF_Values<USART8::ISR, 11, 1, ReadMode, USART8ISRBase> ;
    using CTS = USART8_ISR_CTS_Values<USART8::ISR, 10, 1, ReadMode, USART8ISRBase> ;
    using CTSIF = USART8_ISR_CTSIF_Values<USART8::ISR, 9, 1, ReadMode, USART8ISRBase> ;
    using LBDF = USART8_ISR_LBDF_Values<USART8::ISR, 8, 1, ReadMode, USART8ISRBase> ;
    using TXE = USART8_ISR_TXE_Values<USART8::ISR, 7, 1, ReadMode, USART8ISRBase> ;
    using TC = USART8_ISR_TC_Values<USART8::ISR, 6, 1, ReadMode, USART8ISRBase> ;
    using RXNE = USART8_ISR_RXNE_Values<USART8::ISR, 5, 1, ReadMode, USART8ISRBase> ;
    using IDLE = USART8_ISR_IDLE_Values<USART8::ISR, 4, 1, ReadMode, USART8ISRBase> ;
    using ORE = USART8_ISR_ORE_Values<USART8::ISR, 3, 1, ReadMode, USART8ISRBase> ;
    using NF = USART8_ISR_NF_Values<USART8::ISR, 2, 1, ReadMode, USART8ISRBase> ;
    using FE = USART8_ISR_FE_Values<USART8::ISR, 1, 1, ReadMode, USART8ISRBase> ;
    using PE = USART8_ISR_PE_Values<USART8::ISR, 0, 1, ReadMode, USART8ISRBase> ;
    using FieldValues = USART8_ISR_PE_Values<USART8::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40011C1C, 32, ReadMode, USART8ISRBase, T...> ;

  struct USART8ICRBase {} ;

  struct ICR : public RegisterBase<0x40011C20, 32, ReadWriteMode>
  {
    using WUCF = USART8_ICR_WUCF_Values<USART8::ICR, 20, 1, ReadWriteMode, USART8ICRBase> ;
    using CMCF = USART8_ICR_CMCF_Values<USART8::ICR, 17, 1, ReadWriteMode, USART8ICRBase> ;
    using EOBCF = USART8_ICR_EOBCF_Values<USART8::ICR, 12, 1, ReadWriteMode, USART8ICRBase> ;
    using RTOCF = USART8_ICR_RTOCF_Values<USART8::ICR, 11, 1, ReadWriteMode, USART8ICRBase> ;
    using CTSCF = USART8_ICR_CTSCF_Values<USART8::ICR, 9, 1, ReadWriteMode, USART8ICRBase> ;
    using LBDCF = USART8_ICR_LBDCF_Values<USART8::ICR, 8, 1, ReadWriteMode, USART8ICRBase> ;
    using TCCF = USART8_ICR_TCCF_Values<USART8::ICR, 6, 1, ReadWriteMode, USART8ICRBase> ;
    using IDLECF = USART8_ICR_IDLECF_Values<USART8::ICR, 4, 1, ReadWriteMode, USART8ICRBase> ;
    using ORECF = USART8_ICR_ORECF_Values<USART8::ICR, 3, 1, ReadWriteMode, USART8ICRBase> ;
    using NCF = USART8_ICR_NCF_Values<USART8::ICR, 2, 1, ReadWriteMode, USART8ICRBase> ;
    using FECF = USART8_ICR_FECF_Values<USART8::ICR, 1, 1, ReadWriteMode, USART8ICRBase> ;
    using PECF = USART8_ICR_PECF_Values<USART8::ICR, 0, 1, ReadWriteMode, USART8ICRBase> ;
    using FieldValues = USART8_ICR_PECF_Values<USART8::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40011C20, 32, ReadWriteMode, USART8ICRBase, T...> ;

  struct USART8RDRBase {} ;

  struct RDR : public RegisterBase<0x40011C24, 32, ReadMode>
  {
    using RDRField = USART8_RDR_RDR_Values<USART8::RDR, 0, 9, ReadMode, USART8RDRBase> ;
    using FieldValues = USART8_RDR_RDR_Values<USART8::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40011C24, 32, ReadMode, USART8RDRBase, T...> ;

  struct USART8TDRBase {} ;

  struct TDR : public RegisterBase<0x40011C28, 32, ReadWriteMode>
  {
    using TDRField = USART8_TDR_TDR_Values<USART8::TDR, 0, 9, ReadWriteMode, USART8TDRBase> ;
    using FieldValues = USART8_TDR_TDR_Values<USART8::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40011C28, 32, ReadWriteMode, USART8TDRBase, T...> ;

} ;

#endif //#if !defined(USART8REGISTERS_HPP)
