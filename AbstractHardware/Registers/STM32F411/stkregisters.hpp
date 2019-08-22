/*******************************************************************************
* Filename      : stkregisters.hpp
*
* Details       : SysTick timer. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(STKREGISTERS_HPP)
#define STKREGISTERS_HPP

#include "stkbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Stk
{
  struct Ctrl : public RegisterBase<0xE000E010, 32, ReadWriteMode>
  {
    using Enable = StkCtrlEnableValues<Stk::Ctrl, 0, 1, ReadWriteMode, StkCtrlEnableValuesBase> ;
    using Tickint = StkCtrlTickintValues<Stk::Ctrl, 1, 1, ReadWriteMode, StkCtrlTickintValuesBase> ;
    using Clksource = StkCtrlClksourceValues<Stk::Ctrl, 2, 1, ReadWriteMode, StkCtrlClksourceValuesBase> ;
    using Countflag = StkCtrlCountflagValues<Stk::Ctrl, 16, 1, ReadWriteMode, StkCtrlCountflagValuesBase> ;
  } ;

  template<typename... T> 
  using CtrlPack  = Register<0xE000E010, 32, ReadWriteMode, StkCtrlEnableValuesBase, T...> ;

  struct Load : public RegisterBase<0xE000E014, 32, ReadWriteMode>
  {
    using Reload = ReadWriteMode<Stk::Load, 0, 24> ;
  } ;

  template<typename... T> 
  using LoadPack  = Register<0xE000E014, 32, ReadWriteMode, StkLoadReloadValuesBase, T...> ;

  struct Val : public RegisterBase<0xE000E018, 32, ReadWriteMode>
  {
    using Current = ReadWriteMode<Stk::Val, 0, 24> ;
  } ;

  template<typename... T> 
  using ValPack  = Register<0xE000E018, 32, ReadWriteMode, StkValCurrentValuesBase, T...> ;

  struct Calib : public RegisterBase<0xE000E01C, 32, ReadWriteMode>
  {
    using Tenms = ReadWriteMode<Stk::Calib, 0, 24> ;
    using Skew = StkCalibSkewValues<Stk::Calib, 30, 1, ReadWriteMode, StkCalibSkewValuesBase> ;
    using Noref = StkCalibNorefValues<Stk::Calib, 31, 1, ReadWriteMode, StkCalibNorefValuesBase> ;
  } ;

  template<typename... T> 
  using CalibPack  = Register<0xE000E01C, 32, ReadWriteMode, StkCalibTenmsValuesBase, T...> ;

} ;

#endif //#if !defined(STKREGISTERS_HPP)
