/*******************************************************************************
* Filename      : afiofieldvalues.hpp
*
* Details       : Enumerations related with AFIO peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(AFIOENUMS_HPP)
#define AFIOENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EC_EOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EC_EOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EC_EOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EC_PORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EC_PORT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EC_PORT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EC_PORT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EC_PORT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EC_PORT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EC_PORT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EC_PORT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EC_PORT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EC_PIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EC_PIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EC_PIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EC_PIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EC_PIN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EC_PIN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EC_PIN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EC_PIN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EC_PIN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EC_PIN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EC_PIN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EC_PIN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EC_PIN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EC_PIN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EC_PIN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EC_PIN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EC_PIN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_TIMER1ITI1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_TIMER1ITI1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_TIMER1ITI1_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_SPI2_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_SPI2_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_SPI2_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_SWJ_CFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_PCF0_SWJ_CFG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_CAN1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_CAN1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_CAN1_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_TIMER4CH3_IREMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_TIMER4CH3_IREMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_TIMER4CH3_IREMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_PD01_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_PD01_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_PD01_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_CAN0_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_CAN0_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_CAN0_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_PCF0_CAN0_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_PCF0_CAN0_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_TIMER3_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_TIMER3_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_TIMER3_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_TIMER2_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_TIMER2_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_TIMER2_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_PCF0_TIMER2_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_PCF0_TIMER2_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_TIMER1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_TIMER1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_TIMER1_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_PCF0_TIMER1_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_PCF0_TIMER1_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_TIMER0_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_TIMER0_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_TIMER0_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_PCF0_TIMER0_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_PCF0_TIMER0_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_USART2_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_USART2_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_USART2_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_PCF0_USART2_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_PCF0_USART2_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_USART1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_USART1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_USART1_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_USART0_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_USART0_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_USART0_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_I2C0_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_I2C0_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_I2C0_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF0_SPI0_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF0_SPI0_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF0_SPI0_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS0_EXTI3_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS0_EXTI3_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS0_EXTI2_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS0_EXTI2_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS0_EXTI1_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS0_EXTI1_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS0_EXTI0_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS0_EXTI0_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS1_EXTI7_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS1_EXTI7_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS1_EXTI6_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS1_EXTI6_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS1_EXTI5_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS1_EXTI5_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS1_EXTI4_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS1_EXTI4_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS2_EXTI11_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS2_EXTI11_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS2_EXTI10_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS2_EXTI10_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS2_EXTI9_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS2_EXTI9_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS2_EXTI8_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS2_EXTI8_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS3_EXTI15_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS3_EXTI15_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS3_EXTI14_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS3_EXTI14_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS3_EXTI13_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS3_EXTI13_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTISS3_EXTI12_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTISS3_EXTI12_SS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_PCF1_EXMC_NADV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_PCF1_EXMC_NADV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_PCF1_EXMC_NADV_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(AFIOENUMS_HPP)
