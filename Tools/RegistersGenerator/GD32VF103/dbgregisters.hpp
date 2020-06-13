/*******************************************************************************
* Filename      : dbgregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(DBGREGISTERS_HPP)
#define DBGREGISTERS_HPP

#include "dbgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DBG
{
  struct DBGIDBase {} ;

  struct ID : public RegisterBase<0xE0042000, 32, ReadMode>
  {
    using ID_CODE = DBG_ID_ID_CODE_Values<DBG::ID, 0, 32, ReadMode, DBGIDBase> ;
    using FieldValues = DBG_ID_ID_CODE_Values<DBG::ID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDPack  = Register<0xE0042000, 32, ReadMode, DBGIDBase, T...> ;

  struct DBGCTLBase {} ;

  struct CTL : public RegisterBase<0xE0042004, 32, ReadWriteMode>
  {
    using SLP_HOLD = DBG_CTL_SLP_HOLD_Values<DBG::CTL, 0, 1, ReadWriteMode, DBGCTLBase> ;
    using DSLP_HOLD = DBG_CTL_DSLP_HOLD_Values<DBG::CTL, 1, 1, ReadWriteMode, DBGCTLBase> ;
    using STB_HOLD = DBG_CTL_STB_HOLD_Values<DBG::CTL, 2, 1, ReadWriteMode, DBGCTLBase> ;
    using FWDGT_HOLD = DBG_CTL_FWDGT_HOLD_Values<DBG::CTL, 8, 1, ReadWriteMode, DBGCTLBase> ;
    using WWDGT_HOLD = DBG_CTL_WWDGT_HOLD_Values<DBG::CTL, 9, 1, ReadWriteMode, DBGCTLBase> ;
    using TIMER0_HOLD = DBG_CTL_TIMER0_HOLD_Values<DBG::CTL, 10, 1, ReadWriteMode, DBGCTLBase> ;
    using TIMER1_HOLD = DBG_CTL_TIMER1_HOLD_Values<DBG::CTL, 11, 1, ReadWriteMode, DBGCTLBase> ;
    using TIMER2_HOLD = DBG_CTL_TIMER2_HOLD_Values<DBG::CTL, 12, 1, ReadWriteMode, DBGCTLBase> ;
    using TIMER3_HOLD = DBG_CTL_TIMER3_HOLD_Values<DBG::CTL, 13, 1, ReadWriteMode, DBGCTLBase> ;
    using CAN0_HOLD = DBG_CTL_CAN0_HOLD_Values<DBG::CTL, 14, 1, ReadWriteMode, DBGCTLBase> ;
    using I2C0_HOLD = DBG_CTL_I2C0_HOLD_Values<DBG::CTL, 15, 1, ReadWriteMode, DBGCTLBase> ;
    using I2C1_HOLD = DBG_CTL_I2C1_HOLD_Values<DBG::CTL, 16, 1, ReadWriteMode, DBGCTLBase> ;
    using TIMER4_HOLD = DBG_CTL_TIMER4_HOLD_Values<DBG::CTL, 18, 1, ReadWriteMode, DBGCTLBase> ;
    using TIMER5_HOLD = DBG_CTL_TIMER5_HOLD_Values<DBG::CTL, 19, 1, ReadWriteMode, DBGCTLBase> ;
    using TIMER6_HOLD = DBG_CTL_TIMER6_HOLD_Values<DBG::CTL, 20, 1, ReadWriteMode, DBGCTLBase> ;
    using CAN1_HOLD = DBG_CTL_CAN1_HOLD_Values<DBG::CTL, 21, 1, ReadWriteMode, DBGCTLBase> ;
    using FieldValues = DBG_CTL_CAN1_HOLD_Values<DBG::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0xE0042004, 32, ReadWriteMode, DBGCTLBase, T...> ;

} ;

#endif //#if !defined(DBGREGISTERS_HPP)
