/*******************************************************************************
* Filename      : uart4registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F407 device.
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
  struct UART4SRBase {} ;

  struct SR : public RegisterBase<0x40004C00, 32, ReadWriteMode>
  {
    using LBD = UART4_SR_LBD_Values<UART4::SR, 8, 1, ReadWriteMode, UART4SRBase> ;
    using TXE = UART4_SR_TXE_Values<UART4::SR, 7, 1, ReadMode, UART4SRBase> ;
    using TC = UART4_SR_TC_Values<UART4::SR, 6, 1, ReadWriteMode, UART4SRBase> ;
    using RXNE = UART4_SR_RXNE_Values<UART4::SR, 5, 1, ReadWriteMode, UART4SRBase> ;
    using IDLE = UART4_SR_IDLE_Values<UART4::SR, 4, 1, ReadMode, UART4SRBase> ;
    using ORE = UART4_SR_ORE_Values<UART4::SR, 3, 1, ReadMode, UART4SRBase> ;
    using NF = UART4_SR_NF_Values<UART4::SR, 2, 1, ReadMode, UART4SRBase> ;
    using FE = UART4_SR_FE_Values<UART4::SR, 1, 1, ReadMode, UART4SRBase> ;
    using PE = UART4_SR_PE_Values<UART4::SR, 0, 1, ReadMode, UART4SRBase> ;
    using FieldValues = UART4_SR_PE_Values<UART4::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40004C00, 32, ReadWriteMode, UART4SRBase, T...> ;

  struct UART4DRBase {} ;

  struct DR : public RegisterBase<0x40004C04, 32, ReadWriteMode>
  {
    using DRField = UART4_DR_DR_Values<UART4::DR, 0, 9, ReadWriteMode, UART4DRBase> ;
    using FieldValues = UART4_DR_DR_Values<UART4::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40004C04, 32, ReadWriteMode, UART4DRBase, T...> ;

  struct UART4BRRBase {} ;

  struct BRR : public RegisterBase<0x40004C08, 32, ReadWriteMode>
  {
    using DIV_Mantissa = UART4_BRR_DIV_Mantissa_Values<UART4::BRR, 4, 12, ReadWriteMode, UART4BRRBase> ;
    using DIV_Fraction = UART4_BRR_DIV_Fraction_Values<UART4::BRR, 0, 4, ReadWriteMode, UART4BRRBase> ;
    using FieldValues = UART4_BRR_DIV_Fraction_Values<UART4::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40004C08, 32, ReadWriteMode, UART4BRRBase, T...> ;

  struct UART4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40004C0C, 32, ReadWriteMode>
  {
    using OVER8 = UART4_CR1_OVER8_Values<UART4::CR1, 15, 1, ReadWriteMode, UART4CR1Base> ;
    using UE = UART4_CR1_UE_Values<UART4::CR1, 13, 1, ReadWriteMode, UART4CR1Base> ;
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
    using RWU = UART4_CR1_RWU_Values<UART4::CR1, 1, 1, ReadWriteMode, UART4CR1Base> ;
    using SBK = UART4_CR1_SBK_Values<UART4::CR1, 0, 1, ReadWriteMode, UART4CR1Base> ;
    using FieldValues = UART4_CR1_SBK_Values<UART4::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40004C0C, 32, ReadWriteMode, UART4CR1Base, T...> ;

  struct UART4CR2Base {} ;

  struct CR2 : public RegisterBase<0x40004C10, 32, ReadWriteMode>
  {
    using LINEN = UART4_CR2_LINEN_Values<UART4::CR2, 14, 1, ReadWriteMode, UART4CR2Base> ;
    using STOP = UART4_CR2_STOP_Values<UART4::CR2, 12, 2, ReadWriteMode, UART4CR2Base> ;
    using LBDIE = UART4_CR2_LBDIE_Values<UART4::CR2, 6, 1, ReadWriteMode, UART4CR2Base> ;
    using LBDL = UART4_CR2_LBDL_Values<UART4::CR2, 5, 1, ReadWriteMode, UART4CR2Base> ;
    using ADD = UART4_CR2_ADD_Values<UART4::CR2, 0, 4, ReadWriteMode, UART4CR2Base> ;
    using FieldValues = UART4_CR2_ADD_Values<UART4::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004C10, 32, ReadWriteMode, UART4CR2Base, T...> ;

  struct UART4CR3Base {} ;

  struct CR3 : public RegisterBase<0x40004C14, 32, ReadWriteMode>
  {
    using ONEBIT = UART4_CR3_ONEBIT_Values<UART4::CR3, 11, 1, ReadWriteMode, UART4CR3Base> ;
    using DMAT = UART4_CR3_DMAT_Values<UART4::CR3, 7, 1, ReadWriteMode, UART4CR3Base> ;
    using DMAR = UART4_CR3_DMAR_Values<UART4::CR3, 6, 1, ReadWriteMode, UART4CR3Base> ;
    using HDSEL = UART4_CR3_HDSEL_Values<UART4::CR3, 3, 1, ReadWriteMode, UART4CR3Base> ;
    using IRLP = UART4_CR3_IRLP_Values<UART4::CR3, 2, 1, ReadWriteMode, UART4CR3Base> ;
    using IREN = UART4_CR3_IREN_Values<UART4::CR3, 1, 1, ReadWriteMode, UART4CR3Base> ;
    using EIE = UART4_CR3_EIE_Values<UART4::CR3, 0, 1, ReadWriteMode, UART4CR3Base> ;
    using FieldValues = UART4_CR3_EIE_Values<UART4::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40004C14, 32, ReadWriteMode, UART4CR3Base, T...> ;

} ;

#endif //#if !defined(UART4REGISTERS_HPP)
