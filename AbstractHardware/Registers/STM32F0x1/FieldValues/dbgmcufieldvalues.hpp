/*******************************************************************************
* Filename      : dbgmcufieldvalues.hpp
*
* Details       : Enumerations related with DBGMCU peripheral. This header file
*                 is auto-generated for STM32F0x1 device.
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
struct DBGMCU_IDCODE_DIV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DBGMCU_IDCODE_DIV_ID_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_IDCODE_REV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
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
struct DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_TIM3_counter_stopped_when_core_is_halted_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_TIM3_counter_stopped_when_core_is_halted_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_TIM3_counter_stopped_when_core_is_halted_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_TIM7_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM7_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM7_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_TIM14_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM14_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_TIM14_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_RTC_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_RTC_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_RTC_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_WWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1_FZ_DBG_CAN_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1_FZ_DBG_CAN_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1_FZ_DBG_CAN_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DBGMCUENUMS_HPP)
