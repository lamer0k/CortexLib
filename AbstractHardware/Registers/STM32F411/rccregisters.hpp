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

#include "rccbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Rcc
{
  struct Cr : public RegisterBase<0x40023800, 32, ReadWriteMode>
  {
    using Plli2Srdy = RccCrPlliSrdyValues<Rcc::Cr, 27, 1, ReadMode, RccCrPlliSrdyValuesBase> ;
    using Plli2Son = RccCrPlliSonValues<Rcc::Cr, 26, 1, ReadWriteMode, RccCrPlliSonValuesBase> ;
    using Pllrdy = RccCrPllrdyValues<Rcc::Cr, 25, 1, ReadMode, RccCrPllrdyValuesBase> ;
    using Pllon = RccCrPllonValues<Rcc::Cr, 24, 1, ReadWriteMode, RccCrPllonValuesBase> ;
    using Csson = RccCrCssonValues<Rcc::Cr, 19, 1, ReadWriteMode, RccCrCssonValuesBase> ;
    using Hsebyp = RccCrHsebypValues<Rcc::Cr, 18, 1, ReadWriteMode, RccCrHsebypValuesBase> ;
    using Hserdy = RccCrHserdyValues<Rcc::Cr, 17, 1, ReadMode, RccCrHserdyValuesBase> ;
    using Hseon = RccCrHseonValues<Rcc::Cr, 16, 1, ReadWriteMode, RccCrHseonValuesBase> ;
    using Hsical = ReadMode<Rcc::Cr, 8, 8> ;
    using Hsitrim = RccCrHsitrimValues<Rcc::Cr, 3, 5, ReadWriteMode, RccCrHsitrimValuesBase> ;
    using Hsirdy = RccCrHsirdyValues<Rcc::Cr, 1, 1, ReadMode, RccCrHsirdyValuesBase> ;
    using Hsion = RccCrHsionValues<Rcc::Cr, 0, 1, ReadWriteMode, RccCrHsionValuesBase> ;
  } ;

  template<typename... T> 
  using CrPack  = Register<0x40023800, 32, ReadWriteMode, RccCrPlliSrdyValuesBase, T...> ;

  struct Pllcfgr : public RegisterBase<0x40023804, 32, ReadWriteMode>
  {
    using Pllq3 = RccPllcfgrPllqValues<Rcc::Pllcfgr, 27, 1, ReadWriteMode, RccPllcfgrPllqValuesBase> ;
    using Pllq2 = RccPllcfgrPllqValues<Rcc::Pllcfgr, 26, 1, ReadWriteMode, RccPllcfgrPllqValuesBase> ;
    using Pllq1 = RccPllcfgrPllqValues<Rcc::Pllcfgr, 25, 1, ReadWriteMode, RccPllcfgrPllqValuesBase> ;
    using Pllq0 = RccPllcfgrPllqValues<Rcc::Pllcfgr, 24, 1, ReadWriteMode, RccPllcfgrPllqValuesBase> ;
    using Pllsrc = RccPllcfgrPllsrcValues<Rcc::Pllcfgr, 22, 1, ReadWriteMode, RccPllcfgrPllsrcValuesBase> ;
    using Pllp1 = RccPllcfgrPllpValues<Rcc::Pllcfgr, 17, 1, ReadWriteMode, RccPllcfgrPllpValuesBase> ;
    using Pllp0 = RccPllcfgrPllpValues<Rcc::Pllcfgr, 16, 1, ReadWriteMode, RccPllcfgrPllpValuesBase> ;
    using Plln8 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 14, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln7 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 13, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln6 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 12, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln5 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 11, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln4 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 10, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln3 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 9, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln2 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 8, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln1 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 7, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Plln0 = RccPllcfgrPllnValues<Rcc::Pllcfgr, 6, 1, ReadWriteMode, RccPllcfgrPllnValuesBase> ;
    using Pllm5 = RccPllcfgrPllmValues<Rcc::Pllcfgr, 5, 1, ReadWriteMode, RccPllcfgrPllmValuesBase> ;
    using Pllm4 = RccPllcfgrPllmValues<Rcc::Pllcfgr, 4, 1, ReadWriteMode, RccPllcfgrPllmValuesBase> ;
    using Pllm3 = RccPllcfgrPllmValues<Rcc::Pllcfgr, 3, 1, ReadWriteMode, RccPllcfgrPllmValuesBase> ;
    using Pllm2 = RccPllcfgrPllmValues<Rcc::Pllcfgr, 2, 1, ReadWriteMode, RccPllcfgrPllmValuesBase> ;
    using Pllm1 = RccPllcfgrPllmValues<Rcc::Pllcfgr, 1, 1, ReadWriteMode, RccPllcfgrPllmValuesBase> ;
    using Pllm0 = RccPllcfgrPllmValues<Rcc::Pllcfgr, 0, 1, ReadWriteMode, RccPllcfgrPllmValuesBase> ;
  } ;

  template<typename... T> 
  using PllcfgrPack  = Register<0x40023804, 32, ReadWriteMode, RccPllcfgrPllqValuesBase, T...> ;

  struct Cfgr : public RegisterBase<0x40023808, 32, ReadWriteMode>
  {
    using Mco2 = RccCfgrMcoValues<Rcc::Cfgr, 30, 2, ReadWriteMode, RccCfgrMcoValuesBase> ;
    using Mco2Pre = RccCfgrMcoPreValues<Rcc::Cfgr, 27, 3, ReadWriteMode, RccCfgrMcoPreValuesBase> ;
    using Mco1Pre = RccCfgrMcoPreValues<Rcc::Cfgr, 24, 3, ReadWriteMode, RccCfgrMcoPreValuesBase> ;
    using I2Ssrc = RccCfgrISsrcValues<Rcc::Cfgr, 23, 1, ReadWriteMode, RccCfgrISsrcValuesBase> ;
    using Mco1 = RccCfgrMcoValues<Rcc::Cfgr, 21, 2, ReadWriteMode, RccCfgrMcoValuesBase> ;
    using Rtcpre = RccCfgrRtcpreValues<Rcc::Cfgr, 16, 5, ReadWriteMode, RccCfgrRtcpreValuesBase> ;
    using Ppre2 = RccCfgrPpreValues<Rcc::Cfgr, 13, 3, ReadWriteMode, RccCfgrPpreValuesBase> ;
    using Ppre1 = RccCfgrPpreValues<Rcc::Cfgr, 10, 3, ReadWriteMode, RccCfgrPpreValuesBase> ;
    using Hpre = RccCfgrHpreValues<Rcc::Cfgr, 4, 4, ReadWriteMode, RccCfgrHpreValuesBase> ;
    using Sws1 = RccCfgrSwsValues<Rcc::Cfgr, 3, 1, ReadMode, RccCfgrSwsValuesBase> ;
    using Sws0 = RccCfgrSwsValues<Rcc::Cfgr, 2, 1, ReadMode, RccCfgrSwsValuesBase> ;
    using Sw1 = RccCfgrSwValues<Rcc::Cfgr, 1, 1, ReadWriteMode, RccCfgrSwValuesBase> ;
    using Sw0 = RccCfgrSwValues<Rcc::Cfgr, 0, 1, ReadWriteMode, RccCfgrSwValuesBase> ;
  } ;

  template<typename... T> 
  using CfgrPack  = Register<0x40023808, 32, ReadWriteMode, RccCfgrMcoValuesBase, T...> ;

  struct Cir : public RegisterBase<0x4002380C, 32, ReadWriteMode>
  {
    using Cssc = RccCirCsscValues<Rcc::Cir, 23, 1, WriteMode, RccCirCsscValuesBase> ;
    using Plli2Srdyc = RccCirPlliSrdycValues<Rcc::Cir, 21, 1, WriteMode, RccCirPlliSrdycValuesBase> ;
    using Pllrdyc = RccCirPllrdycValues<Rcc::Cir, 20, 1, WriteMode, RccCirPllrdycValuesBase> ;
    using Hserdyc = RccCirHserdycValues<Rcc::Cir, 19, 1, WriteMode, RccCirHserdycValuesBase> ;
    using Hsirdyc = RccCirHsirdycValues<Rcc::Cir, 18, 1, WriteMode, RccCirHsirdycValuesBase> ;
    using Lserdyc = RccCirLserdycValues<Rcc::Cir, 17, 1, WriteMode, RccCirLserdycValuesBase> ;
    using Lsirdyc = RccCirLsirdycValues<Rcc::Cir, 16, 1, WriteMode, RccCirLsirdycValuesBase> ;
    using Plli2Srdyie = RccCirPlliSrdyieValues<Rcc::Cir, 13, 1, ReadWriteMode, RccCirPlliSrdyieValuesBase> ;
    using Pllrdyie = RccCirPllrdyieValues<Rcc::Cir, 12, 1, ReadWriteMode, RccCirPllrdyieValuesBase> ;
    using Hserdyie = RccCirHserdyieValues<Rcc::Cir, 11, 1, ReadWriteMode, RccCirHserdyieValuesBase> ;
    using Hsirdyie = RccCirHsirdyieValues<Rcc::Cir, 10, 1, ReadWriteMode, RccCirHsirdyieValuesBase> ;
    using Lserdyie = RccCirLserdyieValues<Rcc::Cir, 9, 1, ReadWriteMode, RccCirLserdyieValuesBase> ;
    using Lsirdyie = RccCirLsirdyieValues<Rcc::Cir, 8, 1, ReadWriteMode, RccCirLsirdyieValuesBase> ;
    using Cssf = RccCirCssfValues<Rcc::Cir, 7, 1, ReadMode, RccCirCssfValuesBase> ;
    using Plli2Srdyf = RccCirPlliSrdyfValues<Rcc::Cir, 5, 1, ReadMode, RccCirPlliSrdyfValuesBase> ;
    using Pllrdyf = RccCirPllrdyfValues<Rcc::Cir, 4, 1, ReadMode, RccCirPllrdyfValuesBase> ;
    using Hserdyf = RccCirHserdyfValues<Rcc::Cir, 3, 1, ReadMode, RccCirHserdyfValuesBase> ;
    using Hsirdyf = RccCirHsirdyfValues<Rcc::Cir, 2, 1, ReadMode, RccCirHsirdyfValuesBase> ;
    using Lserdyf = RccCirLserdyfValues<Rcc::Cir, 1, 1, ReadMode, RccCirLserdyfValuesBase> ;
    using Lsirdyf = RccCirLsirdyfValues<Rcc::Cir, 0, 1, ReadMode, RccCirLsirdyfValuesBase> ;
  } ;

  template<typename... T> 
  using CirPack  = Register<0x4002380C, 32, ReadWriteMode, RccCirCsscValuesBase, T...> ;

  struct Ahb1Rstr : public RegisterBase<0x40023810, 32, ReadWriteMode>
  {
    using Dma2Rst = RccAhbRstrDmaRstValues<Rcc::Ahb1Rstr, 22, 1, ReadWriteMode, RccAhbRstrDmaRstValuesBase> ;
    using Dma1Rst = RccAhbRstrDmaRstValues<Rcc::Ahb1Rstr, 21, 1, ReadWriteMode, RccAhbRstrDmaRstValuesBase> ;
    using Crcrst = RccAhbRstrCrcrstValues<Rcc::Ahb1Rstr, 12, 1, ReadWriteMode, RccAhbRstrCrcrstValuesBase> ;
    using Gpiohrst = RccAhbRstrGpiohrstValues<Rcc::Ahb1Rstr, 7, 1, ReadWriteMode, RccAhbRstrGpiohrstValuesBase> ;
    using Gpioerst = RccAhbRstrGpioerstValues<Rcc::Ahb1Rstr, 4, 1, ReadWriteMode, RccAhbRstrGpioerstValuesBase> ;
    using Gpiodrst = RccAhbRstrGpiodrstValues<Rcc::Ahb1Rstr, 3, 1, ReadWriteMode, RccAhbRstrGpiodrstValuesBase> ;
    using Gpiocrst = RccAhbRstrGpiocrstValues<Rcc::Ahb1Rstr, 2, 1, ReadWriteMode, RccAhbRstrGpiocrstValuesBase> ;
    using Gpiobrst = RccAhbRstrGpiobrstValues<Rcc::Ahb1Rstr, 1, 1, ReadWriteMode, RccAhbRstrGpiobrstValuesBase> ;
    using Gpioarst = RccAhbRstrGpioarstValues<Rcc::Ahb1Rstr, 0, 1, ReadWriteMode, RccAhbRstrGpioarstValuesBase> ;
  } ;

  template<typename... T> 
  using Ahb1RstrPack  = Register<0x40023810, 32, ReadWriteMode, RccAhbRstrDmaRstValuesBase, T...> ;

  struct Ahb2Rstr : public RegisterBase<0x40023814, 32, ReadWriteMode>
  {
    using Otgfsrst = RccAhbRstrOtgfsrstValues<Rcc::Ahb2Rstr, 7, 1, ReadWriteMode, RccAhbRstrOtgfsrstValuesBase> ;
  } ;

  template<typename... T> 
  using Ahb2RstrPack  = Register<0x40023814, 32, ReadWriteMode, RccAhbRstrOtgfsrstValuesBase, T...> ;

  struct Apb1Rstr : public RegisterBase<0x40023820, 32, ReadWriteMode>
  {
    using Pwrrst = RccApbRstrPwrrstValues<Rcc::Apb1Rstr, 28, 1, ReadWriteMode, RccApbRstrPwrrstValuesBase> ;
    using I2C3Rst = RccApbRstrICRstValues<Rcc::Apb1Rstr, 23, 1, ReadWriteMode, RccApbRstrICRstValuesBase> ;
    using I2C2Rst = RccApbRstrICRstValues<Rcc::Apb1Rstr, 22, 1, ReadWriteMode, RccApbRstrICRstValuesBase> ;
    using I2C1Rst = RccApbRstrICRstValues<Rcc::Apb1Rstr, 21, 1, ReadWriteMode, RccApbRstrICRstValuesBase> ;
    using Uart2Rst = RccApbRstrUartRstValues<Rcc::Apb1Rstr, 17, 1, ReadWriteMode, RccApbRstrUartRstValuesBase> ;
    using Spi3Rst = RccApbRstrSpiRstValues<Rcc::Apb1Rstr, 15, 1, ReadWriteMode, RccApbRstrSpiRstValuesBase> ;
    using Spi2Rst = RccApbRstrSpiRstValues<Rcc::Apb1Rstr, 14, 1, ReadWriteMode, RccApbRstrSpiRstValuesBase> ;
    using Wwdgrst = RccApbRstrWwdgrstValues<Rcc::Apb1Rstr, 11, 1, ReadWriteMode, RccApbRstrWwdgrstValuesBase> ;
    using Tim5Rst = RccApbRstrTimRstValues<Rcc::Apb1Rstr, 3, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
    using Tim4Rst = RccApbRstrTimRstValues<Rcc::Apb1Rstr, 2, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
    using Tim3Rst = RccApbRstrTimRstValues<Rcc::Apb1Rstr, 1, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
    using Tim2Rst = RccApbRstrTimRstValues<Rcc::Apb1Rstr, 0, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
  } ;

  template<typename... T> 
  using Apb1RstrPack  = Register<0x40023820, 32, ReadWriteMode, RccApbRstrPwrrstValuesBase, T...> ;

  struct Apb2Rstr : public RegisterBase<0x40023824, 32, ReadWriteMode>
  {
    using Tim11Rst = RccApbRstrTimRstValues<Rcc::Apb2Rstr, 18, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
    using Tim10Rst = RccApbRstrTimRstValues<Rcc::Apb2Rstr, 17, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
    using Tim9Rst = RccApbRstrTimRstValues<Rcc::Apb2Rstr, 16, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
    using Syscfgrst = RccApbRstrSyscfgrstValues<Rcc::Apb2Rstr, 14, 1, ReadWriteMode, RccApbRstrSyscfgrstValuesBase> ;
    using Spi1Rst = RccApbRstrSpiRstValues<Rcc::Apb2Rstr, 12, 1, ReadWriteMode, RccApbRstrSpiRstValuesBase> ;
    using Sdiorst = RccApbRstrSdiorstValues<Rcc::Apb2Rstr, 11, 1, ReadWriteMode, RccApbRstrSdiorstValuesBase> ;
    using Adcrst = RccApbRstrAdcrstValues<Rcc::Apb2Rstr, 8, 1, ReadWriteMode, RccApbRstrAdcrstValuesBase> ;
    using Usart6Rst = RccApbRstrUsartRstValues<Rcc::Apb2Rstr, 5, 1, ReadWriteMode, RccApbRstrUsartRstValuesBase> ;
    using Usart1Rst = RccApbRstrUsartRstValues<Rcc::Apb2Rstr, 4, 1, ReadWriteMode, RccApbRstrUsartRstValuesBase> ;
    using Tim1Rst = RccApbRstrTimRstValues<Rcc::Apb2Rstr, 0, 1, ReadWriteMode, RccApbRstrTimRstValuesBase> ;
  } ;

  template<typename... T> 
  using Apb2RstrPack  = Register<0x40023824, 32, ReadWriteMode, RccApbRstrTimRstValuesBase, T...> ;

  struct Ahb1Enr : public RegisterBase<0x40023830, 32, ReadWriteMode>
  {
    using Dma2En = RccAhbEnrDmaEnValues<Rcc::Ahb1Enr, 22, 1, ReadWriteMode, RccAhbEnrDmaEnValuesBase> ;
    using Dma1En = RccAhbEnrDmaEnValues<Rcc::Ahb1Enr, 21, 1, ReadWriteMode, RccAhbEnrDmaEnValuesBase> ;
    using Crcen = RccAhbEnrCrcenValues<Rcc::Ahb1Enr, 12, 1, ReadWriteMode, RccAhbEnrCrcenValuesBase> ;
    using Gpiohen = RccAhbEnrGpiohenValues<Rcc::Ahb1Enr, 7, 1, ReadWriteMode, RccAhbEnrGpiohenValuesBase> ;
    using Gpioeen = RccAhbEnrGpioeenValues<Rcc::Ahb1Enr, 4, 1, ReadWriteMode, RccAhbEnrGpioeenValuesBase> ;
    using Gpioden = RccAhbEnrGpiodenValues<Rcc::Ahb1Enr, 3, 1, ReadWriteMode, RccAhbEnrGpiodenValuesBase> ;
    using Gpiocen = RccAhbEnrGpiocenValues<Rcc::Ahb1Enr, 2, 1, ReadWriteMode, RccAhbEnrGpiocenValuesBase> ;
    using Gpioben = RccAhbEnrGpiobenValues<Rcc::Ahb1Enr, 1, 1, ReadWriteMode, RccAhbEnrGpiobenValuesBase> ;
    using Gpioaen = RccAhbEnrGpioaenValues<Rcc::Ahb1Enr, 0, 1, ReadWriteMode, RccAhbEnrGpioaenValuesBase> ;
  } ;

  template<typename... T> 
  using Ahb1EnrPack  = Register<0x40023830, 32, ReadWriteMode, RccAhbEnrDmaEnValuesBase, T...> ;

  struct Ahb2Enr : public RegisterBase<0x40023834, 32, ReadWriteMode>
  {
    using Otgfsen = RccAhbEnrOtgfsenValues<Rcc::Ahb2Enr, 7, 1, ReadWriteMode, RccAhbEnrOtgfsenValuesBase> ;
  } ;

  template<typename... T> 
  using Ahb2EnrPack  = Register<0x40023834, 32, ReadWriteMode, RccAhbEnrOtgfsenValuesBase, T...> ;

  struct Apb1Enr : public RegisterBase<0x40023840, 32, ReadWriteMode>
  {
    using Pwren = RccApbEnrPwrenValues<Rcc::Apb1Enr, 28, 1, ReadWriteMode, RccApbEnrPwrenValuesBase> ;
    using I2C3En = RccApbEnrICEnValues<Rcc::Apb1Enr, 23, 1, ReadWriteMode, RccApbEnrICEnValuesBase> ;
    using I2C2En = RccApbEnrICEnValues<Rcc::Apb1Enr, 22, 1, ReadWriteMode, RccApbEnrICEnValuesBase> ;
    using I2C1En = RccApbEnrICEnValues<Rcc::Apb1Enr, 21, 1, ReadWriteMode, RccApbEnrICEnValuesBase> ;
    using Usart2En = RccApbEnrUsartEnValues<Rcc::Apb1Enr, 17, 1, ReadWriteMode, RccApbEnrUsartEnValuesBase> ;
    using Spi3En = RccApbEnrSpiEnValues<Rcc::Apb1Enr, 15, 1, ReadWriteMode, RccApbEnrSpiEnValuesBase> ;
    using Spi2En = RccApbEnrSpiEnValues<Rcc::Apb1Enr, 14, 1, ReadWriteMode, RccApbEnrSpiEnValuesBase> ;
    using Wwdgen = RccApbEnrWwdgenValues<Rcc::Apb1Enr, 11, 1, ReadWriteMode, RccApbEnrWwdgenValuesBase> ;
    using Tim5En = RccApbEnrTimEnValues<Rcc::Apb1Enr, 3, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
    using Tim4En = RccApbEnrTimEnValues<Rcc::Apb1Enr, 2, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
    using Tim3En = RccApbEnrTimEnValues<Rcc::Apb1Enr, 1, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
    using Tim2En = RccApbEnrTimEnValues<Rcc::Apb1Enr, 0, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
  } ;

  template<typename... T> 
  using Apb1EnrPack  = Register<0x40023840, 32, ReadWriteMode, RccApbEnrPwrenValuesBase, T...> ;

  struct Apb2Enr : public RegisterBase<0x40023844, 32, ReadWriteMode>
  {
    using Tim1En = RccApbEnrTimEnValues<Rcc::Apb2Enr, 0, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
    using Usart1En = RccApbEnrUsartEnValues<Rcc::Apb2Enr, 4, 1, ReadWriteMode, RccApbEnrUsartEnValuesBase> ;
    using Usart6En = RccApbEnrUsartEnValues<Rcc::Apb2Enr, 5, 1, ReadWriteMode, RccApbEnrUsartEnValuesBase> ;
    using Adc1En = RccApbEnrAdcEnValues<Rcc::Apb2Enr, 8, 1, ReadWriteMode, RccApbEnrAdcEnValuesBase> ;
    using Sdioen = RccApbEnrSdioenValues<Rcc::Apb2Enr, 11, 1, ReadWriteMode, RccApbEnrSdioenValuesBase> ;
    using Spi1En = RccApbEnrSpiEnValues<Rcc::Apb2Enr, 12, 1, ReadWriteMode, RccApbEnrSpiEnValuesBase> ;
    using Spi4En = RccApbEnrSpiEnValues<Rcc::Apb2Enr, 13, 1, ReadWriteMode, RccApbEnrSpiEnValuesBase> ;
    using Syscfgen = RccApbEnrSyscfgenValues<Rcc::Apb2Enr, 14, 1, ReadWriteMode, RccApbEnrSyscfgenValuesBase> ;
    using Tim9En = RccApbEnrTimEnValues<Rcc::Apb2Enr, 16, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
    using Tim10En = RccApbEnrTimEnValues<Rcc::Apb2Enr, 17, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
    using Tim11En = RccApbEnrTimEnValues<Rcc::Apb2Enr, 18, 1, ReadWriteMode, RccApbEnrTimEnValuesBase> ;
  } ;

  template<typename... T> 
  using Apb2EnrPack  = Register<0x40023844, 32, ReadWriteMode, RccApbEnrTimEnValuesBase, T...> ;

  struct Ahb1Lpenr : public RegisterBase<0x40023850, 32, ReadWriteMode>
  {
    using Dma2Lpen = RccAhbLpenrDmaLpenValues<Rcc::Ahb1Lpenr, 22, 1, ReadWriteMode, RccAhbLpenrDmaLpenValuesBase> ;
    using Dma1Lpen = RccAhbLpenrDmaLpenValues<Rcc::Ahb1Lpenr, 21, 1, ReadWriteMode, RccAhbLpenrDmaLpenValuesBase> ;
    using Sram1Lpen = RccAhbLpenrSramLpenValues<Rcc::Ahb1Lpenr, 16, 1, ReadWriteMode, RccAhbLpenrSramLpenValuesBase> ;
    using Flitflpen = RccAhbLpenrFlitflpenValues<Rcc::Ahb1Lpenr, 15, 1, ReadWriteMode, RccAhbLpenrFlitflpenValuesBase> ;
    using Crclpen = RccAhbLpenrCrclpenValues<Rcc::Ahb1Lpenr, 12, 1, ReadWriteMode, RccAhbLpenrCrclpenValuesBase> ;
    using Gpiohlpen = RccAhbLpenrGpiohlpenValues<Rcc::Ahb1Lpenr, 7, 1, ReadWriteMode, RccAhbLpenrGpiohlpenValuesBase> ;
    using Gpioelpen = RccAhbLpenrGpioelpenValues<Rcc::Ahb1Lpenr, 4, 1, ReadWriteMode, RccAhbLpenrGpioelpenValuesBase> ;
    using Gpiodlpen = RccAhbLpenrGpiodlpenValues<Rcc::Ahb1Lpenr, 3, 1, ReadWriteMode, RccAhbLpenrGpiodlpenValuesBase> ;
    using Gpioclpen = RccAhbLpenrGpioclpenValues<Rcc::Ahb1Lpenr, 2, 1, ReadWriteMode, RccAhbLpenrGpioclpenValuesBase> ;
    using Gpioblpen = RccAhbLpenrGpioblpenValues<Rcc::Ahb1Lpenr, 1, 1, ReadWriteMode, RccAhbLpenrGpioblpenValuesBase> ;
    using Gpioalpen = RccAhbLpenrGpioalpenValues<Rcc::Ahb1Lpenr, 0, 1, ReadWriteMode, RccAhbLpenrGpioalpenValuesBase> ;
  } ;

  template<typename... T> 
  using Ahb1LpenrPack  = Register<0x40023850, 32, ReadWriteMode, RccAhbLpenrDmaLpenValuesBase, T...> ;

  struct Ahb2Lpenr : public RegisterBase<0x40023854, 32, ReadWriteMode>
  {
    using Otgfslpen = RccAhbLpenrOtgfslpenValues<Rcc::Ahb2Lpenr, 7, 1, ReadWriteMode, RccAhbLpenrOtgfslpenValuesBase> ;
  } ;

  template<typename... T> 
  using Ahb2LpenrPack  = Register<0x40023854, 32, ReadWriteMode, RccAhbLpenrOtgfslpenValuesBase, T...> ;

  struct Apb1Lpenr : public RegisterBase<0x40023860, 32, ReadWriteMode>
  {
    using Pwrlpen = RccApbLpenrPwrlpenValues<Rcc::Apb1Lpenr, 28, 1, ReadWriteMode, RccApbLpenrPwrlpenValuesBase> ;
    using I2C3Lpen = RccApbLpenrICLpenValues<Rcc::Apb1Lpenr, 23, 1, ReadWriteMode, RccApbLpenrICLpenValuesBase> ;
    using I2C2Lpen = RccApbLpenrICLpenValues<Rcc::Apb1Lpenr, 22, 1, ReadWriteMode, RccApbLpenrICLpenValuesBase> ;
    using I2C1Lpen = RccApbLpenrICLpenValues<Rcc::Apb1Lpenr, 21, 1, ReadWriteMode, RccApbLpenrICLpenValuesBase> ;
    using Usart2Lpen = RccApbLpenrUsartLpenValues<Rcc::Apb1Lpenr, 17, 1, ReadWriteMode, RccApbLpenrUsartLpenValuesBase> ;
    using Spi3Lpen = RccApbLpenrSpiLpenValues<Rcc::Apb1Lpenr, 15, 1, ReadWriteMode, RccApbLpenrSpiLpenValuesBase> ;
    using Spi2Lpen = RccApbLpenrSpiLpenValues<Rcc::Apb1Lpenr, 14, 1, ReadWriteMode, RccApbLpenrSpiLpenValuesBase> ;
    using Wwdglpen = RccApbLpenrWwdglpenValues<Rcc::Apb1Lpenr, 11, 1, ReadWriteMode, RccApbLpenrWwdglpenValuesBase> ;
    using Tim5Lpen = RccApbLpenrTimLpenValues<Rcc::Apb1Lpenr, 3, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
    using Tim4Lpen = RccApbLpenrTimLpenValues<Rcc::Apb1Lpenr, 2, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
    using Tim3Lpen = RccApbLpenrTimLpenValues<Rcc::Apb1Lpenr, 1, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
    using Tim2Lpen = RccApbLpenrTimLpenValues<Rcc::Apb1Lpenr, 0, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
  } ;

  template<typename... T> 
  using Apb1LpenrPack  = Register<0x40023860, 32, ReadWriteMode, RccApbLpenrPwrlpenValuesBase, T...> ;

  struct Apb2Lpenr : public RegisterBase<0x40023864, 32, ReadWriteMode>
  {
    using Tim1Lpen = RccApbLpenrTimLpenValues<Rcc::Apb2Lpenr, 0, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
    using Usart1Lpen = RccApbLpenrUsartLpenValues<Rcc::Apb2Lpenr, 4, 1, ReadWriteMode, RccApbLpenrUsartLpenValuesBase> ;
    using Usart6Lpen = RccApbLpenrUsartLpenValues<Rcc::Apb2Lpenr, 5, 1, ReadWriteMode, RccApbLpenrUsartLpenValuesBase> ;
    using Adc1Lpen = RccApbLpenrAdcLpenValues<Rcc::Apb2Lpenr, 8, 1, ReadWriteMode, RccApbLpenrAdcLpenValuesBase> ;
    using Sdiolpen = RccApbLpenrSdiolpenValues<Rcc::Apb2Lpenr, 11, 1, ReadWriteMode, RccApbLpenrSdiolpenValuesBase> ;
    using Spi1Lpen = RccApbLpenrSpiLpenValues<Rcc::Apb2Lpenr, 12, 1, ReadWriteMode, RccApbLpenrSpiLpenValuesBase> ;
    using Spi4Lpen = RccApbLpenrSpiLpenValues<Rcc::Apb2Lpenr, 13, 1, ReadWriteMode, RccApbLpenrSpiLpenValuesBase> ;
    using Syscfglpen = RccApbLpenrSyscfglpenValues<Rcc::Apb2Lpenr, 14, 1, ReadWriteMode, RccApbLpenrSyscfglpenValuesBase> ;
    using Tim9Lpen = RccApbLpenrTimLpenValues<Rcc::Apb2Lpenr, 16, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
    using Tim10Lpen = RccApbLpenrTimLpenValues<Rcc::Apb2Lpenr, 17, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
    using Tim11Lpen = RccApbLpenrTimLpenValues<Rcc::Apb2Lpenr, 18, 1, ReadWriteMode, RccApbLpenrTimLpenValuesBase> ;
  } ;

  template<typename... T> 
  using Apb2LpenrPack  = Register<0x40023864, 32, ReadWriteMode, RccApbLpenrTimLpenValuesBase, T...> ;

  struct Bdcr : public RegisterBase<0x40023870, 32, ReadWriteMode>
  {
    using Bdrst = RccBdcrBdrstValues<Rcc::Bdcr, 16, 1, ReadWriteMode, RccBdcrBdrstValuesBase> ;
    using Rtcen = RccBdcrRtcenValues<Rcc::Bdcr, 15, 1, ReadWriteMode, RccBdcrRtcenValuesBase> ;
    using Rtcsel1 = RccBdcrRtcselValues<Rcc::Bdcr, 9, 1, ReadWriteMode, RccBdcrRtcselValuesBase> ;
    using Rtcsel0 = RccBdcrRtcselValues<Rcc::Bdcr, 8, 1, ReadWriteMode, RccBdcrRtcselValuesBase> ;
    using Lsebyp = RccBdcrLsebypValues<Rcc::Bdcr, 2, 1, ReadWriteMode, RccBdcrLsebypValuesBase> ;
    using Lserdy = RccBdcrLserdyValues<Rcc::Bdcr, 1, 1, ReadMode, RccBdcrLserdyValuesBase> ;
    using Lseon = RccBdcrLseonValues<Rcc::Bdcr, 0, 1, ReadWriteMode, RccBdcrLseonValuesBase> ;
  } ;

  template<typename... T> 
  using BdcrPack  = Register<0x40023870, 32, ReadWriteMode, RccBdcrBdrstValuesBase, T...> ;

  struct Csr : public RegisterBase<0x40023874, 32, ReadWriteMode>
  {
    using Lpwrrstf = RccCsrLpwrrstfValues<Rcc::Csr, 31, 1, ReadWriteMode, RccCsrLpwrrstfValuesBase> ;
    using Wwdgrstf = RccCsrWwdgrstfValues<Rcc::Csr, 30, 1, ReadWriteMode, RccCsrWwdgrstfValuesBase> ;
    using Wdgrstf = RccCsrWdgrstfValues<Rcc::Csr, 29, 1, ReadWriteMode, RccCsrWdgrstfValuesBase> ;
    using Sftrstf = RccCsrSftrstfValues<Rcc::Csr, 28, 1, ReadWriteMode, RccCsrSftrstfValuesBase> ;
    using Porrstf = RccCsrPorrstfValues<Rcc::Csr, 27, 1, ReadWriteMode, RccCsrPorrstfValuesBase> ;
    using Padrstf = RccCsrPadrstfValues<Rcc::Csr, 26, 1, ReadWriteMode, RccCsrPadrstfValuesBase> ;
    using Borrstf = RccCsrBorrstfValues<Rcc::Csr, 25, 1, ReadWriteMode, RccCsrBorrstfValuesBase> ;
    using Rmvf = RccCsrRmvfValues<Rcc::Csr, 24, 1, ReadWriteMode, RccCsrRmvfValuesBase> ;
    using Lsirdy = RccCsrLsirdyValues<Rcc::Csr, 1, 1, ReadMode, RccCsrLsirdyValuesBase> ;
    using Lsion = RccCsrLsionValues<Rcc::Csr, 0, 1, ReadWriteMode, RccCsrLsionValuesBase> ;
  } ;

  template<typename... T> 
  using CsrPack  = Register<0x40023874, 32, ReadWriteMode, RccCsrLpwrrstfValuesBase, T...> ;

  struct Sscgr : public RegisterBase<0x40023880, 32, ReadWriteMode>
  {
    using Sscgen = RccSscgrSscgenValues<Rcc::Sscgr, 31, 1, ReadWriteMode, RccSscgrSscgenValuesBase> ;
    using Spreadsel = RccSscgrSpreadselValues<Rcc::Sscgr, 30, 1, ReadWriteMode, RccSscgrSpreadselValuesBase> ;
    using Incstep = ReadWriteMode<Rcc::Sscgr, 13, 15> ;
    using Modper = ReadWriteMode<Rcc::Sscgr, 0, 13> ;
  } ;

  template<typename... T> 
  using SscgrPack  = Register<0x40023880, 32, ReadWriteMode, RccSscgrSscgenValuesBase, T...> ;

  struct Plli2Scfgr : public RegisterBase<0x40023884, 32, ReadWriteMode>
  {
    using Plli2Srx = RccPlliScfgrPlliSrxValues<Rcc::Plli2Scfgr, 28, 3, ReadWriteMode, RccPlliScfgrPlliSrxValuesBase> ;
    using Plli2Snx = ReadWriteMode<Rcc::Plli2Scfgr, 6, 9> ;
  } ;

  template<typename... T> 
  using Plli2ScfgrPack  = Register<0x40023884, 32, ReadWriteMode, RccPlliScfgrPlliSrxValuesBase, T...> ;

} ;

#endif //#if !defined(RCCREGISTERS_HPP)
