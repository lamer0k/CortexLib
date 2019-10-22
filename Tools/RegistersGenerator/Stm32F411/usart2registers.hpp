/*******************************************************************************
* Filename      : usart2registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(USART2REGISTERS_HPP)
#define USART2REGISTERS_HPP

#include "usart2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART2
{
  struct USART2SRBase {} ;

  struct SR : public RegisterBase<0x40004400, 32, ReadWriteMode>
  {
    using CTS = USART2_SR_CTS_Values<USART2::SR, 9, 1, ReadWriteMode, USART2SRBase> ;
    using LBD = USART2_SR_LBD_Values<USART2::SR, 8, 1, ReadWriteMode, USART2SRBase> ;
    using TXE = USART2_SR_TXE_Values<USART2::SR, 7, 1, ReadMode, USART2SRBase> ;
    using TC = USART2_SR_TC_Values<USART2::SR, 6, 1, ReadWriteMode, USART2SRBase> ;
    using RXNE = USART2_SR_RXNE_Values<USART2::SR, 5, 1, ReadWriteMode, USART2SRBase> ;
    using IDLE = USART2_SR_IDLE_Values<USART2::SR, 4, 1, ReadMode, USART2SRBase> ;
    using ORE = USART2_SR_ORE_Values<USART2::SR, 3, 1, ReadMode, USART2SRBase> ;
    using NF = USART2_SR_NF_Values<USART2::SR, 2, 1, ReadMode, USART2SRBase> ;
    using FE = USART2_SR_FE_Values<USART2::SR, 1, 1, ReadMode, USART2SRBase> ;
    using PE = USART2_SR_PE_Values<USART2::SR, 0, 1, ReadMode, USART2SRBase> ;
    using FieldValues = USART2_SR_PE_Values<USART2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40004400, 32, ReadWriteMode, USART2SRBase, T...> ;

  struct USART2DRBase {} ;

  struct DR : public RegisterBase<0x40004404, 32, ReadWriteMode>
  {
    using DRField = USART2_DR_DR_Values<USART2::DR, 0, 9, ReadWriteMode, USART2DRBase> ;
    using FieldValues = USART2_DR_DR_Values<USART2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40004404, 32, ReadWriteMode, USART2DRBase, T...> ;

  struct USART2BRRBase {} ;

  struct BRR : public RegisterBase<0x40004408, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART2_BRR_DIV_Mantissa_Values<USART2::BRR, 4, 12, ReadWriteMode, USART2BRRBase> ;
    using DIV_Fraction = USART2_BRR_DIV_Fraction_Values<USART2::BRR, 0, 4, ReadWriteMode, USART2BRRBase> ;
    using FieldValues = USART2_BRR_DIV_Fraction_Values<USART2::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40004408, 32, ReadWriteMode, USART2BRRBase, T...> ;

  struct USART2CR1Base {} ;

  struct CR1 : public RegisterBase<0x4000440C, 32, ReadWriteMode>
  {
    using OVER8 = USART2_CR1_OVER8_Values<USART2::CR1, 15, 1, ReadWriteMode, USART2CR1Base> ;
    using UE = USART2_CR1_UE_Values<USART2::CR1, 13, 1, ReadWriteMode, USART2CR1Base> ;
    using M = USART2_CR1_M_Values<USART2::CR1, 12, 1, ReadWriteMode, USART2CR1Base> ;
    using WAKE = USART2_CR1_WAKE_Values<USART2::CR1, 11, 1, ReadWriteMode, USART2CR1Base> ;
    using PCE = USART2_CR1_PCE_Values<USART2::CR1, 10, 1, ReadWriteMode, USART2CR1Base> ;
    using PS = USART2_CR1_PS_Values<USART2::CR1, 9, 1, ReadWriteMode, USART2CR1Base> ;
    using PEIE = USART2_CR1_PEIE_Values<USART2::CR1, 8, 1, ReadWriteMode, USART2CR1Base> ;
    using TXEIE = USART2_CR1_TXEIE_Values<USART2::CR1, 7, 1, ReadWriteMode, USART2CR1Base> ;
    using TCIE = USART2_CR1_TCIE_Values<USART2::CR1, 6, 1, ReadWriteMode, USART2CR1Base> ;
    using RXNEIE = USART2_CR1_RXNEIE_Values<USART2::CR1, 5, 1, ReadWriteMode, USART2CR1Base> ;
    using IDLEIE = USART2_CR1_IDLEIE_Values<USART2::CR1, 4, 1, ReadWriteMode, USART2CR1Base> ;
    using TE = USART2_CR1_TE_Values<USART2::CR1, 3, 1, ReadWriteMode, USART2CR1Base> ;
    using RE = USART2_CR1_RE_Values<USART2::CR1, 2, 1, ReadWriteMode, USART2CR1Base> ;
    using RWU = USART2_CR1_RWU_Values<USART2::CR1, 1, 1, ReadWriteMode, USART2CR1Base> ;
    using SBK = USART2_CR1_SBK_Values<USART2::CR1, 0, 1, ReadWriteMode, USART2CR1Base> ;
    using FieldValues = USART2_CR1_SBK_Values<USART2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x4000440C, 32, ReadWriteMode, USART2CR1Base, T...> ;

  struct USART2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40004410, 32, ReadWriteMode>
  {
    using LINEN = USART2_CR2_LINEN_Values<USART2::CR2, 14, 1, ReadWriteMode, USART2CR2Base> ;
    using STOP = USART2_CR2_STOP_Values<USART2::CR2, 12, 2, ReadWriteMode, USART2CR2Base> ;
    using CLKEN = USART2_CR2_CLKEN_Values<USART2::CR2, 11, 1, ReadWriteMode, USART2CR2Base> ;
    using CPOL = USART2_CR2_CPOL_Values<USART2::CR2, 10, 1, ReadWriteMode, USART2CR2Base> ;
    using CPHA = USART2_CR2_CPHA_Values<USART2::CR2, 9, 1, ReadWriteMode, USART2CR2Base> ;
    using LBCL = USART2_CR2_LBCL_Values<USART2::CR2, 8, 1, ReadWriteMode, USART2CR2Base> ;
    using LBDIE = USART2_CR2_LBDIE_Values<USART2::CR2, 6, 1, ReadWriteMode, USART2CR2Base> ;
    using LBDL = USART2_CR2_LBDL_Values<USART2::CR2, 5, 1, ReadWriteMode, USART2CR2Base> ;
    using ADD = USART2_CR2_ADD_Values<USART2::CR2, 0, 4, ReadWriteMode, USART2CR2Base> ;
    using FieldValues = USART2_CR2_ADD_Values<USART2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004410, 32, ReadWriteMode, USART2CR2Base, T...> ;

  struct USART2CR3Base {} ;

  struct CR3 : public RegisterBase<0x40004414, 32, ReadWriteMode>
  {
    using ONEBIT = USART2_CR3_ONEBIT_Values<USART2::CR3, 11, 1, ReadWriteMode, USART2CR3Base> ;
    using CTSIE = USART2_CR3_CTSIE_Values<USART2::CR3, 10, 1, ReadWriteMode, USART2CR3Base> ;
    using CTSE = USART2_CR3_CTSE_Values<USART2::CR3, 9, 1, ReadWriteMode, USART2CR3Base> ;
    using RTSE = USART2_CR3_RTSE_Values<USART2::CR3, 8, 1, ReadWriteMode, USART2CR3Base> ;
    using DMAT = USART2_CR3_DMAT_Values<USART2::CR3, 7, 1, ReadWriteMode, USART2CR3Base> ;
    using DMAR = USART2_CR3_DMAR_Values<USART2::CR3, 6, 1, ReadWriteMode, USART2CR3Base> ;
    using SCEN = USART2_CR3_SCEN_Values<USART2::CR3, 5, 1, ReadWriteMode, USART2CR3Base> ;
    using NACK = USART2_CR3_NACK_Values<USART2::CR3, 4, 1, ReadWriteMode, USART2CR3Base> ;
    using HDSEL = USART2_CR3_HDSEL_Values<USART2::CR3, 3, 1, ReadWriteMode, USART2CR3Base> ;
    using IRLP = USART2_CR3_IRLP_Values<USART2::CR3, 2, 1, ReadWriteMode, USART2CR3Base> ;
    using IREN = USART2_CR3_IREN_Values<USART2::CR3, 1, 1, ReadWriteMode, USART2CR3Base> ;
    using EIE = USART2_CR3_EIE_Values<USART2::CR3, 0, 1, ReadWriteMode, USART2CR3Base> ;
    using FieldValues = USART2_CR3_EIE_Values<USART2::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40004414, 32, ReadWriteMode, USART2CR3Base, T...> ;

  struct USART2GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40004418, 32, ReadWriteMode>
  {
    using GT = USART2_GTPR_GT_Values<USART2::GTPR, 8, 8, ReadWriteMode, USART2GTPRBase> ;
    using PSC = USART2_GTPR_PSC_Values<USART2::GTPR, 0, 8, ReadWriteMode, USART2GTPRBase> ;
    using FieldValues = USART2_GTPR_PSC_Values<USART2::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40004418, 32, ReadWriteMode, USART2GTPRBase, T...> ;

} ;

#endif //#if !defined(USART2REGISTERS_HPP)
