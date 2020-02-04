/*******************************************************************************
* Filename      : stkregisters.hpp
*
* Details       : SysTick timer. This header file is auto-generated for
*                 STM32F0x1 device.
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
  struct STKCSRBase {} ;

  struct CSR : public RegisterBase<0xE000E010, 32, ReadWriteMode>
  {
    using ENABLE = STK_CSR_ENABLE_Values<STK::CSR, 0, 1, ReadWriteMode, STKCSRBase> ;
    using TICKINT = STK_CSR_TICKINT_Values<STK::CSR, 1, 1, ReadWriteMode, STKCSRBase> ;
    using CLKSOURCE = STK_CSR_CLKSOURCE_Values<STK::CSR, 2, 1, ReadWriteMode, STKCSRBase> ;
    using COUNTFLAG = STK_CSR_COUNTFLAG_Values<STK::CSR, 16, 1, ReadWriteMode, STKCSRBase> ;
    using FieldValues = STK_CSR_COUNTFLAG_Values<STK::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0xE000E010, 32, ReadWriteMode, STKCSRBase, T...> ;

  struct STKRVRBase {} ;

  struct RVR : public RegisterBase<0xE000E014, 32, ReadWriteMode>
  {
    using RELOAD = STK_RVR_RELOAD_Values<STK::RVR, 0, 24, ReadWriteMode, STKRVRBase> ;
    using FieldValues = STK_RVR_RELOAD_Values<STK::RVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RVRPack  = Register<0xE000E014, 32, ReadWriteMode, STKRVRBase, T...> ;

  struct STKCVRBase {} ;

  struct CVR : public RegisterBase<0xE000E018, 32, ReadWriteMode>
  {
    using CURRENT = STK_CVR_CURRENT_Values<STK::CVR, 0, 24, ReadWriteMode, STKCVRBase> ;
    using FieldValues = STK_CVR_CURRENT_Values<STK::CVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CVRPack  = Register<0xE000E018, 32, ReadWriteMode, STKCVRBase, T...> ;

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
