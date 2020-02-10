/*******************************************************************************
* Filename      : uart4registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(UART4REGISTERS_HPP)
#define UART4REGISTERS_HPP

#include "uart4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART4
{
  struct UART4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40004C00, 32, ReadWriteMode>
  {
    using EOBIE = UART4_CR1_EOBIE_Values<UART4::CR1, 27, 1, ReadWriteMode, UART4CR1Base> ;
    using RTOIE = UART4_CR1_RTOIE_Values<UART4::CR1, 26, 1, ReadWriteMode, UART4CR1Base> ;
    using DEAT = UART4_CR1_DEAT_Values<UART4::CR1, 21, 5, ReadWriteMode, UART4CR1Base> ;
    using DEDT = UART4_CR1_DEDT_Values<UART4::CR1, 16, 5, ReadWriteMode, UART4CR1Base> ;
    using OVER8 = UART4_CR1_OVER8_Values<UART4::CR1, 15, 1, ReadWriteMode, UART4CR1Base> ;
    using CMIE = UART4_CR1_CMIE_Values<UART4::CR1, 14, 1, ReadWriteMode, UART4CR1Base> ;
    using MME = UART4_CR1_MME_Values<UART4::CR1, 13, 1, ReadWriteMode, UART4CR1Base> ;
    using M = UART4_CR1_M_Values<UART4::CR1, 12, 1, ReadWriteMode, UART4CR1Base> ;
    using WAKE = UART4_CR1_WAKE_Values<UART4::CR1, 11, 1, ReadWriteMode, UART4CR1Base> ;
    using PCE = UART4_CR1_PCE_Values<UART4::CR1, 10, 1, ReadWriteMode, UART4CR1Base> ;
    using PS = UART4_CR1_PS_Values<UART4::CR1, 9, 1, ReadWriteMode, UART4CR1Base> ;
    using PEIE = UART4_CR1_PEIE_Values<UART4::CR1, 8, 1, ReadWriteMode, UART4CR1Base> ;
    using TXEIE = UART4_CR1_TXEIE_Values<UART4::CR1, 7, 1, ReadWriteMode, UART4CR1Base> ;
    using TCIE = UART4_CR1_TCIE_Values<UART4::CR1, 6, 1, ReadWriteMode, UART4CR1Base> ;
    using RXNEIE = UART4_CR1_RXNEIE_Values<UART4::CR1, 5, 1, ReadWriteMode, UART4CR1Base> ;
    using IDLEIE = UART4_CR1_IDLEIE_Values<UART4::CR1, 4, 1, ReadWriteMode, UART4CR1Base> ;
    using TE = UART4_CR1_TE_Values<UART4::CR1, 3, 1, ReadWriteMode, UART4CR1Base> ;
    using RE = UART4_CR1_RE_Values<UART4::CR1, 2, 1, ReadWriteMode, UART4CR1Base> ;
    using UESM = UART4_CR1_UESM_Values<UART4::CR1, 1, 1, ReadWriteMode, UART4CR1Base> ;
    using UE = UART4_CR1_UE_Values<UART4::CR1, 0, 1, ReadWriteMode, UART4CR1Base> ;
    using FieldValues = UART4_CR1_UE_Values<UART4::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40004C00, 32, ReadWriteMode, UART4CR1Base, T...> ;

  struct UART4CR2Base {} ;

  struct CR2 : public RegisterBase<0x40004C04, 32, ReadWriteMode>
  {
    using ADD4 = UART4_CR2_ADD4_Values<UART4::CR2, 28, 4, ReadWriteMode, UART4CR2Base> ;
    using ADD0 = UART4_CR2_ADD0_Values<UART4::CR2, 24, 4, ReadWriteMode, UART4CR2Base> ;
    using RTOEN = UART4_CR2_RTOEN_Values<UART4::CR2, 23, 1, ReadWriteMode, UART4CR2Base> ;
    using ABRMOD = UART4_CR2_ABRMOD_Values<UART4::CR2, 21, 2, ReadWriteMode, UART4CR2Base> ;
    using ABREN = UART4_CR2_ABREN_Values<UART4::CR2, 20, 1, ReadWriteMode, UART4CR2Base> ;
    using MSBFIRST = UART4_CR2_MSBFIRST_Values<UART4::CR2, 19, 1, ReadWriteMode, UART4CR2Base> ;
    using DATAINV = UART4_CR2_DATAINV_Values<UART4::CR2, 18, 1, ReadWriteMode, UART4CR2Base> ;
    using TXINV = UART4_CR2_TXINV_Values<UART4::CR2, 17, 1, ReadWriteMode, UART4CR2Base> ;
    using RXINV = UART4_CR2_RXINV_Values<UART4::CR2, 16, 1, ReadWriteMode, UART4CR2Base> ;
    using SWAP = UART4_CR2_SWAP_Values<UART4::CR2, 15, 1, ReadWriteMode, UART4CR2Base> ;
    using LINEN = UART4_CR2_LINEN_Values<UART4::CR2, 14, 1, ReadWriteMode, UART4CR2Base> ;
    using STOP = UART4_CR2_STOP_Values<UART4::CR2, 12, 2, ReadWriteMode, UART4CR2Base> ;
    using CLKEN = UART4_CR2_CLKEN_Values<UART4::CR2, 11, 1, ReadWriteMode, UART4CR2Base> ;
    using CPOL = UART4_CR2_CPOL_Values<UART4::CR2, 10, 1, ReadWriteMode, UART4CR2Base> ;
    using CPHA = UART4_CR2_CPHA_Values<UART4::CR2, 9, 1, ReadWriteMode, UART4CR2Base> ;
    using LBCL = UART4_CR2_LBCL_Values<UART4::CR2, 8, 1, ReadWriteMode, UART4CR2Base> ;
    using LBDIE = UART4_CR2_LBDIE_Values<UART4::CR2, 6, 1, ReadWriteMode, UART4CR2Base> ;
    using LBDL = UART4_CR2_LBDL_Values<UART4::CR2, 5, 1, ReadWriteMode, UART4CR2Base> ;
    using ADDM7 = UART4_CR2_ADDM7_Values<UART4::CR2, 4, 1, ReadWriteMode, UART4CR2Base> ;
    using FieldValues = UART4_CR2_ADDM7_Values<UART4::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004C04, 32, ReadWriteMode, UART4CR2Base, T...> ;

  struct UART4CR3Base {} ;

  struct CR3 : public RegisterBase<0x40004C08, 32, ReadWriteMode>
  {
    using WUFIE = UART4_CR3_WUFIE_Values<UART4::CR3, 22, 1, ReadWriteMode, UART4CR3Base> ;
    using WUS = UART4_CR3_WUS_Values<UART4::CR3, 20, 2, ReadWriteMode, UART4CR3Base> ;
    using SCARCNT = UART4_CR3_SCARCNT_Values<UART4::CR3, 17, 3, ReadWriteMode, UART4CR3Base> ;
    using DEP = UART4_CR3_DEP_Values<UART4::CR3, 15, 1, ReadWriteMode, UART4CR3Base> ;
    using DEM = UART4_CR3_DEM_Values<UART4::CR3, 14, 1, ReadWriteMode, UART4CR3Base> ;
    using DDRE = UART4_CR3_DDRE_Values<UART4::CR3, 13, 1, ReadWriteMode, UART4CR3Base> ;
    using OVRDIS = UART4_CR3_OVRDIS_Values<UART4::CR3, 12, 1, ReadWriteMode, UART4CR3Base> ;
    using ONEBIT = UART4_CR3_ONEBIT_Values<UART4::CR3, 11, 1, ReadWriteMode, UART4CR3Base> ;
    using CTSIE = UART4_CR3_CTSIE_Values<UART4::CR3, 10, 1, ReadWriteMode, UART4CR3Base> ;
    using CTSE = UART4_CR3_CTSE_Values<UART4::CR3, 9, 1, ReadWriteMode, UART4CR3Base> ;
    using RTSE = UART4_CR3_RTSE_Values<UART4::CR3, 8, 1, ReadWriteMode, UART4CR3Base> ;
    using DMAT = UART4_CR3_DMAT_Values<UART4::CR3, 7, 1, ReadWriteMode, UART4CR3Base> ;
    using DMAR = UART4_CR3_DMAR_Values<UART4::CR3, 6, 1, ReadWriteMode, UART4CR3Base> ;
    using SCEN = UART4_CR3_SCEN_Values<UART4::CR3, 5, 1, ReadWriteMode, UART4CR3Base> ;
    using NACK = UART4_CR3_NACK_Values<UART4::CR3, 4, 1, ReadWriteMode, UART4CR3Base> ;
    using HDSEL = UART4_CR3_HDSEL_Values<UART4::CR3, 3, 1, ReadWriteMode, UART4CR3Base> ;
    using IRLP = UART4_CR3_IRLP_Values<UART4::CR3, 2, 1, ReadWriteMode, UART4CR3Base> ;
    using IREN = UART4_CR3_IREN_Values<UART4::CR3, 1, 1, ReadWriteMode, UART4CR3Base> ;
    using EIE = UART4_CR3_EIE_Values<UART4::CR3, 0, 1, ReadWriteMode, UART4CR3Base> ;
    using FieldValues = UART4_CR3_EIE_Values<UART4::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40004C08, 32, ReadWriteMode, UART4CR3Base, T...> ;

  struct UART4BRRBase {} ;

  struct BRR : public RegisterBase<0x40004C0C, 32, ReadWriteMode>
  {
    using DIV_Mantissa = UART4_BRR_DIV_Mantissa_Values<UART4::BRR, 4, 12, ReadWriteMode, UART4BRRBase> ;
    using DIV_Fraction = UART4_BRR_DIV_Fraction_Values<UART4::BRR, 0, 4, ReadWriteMode, UART4BRRBase> ;
    using FieldValues = UART4_BRR_DIV_Fraction_Values<UART4::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40004C0C, 32, ReadWriteMode, UART4BRRBase, T...> ;

  struct UART4GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40004C10, 32, ReadWriteMode>
  {
    using GT = UART4_GTPR_GT_Values<UART4::GTPR, 8, 8, ReadWriteMode, UART4GTPRBase> ;
    using PSC = UART4_GTPR_PSC_Values<UART4::GTPR, 0, 8, ReadWriteMode, UART4GTPRBase> ;
    using FieldValues = UART4_GTPR_PSC_Values<UART4::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40004C10, 32, ReadWriteMode, UART4GTPRBase, T...> ;

  struct UART4RTORBase {} ;

  struct RTOR : public RegisterBase<0x40004C14, 32, ReadWriteMode>
  {
    using BLEN = UART4_RTOR_BLEN_Values<UART4::RTOR, 24, 8, ReadWriteMode, UART4RTORBase> ;
    using RTO = UART4_RTOR_RTO_Values<UART4::RTOR, 0, 24, ReadWriteMode, UART4RTORBase> ;
    using FieldValues = UART4_RTOR_RTO_Values<UART4::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40004C14, 32, ReadWriteMode, UART4RTORBase, T...> ;

  struct UART4RQRBase {} ;

  struct RQR : public RegisterBase<0x40004C18, 32, ReadWriteMode>
  {
    using TXFRQ = UART4_RQR_TXFRQ_Values<UART4::RQR, 4, 1, ReadWriteMode, UART4RQRBase> ;
    using RXFRQ = UART4_RQR_RXFRQ_Values<UART4::RQR, 3, 1, ReadWriteMode, UART4RQRBase> ;
    using MMRQ = UART4_RQR_MMRQ_Values<UART4::RQR, 2, 1, ReadWriteMode, UART4RQRBase> ;
    using SBKRQ = UART4_RQR_SBKRQ_Values<UART4::RQR, 1, 1, ReadWriteMode, UART4RQRBase> ;
    using ABRRQ = UART4_RQR_ABRRQ_Values<UART4::RQR, 0, 1, ReadWriteMode, UART4RQRBase> ;
    using FieldValues = UART4_RQR_ABRRQ_Values<UART4::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40004C18, 32, ReadWriteMode, UART4RQRBase, T...> ;

  struct UART4ISRBase {} ;

  struct ISR : public RegisterBase<0x40004C1C, 32, ReadMode>
  {
    using REACK = UART4_ISR_REACK_Values<UART4::ISR, 22, 1, ReadMode, UART4ISRBase> ;
    using TEACK = UART4_ISR_TEACK_Values<UART4::ISR, 21, 1, ReadMode, UART4ISRBase> ;
    using WUF = UART4_ISR_WUF_Values<UART4::ISR, 20, 1, ReadMode, UART4ISRBase> ;
    using RWU = UART4_ISR_RWU_Values<UART4::ISR, 19, 1, ReadMode, UART4ISRBase> ;
    using SBKF = UART4_ISR_SBKF_Values<UART4::ISR, 18, 1, ReadMode, UART4ISRBase> ;
    using CMF = UART4_ISR_CMF_Values<UART4::ISR, 17, 1, ReadMode, UART4ISRBase> ;
    using BUSY = UART4_ISR_BUSY_Values<UART4::ISR, 16, 1, ReadMode, UART4ISRBase> ;
    using ABRF = UART4_ISR_ABRF_Values<UART4::ISR, 15, 1, ReadMode, UART4ISRBase> ;
    using ABRE = UART4_ISR_ABRE_Values<UART4::ISR, 14, 1, ReadMode, UART4ISRBase> ;
    using EOBF = UART4_ISR_EOBF_Values<UART4::ISR, 12, 1, ReadMode, UART4ISRBase> ;
    using RTOF = UART4_ISR_RTOF_Values<UART4::ISR, 11, 1, ReadMode, UART4ISRBase> ;
    using CTS = UART4_ISR_CTS_Values<UART4::ISR, 10, 1, ReadMode, UART4ISRBase> ;
    using CTSIF = UART4_ISR_CTSIF_Values<UART4::ISR, 9, 1, ReadMode, UART4ISRBase> ;
    using LBDF = UART4_ISR_LBDF_Values<UART4::ISR, 8, 1, ReadMode, UART4ISRBase> ;
    using TXE = UART4_ISR_TXE_Values<UART4::ISR, 7, 1, ReadMode, UART4ISRBase> ;
    using TC = UART4_ISR_TC_Values<UART4::ISR, 6, 1, ReadMode, UART4ISRBase> ;
    using RXNE = UART4_ISR_RXNE_Values<UART4::ISR, 5, 1, ReadMode, UART4ISRBase> ;
    using IDLE = UART4_ISR_IDLE_Values<UART4::ISR, 4, 1, ReadMode, UART4ISRBase> ;
    using ORE = UART4_ISR_ORE_Values<UART4::ISR, 3, 1, ReadMode, UART4ISRBase> ;
    using NF = UART4_ISR_NF_Values<UART4::ISR, 2, 1, ReadMode, UART4ISRBase> ;
    using FE = UART4_ISR_FE_Values<UART4::ISR, 1, 1, ReadMode, UART4ISRBase> ;
    using PE = UART4_ISR_PE_Values<UART4::ISR, 0, 1, ReadMode, UART4ISRBase> ;
    using FieldValues = UART4_ISR_PE_Values<UART4::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40004C1C, 32, ReadMode, UART4ISRBase, T...> ;

  struct UART4ICRBase {} ;

  struct ICR : public RegisterBase<0x40004C20, 32, ReadWriteMode>
  {
    using WUCF = UART4_ICR_WUCF_Values<UART4::ICR, 20, 1, ReadWriteMode, UART4ICRBase> ;
    using CMCF = UART4_ICR_CMCF_Values<UART4::ICR, 17, 1, ReadWriteMode, UART4ICRBase> ;
    using EOBCF = UART4_ICR_EOBCF_Values<UART4::ICR, 12, 1, ReadWriteMode, UART4ICRBase> ;
    using RTOCF = UART4_ICR_RTOCF_Values<UART4::ICR, 11, 1, ReadWriteMode, UART4ICRBase> ;
    using CTSCF = UART4_ICR_CTSCF_Values<UART4::ICR, 9, 1, ReadWriteMode, UART4ICRBase> ;
    using LBDCF = UART4_ICR_LBDCF_Values<UART4::ICR, 8, 1, ReadWriteMode, UART4ICRBase> ;
    using TCCF = UART4_ICR_TCCF_Values<UART4::ICR, 6, 1, ReadWriteMode, UART4ICRBase> ;
    using IDLECF = UART4_ICR_IDLECF_Values<UART4::ICR, 4, 1, ReadWriteMode, UART4ICRBase> ;
    using ORECF = UART4_ICR_ORECF_Values<UART4::ICR, 3, 1, ReadWriteMode, UART4ICRBase> ;
    using NCF = UART4_ICR_NCF_Values<UART4::ICR, 2, 1, ReadWriteMode, UART4ICRBase> ;
    using FECF = UART4_ICR_FECF_Values<UART4::ICR, 1, 1, ReadWriteMode, UART4ICRBase> ;
    using PECF = UART4_ICR_PECF_Values<UART4::ICR, 0, 1, ReadWriteMode, UART4ICRBase> ;
    using FieldValues = UART4_ICR_PECF_Values<UART4::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40004C20, 32, ReadWriteMode, UART4ICRBase, T...> ;

  struct UART4RDRBase {} ;

  struct RDR : public RegisterBase<0x40004C24, 32, ReadMode>
  {
    using RDRField = UART4_RDR_RDR_Values<UART4::RDR, 0, 9, ReadMode, UART4RDRBase> ;
    using FieldValues = UART4_RDR_RDR_Values<UART4::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40004C24, 32, ReadMode, UART4RDRBase, T...> ;

  struct UART4TDRBase {} ;

  struct TDR : public RegisterBase<0x40004C28, 32, ReadWriteMode>
  {
    using TDRField = UART4_TDR_TDR_Values<UART4::TDR, 0, 9, ReadWriteMode, UART4TDRBase> ;
    using FieldValues = UART4_TDR_TDR_Values<UART4::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40004C28, 32, ReadWriteMode, UART4TDRBase, T...> ;

} ;

#endif //#if !defined(UART4REGISTERS_HPP)
