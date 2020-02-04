/*******************************************************************************
* Filename      : usart7registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USART7REGISTERS_HPP)
#define USART7REGISTERS_HPP

#include "usart7fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART7
{
  struct USART7CR1Base {} ;

  struct CR1 : public RegisterBase<0x40011800, 32, ReadWriteMode>
  {
    using UE = USART7_CR1_UE_Values<USART7::CR1, 0, 1, ReadWriteMode, USART7CR1Base> ;
    using UESM = USART7_CR1_UESM_Values<USART7::CR1, 1, 1, ReadWriteMode, USART7CR1Base> ;
    using RE = USART7_CR1_RE_Values<USART7::CR1, 2, 1, ReadWriteMode, USART7CR1Base> ;
    using TE = USART7_CR1_TE_Values<USART7::CR1, 3, 1, ReadWriteMode, USART7CR1Base> ;
    using IDLEIE = USART7_CR1_IDLEIE_Values<USART7::CR1, 4, 1, ReadWriteMode, USART7CR1Base> ;
    using RXNEIE = USART7_CR1_RXNEIE_Values<USART7::CR1, 5, 1, ReadWriteMode, USART7CR1Base> ;
    using TCIE = USART7_CR1_TCIE_Values<USART7::CR1, 6, 1, ReadWriteMode, USART7CR1Base> ;
    using TXEIE = USART7_CR1_TXEIE_Values<USART7::CR1, 7, 1, ReadWriteMode, USART7CR1Base> ;
    using PEIE = USART7_CR1_PEIE_Values<USART7::CR1, 8, 1, ReadWriteMode, USART7CR1Base> ;
    using PS = USART7_CR1_PS_Values<USART7::CR1, 9, 1, ReadWriteMode, USART7CR1Base> ;
    using PCE = USART7_CR1_PCE_Values<USART7::CR1, 10, 1, ReadWriteMode, USART7CR1Base> ;
    using WAKE = USART7_CR1_WAKE_Values<USART7::CR1, 11, 1, ReadWriteMode, USART7CR1Base> ;
    using M = USART7_CR1_M_Values<USART7::CR1, 12, 1, ReadWriteMode, USART7CR1Base> ;
    using MME = USART7_CR1_MME_Values<USART7::CR1, 13, 1, ReadWriteMode, USART7CR1Base> ;
    using CMIE = USART7_CR1_CMIE_Values<USART7::CR1, 14, 1, ReadWriteMode, USART7CR1Base> ;
    using OVER8 = USART7_CR1_OVER8_Values<USART7::CR1, 15, 1, ReadWriteMode, USART7CR1Base> ;
    using DEDT = USART7_CR1_DEDT_Values<USART7::CR1, 16, 5, ReadWriteMode, USART7CR1Base> ;
    using DEAT = USART7_CR1_DEAT_Values<USART7::CR1, 21, 5, ReadWriteMode, USART7CR1Base> ;
    using RTOIE = USART7_CR1_RTOIE_Values<USART7::CR1, 26, 1, ReadWriteMode, USART7CR1Base> ;
    using EOBIE = USART7_CR1_EOBIE_Values<USART7::CR1, 27, 1, ReadWriteMode, USART7CR1Base> ;
    using M1 = USART7_CR1_M1_Values<USART7::CR1, 28, 1, ReadWriteMode, USART7CR1Base> ;
    using FieldValues = USART7_CR1_M1_Values<USART7::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40011800, 32, ReadWriteMode, USART7CR1Base, T...> ;

  struct USART7CR2Base {} ;

  struct CR2 : public RegisterBase<0x40011804, 32, ReadWriteMode>
  {
    using ADD4 = USART7_CR2_ADD4_Values<USART7::CR2, 28, 4, ReadWriteMode, USART7CR2Base> ;
    using ADD0 = USART7_CR2_ADD0_Values<USART7::CR2, 24, 4, ReadWriteMode, USART7CR2Base> ;
    using RTOEN = USART7_CR2_RTOEN_Values<USART7::CR2, 23, 1, ReadWriteMode, USART7CR2Base> ;
    using ABRMOD = USART7_CR2_ABRMOD_Values<USART7::CR2, 21, 2, ReadWriteMode, USART7CR2Base> ;
    using ABREN = USART7_CR2_ABREN_Values<USART7::CR2, 20, 1, ReadWriteMode, USART7CR2Base> ;
    using MSBFIRST = USART7_CR2_MSBFIRST_Values<USART7::CR2, 19, 1, ReadWriteMode, USART7CR2Base> ;
    using DATAINV = USART7_CR2_DATAINV_Values<USART7::CR2, 18, 1, ReadWriteMode, USART7CR2Base> ;
    using TXINV = USART7_CR2_TXINV_Values<USART7::CR2, 17, 1, ReadWriteMode, USART7CR2Base> ;
    using RXINV = USART7_CR2_RXINV_Values<USART7::CR2, 16, 1, ReadWriteMode, USART7CR2Base> ;
    using SWAP = USART7_CR2_SWAP_Values<USART7::CR2, 15, 1, ReadWriteMode, USART7CR2Base> ;
    using LINEN = USART7_CR2_LINEN_Values<USART7::CR2, 14, 1, ReadWriteMode, USART7CR2Base> ;
    using STOP = USART7_CR2_STOP_Values<USART7::CR2, 12, 2, ReadWriteMode, USART7CR2Base> ;
    using CLKEN = USART7_CR2_CLKEN_Values<USART7::CR2, 11, 1, ReadWriteMode, USART7CR2Base> ;
    using CPOL = USART7_CR2_CPOL_Values<USART7::CR2, 10, 1, ReadWriteMode, USART7CR2Base> ;
    using CPHA = USART7_CR2_CPHA_Values<USART7::CR2, 9, 1, ReadWriteMode, USART7CR2Base> ;
    using LBCL = USART7_CR2_LBCL_Values<USART7::CR2, 8, 1, ReadWriteMode, USART7CR2Base> ;
    using LBDIE = USART7_CR2_LBDIE_Values<USART7::CR2, 6, 1, ReadWriteMode, USART7CR2Base> ;
    using LBDL = USART7_CR2_LBDL_Values<USART7::CR2, 5, 1, ReadWriteMode, USART7CR2Base> ;
    using ADDM7 = USART7_CR2_ADDM7_Values<USART7::CR2, 4, 1, ReadWriteMode, USART7CR2Base> ;
    using FieldValues = USART7_CR2_ADDM7_Values<USART7::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40011804, 32, ReadWriteMode, USART7CR2Base, T...> ;

  struct USART7CR3Base {} ;

  struct CR3 : public RegisterBase<0x40011808, 32, ReadWriteMode>
  {
    using WUFIE = USART7_CR3_WUFIE_Values<USART7::CR3, 22, 1, ReadWriteMode, USART7CR3Base> ;
    using WUS = USART7_CR3_WUS_Values<USART7::CR3, 20, 2, ReadWriteMode, USART7CR3Base> ;
    using SCARCNT = USART7_CR3_SCARCNT_Values<USART7::CR3, 17, 3, ReadWriteMode, USART7CR3Base> ;
    using DEP = USART7_CR3_DEP_Values<USART7::CR3, 15, 1, ReadWriteMode, USART7CR3Base> ;
    using DEM = USART7_CR3_DEM_Values<USART7::CR3, 14, 1, ReadWriteMode, USART7CR3Base> ;
    using DDRE = USART7_CR3_DDRE_Values<USART7::CR3, 13, 1, ReadWriteMode, USART7CR3Base> ;
    using OVRDIS = USART7_CR3_OVRDIS_Values<USART7::CR3, 12, 1, ReadWriteMode, USART7CR3Base> ;
    using ONEBIT = USART7_CR3_ONEBIT_Values<USART7::CR3, 11, 1, ReadWriteMode, USART7CR3Base> ;
    using CTSIE = USART7_CR3_CTSIE_Values<USART7::CR3, 10, 1, ReadWriteMode, USART7CR3Base> ;
    using CTSE = USART7_CR3_CTSE_Values<USART7::CR3, 9, 1, ReadWriteMode, USART7CR3Base> ;
    using RTSE = USART7_CR3_RTSE_Values<USART7::CR3, 8, 1, ReadWriteMode, USART7CR3Base> ;
    using DMAT = USART7_CR3_DMAT_Values<USART7::CR3, 7, 1, ReadWriteMode, USART7CR3Base> ;
    using DMAR = USART7_CR3_DMAR_Values<USART7::CR3, 6, 1, ReadWriteMode, USART7CR3Base> ;
    using SCEN = USART7_CR3_SCEN_Values<USART7::CR3, 5, 1, ReadWriteMode, USART7CR3Base> ;
    using NACK = USART7_CR3_NACK_Values<USART7::CR3, 4, 1, ReadWriteMode, USART7CR3Base> ;
    using HDSEL = USART7_CR3_HDSEL_Values<USART7::CR3, 3, 1, ReadWriteMode, USART7CR3Base> ;
    using IRLP = USART7_CR3_IRLP_Values<USART7::CR3, 2, 1, ReadWriteMode, USART7CR3Base> ;
    using IREN = USART7_CR3_IREN_Values<USART7::CR3, 1, 1, ReadWriteMode, USART7CR3Base> ;
    using EIE = USART7_CR3_EIE_Values<USART7::CR3, 0, 1, ReadWriteMode, USART7CR3Base> ;
    using FieldValues = USART7_CR3_EIE_Values<USART7::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40011808, 32, ReadWriteMode, USART7CR3Base, T...> ;

  struct USART7BRRBase {} ;

  struct BRR : public RegisterBase<0x4001180C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART7_BRR_DIV_Mantissa_Values<USART7::BRR, 4, 12, ReadWriteMode, USART7BRRBase> ;
    using DIV_Fraction = USART7_BRR_DIV_Fraction_Values<USART7::BRR, 0, 4, ReadWriteMode, USART7BRRBase> ;
    using FieldValues = USART7_BRR_DIV_Fraction_Values<USART7::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4001180C, 32, ReadWriteMode, USART7BRRBase, T...> ;

  struct USART7GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40011810, 32, ReadWriteMode>
  {
    using GT = USART7_GTPR_GT_Values<USART7::GTPR, 8, 8, ReadWriteMode, USART7GTPRBase> ;
    using PSC = USART7_GTPR_PSC_Values<USART7::GTPR, 0, 8, ReadWriteMode, USART7GTPRBase> ;
    using FieldValues = USART7_GTPR_PSC_Values<USART7::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40011810, 32, ReadWriteMode, USART7GTPRBase, T...> ;

  struct USART7RTORBase {} ;

  struct RTOR : public RegisterBase<0x40011814, 32, ReadWriteMode>
  {
    using BLEN = USART7_RTOR_BLEN_Values<USART7::RTOR, 24, 8, ReadWriteMode, USART7RTORBase> ;
    using RTO = USART7_RTOR_RTO_Values<USART7::RTOR, 0, 24, ReadWriteMode, USART7RTORBase> ;
    using FieldValues = USART7_RTOR_RTO_Values<USART7::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40011814, 32, ReadWriteMode, USART7RTORBase, T...> ;

  struct USART7RQRBase {} ;

  struct RQR : public RegisterBase<0x40011818, 32, ReadWriteMode>
  {
    using TXFRQ = USART7_RQR_TXFRQ_Values<USART7::RQR, 4, 1, ReadWriteMode, USART7RQRBase> ;
    using RXFRQ = USART7_RQR_RXFRQ_Values<USART7::RQR, 3, 1, ReadWriteMode, USART7RQRBase> ;
    using MMRQ = USART7_RQR_MMRQ_Values<USART7::RQR, 2, 1, ReadWriteMode, USART7RQRBase> ;
    using SBKRQ = USART7_RQR_SBKRQ_Values<USART7::RQR, 1, 1, ReadWriteMode, USART7RQRBase> ;
    using ABRRQ = USART7_RQR_ABRRQ_Values<USART7::RQR, 0, 1, ReadWriteMode, USART7RQRBase> ;
    using FieldValues = USART7_RQR_ABRRQ_Values<USART7::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40011818, 32, ReadWriteMode, USART7RQRBase, T...> ;

  struct USART7ISRBase {} ;

  struct ISR : public RegisterBase<0x4001181C, 32, ReadMode>
  {
    using REACK = USART7_ISR_REACK_Values<USART7::ISR, 22, 1, ReadMode, USART7ISRBase> ;
    using TEACK = USART7_ISR_TEACK_Values<USART7::ISR, 21, 1, ReadMode, USART7ISRBase> ;
    using WUF = USART7_ISR_WUF_Values<USART7::ISR, 20, 1, ReadMode, USART7ISRBase> ;
    using RWU = USART7_ISR_RWU_Values<USART7::ISR, 19, 1, ReadMode, USART7ISRBase> ;
    using SBKF = USART7_ISR_SBKF_Values<USART7::ISR, 18, 1, ReadMode, USART7ISRBase> ;
    using CMF = USART7_ISR_CMF_Values<USART7::ISR, 17, 1, ReadMode, USART7ISRBase> ;
    using BUSY = USART7_ISR_BUSY_Values<USART7::ISR, 16, 1, ReadMode, USART7ISRBase> ;
    using ABRF = USART7_ISR_ABRF_Values<USART7::ISR, 15, 1, ReadMode, USART7ISRBase> ;
    using ABRE = USART7_ISR_ABRE_Values<USART7::ISR, 14, 1, ReadMode, USART7ISRBase> ;
    using EOBF = USART7_ISR_EOBF_Values<USART7::ISR, 12, 1, ReadMode, USART7ISRBase> ;
    using RTOF = USART7_ISR_RTOF_Values<USART7::ISR, 11, 1, ReadMode, USART7ISRBase> ;
    using CTS = USART7_ISR_CTS_Values<USART7::ISR, 10, 1, ReadMode, USART7ISRBase> ;
    using CTSIF = USART7_ISR_CTSIF_Values<USART7::ISR, 9, 1, ReadMode, USART7ISRBase> ;
    using LBDF = USART7_ISR_LBDF_Values<USART7::ISR, 8, 1, ReadMode, USART7ISRBase> ;
    using TXE = USART7_ISR_TXE_Values<USART7::ISR, 7, 1, ReadMode, USART7ISRBase> ;
    using TC = USART7_ISR_TC_Values<USART7::ISR, 6, 1, ReadMode, USART7ISRBase> ;
    using RXNE = USART7_ISR_RXNE_Values<USART7::ISR, 5, 1, ReadMode, USART7ISRBase> ;
    using IDLE = USART7_ISR_IDLE_Values<USART7::ISR, 4, 1, ReadMode, USART7ISRBase> ;
    using ORE = USART7_ISR_ORE_Values<USART7::ISR, 3, 1, ReadMode, USART7ISRBase> ;
    using NF = USART7_ISR_NF_Values<USART7::ISR, 2, 1, ReadMode, USART7ISRBase> ;
    using FE = USART7_ISR_FE_Values<USART7::ISR, 1, 1, ReadMode, USART7ISRBase> ;
    using PE = USART7_ISR_PE_Values<USART7::ISR, 0, 1, ReadMode, USART7ISRBase> ;
    using FieldValues = USART7_ISR_PE_Values<USART7::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4001181C, 32, ReadMode, USART7ISRBase, T...> ;

  struct USART7ICRBase {} ;

  struct ICR : public RegisterBase<0x40011820, 32, ReadWriteMode>
  {
    using WUCF = USART7_ICR_WUCF_Values<USART7::ICR, 20, 1, ReadWriteMode, USART7ICRBase> ;
    using CMCF = USART7_ICR_CMCF_Values<USART7::ICR, 17, 1, ReadWriteMode, USART7ICRBase> ;
    using EOBCF = USART7_ICR_EOBCF_Values<USART7::ICR, 12, 1, ReadWriteMode, USART7ICRBase> ;
    using RTOCF = USART7_ICR_RTOCF_Values<USART7::ICR, 11, 1, ReadWriteMode, USART7ICRBase> ;
    using CTSCF = USART7_ICR_CTSCF_Values<USART7::ICR, 9, 1, ReadWriteMode, USART7ICRBase> ;
    using LBDCF = USART7_ICR_LBDCF_Values<USART7::ICR, 8, 1, ReadWriteMode, USART7ICRBase> ;
    using TCCF = USART7_ICR_TCCF_Values<USART7::ICR, 6, 1, ReadWriteMode, USART7ICRBase> ;
    using IDLECF = USART7_ICR_IDLECF_Values<USART7::ICR, 4, 1, ReadWriteMode, USART7ICRBase> ;
    using ORECF = USART7_ICR_ORECF_Values<USART7::ICR, 3, 1, ReadWriteMode, USART7ICRBase> ;
    using NCF = USART7_ICR_NCF_Values<USART7::ICR, 2, 1, ReadWriteMode, USART7ICRBase> ;
    using FECF = USART7_ICR_FECF_Values<USART7::ICR, 1, 1, ReadWriteMode, USART7ICRBase> ;
    using PECF = USART7_ICR_PECF_Values<USART7::ICR, 0, 1, ReadWriteMode, USART7ICRBase> ;
    using FieldValues = USART7_ICR_PECF_Values<USART7::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40011820, 32, ReadWriteMode, USART7ICRBase, T...> ;

  struct USART7RDRBase {} ;

  struct RDR : public RegisterBase<0x40011824, 32, ReadMode>
  {
    using RDRField = USART7_RDR_RDR_Values<USART7::RDR, 0, 9, ReadMode, USART7RDRBase> ;
    using FieldValues = USART7_RDR_RDR_Values<USART7::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40011824, 32, ReadMode, USART7RDRBase, T...> ;

  struct USART7TDRBase {} ;

  struct TDR : public RegisterBase<0x40011828, 32, ReadWriteMode>
  {
    using TDRField = USART7_TDR_TDR_Values<USART7::TDR, 0, 9, ReadWriteMode, USART7TDRBase> ;
    using FieldValues = USART7_TDR_TDR_Values<USART7::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40011828, 32, ReadWriteMode, USART7TDRBase, T...> ;

} ;

#endif //#if !defined(USART7REGISTERS_HPP)
