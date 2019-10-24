/*******************************************************************************
* Filename      : dbgregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 STM32F411 device.
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
  struct DBGDBGMCU_IDCODEBase {} ;

  struct DBGMCU_IDCODE : public RegisterBase<0xE0042000, 32, ReadMode>
  {
    using DEV_ID = DBG_DBGMCU_IDCODE_DEV_ID_Values<DBG::DBGMCU_IDCODE, 0, 12, ReadMode, DBGDBGMCU_IDCODEBase> ;
    using REV_ID = DBG_DBGMCU_IDCODE_REV_ID_Values<DBG::DBGMCU_IDCODE, 16, 16, ReadMode, DBGDBGMCU_IDCODEBase> ;
    using FieldValues = DBG_DBGMCU_IDCODE_REV_ID_Values<DBG::DBGMCU_IDCODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DBGMCU_IDCODEPack  = Register<0xE0042000, 32, ReadMode, DBGDBGMCU_IDCODEBase, T...> ;

  struct DBGDBGMCU_CRBase {} ;

  struct DBGMCU_CR : public RegisterBase<0xE0042004, 32, ReadWriteMode>
  {
    using DBG_SLEEP = DBG_DBGMCU_CR_DBG_SLEEP_Values<DBG::DBGMCU_CR, 0, 1, ReadWriteMode, DBGDBGMCU_CRBase> ;
    using DBG_STOP = DBG_DBGMCU_CR_DBG_STOP_Values<DBG::DBGMCU_CR, 1, 1, ReadWriteMode, DBGDBGMCU_CRBase> ;
    using DBG_STANDBY = DBG_DBGMCU_CR_DBG_STANDBY_Values<DBG::DBGMCU_CR, 2, 1, ReadWriteMode, DBGDBGMCU_CRBase> ;
    using TRACE_IOEN = DBG_DBGMCU_CR_TRACE_IOEN_Values<DBG::DBGMCU_CR, 5, 1, ReadWriteMode, DBGDBGMCU_CRBase> ;
    using TRACE_MODE = DBG_DBGMCU_CR_TRACE_MODE_Values<DBG::DBGMCU_CR, 6, 2, ReadWriteMode, DBGDBGMCU_CRBase> ;
    using FieldValues = DBG_DBGMCU_CR_TRACE_MODE_Values<DBG::DBGMCU_CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DBGMCU_CRPack  = Register<0xE0042004, 32, ReadWriteMode, DBGDBGMCU_CRBase, T...> ;

  struct DBGDBGMCU_APB1_FZBase {} ;

  struct DBGMCU_APB1_FZ : public RegisterBase<0xE0042008, 32, ReadWriteMode>
  {
    using DBG_TIM2_STOP = DBG_DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values<DBG::DBGMCU_APB1_FZ, 0, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_TIM3_STOP = DBG_DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values<DBG::DBGMCU_APB1_FZ, 1, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_TIM4_STOP = DBG_DBGMCU_APB1_FZ_DBG_TIM4_STOP_Values<DBG::DBGMCU_APB1_FZ, 2, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_TIM5_STOP = DBG_DBGMCU_APB1_FZ_DBG_TIM5_STOP_Values<DBG::DBGMCU_APB1_FZ, 3, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_RTC_Stop = DBG_DBGMCU_APB1_FZ_DBG_RTC_Stop_Values<DBG::DBGMCU_APB1_FZ, 10, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_WWDG_STOP = DBG_DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values<DBG::DBGMCU_APB1_FZ, 11, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_IWDEG_STOP = DBG_DBGMCU_APB1_FZ_DBG_IWDEG_STOP_Values<DBG::DBGMCU_APB1_FZ, 12, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_I2C1_SMBUS_TIMEOUT = DBG_DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values<DBG::DBGMCU_APB1_FZ, 21, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_I2C2_SMBUS_TIMEOUT = DBG_DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Values<DBG::DBGMCU_APB1_FZ, 22, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using DBG_I2C3SMBUS_TIMEOUT = DBG_DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT_Values<DBG::DBGMCU_APB1_FZ, 23, 1, ReadWriteMode, DBGDBGMCU_APB1_FZBase> ;
    using FieldValues = DBG_DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT_Values<DBG::DBGMCU_APB1_FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DBGMCU_APB1_FZPack  = Register<0xE0042008, 32, ReadWriteMode, DBGDBGMCU_APB1_FZBase, T...> ;

  struct DBGDBGMCU_APB2_FZBase {} ;

  struct DBGMCU_APB2_FZ : public RegisterBase<0xE004200C, 32, ReadWriteMode>
  {
    using DBG_TIM1_STOP = DBG_DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values<DBG::DBGMCU_APB2_FZ, 0, 1, ReadWriteMode, DBGDBGMCU_APB2_FZBase> ;
    using DBG_TIM9_STOP = DBG_DBGMCU_APB2_FZ_DBG_TIM9_STOP_Values<DBG::DBGMCU_APB2_FZ, 16, 1, ReadWriteMode, DBGDBGMCU_APB2_FZBase> ;
    using DBG_TIM10_STOP = DBG_DBGMCU_APB2_FZ_DBG_TIM10_STOP_Values<DBG::DBGMCU_APB2_FZ, 17, 1, ReadWriteMode, DBGDBGMCU_APB2_FZBase> ;
    using DBG_TIM11_STOP = DBG_DBGMCU_APB2_FZ_DBG_TIM11_STOP_Values<DBG::DBGMCU_APB2_FZ, 18, 1, ReadWriteMode, DBGDBGMCU_APB2_FZBase> ;
    using FieldValues = DBG_DBGMCU_APB2_FZ_DBG_TIM11_STOP_Values<DBG::DBGMCU_APB2_FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DBGMCU_APB2_FZPack  = Register<0xE004200C, 32, ReadWriteMode, DBGDBGMCU_APB2_FZBase, T...> ;

} ;

#endif //#if !defined(DBGREGISTERS_HPP)
