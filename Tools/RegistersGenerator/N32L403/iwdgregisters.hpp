/*******************************************************************************
* Filename      : iwdgregisters.hpp
*
* Details       : Independent watchdog. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "iwdgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct IWDG
{
  struct IWDGIWDG_KEYBase {} ;

  struct IWDG_KEY : public RegisterBase<0x40003000, 32, ReadWriteMode>
  {
    using KEYV = IWDG_IWDG_KEY_KEYV_Values<IWDG::IWDG_KEY, 0, 16, ReadWriteMode, IWDGIWDG_KEYBase> ;
    using FieldValues = IWDG_IWDG_KEY_KEYV_Values<IWDG::IWDG_KEY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IWDG_KEYPack  = Register<0x40003000, 32, ReadWriteMode, IWDGIWDG_KEYBase, T...> ;

  struct IWDGIWDG_PREDIVBase {} ;

  struct IWDG_PREDIV : public RegisterBase<0x40003004, 32, ReadWriteMode>
  {
    using PD = IWDG_IWDG_PREDIV_PD_Values<IWDG::IWDG_PREDIV, 0, 3, ReadWriteMode, IWDGIWDG_PREDIVBase> ;
    using FieldValues = IWDG_IWDG_PREDIV_PD_Values<IWDG::IWDG_PREDIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IWDG_PREDIVPack  = Register<0x40003004, 32, ReadWriteMode, IWDGIWDG_PREDIVBase, T...> ;

  struct IWDGIWDG_RELVBase {} ;

  struct IWDG_RELV : public RegisterBase<0x40003008, 32, ReadWriteMode>
  {
    using REL = IWDG_IWDG_RELV_REL_Values<IWDG::IWDG_RELV, 0, 12, ReadWriteMode, IWDGIWDG_RELVBase> ;
    using FieldValues = IWDG_IWDG_RELV_REL_Values<IWDG::IWDG_RELV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IWDG_RELVPack  = Register<0x40003008, 32, ReadWriteMode, IWDGIWDG_RELVBase, T...> ;

  struct IWDGIWDG_STSBase {} ;

  struct IWDG_STS : public RegisterBase<0x4000300C, 32, ReadWriteMode>
  {
    using PVU = IWDG_IWDG_STS_PVU_Values<IWDG::IWDG_STS, 0, 1, ReadWriteMode, IWDGIWDG_STSBase> ;
    using CRVU = IWDG_IWDG_STS_CRVU_Values<IWDG::IWDG_STS, 1, 1, ReadWriteMode, IWDGIWDG_STSBase> ;
    using FieldValues = IWDG_IWDG_STS_CRVU_Values<IWDG::IWDG_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IWDG_STSPack  = Register<0x4000300C, 32, ReadWriteMode, IWDGIWDG_STSBase, T...> ;

} ;

