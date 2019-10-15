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

#include "stkfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct STK
{
  struct STKCTRLBase {} ;

  struct CTRL : public RegisterBase<0xE000E010, 32, ReadWriteMode>
  {
    using ENABLE = STK_CTRL_ENABLE_Values<STK::CTRL, 0, 1, ReadWriteMode, STKCTRLBase> ;
    using TICKINT = STK_CTRL_TICKINT_Values<STK::CTRL, 1, 1, ReadWriteMode, STKCTRLBase> ;
    using CLKSOURCE = STK_CTRL_CLKSOURCE_Values<STK::CTRL, 2, 1, ReadWriteMode, STKCTRLBase> ;
    using COUNTFLAG = STK_CTRL_COUNTFLAG_Values<STK::CTRL, 16, 1, ReadWriteMode, STKCTRLBase> ;
    using FieldValues = STK_CTRL_COUNTFLAG_Values<STK::CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRLPack  = Register<0xE000E010, 32, ReadWriteMode, STKCTRLBase, T...> ;

  struct STKLOADBase {} ;

  struct LOAD : public RegisterBase<0xE000E014, 32, ReadWriteMode>
  {
    using RELOAD = STK_LOAD_RELOAD_Values<STK::LOAD, 0, 24, ReadWriteMode, STKLOADBase> ;
    using FieldValues = STK_LOAD_RELOAD_Values<STK::LOAD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LOADPack  = Register<0xE000E014, 32, ReadWriteMode, STKLOADBase, T...> ;

  struct STKVALBase {} ;

  struct VAL : public RegisterBase<0xE000E018, 32, ReadWriteMode>
  {
    using CURRENT = STK_VAL_CURRENT_Values<STK::VAL, 0, 24, ReadWriteMode, STKVALBase> ;
    using FieldValues = STK_VAL_CURRENT_Values<STK::VAL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VALPack  = Register<0xE000E018, 32, ReadWriteMode, STKVALBase, T...> ;

  struct STKCALIBBase {} ;

  struct CALIB : public RegisterBase<0xE000E01C, 32, ReadWriteMode>
  {
    using TENMS = STK_CALIB_TENMS_Values<STK::CALIB, 0, 24, ReadWriteMode, STKCALIBBase> ;
    using SKEW = STK_CALIB_SKEW_Values<STK::CALIB, 30, 1, ReadWriteMode, STKCALIBBase> ;
    using NOREF = STK_CALIB_NOREF_Values<STK::CALIB, 31, 1, ReadWriteMode, STKCALIBBase> ;
    using FieldValues = STK_CALIB_NOREF_Values<STK::CALIB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALIBPack  = Register<0xE000E01C, 32, ReadWriteMode, STKCALIBBase, T...> ;

} ;

#endif //#if !defined(STKREGISTERS_HPP)
