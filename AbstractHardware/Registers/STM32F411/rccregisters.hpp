/*******************************************************************************
* Filename      : rccregisters.hpp
*
* Details       : Reset and clock control. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(RCCREGISTERS_HPP)
#define RCCREGISTERS_HPP

#include "rccfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RCC
{
  struct RCCCRBase {} ;

  struct CR : public RegisterBase<0x40023800, 32, ReadWriteMode>
  {
    using PLLI2SRDY = RCC_CR_PLLISRDY_Values<RCC::CR, 27, 1, ReadMode, RCCCRBase> ;
    using PLLI2SON = RCC_CR_PLLISON_Values<RCC::CR, 26, 1, ReadWriteMode, RCCCRBase> ;
    using PLLRDY = RCC_CR_PLLRDY_Values<RCC::CR, 25, 1, ReadMode, RCCCRBase> ;
    using PLLON = RCC_CR_PLLON_Values<RCC::CR, 24, 1, ReadWriteMode, RCCCRBase> ;
    using CSSON = RCC_CR_CSSON_Values<RCC::CR, 19, 1, ReadWriteMode, RCCCRBase> ;
    using HSEBYP = RCC_CR_HSEBYP_Values<RCC::CR, 18, 1, ReadWriteMode, RCCCRBase> ;
    using HSERDY = RCC_CR_HSERDY_Values<RCC::CR, 17, 1, ReadMode, RCCCRBase> ;
    using HSEON = RCC_CR_HSEON_Values<RCC::CR, 16, 1, ReadWriteMode, RCCCRBase> ;
    using HSICAL = RCC_CR_HSICAL_Values<RCC::CR, 8, 8, ReadMode, RCCCRBase> ;
    using HSITRIM = RCC_CR_HSITRIM_Values<RCC::CR, 3, 5, ReadWriteMode, RCCCRBase> ;
    using HSIRDY = RCC_CR_HSIRDY_Values<RCC::CR, 1, 1, ReadMode, RCCCRBase> ;
    using HSION = RCC_CR_HSION_Values<RCC::CR, 0, 1, ReadWriteMode, RCCCRBase> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40023800, 32, ReadWriteMode, RCCCRBase, T...> ;

  struct RCCPLLCFGRBase {} ;

  struct PLLCFGR : public RegisterBase<0x40023804, 32, ReadWriteMode>
  {
    using PLLQ3 = RCC_PLLCFGR_PLLQ_Values<RCC::PLLCFGR, 27, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLQ2 = RCC_PLLCFGR_PLLQ_Values<RCC::PLLCFGR, 26, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLQ1 = RCC_PLLCFGR_PLLQ_Values<RCC::PLLCFGR, 25, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLQ0 = RCC_PLLCFGR_PLLQ_Values<RCC::PLLCFGR, 24, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLSRC = RCC_PLLCFGR_PLLSRC_Values<RCC::PLLCFGR, 22, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLP1 = RCC_PLLCFGR_PLLP_Values<RCC::PLLCFGR, 17, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLP0 = RCC_PLLCFGR_PLLP_Values<RCC::PLLCFGR, 16, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN8 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 14, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN7 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 13, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN6 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 12, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN5 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 11, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN4 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 10, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN3 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 9, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN2 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 8, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN1 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 7, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN0 = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 6, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM5 = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 5, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM4 = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 4, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM3 = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 3, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM2 = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 2, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM1 = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 1, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM0 = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 0, 1, ReadWriteMode, RCCPLLCFGRBase> ;
  } ;

  template<typename... T> 
  using PLLCFGRPack  = Register<0x40023804, 32, ReadWriteMode, RCCPLLCFGRBase, T...> ;

  struct RCCCFGRBase {} ;

  struct CFGR : public RegisterBase<0x40023808, 32, ReadWriteMode>
  {
    using MCO2 = RCC_CFGR_MCO_Values<RCC::CFGR, 30, 2, ReadWriteMode, RCCCFGRBase> ;
    using MCO2PRE = RCC_CFGR_MCOPRE_Values<RCC::CFGR, 27, 3, ReadWriteMode, RCCCFGRBase> ;
    using MCO1PRE = RCC_CFGR_MCOPRE_Values<RCC::CFGR, 24, 3, ReadWriteMode, RCCCFGRBase> ;
    using I2SSRC = RCC_CFGR_ISSRC_Values<RCC::CFGR, 23, 1, ReadWriteMode, RCCCFGRBase> ;
    using MCO1 = RCC_CFGR_MCO_Values<RCC::CFGR, 21, 2, ReadWriteMode, RCCCFGRBase> ;
    using RTCPRE = RCC_CFGR_RTCPRE_Values<RCC::CFGR, 16, 5, ReadWriteMode, RCCCFGRBase> ;
    using PPRE2 = RCC_CFGR_PPRE_Values<RCC::CFGR, 13, 3, ReadWriteMode, RCCCFGRBase> ;
    using PPRE1 = RCC_CFGR_PPRE_Values<RCC::CFGR, 10, 3, ReadWriteMode, RCCCFGRBase> ;
    using HPRE = RCC_CFGR_HPRE_Values<RCC::CFGR, 4, 4, ReadWriteMode, RCCCFGRBase> ;
    using SWS1 = RCC_CFGR_SWS_Values<RCC::CFGR, 3, 1, ReadMode, RCCCFGRBase> ;
    using SWS0 = RCC_CFGR_SWS_Values<RCC::CFGR, 2, 1, ReadMode, RCCCFGRBase> ;
    using SW1 = RCC_CFGR_SW_Values<RCC::CFGR, 1, 1, ReadWriteMode, RCCCFGRBase> ;
    using SW0 = RCC_CFGR_SW_Values<RCC::CFGR, 0, 1, ReadWriteMode, RCCCFGRBase> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x40023808, 32, ReadWriteMode, RCCCFGRBase, T...> ;

  struct RCCCIRBase {} ;

  struct CIR : public RegisterBase<0x4002380C, 32, ReadWriteMode>
  {
    using CSSC = RCC_CIR_CSSC_Values<RCC::CIR, 23, 1, WriteMode, RCCCIRBase> ;
    using PLLI2SRDYC = RCC_CIR_PLLISRDYC_Values<RCC::CIR, 21, 1, WriteMode, RCCCIRBase> ;
    using PLLRDYC = RCC_CIR_PLLRDYC_Values<RCC::CIR, 20, 1, WriteMode, RCCCIRBase> ;
    using HSERDYC = RCC_CIR_HSERDYC_Values<RCC::CIR, 19, 1, WriteMode, RCCCIRBase> ;
    using HSIRDYC = RCC_CIR_HSIRDYC_Values<RCC::CIR, 18, 1, WriteMode, RCCCIRBase> ;
    using LSERDYC = RCC_CIR_LSERDYC_Values<RCC::CIR, 17, 1, WriteMode, RCCCIRBase> ;
    using LSIRDYC = RCC_CIR_LSIRDYC_Values<RCC::CIR, 16, 1, WriteMode, RCCCIRBase> ;
    using PLLI2SRDYIE = RCC_CIR_PLLISRDYIE_Values<RCC::CIR, 13, 1, ReadWriteMode, RCCCIRBase> ;
    using PLLRDYIE = RCC_CIR_PLLRDYIE_Values<RCC::CIR, 12, 1, ReadWriteMode, RCCCIRBase> ;
    using HSERDYIE = RCC_CIR_HSERDYIE_Values<RCC::CIR, 11, 1, ReadWriteMode, RCCCIRBase> ;
    using HSIRDYIE = RCC_CIR_HSIRDYIE_Values<RCC::CIR, 10, 1, ReadWriteMode, RCCCIRBase> ;
    using LSERDYIE = RCC_CIR_LSERDYIE_Values<RCC::CIR, 9, 1, ReadWriteMode, RCCCIRBase> ;
    using LSIRDYIE = RCC_CIR_LSIRDYIE_Values<RCC::CIR, 8, 1, ReadWriteMode, RCCCIRBase> ;
    using CSSF = RCC_CIR_CSSF_Values<RCC::CIR, 7, 1, ReadMode, RCCCIRBase> ;
    using PLLI2SRDYF = RCC_CIR_PLLISRDYF_Values<RCC::CIR, 5, 1, ReadMode, RCCCIRBase> ;
    using PLLRDYF = RCC_CIR_PLLRDYF_Values<RCC::CIR, 4, 1, ReadMode, RCCCIRBase> ;
    using HSERDYF = RCC_CIR_HSERDYF_Values<RCC::CIR, 3, 1, ReadMode, RCCCIRBase> ;
    using HSIRDYF = RCC_CIR_HSIRDYF_Values<RCC::CIR, 2, 1, ReadMode, RCCCIRBase> ;
    using LSERDYF = RCC_CIR_LSERDYF_Values<RCC::CIR, 1, 1, ReadMode, RCCCIRBase> ;
    using LSIRDYF = RCC_CIR_LSIRDYF_Values<RCC::CIR, 0, 1, ReadMode, RCCCIRBase> ;
  } ;

  template<typename... T> 
  using CIRPack  = Register<0x4002380C, 32, ReadWriteMode, RCCCIRBase, T...> ;

  struct RCCAHB1RSTRBase {} ;

  struct AHB1RSTR : public RegisterBase<0x40023810, 32, ReadWriteMode>
  {
    using DMA2RST = RCC_AHBRSTR_DMARST_Values<RCC::AHB1RSTR, 22, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using DMA1RST = RCC_AHBRSTR_DMARST_Values<RCC::AHB1RSTR, 21, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using CRCRST = RCC_AHBRSTR_CRCRST_Values<RCC::AHB1RSTR, 12, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using GPIOHRST = RCC_AHBRSTR_GPIOHRST_Values<RCC::AHB1RSTR, 7, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using GPIOERST = RCC_AHBRSTR_GPIOERST_Values<RCC::AHB1RSTR, 4, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using GPIODRST = RCC_AHBRSTR_GPIODRST_Values<RCC::AHB1RSTR, 3, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using GPIOCRST = RCC_AHBRSTR_GPIOCRST_Values<RCC::AHB1RSTR, 2, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using GPIOBRST = RCC_AHBRSTR_GPIOBRST_Values<RCC::AHB1RSTR, 1, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using GPIOARST = RCC_AHBRSTR_GPIOARST_Values<RCC::AHB1RSTR, 0, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
  } ;

  template<typename... T> 
  using AHB1RSTRPack  = Register<0x40023810, 32, ReadWriteMode, RCCAHB1RSTRBase, T...> ;

  struct RCCAHB2RSTRBase {} ;

  struct AHB2RSTR : public RegisterBase<0x40023814, 32, ReadWriteMode>
  {
    using OTGFSRST = RCC_AHBRSTR_OTGFSRST_Values<RCC::AHB2RSTR, 7, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
  } ;

  template<typename... T> 
  using AHB2RSTRPack  = Register<0x40023814, 32, ReadWriteMode, RCCAHB2RSTRBase, T...> ;

  struct RCCAPB1RSTRBase {} ;

  struct APB1RSTR : public RegisterBase<0x40023820, 32, ReadWriteMode>
  {
    using PWRRST = RCC_APBRSTR_PWRRST_Values<RCC::APB1RSTR, 28, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using I2C3RST = RCC_APBRSTR_ICRST_Values<RCC::APB1RSTR, 23, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using I2C2RST = RCC_APBRSTR_ICRST_Values<RCC::APB1RSTR, 22, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using I2C1RST = RCC_APBRSTR_ICRST_Values<RCC::APB1RSTR, 21, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using UART2RST = RCC_APBRSTR_UARTRST_Values<RCC::APB1RSTR, 17, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using SPI3RST = RCC_APBRSTR_SPIRST_Values<RCC::APB1RSTR, 15, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using SPI2RST = RCC_APBRSTR_SPIRST_Values<RCC::APB1RSTR, 14, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using WWDGRST = RCC_APBRSTR_WWDGRST_Values<RCC::APB1RSTR, 11, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using TIM5RST = RCC_APBRSTR_TIMRST_Values<RCC::APB1RSTR, 3, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using TIM4RST = RCC_APBRSTR_TIMRST_Values<RCC::APB1RSTR, 2, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using TIM3RST = RCC_APBRSTR_TIMRST_Values<RCC::APB1RSTR, 1, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
    using TIM2RST = RCC_APBRSTR_TIMRST_Values<RCC::APB1RSTR, 0, 1, ReadWriteMode, RCCAPB1RSTRBase> ;
  } ;

  template<typename... T> 
  using APB1RSTRPack  = Register<0x40023820, 32, ReadWriteMode, RCCAPB1RSTRBase, T...> ;

  struct RCCAPB2RSTRBase {} ;

  struct APB2RSTR : public RegisterBase<0x40023824, 32, ReadWriteMode>
  {
    using TIM11RST = RCC_APBRSTR_TIMRST_Values<RCC::APB2RSTR, 18, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM10RST = RCC_APBRSTR_TIMRST_Values<RCC::APB2RSTR, 17, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM9RST = RCC_APBRSTR_TIMRST_Values<RCC::APB2RSTR, 16, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SYSCFGRST = RCC_APBRSTR_SYSCFGRST_Values<RCC::APB2RSTR, 14, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SPI1RST = RCC_APBRSTR_SPIRST_Values<RCC::APB2RSTR, 12, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SDIORST = RCC_APBRSTR_SDIORST_Values<RCC::APB2RSTR, 11, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using ADCRST = RCC_APBRSTR_ADCRST_Values<RCC::APB2RSTR, 8, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using USART6RST = RCC_APBRSTR_USARTRST_Values<RCC::APB2RSTR, 5, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using USART1RST = RCC_APBRSTR_USARTRST_Values<RCC::APB2RSTR, 4, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM1RST = RCC_APBRSTR_TIMRST_Values<RCC::APB2RSTR, 0, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
  } ;

  template<typename... T> 
  using APB2RSTRPack  = Register<0x40023824, 32, ReadWriteMode, RCCAPB2RSTRBase, T...> ;

  struct RCCAHB1ENRBase {} ;

  struct AHB1ENR : public RegisterBase<0x40023830, 32, ReadWriteMode>
  {
    using DMA2EN = RCC_AHBENR_DMAEN_Values<RCC::AHB1ENR, 22, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using DMA1EN = RCC_AHBENR_DMAEN_Values<RCC::AHB1ENR, 21, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using CRCEN = RCC_AHBENR_CRCEN_Values<RCC::AHB1ENR, 12, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using GPIOHEN = RCC_AHBENR_GPIOHEN_Values<RCC::AHB1ENR, 7, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using GPIOEEN = RCC_AHBENR_GPIOEEN_Values<RCC::AHB1ENR, 4, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using GPIODEN = RCC_AHBENR_GPIODEN_Values<RCC::AHB1ENR, 3, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using GPIOCEN = RCC_AHBENR_GPIOCEN_Values<RCC::AHB1ENR, 2, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using GPIOBEN = RCC_AHBENR_GPIOBEN_Values<RCC::AHB1ENR, 1, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using GPIOAEN = RCC_AHBENR_GPIOAEN_Values<RCC::AHB1ENR, 0, 1, ReadWriteMode, RCCAHB1ENRBase> ;
  } ;

  template<typename... T> 
  using AHB1ENRPack  = Register<0x40023830, 32, ReadWriteMode, RCCAHB1ENRBase, T...> ;

  struct RCCAHB2ENRBase {} ;

  struct AHB2ENR : public RegisterBase<0x40023834, 32, ReadWriteMode>
  {
    using OTGFSEN = RCC_AHBENR_OTGFSEN_Values<RCC::AHB2ENR, 7, 1, ReadWriteMode, RCCAHB2ENRBase> ;
  } ;

  template<typename... T> 
  using AHB2ENRPack  = Register<0x40023834, 32, ReadWriteMode, RCCAHB2ENRBase, T...> ;

  struct RCCAPB1ENRBase {} ;

  struct APB1ENR : public RegisterBase<0x40023840, 32, ReadWriteMode>
  {
    using PWREN = RCC_APBENR_PWREN_Values<RCC::APB1ENR, 28, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using I2C3EN = RCC_APBENR_ICEN_Values<RCC::APB1ENR, 23, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using I2C2EN = RCC_APBENR_ICEN_Values<RCC::APB1ENR, 22, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using I2C1EN = RCC_APBENR_ICEN_Values<RCC::APB1ENR, 21, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using USART2EN = RCC_APBENR_USARTEN_Values<RCC::APB1ENR, 17, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using SPI3EN = RCC_APBENR_SPIEN_Values<RCC::APB1ENR, 15, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using SPI2EN = RCC_APBENR_SPIEN_Values<RCC::APB1ENR, 14, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using WWDGEN = RCC_APBENR_WWDGEN_Values<RCC::APB1ENR, 11, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using TIM5EN = RCC_APBENR_TIMEN_Values<RCC::APB1ENR, 3, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using TIM4EN = RCC_APBENR_TIMEN_Values<RCC::APB1ENR, 2, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using TIM3EN = RCC_APBENR_TIMEN_Values<RCC::APB1ENR, 1, 1, ReadWriteMode, RCCAPB1ENRBase> ;
    using TIM2EN = RCC_APBENR_TIMEN_Values<RCC::APB1ENR, 0, 1, ReadWriteMode, RCCAPB1ENRBase> ;
  } ;

  template<typename... T> 
  using APB1ENRPack  = Register<0x40023840, 32, ReadWriteMode, RCCAPB1ENRBase, T...> ;

  struct RCCAPB2ENRBase {} ;

  struct APB2ENR : public RegisterBase<0x40023844, 32, ReadWriteMode>
  {
    using TIM1EN = RCC_APBENR_TIMEN_Values<RCC::APB2ENR, 0, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using USART1EN = RCC_APBENR_USARTEN_Values<RCC::APB2ENR, 4, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using USART6EN = RCC_APBENR_USARTEN_Values<RCC::APB2ENR, 5, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using ADC1EN = RCC_APBENR_ADCEN_Values<RCC::APB2ENR, 8, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SDIOEN = RCC_APBENR_SDIOEN_Values<RCC::APB2ENR, 11, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SPI1EN = RCC_APBENR_SPIEN_Values<RCC::APB2ENR, 12, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SPI4EN = RCC_APBENR_SPIEN_Values<RCC::APB2ENR, 13, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SYSCFGEN = RCC_APBENR_SYSCFGEN_Values<RCC::APB2ENR, 14, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM9EN = RCC_APBENR_TIMEN_Values<RCC::APB2ENR, 16, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM10EN = RCC_APBENR_TIMEN_Values<RCC::APB2ENR, 17, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM11EN = RCC_APBENR_TIMEN_Values<RCC::APB2ENR, 18, 1, ReadWriteMode, RCCAPB2ENRBase> ;
  } ;

  template<typename... T> 
  using APB2ENRPack  = Register<0x40023844, 32, ReadWriteMode, RCCAPB2ENRBase, T...> ;

  struct RCCAHB1LPENRBase {} ;

  struct AHB1LPENR : public RegisterBase<0x40023850, 32, ReadWriteMode>
  {
    using DMA2LPEN = RCC_AHBLPENR_DMALPEN_Values<RCC::AHB1LPENR, 22, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using DMA1LPEN = RCC_AHBLPENR_DMALPEN_Values<RCC::AHB1LPENR, 21, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using SRAM1LPEN = RCC_AHBLPENR_SRAMLPEN_Values<RCC::AHB1LPENR, 16, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using FLITFLPEN = RCC_AHBLPENR_FLITFLPEN_Values<RCC::AHB1LPENR, 15, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using CRCLPEN = RCC_AHBLPENR_CRCLPEN_Values<RCC::AHB1LPENR, 12, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using GPIOHLPEN = RCC_AHBLPENR_GPIOHLPEN_Values<RCC::AHB1LPENR, 7, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using GPIOELPEN = RCC_AHBLPENR_GPIOELPEN_Values<RCC::AHB1LPENR, 4, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using GPIODLPEN = RCC_AHBLPENR_GPIODLPEN_Values<RCC::AHB1LPENR, 3, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using GPIOCLPEN = RCC_AHBLPENR_GPIOCLPEN_Values<RCC::AHB1LPENR, 2, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using GPIOBLPEN = RCC_AHBLPENR_GPIOBLPEN_Values<RCC::AHB1LPENR, 1, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using GPIOALPEN = RCC_AHBLPENR_GPIOALPEN_Values<RCC::AHB1LPENR, 0, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
  } ;

  template<typename... T> 
  using AHB1LPENRPack  = Register<0x40023850, 32, ReadWriteMode, RCCAHB1LPENRBase, T...> ;

  struct RCCAHB2LPENRBase {} ;

  struct AHB2LPENR : public RegisterBase<0x40023854, 32, ReadWriteMode>
  {
    using OTGFSLPEN = RCC_AHBLPENR_OTGFSLPEN_Values<RCC::AHB2LPENR, 7, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
  } ;

  template<typename... T> 
  using AHB2LPENRPack  = Register<0x40023854, 32, ReadWriteMode, RCCAHB2LPENRBase, T...> ;

  struct RCCAPB1LPENRBase {} ;

  struct APB1LPENR : public RegisterBase<0x40023860, 32, ReadWriteMode>
  {
    using PWRLPEN = RCC_APBLPENR_PWRLPEN_Values<RCC::APB1LPENR, 28, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using I2C3LPEN = RCC_APBLPENR_ICLPEN_Values<RCC::APB1LPENR, 23, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using I2C2LPEN = RCC_APBLPENR_ICLPEN_Values<RCC::APB1LPENR, 22, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using I2C1LPEN = RCC_APBLPENR_ICLPEN_Values<RCC::APB1LPENR, 21, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using USART2LPEN = RCC_APBLPENR_USARTLPEN_Values<RCC::APB1LPENR, 17, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using SPI3LPEN = RCC_APBLPENR_SPILPEN_Values<RCC::APB1LPENR, 15, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using SPI2LPEN = RCC_APBLPENR_SPILPEN_Values<RCC::APB1LPENR, 14, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using WWDGLPEN = RCC_APBLPENR_WWDGLPEN_Values<RCC::APB1LPENR, 11, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using TIM5LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB1LPENR, 3, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using TIM4LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB1LPENR, 2, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using TIM3LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB1LPENR, 1, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
    using TIM2LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB1LPENR, 0, 1, ReadWriteMode, RCCAPB1LPENRBase> ;
  } ;

  template<typename... T> 
  using APB1LPENRPack  = Register<0x40023860, 32, ReadWriteMode, RCCAPB1LPENRBase, T...> ;

  struct RCCAPB2LPENRBase {} ;

  struct APB2LPENR : public RegisterBase<0x40023864, 32, ReadWriteMode>
  {
    using TIM1LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB2LPENR, 0, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using USART1LPEN = RCC_APBLPENR_USARTLPEN_Values<RCC::APB2LPENR, 4, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using USART6LPEN = RCC_APBLPENR_USARTLPEN_Values<RCC::APB2LPENR, 5, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using ADC1LPEN = RCC_APBLPENR_ADCLPEN_Values<RCC::APB2LPENR, 8, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SDIOLPEN = RCC_APBLPENR_SDIOLPEN_Values<RCC::APB2LPENR, 11, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SPI1LPEN = RCC_APBLPENR_SPILPEN_Values<RCC::APB2LPENR, 12, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SPI4LPEN = RCC_APBLPENR_SPILPEN_Values<RCC::APB2LPENR, 13, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SYSCFGLPEN = RCC_APBLPENR_SYSCFGLPEN_Values<RCC::APB2LPENR, 14, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using TIM9LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB2LPENR, 16, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using TIM10LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB2LPENR, 17, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using TIM11LPEN = RCC_APBLPENR_TIMLPEN_Values<RCC::APB2LPENR, 18, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
  } ;

  template<typename... T> 
  using APB2LPENRPack  = Register<0x40023864, 32, ReadWriteMode, RCCAPB2LPENRBase, T...> ;

  struct RCCBDCRBase {} ;

  struct BDCR : public RegisterBase<0x40023870, 32, ReadWriteMode>
  {
    using BDRST = RCC_BDCR_BDRST_Values<RCC::BDCR, 16, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCEN = RCC_BDCR_RTCEN_Values<RCC::BDCR, 15, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCSEL1 = RCC_BDCR_RTCSEL_Values<RCC::BDCR, 9, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCSEL0 = RCC_BDCR_RTCSEL_Values<RCC::BDCR, 8, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSEBYP = RCC_BDCR_LSEBYP_Values<RCC::BDCR, 2, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSERDY = RCC_BDCR_LSERDY_Values<RCC::BDCR, 1, 1, ReadMode, RCCBDCRBase> ;
    using LSEON = RCC_BDCR_LSEON_Values<RCC::BDCR, 0, 1, ReadWriteMode, RCCBDCRBase> ;
  } ;

  template<typename... T> 
  using BDCRPack  = Register<0x40023870, 32, ReadWriteMode, RCCBDCRBase, T...> ;

  struct RCCCSRBase {} ;

  struct CSR : public RegisterBase<0x40023874, 32, ReadWriteMode>
  {
    using LPWRRSTF = RCC_CSR_LPWRRSTF_Values<RCC::CSR, 31, 1, ReadWriteMode, RCCCSRBase> ;
    using WWDGRSTF = RCC_CSR_WWDGRSTF_Values<RCC::CSR, 30, 1, ReadWriteMode, RCCCSRBase> ;
    using WDGRSTF = RCC_CSR_WDGRSTF_Values<RCC::CSR, 29, 1, ReadWriteMode, RCCCSRBase> ;
    using SFTRSTF = RCC_CSR_SFTRSTF_Values<RCC::CSR, 28, 1, ReadWriteMode, RCCCSRBase> ;
    using PORRSTF = RCC_CSR_PORRSTF_Values<RCC::CSR, 27, 1, ReadWriteMode, RCCCSRBase> ;
    using PADRSTF = RCC_CSR_PADRSTF_Values<RCC::CSR, 26, 1, ReadWriteMode, RCCCSRBase> ;
    using BORRSTF = RCC_CSR_BORRSTF_Values<RCC::CSR, 25, 1, ReadWriteMode, RCCCSRBase> ;
    using RMVF = RCC_CSR_RMVF_Values<RCC::CSR, 24, 1, ReadWriteMode, RCCCSRBase> ;
    using LSIRDY = RCC_CSR_LSIRDY_Values<RCC::CSR, 1, 1, ReadMode, RCCCSRBase> ;
    using LSION = RCC_CSR_LSION_Values<RCC::CSR, 0, 1, ReadWriteMode, RCCCSRBase> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40023874, 32, ReadWriteMode, RCCCSRBase, T...> ;

  struct RCCSSCGRBase {} ;

  struct SSCGR : public RegisterBase<0x40023880, 32, ReadWriteMode>
  {
    using SSCGEN = RCC_SSCGR_SSCGEN_Values<RCC::SSCGR, 31, 1, ReadWriteMode, RCCSSCGRBase> ;
    using SPREADSEL = RCC_SSCGR_SPREADSEL_Values<RCC::SSCGR, 30, 1, ReadWriteMode, RCCSSCGRBase> ;
    using INCSTEP = RCC_SSCGR_INCSTEP_Values<RCC::SSCGR, 13, 15, ReadWriteMode, RCCSSCGRBase> ;
    using MODPER = RCC_SSCGR_MODPER_Values<RCC::SSCGR, 0, 13, ReadWriteMode, RCCSSCGRBase> ;
  } ;

  template<typename... T> 
  using SSCGRPack  = Register<0x40023880, 32, ReadWriteMode, RCCSSCGRBase, T...> ;

  struct RCCPLLI2SCFGRBase {} ;

  struct PLLI2SCFGR : public RegisterBase<0x40023884, 32, ReadWriteMode>
  {
    using PLLI2SRx = RCC_PLLISCFGR_PLLISRx_Values<RCC::PLLI2SCFGR, 28, 3, ReadWriteMode, RCCPLLI2SCFGRBase> ;
    using PLLI2SNx = RCC_PLLISCFGR_PLLISNx_Values<RCC::PLLI2SCFGR, 6, 9, ReadWriteMode, RCCPLLI2SCFGRBase> ;
  } ;

  template<typename... T> 
  using PLLI2SCFGRPack  = Register<0x40023884, 32, ReadWriteMode, RCCPLLI2SCFGRBase, T...> ;

} ;

#endif //#if !defined(RCCREGISTERS_HPP)
