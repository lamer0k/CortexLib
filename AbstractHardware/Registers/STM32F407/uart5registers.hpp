/*******************************************************************************
* Filename      : uart5registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(UART5REGISTERS_HPP)
#define UART5REGISTERS_HPP

#include "uart5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART5
{
  struct UART5SRBase {} ;

  struct SR : public RegisterBase<0x40005000, 32, ReadWriteMode>
  {
    using LBD = UART5_SR_LBD_Values<UART5::SR, 8, 1, ReadWriteMode, UART5SRBase> ;
    using TXE = UART5_SR_TXE_Values<UART5::SR, 7, 1, ReadMode, UART5SRBase> ;
    using TC = UART5_SR_TC_Values<UART5::SR, 6, 1, ReadWriteMode, UART5SRBase> ;
    using RXNE = UART5_SR_RXNE_Values<UART5::SR, 5, 1, ReadWriteMode, UART5SRBase> ;
    using IDLE = UART5_SR_IDLE_Values<UART5::SR, 4, 1, ReadMode, UART5SRBase> ;
    using ORE = UART5_SR_ORE_Values<UART5::SR, 3, 1, ReadMode, UART5SRBase> ;
    using NF = UART5_SR_NF_Values<UART5::SR, 2, 1, ReadMode, UART5SRBase> ;
    using FE = UART5_SR_FE_Values<UART5::SR, 1, 1, ReadMode, UART5SRBase> ;
    using PE = UART5_SR_PE_Values<UART5::SR, 0, 1, ReadMode, UART5SRBase> ;
    using FieldValues = UART5_SR_PE_Values<UART5::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40005000, 32, ReadWriteMode, UART5SRBase, T...> ;

  struct UART5DRBase {} ;

  struct DR : public RegisterBase<0x40005004, 32, ReadWriteMode>
  {
    using DRField = UART5_DR_DR_Values<UART5::DR, 0, 9, ReadWriteMode, UART5DRBase> ;
    using FieldValues = UART5_DR_DR_Values<UART5::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40005004, 32, ReadWriteMode, UART5DRBase, T...> ;

  struct UART5BRRBase {} ;

  struct BRR : public RegisterBase<0x40005008, 32, ReadWriteMode>
  {
    using DIV_Mantissa = UART5_BRR_DIV_Mantissa_Values<UART5::BRR, 4, 12, ReadWriteMode, UART5BRRBase> ;
    using DIV_Fraction = UART5_BRR_DIV_Fraction_Values<UART5::BRR, 0, 4, ReadWriteMode, UART5BRRBase> ;
    using FieldValues = UART5_BRR_DIV_Fraction_Values<UART5::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40005008, 32, ReadWriteMode, UART5BRRBase, T...> ;

  struct UART5CR1Base {} ;

  struct CR1 : public RegisterBase<0x4000500C, 32, ReadWriteMode>
  {
    using OVER8 = UART5_CR1_OVER8_Values<UART5::CR1, 15, 1, ReadWriteMode, UART5CR1Base> ;
    using UE = UART5_CR1_UE_Values<UART5::CR1, 13, 1, ReadWriteMode, UART5CR1Base> ;
    using M = UART5_CR1_M_Values<UART5::CR1, 12, 1, ReadWriteMode, UART5CR1Base> ;
    using WAKE = UART5_CR1_WAKE_Values<UART5::CR1, 11, 1, ReadWriteMode, UART5CR1Base> ;
    using PCE = UART5_CR1_PCE_Values<UART5::CR1, 10, 1, ReadWriteMode, UART5CR1Base> ;
    using PS = UART5_CR1_PS_Values<UART5::CR1, 9, 1, ReadWriteMode, UART5CR1Base> ;
    using PEIE = UART5_CR1_PEIE_Values<UART5::CR1, 8, 1, ReadWriteMode, UART5CR1Base> ;
    using TXEIE = UART5_CR1_TXEIE_Values<UART5::CR1, 7, 1, ReadWriteMode, UART5CR1Base> ;
    using TCIE = UART5_CR1_TCIE_Values<UART5::CR1, 6, 1, ReadWriteMode, UART5CR1Base> ;
    using RXNEIE = UART5_CR1_RXNEIE_Values<UART5::CR1, 5, 1, ReadWriteMode, UART5CR1Base> ;
    using IDLEIE = UART5_CR1_IDLEIE_Values<UART5::CR1, 4, 1, ReadWriteMode, UART5CR1Base> ;
    using TE = UART5_CR1_TE_Values<UART5::CR1, 3, 1, ReadWriteMode, UART5CR1Base> ;
    using RE = UART5_CR1_RE_Values<UART5::CR1, 2, 1, ReadWriteMode, UART5CR1Base> ;
    using RWU = UART5_CR1_RWU_Values<UART5::CR1, 1, 1, ReadWriteMode, UART5CR1Base> ;
    using SBK = UART5_CR1_SBK_Values<UART5::CR1, 0, 1, ReadWriteMode, UART5CR1Base> ;
    using FieldValues = UART5_CR1_SBK_Values<UART5::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x4000500C, 32, ReadWriteMode, UART5CR1Base, T...> ;

  struct UART5CR2Base {} ;

  struct CR2 : public RegisterBase<0x40005010, 32, ReadWriteMode>
  {
    using LINEN = UART5_CR2_LINEN_Values<UART5::CR2, 14, 1, ReadWriteMode, UART5CR2Base> ;
    using STOP = UART5_CR2_STOP_Values<UART5::CR2, 12, 2, ReadWriteMode, UART5CR2Base> ;
    using LBDIE = UART5_CR2_LBDIE_Values<UART5::CR2, 6, 1, ReadWriteMode, UART5CR2Base> ;
    using LBDL = UART5_CR2_LBDL_Values<UART5::CR2, 5, 1, ReadWriteMode, UART5CR2Base> ;
    using ADD = UART5_CR2_ADD_Values<UART5::CR2, 0, 4, ReadWriteMode, UART5CR2Base> ;
    using FieldValues = UART5_CR2_ADD_Values<UART5::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40005010, 32, ReadWriteMode, UART5CR2Base, T...> ;

  struct UART5CR3Base {} ;

  struct CR3 : public RegisterBase<0x40005014, 32, ReadWriteMode>
  {
    using ONEBIT = UART5_CR3_ONEBIT_Values<UART5::CR3, 11, 1, ReadWriteMode, UART5CR3Base> ;
    using DMAT = UART5_CR3_DMAT_Values<UART5::CR3, 7, 1, ReadWriteMode, UART5CR3Base> ;
    using DMAR = UART5_CR3_DMAR_Values<UART5::CR3, 6, 1, ReadWriteMode, UART5CR3Base> ;
    using HDSEL = UART5_CR3_HDSEL_Values<UART5::CR3, 3, 1, ReadWriteMode, UART5CR3Base> ;
    using IRLP = UART5_CR3_IRLP_Values<UART5::CR3, 2, 1, ReadWriteMode, UART5CR3Base> ;
    using IREN = UART5_CR3_IREN_Values<UART5::CR3, 1, 1, ReadWriteMode, UART5CR3Base> ;
    using EIE = UART5_CR3_EIE_Values<UART5::CR3, 0, 1, ReadWriteMode, UART5CR3Base> ;
    using FieldValues = UART5_CR3_EIE_Values<UART5::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40005014, 32, ReadWriteMode, UART5CR3Base, T...> ;

} ;

#endif //#if !defined(UART5REGISTERS_HPP)
