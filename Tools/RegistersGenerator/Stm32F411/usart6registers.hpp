/*******************************************************************************
* Filename      : usart6registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(USART6REGISTERS_HPP)
#define USART6REGISTERS_HPP

#include "usart6fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART6
{
  struct USART6SRBase {} ;

  struct SR : public RegisterBase<0x40011400, 32, ReadWriteMode>
  {
    using CTS = USART6_SR_CTS_Values<USART6::SR, 9, 1, ReadWriteMode, USART6SRBase> ;
    using LBD = USART6_SR_LBD_Values<USART6::SR, 8, 1, ReadWriteMode, USART6SRBase> ;
    using TXE = USART6_SR_TXE_Values<USART6::SR, 7, 1, ReadMode, USART6SRBase> ;
    using TC = USART6_SR_TC_Values<USART6::SR, 6, 1, ReadWriteMode, USART6SRBase> ;
    using RXNE = USART6_SR_RXNE_Values<USART6::SR, 5, 1, ReadWriteMode, USART6SRBase> ;
    using IDLE = USART6_SR_IDLE_Values<USART6::SR, 4, 1, ReadMode, USART6SRBase> ;
    using ORE = USART6_SR_ORE_Values<USART6::SR, 3, 1, ReadMode, USART6SRBase> ;
    using NF = USART6_SR_NF_Values<USART6::SR, 2, 1, ReadMode, USART6SRBase> ;
    using FE = USART6_SR_FE_Values<USART6::SR, 1, 1, ReadMode, USART6SRBase> ;
    using PE = USART6_SR_PE_Values<USART6::SR, 0, 1, ReadMode, USART6SRBase> ;
    using FieldValues = USART6_SR_PE_Values<USART6::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40011400, 32, ReadWriteMode, USART6SRBase, T...> ;

  struct USART6DRBase {} ;

  struct DR : public RegisterBase<0x40011404, 32, ReadWriteMode>
  {
    using DRField = USART6_DR_DR_Values<USART6::DR, 0, 9, ReadWriteMode, USART6DRBase> ;
    using FieldValues = USART6_DR_DR_Values<USART6::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40011404, 32, ReadWriteMode, USART6DRBase, T...> ;

  struct USART6BRRBase {} ;

  struct BRR : public RegisterBase<0x40011408, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART6_BRR_DIV_Mantissa_Values<USART6::BRR, 4, 12, ReadWriteMode, USART6BRRBase> ;
    using DIV_Fraction = USART6_BRR_DIV_Fraction_Values<USART6::BRR, 0, 4, ReadWriteMode, USART6BRRBase> ;
    using FieldValues = USART6_BRR_DIV_Fraction_Values<USART6::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011408, 32, ReadWriteMode, USART6BRRBase, T...> ;

  struct USART6CR1Base {} ;

  struct CR1 : public RegisterBase<0x4001140C, 32, ReadWriteMode>
  {
    using OVER8 = USART6_CR1_OVER8_Values<USART6::CR1, 15, 1, ReadWriteMode, USART6CR1Base> ;
    using UE = USART6_CR1_UE_Values<USART6::CR1, 13, 1, ReadWriteMode, USART6CR1Base> ;
    using M = USART6_CR1_M_Values<USART6::CR1, 12, 1, ReadWriteMode, USART6CR1Base> ;
    using WAKE = USART6_CR1_WAKE_Values<USART6::CR1, 11, 1, ReadWriteMode, USART6CR1Base> ;
    using PCE = USART6_CR1_PCE_Values<USART6::CR1, 10, 1, ReadWriteMode, USART6CR1Base> ;
    using PS = USART6_CR1_PS_Values<USART6::CR1, 9, 1, ReadWriteMode, USART6CR1Base> ;
    using PEIE = USART6_CR1_PEIE_Values<USART6::CR1, 8, 1, ReadWriteMode, USART6CR1Base> ;
    using TXEIE = USART6_CR1_TXEIE_Values<USART6::CR1, 7, 1, ReadWriteMode, USART6CR1Base> ;
    using TCIE = USART6_CR1_TCIE_Values<USART6::CR1, 6, 1, ReadWriteMode, USART6CR1Base> ;
    using RXNEIE = USART6_CR1_RXNEIE_Values<USART6::CR1, 5, 1, ReadWriteMode, USART6CR1Base> ;
    using IDLEIE = USART6_CR1_IDLEIE_Values<USART6::CR1, 4, 1, ReadWriteMode, USART6CR1Base> ;
    using TE = USART6_CR1_TE_Values<USART6::CR1, 3, 1, ReadWriteMode, USART6CR1Base> ;
    using RE = USART6_CR1_RE_Values<USART6::CR1, 2, 1, ReadWriteMode, USART6CR1Base> ;
    using RWU = USART6_CR1_RWU_Values<USART6::CR1, 1, 1, ReadWriteMode, USART6CR1Base> ;
    using SBK = USART6_CR1_SBK_Values<USART6::CR1, 0, 1, ReadWriteMode, USART6CR1Base> ;
    using FieldValues = USART6_CR1_SBK_Values<USART6::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x4001140C, 32, ReadWriteMode, USART6CR1Base, T...> ;

  struct USART6CR2Base {} ;

  struct CR2 : public RegisterBase<0x40011410, 32, ReadWriteMode>
  {
    using LINEN = USART6_CR2_LINEN_Values<USART6::CR2, 14, 1, ReadWriteMode, USART6CR2Base> ;
    using STOP = USART6_CR2_STOP_Values<USART6::CR2, 12, 2, ReadWriteMode, USART6CR2Base> ;
    using CLKEN = USART6_CR2_CLKEN_Values<USART6::CR2, 11, 1, ReadWriteMode, USART6CR2Base> ;
    using CPOL = USART6_CR2_CPOL_Values<USART6::CR2, 10, 1, ReadWriteMode, USART6CR2Base> ;
    using CPHA = USART6_CR2_CPHA_Values<USART6::CR2, 9, 1, ReadWriteMode, USART6CR2Base> ;
    using LBCL = USART6_CR2_LBCL_Values<USART6::CR2, 8, 1, ReadWriteMode, USART6CR2Base> ;
    using LBDIE = USART6_CR2_LBDIE_Values<USART6::CR2, 6, 1, ReadWriteMode, USART6CR2Base> ;
    using LBDL = USART6_CR2_LBDL_Values<USART6::CR2, 5, 1, ReadWriteMode, USART6CR2Base> ;
    using ADD = USART6_CR2_ADD_Values<USART6::CR2, 0, 4, ReadWriteMode, USART6CR2Base> ;
    using FieldValues = USART6_CR2_ADD_Values<USART6::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40011410, 32, ReadWriteMode, USART6CR2Base, T...> ;

  struct USART6CR3Base {} ;

  struct CR3 : public RegisterBase<0x40011414, 32, ReadWriteMode>
  {
    using ONEBIT = USART6_CR3_ONEBIT_Values<USART6::CR3, 11, 1, ReadWriteMode, USART6CR3Base> ;
    using CTSIE = USART6_CR3_CTSIE_Values<USART6::CR3, 10, 1, ReadWriteMode, USART6CR3Base> ;
    using CTSE = USART6_CR3_CTSE_Values<USART6::CR3, 9, 1, ReadWriteMode, USART6CR3Base> ;
    using RTSE = USART6_CR3_RTSE_Values<USART6::CR3, 8, 1, ReadWriteMode, USART6CR3Base> ;
    using DMAT = USART6_CR3_DMAT_Values<USART6::CR3, 7, 1, ReadWriteMode, USART6CR3Base> ;
    using DMAR = USART6_CR3_DMAR_Values<USART6::CR3, 6, 1, ReadWriteMode, USART6CR3Base> ;
    using SCEN = USART6_CR3_SCEN_Values<USART6::CR3, 5, 1, ReadWriteMode, USART6CR3Base> ;
    using NACK = USART6_CR3_NACK_Values<USART6::CR3, 4, 1, ReadWriteMode, USART6CR3Base> ;
    using HDSEL = USART6_CR3_HDSEL_Values<USART6::CR3, 3, 1, ReadWriteMode, USART6CR3Base> ;
    using IRLP = USART6_CR3_IRLP_Values<USART6::CR3, 2, 1, ReadWriteMode, USART6CR3Base> ;
    using IREN = USART6_CR3_IREN_Values<USART6::CR3, 1, 1, ReadWriteMode, USART6CR3Base> ;
    using EIE = USART6_CR3_EIE_Values<USART6::CR3, 0, 1, ReadWriteMode, USART6CR3Base> ;
    using FieldValues = USART6_CR3_EIE_Values<USART6::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40011414, 32, ReadWriteMode, USART6CR3Base, T...> ;

  struct USART6GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40011418, 32, ReadWriteMode>
  {
    using GT = USART6_GTPR_GT_Values<USART6::GTPR, 8, 8, ReadWriteMode, USART6GTPRBase> ;
    using PSC = USART6_GTPR_PSC_Values<USART6::GTPR, 0, 8, ReadWriteMode, USART6GTPRBase> ;
    using FieldValues = USART6_GTPR_PSC_Values<USART6::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40011418, 32, ReadWriteMode, USART6GTPRBase, T...> ;

} ;

#endif //#if !defined(USART6REGISTERS_HPP)
