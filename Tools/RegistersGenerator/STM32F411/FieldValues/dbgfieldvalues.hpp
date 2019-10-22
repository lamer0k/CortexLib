/*******************************************************************************
* Filename      : dbgfieldvalues.hpp
*
* Details       : Enumerations related with DBG peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(DBGENUMS_HPP)
#define DBGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_IDCODE_DEV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_IDCODE_REV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_CR_DBG_SLEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_CR_DBG_SLEEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_CR_DBG_SLEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_CR_DBG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_CR_DBG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_CR_DBG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_CR_DBG_STANDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_CR_DBG_STANDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_CR_DBG_STANDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_CR_TRACE_IOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_CR_TRACE_IOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_CR_TRACE_IOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_CR_TRACE_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_CR_TRACE_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_CR_TRACE_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DBG_DBGMCU_CR_TRACE_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DBG_DBGMCU_CR_TRACE_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_TIM4_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM4_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM4_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_TIM5_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM5_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_TIM5_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_RTC_Stop_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_RTC_Stop_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_RTC_Stop_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_IWDEG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_IWDEG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_IWDEG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB2_FZ_DBG_TIM9_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM9_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM9_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB2_FZ_DBG_TIM10_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM10_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM10_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB2_FZ_DBG_TIM11_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM11_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB2_FZ_DBG_TIM11_STOP_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DBGENUMS_HPP)
