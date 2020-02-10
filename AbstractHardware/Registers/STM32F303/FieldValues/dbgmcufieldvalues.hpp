/*******************************************************************************
* Filename      : dbgmcufieldvalues.hpp
*
* Details       : Enumerations related with DBGMCU peripheral. This header file
*                 is auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(DBGMCUENUMS_HPP)
#define DBGMCUENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_IDCODE_DEV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_IDCODE_REV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBG_SLEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBG_SLEEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBG_SLEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBG_STANDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBG_STANDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBG_STANDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_TRACE_IOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_TRACE_IOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_TRACE_IOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_TRACE_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM4_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM4_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM4_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM5_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM5_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM5_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM6_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM6_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM6_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM7_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM7_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM7_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM12_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM12_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM12_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM13_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM13_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM13_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIMER14_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIMER14_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIMER14_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_TIM18_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_TIM18_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_TIM18_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_RTC_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_RTC_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_RTC_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_WWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_WWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_WWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_I2C1_SMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_I2C1_SMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_I2C1_SMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_I2C2_SMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_I2C2_SMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_I2C2_SMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZ_DBG_CAN_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZ_DBG_CAN_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZ_DBG_CAN_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ_DBG_TIM15_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ_DBG_TIM15_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ_DBG_TIM15_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ_DBG_TIM16_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ_DBG_TIM16_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ_DBG_TIM16_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ_DBG_TIM17_STO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ_DBG_TIM17_STO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ_DBG_TIM17_STO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ_DBG_TIM19_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ_DBG_TIM19_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ_DBG_TIM19_STOP_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DBGMCUENUMS_HPP)
