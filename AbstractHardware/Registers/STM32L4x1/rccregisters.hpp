/*******************************************************************************
* Filename      : rccregisters.hpp
*
* Details       : Reset and clock control. This header file is auto-generated
*                 for STM32L4x1 device.
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

  struct CR : public RegisterBase<0x40021000, 32, ReadWriteMode>
  {
    using PLLSAI1RDY = RCC_CR_PLLSAI1RDY_Values<RCC::CR, 27, 1, ReadMode, RCCCRBase> ;
    using PLLSAI1ON = RCC_CR_PLLSAI1ON_Values<RCC::CR, 26, 1, ReadWriteMode, RCCCRBase> ;
    using PLLRDY = RCC_CR_PLLRDY_Values<RCC::CR, 25, 1, ReadMode, RCCCRBase> ;
    using PLLON = RCC_CR_PLLON_Values<RCC::CR, 24, 1, ReadWriteMode, RCCCRBase> ;
    using CSSON = RCC_CR_CSSON_Values<RCC::CR, 19, 1, WriteMode, RCCCRBase> ;
    using HSEBYP = RCC_CR_HSEBYP_Values<RCC::CR, 18, 1, ReadWriteMode, RCCCRBase> ;
    using HSERDY = RCC_CR_HSERDY_Values<RCC::CR, 17, 1, ReadMode, RCCCRBase> ;
    using HSEON = RCC_CR_HSEON_Values<RCC::CR, 16, 1, ReadWriteMode, RCCCRBase> ;
    using HSIASFS = RCC_CR_HSIASFS_Values<RCC::CR, 11, 1, ReadWriteMode, RCCCRBase> ;
    using HSIRDY = RCC_CR_HSIRDY_Values<RCC::CR, 10, 1, ReadMode, RCCCRBase> ;
    using HSIKERON = RCC_CR_HSIKERON_Values<RCC::CR, 9, 1, ReadWriteMode, RCCCRBase> ;
    using HSION = RCC_CR_HSION_Values<RCC::CR, 8, 1, ReadWriteMode, RCCCRBase> ;
    using MSIRANGE = RCC_CR_MSIRANGE_Values<RCC::CR, 4, 4, ReadWriteMode, RCCCRBase> ;
    using MSIRGSEL = RCC_CR_MSIRGSEL_Values<RCC::CR, 3, 1, WriteMode, RCCCRBase> ;
    using MSIPLLEN = RCC_CR_MSIPLLEN_Values<RCC::CR, 2, 1, ReadWriteMode, RCCCRBase> ;
    using MSIRDY = RCC_CR_MSIRDY_Values<RCC::CR, 1, 1, ReadMode, RCCCRBase> ;
    using MSION = RCC_CR_MSION_Values<RCC::CR, 0, 1, ReadWriteMode, RCCCRBase> ;
    using FieldValues = RCC_CR_MSION_Values<RCC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40021000, 32, ReadWriteMode, RCCCRBase, T...> ;

  struct RCCICSCRBase {} ;

  struct ICSCR : public RegisterBase<0x40021004, 32, ReadWriteMode>
  {
    using HSITRIM = RCC_ICSCR_HSITRIM_Values<RCC::ICSCR, 24, 5, ReadWriteMode, RCCICSCRBase> ;
    using HSICAL = RCC_ICSCR_HSICAL_Values<RCC::ICSCR, 16, 8, ReadMode, RCCICSCRBase> ;
    using MSITRIM = RCC_ICSCR_MSITRIM_Values<RCC::ICSCR, 8, 8, ReadWriteMode, RCCICSCRBase> ;
    using MSICAL = RCC_ICSCR_MSICAL_Values<RCC::ICSCR, 0, 8, ReadMode, RCCICSCRBase> ;
    using FieldValues = RCC_ICSCR_MSICAL_Values<RCC::ICSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICSCRPack  = Register<0x40021004, 32, ReadWriteMode, RCCICSCRBase, T...> ;

  struct RCCCFGRBase {} ;

  struct CFGR : public RegisterBase<0x40021008, 32, ReadWriteMode>
  {
    using MCOPRE = RCC_CFGR_MCOPRE_Values<RCC::CFGR, 28, 3, ReadMode, RCCCFGRBase> ;
    using MCOSEL = RCC_CFGR_MCOSEL_Values<RCC::CFGR, 24, 3, ReadWriteMode, RCCCFGRBase> ;
    using STOPWUCK = RCC_CFGR_STOPWUCK_Values<RCC::CFGR, 15, 1, ReadWriteMode, RCCCFGRBase> ;
    using PPRE2 = RCC_CFGR_PPRE2_Values<RCC::CFGR, 11, 3, ReadWriteMode, RCCCFGRBase> ;
    using PPRE1 = RCC_CFGR_PPRE1_Values<RCC::CFGR, 8, 3, ReadWriteMode, RCCCFGRBase> ;
    using HPRE = RCC_CFGR_HPRE_Values<RCC::CFGR, 4, 4, ReadWriteMode, RCCCFGRBase> ;
    using SWS = RCC_CFGR_SWS_Values<RCC::CFGR, 2, 2, ReadMode, RCCCFGRBase> ;
    using SW = RCC_CFGR_SW_Values<RCC::CFGR, 0, 2, ReadWriteMode, RCCCFGRBase> ;
    using FieldValues = RCC_CFGR_SW_Values<RCC::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x40021008, 32, ReadWriteMode, RCCCFGRBase, T...> ;

  struct RCCPLLCFGRBase {} ;

  struct PLLCFGR : public RegisterBase<0x4002100C, 32, ReadWriteMode>
  {
    using PLLR = RCC_PLLCFGR_PLLR_Values<RCC::PLLCFGR, 25, 2, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLREN = RCC_PLLCFGR_PLLREN_Values<RCC::PLLCFGR, 24, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLQ = RCC_PLLCFGR_PLLQ_Values<RCC::PLLCFGR, 21, 2, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLQEN = RCC_PLLCFGR_PLLQEN_Values<RCC::PLLCFGR, 20, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLP = RCC_PLLCFGR_PLLP_Values<RCC::PLLCFGR, 17, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLPEN = RCC_PLLCFGR_PLLPEN_Values<RCC::PLLCFGR, 16, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 8, 7, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 4, 3, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLSRC = RCC_PLLCFGR_PLLSRC_Values<RCC::PLLCFGR, 0, 2, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLPDIV = RCC_PLLCFGR_PLLPDIV_Values<RCC::PLLCFGR, 27, 5, ReadWriteMode, RCCPLLCFGRBase> ;
    using FieldValues = RCC_PLLCFGR_PLLPDIV_Values<RCC::PLLCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLLCFGRPack  = Register<0x4002100C, 32, ReadWriteMode, RCCPLLCFGRBase, T...> ;

  struct RCCPLLSAI1CFGRBase {} ;

  struct PLLSAI1CFGR : public RegisterBase<0x40021010, 32, ReadWriteMode>
  {
    using PLLSAI1R = RCC_PLLSAI1CFGR_PLLSAI1R_Values<RCC::PLLSAI1CFGR, 25, 2, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLSAI1REN = RCC_PLLSAI1CFGR_PLLSAI1REN_Values<RCC::PLLSAI1CFGR, 24, 1, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLSAI1Q = RCC_PLLSAI1CFGR_PLLSAI1Q_Values<RCC::PLLSAI1CFGR, 21, 2, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLSAI1QEN = RCC_PLLSAI1CFGR_PLLSAI1QEN_Values<RCC::PLLSAI1CFGR, 20, 1, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLSAI1P = RCC_PLLSAI1CFGR_PLLSAI1P_Values<RCC::PLLSAI1CFGR, 17, 1, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLSAI1PEN = RCC_PLLSAI1CFGR_PLLSAI1PEN_Values<RCC::PLLSAI1CFGR, 16, 1, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLSAI1N = RCC_PLLSAI1CFGR_PLLSAI1N_Values<RCC::PLLSAI1CFGR, 8, 7, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLSAI1PDIV = RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values<RCC::PLLSAI1CFGR, 27, 5, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using FieldValues = RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values<RCC::PLLSAI1CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLLSAI1CFGRPack  = Register<0x40021010, 32, ReadWriteMode, RCCPLLSAI1CFGRBase, T...> ;

  struct RCCCIERBase {} ;

  struct CIER : public RegisterBase<0x40021018, 32, ReadWriteMode>
  {
    using LSECSSIE = RCC_CIER_LSECSSIE_Values<RCC::CIER, 9, 1, ReadWriteMode, RCCCIERBase> ;
    using PLLSAI1RDYIE = RCC_CIER_PLLSAI1RDYIE_Values<RCC::CIER, 6, 1, ReadWriteMode, RCCCIERBase> ;
    using PLLRDYIE = RCC_CIER_PLLRDYIE_Values<RCC::CIER, 5, 1, ReadWriteMode, RCCCIERBase> ;
    using HSERDYIE = RCC_CIER_HSERDYIE_Values<RCC::CIER, 4, 1, ReadWriteMode, RCCCIERBase> ;
    using HSIRDYIE = RCC_CIER_HSIRDYIE_Values<RCC::CIER, 3, 1, ReadWriteMode, RCCCIERBase> ;
    using MSIRDYIE = RCC_CIER_MSIRDYIE_Values<RCC::CIER, 2, 1, ReadWriteMode, RCCCIERBase> ;
    using LSERDYIE = RCC_CIER_LSERDYIE_Values<RCC::CIER, 1, 1, ReadWriteMode, RCCCIERBase> ;
    using LSIRDYIE = RCC_CIER_LSIRDYIE_Values<RCC::CIER, 0, 1, ReadWriteMode, RCCCIERBase> ;
    using HSI48RDYIE = RCC_CIER_HSI48RDYIE_Values<RCC::CIER, 10, 1, ReadWriteMode, RCCCIERBase> ;
    using FieldValues = RCC_CIER_HSI48RDYIE_Values<RCC::CIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CIERPack  = Register<0x40021018, 32, ReadWriteMode, RCCCIERBase, T...> ;

  struct RCCCIFRBase {} ;

  struct CIFR : public RegisterBase<0x4002101C, 32, ReadMode>
  {
    using LSECSSF = RCC_CIFR_LSECSSF_Values<RCC::CIFR, 9, 1, ReadMode, RCCCIFRBase> ;
    using CSSF = RCC_CIFR_CSSF_Values<RCC::CIFR, 8, 1, ReadMode, RCCCIFRBase> ;
    using PLLSAI1RDYF = RCC_CIFR_PLLSAI1RDYF_Values<RCC::CIFR, 6, 1, ReadMode, RCCCIFRBase> ;
    using PLLRDYF = RCC_CIFR_PLLRDYF_Values<RCC::CIFR, 5, 1, ReadMode, RCCCIFRBase> ;
    using HSERDYF = RCC_CIFR_HSERDYF_Values<RCC::CIFR, 4, 1, ReadMode, RCCCIFRBase> ;
    using HSIRDYF = RCC_CIFR_HSIRDYF_Values<RCC::CIFR, 3, 1, ReadMode, RCCCIFRBase> ;
    using MSIRDYF = RCC_CIFR_MSIRDYF_Values<RCC::CIFR, 2, 1, ReadMode, RCCCIFRBase> ;
    using LSERDYF = RCC_CIFR_LSERDYF_Values<RCC::CIFR, 1, 1, ReadMode, RCCCIFRBase> ;
    using LSIRDYF = RCC_CIFR_LSIRDYF_Values<RCC::CIFR, 0, 1, ReadMode, RCCCIFRBase> ;
    using HSI48RDYF = RCC_CIFR_HSI48RDYF_Values<RCC::CIFR, 10, 1, ReadMode, RCCCIFRBase> ;
    using FieldValues = RCC_CIFR_HSI48RDYF_Values<RCC::CIFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CIFRPack  = Register<0x4002101C, 32, ReadMode, RCCCIFRBase, T...> ;

  struct RCCCICRBase {} ;

  struct CICR : public RegisterBase<0x40021020, 32, WriteMode>
  {
    using LSECSSC = RCC_CICR_LSECSSC_Values<RCC::CICR, 9, 1, WriteMode, RCCCICRBase> ;
    using CSSC = RCC_CICR_CSSC_Values<RCC::CICR, 8, 1, WriteMode, RCCCICRBase> ;
    using PLLSAI1RDYC = RCC_CICR_PLLSAI1RDYC_Values<RCC::CICR, 6, 1, WriteMode, RCCCICRBase> ;
    using PLLRDYC = RCC_CICR_PLLRDYC_Values<RCC::CICR, 5, 1, WriteMode, RCCCICRBase> ;
    using HSERDYC = RCC_CICR_HSERDYC_Values<RCC::CICR, 4, 1, WriteMode, RCCCICRBase> ;
    using HSIRDYC = RCC_CICR_HSIRDYC_Values<RCC::CICR, 3, 1, WriteMode, RCCCICRBase> ;
    using MSIRDYC = RCC_CICR_MSIRDYC_Values<RCC::CICR, 2, 1, WriteMode, RCCCICRBase> ;
    using LSERDYC = RCC_CICR_LSERDYC_Values<RCC::CICR, 1, 1, WriteMode, RCCCICRBase> ;
    using LSIRDYC = RCC_CICR_LSIRDYC_Values<RCC::CICR, 0, 1, WriteMode, RCCCICRBase> ;
    using HSI48RDYC = RCC_CICR_HSI48RDYC_Values<RCC::CICR, 10, 1, WriteMode, RCCCICRBase> ;
    using FieldValues = RCC_CICR_HSI48RDYC_Values<RCC::CICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CICRPack  = Register<0x40021020, 32, WriteMode, RCCCICRBase, T...> ;

  struct RCCAHB1RSTRBase {} ;

  struct AHB1RSTR : public RegisterBase<0x40021028, 32, ReadWriteMode>
  {
    using TSCRST = RCC_AHB1RSTR_TSCRST_Values<RCC::AHB1RSTR, 16, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using CRCRST = RCC_AHB1RSTR_CRCRST_Values<RCC::AHB1RSTR, 11, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using FLASHRST = RCC_AHB1RSTR_FLASHRST_Values<RCC::AHB1RSTR, 8, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using DMA2RST = RCC_AHB1RSTR_DMA2RST_Values<RCC::AHB1RSTR, 1, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using DMA1RST = RCC_AHB1RSTR_DMA1RST_Values<RCC::AHB1RSTR, 0, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using FieldValues = RCC_AHB1RSTR_DMA1RST_Values<RCC::AHB1RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1RSTRPack  = Register<0x40021028, 32, ReadWriteMode, RCCAHB1RSTRBase, T...> ;

  struct RCCAHB2RSTRBase {} ;

  struct AHB2RSTR : public RegisterBase<0x4002102C, 32, ReadWriteMode>
  {
    using RNGRST = RCC_AHB2RSTR_RNGRST_Values<RCC::AHB2RSTR, 18, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using AESRST = RCC_AHB2RSTR_AESRST_Values<RCC::AHB2RSTR, 16, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using ADCRST = RCC_AHB2RSTR_ADCRST_Values<RCC::AHB2RSTR, 13, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOHRST = RCC_AHB2RSTR_GPIOHRST_Values<RCC::AHB2RSTR, 7, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOERST = RCC_AHB2RSTR_GPIOERST_Values<RCC::AHB2RSTR, 4, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIODRST = RCC_AHB2RSTR_GPIODRST_Values<RCC::AHB2RSTR, 3, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOCRST = RCC_AHB2RSTR_GPIOCRST_Values<RCC::AHB2RSTR, 2, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOBRST = RCC_AHB2RSTR_GPIOBRST_Values<RCC::AHB2RSTR, 1, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOARST = RCC_AHB2RSTR_GPIOARST_Values<RCC::AHB2RSTR, 0, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using FieldValues = RCC_AHB2RSTR_GPIOARST_Values<RCC::AHB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2RSTRPack  = Register<0x4002102C, 32, ReadWriteMode, RCCAHB2RSTRBase, T...> ;

  struct RCCAHB3RSTRBase {} ;

  struct AHB3RSTR : public RegisterBase<0x40021030, 32, ReadWriteMode>
  {
    using QSPIRST = RCC_AHB3RSTR_QSPIRST_Values<RCC::AHB3RSTR, 8, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using FieldValues = RCC_AHB3RSTR_QSPIRST_Values<RCC::AHB3RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3RSTRPack  = Register<0x40021030, 32, ReadWriteMode, RCCAHB3RSTRBase, T...> ;

  struct RCCAPB1RSTR1Base {} ;

  struct APB1RSTR1 : public RegisterBase<0x40021038, 32, ReadWriteMode>
  {
    using LPTIM1RST = RCC_APB1RSTR1_LPTIM1RST_Values<RCC::APB1RSTR1, 31, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using OPAMPRST = RCC_APB1RSTR1_OPAMPRST_Values<RCC::APB1RSTR1, 30, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using DAC1RST = RCC_APB1RSTR1_DAC1RST_Values<RCC::APB1RSTR1, 29, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using PWRRST = RCC_APB1RSTR1_PWRRST_Values<RCC::APB1RSTR1, 28, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using CAN1RST = RCC_APB1RSTR1_CAN1RST_Values<RCC::APB1RSTR1, 25, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using I2C3RST = RCC_APB1RSTR1_I2C3RST_Values<RCC::APB1RSTR1, 23, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using I2C1RST = RCC_APB1RSTR1_I2C1RST_Values<RCC::APB1RSTR1, 21, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using USART1RST = RCC_APB1RSTR1_USART1RST_Values<RCC::APB1RSTR1, 18, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using USART2RST = RCC_APB1RSTR1_USART2RST_Values<RCC::APB1RSTR1, 17, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using SPI3RST = RCC_APB1RSTR1_SPI3RST_Values<RCC::APB1RSTR1, 15, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using SPI2RST = RCC_APB1RSTR1_SPI2RST_Values<RCC::APB1RSTR1, 14, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using LCDRST = RCC_APB1RSTR1_LCDRST_Values<RCC::APB1RSTR1, 9, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using TIM7RST = RCC_APB1RSTR1_TIM7RST_Values<RCC::APB1RSTR1, 5, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using TIM6RST = RCC_APB1RSTR1_TIM6RST_Values<RCC::APB1RSTR1, 4, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using TIM2RST = RCC_APB1RSTR1_TIM2RST_Values<RCC::APB1RSTR1, 0, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using USART4RST = RCC_APB1RSTR1_USART4RST_Values<RCC::APB1RSTR1, 19, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using I2C2RST = RCC_APB1RSTR1_I2C2RST_Values<RCC::APB1RSTR1, 22, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using CRSRST = RCC_APB1RSTR1_CRSRST_Values<RCC::APB1RSTR1, 24, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using USBFSRST = RCC_APB1RSTR1_USBFSRST_Values<RCC::APB1RSTR1, 26, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using FieldValues = RCC_APB1RSTR1_USBFSRST_Values<RCC::APB1RSTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1RSTR1Pack  = Register<0x40021038, 32, ReadWriteMode, RCCAPB1RSTR1Base, T...> ;

  struct RCCAPB1RSTR2Base {} ;

  struct APB1RSTR2 : public RegisterBase<0x4002103C, 32, ReadWriteMode>
  {
    using LPTIM2RST = RCC_APB1RSTR2_LPTIM2RST_Values<RCC::APB1RSTR2, 5, 1, ReadWriteMode, RCCAPB1RSTR2Base> ;
    using SWPMI1RST = RCC_APB1RSTR2_SWPMI1RST_Values<RCC::APB1RSTR2, 2, 1, ReadWriteMode, RCCAPB1RSTR2Base> ;
    using LPUART1RST = RCC_APB1RSTR2_LPUART1RST_Values<RCC::APB1RSTR2, 0, 1, ReadWriteMode, RCCAPB1RSTR2Base> ;
    using I2C4RST = RCC_APB1RSTR2_I2C4RST_Values<RCC::APB1RSTR2, 1, 1, ReadWriteMode, RCCAPB1RSTR2Base> ;
    using FieldValues = RCC_APB1RSTR2_I2C4RST_Values<RCC::APB1RSTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1RSTR2Pack  = Register<0x4002103C, 32, ReadWriteMode, RCCAPB1RSTR2Base, T...> ;

  struct RCCAPB2RSTRBase {} ;

  struct APB2RSTR : public RegisterBase<0x40021040, 32, ReadWriteMode>
  {
    using SAI1RST = RCC_APB2RSTR_SAI1RST_Values<RCC::APB2RSTR, 21, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM16RST = RCC_APB2RSTR_TIM16RST_Values<RCC::APB2RSTR, 17, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM15RST = RCC_APB2RSTR_TIM15RST_Values<RCC::APB2RSTR, 16, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using USART1RST = RCC_APB2RSTR_USART1RST_Values<RCC::APB2RSTR, 14, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SPI1RST = RCC_APB2RSTR_SPI1RST_Values<RCC::APB2RSTR, 12, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM1RST = RCC_APB2RSTR_TIM1RST_Values<RCC::APB2RSTR, 11, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SDMMCRST = RCC_APB2RSTR_SDMMCRST_Values<RCC::APB2RSTR, 10, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SYSCFGRST = RCC_APB2RSTR_SYSCFGRST_Values<RCC::APB2RSTR, 0, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using DFSDMRST = RCC_APB2RSTR_DFSDMRST_Values<RCC::APB2RSTR, 24, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using FieldValues = RCC_APB2RSTR_DFSDMRST_Values<RCC::APB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2RSTRPack  = Register<0x40021040, 32, ReadWriteMode, RCCAPB2RSTRBase, T...> ;

  struct RCCAHB1ENRBase {} ;

  struct AHB1ENR : public RegisterBase<0x40021048, 32, ReadWriteMode>
  {
    using TSCEN = RCC_AHB1ENR_TSCEN_Values<RCC::AHB1ENR, 16, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using CRCEN = RCC_AHB1ENR_CRCEN_Values<RCC::AHB1ENR, 12, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using FLASHEN = RCC_AHB1ENR_FLASHEN_Values<RCC::AHB1ENR, 8, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using DMA2EN = RCC_AHB1ENR_DMA2EN_Values<RCC::AHB1ENR, 1, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using DMA1EN = RCC_AHB1ENR_DMA1EN_Values<RCC::AHB1ENR, 0, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using FieldValues = RCC_AHB1ENR_DMA1EN_Values<RCC::AHB1ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1ENRPack  = Register<0x40021048, 32, ReadWriteMode, RCCAHB1ENRBase, T...> ;

  struct RCCAHB2ENRBase {} ;

  struct AHB2ENR : public RegisterBase<0x4002104C, 32, ReadWriteMode>
  {
    using RNGEN = RCC_AHB2ENR_RNGEN_Values<RCC::AHB2ENR, 18, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using AESEN = RCC_AHB2ENR_AESEN_Values<RCC::AHB2ENR, 16, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using ADCEN = RCC_AHB2ENR_ADCEN_Values<RCC::AHB2ENR, 13, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOHEN = RCC_AHB2ENR_GPIOHEN_Values<RCC::AHB2ENR, 7, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOEEN = RCC_AHB2ENR_GPIOEEN_Values<RCC::AHB2ENR, 4, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIODEN = RCC_AHB2ENR_GPIODEN_Values<RCC::AHB2ENR, 3, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOCEN = RCC_AHB2ENR_GPIOCEN_Values<RCC::AHB2ENR, 2, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOBEN = RCC_AHB2ENR_GPIOBEN_Values<RCC::AHB2ENR, 1, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOAEN = RCC_AHB2ENR_GPIOAEN_Values<RCC::AHB2ENR, 0, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using FieldValues = RCC_AHB2ENR_GPIOAEN_Values<RCC::AHB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2ENRPack  = Register<0x4002104C, 32, ReadWriteMode, RCCAHB2ENRBase, T...> ;

  struct RCCAHB3ENRBase {} ;

  struct AHB3ENR : public RegisterBase<0x40021050, 32, ReadWriteMode>
  {
    using QSPIEN = RCC_AHB3ENR_QSPIEN_Values<RCC::AHB3ENR, 8, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using FieldValues = RCC_AHB3ENR_QSPIEN_Values<RCC::AHB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3ENRPack  = Register<0x40021050, 32, ReadWriteMode, RCCAHB3ENRBase, T...> ;

  struct RCCAPB1ENR1Base {} ;

  struct APB1ENR1 : public RegisterBase<0x40021058, 32, ReadWriteMode>
  {
    using LPTIM1EN = RCC_APB1ENR1_LPTIM1EN_Values<RCC::APB1ENR1, 31, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using OPAMPEN = RCC_APB1ENR1_OPAMPEN_Values<RCC::APB1ENR1, 30, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using DAC1EN = RCC_APB1ENR1_DAC1EN_Values<RCC::APB1ENR1, 29, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using PWREN = RCC_APB1ENR1_PWREN_Values<RCC::APB1ENR1, 28, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using CAN1EN = RCC_APB1ENR1_CAN1EN_Values<RCC::APB1ENR1, 25, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using I2C3EN = RCC_APB1ENR1_I2C3EN_Values<RCC::APB1ENR1, 23, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using I2C1EN = RCC_APB1ENR1_I2C1EN_Values<RCC::APB1ENR1, 21, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using USART1EN = RCC_APB1ENR1_USART1EN_Values<RCC::APB1ENR1, 18, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using USART2EN = RCC_APB1ENR1_USART2EN_Values<RCC::APB1ENR1, 17, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using SPI3EN = RCC_APB1ENR1_SPI3EN_Values<RCC::APB1ENR1, 15, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using SPI1EN = RCC_APB1ENR1_SPI1EN_Values<RCC::APB1ENR1, 14, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using WWDGEN = RCC_APB1ENR1_WWDGEN_Values<RCC::APB1ENR1, 11, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using LCDEN = RCC_APB1ENR1_LCDEN_Values<RCC::APB1ENR1, 9, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using TIM7EN = RCC_APB1ENR1_TIM7EN_Values<RCC::APB1ENR1, 5, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using TIM6EN = RCC_APB1ENR1_TIM6EN_Values<RCC::APB1ENR1, 4, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using TIM2EN = RCC_APB1ENR1_TIM2EN_Values<RCC::APB1ENR1, 0, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using RTCAPBEN = RCC_APB1ENR1_RTCAPBEN_Values<RCC::APB1ENR1, 10, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using CRSEN = RCC_APB1ENR1_CRSEN_Values<RCC::APB1ENR1, 24, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using USBF = RCC_APB1ENR1_USBF_Values<RCC::APB1ENR1, 26, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using TIM3EN = RCC_APB1ENR1_TIM3EN_Values<RCC::APB1ENR1, 1, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using UART4EN = RCC_APB1ENR1_UART4EN_Values<RCC::APB1ENR1, 19, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using I2C2EN = RCC_APB1ENR1_I2C2EN_Values<RCC::APB1ENR1, 22, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using FieldValues = RCC_APB1ENR1_I2C2EN_Values<RCC::APB1ENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1ENR1Pack  = Register<0x40021058, 32, ReadWriteMode, RCCAPB1ENR1Base, T...> ;

  struct RCCAPB1ENR2Base {} ;

  struct APB1ENR2 : public RegisterBase<0x4002105C, 32, ReadWriteMode>
  {
    using LPTIM2EN = RCC_APB1ENR2_LPTIM2EN_Values<RCC::APB1ENR2, 5, 1, ReadWriteMode, RCCAPB1ENR2Base> ;
    using SWPMI1EN = RCC_APB1ENR2_SWPMI1EN_Values<RCC::APB1ENR2, 2, 1, ReadWriteMode, RCCAPB1ENR2Base> ;
    using LPUART1EN = RCC_APB1ENR2_LPUART1EN_Values<RCC::APB1ENR2, 0, 1, ReadWriteMode, RCCAPB1ENR2Base> ;
    using DFSDMEN = RCC_APB1ENR2_DFSDMEN_Values<RCC::APB1ENR2, 24, 1, ReadWriteMode, RCCAPB1ENR2Base> ;
    using I2C4EN = RCC_APB1ENR2_I2C4EN_Values<RCC::APB1ENR2, 1, 1, ReadWriteMode, RCCAPB1ENR2Base> ;
    using FieldValues = RCC_APB1ENR2_I2C4EN_Values<RCC::APB1ENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1ENR2Pack  = Register<0x4002105C, 32, ReadWriteMode, RCCAPB1ENR2Base, T...> ;

  struct RCCAPB2ENRBase {} ;

  struct APB2ENR : public RegisterBase<0x40021060, 32, ReadWriteMode>
  {
    using SAI1EN = RCC_APB2ENR_SAI1EN_Values<RCC::APB2ENR, 21, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM16EN = RCC_APB2ENR_TIM16EN_Values<RCC::APB2ENR, 17, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM15EN = RCC_APB2ENR_TIM15EN_Values<RCC::APB2ENR, 16, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using USART1EN = RCC_APB2ENR_USART1EN_Values<RCC::APB2ENR, 14, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SPI1EN = RCC_APB2ENR_SPI1EN_Values<RCC::APB2ENR, 12, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM1EN = RCC_APB2ENR_TIM1EN_Values<RCC::APB2ENR, 11, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SDMMCEN = RCC_APB2ENR_SDMMCEN_Values<RCC::APB2ENR, 10, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using FIREWALLEN = RCC_APB2ENR_FIREWALLEN_Values<RCC::APB2ENR, 7, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SYSCFGEN = RCC_APB2ENR_SYSCFGEN_Values<RCC::APB2ENR, 0, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using FieldValues = RCC_APB2ENR_SYSCFGEN_Values<RCC::APB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2ENRPack  = Register<0x40021060, 32, ReadWriteMode, RCCAPB2ENRBase, T...> ;

  struct RCCAHB1SMENRBase {} ;

  struct AHB1SMENR : public RegisterBase<0x40021068, 32, ReadWriteMode>
  {
    using TSCSMEN = RCC_AHB1SMENR_TSCSMEN_Values<RCC::AHB1SMENR, 16, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using CRCSMEN = RCC_AHB1SMENR_CRCSMEN_Values<RCC::AHB1SMENR, 12, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using SRAM1SMEN = RCC_AHB1SMENR_SRAM1SMEN_Values<RCC::AHB1SMENR, 9, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using FLASHSMEN = RCC_AHB1SMENR_FLASHSMEN_Values<RCC::AHB1SMENR, 8, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using DMA2SMEN = RCC_AHB1SMENR_DMA2SMEN_Values<RCC::AHB1SMENR, 1, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using DMA1SMEN = RCC_AHB1SMENR_DMA1SMEN_Values<RCC::AHB1SMENR, 0, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using FieldValues = RCC_AHB1SMENR_DMA1SMEN_Values<RCC::AHB1SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1SMENRPack  = Register<0x40021068, 32, ReadWriteMode, RCCAHB1SMENRBase, T...> ;

  struct RCCAHB2SMENRBase {} ;

  struct AHB2SMENR : public RegisterBase<0x4002106C, 32, ReadWriteMode>
  {
    using RNGSMEN = RCC_AHB2SMENR_RNGSMEN_Values<RCC::AHB2SMENR, 18, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using AESSMEN = RCC_AHB2SMENR_AESSMEN_Values<RCC::AHB2SMENR, 16, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using ADCFSSMEN = RCC_AHB2SMENR_ADCFSSMEN_Values<RCC::AHB2SMENR, 13, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using SRAM2SMEN = RCC_AHB2SMENR_SRAM2SMEN_Values<RCC::AHB2SMENR, 9, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOHSMEN = RCC_AHB2SMENR_GPIOHSMEN_Values<RCC::AHB2SMENR, 7, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOESMEN = RCC_AHB2SMENR_GPIOESMEN_Values<RCC::AHB2SMENR, 4, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIODSMEN = RCC_AHB2SMENR_GPIODSMEN_Values<RCC::AHB2SMENR, 3, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOCSMEN = RCC_AHB2SMENR_GPIOCSMEN_Values<RCC::AHB2SMENR, 2, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOBSMEN = RCC_AHB2SMENR_GPIOBSMEN_Values<RCC::AHB2SMENR, 1, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOASMEN = RCC_AHB2SMENR_GPIOASMEN_Values<RCC::AHB2SMENR, 0, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using FieldValues = RCC_AHB2SMENR_GPIOASMEN_Values<RCC::AHB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2SMENRPack  = Register<0x4002106C, 32, ReadWriteMode, RCCAHB2SMENRBase, T...> ;

  struct RCCAHB3SMENRBase {} ;

  struct AHB3SMENR : public RegisterBase<0x40021070, 32, ReadWriteMode>
  {
    using QSPISMEN = RCC_AHB3SMENR_QSPISMEN_Values<RCC::AHB3SMENR, 8, 1, ReadWriteMode, RCCAHB3SMENRBase> ;
    using FieldValues = RCC_AHB3SMENR_QSPISMEN_Values<RCC::AHB3SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3SMENRPack  = Register<0x40021070, 32, ReadWriteMode, RCCAHB3SMENRBase, T...> ;

  struct RCCAPB1SMENR1Base {} ;

  struct APB1SMENR1 : public RegisterBase<0x40021078, 32, ReadWriteMode>
  {
    using LPTIM1SMEN = RCC_APB1SMENR1_LPTIM1SMEN_Values<RCC::APB1SMENR1, 31, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using OPAMPSMEN = RCC_APB1SMENR1_OPAMPSMEN_Values<RCC::APB1SMENR1, 30, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using DAC1SMEN = RCC_APB1SMENR1_DAC1SMEN_Values<RCC::APB1SMENR1, 29, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using PWRSMEN = RCC_APB1SMENR1_PWRSMEN_Values<RCC::APB1SMENR1, 28, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using CAN1SMEN = RCC_APB1SMENR1_CAN1SMEN_Values<RCC::APB1SMENR1, 25, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using I2C3SMEN = RCC_APB1SMENR1_I2C3SMEN_Values<RCC::APB1SMENR1, 23, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using I2C1SMEN = RCC_APB1SMENR1_I2C1SMEN_Values<RCC::APB1SMENR1, 21, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using USART2SMEN = RCC_APB1SMENR1_USART2SMEN_Values<RCC::APB1SMENR1, 18, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using USART1SMEN = RCC_APB1SMENR1_USART1SMEN_Values<RCC::APB1SMENR1, 17, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using SP3SMEN = RCC_APB1SMENR1_SP3SMEN_Values<RCC::APB1SMENR1, 15, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using SPI2SMEN = RCC_APB1SMENR1_SPI2SMEN_Values<RCC::APB1SMENR1, 14, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using WWDGSMEN = RCC_APB1SMENR1_WWDGSMEN_Values<RCC::APB1SMENR1, 11, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using LCDSMEN = RCC_APB1SMENR1_LCDSMEN_Values<RCC::APB1SMENR1, 9, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using TIM7SMEN = RCC_APB1SMENR1_TIM7SMEN_Values<RCC::APB1SMENR1, 5, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using TIM6SMEN = RCC_APB1SMENR1_TIM6SMEN_Values<RCC::APB1SMENR1, 4, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using TIM2SMEN = RCC_APB1SMENR1_TIM2SMEN_Values<RCC::APB1SMENR1, 0, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using RTCAPBSMEN = RCC_APB1SMENR1_RTCAPBSMEN_Values<RCC::APB1SMENR1, 10, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using USBFSSMEN = RCC_APB1SMENR1_USBFSSMEN_Values<RCC::APB1SMENR1, 26, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using I2C2SMEN = RCC_APB1SMENR1_I2C2SMEN_Values<RCC::APB1SMENR1, 22, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using CRSSMEN = RCC_APB1SMENR1_CRSSMEN_Values<RCC::APB1SMENR1, 24, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using FieldValues = RCC_APB1SMENR1_CRSSMEN_Values<RCC::APB1SMENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1SMENR1Pack  = Register<0x40021078, 32, ReadWriteMode, RCCAPB1SMENR1Base, T...> ;

  struct RCCAPB1SMENR2Base {} ;

  struct APB1SMENR2 : public RegisterBase<0x4002107C, 32, ReadWriteMode>
  {
    using LPTIM2SMEN = RCC_APB1SMENR2_LPTIM2SMEN_Values<RCC::APB1SMENR2, 5, 1, ReadWriteMode, RCCAPB1SMENR2Base> ;
    using SWPMI1SMEN = RCC_APB1SMENR2_SWPMI1SMEN_Values<RCC::APB1SMENR2, 2, 1, ReadWriteMode, RCCAPB1SMENR2Base> ;
    using LPUART1SMEN = RCC_APB1SMENR2_LPUART1SMEN_Values<RCC::APB1SMENR2, 0, 1, ReadWriteMode, RCCAPB1SMENR2Base> ;
    using FieldValues = RCC_APB1SMENR2_LPUART1SMEN_Values<RCC::APB1SMENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1SMENR2Pack  = Register<0x4002107C, 32, ReadWriteMode, RCCAPB1SMENR2Base, T...> ;

  struct RCCAPB2SMENRBase {} ;

  struct APB2SMENR : public RegisterBase<0x40021080, 32, ReadWriteMode>
  {
    using SAI1SMEN = RCC_APB2SMENR_SAI1SMEN_Values<RCC::APB2SMENR, 21, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using TIM16SMEN = RCC_APB2SMENR_TIM16SMEN_Values<RCC::APB2SMENR, 17, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using TIM15SMEN = RCC_APB2SMENR_TIM15SMEN_Values<RCC::APB2SMENR, 16, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using USART1SMEN = RCC_APB2SMENR_USART1SMEN_Values<RCC::APB2SMENR, 14, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using SPI1SMEN = RCC_APB2SMENR_SPI1SMEN_Values<RCC::APB2SMENR, 12, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using TIM1SMEN = RCC_APB2SMENR_TIM1SMEN_Values<RCC::APB2SMENR, 11, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using SDMMCSMEN = RCC_APB2SMENR_SDMMCSMEN_Values<RCC::APB2SMENR, 10, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using SYSCFGSMEN = RCC_APB2SMENR_SYSCFGSMEN_Values<RCC::APB2SMENR, 0, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using FieldValues = RCC_APB2SMENR_SYSCFGSMEN_Values<RCC::APB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2SMENRPack  = Register<0x40021080, 32, ReadWriteMode, RCCAPB2SMENRBase, T...> ;

  struct RCCCCIPRBase {} ;

  struct CCIPR : public RegisterBase<0x40021088, 32, ReadWriteMode>
  {
    using SWPMI1SEL = RCC_CCIPR_SWPMI1SEL_Values<RCC::CCIPR, 30, 1, ReadWriteMode, RCCCCIPRBase> ;
    using ADCSEL = RCC_CCIPR_ADCSEL_Values<RCC::CCIPR, 28, 2, ReadWriteMode, RCCCCIPRBase> ;
    using CLK48SEL = RCC_CCIPR_CLK48SEL_Values<RCC::CCIPR, 26, 2, ReadWriteMode, RCCCCIPRBase> ;
    using SAI1SEL = RCC_CCIPR_SAI1SEL_Values<RCC::CCIPR, 22, 2, ReadWriteMode, RCCCCIPRBase> ;
    using LPTIM2SEL = RCC_CCIPR_LPTIM2SEL_Values<RCC::CCIPR, 20, 2, ReadWriteMode, RCCCCIPRBase> ;
    using LPTIM1SEL = RCC_CCIPR_LPTIM1SEL_Values<RCC::CCIPR, 18, 2, ReadWriteMode, RCCCCIPRBase> ;
    using I2C3SEL = RCC_CCIPR_I2C3SEL_Values<RCC::CCIPR, 16, 2, ReadWriteMode, RCCCCIPRBase> ;
    using I2C1SEL = RCC_CCIPR_I2C1SEL_Values<RCC::CCIPR, 12, 2, ReadWriteMode, RCCCCIPRBase> ;
    using LPUART1SEL = RCC_CCIPR_LPUART1SEL_Values<RCC::CCIPR, 10, 2, ReadWriteMode, RCCCCIPRBase> ;
    using USART2SEL = RCC_CCIPR_USART2SEL_Values<RCC::CCIPR, 2, 2, ReadWriteMode, RCCCCIPRBase> ;
    using USART1SEL = RCC_CCIPR_USART1SEL_Values<RCC::CCIPR, 0, 2, ReadWriteMode, RCCCCIPRBase> ;
    using USART4SEL = RCC_CCIPR_USART4SEL_Values<RCC::CCIPR, 6, 2, ReadWriteMode, RCCCCIPRBase> ;
    using USART3SEL = RCC_CCIPR_USART3SEL_Values<RCC::CCIPR, 4, 2, ReadWriteMode, RCCCCIPRBase> ;
    using I2C2SEL = RCC_CCIPR_I2C2SEL_Values<RCC::CCIPR, 14, 2, ReadWriteMode, RCCCCIPRBase> ;
    using FieldValues = RCC_CCIPR_I2C2SEL_Values<RCC::CCIPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCIPRPack  = Register<0x40021088, 32, ReadWriteMode, RCCCCIPRBase, T...> ;

  struct RCCBDCRBase {} ;

  struct BDCR : public RegisterBase<0x40021090, 32, ReadWriteMode>
  {
    using LSCOSEL = RCC_BDCR_LSCOSEL_Values<RCC::BDCR, 25, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSCOEN = RCC_BDCR_LSCOEN_Values<RCC::BDCR, 24, 1, ReadWriteMode, RCCBDCRBase> ;
    using BDRST = RCC_BDCR_BDRST_Values<RCC::BDCR, 16, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCEN = RCC_BDCR_RTCEN_Values<RCC::BDCR, 15, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCSEL = RCC_BDCR_RTCSEL_Values<RCC::BDCR, 8, 2, ReadWriteMode, RCCBDCRBase> ;
    using LSECSSD = RCC_BDCR_LSECSSD_Values<RCC::BDCR, 6, 1, ReadMode, RCCBDCRBase> ;
    using LSECSSON = RCC_BDCR_LSECSSON_Values<RCC::BDCR, 5, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSEDRV = RCC_BDCR_LSEDRV_Values<RCC::BDCR, 3, 2, ReadWriteMode, RCCBDCRBase> ;
    using LSEBYP = RCC_BDCR_LSEBYP_Values<RCC::BDCR, 2, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSERDY = RCC_BDCR_LSERDY_Values<RCC::BDCR, 1, 1, ReadMode, RCCBDCRBase> ;
    using LSEON = RCC_BDCR_LSEON_Values<RCC::BDCR, 0, 1, ReadWriteMode, RCCBDCRBase> ;
    using FieldValues = RCC_BDCR_LSEON_Values<RCC::BDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDCRPack  = Register<0x40021090, 32, ReadWriteMode, RCCBDCRBase, T...> ;

  struct RCCCSRBase {} ;

  struct CSR : public RegisterBase<0x40021094, 32, ReadWriteMode>
  {
    using LPWRSTF = RCC_CSR_LPWRSTF_Values<RCC::CSR, 31, 1, ReadMode, RCCCSRBase> ;
    using WWDGRSTF = RCC_CSR_WWDGRSTF_Values<RCC::CSR, 30, 1, ReadMode, RCCCSRBase> ;
    using IWDGRSTF = RCC_CSR_IWDGRSTF_Values<RCC::CSR, 29, 1, ReadMode, RCCCSRBase> ;
    using SFTRSTF = RCC_CSR_SFTRSTF_Values<RCC::CSR, 28, 1, ReadMode, RCCCSRBase> ;
    using BORRSTF = RCC_CSR_BORRSTF_Values<RCC::CSR, 27, 1, ReadMode, RCCCSRBase> ;
    using PINRSTF = RCC_CSR_PINRSTF_Values<RCC::CSR, 26, 1, ReadMode, RCCCSRBase> ;
    using OBLRSTF = RCC_CSR_OBLRSTF_Values<RCC::CSR, 25, 1, ReadMode, RCCCSRBase> ;
    using FIREWALLRSTF = RCC_CSR_FIREWALLRSTF_Values<RCC::CSR, 24, 1, ReadMode, RCCCSRBase> ;
    using RMVF = RCC_CSR_RMVF_Values<RCC::CSR, 23, 1, ReadWriteMode, RCCCSRBase> ;
    using MSISRANGE = RCC_CSR_MSISRANGE_Values<RCC::CSR, 8, 4, ReadWriteMode, RCCCSRBase> ;
    using LSIRDY = RCC_CSR_LSIRDY_Values<RCC::CSR, 1, 1, ReadMode, RCCCSRBase> ;
    using LSION = RCC_CSR_LSION_Values<RCC::CSR, 0, 1, ReadWriteMode, RCCCSRBase> ;
    using FieldValues = RCC_CSR_LSION_Values<RCC::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40021094, 32, ReadWriteMode, RCCCSRBase, T...> ;

  struct RCCCRRCRBase {} ;

  struct CRRCR : public RegisterBase<0x40021098, 32, ReadWriteMode>
  {
    using HSI48ON = RCC_CRRCR_HSI48ON_Values<RCC::CRRCR, 0, 1, ReadWriteMode, RCCCRRCRBase> ;
    using HSI48RDY = RCC_CRRCR_HSI48RDY_Values<RCC::CRRCR, 1, 1, ReadMode, RCCCRRCRBase> ;
    using HSI48CAL = RCC_CRRCR_HSI48CAL_Values<RCC::CRRCR, 7, 9, ReadMode, RCCCRRCRBase> ;
    using FieldValues = RCC_CRRCR_HSI48CAL_Values<RCC::CRRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRRCRPack  = Register<0x40021098, 32, ReadWriteMode, RCCCRRCRBase, T...> ;

} ;

#endif //#if !defined(RCCREGISTERS_HPP)
