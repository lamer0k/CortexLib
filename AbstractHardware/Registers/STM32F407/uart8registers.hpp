/*******************************************************************************
* Filename      : uart8registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(UART8REGISTERS_HPP)
#define UART8REGISTERS_HPP

#include "uart8fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART8
{
  struct UART8SRBase {} ;

  struct SR : public RegisterBase<0x40007C00, 32, ReadWriteMode>
  {
    using LBD = UART8_SR_LBD_Values<UART8::SR, 8, 1, ReadWriteMode, UART8SRBase> ;
    using TXE = UART8_SR_TXE_Values<UART8::SR, 7, 1, ReadMode, UART8SRBase> ;
    using TC = UART8_SR_TC_Values<UART8::SR, 6, 1, ReadWriteMode, UART8SRBase> ;
    using RXNE = UART8_SR_RXNE_Values<UART8::SR, 5, 1, ReadWriteMode, UART8SRBase> ;
    using IDLE = UART8_SR_IDLE_Values<UART8::SR, 4, 1, ReadMode, UART8SRBase> ;
    using ORE = UART8_SR_ORE_Values<UART8::SR, 3, 1, ReadMode, UART8SRBase> ;
    using NF = UART8_SR_NF_Values<UART8::SR, 2, 1, ReadMode, UART8SRBase> ;
    using FE = UART8_SR_FE_Values<UART8::SR, 1, 1, ReadMode, UART8SRBase> ;
    using PE = UART8_SR_PE_Values<UART8::SR, 0, 1, ReadMode, UART8SRBase> ;
    using FieldValues = UART8_SR_PE_Values<UART8::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40007C00, 32, ReadWriteMode, UART8SRBase, T...> ;

  struct UART8DRBase {} ;

  struct DR : public RegisterBase<0x40007C04, 32, ReadWriteMode>
  {
    using DRField = UART8_DR_DR_Values<UART8::DR, 0, 9, ReadWriteMode, UART8DRBase> ;
    using FieldValues = UART8_DR_DR_Values<UART8::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40007C04, 32, ReadWriteMode, UART8DRBase, T...> ;

  struct UART8BRRBase {} ;

  struct BRR : public RegisterBase<0x40007C08, 32, ReadWriteMode>
  {
    using DIV_Mantissa = UART8_BRR_DIV_Mantissa_Values<UART8::BRR, 4, 12, ReadWriteMode, UART8BRRBase> ;
    using DIV_Fraction = UART8_BRR_DIV_Fraction_Values<UART8::BRR, 0, 4, ReadWriteMode, UART8BRRBase> ;
    using FieldValues = UART8_BRR_DIV_Fraction_Values<UART8::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40007C08, 32, ReadWriteMode, UART8BRRBase, T...> ;

  struct UART8CR1Base {} ;

  struct CR1 : public RegisterBase<0x40007C0C, 32, ReadWriteMode>
  {
    using OVER8 = UART8_CR1_OVER8_Values<UART8::CR1, 15, 1, ReadWriteMode, UART8CR1Base> ;
    using UE = UART8_CR1_UE_Values<UART8::CR1, 13, 1, ReadWriteMode, UART8CR1Base> ;
    using M = UART8_CR1_M_Values<UART8::CR1, 12, 1, ReadWriteMode, UART8CR1Base> ;
    using WAKE = UART8_CR1_WAKE_Values<UART8::CR1, 11, 1, ReadWriteMode, UART8CR1Base> ;
    using PCE = UART8_CR1_PCE_Values<UART8::CR1, 10, 1, ReadWriteMode, UART8CR1Base> ;
    using PS = UART8_CR1_PS_Values<UART8::CR1, 9, 1, ReadWriteMode, UART8CR1Base> ;
    using PEIE = UART8_CR1_PEIE_Values<UART8::CR1, 8, 1, ReadWriteMode, UART8CR1Base> ;
    using TXEIE = UART8_CR1_TXEIE_Values<UART8::CR1, 7, 1, ReadWriteMode, UART8CR1Base> ;
    using TCIE = UART8_CR1_TCIE_Values<UART8::CR1, 6, 1, ReadWriteMode, UART8CR1Base> ;
    using RXNEIE = UART8_CR1_RXNEIE_Values<UART8::CR1, 5, 1, ReadWriteMode, UART8CR1Base> ;
    using IDLEIE = UART8_CR1_IDLEIE_Values<UART8::CR1, 4, 1, ReadWriteMode, UART8CR1Base> ;
    using TE = UART8_CR1_TE_Values<UART8::CR1, 3, 1, ReadWriteMode, UART8CR1Base> ;
    using RE = UART8_CR1_RE_Values<UART8::CR1, 2, 1, ReadWriteMode, UART8CR1Base> ;
    using RWU = UART8_CR1_RWU_Values<UART8::CR1, 1, 1, ReadWriteMode, UART8CR1Base> ;
    using SBK = UART8_CR1_SBK_Values<UART8::CR1, 0, 1, ReadWriteMode, UART8CR1Base> ;
    using FieldValues = UART8_CR1_SBK_Values<UART8::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40007C0C, 32, ReadWriteMode, UART8CR1Base, T...> ;

  struct UART8CR2Base {} ;

  struct CR2 : public RegisterBase<0x40007C10, 32, ReadWriteMode>
  {
    using LINEN = UART8_CR2_LINEN_Values<UART8::CR2, 14, 1, ReadWriteMode, UART8CR2Base> ;
    using STOP = UART8_CR2_STOP_Values<UART8::CR2, 12, 2, ReadWriteMode, UART8CR2Base> ;
    using LBDIE = UART8_CR2_LBDIE_Values<UART8::CR2, 6, 1, ReadWriteMode, UART8CR2Base> ;
    using LBDL = UART8_CR2_LBDL_Values<UART8::CR2, 5, 1, ReadWriteMode, UART8CR2Base> ;
    using ADD = UART8_CR2_ADD_Values<UART8::CR2, 0, 4, ReadWriteMode, UART8CR2Base> ;
    using FieldValues = UART8_CR2_ADD_Values<UART8::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40007C10, 32, ReadWriteMode, UART8CR2Base, T...> ;

  struct UART8CR3Base {} ;

  struct CR3 : public RegisterBase<0x40007C14, 32, ReadWriteMode>
  {
    using ONEBIT = UART8_CR3_ONEBIT_Values<UART8::CR3, 11, 1, ReadWriteMode, UART8CR3Base> ;
    using DMAT = UART8_CR3_DMAT_Values<UART8::CR3, 7, 1, ReadWriteMode, UART8CR3Base> ;
    using DMAR = UART8_CR3_DMAR_Values<UART8::CR3, 6, 1, ReadWriteMode, UART8CR3Base> ;
    using HDSEL = UART8_CR3_HDSEL_Values<UART8::CR3, 3, 1, ReadWriteMode, UART8CR3Base> ;
    using IRLP = UART8_CR3_IRLP_Values<UART8::CR3, 2, 1, ReadWriteMode, UART8CR3Base> ;
    using IREN = UART8_CR3_IREN_Values<UART8::CR3, 1, 1, ReadWriteMode, UART8CR3Base> ;
    using EIE = UART8_CR3_EIE_Values<UART8::CR3, 0, 1, ReadWriteMode, UART8CR3Base> ;
    using FieldValues = UART8_CR3_EIE_Values<UART8::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40007C14, 32, ReadWriteMode, UART8CR3Base, T...> ;

} ;

#endif //#if !defined(UART8REGISTERS_HPP)
