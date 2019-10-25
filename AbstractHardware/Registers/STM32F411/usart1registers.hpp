/*******************************************************************************
* Filename      : usart1registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(USART1REGISTERS_HPP)
#define USART1REGISTERS_HPP

#include "usart1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART1
{
  struct USART1SRBase {} ;

  struct SR : public RegisterBase<0x40011000, 32, ReadWriteMode>
  {
    using CTS = USART1_SR_CTS_Values<USART1::SR, 9, 1, ReadWriteMode, USART1SRBase> ;
    using LBD = USART1_SR_LBD_Values<USART1::SR, 8, 1, ReadWriteMode, USART1SRBase> ;
    using TXE = USART1_SR_TXE_Values<USART1::SR, 7, 1, ReadMode, USART1SRBase> ;
    using TC = USART1_SR_TC_Values<USART1::SR, 6, 1, ReadWriteMode, USART1SRBase> ;
    using RXNE = USART1_SR_RXNE_Values<USART1::SR, 5, 1, ReadWriteMode, USART1SRBase> ;
    using IDLE = USART1_SR_IDLE_Values<USART1::SR, 4, 1, ReadMode, USART1SRBase> ;
    using ORE = USART1_SR_ORE_Values<USART1::SR, 3, 1, ReadMode, USART1SRBase> ;
    using NF = USART1_SR_NF_Values<USART1::SR, 2, 1, ReadMode, USART1SRBase> ;
    using FE = USART1_SR_FE_Values<USART1::SR, 1, 1, ReadMode, USART1SRBase> ;
    using PE = USART1_SR_PE_Values<USART1::SR, 0, 1, ReadMode, USART1SRBase> ;
    using FieldValues = USART1_SR_PE_Values<USART1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40011000, 32, ReadWriteMode, USART1SRBase, T...> ;

  struct USART1DRBase {} ;

  struct DR : public RegisterBase<0x40011004, 32, ReadWriteMode>
  {
    using DRField = USART1_DR_DR_Values<USART1::DR, 0, 9, ReadWriteMode, USART1DRBase> ;
    using FieldValues = USART1_DR_DR_Values<USART1::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40011004, 32, ReadWriteMode, USART1DRBase, T...> ;

  struct USART1BRRBase {} ;

  struct BRR : public RegisterBase<0x40011008, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART1_BRR_DIV_Mantissa_Values<USART1::BRR, 4, 12, ReadWriteMode, USART1BRRBase> ;
    using DIV_Fraction = USART1_BRR_DIV_Fraction_Values<USART1::BRR, 0, 4, ReadWriteMode, USART1BRRBase> ;
    using FieldValues = USART1_BRR_DIV_Fraction_Values<USART1::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011008, 32, ReadWriteMode, USART1BRRBase, T...> ;

  struct USART1CR1Base {} ;

  struct CR1 : public RegisterBase<0x4001100C, 32, ReadWriteMode>
  {
    using OVER8 = USART1_CR1_OVER8_Values<USART1::CR1, 15, 1, ReadWriteMode, USART1CR1Base> ;
    using UE = USART1_CR1_UE_Values<USART1::CR1, 13, 1, ReadWriteMode, USART1CR1Base> ;
    using M = USART1_CR1_M_Values<USART1::CR1, 12, 1, ReadWriteMode, USART1CR1Base> ;
    using WAKE = USART1_CR1_WAKE_Values<USART1::CR1, 11, 1, ReadWriteMode, USART1CR1Base> ;
    using PCE = USART1_CR1_PCE_Values<USART1::CR1, 10, 1, ReadWriteMode, USART1CR1Base> ;
    using PS = USART1_CR1_PS_Values<USART1::CR1, 9, 1, ReadWriteMode, USART1CR1Base> ;
    using PEIE = USART1_CR1_PEIE_Values<USART1::CR1, 8, 1, ReadWriteMode, USART1CR1Base> ;
    using TXEIE = USART1_CR1_TXEIE_Values<USART1::CR1, 7, 1, ReadWriteMode, USART1CR1Base> ;
    using TCIE = USART1_CR1_TCIE_Values<USART1::CR1, 6, 1, ReadWriteMode, USART1CR1Base> ;
    using RXNEIE = USART1_CR1_RXNEIE_Values<USART1::CR1, 5, 1, ReadWriteMode, USART1CR1Base> ;
    using IDLEIE = USART1_CR1_IDLEIE_Values<USART1::CR1, 4, 1, ReadWriteMode, USART1CR1Base> ;
    using TE = USART1_CR1_TE_Values<USART1::CR1, 3, 1, ReadWriteMode, USART1CR1Base> ;
    using RE = USART1_CR1_RE_Values<USART1::CR1, 2, 1, ReadWriteMode, USART1CR1Base> ;
    using RWU = USART1_CR1_RWU_Values<USART1::CR1, 1, 1, ReadWriteMode, USART1CR1Base> ;
    using SBK = USART1_CR1_SBK_Values<USART1::CR1, 0, 1, ReadWriteMode, USART1CR1Base> ;
    using FieldValues = USART1_CR1_SBK_Values<USART1::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x4001100C, 32, ReadWriteMode, USART1CR1Base, T...> ;

  struct USART1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40011010, 32, ReadWriteMode>
  {
    using LINEN = USART1_CR2_LINEN_Values<USART1::CR2, 14, 1, ReadWriteMode, USART1CR2Base> ;
    using STOP = USART1_CR2_STOP_Values<USART1::CR2, 12, 2, ReadWriteMode, USART1CR2Base> ;
    using CLKEN = USART1_CR2_CLKEN_Values<USART1::CR2, 11, 1, ReadWriteMode, USART1CR2Base> ;
    using CPOL = USART1_CR2_CPOL_Values<USART1::CR2, 10, 1, ReadWriteMode, USART1CR2Base> ;
    using CPHA = USART1_CR2_CPHA_Values<USART1::CR2, 9, 1, ReadWriteMode, USART1CR2Base> ;
    using LBCL = USART1_CR2_LBCL_Values<USART1::CR2, 8, 1, ReadWriteMode, USART1CR2Base> ;
    using LBDIE = USART1_CR2_LBDIE_Values<USART1::CR2, 6, 1, ReadWriteMode, USART1CR2Base> ;
    using LBDL = USART1_CR2_LBDL_Values<USART1::CR2, 5, 1, ReadWriteMode, USART1CR2Base> ;
    using ADD = USART1_CR2_ADD_Values<USART1::CR2, 0, 4, ReadWriteMode, USART1CR2Base> ;
    using FieldValues = USART1_CR2_ADD_Values<USART1::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40011010, 32, ReadWriteMode, USART1CR2Base, T...> ;

  struct USART1CR3Base {} ;

  struct CR3 : public RegisterBase<0x40011014, 32, ReadWriteMode>
  {
    using ONEBIT = USART1_CR3_ONEBIT_Values<USART1::CR3, 11, 1, ReadWriteMode, USART1CR3Base> ;
    using CTSIE = USART1_CR3_CTSIE_Values<USART1::CR3, 10, 1, ReadWriteMode, USART1CR3Base> ;
    using CTSE = USART1_CR3_CTSE_Values<USART1::CR3, 9, 1, ReadWriteMode, USART1CR3Base> ;
    using RTSE = USART1_CR3_RTSE_Values<USART1::CR3, 8, 1, ReadWriteMode, USART1CR3Base> ;
    using DMAT = USART1_CR3_DMAT_Values<USART1::CR3, 7, 1, ReadWriteMode, USART1CR3Base> ;
    using DMAR = USART1_CR3_DMAR_Values<USART1::CR3, 6, 1, ReadWriteMode, USART1CR3Base> ;
    using SCEN = USART1_CR3_SCEN_Values<USART1::CR3, 5, 1, ReadWriteMode, USART1CR3Base> ;
    using NACK = USART1_CR3_NACK_Values<USART1::CR3, 4, 1, ReadWriteMode, USART1CR3Base> ;
    using HDSEL = USART1_CR3_HDSEL_Values<USART1::CR3, 3, 1, ReadWriteMode, USART1CR3Base> ;
    using IRLP = USART1_CR3_IRLP_Values<USART1::CR3, 2, 1, ReadWriteMode, USART1CR3Base> ;
    using IREN = USART1_CR3_IREN_Values<USART1::CR3, 1, 1, ReadWriteMode, USART1CR3Base> ;
    using EIE = USART1_CR3_EIE_Values<USART1::CR3, 0, 1, ReadWriteMode, USART1CR3Base> ;
    using FieldValues = USART1_CR3_EIE_Values<USART1::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40011014, 32, ReadWriteMode, USART1CR3Base, T...> ;

  struct USART1GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40011018, 32, ReadWriteMode>
  {
    using GT = USART1_GTPR_GT_Values<USART1::GTPR, 8, 8, ReadWriteMode, USART1GTPRBase> ;
    using PSC = USART1_GTPR_PSC_Values<USART1::GTPR, 0, 8, ReadWriteMode, USART1GTPRBase> ;
    using FieldValues = USART1_GTPR_PSC_Values<USART1::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40011018, 32, ReadWriteMode, USART1GTPRBase, T...> ;

} ;

#endif //#if !defined(USART1REGISTERS_HPP)
