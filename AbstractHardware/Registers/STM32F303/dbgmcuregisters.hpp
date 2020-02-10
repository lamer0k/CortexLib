/*******************************************************************************
* Filename      : dbgmcuregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 STM32F303 device.
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

  struct IDCODE : public RegisterBase<0xE0042000, 32, ReadMode>
  {
    using DEV_ID = DBGMCU_IDCODE_DEV_ID_Values<DBGMCU::IDCODE, 0, 12, ReadMode, DBGMCUIDCODEBase> ;
    using REV_ID = DBGMCU_IDCODE_REV_ID_Values<DBGMCU::IDCODE, 16, 16, ReadMode, DBGMCUIDCODEBase> ;
    using FieldValues = DBGMCU_IDCODE_REV_ID_Values<DBGMCU::IDCODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDCODEPack  = Register<0xE0042000, 32, ReadMode, DBGMCUIDCODEBase, T...> ;

  struct DBGMCUCRBase {} ;

  struct CR : public RegisterBase<0xE0042004, 32, ReadWriteMode>
  {
    using DBG_SLEEP = DBGMCU_CR_DBG_SLEEP_Values<DBGMCU::CR, 0, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBG_STOP = DBGMCU_CR_DBG_STOP_Values<DBGMCU::CR, 1, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBG_STANDBY = DBGMCU_CR_DBG_STANDBY_Values<DBGMCU::CR, 2, 1, ReadWriteMode, DBGMCUCRBase> ;
    using TRACE_IOEN = DBGMCU_CR_TRACE_IOEN_Values<DBGMCU::CR, 5, 1, ReadWriteMode, DBGMCUCRBase> ;
    using TRACE_MODE = DBGMCU_CR_TRACE_MODE_Values<DBGMCU::CR, 6, 2, ReadWriteMode, DBGMCUCRBase> ;
    using FieldValues = DBGMCU_CR_TRACE_MODE_Values<DBGMCU::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0xE0042004, 32, ReadWriteMode, DBGMCUCRBase, T...> ;

  struct DBGMCUAPB1FZBase {} ;

  struct APB1FZ : public RegisterBase<0xE0042008, 32, ReadWriteMode>
  {
    using DBG_TIM2_STOP = DBGMCU_APB1FZ_DBG_TIM2_STOP_Values<DBGMCU::APB1FZ, 0, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM3_STOP = DBGMCU_APB1FZ_DBG_TIM3_STOP_Values<DBGMCU::APB1FZ, 1, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM4_STOP = DBGMCU_APB1FZ_DBG_TIM4_STOP_Values<DBGMCU::APB1FZ, 2, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM5_STOP = DBGMCU_APB1FZ_DBG_TIM5_STOP_Values<DBGMCU::APB1FZ, 3, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM6_STOP = DBGMCU_APB1FZ_DBG_TIM6_STOP_Values<DBGMCU::APB1FZ, 4, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM7_STOP = DBGMCU_APB1FZ_DBG_TIM7_STOP_Values<DBGMCU::APB1FZ, 5, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM12_STOP = DBGMCU_APB1FZ_DBG_TIM12_STOP_Values<DBGMCU::APB1FZ, 6, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM13_STOP = DBGMCU_APB1FZ_DBG_TIM13_STOP_Values<DBGMCU::APB1FZ, 7, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIMER14_STOP = DBGMCU_APB1FZ_DBG_TIMER14_STOP_Values<DBGMCU::APB1FZ, 8, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_TIM18_STOP = DBGMCU_APB1FZ_DBG_TIM18_STOP_Values<DBGMCU::APB1FZ, 9, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_RTC_STOP = DBGMCU_APB1FZ_DBG_RTC_STOP_Values<DBGMCU::APB1FZ, 10, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_WWDG_STOP = DBGMCU_APB1FZ_DBG_WWDG_STOP_Values<DBGMCU::APB1FZ, 11, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_IWDG_STOP = DBGMCU_APB1FZ_DBG_IWDG_STOP_Values<DBGMCU::APB1FZ, 12, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using I2C1_SMBUS_TIMEOUT = DBGMCU_APB1FZ_I2C1_SMBUS_TIMEOUT_Values<DBGMCU::APB1FZ, 21, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using I2C2_SMBUS_TIMEOUT = DBGMCU_APB1FZ_I2C2_SMBUS_TIMEOUT_Values<DBGMCU::APB1FZ, 22, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using DBG_CAN_STOP = DBGMCU_APB1FZ_DBG_CAN_STOP_Values<DBGMCU::APB1FZ, 25, 1, ReadWriteMode, DBGMCUAPB1FZBase> ;
    using FieldValues = DBGMCU_APB1FZ_DBG_CAN_STOP_Values<DBGMCU::APB1FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1FZPack  = Register<0xE0042008, 32, ReadWriteMode, DBGMCUAPB1FZBase, T...> ;

  struct DBGMCUAPB2FZBase {} ;

  struct APB2FZ : public RegisterBase<0xE004200C, 32, ReadWriteMode>
  {
    using DBG_TIM15_STOP = DBGMCU_APB2FZ_DBG_TIM15_STOP_Values<DBGMCU::APB2FZ, 2, 1, ReadWriteMode, DBGMCUAPB2FZBase> ;
    using DBG_TIM16_STOP = DBGMCU_APB2FZ_DBG_TIM16_STOP_Values<DBGMCU::APB2FZ, 3, 1, ReadWriteMode, DBGMCUAPB2FZBase> ;
    using DBG_TIM17_STO = DBGMCU_APB2FZ_DBG_TIM17_STO_Values<DBGMCU::APB2FZ, 4, 1, ReadWriteMode, DBGMCUAPB2FZBase> ;
    using DBG_TIM19_STOP = DBGMCU_APB2FZ_DBG_TIM19_STOP_Values<DBGMCU::APB2FZ, 5, 1, ReadWriteMode, DBGMCUAPB2FZBase> ;
    using FieldValues = DBGMCU_APB2FZ_DBG_TIM19_STOP_Values<DBGMCU::APB2FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2FZPack  = Register<0xE004200C, 32, ReadWriteMode, DBGMCUAPB2FZBase, T...> ;

} ;

#endif //#if !defined(DBGMCUREGISTERS_HPP)
