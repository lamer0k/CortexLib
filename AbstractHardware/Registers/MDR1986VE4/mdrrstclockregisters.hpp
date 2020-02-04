/*******************************************************************************
* Filename      : mdrrstclockregisters.hpp
*
* Details       : CLock Control. This header file is auto-generated for
*                 MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRRSTCLOCKREGISTERS_HPP)
#define MDRRSTCLOCKREGISTERS_HPP

#include "mdrrstclockfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_RST_CLOCK
{
  struct MDR_RST_CLOCKCLOCK_STATUSBase {} ;

  struct CLOCK_STATUS : public RegisterBase<0x40020000, 32, ReadMode>
  {
    using PLL_CPU_RDY = MDR_RST_CLOCK_CLOCK_STATUS_PLL_CPU_RDY_Values<MDR_RST_CLOCK::CLOCK_STATUS, 1, 1, ReadMode, MDR_RST_CLOCKCLOCK_STATUSBase> ;
    using HSE_RDY = MDR_RST_CLOCK_CLOCK_STATUS_HSE_RDY_Values<MDR_RST_CLOCK::CLOCK_STATUS, 2, 1, ReadMode, MDR_RST_CLOCKCLOCK_STATUSBase> ;
    using FieldValues = MDR_RST_CLOCK_CLOCK_STATUS_HSE_RDY_Values<MDR_RST_CLOCK::CLOCK_STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLOCK_STATUSPack  = Register<0x40020000, 32, ReadMode, MDR_RST_CLOCKCLOCK_STATUSBase, T...> ;

  struct MDR_RST_CLOCKPLL_CONTROLBase {} ;

  struct PLL_CONTROL : public RegisterBase<0x40020004, 32, ReadWriteMode>
  {
    using PLL_CPU_ON = MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_ON_Values<MDR_RST_CLOCK::PLL_CONTROL, 2, 1, ReadWriteMode, MDR_RST_CLOCKPLL_CONTROLBase> ;
    using PLL_CPU_PLD = MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_PLD_Values<MDR_RST_CLOCK::PLL_CONTROL, 3, 1, ReadWriteMode, MDR_RST_CLOCKPLL_CONTROLBase> ;
    using PLL_CPU_MUL = MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values<MDR_RST_CLOCK::PLL_CONTROL, 8, 4, ReadWriteMode, MDR_RST_CLOCKPLL_CONTROLBase> ;
    using FieldValues = MDR_RST_CLOCK_PLL_CONTROL_PLL_CPU_MUL_Values<MDR_RST_CLOCK::PLL_CONTROL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLL_CONTROLPack  = Register<0x40020004, 32, ReadWriteMode, MDR_RST_CLOCKPLL_CONTROLBase, T...> ;

  struct MDR_RST_CLOCKHS_CONTROLBase {} ;

  struct HS_CONTROL : public RegisterBase<0x40020008, 32, ReadWriteMode>
  {
    using HSE_ON = MDR_RST_CLOCK_HS_CONTROL_HSE_ON_Values<MDR_RST_CLOCK::HS_CONTROL, 0, 1, ReadWriteMode, MDR_RST_CLOCKHS_CONTROLBase> ;
    using HSE_BYP = MDR_RST_CLOCK_HS_CONTROL_HSE_BYP_Values<MDR_RST_CLOCK::HS_CONTROL, 1, 1, ReadWriteMode, MDR_RST_CLOCKHS_CONTROLBase> ;
    using FieldValues = MDR_RST_CLOCK_HS_CONTROL_HSE_BYP_Values<MDR_RST_CLOCK::HS_CONTROL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HS_CONTROLPack  = Register<0x40020008, 32, ReadWriteMode, MDR_RST_CLOCKHS_CONTROLBase, T...> ;

  struct MDR_RST_CLOCKCPU_CLOCKBase {} ;

  struct CPU_CLOCK : public RegisterBase<0x4002000C, 32, ReadWriteMode>
  {
    using CPU_C1_SEL = MDR_RST_CLOCK_CPU_CLOCK_CPU_C1_SEL_Values<MDR_RST_CLOCK::CPU_CLOCK, 0, 2, ReadWriteMode, MDR_RST_CLOCKCPU_CLOCKBase> ;
    using CPU_C2_SEL = MDR_RST_CLOCK_CPU_CLOCK_CPU_C2_SEL_Values<MDR_RST_CLOCK::CPU_CLOCK, 2, 1, ReadWriteMode, MDR_RST_CLOCKCPU_CLOCKBase> ;
    using CPU_C3_SEL = MDR_RST_CLOCK_CPU_CLOCK_CPU_C3_SEL_Values<MDR_RST_CLOCK::CPU_CLOCK, 4, 4, ReadWriteMode, MDR_RST_CLOCKCPU_CLOCKBase> ;
    using HCLK_SEL = MDR_RST_CLOCK_CPU_CLOCK_HCLK_SEL_Values<MDR_RST_CLOCK::CPU_CLOCK, 8, 2, ReadWriteMode, MDR_RST_CLOCKCPU_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_CPU_CLOCK_HCLK_SEL_Values<MDR_RST_CLOCK::CPU_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPU_CLOCKPack  = Register<0x4002000C, 32, ReadWriteMode, MDR_RST_CLOCKCPU_CLOCKBase, T...> ;

  struct MDR_RST_CLOCKPER1_CLOCKBase {} ;

  struct PER1_CLOCK : public RegisterBase<0x40020010, 32, ReadWriteMode>
  {
    using PER1_C1_SEL = MDR_RST_CLOCK_PER1_CLOCK_PER1_C1_SEL_Values<MDR_RST_CLOCK::PER1_CLOCK, 0, 2, ReadWriteMode, MDR_RST_CLOCKPER1_CLOCKBase> ;
    using PER1_C2_SEL = MDR_RST_CLOCK_PER1_CLOCK_PER1_C2_SEL_Values<MDR_RST_CLOCK::PER1_CLOCK, 2, 2, ReadWriteMode, MDR_RST_CLOCKPER1_CLOCKBase> ;
    using DEBUG_EN = MDR_RST_CLOCK_PER1_CLOCK_DEBUG_EN_Values<MDR_RST_CLOCK::PER1_CLOCK, 4, 1, ReadWriteMode, MDR_RST_CLOCKPER1_CLOCKBase> ;
    using DMA_EN = MDR_RST_CLOCK_PER1_CLOCK_DMA_EN_Values<MDR_RST_CLOCK::PER1_CLOCK, 5, 1, ReadWriteMode, MDR_RST_CLOCKPER1_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_PER1_CLOCK_DMA_EN_Values<MDR_RST_CLOCK::PER1_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PER1_CLOCKPack  = Register<0x40020010, 32, ReadWriteMode, MDR_RST_CLOCKPER1_CLOCKBase, T...> ;

  struct MDR_RST_CLOCKADC_CLOCKBase {} ;

  struct ADC_CLOCK : public RegisterBase<0x40020014, 32, ReadWriteMode>
  {
    using ADC_C1_SEL = MDR_RST_CLOCK_ADC_CLOCK_ADC_C1_SEL_Values<MDR_RST_CLOCK::ADC_CLOCK, 0, 2, ReadWriteMode, MDR_RST_CLOCKADC_CLOCKBase> ;
    using ADCIU_C1_SEL = MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C1_SEL_Values<MDR_RST_CLOCK::ADC_CLOCK, 2, 2, ReadWriteMode, MDR_RST_CLOCKADC_CLOCKBase> ;
    using ADC_C3_SEL = MDR_RST_CLOCK_ADC_CLOCK_ADC_C3_SEL_Values<MDR_RST_CLOCK::ADC_CLOCK, 4, 4, ReadWriteMode, MDR_RST_CLOCKADC_CLOCKBase> ;
    using ADCIU_C3_SEL = MDR_RST_CLOCK_ADC_CLOCK_ADCIU_C3_SEL_Values<MDR_RST_CLOCK::ADC_CLOCK, 8, 4, ReadWriteMode, MDR_RST_CLOCKADC_CLOCKBase> ;
    using ADCIU_CLK_EN = MDR_RST_CLOCK_ADC_CLOCK_ADCIU_CLK_EN_Values<MDR_RST_CLOCK::ADC_CLOCK, 12, 1, ReadWriteMode, MDR_RST_CLOCKADC_CLOCKBase> ;
    using ADC_CLK_EN = MDR_RST_CLOCK_ADC_CLOCK_ADC_CLK_EN_Values<MDR_RST_CLOCK::ADC_CLOCK, 13, 1, ReadWriteMode, MDR_RST_CLOCKADC_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_ADC_CLOCK_ADC_CLK_EN_Values<MDR_RST_CLOCK::ADC_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC_CLOCKPack  = Register<0x40020014, 32, ReadWriteMode, MDR_RST_CLOCKADC_CLOCKBase, T...> ;

  struct MDR_RST_CLOCKRTC_CLOCKBase {} ;

  struct RTC_CLOCK : public RegisterBase<0x40020018, 32, ReadWriteMode>
  {
    using HSE_SEL = MDR_RST_CLOCK_RTC_CLOCK_HSE_SEL_Values<MDR_RST_CLOCK::RTC_CLOCK, 0, 4, ReadWriteMode, MDR_RST_CLOCKRTC_CLOCKBase> ;
    using HSI_SEL = MDR_RST_CLOCK_RTC_CLOCK_HSI_SEL_Values<MDR_RST_CLOCK::RTC_CLOCK, 4, 4, ReadWriteMode, MDR_RST_CLOCKRTC_CLOCKBase> ;
    using HSE_RTC_EN = MDR_RST_CLOCK_RTC_CLOCK_HSE_RTC_EN_Values<MDR_RST_CLOCK::RTC_CLOCK, 8, 1, ReadWriteMode, MDR_RST_CLOCKRTC_CLOCKBase> ;
    using HSI_RTC_EN = MDR_RST_CLOCK_RTC_CLOCK_HSI_RTC_EN_Values<MDR_RST_CLOCK::RTC_CLOCK, 9, 1, ReadWriteMode, MDR_RST_CLOCKRTC_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_RTC_CLOCK_HSI_RTC_EN_Values<MDR_RST_CLOCK::RTC_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_CLOCKPack  = Register<0x40020018, 32, ReadWriteMode, MDR_RST_CLOCKRTC_CLOCKBase, T...> ;

  struct MDR_RST_CLOCKPER2_CLOCKBase {} ;

  struct PER2_CLOCK : public RegisterBase<0x4002001C, 32, ReadWriteMode>
  {
    using SPI1_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_SPI1_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 0, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using UART1_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_UART1_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 1, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using UART2_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_UART2_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 2, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using EEPROM_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_EEPROM_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 3, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using RST_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_RST_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 4, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using DMA_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_DMA_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 5, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using CMP_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_CMP_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 6, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using DAC_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_DAC_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 7, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using ADC_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_ADC_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 8, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using WWDT_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_WWDT_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 9, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using IWDT_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_IWDT_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 10, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using PWR_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_PWR_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 11, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using BKP_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_BKP_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 12, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using ADCIU_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_ADCIU_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 13, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using TIMER1_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_TIMER1_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 14, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using TIMER2_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_TIMER2_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 15, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using PORTA_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_PORTA_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 16, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using PORTB_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_PORTB_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 17, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using PORTC_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_PORTC_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 18, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using CRC_CLK_EN = MDR_RST_CLOCK_PER2_CLOCK_CRC_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 19, 1, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_PER2_CLOCK_CRC_CLK_EN_Values<MDR_RST_CLOCK::PER2_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PER2_CLOCKPack  = Register<0x4002001C, 32, ReadWriteMode, MDR_RST_CLOCKPER2_CLOCKBase, T...> ;

  struct MDR_RST_CLOCKTIM_CLOCKBase {} ;

  struct TIM_CLOCK : public RegisterBase<0x40020024, 32, ReadWriteMode>
  {
    using TIM1_BRG = MDR_RST_CLOCK_TIM_CLOCK_TIM1_BRG_Values<MDR_RST_CLOCK::TIM_CLOCK, 0, 3, ReadWriteMode, MDR_RST_CLOCKTIM_CLOCKBase> ;
    using TIM2_BRG = MDR_RST_CLOCK_TIM_CLOCK_TIM2_BRG_Values<MDR_RST_CLOCK::TIM_CLOCK, 8, 3, ReadWriteMode, MDR_RST_CLOCKTIM_CLOCKBase> ;
    using TIM1_CLK_EN = MDR_RST_CLOCK_TIM_CLOCK_TIM1_CLK_EN_Values<MDR_RST_CLOCK::TIM_CLOCK, 24, 1, ReadWriteMode, MDR_RST_CLOCKTIM_CLOCKBase> ;
    using TIM2_CLK_EN = MDR_RST_CLOCK_TIM_CLOCK_TIM2_CLK_EN_Values<MDR_RST_CLOCK::TIM_CLOCK, 25, 1, ReadWriteMode, MDR_RST_CLOCKTIM_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_TIM_CLOCK_TIM2_CLK_EN_Values<MDR_RST_CLOCK::TIM_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIM_CLOCKPack  = Register<0x40020024, 32, ReadWriteMode, MDR_RST_CLOCKTIM_CLOCKBase, T...> ;

  struct MDR_RST_CLOCKUART_CLOCKBase {} ;

  struct UART_CLOCK : public RegisterBase<0x40020028, 32, ReadWriteMode>
  {
    using UART1_BRG = MDR_RST_CLOCK_UART_CLOCK_UART1_BRG_Values<MDR_RST_CLOCK::UART_CLOCK, 0, 3, ReadWriteMode, MDR_RST_CLOCKUART_CLOCKBase> ;
    using UART2_BRG = MDR_RST_CLOCK_UART_CLOCK_UART2_BRG_Values<MDR_RST_CLOCK::UART_CLOCK, 8, 3, ReadWriteMode, MDR_RST_CLOCKUART_CLOCKBase> ;
    using UART1_CLK_EN = MDR_RST_CLOCK_UART_CLOCK_UART1_CLK_EN_Values<MDR_RST_CLOCK::UART_CLOCK, 24, 1, ReadWriteMode, MDR_RST_CLOCKUART_CLOCKBase> ;
    using UART2_CLK_EN = MDR_RST_CLOCK_UART_CLOCK_UART2_CLK_EN_Values<MDR_RST_CLOCK::UART_CLOCK, 25, 1, ReadWriteMode, MDR_RST_CLOCKUART_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_UART_CLOCK_UART2_CLK_EN_Values<MDR_RST_CLOCK::UART_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UART_CLOCKPack  = Register<0x40020028, 32, ReadWriteMode, MDR_RST_CLOCKUART_CLOCKBase, T...> ;

  struct MDR_RST_CLOCKSSP_CLOCKBase {} ;

  struct SSP_CLOCK : public RegisterBase<0x4002002C, 32, ReadWriteMode>
  {
    using SSP1_BRG = MDR_RST_CLOCK_SSP_CLOCK_SSP1_BRG_Values<MDR_RST_CLOCK::SSP_CLOCK, 0, 3, ReadWriteMode, MDR_RST_CLOCKSSP_CLOCKBase> ;
    using SSP1_CLK_EN = MDR_RST_CLOCK_SSP_CLOCK_SSP1_CLK_EN_Values<MDR_RST_CLOCK::SSP_CLOCK, 24, 1, ReadWriteMode, MDR_RST_CLOCKSSP_CLOCKBase> ;
    using FieldValues = MDR_RST_CLOCK_SSP_CLOCK_SSP1_CLK_EN_Values<MDR_RST_CLOCK::SSP_CLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SSP_CLOCKPack  = Register<0x4002002C, 32, ReadWriteMode, MDR_RST_CLOCKSSP_CLOCKBase, T...> ;

} ;

#endif //#if !defined(MDRRSTCLOCKREGISTERS_HPP)
