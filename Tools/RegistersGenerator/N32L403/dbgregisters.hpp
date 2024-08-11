/*******************************************************************************
* Filename      : dbgregisters.hpp
*
* Details       : debug support for MCU. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "dbgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DBG
{
  struct DBGDBG_IDBase {} ;

  struct DBG_ID : public RegisterBase<0xE0042000, 32, ReadWriteMode>
  {
    using REV_NUM_L = DBG_DBG_ID_REV_NUM_L_Values<DBG::DBG_ID, 0, 4, ReadWriteMode, DBGDBG_IDBase> ;
    using REV_NUM_H = DBG_DBG_ID_REV_NUM_H_Values<DBG::DBG_ID, 4, 4, ReadWriteMode, DBGDBG_IDBase> ;
    using DEV_NUM_M = DBG_DBG_ID_DEV_NUM_M_Values<DBG::DBG_ID, 8, 4, ReadWriteMode, DBGDBG_IDBase> ;
    using DEV_NUM_H = DBG_DBG_ID_DEV_NUM_H_Values<DBG::DBG_ID, 12, 4, ReadWriteMode, DBGDBG_IDBase> ;
    using FLASH = DBG_DBG_ID_FLASH_Values<DBG::DBG_ID, 16, 4, ReadWriteMode, DBGDBG_IDBase> ;
    using DEV_NUM_L = DBG_DBG_ID_DEV_NUM_L_Values<DBG::DBG_ID, 20, 4, ReadWriteMode, DBGDBG_IDBase> ;
    using SRAM = DBG_DBG_ID_SRAM_Values<DBG::DBG_ID, 28, 4, ReadWriteMode, DBGDBG_IDBase> ;
    using FieldValues = DBG_DBG_ID_SRAM_Values<DBG::DBG_ID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DBG_IDPack  = Register<0xE0042000, 32, ReadWriteMode, DBGDBG_IDBase, T...> ;

  struct DBGDBG_CTRLBase {} ;

  struct DBG_CTRL : public RegisterBase<0xE0042004, 32, ReadWriteMode>
  {
    using SLEEP = DBG_DBG_CTRL_SLEEP_Values<DBG::DBG_CTRL, 0, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using STOP = DBG_DBG_CTRL_STOP_Values<DBG::DBG_CTRL, 1, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using STDBY = DBG_DBG_CTRL_STDBY_Values<DBG::DBG_CTRL, 2, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using IWDG_STOP = DBG_DBG_CTRL_IWDG_STOP_Values<DBG::DBG_CTRL, 8, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using WWDG_STOP = DBG_DBG_CTRL_WWDG_STOP_Values<DBG::DBG_CTRL, 9, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM1_STOP = DBG_DBG_CTRL_TIM1_STOP_Values<DBG::DBG_CTRL, 10, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM2_STOP = DBG_DBG_CTRL_TIM2_STOP_Values<DBG::DBG_CTRL, 11, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM3_STOP = DBG_DBG_CTRL_TIM3_STOP_Values<DBG::DBG_CTRL, 12, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM4_STOP = DBG_DBG_CTRL_TIM4_STOP_Values<DBG::DBG_CTRL, 13, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using CAN_STOP = DBG_DBG_CTRL_CAN_STOP_Values<DBG::DBG_CTRL, 14, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using I2C1SMBUS_TIMEOUT = DBG_DBG_CTRL_I2C1SMBUS_TIMEOUT_Values<DBG::DBG_CTRL, 15, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using I2C2SMBUS_TIMEOUT = DBG_DBG_CTRL_I2C2SMBUS_TIMEOUT_Values<DBG::DBG_CTRL, 16, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM8_STOP = DBG_DBG_CTRL_TIM8_STOP_Values<DBG::DBG_CTRL, 17, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM5_STOP = DBG_DBG_CTRL_TIM5_STOP_Values<DBG::DBG_CTRL, 18, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM6_STOP = DBG_DBG_CTRL_TIM6_STOP_Values<DBG::DBG_CTRL, 19, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM7_STOP = DBG_DBG_CTRL_TIM7_STOP_Values<DBG::DBG_CTRL, 20, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using TIM9_STOP = DBG_DBG_CTRL_TIM9_STOP_Values<DBG::DBG_CTRL, 21, 1, ReadWriteMode, DBGDBG_CTRLBase> ;
    using FieldValues = DBG_DBG_CTRL_TIM9_STOP_Values<DBG::DBG_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DBG_CTRLPack  = Register<0xE0042004, 32, ReadWriteMode, DBGDBG_CTRLBase, T...> ;

} ;

