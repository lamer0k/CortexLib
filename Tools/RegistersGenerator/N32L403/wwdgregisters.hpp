/*******************************************************************************
* Filename      : wwdgregisters.hpp
*
* Details       : window watchdog. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "wwdgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WWDG
{
  struct WWDGWWDG_CTRLBase {} ;

  struct WWDG_CTRL : public RegisterBase<0x40002C00, 32, ReadWriteMode>
  {
    using T = WWDG_WWDG_CTRL_T_Values<WWDG::WWDG_CTRL, 0, 7, ReadWriteMode, WWDGWWDG_CTRLBase> ;
    using ACTB = WWDG_WWDG_CTRL_ACTB_Values<WWDG::WWDG_CTRL, 7, 1, ReadWriteMode, WWDGWWDG_CTRLBase> ;
    using FieldValues = WWDG_WWDG_CTRL_ACTB_Values<WWDG::WWDG_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WWDG_CTRLPack  = Register<0x40002C00, 32, ReadWriteMode, WWDGWWDG_CTRLBase, T...> ;

  struct WWDGWWDG_CFGBase {} ;

  struct WWDG_CFG : public RegisterBase<0x40002C04, 32, ReadWriteMode>
  {
    using W = WWDG_WWDG_CFG_W_Values<WWDG::WWDG_CFG, 0, 7, ReadWriteMode, WWDGWWDG_CFGBase> ;
    using TIMERB = WWDG_WWDG_CFG_TIMERB_Values<WWDG::WWDG_CFG, 7, 2, ReadWriteMode, WWDGWWDG_CFGBase> ;
    using EWINT = WWDG_WWDG_CFG_EWINT_Values<WWDG::WWDG_CFG, 9, 1, ReadWriteMode, WWDGWWDG_CFGBase> ;
    using FieldValues = WWDG_WWDG_CFG_EWINT_Values<WWDG::WWDG_CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WWDG_CFGPack  = Register<0x40002C04, 32, ReadWriteMode, WWDGWWDG_CFGBase, T...> ;

  struct WWDGWWDG_STSBase {} ;

  struct WWDG_STS : public RegisterBase<0x40002C08, 32, ReadWriteMode>
  {
    using EWINTF = WWDG_WWDG_STS_EWINTF_Values<WWDG::WWDG_STS, 0, 1, ReadWriteMode, WWDGWWDG_STSBase> ;
    using FieldValues = WWDG_WWDG_STS_EWINTF_Values<WWDG::WWDG_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WWDG_STSPack  = Register<0x40002C08, 32, ReadWriteMode, WWDGWWDG_STSBase, T...> ;

} ;

