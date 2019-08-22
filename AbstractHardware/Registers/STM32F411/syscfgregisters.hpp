/*******************************************************************************
* Filename      : syscfgregisters.hpp
*
* Details       : System configuration controller. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SYSCFGREGISTERS_HPP)
#define SYSCFGREGISTERS_HPP

#include "syscfgbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Syscfg
{
  struct Memrm : public RegisterBase<0x40013800, 32, ReadWriteMode>
  {
    using MemMode = SyscfgMemrmMemModeValues<Syscfg::Memrm, 0, 2, ReadWriteMode, SyscfgMemrmMemModeValuesBase> ;
  } ;

  template<typename... T> 
  using MemrmPack  = Register<0x40013800, 32, ReadWriteMode, SyscfgMemrmMemModeValuesBase, T...> ;

  struct Pmc : public RegisterBase<0x40013804, 32, ReadWriteMode>
  {
    using Adc1Dc2 = SyscfgPmcAdcDcValues<Syscfg::Pmc, 16, 1, ReadWriteMode, SyscfgPmcAdcDcValuesBase> ;
  } ;

  template<typename... T> 
  using PmcPack  = Register<0x40013804, 32, ReadWriteMode, SyscfgPmcAdcDcValuesBase, T...> ;

  struct Exticr1 : public RegisterBase<0x40013808, 32, ReadWriteMode>
  {
    using Exti3 = SyscfgExticrExtiValues<Syscfg::Exticr1, 12, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti2 = SyscfgExticrExtiValues<Syscfg::Exticr1, 8, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti1 = SyscfgExticrExtiValues<Syscfg::Exticr1, 4, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti0 = SyscfgExticrExtiValues<Syscfg::Exticr1, 0, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
  } ;

  template<typename... T> 
  using Exticr1Pack  = Register<0x40013808, 32, ReadWriteMode, SyscfgExticrExtiValuesBase, T...> ;

  struct Exticr2 : public RegisterBase<0x4001380C, 32, ReadWriteMode>
  {
    using Exti7 = SyscfgExticrExtiValues<Syscfg::Exticr2, 12, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti6 = SyscfgExticrExtiValues<Syscfg::Exticr2, 8, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti5 = SyscfgExticrExtiValues<Syscfg::Exticr2, 4, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti4 = SyscfgExticrExtiValues<Syscfg::Exticr2, 0, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
  } ;

  template<typename... T> 
  using Exticr2Pack  = Register<0x4001380C, 32, ReadWriteMode, SyscfgExticrExtiValuesBase, T...> ;

  struct Exticr3 : public RegisterBase<0x40013810, 32, ReadWriteMode>
  {
    using Exti11 = SyscfgExticrExtiValues<Syscfg::Exticr3, 12, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti10 = SyscfgExticrExtiValues<Syscfg::Exticr3, 8, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti9 = SyscfgExticrExtiValues<Syscfg::Exticr3, 4, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti8 = SyscfgExticrExtiValues<Syscfg::Exticr3, 0, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
  } ;

  template<typename... T> 
  using Exticr3Pack  = Register<0x40013810, 32, ReadWriteMode, SyscfgExticrExtiValuesBase, T...> ;

  struct Exticr4 : public RegisterBase<0x40013814, 32, ReadWriteMode>
  {
    using Exti15 = SyscfgExticrExtiValues<Syscfg::Exticr4, 12, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti14 = SyscfgExticrExtiValues<Syscfg::Exticr4, 8, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti13 = SyscfgExticrExtiValues<Syscfg::Exticr4, 4, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
    using Exti12 = SyscfgExticrExtiValues<Syscfg::Exticr4, 0, 4, ReadWriteMode, SyscfgExticrExtiValuesBase> ;
  } ;

  template<typename... T> 
  using Exticr4Pack  = Register<0x40013814, 32, ReadWriteMode, SyscfgExticrExtiValuesBase, T...> ;

  struct Cmpcr : public RegisterBase<0x40013820, 32, ReadMode>
  {
    using Ready = SyscfgCmpcrReadyValues<Syscfg::Cmpcr, 8, 1, ReadMode, SyscfgCmpcrReadyValuesBase> ;
    using CmpPd = SyscfgCmpcrCmpPdValues<Syscfg::Cmpcr, 0, 1, ReadMode, SyscfgCmpcrCmpPdValuesBase> ;
  } ;

  template<typename... T> 
  using CmpcrPack  = Register<0x40013820, 32, ReadMode, SyscfgCmpcrReadyValuesBase, T...> ;

} ;

#endif //#if !defined(SYSCFGREGISTERS_HPP)
