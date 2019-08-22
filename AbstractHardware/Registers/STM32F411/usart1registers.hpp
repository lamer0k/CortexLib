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

#include "usart1bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Usart1
{
  struct Sr : public RegisterBase<0x40011000, 32, ReadWriteMode>
  {
    using Cts = UsartSrCtsValues<Usart1::Sr, 9, 1, ReadWriteMode, UsartSrCtsValuesBase> ;
    using Lbd = UsartSrLbdValues<Usart1::Sr, 8, 1, ReadWriteMode, UsartSrLbdValuesBase> ;
    using Txe = UsartSrTxeValues<Usart1::Sr, 7, 1, ReadMode, UsartSrTxeValuesBase> ;
    using Tc = UsartSrTcValues<Usart1::Sr, 6, 1, ReadWriteMode, UsartSrTcValuesBase> ;
    using Rxne = UsartSrRxneValues<Usart1::Sr, 5, 1, ReadWriteMode, UsartSrRxneValuesBase> ;
    using Idle = UsartSrIdleValues<Usart1::Sr, 4, 1, ReadMode, UsartSrIdleValuesBase> ;
    using Ore = UsartSrOreValues<Usart1::Sr, 3, 1, ReadMode, UsartSrOreValuesBase> ;
    using Nf = UsartSrNfValues<Usart1::Sr, 2, 1, ReadMode, UsartSrNfValuesBase> ;
    using Fe = UsartSrFeValues<Usart1::Sr, 1, 1, ReadMode, UsartSrFeValuesBase> ;
    using Pe = UsartSrPeValues<Usart1::Sr, 0, 1, ReadMode, UsartSrPeValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40011000, 32, ReadWriteMode, UsartSrCtsValuesBase, T...> ;

  struct Dr : public RegisterBase<0x40011004, 32, ReadWriteMode>
  {
    using DrField = ReadWriteMode<Usart1::Dr, 0, 9> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x40011004, 32, ReadWriteMode, UsartDrDrValuesBase, T...> ;

  struct Brr : public RegisterBase<0x40011008, 32, ReadWriteMode>
  {
    using DivMantissa = ReadWriteMode<Usart1::Brr, 4, 12> ;
    using DivFraction = UsartBrrDivFractionValues<Usart1::Brr, 0, 4, ReadWriteMode, UsartBrrDivFractionValuesBase> ;
  } ;

  template<typename... T> 
  using BrrPack  = Register<0x40011008, 32, ReadWriteMode, UsartBrrDivMantissaValuesBase, T...> ;

  struct Cr1 : public RegisterBase<0x4001100C, 32, ReadWriteMode>
  {
    using Over8 = UsartCrOverValues<Usart1::Cr1, 15, 1, ReadWriteMode, UsartCrOverValuesBase> ;
    using Ue = UsartCrUeValues<Usart1::Cr1, 13, 1, ReadWriteMode, UsartCrUeValuesBase> ;
    using M = UsartCrMValues<Usart1::Cr1, 12, 1, ReadWriteMode, UsartCrMValuesBase> ;
    using Wake = UsartCrWakeValues<Usart1::Cr1, 11, 1, ReadWriteMode, UsartCrWakeValuesBase> ;
    using Pce = UsartCrPceValues<Usart1::Cr1, 10, 1, ReadWriteMode, UsartCrPceValuesBase> ;
    using Ps = UsartCrPsValues<Usart1::Cr1, 9, 1, ReadWriteMode, UsartCrPsValuesBase> ;
    using Peie = UsartCrPeieValues<Usart1::Cr1, 8, 1, ReadWriteMode, UsartCrPeieValuesBase> ;
    using Txeie = UsartCrTxeieValues<Usart1::Cr1, 7, 1, ReadWriteMode, UsartCrTxeieValuesBase> ;
    using Tcie = UsartCrTcieValues<Usart1::Cr1, 6, 1, ReadWriteMode, UsartCrTcieValuesBase> ;
    using Rxneie = UsartCrRxneieValues<Usart1::Cr1, 5, 1, ReadWriteMode, UsartCrRxneieValuesBase> ;
    using Idleie = UsartCrIdleieValues<Usart1::Cr1, 4, 1, ReadWriteMode, UsartCrIdleieValuesBase> ;
    using Te = UsartCrTeValues<Usart1::Cr1, 3, 1, ReadWriteMode, UsartCrTeValuesBase> ;
    using Re = UsartCrReValues<Usart1::Cr1, 2, 1, ReadWriteMode, UsartCrReValuesBase> ;
    using Rwu = UsartCrRwuValues<Usart1::Cr1, 1, 1, ReadWriteMode, UsartCrRwuValuesBase> ;
    using Sbk = UsartCrSbkValues<Usart1::Cr1, 0, 1, ReadWriteMode, UsartCrSbkValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x4001100C, 32, ReadWriteMode, UsartCrOverValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40011010, 32, ReadWriteMode>
  {
    using Linen = UsartCrLinenValues<Usart1::Cr2, 14, 1, ReadWriteMode, UsartCrLinenValuesBase> ;
    using Stop = UsartCrStopValues<Usart1::Cr2, 12, 2, ReadWriteMode, UsartCrStopValuesBase> ;
    using Clken = UsartCrClkenValues<Usart1::Cr2, 11, 1, ReadWriteMode, UsartCrClkenValuesBase> ;
    using Cpol = UsartCrCpolValues<Usart1::Cr2, 10, 1, ReadWriteMode, UsartCrCpolValuesBase> ;
    using Cpha = UsartCrCphaValues<Usart1::Cr2, 9, 1, ReadWriteMode, UsartCrCphaValuesBase> ;
    using Lbcl = UsartCrLbclValues<Usart1::Cr2, 8, 1, ReadWriteMode, UsartCrLbclValuesBase> ;
    using Lbdie = UsartCrLbdieValues<Usart1::Cr2, 6, 1, ReadWriteMode, UsartCrLbdieValuesBase> ;
    using Lbdl = UsartCrLbdlValues<Usart1::Cr2, 5, 1, ReadWriteMode, UsartCrLbdlValuesBase> ;
    using Add = UsartCrAddValues<Usart1::Cr2, 0, 4, ReadWriteMode, UsartCrAddValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40011010, 32, ReadWriteMode, UsartCrLinenValuesBase, T...> ;

  struct Cr3 : public RegisterBase<0x40011014, 32, ReadWriteMode>
  {
    using Onebit = UsartCrOnebitValues<Usart1::Cr3, 11, 1, ReadWriteMode, UsartCrOnebitValuesBase> ;
    using Ctsie = UsartCrCtsieValues<Usart1::Cr3, 10, 1, ReadWriteMode, UsartCrCtsieValuesBase> ;
    using Ctse = UsartCrCtseValues<Usart1::Cr3, 9, 1, ReadWriteMode, UsartCrCtseValuesBase> ;
    using Rtse = UsartCrRtseValues<Usart1::Cr3, 8, 1, ReadWriteMode, UsartCrRtseValuesBase> ;
    using Dmat = UsartCrDmatValues<Usart1::Cr3, 7, 1, ReadWriteMode, UsartCrDmatValuesBase> ;
    using Dmar = UsartCrDmarValues<Usart1::Cr3, 6, 1, ReadWriteMode, UsartCrDmarValuesBase> ;
    using Scen = UsartCrScenValues<Usart1::Cr3, 5, 1, ReadWriteMode, UsartCrScenValuesBase> ;
    using Nack = UsartCrNackValues<Usart1::Cr3, 4, 1, ReadWriteMode, UsartCrNackValuesBase> ;
    using Hdsel = UsartCrHdselValues<Usart1::Cr3, 3, 1, ReadWriteMode, UsartCrHdselValuesBase> ;
    using Irlp = UsartCrIrlpValues<Usart1::Cr3, 2, 1, ReadWriteMode, UsartCrIrlpValuesBase> ;
    using Iren = UsartCrIrenValues<Usart1::Cr3, 1, 1, ReadWriteMode, UsartCrIrenValuesBase> ;
    using Eie = UsartCrEieValues<Usart1::Cr3, 0, 1, ReadWriteMode, UsartCrEieValuesBase> ;
  } ;

  template<typename... T> 
  using Cr3Pack  = Register<0x40011014, 32, ReadWriteMode, UsartCrOnebitValuesBase, T...> ;

  struct Gtpr : public RegisterBase<0x40011018, 32, ReadWriteMode>
  {
    using Gt = ReadWriteMode<Usart1::Gtpr, 8, 8> ;
    using Psc = ReadWriteMode<Usart1::Gtpr, 0, 8> ;
  } ;

  template<typename... T> 
  using GtprPack  = Register<0x40011018, 32, ReadWriteMode, UsartGtprGtValuesBase, T...> ;

} ;

#endif //#if !defined(USART1REGISTERS_HPP)
