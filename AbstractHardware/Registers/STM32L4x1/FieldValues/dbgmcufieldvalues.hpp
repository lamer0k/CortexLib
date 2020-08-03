/*******************************************************************************
* Filename      : dbgmcufieldvalues.hpp
*
* Details       : Enumerations related with DBGMCU peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
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
struct DBGMCU_APB1FZR1_DBG_TIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_TIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_TIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_TIM6_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_TIM6_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_TIM6_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_TIM7_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_TIM7_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_TIM7_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_RTC_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_RTC_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_RTC_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_WWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_WWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_WWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_I2C1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_I2C2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_I2C3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_CAN_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_CAN_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_CAN_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZR_DBG_TIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZR_DBG_TIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZR_DBG_TIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZR_DBG_TIM15_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZR_DBG_TIM15_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZR_DBG_TIM15_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZR_DBG_TIM16_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZR_DBG_TIM16_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZR_DBG_TIM16_STOP_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DBGMCUENUMS_HPP)
