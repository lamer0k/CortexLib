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

#include "usart2bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Usart2
{
  struct Sr : public RegisterBase<0x40004400, 32, ReadWriteMode>
  {
    using Cts = UsartSrCtsValues<Usart2::Sr, 9, 1, ReadWriteMode, UsartSrCtsValuesBase> ;
    using Lbd = UsartSrLbdValues<Usart2::Sr, 8, 1, ReadWriteMode, UsartSrLbdValuesBase> ;
    using Txe = UsartSrTxeValues<Usart2::Sr, 7, 1, ReadMode, UsartSrTxeValuesBase> ;
    using Tc = UsartSrTcValues<Usart2::Sr, 6, 1, ReadWriteMode, UsartSrTcValuesBase> ;
    using Rxne = UsartSrRxneValues<Usart2::Sr, 5, 1, ReadWriteMode, UsartSrRxneValuesBase> ;
    using Idle = UsartSrIdleValues<Usart2::Sr, 4, 1, ReadMode, UsartSrIdleValuesBase> ;
    using Ore = UsartSrOreValues<Usart2::Sr, 3, 1, ReadMode, UsartSrOreValuesBase> ;
    using Nf = UsartSrNfValues<Usart2::Sr, 2, 1, ReadMode, UsartSrNfValuesBase> ;
    using Fe = UsartSrFeValues<Usart2::Sr, 1, 1, ReadMode, UsartSrFeValuesBase> ;
    using Pe = UsartSrPeValues<Usart2::Sr, 0, 1, ReadMode, UsartSrPeValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40004400, 32, ReadWriteMode, UsartSrCtsValuesBase, T...> ;

  struct Dr : public RegisterBase<0x40004404, 32, ReadWriteMode>
  {
    using DrField = ReadWriteMode<Usart2::Dr, 0, 9> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x40004404, 32, ReadWriteMode, UsartDrDrValuesBase, T...> ;

  struct Brr : public RegisterBase<0x40004408, 32, ReadWriteMode>
  {
    using DivMantissa = ReadWriteMode<Usart2::Brr, 4, 12> ;
    using DivFraction = UsartBrrDivFractionValues<Usart2::Brr, 0, 4, ReadWriteMode, UsartBrrDivFractionValuesBase> ;
  } ;

  template<typename... T> 
  using BrrPack  = Register<0x40004408, 32, ReadWriteMode, UsartBrrDivMantissaValuesBase, T...> ;

  struct Cr1 : public RegisterBase<0x4000440C, 32, ReadWriteMode>
  {
    using Over8 = UsartCrOverValues<Usart2::Cr1, 15, 1, ReadWriteMode, UsartCrOverValuesBase> ;
    using Ue = UsartCrUeValues<Usart2::Cr1, 13, 1, ReadWriteMode, UsartCrUeValuesBase> ;
    using M = UsartCrMValues<Usart2::Cr1, 12, 1, ReadWriteMode, UsartCrMValuesBase> ;
    using Wake = UsartCrWakeValues<Usart2::Cr1, 11, 1, ReadWriteMode, UsartCrWakeValuesBase> ;
    using Pce = UsartCrPceValues<Usart2::Cr1, 10, 1, ReadWriteMode, UsartCrPceValuesBase> ;
    using Ps = UsartCrPsValues<Usart2::Cr1, 9, 1, ReadWriteMode, UsartCrPsValuesBase> ;
    using Peie = UsartCrPeieValues<Usart2::Cr1, 8, 1, ReadWriteMode, UsartCrPeieValuesBase> ;
    using Txeie = UsartCrTxeieValues<Usart2::Cr1, 7, 1, ReadWriteMode, UsartCrTxeieValuesBase> ;
    using Tcie = UsartCrTcieValues<Usart2::Cr1, 6, 1, ReadWriteMode, UsartCrTcieValuesBase> ;
    using Rxneie = UsartCrRxneieValues<Usart2::Cr1, 5, 1, ReadWriteMode, UsartCrRxneieValuesBase> ;
    using Idleie = UsartCrIdleieValues<Usart2::Cr1, 4, 1, ReadWriteMode, UsartCrIdleieValuesBase> ;
    using Te = UsartCrTeValues<Usart2::Cr1, 3, 1, ReadWriteMode, UsartCrTeValuesBase> ;
    using Re = UsartCrReValues<Usart2::Cr1, 2, 1, ReadWriteMode, UsartCrReValuesBase> ;
    using Rwu = UsartCrRwuValues<Usart2::Cr1, 1, 1, ReadWriteMode, UsartCrRwuValuesBase> ;
    using Sbk = UsartCrSbkValues<Usart2::Cr1, 0, 1, ReadWriteMode, UsartCrSbkValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x4000440C, 32, ReadWriteMode, UsartCrOverValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40004410, 32, ReadWriteMode>
  {
    using Linen = UsartCrLinenValues<Usart2::Cr2, 14, 1, ReadWriteMode, UsartCrLinenValuesBase> ;
    using Stop = UsartCrStopValues<Usart2::Cr2, 12, 2, ReadWriteMode, UsartCrStopValuesBase> ;
    using Clken = UsartCrClkenValues<Usart2::Cr2, 11, 1, ReadWriteMode, UsartCrClkenValuesBase> ;
    using Cpol = UsartCrCpolValues<Usart2::Cr2, 10, 1, ReadWriteMode, UsartCrCpolValuesBase> ;
    using Cpha = UsartCrCphaValues<Usart2::Cr2, 9, 1, ReadWriteMode, UsartCrCphaValuesBase> ;
    using Lbcl = UsartCrLbclValues<Usart2::Cr2, 8, 1, ReadWriteMode, UsartCrLbclValuesBase> ;
    using Lbdie = UsartCrLbdieValues<Usart2::Cr2, 6, 1, ReadWriteMode, UsartCrLbdieValuesBase> ;
    using Lbdl = UsartCrLbdlValues<Usart2::Cr2, 5, 1, ReadWriteMode, UsartCrLbdlValuesBase> ;
    using Add = UsartCrAddValues<Usart2::Cr2, 0, 4, ReadWriteMode, UsartCrAddValuesBase> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40004410, 32, ReadWriteMode, UsartCrLinenValuesBase, T...> ;

  struct Cr3 : public RegisterBase<0x40004414, 32, ReadWriteMode>
  {
    using Onebit = UsartCrOnebitValues<Usart2::Cr3, 11, 1, ReadWriteMode, UsartCrOnebitValuesBase> ;
    using Ctsie = UsartCrCtsieValues<Usart2::Cr3, 10, 1, ReadWriteMode, UsartCrCtsieValuesBase> ;
    using Ctse = UsartCrCtseValues<Usart2::Cr3, 9, 1, ReadWriteMode, UsartCrCtseValuesBase> ;
    using Rtse = UsartCrRtseValues<Usart2::Cr3, 8, 1, ReadWriteMode, UsartCrRtseValuesBase> ;
    using Dmat = UsartCrDmatValues<Usart2::Cr3, 7, 1, ReadWriteMode, UsartCrDmatValuesBase> ;
    using Dmar = UsartCrDmarValues<Usart2::Cr3, 6, 1, ReadWriteMode, UsartCrDmarValuesBase> ;
    using Scen = UsartCrScenValues<Usart2::Cr3, 5, 1, ReadWriteMode, UsartCrScenValuesBase> ;
    using Nack = UsartCrNackValues<Usart2::Cr3, 4, 1, ReadWriteMode, UsartCrNackValuesBase> ;
    using Hdsel = UsartCrHdselValues<Usart2::Cr3, 3, 1, ReadWriteMode, UsartCrHdselValuesBase> ;
    using Irlp = UsartCrIrlpValues<Usart2::Cr3, 2, 1, ReadWriteMode, UsartCrIrlpValuesBase> ;
    using Iren = UsartCrIrenValues<Usart2::Cr3, 1, 1, ReadWriteMode, UsartCrIrenValuesBase> ;
    using Eie = UsartCrEieValues<Usart2::Cr3, 0, 1, ReadWriteMode, UsartCrEieValuesBase> ;
  } ;

  template<typename... T> 
  using Cr3Pack  = Register<0x40004414, 32, ReadWriteMode, UsartCrOnebitValuesBase, T...> ;

  struct Gtpr : public RegisterBase<0x40004418, 32, ReadWriteMode>
  {
    using Gt = ReadWriteMode<Usart2::Gtpr, 8, 8> ;
    using Psc = ReadWriteMode<Usart2::Gtpr, 0, 8> ;
  } ;

  template<typename... T> 
  using GtprPack  = Register<0x40004418, 32, ReadWriteMode, UsartGtprGtValuesBase, T...> ;

} ;

#endif //#if !defined(USART2REGISTERS_HPP)
