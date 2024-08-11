/*******************************************************************************
* Filename      : rccregisters.hpp
*
* Details       : Reset and clock control. This header file is auto-generated
*                 for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "rccfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RCC
{
  struct RCCRCC_CTRLBase {} ;

  struct RCC_CTRL : public RegisterBase<0x40021000, 32, ReadWriteMode>
  {
    using HSIEN = RCC_RCC_CTRL_HSIEN_Values<RCC::RCC_CTRL, 0, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using HSIRDF = RCC_RCC_CTRL_HSIRDF_Values<RCC::RCC_CTRL, 1, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using HSITRIM = RCC_RCC_CTRL_HSITRIM_Values<RCC::RCC_CTRL, 2, 5, ReadWriteMode, RCCRCC_CTRLBase> ;
    using HSICAL = RCC_RCC_CTRL_HSICAL_Values<RCC::RCC_CTRL, 7, 9, ReadWriteMode, RCCRCC_CTRLBase> ;
    using HSEEN = RCC_RCC_CTRL_HSEEN_Values<RCC::RCC_CTRL, 16, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using HSERDF = RCC_RCC_CTRL_HSERDF_Values<RCC::RCC_CTRL, 17, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using HSEBP = RCC_RCC_CTRL_HSEBP_Values<RCC::RCC_CTRL, 18, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using CLKSSEN = RCC_RCC_CTRL_CLKSSEN_Values<RCC::RCC_CTRL, 19, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using PLLEN = RCC_RCC_CTRL_PLLEN_Values<RCC::RCC_CTRL, 24, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using PLLRDF = RCC_RCC_CTRL_PLLRDF_Values<RCC::RCC_CTRL, 25, 1, ReadWriteMode, RCCRCC_CTRLBase> ;
    using FieldValues = RCC_RCC_CTRL_PLLRDF_Values<RCC::RCC_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CTRLPack  = Register<0x40021000, 32, ReadWriteMode, RCCRCC_CTRLBase, T...> ;

  struct RCCRCC_CFGBase {} ;

  struct RCC_CFG : public RegisterBase<0x40021004, 32, ReadWriteMode>
  {
    using SCLKSW = RCC_RCC_CFG_SCLKSW_Values<RCC::RCC_CFG, 0, 2, ReadWriteMode, RCCRCC_CFGBase> ;
    using SCLKSTS = RCC_RCC_CFG_SCLKSTS_Values<RCC::RCC_CFG, 2, 2, ReadWriteMode, RCCRCC_CFGBase> ;
    using AHBPRES = RCC_RCC_CFG_AHBPRES_Values<RCC::RCC_CFG, 4, 4, ReadWriteMode, RCCRCC_CFGBase> ;
    using APB1PRES = RCC_RCC_CFG_APB1PRES_Values<RCC::RCC_CFG, 8, 3, ReadWriteMode, RCCRCC_CFGBase> ;
    using APB2PRES = RCC_RCC_CFG_APB2PRES_Values<RCC::RCC_CFG, 11, 3, ReadWriteMode, RCCRCC_CFGBase> ;
    using PLLSRC = RCC_RCC_CFG_PLLSRC_Values<RCC::RCC_CFG, 16, 1, ReadWriteMode, RCCRCC_CFGBase> ;
    using PLLHSEPRES = RCC_RCC_CFG_PLLHSEPRES_Values<RCC::RCC_CFG, 17, 1, ReadWriteMode, RCCRCC_CFGBase> ;
    using PLLMULFCT = RCC_RCC_CFG_PLLMULFCT_Values<RCC::RCC_CFG, 18, 4, ReadWriteMode, RCCRCC_CFGBase> ;
    using USBPRES = RCC_RCC_CFG_USBPRES_Values<RCC::RCC_CFG, 22, 2, ReadWriteMode, RCCRCC_CFGBase> ;
    using MCO = RCC_RCC_CFG_MCO_Values<RCC::RCC_CFG, 24, 3, ReadWriteMode, RCCRCC_CFGBase> ;
    using PLLMULFCT_H = RCC_RCC_CFG_PLLMULFCT_H_Values<RCC::RCC_CFG, 27, 1, ReadWriteMode, RCCRCC_CFGBase> ;
    using MCOPRES = RCC_RCC_CFG_MCOPRES_Values<RCC::RCC_CFG, 28, 4, ReadWriteMode, RCCRCC_CFGBase> ;
    using FieldValues = RCC_RCC_CFG_MCOPRES_Values<RCC::RCC_CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CFGPack  = Register<0x40021004, 32, ReadWriteMode, RCCRCC_CFGBase, T...> ;

  struct RCCRCC_CLKINTBase {} ;

  struct RCC_CLKINT : public RegisterBase<0x40021008, 32, ReadWriteMode>
  {
    using LSIRDIF = RCC_RCC_CLKINT_LSIRDIF_Values<RCC::RCC_CLKINT, 0, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSERDIF = RCC_RCC_CLKINT_LSERDIF_Values<RCC::RCC_CLKINT, 1, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using HSIRDIF = RCC_RCC_CLKINT_HSIRDIF_Values<RCC::RCC_CLKINT, 2, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using HSERDIF = RCC_RCC_CLKINT_HSERDIF_Values<RCC::RCC_CLKINT, 3, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using PLLRDIF = RCC_RCC_CLKINT_PLLRDIF_Values<RCC::RCC_CLKINT, 4, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using BORIF = RCC_RCC_CLKINT_BORIF_Values<RCC::RCC_CLKINT, 5, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using MSIRDIF = RCC_RCC_CLKINT_MSIRDIF_Values<RCC::RCC_CLKINT, 6, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using CLKSSIF = RCC_RCC_CLKINT_CLKSSIF_Values<RCC::RCC_CLKINT, 7, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSIRDIEN = RCC_RCC_CLKINT_LSIRDIEN_Values<RCC::RCC_CLKINT, 8, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSERDIEN = RCC_RCC_CLKINT_LSERDIEN_Values<RCC::RCC_CLKINT, 9, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using HSIRDIEN = RCC_RCC_CLKINT_HSIRDIEN_Values<RCC::RCC_CLKINT, 10, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using HSERDIEN = RCC_RCC_CLKINT_HSERDIEN_Values<RCC::RCC_CLKINT, 11, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using PLLRDIEN = RCC_RCC_CLKINT_PLLRDIEN_Values<RCC::RCC_CLKINT, 12, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using BORIEN = RCC_RCC_CLKINT_BORIEN_Values<RCC::RCC_CLKINT, 13, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using MSIRDIEN = RCC_RCC_CLKINT_MSIRDIEN_Values<RCC::RCC_CLKINT, 14, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using MSIRDICLR = RCC_RCC_CLKINT_MSIRDICLR_Values<RCC::RCC_CLKINT, 15, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSIRDICLR = RCC_RCC_CLKINT_LSIRDICLR_Values<RCC::RCC_CLKINT, 16, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSERDICLR = RCC_RCC_CLKINT_LSERDICLR_Values<RCC::RCC_CLKINT, 17, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using HSIRDICLR = RCC_RCC_CLKINT_HSIRDICLR_Values<RCC::RCC_CLKINT, 18, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using HSERDICLR = RCC_RCC_CLKINT_HSERDICLR_Values<RCC::RCC_CLKINT, 19, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using PLLRDICLR = RCC_RCC_CLKINT_PLLRDICLR_Values<RCC::RCC_CLKINT, 20, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using BORICLR = RCC_RCC_CLKINT_BORICLR_Values<RCC::RCC_CLKINT, 21, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using CLKSSICLR = RCC_RCC_CLKINT_CLKSSICLR_Values<RCC::RCC_CLKINT, 23, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSESSIF = RCC_RCC_CLKINT_LSESSIF_Values<RCC::RCC_CLKINT, 24, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSESSIEN = RCC_RCC_CLKINT_LSESSIEN_Values<RCC::RCC_CLKINT, 25, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using LSESSICLR = RCC_RCC_CLKINT_LSESSICLR_Values<RCC::RCC_CLKINT, 26, 1, ReadWriteMode, RCCRCC_CLKINTBase> ;
    using FieldValues = RCC_RCC_CLKINT_LSESSICLR_Values<RCC::RCC_CLKINT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CLKINTPack  = Register<0x40021008, 32, ReadWriteMode, RCCRCC_CLKINTBase, T...> ;

  struct RCCRCC_APB2PRSTBase {} ;

  struct RCC_APB2PRST : public RegisterBase<0x4002100C, 32, ReadWriteMode>
  {
    using AFIORST = RCC_RCC_APB2PRST_AFIORST_Values<RCC::RCC_APB2PRST, 0, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using IOPARST = RCC_RCC_APB2PRST_IOPARST_Values<RCC::RCC_APB2PRST, 2, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using IOPBRST = RCC_RCC_APB2PRST_IOPBRST_Values<RCC::RCC_APB2PRST, 3, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using IOPCRST = RCC_RCC_APB2PRST_IOPCRST_Values<RCC::RCC_APB2PRST, 4, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using IOPDRST = RCC_RCC_APB2PRST_IOPDRST_Values<RCC::RCC_APB2PRST, 5, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using TIM1RST = RCC_RCC_APB2PRST_TIM1RST_Values<RCC::RCC_APB2PRST, 11, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using SPI1RST = RCC_RCC_APB2PRST_SPI1RST_Values<RCC::RCC_APB2PRST, 12, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using TIM8RST = RCC_RCC_APB2PRST_TIM8RST_Values<RCC::RCC_APB2PRST, 13, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using USART1RST = RCC_RCC_APB2PRST_USART1RST_Values<RCC::RCC_APB2PRST, 14, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using UART4RST = RCC_RCC_APB2PRST_UART4RST_Values<RCC::RCC_APB2PRST, 17, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using UART5RST = RCC_RCC_APB2PRST_UART5RST_Values<RCC::RCC_APB2PRST, 18, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using SPI2RST = RCC_RCC_APB2PRST_SPI2RST_Values<RCC::RCC_APB2PRST, 19, 1, ReadWriteMode, RCCRCC_APB2PRSTBase> ;
    using FieldValues = RCC_RCC_APB2PRST_SPI2RST_Values<RCC::RCC_APB2PRST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB2PRSTPack  = Register<0x4002100C, 32, ReadWriteMode, RCCRCC_APB2PRSTBase, T...> ;

  struct RCCRCC_APB1PRSTBase {} ;

  struct RCC_APB1PRST : public RegisterBase<0x40021010, 32, ReadWriteMode>
  {
    using TIM2RST = RCC_RCC_APB1PRST_TIM2RST_Values<RCC::RCC_APB1PRST, 0, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using TIM3RST = RCC_RCC_APB1PRST_TIM3RST_Values<RCC::RCC_APB1PRST, 1, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using TIM4RST = RCC_RCC_APB1PRST_TIM4RST_Values<RCC::RCC_APB1PRST, 2, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using TIM5RST = RCC_RCC_APB1PRST_TIM5RST_Values<RCC::RCC_APB1PRST, 3, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using TIM6RST = RCC_RCC_APB1PRST_TIM6RST_Values<RCC::RCC_APB1PRST, 4, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using TIM7RST = RCC_RCC_APB1PRST_TIM7RST_Values<RCC::RCC_APB1PRST, 5, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using COMPRST = RCC_RCC_APB1PRST_COMPRST_Values<RCC::RCC_APB1PRST, 6, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using TIM9RST = RCC_RCC_APB1PRST_TIM9RST_Values<RCC::RCC_APB1PRST, 9, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using TSCRST = RCC_RCC_APB1PRST_TSCRST_Values<RCC::RCC_APB1PRST, 10, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using WWDGRST = RCC_RCC_APB1PRST_WWDGRST_Values<RCC::RCC_APB1PRST, 11, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using USART2RST = RCC_RCC_APB1PRST_USART2RST_Values<RCC::RCC_APB1PRST, 17, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using USART3RST = RCC_RCC_APB1PRST_USART3RST_Values<RCC::RCC_APB1PRST, 18, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using I2C1RST = RCC_RCC_APB1PRST_I2C1RST_Values<RCC::RCC_APB1PRST, 21, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using I2C2RST = RCC_RCC_APB1PRST_I2C2RST_Values<RCC::RCC_APB1PRST, 22, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using USBRST = RCC_RCC_APB1PRST_USBRST_Values<RCC::RCC_APB1PRST, 23, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using UCDRRST = RCC_RCC_APB1PRST_UCDRRST_Values<RCC::RCC_APB1PRST, 24, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using CANRST = RCC_RCC_APB1PRST_CANRST_Values<RCC::RCC_APB1PRST, 25, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using PWRRST = RCC_RCC_APB1PRST_PWRRST_Values<RCC::RCC_APB1PRST, 28, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using DACRST = RCC_RCC_APB1PRST_DACRST_Values<RCC::RCC_APB1PRST, 29, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using OPARST = RCC_RCC_APB1PRST_OPARST_Values<RCC::RCC_APB1PRST, 31, 1, ReadWriteMode, RCCRCC_APB1PRSTBase> ;
    using FieldValues = RCC_RCC_APB1PRST_OPARST_Values<RCC::RCC_APB1PRST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1PRSTPack  = Register<0x40021010, 32, ReadWriteMode, RCCRCC_APB1PRSTBase, T...> ;

  struct RCCRCC_AHBPCLKENBase {} ;

  struct RCC_AHBPCLKEN : public RegisterBase<0x40021014, 32, ReadWriteMode>
  {
    using DMAEN = RCC_RCC_AHBPCLKEN_DMAEN_Values<RCC::RCC_AHBPCLKEN, 0, 1, ReadWriteMode, RCCRCC_AHBPCLKENBase> ;
    using SRAMEN = RCC_RCC_AHBPCLKEN_SRAMEN_Values<RCC::RCC_AHBPCLKEN, 2, 1, ReadWriteMode, RCCRCC_AHBPCLKENBase> ;
    using FLITFEN = RCC_RCC_AHBPCLKEN_FLITFEN_Values<RCC::RCC_AHBPCLKEN, 4, 1, ReadWriteMode, RCCRCC_AHBPCLKENBase> ;
    using CRCEN = RCC_RCC_AHBPCLKEN_CRCEN_Values<RCC::RCC_AHBPCLKEN, 6, 1, ReadWriteMode, RCCRCC_AHBPCLKENBase> ;
    using RNGCEN = RCC_RCC_AHBPCLKEN_RNGCEN_Values<RCC::RCC_AHBPCLKEN, 9, 1, ReadWriteMode, RCCRCC_AHBPCLKENBase> ;
    using SACEN = RCC_RCC_AHBPCLKEN_SACEN_Values<RCC::RCC_AHBPCLKEN, 11, 1, ReadWriteMode, RCCRCC_AHBPCLKENBase> ;
    using ADCEN = RCC_RCC_AHBPCLKEN_ADCEN_Values<RCC::RCC_AHBPCLKEN, 12, 1, ReadWriteMode, RCCRCC_AHBPCLKENBase> ;
    using FieldValues = RCC_RCC_AHBPCLKEN_ADCEN_Values<RCC::RCC_AHBPCLKEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHBPCLKENPack  = Register<0x40021014, 32, ReadWriteMode, RCCRCC_AHBPCLKENBase, T...> ;

  struct RCCRCC_APB2PCLKENBase {} ;

  struct RCC_APB2PCLKEN : public RegisterBase<0x40021018, 32, ReadWriteMode>
  {
    using AFIOEN = RCC_RCC_APB2PCLKEN_AFIOEN_Values<RCC::RCC_APB2PCLKEN, 0, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using IOPAEN = RCC_RCC_APB2PCLKEN_IOPAEN_Values<RCC::RCC_APB2PCLKEN, 2, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using IOPBEN = RCC_RCC_APB2PCLKEN_IOPBEN_Values<RCC::RCC_APB2PCLKEN, 3, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using IOPCEN = RCC_RCC_APB2PCLKEN_IOPCEN_Values<RCC::RCC_APB2PCLKEN, 4, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using IOPDEN = RCC_RCC_APB2PCLKEN_IOPDEN_Values<RCC::RCC_APB2PCLKEN, 5, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using TIM1EN = RCC_RCC_APB2PCLKEN_TIM1EN_Values<RCC::RCC_APB2PCLKEN, 11, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using SPI1EN = RCC_RCC_APB2PCLKEN_SPI1EN_Values<RCC::RCC_APB2PCLKEN, 12, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using TIM8EN = RCC_RCC_APB2PCLKEN_TIM8EN_Values<RCC::RCC_APB2PCLKEN, 13, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using USART1EN = RCC_RCC_APB2PCLKEN_USART1EN_Values<RCC::RCC_APB2PCLKEN, 14, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using UART4EN = RCC_RCC_APB2PCLKEN_UART4EN_Values<RCC::RCC_APB2PCLKEN, 17, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using UART5EN = RCC_RCC_APB2PCLKEN_UART5EN_Values<RCC::RCC_APB2PCLKEN, 18, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using SPI2EN = RCC_RCC_APB2PCLKEN_SPI2EN_Values<RCC::RCC_APB2PCLKEN, 19, 1, ReadWriteMode, RCCRCC_APB2PCLKENBase> ;
    using FieldValues = RCC_RCC_APB2PCLKEN_SPI2EN_Values<RCC::RCC_APB2PCLKEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB2PCLKENPack  = Register<0x40021018, 32, ReadWriteMode, RCCRCC_APB2PCLKENBase, T...> ;

  struct RCCRCC_APB1PCLKENBase {} ;

  struct RCC_APB1PCLKEN : public RegisterBase<0x4002101C, 32, ReadWriteMode>
  {
    using TIM2EN = RCC_RCC_APB1PCLKEN_TIM2EN_Values<RCC::RCC_APB1PCLKEN, 0, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using TIM3EN = RCC_RCC_APB1PCLKEN_TIM3EN_Values<RCC::RCC_APB1PCLKEN, 1, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using TIM4EN = RCC_RCC_APB1PCLKEN_TIM4EN_Values<RCC::RCC_APB1PCLKEN, 2, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using TIM5EN = RCC_RCC_APB1PCLKEN_TIM5EN_Values<RCC::RCC_APB1PCLKEN, 3, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using TIM6EN = RCC_RCC_APB1PCLKEN_TIM6EN_Values<RCC::RCC_APB1PCLKEN, 4, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using TIM7EN = RCC_RCC_APB1PCLKEN_TIM7EN_Values<RCC::RCC_APB1PCLKEN, 5, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using COMPEN = RCC_RCC_APB1PCLKEN_COMPEN_Values<RCC::RCC_APB1PCLKEN, 6, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using COMPFILTEN = RCC_RCC_APB1PCLKEN_COMPFILTEN_Values<RCC::RCC_APB1PCLKEN, 7, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using AFECEN = RCC_RCC_APB1PCLKEN_AFECEN_Values<RCC::RCC_APB1PCLKEN, 8, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using TIM9EN = RCC_RCC_APB1PCLKEN_TIM9EN_Values<RCC::RCC_APB1PCLKEN, 9, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using TSCEN = RCC_RCC_APB1PCLKEN_TSCEN_Values<RCC::RCC_APB1PCLKEN, 10, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using WWDGEN = RCC_RCC_APB1PCLKEN_WWDGEN_Values<RCC::RCC_APB1PCLKEN, 11, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using USART2EN = RCC_RCC_APB1PCLKEN_USART2EN_Values<RCC::RCC_APB1PCLKEN, 17, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using USART3EN = RCC_RCC_APB1PCLKEN_USART3EN_Values<RCC::RCC_APB1PCLKEN, 18, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using I2C1EN = RCC_RCC_APB1PCLKEN_I2C1EN_Values<RCC::RCC_APB1PCLKEN, 21, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using I2C2EN = RCC_RCC_APB1PCLKEN_I2C2EN_Values<RCC::RCC_APB1PCLKEN, 22, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using USBEN = RCC_RCC_APB1PCLKEN_USBEN_Values<RCC::RCC_APB1PCLKEN, 23, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using CANEN = RCC_RCC_APB1PCLKEN_CANEN_Values<RCC::RCC_APB1PCLKEN, 25, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using PWREN = RCC_RCC_APB1PCLKEN_PWREN_Values<RCC::RCC_APB1PCLKEN, 28, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using DACEN = RCC_RCC_APB1PCLKEN_DACEN_Values<RCC::RCC_APB1PCLKEN, 29, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using OPAMPEN = RCC_RCC_APB1PCLKEN_OPAMPEN_Values<RCC::RCC_APB1PCLKEN, 31, 1, ReadWriteMode, RCCRCC_APB1PCLKENBase> ;
    using FieldValues = RCC_RCC_APB1PCLKEN_OPAMPEN_Values<RCC::RCC_APB1PCLKEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1PCLKENPack  = Register<0x4002101C, 32, ReadWriteMode, RCCRCC_APB1PCLKENBase, T...> ;

  struct RCCRCC_LDCTRLBase {} ;

  struct RCC_LDCTRL : public RegisterBase<0x40021020, 32, ReadWriteMode>
  {
    using LSEEN = RCC_RCC_LDCTRL_LSEEN_Values<RCC::RCC_LDCTRL, 0, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using LSERD = RCC_RCC_LDCTRL_LSERD_Values<RCC::RCC_LDCTRL, 1, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using LSEBP = RCC_RCC_LDCTRL_LSEBP_Values<RCC::RCC_LDCTRL, 2, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using LSECLKSSEN = RCC_RCC_LDCTRL_LSECLKSSEN_Values<RCC::RCC_LDCTRL, 3, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using LSECLKSSF = RCC_RCC_LDCTRL_LSECLKSSF_Values<RCC::RCC_LDCTRL, 4, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using LSXSEL = RCC_RCC_LDCTRL_LSXSEL_Values<RCC::RCC_LDCTRL, 5, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using RTCSEL = RCC_RCC_LDCTRL_RTCSEL_Values<RCC::RCC_LDCTRL, 8, 2, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using RTCEN = RCC_RCC_LDCTRL_RTCEN_Values<RCC::RCC_LDCTRL, 15, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using LDSFTRST = RCC_RCC_LDCTRL_LDSFTRST_Values<RCC::RCC_LDCTRL, 16, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using BDRRSTF = RCC_RCC_LDCTRL_BDRRSTF_Values<RCC::RCC_LDCTRL, 28, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using LDEMCRSTF = RCC_RCC_LDCTRL_LDEMCRSTF_Values<RCC::RCC_LDCTRL, 30, 1, ReadWriteMode, RCCRCC_LDCTRLBase> ;
    using FieldValues = RCC_RCC_LDCTRL_LDEMCRSTF_Values<RCC::RCC_LDCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_LDCTRLPack  = Register<0x40021020, 32, ReadWriteMode, RCCRCC_LDCTRLBase, T...> ;

  struct RCCRCC_CTRLSTSBase {} ;

  struct RCC_CTRLSTS : public RegisterBase<0x40021024, 32, ReadWriteMode>
  {
    using LSIEN = RCC_RCC_CTRLSTS_LSIEN_Values<RCC::RCC_CTRLSTS, 0, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using LSIRD = RCC_RCC_CTRLSTS_LSIRD_Values<RCC::RCC_CTRLSTS, 1, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using MSIEN = RCC_RCC_CTRLSTS_MSIEN_Values<RCC::RCC_CTRLSTS, 2, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using MSIRD = RCC_RCC_CTRLSTS_MSIRD_Values<RCC::RCC_CTRLSTS, 3, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using MSIRANGE = RCC_RCC_CTRLSTS_MSIRANGE_Values<RCC::RCC_CTRLSTS, 4, 3, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using MSITRIM = RCC_RCC_CTRLSTS_MSITRIM_Values<RCC::RCC_CTRLSTS, 15, 8, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using RAMRSTF = RCC_RCC_CTRLSTS_RAMRSTF_Values<RCC::RCC_CTRLSTS, 23, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using RMRSTF = RCC_RCC_CTRLSTS_RMRSTF_Values<RCC::RCC_CTRLSTS, 24, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using MMURSTF = RCC_RCC_CTRLSTS_MMURSTF_Values<RCC::RCC_CTRLSTS, 25, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using PINRSTF = RCC_RCC_CTRLSTS_PINRSTF_Values<RCC::RCC_CTRLSTS, 26, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using PORRSTF = RCC_RCC_CTRLSTS_PORRSTF_Values<RCC::RCC_CTRLSTS, 27, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using SFTRSTF = RCC_RCC_CTRLSTS_SFTRSTF_Values<RCC::RCC_CTRLSTS, 28, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using IWDGRSTF = RCC_RCC_CTRLSTS_IWDGRSTF_Values<RCC::RCC_CTRLSTS, 29, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using WWDGRSTF = RCC_RCC_CTRLSTS_WWDGRSTF_Values<RCC::RCC_CTRLSTS, 30, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using LPWRRSTF = RCC_RCC_CTRLSTS_LPWRRSTF_Values<RCC::RCC_CTRLSTS, 31, 1, ReadWriteMode, RCCRCC_CTRLSTSBase> ;
    using FieldValues = RCC_RCC_CTRLSTS_LPWRRSTF_Values<RCC::RCC_CTRLSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CTRLSTSPack  = Register<0x40021024, 32, ReadWriteMode, RCCRCC_CTRLSTSBase, T...> ;

  struct RCCRCC_AHBPRSTBase {} ;

  struct RCC_AHBPRST : public RegisterBase<0x40021028, 32, ReadWriteMode>
  {
    using RNGCRST = RCC_RCC_AHBPRST_RNGCRST_Values<RCC::RCC_AHBPRST, 9, 1, ReadWriteMode, RCCRCC_AHBPRSTBase> ;
    using SACRST = RCC_RCC_AHBPRST_SACRST_Values<RCC::RCC_AHBPRST, 11, 1, ReadWriteMode, RCCRCC_AHBPRSTBase> ;
    using ADCRST = RCC_RCC_AHBPRST_ADCRST_Values<RCC::RCC_AHBPRST, 12, 1, ReadWriteMode, RCCRCC_AHBPRSTBase> ;
    using FieldValues = RCC_RCC_AHBPRST_ADCRST_Values<RCC::RCC_AHBPRST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHBPRSTPack  = Register<0x40021028, 32, ReadWriteMode, RCCRCC_AHBPRSTBase, T...> ;

  struct RCCRCC_CFG2Base {} ;

  struct RCC_CFG2 : public RegisterBase<0x4002102C, 32, ReadWriteMode>
  {
    using ADCHPRES = RCC_RCC_CFG2_ADCHPRES_Values<RCC::RCC_CFG2, 0, 4, ReadWriteMode, RCCRCC_CFG2Base> ;
    using ADCPLLPRES = RCC_RCC_CFG2_ADCPLLPRES_Values<RCC::RCC_CFG2, 4, 5, ReadWriteMode, RCCRCC_CFG2Base> ;
    using ADC1MPRES = RCC_RCC_CFG2_ADC1MPRES_Values<RCC::RCC_CFG2, 12, 5, ReadWriteMode, RCCRCC_CFG2Base> ;
    using ADC1MSEL = RCC_RCC_CFG2_ADC1MSEL_Values<RCC::RCC_CFG2, 17, 1, ReadWriteMode, RCCRCC_CFG2Base> ;
    using RNGCPRES = RCC_RCC_CFG2_RNGCPRES_Values<RCC::RCC_CFG2, 24, 5, ReadWriteMode, RCCRCC_CFG2Base> ;
    using TIMCLKSEL = RCC_RCC_CFG2_TIMCLKSEL_Values<RCC::RCC_CFG2, 29, 1, ReadWriteMode, RCCRCC_CFG2Base> ;
    using FieldValues = RCC_RCC_CFG2_TIMCLKSEL_Values<RCC::RCC_CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CFG2Pack  = Register<0x4002102C, 32, ReadWriteMode, RCCRCC_CFG2Base, T...> ;

  struct RCCRCC_CFG3Base {} ;

  struct RCC_CFG3 : public RegisterBase<0x40021030, 32, ReadWriteMode>
  {
    using UCDREN = RCC_RCC_CFG3_UCDREN_Values<RCC::RCC_CFG3, 7, 1, ReadWriteMode, RCCRCC_CFG3Base> ;
    using USBXTALESS = RCC_RCC_CFG3_USBXTALESS_Values<RCC::RCC_CFG3, 8, 1, ReadWriteMode, RCCRCC_CFG3Base> ;
    using UCDR300MSEL = RCC_RCC_CFG3_UCDR300MSEL_Values<RCC::RCC_CFG3, 9, 1, ReadWriteMode, RCCRCC_CFG3Base> ;
    using TRNG1MPRES = RCC_RCC_CFG3_TRNG1MPRES_Values<RCC::RCC_CFG3, 11, 5, ReadWriteMode, RCCRCC_CFG3Base> ;
    using TRNG1MSEL = RCC_RCC_CFG3_TRNG1MSEL_Values<RCC::RCC_CFG3, 17, 1, ReadWriteMode, RCCRCC_CFG3Base> ;
    using TRNG1MEN = RCC_RCC_CFG3_TRNG1MEN_Values<RCC::RCC_CFG3, 18, 1, ReadWriteMode, RCCRCC_CFG3Base> ;
    using FieldValues = RCC_RCC_CFG3_TRNG1MEN_Values<RCC::RCC_CFG3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CFG3Pack  = Register<0x40021030, 32, ReadWriteMode, RCCRCC_CFG3Base, T...> ;

  struct RCCRCC_RDCTRLBase {} ;

  struct RCC_RDCTRL : public RegisterBase<0x40021034, 32, ReadWriteMode>
  {
    using LPTIMSEL = RCC_RCC_RDCTRL_LPTIMSEL_Values<RCC::RCC_RDCTRL, 0, 3, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LPUARTSEL = RCC_RCC_RDCTRL_LPUARTSEL_Values<RCC::RCC_RDCTRL, 3, 2, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LPTIMEN = RCC_RCC_RDCTRL_LPTIMEN_Values<RCC::RCC_RDCTRL, 6, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LPUARTEN = RCC_RCC_RDCTRL_LPUARTEN_Values<RCC::RCC_RDCTRL, 7, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LCDEN = RCC_RCC_RDCTRL_LCDEN_Values<RCC::RCC_RDCTRL, 8, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LPRCNTEN = RCC_RCC_RDCTRL_LPRCNTEN_Values<RCC::RCC_RDCTRL, 9, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LPTIMRST = RCC_RCC_RDCTRL_LPTIMRST_Values<RCC::RCC_RDCTRL, 10, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LPUARTRST = RCC_RCC_RDCTRL_LPUARTRST_Values<RCC::RCC_RDCTRL, 11, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LCDRST = RCC_RCC_RDCTRL_LCDRST_Values<RCC::RCC_RDCTRL, 12, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using LPRCNTRST = RCC_RCC_RDCTRL_LPRCNTRST_Values<RCC::RCC_RDCTRL, 13, 1, ReadWriteMode, RCCRCC_RDCTRLBase> ;
    using FieldValues = RCC_RCC_RDCTRL_LPRCNTRST_Values<RCC::RCC_RDCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_RDCTRLPack  = Register<0x40021034, 32, ReadWriteMode, RCCRCC_RDCTRLBase, T...> ;

  struct RCCRCC_PLLHSIPREBase {} ;

  struct RCC_PLLHSIPRE : public RegisterBase<0x40021040, 32, ReadWriteMode>
  {
    using PLLHSIPRE = RCC_RCC_PLLHSIPRE_PLLHSIPRE_Values<RCC::RCC_PLLHSIPRE, 0, 1, ReadWriteMode, RCCRCC_PLLHSIPREBase> ;
    using PLLSRCDIV = RCC_RCC_PLLHSIPRE_PLLSRCDIV_Values<RCC::RCC_PLLHSIPRE, 1, 1, ReadWriteMode, RCCRCC_PLLHSIPREBase> ;
    using FieldValues = RCC_RCC_PLLHSIPRE_PLLSRCDIV_Values<RCC::RCC_PLLHSIPRE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_PLLHSIPREPack  = Register<0x40021040, 32, ReadWriteMode, RCCRCC_PLLHSIPREBase, T...> ;

  struct RCCRCC_SRAM_CTRLSTSBase {} ;

  struct RCC_SRAM_CTRLSTS : public RegisterBase<0x40021044, 32, ReadWriteMode>
  {
    using ERR1IEN = RCC_RCC_SRAM_CTRLSTS_ERR1IEN_Values<RCC::RCC_SRAM_CTRLSTS, 0, 1, ReadWriteMode, RCCRCC_SRAM_CTRLSTSBase> ;
    using ERR1RSTEN = RCC_RCC_SRAM_CTRLSTS_ERR1RSTEN_Values<RCC::RCC_SRAM_CTRLSTS, 1, 1, ReadWriteMode, RCCRCC_SRAM_CTRLSTSBase> ;
    using ERR1STS = RCC_RCC_SRAM_CTRLSTS_ERR1STS_Values<RCC::RCC_SRAM_CTRLSTS, 2, 1, ReadWriteMode, RCCRCC_SRAM_CTRLSTSBase> ;
    using ERR2IEN = RCC_RCC_SRAM_CTRLSTS_ERR2IEN_Values<RCC::RCC_SRAM_CTRLSTS, 3, 1, ReadWriteMode, RCCRCC_SRAM_CTRLSTSBase> ;
    using ERR2RSTEN = RCC_RCC_SRAM_CTRLSTS_ERR2RSTEN_Values<RCC::RCC_SRAM_CTRLSTS, 4, 1, ReadWriteMode, RCCRCC_SRAM_CTRLSTSBase> ;
    using ERR2STS = RCC_RCC_SRAM_CTRLSTS_ERR2STS_Values<RCC::RCC_SRAM_CTRLSTS, 5, 1, ReadWriteMode, RCCRCC_SRAM_CTRLSTSBase> ;
    using FieldValues = RCC_RCC_SRAM_CTRLSTS_ERR2STS_Values<RCC::RCC_SRAM_CTRLSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_SRAM_CTRLSTSPack  = Register<0x40021044, 32, ReadWriteMode, RCCRCC_SRAM_CTRLSTSBase, T...> ;

} ;

