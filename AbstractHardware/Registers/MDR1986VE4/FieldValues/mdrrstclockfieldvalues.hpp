/*******************************************************************************
* Filename      : mdrrstclockfieldvalues.hpp
*
* Details       : Enumerations related with MDR_RST_CLOCK peripheral. This
*                 header file is auto-generated for MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRRSTCLOCKENUMS_HPP)
#define MDRRSTCLOCKENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_CLOCK_STATUS_PLL_CPU_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotReady = FieldValue<MDR_RST_CLOCK_CLOCK_STATUS_PLL_CPU_RDY_Values, BaseType, 0U> ;
  using Ready = FieldValue<MDR_RST_CLOCK_CLOCK_STATUS_PLL_CPU_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_CLOCK_STATUS_HSE_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotReady = FieldValue<MDR_RST_CLOCK_CLOCK_STATUS_HSE_RDY_Values, BaseType, 0U> ;
  using Ready = FieldValue<MDR_RST_CLOCK_CLOCK_STATUS_HSE_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_ON_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_PLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RestartOff = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_PLD_Values, BaseType, 0U> ;
  using DoRestart = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_PLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x1 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 0U> ;
  using x2 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 1U> ;
  using x3 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 2U> ;
  using x4 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 3U> ;
  using x5 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 4U> ;
  using x6 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 5U> ;
  using x7 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 6U> ;
  using x8 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 7U> ;
  using x9 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 8U> ;
  using x10 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 9U> ;
  using x11 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 10U> ;
  using x12 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 11U> ;
  using x13 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 12U> ;
  using x14 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 13U> ;
  using x15 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 14U> ;
  using x16 = FieldValue<MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_HS_CONTROL_HSE_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_HS_CONTROL_HSE_ON_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_HS_CONTROL_HSE_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_HS_CONTROL_HSE_BYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_HS_CONTROL_HSE_BYP_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_HS_CONTROL_HSE_BYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_CPU_CLOCK_CPU_C1_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSI = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C1_SEL_Values, BaseType, 0U> ;
  using HSI_2 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C1_SEL_Values, BaseType, 1U> ;
  using HSE = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C1_SEL_Values, BaseType, 2U> ;
  using HSE_2 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C1_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_CPU_CLOCK_CPU_C2_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CPU_C1 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C2_SEL_Values, BaseType, 0U> ;
  using PLLCPUo = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C2_SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, NoneU> ;
  using div2 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 8U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 9U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 10U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 11U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 12U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 13U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 14U> ;
  using div256 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_CPU_CLOCK_HCLK_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSI = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_HCLK_SEL_Values, BaseType, 0U> ;
  using CPU_C3 = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_HCLK_SEL_Values, BaseType, 1U> ;
  using LSE = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_HCLK_SEL_Values, BaseType, 2U> ;
  using LSI = FieldValue<MDR_RST_CLOCK_CPU_CLOCK_HCLK_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER1_CLOCK_PER1_C1_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LSI = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C1_SEL_Values, BaseType, 0U> ;
  using LSI_2 = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C1_SEL_Values, BaseType, 1U> ;
  using LSE = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C1_SEL_Values, BaseType, 2U> ;
  using LSE_2 = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C1_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER1_CLOCK_PER1_C2_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CPU_C1 = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C2_SEL_Values, BaseType, 0U> ;
  using PER1_C1 = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C2_SEL_Values, BaseType, 1U> ;
  using PLLCPUo = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C2_SEL_Values, BaseType, 2U> ;
  using HSI_C1 = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_PER1_C2_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER1_CLOCK_DEBUG_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_DEBUG_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_DEBUG_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER1_CLOCK_DMA_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_DMA_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER1_CLOCK_DMA_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_ADC_CLOCK_ADC_C1_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CPU_C1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C1_SEL_Values, BaseType, 0U> ;
  using PER1_C1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C1_SEL_Values, BaseType, 1U> ;
  using PLLCPUo = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C1_SEL_Values, BaseType, 2U> ;
  using HSI_C1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C1_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C1_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CPU_C1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C1_SEL_Values, BaseType, 0U> ;
  using PER1_C1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C1_SEL_Values, BaseType, 1U> ;
  using PLLCPUo = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C1_SEL_Values, BaseType, 2U> ;
  using HSI_C1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C1_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, NoneU> ;
  using div2 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 8U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 9U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 10U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 11U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 12U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 13U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 14U> ;
  using div256 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, NoneU> ;
  using div2 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 8U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 9U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 10U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 11U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 12U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 13U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 14U> ;
  using div256 = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_ADC_CLOCK_ADCIU_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADCIU_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_ADC_CLOCK_ADC_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_ADC_CLOCK_ADC_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, NoneU> ;
  using div2 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 8U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 9U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 10U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 11U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 12U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 13U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 14U> ;
  using div256 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, NoneU> ;
  using div2 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 8U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 9U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 10U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 11U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 12U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 13U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 14U> ;
  using div256 = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_RTC_CLOCK_HSE_RTC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_RTC_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSE_RTC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_RTC_CLOCK_HSI_RTC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_RTC_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_RTC_CLOCK_HSI_RTC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_SPI1_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_SPI1_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_SPI1_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_UART1_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_UART1_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_UART1_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_UART2_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_UART2_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_UART2_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_EEPROM_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_EEPROM_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_EEPROM_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_RST_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_RST_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_RST_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_DMA_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_DMA_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_DMA_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_CMP_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_CMP_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_CMP_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_DAC_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_DAC_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_DAC_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_ADC_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_ADC_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_ADC_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_WWDT_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_WWDT_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_WWDT_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_IWDT_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_IWDT_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_IWDT_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_PWR_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PWR_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PWR_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_BKP_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_BKP_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_BKP_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_ADCIU_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_ADCIU_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_ADCIU_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_TIMER1_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_TIMER1_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_TIMER1_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_TIMER2_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_TIMER2_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_TIMER2_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_PORTA_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PORTA_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PORTA_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_PORTB_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PORTB_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PORTB_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_PORTC_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PORTC_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_PORTC_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_PER2_CLOCK_CRC_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_CRC_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_PER2_CLOCK_CRC_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 0U> ;
  using div2 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 1U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 2U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 3U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 4U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 5U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 6U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 0U> ;
  using div2 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 1U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 2U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 3U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 4U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 5U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 6U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_TIM_CLOCK_TIM1_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM1_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_TIM_CLOCK_TIM2_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_TIM_CLOCK_TIM2_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 0U> ;
  using div2 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 1U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 2U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 3U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 4U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 5U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 6U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 0U> ;
  using div2 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 1U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 2U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 3U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 4U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 5U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 6U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_UART_CLOCK_UART1_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART1_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_UART_CLOCK_UART2_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_UART_CLOCK_UART2_CLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 0U> ;
  using div2 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 1U> ;
  using div4 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 2U> ;
  using div8 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 3U> ;
  using div16 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 4U> ;
  using div32 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 5U> ;
  using div64 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 6U> ;
  using div128 = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_RST_CLOCK_SSP_CLOCK_SSP1_CLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_CLK_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_RST_CLOCK_SSP_CLOCK_SSP1_CLK_EN_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRRSTCLOCKENUMS_HPP)
