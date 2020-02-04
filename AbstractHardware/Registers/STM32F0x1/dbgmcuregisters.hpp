/*******************************************************************************
* Filename      : dbgmcuregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(DBGMCUREGISTERS_HPP)
#define DBGMCUREGISTERS_HPP

#include "dbgmcufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DBGMCU
{
  struct DBGMCUIDCODEBase {} ;

  struct IDCODE : public RegisterBase<0x40015800, 32, ReadMode>
  {
    using DEV_ID = DBGMCU_IDCODE_DEV_ID_Values<DBGMCU::IDCODE, 0, 12, ReadMode, DBGMCUIDCODEBase> ;
    using DIV_ID = DBGMCU_IDCODE_DIV_ID_Values<DBGMCU::IDCODE, 12, 4, ReadMode, DBGMCUIDCODEBase> ;
    using REV_ID = DBGMCU_IDCODE_REV_ID_Values<DBGMCU::IDCODE, 16, 16, ReadMode, DBGMCUIDCODEBase> ;
    using FieldValues = DBGMCU_IDCODE_REV_ID_Values<DBGMCU::IDCODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDCODEPack  = Register<0x40015800, 32, ReadMode, DBGMCUIDCODEBase, T...> ;

  struct DBGMCUCRBase {} ;

  struct CR : public RegisterBase<0x40015804, 32, ReadWriteMode>
  {
    using DBG_STOP = DBGMCU_CR_DBG_STOP_Values<DBGMCU::CR, 1, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBG_STANDBY = DBGMCU_CR_DBG_STANDBY_Values<DBGMCU::CR, 2, 1, ReadWriteMode, DBGMCUCRBase> ;
    using FieldValues = DBGMCU_CR_DBG_STANDBY_Values<DBGMCU::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40015804, 32, ReadWriteMode, DBGMCUCRBase, T...> ;

  struct DBGMCUAPB1_FZBase {} ;

  struct APB1_FZ : public RegisterBase<0x40015808, 32, ReadWriteMode>
  {
    using DBG_TIM2_STOP = DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values<DBGMCU::APB1_FZ, 0, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_TIM3_STOP = DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values<DBGMCU::APB1_FZ, 1, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using TIM3_counter_stopped_when_core_is_halted = DBGMCU_APB1_FZ_TIM3_counter_stopped_when_core_is_halted_Values<DBGMCU::APB1_FZ, 4, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_TIM7_STOP = DBGMCU_APB1_FZ_DBG_TIM7_STOP_Values<DBGMCU::APB1_FZ, 5, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_TIM14_STOP = DBGMCU_APB1_FZ_DBG_TIM14_STOP_Values<DBGMCU::APB1_FZ, 8, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_RTC_STOP = DBGMCU_APB1_FZ_DBG_RTC_STOP_Values<DBGMCU::APB1_FZ, 10, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_WWDG_STOP = DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values<DBGMCU::APB1_FZ, 11, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_IWDG_STOP = DBGMCU_APB1_FZ_DBG_IWDG_STOP_Values<DBGMCU::APB1_FZ, 12, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_I2C1_SMBUS_TIMEOUT = DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values<DBGMCU::APB1_FZ, 21, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using DBG_CAN_STOP = DBGMCU_APB1_FZ_DBG_CAN_STOP_Values<DBGMCU::APB1_FZ, 25, 1, ReadWriteMode, DBGMCUAPB1_FZBase> ;
    using FieldValues = DBGMCU_APB1_FZ_DBG_CAN_STOP_Values<DBGMCU::APB1_FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1_FZPack  = Register<0x40015808, 32, ReadWriteMode, DBGMCUAPB1_FZBase, T...> ;

  struct DBGMCUAPB2_FZBase {} ;

  struct APB2_FZ : public RegisterBase<0x4001580C, 32, ReadWriteMode>
  {
    using DBG_TIM1_STOP = DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values<DBGMCU::APB2_FZ, 11, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM15_STOP = DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values<DBGMCU::APB2_FZ, 16, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM16_STOP = DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values<DBGMCU::APB2_FZ, 17, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM17_STOP = DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values<DBGMCU::APB2_FZ, 18, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using FieldValues = DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values<DBGMCU::APB2_FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2_FZPack  = Register<0x4001580C, 32, ReadWriteMode, DBGMCUAPB2_FZBase, T...> ;

} ;

#endif //#if !defined(DBGMCUREGISTERS_HPP)
