/*******************************************************************************
* Filename      : lpuart1registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(LPUART1REGISTERS_HPP)
#define LPUART1REGISTERS_HPP

#include "lpuart1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPUART1
{
  struct LPUART1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40008000, 32, ReadWriteMode>
  {
    using M1 = LPUART1_CR1_M1_Values<LPUART1::CR1, 28, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEAT4 = LPUART1_CR1_DEAT4_Values<LPUART1::CR1, 25, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEAT3 = LPUART1_CR1_DEAT3_Values<LPUART1::CR1, 24, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEAT2 = LPUART1_CR1_DEAT2_Values<LPUART1::CR1, 23, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEAT1 = LPUART1_CR1_DEAT1_Values<LPUART1::CR1, 22, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEAT0 = LPUART1_CR1_DEAT0_Values<LPUART1::CR1, 21, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEDT4 = LPUART1_CR1_DEDT4_Values<LPUART1::CR1, 20, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEDT3 = LPUART1_CR1_DEDT3_Values<LPUART1::CR1, 19, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEDT2 = LPUART1_CR1_DEDT2_Values<LPUART1::CR1, 18, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEDT1 = LPUART1_CR1_DEDT1_Values<LPUART1::CR1, 17, 1, ReadWriteMode, LPUART1CR1Base> ;
    using DEDT0 = LPUART1_CR1_DEDT0_Values<LPUART1::CR1, 16, 1, ReadWriteMode, LPUART1CR1Base> ;
    using CMIE = LPUART1_CR1_CMIE_Values<LPUART1::CR1, 14, 1, ReadWriteMode, LPUART1CR1Base> ;
    using MME = LPUART1_CR1_MME_Values<LPUART1::CR1, 13, 1, ReadWriteMode, LPUART1CR1Base> ;
    using M0 = LPUART1_CR1_M0_Values<LPUART1::CR1, 12, 1, ReadWriteMode, LPUART1CR1Base> ;
    using WAKE = LPUART1_CR1_WAKE_Values<LPUART1::CR1, 11, 1, ReadWriteMode, LPUART1CR1Base> ;
    using PCE = LPUART1_CR1_PCE_Values<LPUART1::CR1, 10, 1, ReadWriteMode, LPUART1CR1Base> ;
    using PS = LPUART1_CR1_PS_Values<LPUART1::CR1, 9, 1, ReadWriteMode, LPUART1CR1Base> ;
    using PEIE = LPUART1_CR1_PEIE_Values<LPUART1::CR1, 8, 1, ReadWriteMode, LPUART1CR1Base> ;
    using TXEIE = LPUART1_CR1_TXEIE_Values<LPUART1::CR1, 7, 1, ReadWriteMode, LPUART1CR1Base> ;
    using TCIE = LPUART1_CR1_TCIE_Values<LPUART1::CR1, 6, 1, ReadWriteMode, LPUART1CR1Base> ;
    using RXNEIE = LPUART1_CR1_RXNEIE_Values<LPUART1::CR1, 5, 1, ReadWriteMode, LPUART1CR1Base> ;
    using IDLEIE = LPUART1_CR1_IDLEIE_Values<LPUART1::CR1, 4, 1, ReadWriteMode, LPUART1CR1Base> ;
    using TE = LPUART1_CR1_TE_Values<LPUART1::CR1, 3, 1, ReadWriteMode, LPUART1CR1Base> ;
    using RE = LPUART1_CR1_RE_Values<LPUART1::CR1, 2, 1, ReadWriteMode, LPUART1CR1Base> ;
    using UESM = LPUART1_CR1_UESM_Values<LPUART1::CR1, 1, 1, ReadWriteMode, LPUART1CR1Base> ;
    using UE = LPUART1_CR1_UE_Values<LPUART1::CR1, 0, 1, ReadWriteMode, LPUART1CR1Base> ;
    using FieldValues = LPUART1_CR1_UE_Values<LPUART1::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40008000, 32, ReadWriteMode, LPUART1CR1Base, T...> ;

  struct LPUART1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40008004, 32, ReadWriteMode>
  {
    using ADD4_7 = LPUART1_CR2_ADD4_7_Values<LPUART1::CR2, 28, 4, ReadWriteMode, LPUART1CR2Base> ;
    using ADD0_3 = LPUART1_CR2_ADD0_3_Values<LPUART1::CR2, 24, 4, ReadWriteMode, LPUART1CR2Base> ;
    using MSBFIRST = LPUART1_CR2_MSBFIRST_Values<LPUART1::CR2, 19, 1, ReadWriteMode, LPUART1CR2Base> ;
    using TAINV = LPUART1_CR2_TAINV_Values<LPUART1::CR2, 18, 1, ReadWriteMode, LPUART1CR2Base> ;
    using TXINV = LPUART1_CR2_TXINV_Values<LPUART1::CR2, 17, 1, ReadWriteMode, LPUART1CR2Base> ;
    using RXINV = LPUART1_CR2_RXINV_Values<LPUART1::CR2, 16, 1, ReadWriteMode, LPUART1CR2Base> ;
    using SWAP = LPUART1_CR2_SWAP_Values<LPUART1::CR2, 15, 1, ReadWriteMode, LPUART1CR2Base> ;
    using STOP = LPUART1_CR2_STOP_Values<LPUART1::CR2, 12, 2, ReadWriteMode, LPUART1CR2Base> ;
    using CLKEN = LPUART1_CR2_CLKEN_Values<LPUART1::CR2, 11, 1, ReadWriteMode, LPUART1CR2Base> ;
    using ADDM7 = LPUART1_CR2_ADDM7_Values<LPUART1::CR2, 4, 1, ReadWriteMode, LPUART1CR2Base> ;
    using FieldValues = LPUART1_CR2_ADDM7_Values<LPUART1::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40008004, 32, ReadWriteMode, LPUART1CR2Base, T...> ;

  struct LPUART1CR3Base {} ;

  struct CR3 : public RegisterBase<0x40008008, 32, ReadWriteMode>
  {
    using WUFIE = LPUART1_CR3_WUFIE_Values<LPUART1::CR3, 22, 1, ReadWriteMode, LPUART1CR3Base> ;
    using WUS = LPUART1_CR3_WUS_Values<LPUART1::CR3, 20, 2, ReadWriteMode, LPUART1CR3Base> ;
    using DEP = LPUART1_CR3_DEP_Values<LPUART1::CR3, 15, 1, ReadWriteMode, LPUART1CR3Base> ;
    using DEM = LPUART1_CR3_DEM_Values<LPUART1::CR3, 14, 1, ReadWriteMode, LPUART1CR3Base> ;
    using DDRE = LPUART1_CR3_DDRE_Values<LPUART1::CR3, 13, 1, ReadWriteMode, LPUART1CR3Base> ;
    using OVRDIS = LPUART1_CR3_OVRDIS_Values<LPUART1::CR3, 12, 1, ReadWriteMode, LPUART1CR3Base> ;
    using CTSIE = LPUART1_CR3_CTSIE_Values<LPUART1::CR3, 10, 1, ReadWriteMode, LPUART1CR3Base> ;
    using CTSE = LPUART1_CR3_CTSE_Values<LPUART1::CR3, 9, 1, ReadWriteMode, LPUART1CR3Base> ;
    using RTSE = LPUART1_CR3_RTSE_Values<LPUART1::CR3, 8, 1, ReadWriteMode, LPUART1CR3Base> ;
    using DMAT = LPUART1_CR3_DMAT_Values<LPUART1::CR3, 7, 1, ReadWriteMode, LPUART1CR3Base> ;
    using DMAR = LPUART1_CR3_DMAR_Values<LPUART1::CR3, 6, 1, ReadWriteMode, LPUART1CR3Base> ;
    using HDSEL = LPUART1_CR3_HDSEL_Values<LPUART1::CR3, 3, 1, ReadWriteMode, LPUART1CR3Base> ;
    using EIE = LPUART1_CR3_EIE_Values<LPUART1::CR3, 0, 1, ReadWriteMode, LPUART1CR3Base> ;
    using FieldValues = LPUART1_CR3_EIE_Values<LPUART1::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40008008, 32, ReadWriteMode, LPUART1CR3Base, T...> ;

  struct LPUART1BRRBase {} ;

  struct BRR : public RegisterBase<0x4000800C, 32, ReadWriteMode>
  {
    using BRRField = LPUART1_BRR_BRR_Values<LPUART1::BRR, 0, 20, ReadWriteMode, LPUART1BRRBase> ;
    using FieldValues = LPUART1_BRR_BRR_Values<LPUART1::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4000800C, 32, ReadWriteMode, LPUART1BRRBase, T...> ;

  struct LPUART1RQRBase {} ;

  struct RQR : public RegisterBase<0x40008018, 32, WriteMode>
  {
    using RXFRQ = LPUART1_RQR_RXFRQ_Values<LPUART1::RQR, 3, 1, WriteMode, LPUART1RQRBase> ;
    using MMRQ = LPUART1_RQR_MMRQ_Values<LPUART1::RQR, 2, 1, WriteMode, LPUART1RQRBase> ;
    using SBKRQ = LPUART1_RQR_SBKRQ_Values<LPUART1::RQR, 1, 1, WriteMode, LPUART1RQRBase> ;
    using FieldValues = LPUART1_RQR_SBKRQ_Values<LPUART1::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40008018, 32, WriteMode, LPUART1RQRBase, T...> ;

  struct LPUART1ISRBase {} ;

  struct ISR : public RegisterBase<0x4000801C, 32, ReadMode>
  {
    using REACK = LPUART1_ISR_REACK_Values<LPUART1::ISR, 22, 1, ReadMode, LPUART1ISRBase> ;
    using TEACK = LPUART1_ISR_TEACK_Values<LPUART1::ISR, 21, 1, ReadMode, LPUART1ISRBase> ;
    using WUF = LPUART1_ISR_WUF_Values<LPUART1::ISR, 20, 1, ReadMode, LPUART1ISRBase> ;
    using RWU = LPUART1_ISR_RWU_Values<LPUART1::ISR, 19, 1, ReadMode, LPUART1ISRBase> ;
    using SBKF = LPUART1_ISR_SBKF_Values<LPUART1::ISR, 18, 1, ReadMode, LPUART1ISRBase> ;
    using CMF = LPUART1_ISR_CMF_Values<LPUART1::ISR, 17, 1, ReadMode, LPUART1ISRBase> ;
    using BUSY = LPUART1_ISR_BUSY_Values<LPUART1::ISR, 16, 1, ReadMode, LPUART1ISRBase> ;
    using CTS = LPUART1_ISR_CTS_Values<LPUART1::ISR, 10, 1, ReadMode, LPUART1ISRBase> ;
    using CTSIF = LPUART1_ISR_CTSIF_Values<LPUART1::ISR, 9, 1, ReadMode, LPUART1ISRBase> ;
    using TXE = LPUART1_ISR_TXE_Values<LPUART1::ISR, 7, 1, ReadMode, LPUART1ISRBase> ;
    using TC = LPUART1_ISR_TC_Values<LPUART1::ISR, 6, 1, ReadMode, LPUART1ISRBase> ;
    using RXNE = LPUART1_ISR_RXNE_Values<LPUART1::ISR, 5, 1, ReadMode, LPUART1ISRBase> ;
    using IDLE = LPUART1_ISR_IDLE_Values<LPUART1::ISR, 4, 1, ReadMode, LPUART1ISRBase> ;
    using ORE = LPUART1_ISR_ORE_Values<LPUART1::ISR, 3, 1, ReadMode, LPUART1ISRBase> ;
    using NF = LPUART1_ISR_NF_Values<LPUART1::ISR, 2, 1, ReadMode, LPUART1ISRBase> ;
    using FE = LPUART1_ISR_FE_Values<LPUART1::ISR, 1, 1, ReadMode, LPUART1ISRBase> ;
    using PE = LPUART1_ISR_PE_Values<LPUART1::ISR, 0, 1, ReadMode, LPUART1ISRBase> ;
    using FieldValues = LPUART1_ISR_PE_Values<LPUART1::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000801C, 32, ReadMode, LPUART1ISRBase, T...> ;

  struct LPUART1ICRBase {} ;

  struct ICR : public RegisterBase<0x40008020, 32, WriteMode>
  {
    using WUCF = LPUART1_ICR_WUCF_Values<LPUART1::ICR, 20, 1, WriteMode, LPUART1ICRBase> ;
    using CMCF = LPUART1_ICR_CMCF_Values<LPUART1::ICR, 17, 1, WriteMode, LPUART1ICRBase> ;
    using CTSCF = LPUART1_ICR_CTSCF_Values<LPUART1::ICR, 9, 1, WriteMode, LPUART1ICRBase> ;
    using TCCF = LPUART1_ICR_TCCF_Values<LPUART1::ICR, 6, 1, WriteMode, LPUART1ICRBase> ;
    using IDLECF = LPUART1_ICR_IDLECF_Values<LPUART1::ICR, 4, 1, WriteMode, LPUART1ICRBase> ;
    using ORECF = LPUART1_ICR_ORECF_Values<LPUART1::ICR, 3, 1, WriteMode, LPUART1ICRBase> ;
    using NCF = LPUART1_ICR_NCF_Values<LPUART1::ICR, 2, 1, WriteMode, LPUART1ICRBase> ;
    using FECF = LPUART1_ICR_FECF_Values<LPUART1::ICR, 1, 1, WriteMode, LPUART1ICRBase> ;
    using PECF = LPUART1_ICR_PECF_Values<LPUART1::ICR, 0, 1, WriteMode, LPUART1ICRBase> ;
    using FieldValues = LPUART1_ICR_PECF_Values<LPUART1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40008020, 32, WriteMode, LPUART1ICRBase, T...> ;

  struct LPUART1RDRBase {} ;

  struct RDR : public RegisterBase<0x40008024, 32, ReadMode>
  {
    using RDRField = LPUART1_RDR_RDR_Values<LPUART1::RDR, 0, 9, ReadMode, LPUART1RDRBase> ;
    using FieldValues = LPUART1_RDR_RDR_Values<LPUART1::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40008024, 32, ReadMode, LPUART1RDRBase, T...> ;

  struct LPUART1TDRBase {} ;

  struct TDR : public RegisterBase<0x40008028, 32, ReadWriteMode>
  {
    using TDRField = LPUART1_TDR_TDR_Values<LPUART1::TDR, 0, 9, ReadWriteMode, LPUART1TDRBase> ;
    using FieldValues = LPUART1_TDR_TDR_Values<LPUART1::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40008028, 32, ReadWriteMode, LPUART1TDRBase, T...> ;

} ;

#endif //#if !defined(LPUART1REGISTERS_HPP)
