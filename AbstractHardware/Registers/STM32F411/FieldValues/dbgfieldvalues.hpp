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
struct DBG_DBGMCU_APB_FZ_DBG_TIM_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_TIM_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_TIM_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB_FZ_DBG_RTC_Stop_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_RTC_Stop_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_RTC_Stop_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB_FZ_DBG_WWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_WWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_WWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB_FZ_DBG_IWDEG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_IWDEG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_IWDEG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB_FZ_DBG_IC_SMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_IC_SMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_IC_SMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_DBGMCU_APB_FZ_DBG_ICSMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_ICSMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_DBGMCU_APB_FZ_DBG_ICSMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DBGENUMS_HPP)
