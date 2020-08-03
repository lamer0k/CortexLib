/*******************************************************************************
* Filename      : dbgmcuregisters.hpp
*
* Details       : MCU debug component. This header file is auto-generated for
*                 STM32L4x1 device.
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

  struct DBGMCUAPB1FZR1Base {} ;

  struct APB1FZR1 : public RegisterBase<0xE0042008, 32, ReadWriteMode>
  {
    using DBG_TIM2_STOP = DBGMCU_APB1FZR1_DBG_TIM2_STOP_Values<DBGMCU::APB1FZR1, 0, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_TIM6_STOP = DBGMCU_APB1FZR1_DBG_TIM6_STOP_Values<DBGMCU::APB1FZR1, 4, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_TIM7_STOP = DBGMCU_APB1FZR1_DBG_TIM7_STOP_Values<DBGMCU::APB1FZR1, 5, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_RTC_STOP = DBGMCU_APB1FZR1_DBG_RTC_STOP_Values<DBGMCU::APB1FZR1, 10, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_WWDG_STOP = DBGMCU_APB1FZR1_DBG_WWDG_STOP_Values<DBGMCU::APB1FZR1, 11, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_IWDG_STOP = DBGMCU_APB1FZR1_DBG_IWDG_STOP_Values<DBGMCU::APB1FZR1, 12, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_I2C1_STOP = DBGMCU_APB1FZR1_DBG_I2C1_STOP_Values<DBGMCU::APB1FZR1, 21, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_I2C2_STOP = DBGMCU_APB1FZR1_DBG_I2C2_STOP_Values<DBGMCU::APB1FZR1, 22, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_I2C3_STOP = DBGMCU_APB1FZR1_DBG_I2C3_STOP_Values<DBGMCU::APB1FZR1, 23, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_CAN_STOP = DBGMCU_APB1FZR1_DBG_CAN_STOP_Values<DBGMCU::APB1FZR1, 25, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using DBG_LPTIM1_STOP = DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values<DBGMCU::APB1FZR1, 31, 1, ReadWriteMode, DBGMCUAPB1FZR1Base> ;
    using FieldValues = DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values<DBGMCU::APB1FZR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1FZR1Pack  = Register<0xE0042008, 32, ReadWriteMode, DBGMCUAPB1FZR1Base, T...> ;

  struct DBGMCUAPB1FZR2Base {} ;

  struct APB1FZR2 : public RegisterBase<0xE004200C, 32, ReadWriteMode>
  {
    using DBG_LPTIM2_STOP = DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values<DBGMCU::APB1FZR2, 5, 1, ReadWriteMode, DBGMCUAPB1FZR2Base> ;
    using FieldValues = DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values<DBGMCU::APB1FZR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1FZR2Pack  = Register<0xE004200C, 32, ReadWriteMode, DBGMCUAPB1FZR2Base, T...> ;

  struct DBGMCUAPB2FZRBase {} ;

  struct APB2FZR : public RegisterBase<0xE0042010, 32, ReadWriteMode>
  {
    using DBG_TIM1_STOP = DBGMCU_APB2FZR_DBG_TIM1_STOP_Values<DBGMCU::APB2FZR, 11, 1, ReadWriteMode, DBGMCUAPB2FZRBase> ;
    using DBG_TIM15_STOP = DBGMCU_APB2FZR_DBG_TIM15_STOP_Values<DBGMCU::APB2FZR, 16, 1, ReadWriteMode, DBGMCUAPB2FZRBase> ;
    using DBG_TIM16_STOP = DBGMCU_APB2FZR_DBG_TIM16_STOP_Values<DBGMCU::APB2FZR, 17, 1, ReadWriteMode, DBGMCUAPB2FZRBase> ;
    using FieldValues = DBGMCU_APB2FZR_DBG_TIM16_STOP_Values<DBGMCU::APB2FZR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2FZRPack  = Register<0xE0042010, 32, ReadWriteMode, DBGMCUAPB2FZRBase, T...> ;

} ;

#endif //#if !defined(DBGMCUREGISTERS_HPP)
