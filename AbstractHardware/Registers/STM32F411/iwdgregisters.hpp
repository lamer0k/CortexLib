/*******************************************************************************
* Filename      : iwdgregisters.hpp
*
* Details       : Independent watchdog. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(IWDGREGISTERS_HPP)
#define IWDGREGISTERS_HPP

#include "iwdgbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Iwdg
{
  struct Kr : public RegisterBase<0x40003000, 32, WriteMode>
  {
    using Key = WriteMode<Iwdg::Kr, 0, 16> ;
  } ;

  template<typename... T> 
  using KrPack  = Register<0x40003000, 32, WriteMode, IwdgKrKeyValuesBase, T...> ;

  struct Pr : public RegisterBase<0x40003004, 32, ReadWriteMode>
  {
    using PrField = IwdgPrPrValues<Iwdg::Pr, 0, 3, ReadWriteMode, IwdgPrPrValuesBase> ;
  } ;

  template<typename... T> 
  using PrPack  = Register<0x40003004, 32, ReadWriteMode, IwdgPrPrValuesBase, T...> ;

  struct Rlr : public RegisterBase<0x40003008, 32, ReadWriteMode>
  {
    using Rl = ReadWriteMode<Iwdg::Rlr, 0, 12> ;
  } ;

  template<typename... T> 
  using RlrPack  = Register<0x40003008, 32, ReadWriteMode, IwdgRlrRlValuesBase, T...> ;

  struct Sr : public RegisterBase<0x4000300C, 32, ReadMode>
  {
    using Rvu = IwdgSrRvuValues<Iwdg::Sr, 1, 1, ReadMode, IwdgSrRvuValuesBase> ;
    using Pvu = IwdgSrPvuValues<Iwdg::Sr, 0, 1, ReadMode, IwdgSrPvuValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x4000300C, 32, ReadMode, IwdgSrRvuValuesBase, T...> ;

} ;

#endif //#if !defined(IWDGREGISTERS_HPP)
