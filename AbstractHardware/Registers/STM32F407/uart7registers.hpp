/*******************************************************************************
* Filename      : uart7registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(UART7REGISTERS_HPP)
#define UART7REGISTERS_HPP

#include "uart7fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART7
{
  struct UART7SRBase {} ;

  struct SR : public RegisterBase<0x40007800, 32, ReadWriteMode>
  {
    using LBD = UART7_SR_LBD_Values<UART7::SR, 8, 1, ReadWriteMode, UART7SRBase> ;
    using TXE = UART7_SR_TXE_Values<UART7::SR, 7, 1, ReadMode, UART7SRBase> ;
    using TC = UART7_SR_TC_Values<UART7::SR, 6, 1, ReadWriteMode, UART7SRBase> ;
    using RXNE = UART7_SR_RXNE_Values<UART7::SR, 5, 1, ReadWriteMode, UART7SRBase> ;
    using IDLE = UART7_SR_IDLE_Values<UART7::SR, 4, 1, ReadMode, UART7SRBase> ;
    using ORE = UART7_SR_ORE_Values<UART7::SR, 3, 1, ReadMode, UART7SRBase> ;
    using NF = UART7_SR_NF_Values<UART7::SR, 2, 1, ReadMode, UART7SRBase> ;
    using FE = UART7_SR_FE_Values<UART7::SR, 1, 1, ReadMode, UART7SRBase> ;
    using PE = UART7_SR_PE_Values<UART7::SR, 0, 1, ReadMode, UART7SRBase> ;
    using FieldValues = UART7_SR_PE_Values<UART7::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40007800, 32, ReadWriteMode, UART7SRBase, T...> ;

  struct UART7DRBase {} ;

  struct DR : public RegisterBase<0x40007804, 32, ReadWriteMode>
  {
    using DRField = UART7_DR_DR_Values<UART7::DR, 0, 9, ReadWriteMode, UART7DRBase> ;
    using FieldValues = UART7_DR_DR_Values<UART7::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40007804, 32, ReadWriteMode, UART7DRBase, T...> ;

  struct UART7BRRBase {} ;

  struct BRR : public RegisterBase<0x40007808, 32, ReadWriteMode>
  {
    using DIV_Mantissa = UART7_BRR_DIV_Mantissa_Values<UART7::BRR, 4, 12, ReadWriteMode, UART7BRRBase> ;
    using DIV_Fraction = UART7_BRR_DIV_Fraction_Values<UART7::BRR, 0, 4, ReadWriteMode, UART7BRRBase> ;
    using FieldValues = UART7_BRR_DIV_Fraction_Values<UART7::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40007808, 32, ReadWriteMode, UART7BRRBase, T...> ;

  struct UART7CR1Base {} ;

  struct CR1 : public RegisterBase<0x4000780C, 32, ReadWriteMode>
  {
    using OVER8 = UART7_CR1_OVER8_Values<UART7::CR1, 15, 1, ReadWriteMode, UART7CR1Base> ;
    using UE = UART7_CR1_UE_Values<UART7::CR1, 13, 1, ReadWriteMode, UART7CR1Base> ;
    using M = UART7_CR1_M_Values<UART7::CR1, 12, 1, ReadWriteMode, UART7CR1Base> ;
    using WAKE = UART7_CR1_WAKE_Values<UART7::CR1, 11, 1, ReadWriteMode, UART7CR1Base> ;
    using PCE = UART7_CR1_PCE_Values<UART7::CR1, 10, 1, ReadWriteMode, UART7CR1Base> ;
    using PS = UART7_CR1_PS_Values<UART7::CR1, 9, 1, ReadWriteMode, UART7CR1Base> ;
    using PEIE = UART7_CR1_PEIE_Values<UART7::CR1, 8, 1, ReadWriteMode, UART7CR1Base> ;
    using TXEIE = UART7_CR1_TXEIE_Values<UART7::CR1, 7, 1, ReadWriteMode, UART7CR1Base> ;
    using TCIE = UART7_CR1_TCIE_Values<UART7::CR1, 6, 1, ReadWriteMode, UART7CR1Base> ;
    using RXNEIE = UART7_CR1_RXNEIE_Values<UART7::CR1, 5, 1, ReadWriteMode, UART7CR1Base> ;
    using IDLEIE = UART7_CR1_IDLEIE_Values<UART7::CR1, 4, 1, ReadWriteMode, UART7CR1Base> ;
    using TE = UART7_CR1_TE_Values<UART7::CR1, 3, 1, ReadWriteMode, UART7CR1Base> ;
    using RE = UART7_CR1_RE_Values<UART7::CR1, 2, 1, ReadWriteMode, UART7CR1Base> ;
    using RWU = UART7_CR1_RWU_Values<UART7::CR1, 1, 1, ReadWriteMode, UART7CR1Base> ;
    using SBK = UART7_CR1_SBK_Values<UART7::CR1, 0, 1, ReadWriteMode, UART7CR1Base> ;
    using FieldValues = UART7_CR1_SBK_Values<UART7::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x4000780C, 32, ReadWriteMode, UART7CR1Base, T...> ;

  struct UART7CR2Base {} ;

  struct CR2 : public RegisterBase<0x40007810, 32, ReadWriteMode>
  {
    using LINEN = UART7_CR2_LINEN_Values<UART7::CR2, 14, 1, ReadWriteMode, UART7CR2Base> ;
    using STOP = UART7_CR2_STOP_Values<UART7::CR2, 12, 2, ReadWriteMode, UART7CR2Base> ;
    using LBDIE = UART7_CR2_LBDIE_Values<UART7::CR2, 6, 1, ReadWriteMode, UART7CR2Base> ;
    using LBDL = UART7_CR2_LBDL_Values<UART7::CR2, 5, 1, ReadWriteMode, UART7CR2Base> ;
    using ADD = UART7_CR2_ADD_Values<UART7::CR2, 0, 4, ReadWriteMode, UART7CR2Base> ;
    using FieldValues = UART7_CR2_ADD_Values<UART7::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40007810, 32, ReadWriteMode, UART7CR2Base, T...> ;

  struct UART7CR3Base {} ;

  struct CR3 : public RegisterBase<0x40007814, 32, ReadWriteMode>
  {
    using ONEBIT = UART7_CR3_ONEBIT_Values<UART7::CR3, 11, 1, ReadWriteMode, UART7CR3Base> ;
    using DMAT = UART7_CR3_DMAT_Values<UART7::CR3, 7, 1, ReadWriteMode, UART7CR3Base> ;
    using DMAR = UART7_CR3_DMAR_Values<UART7::CR3, 6, 1, ReadWriteMode, UART7CR3Base> ;
    using HDSEL = UART7_CR3_HDSEL_Values<UART7::CR3, 3, 1, ReadWriteMode, UART7CR3Base> ;
    using IRLP = UART7_CR3_IRLP_Values<UART7::CR3, 2, 1, ReadWriteMode, UART7CR3Base> ;
    using IREN = UART7_CR3_IREN_Values<UART7::CR3, 1, 1, ReadWriteMode, UART7CR3Base> ;
    using EIE = UART7_CR3_EIE_Values<UART7::CR3, 0, 1, ReadWriteMode, UART7CR3Base> ;
    using FieldValues = UART7_CR3_EIE_Values<UART7::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40007814, 32, ReadWriteMode, UART7CR3Base, T...> ;

} ;

#endif //#if !defined(UART7REGISTERS_HPP)
