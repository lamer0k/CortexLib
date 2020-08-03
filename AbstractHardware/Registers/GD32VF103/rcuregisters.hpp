/*******************************************************************************
* Filename      : rcuregisters.hpp
*
* Details       : Reset and clock unit. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(RCUREGISTERS_HPP)
#define RCUREGISTERS_HPP

#include "rcufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RCU
{
  struct RCUCTLBase {} ;

  struct CTL : public RegisterBase<0x40021000, 32, ReadWriteMode>
  {
    using IRC8MEN = RCU_CTL_IRC8MEN_Values<RCU::CTL, 0, 1, ReadWriteMode, RCUCTLBase> ;
    using IRC8MSTB = RCU_CTL_IRC8MSTB_Values<RCU::CTL, 1, 1, ReadMode, RCUCTLBase> ;
    using IRC8MADJ = RCU_CTL_IRC8MADJ_Values<RCU::CTL, 3, 5, ReadWriteMode, RCUCTLBase> ;
    using IRC8MCALIB = RCU_CTL_IRC8MCALIB_Values<RCU::CTL, 8, 8, ReadMode, RCUCTLBase> ;
    using HXTALEN = RCU_CTL_HXTALEN_Values<RCU::CTL, 16, 1, ReadWriteMode, RCUCTLBase> ;
    using HXTALSTB = RCU_CTL_HXTALSTB_Values<RCU::CTL, 17, 1, ReadMode, RCUCTLBase> ;
    using HXTALBPS = RCU_CTL_HXTALBPS_Values<RCU::CTL, 18, 1, ReadWriteMode, RCUCTLBase> ;
    using CKMEN = RCU_CTL_CKMEN_Values<RCU::CTL, 19, 1, ReadWriteMode, RCUCTLBase> ;
    using PLLEN = RCU_CTL_PLLEN_Values<RCU::CTL, 24, 1, ReadWriteMode, RCUCTLBase> ;
    using PLLSTB = RCU_CTL_PLLSTB_Values<RCU::CTL, 25, 1, ReadMode, RCUCTLBase> ;
    using PLL1EN = RCU_CTL_PLL1EN_Values<RCU::CTL, 26, 1, ReadWriteMode, RCUCTLBase> ;
    using PLL1STB = RCU_CTL_PLL1STB_Values<RCU::CTL, 27, 1, ReadMode, RCUCTLBase> ;
    using PLL2EN = RCU_CTL_PLL2EN_Values<RCU::CTL, 28, 1, ReadWriteMode, RCUCTLBase> ;
    using PLL2STB = RCU_CTL_PLL2STB_Values<RCU::CTL, 29, 1, ReadMode, RCUCTLBase> ;
    using FieldValues = RCU_CTL_PLL2STB_Values<RCU::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40021000, 32, ReadWriteMode, RCUCTLBase, T...> ;

  struct RCUCFG0Base {} ;

  struct CFG0 : public RegisterBase<0x40021004, 32, ReadWriteMode>
  {
    using SCS = RCU_CFG0_SCS_Values<RCU::CFG0, 0, 2, ReadWriteMode, RCUCFG0Base> ;
    using SCSS = RCU_CFG0_SCSS_Values<RCU::CFG0, 2, 2, ReadMode, RCUCFG0Base> ;
    using AHBPSC = RCU_CFG0_AHBPSC_Values<RCU::CFG0, 4, 4, ReadWriteMode, RCUCFG0Base> ;
    using APB1PSC = RCU_CFG0_APB1PSC_Values<RCU::CFG0, 8, 3, ReadWriteMode, RCUCFG0Base> ;
    using APB2PSC = RCU_CFG0_APB2PSC_Values<RCU::CFG0, 11, 3, ReadWriteMode, RCUCFG0Base> ;
    using ADCPSC_1_0 = RCU_CFG0_ADCPSC_1_0_Values<RCU::CFG0, 14, 2, ReadWriteMode, RCUCFG0Base> ;
    using PLLSEL = RCU_CFG0_PLLSEL_Values<RCU::CFG0, 16, 1, ReadWriteMode, RCUCFG0Base> ;
    using PREDV0_LSB = RCU_CFG0_PREDV0_LSB_Values<RCU::CFG0, 17, 1, ReadWriteMode, RCUCFG0Base> ;
    using PLLMF_3_0 = RCU_CFG0_PLLMF_3_0_Values<RCU::CFG0, 18, 4, ReadWriteMode, RCUCFG0Base> ;
    using USBFSPSC = RCU_CFG0_USBFSPSC_Values<RCU::CFG0, 22, 2, ReadWriteMode, RCUCFG0Base> ;
    using CKOUT0SEL = RCU_CFG0_CKOUT0SEL_Values<RCU::CFG0, 24, 4, ReadWriteMode, RCUCFG0Base> ;
    using ADCPSC_2 = RCU_CFG0_ADCPSC_2_Values<RCU::CFG0, 28, 1, ReadWriteMode, RCUCFG0Base> ;
    using PLLMF_4 = RCU_CFG0_PLLMF_4_Values<RCU::CFG0, 29, 1, ReadWriteMode, RCUCFG0Base> ;
    using FieldValues = RCU_CFG0_PLLMF_4_Values<RCU::CFG0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG0Pack  = Register<0x40021004, 32, ReadWriteMode, RCUCFG0Base, T...> ;

  struct RCUINTBase {} ;

  struct INT : public RegisterBase<0x40021008, 32, ReadWriteMode>
  {
    using IRC40KSTBIF = RCU_INT_IRC40KSTBIF_Values<RCU::INT, 0, 1, ReadMode, RCUINTBase> ;
    using LXTALSTBIF = RCU_INT_LXTALSTBIF_Values<RCU::INT, 1, 1, ReadMode, RCUINTBase> ;
    using IRC8MSTBIF = RCU_INT_IRC8MSTBIF_Values<RCU::INT, 2, 1, ReadMode, RCUINTBase> ;
    using HXTALSTBIF = RCU_INT_HXTALSTBIF_Values<RCU::INT, 3, 1, ReadMode, RCUINTBase> ;
    using PLLSTBIF = RCU_INT_PLLSTBIF_Values<RCU::INT, 4, 1, ReadMode, RCUINTBase> ;
    using PLL1STBIF = RCU_INT_PLL1STBIF_Values<RCU::INT, 5, 1, ReadMode, RCUINTBase> ;
    using PLL2STBIF = RCU_INT_PLL2STBIF_Values<RCU::INT, 6, 1, ReadMode, RCUINTBase> ;
    using CKMIF = RCU_INT_CKMIF_Values<RCU::INT, 7, 1, ReadMode, RCUINTBase> ;
    using IRC40KSTBIE = RCU_INT_IRC40KSTBIE_Values<RCU::INT, 8, 1, ReadWriteMode, RCUINTBase> ;
    using LXTALSTBIE = RCU_INT_LXTALSTBIE_Values<RCU::INT, 9, 1, ReadWriteMode, RCUINTBase> ;
    using IRC8MSTBIE = RCU_INT_IRC8MSTBIE_Values<RCU::INT, 10, 1, ReadWriteMode, RCUINTBase> ;
    using HXTALSTBIE = RCU_INT_HXTALSTBIE_Values<RCU::INT, 11, 1, ReadWriteMode, RCUINTBase> ;
    using PLLSTBIE = RCU_INT_PLLSTBIE_Values<RCU::INT, 12, 1, ReadWriteMode, RCUINTBase> ;
    using PLL1STBIE = RCU_INT_PLL1STBIE_Values<RCU::INT, 13, 1, ReadWriteMode, RCUINTBase> ;
    using PLL2STBIE = RCU_INT_PLL2STBIE_Values<RCU::INT, 14, 1, ReadWriteMode, RCUINTBase> ;
    using IRC40KSTBIC = RCU_INT_IRC40KSTBIC_Values<RCU::INT, 16, 1, WriteMode, RCUINTBase> ;
    using LXTALSTBIC = RCU_INT_LXTALSTBIC_Values<RCU::INT, 17, 1, WriteMode, RCUINTBase> ;
    using IRC8MSTBIC = RCU_INT_IRC8MSTBIC_Values<RCU::INT, 18, 1, WriteMode, RCUINTBase> ;
    using HXTALSTBIC = RCU_INT_HXTALSTBIC_Values<RCU::INT, 19, 1, WriteMode, RCUINTBase> ;
    using PLLSTBIC = RCU_INT_PLLSTBIC_Values<RCU::INT, 20, 1, WriteMode, RCUINTBase> ;
    using PLL1STBIC = RCU_INT_PLL1STBIC_Values<RCU::INT, 21, 1, WriteMode, RCUINTBase> ;
    using PLL2STBIC = RCU_INT_PLL2STBIC_Values<RCU::INT, 22, 1, WriteMode, RCUINTBase> ;
    using CKMIC = RCU_INT_CKMIC_Values<RCU::INT, 23, 1, WriteMode, RCUINTBase> ;
    using FieldValues = RCU_INT_CKMIC_Values<RCU::INT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTPack  = Register<0x40021008, 32, ReadWriteMode, RCUINTBase, T...> ;

  struct RCUAPB2RSTBase {} ;

  struct APB2RST : public RegisterBase<0x4002100C, 32, ReadWriteMode>
  {
    using AFRST = RCU_APB2RST_AFRST_Values<RCU::APB2RST, 0, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using PARST = RCU_APB2RST_PARST_Values<RCU::APB2RST, 2, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using PBRST = RCU_APB2RST_PBRST_Values<RCU::APB2RST, 3, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using PCRST = RCU_APB2RST_PCRST_Values<RCU::APB2RST, 4, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using PDRST = RCU_APB2RST_PDRST_Values<RCU::APB2RST, 5, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using PERST = RCU_APB2RST_PERST_Values<RCU::APB2RST, 6, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using ADC0RST = RCU_APB2RST_ADC0RST_Values<RCU::APB2RST, 9, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using ADC1RST = RCU_APB2RST_ADC1RST_Values<RCU::APB2RST, 10, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using TIMER0RST = RCU_APB2RST_TIMER0RST_Values<RCU::APB2RST, 11, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using SPI0RST = RCU_APB2RST_SPI0RST_Values<RCU::APB2RST, 12, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using USART0RST = RCU_APB2RST_USART0RST_Values<RCU::APB2RST, 14, 1, ReadWriteMode, RCUAPB2RSTBase> ;
    using FieldValues = RCU_APB2RST_USART0RST_Values<RCU::APB2RST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2RSTPack  = Register<0x4002100C, 32, ReadWriteMode, RCUAPB2RSTBase, T...> ;

  struct RCUAPB1RSTBase {} ;

  struct APB1RST : public RegisterBase<0x40021010, 32, ReadWriteMode>
  {
    using TIMER1RST = RCU_APB1RST_TIMER1RST_Values<RCU::APB1RST, 0, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using TIMER2RST = RCU_APB1RST_TIMER2RST_Values<RCU::APB1RST, 1, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using TIMER3RST = RCU_APB1RST_TIMER3RST_Values<RCU::APB1RST, 2, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using TIMER4RST = RCU_APB1RST_TIMER4RST_Values<RCU::APB1RST, 3, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using TIMER5RST = RCU_APB1RST_TIMER5RST_Values<RCU::APB1RST, 4, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using TIMER6RST = RCU_APB1RST_TIMER6RST_Values<RCU::APB1RST, 5, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using WWDGTRST = RCU_APB1RST_WWDGTRST_Values<RCU::APB1RST, 11, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using SPI1RST = RCU_APB1RST_SPI1RST_Values<RCU::APB1RST, 14, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using SPI2RST = RCU_APB1RST_SPI2RST_Values<RCU::APB1RST, 15, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using USART1RST = RCU_APB1RST_USART1RST_Values<RCU::APB1RST, 17, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using USART2RST = RCU_APB1RST_USART2RST_Values<RCU::APB1RST, 18, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using UART3RST = RCU_APB1RST_UART3RST_Values<RCU::APB1RST, 19, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using UART4RST = RCU_APB1RST_UART4RST_Values<RCU::APB1RST, 20, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using I2C0RST = RCU_APB1RST_I2C0RST_Values<RCU::APB1RST, 21, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using I2C1RST = RCU_APB1RST_I2C1RST_Values<RCU::APB1RST, 22, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using CAN0RST = RCU_APB1RST_CAN0RST_Values<RCU::APB1RST, 25, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using CAN1RST = RCU_APB1RST_CAN1RST_Values<RCU::APB1RST, 26, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using BKPIRST = RCU_APB1RST_BKPIRST_Values<RCU::APB1RST, 27, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using PMURST = RCU_APB1RST_PMURST_Values<RCU::APB1RST, 28, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using DACRST = RCU_APB1RST_DACRST_Values<RCU::APB1RST, 29, 1, ReadWriteMode, RCUAPB1RSTBase> ;
    using FieldValues = RCU_APB1RST_DACRST_Values<RCU::APB1RST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1RSTPack  = Register<0x40021010, 32, ReadWriteMode, RCUAPB1RSTBase, T...> ;

  struct RCUAHBENBase {} ;

  struct AHBEN : public RegisterBase<0x40021014, 32, ReadWriteMode>
  {
    using DMA0EN = RCU_AHBEN_DMA0EN_Values<RCU::AHBEN, 0, 1, ReadWriteMode, RCUAHBENBase> ;
    using DMA1EN = RCU_AHBEN_DMA1EN_Values<RCU::AHBEN, 1, 1, ReadWriteMode, RCUAHBENBase> ;
    using SRAMSPEN = RCU_AHBEN_SRAMSPEN_Values<RCU::AHBEN, 2, 1, ReadWriteMode, RCUAHBENBase> ;
    using FMCSPEN = RCU_AHBEN_FMCSPEN_Values<RCU::AHBEN, 4, 1, ReadWriteMode, RCUAHBENBase> ;
    using CRCEN = RCU_AHBEN_CRCEN_Values<RCU::AHBEN, 6, 1, ReadWriteMode, RCUAHBENBase> ;
    using EXMCEN = RCU_AHBEN_EXMCEN_Values<RCU::AHBEN, 8, 1, ReadWriteMode, RCUAHBENBase> ;
    using USBFSEN = RCU_AHBEN_USBFSEN_Values<RCU::AHBEN, 12, 1, ReadWriteMode, RCUAHBENBase> ;
    using FieldValues = RCU_AHBEN_USBFSEN_Values<RCU::AHBEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHBENPack  = Register<0x40021014, 32, ReadWriteMode, RCUAHBENBase, T...> ;

  struct RCUAPB2ENBase {} ;

  struct APB2EN : public RegisterBase<0x40021018, 32, ReadWriteMode>
  {
    using AFEN = RCU_APB2EN_AFEN_Values<RCU::APB2EN, 0, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using PAEN = RCU_APB2EN_PAEN_Values<RCU::APB2EN, 2, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using PBEN = RCU_APB2EN_PBEN_Values<RCU::APB2EN, 3, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using PCEN = RCU_APB2EN_PCEN_Values<RCU::APB2EN, 4, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using PDEN = RCU_APB2EN_PDEN_Values<RCU::APB2EN, 5, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using PEEN = RCU_APB2EN_PEEN_Values<RCU::APB2EN, 6, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using ADC0EN = RCU_APB2EN_ADC0EN_Values<RCU::APB2EN, 9, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using ADC1EN = RCU_APB2EN_ADC1EN_Values<RCU::APB2EN, 10, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using TIMER0EN = RCU_APB2EN_TIMER0EN_Values<RCU::APB2EN, 11, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using SPI0EN = RCU_APB2EN_SPI0EN_Values<RCU::APB2EN, 12, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using USART0EN = RCU_APB2EN_USART0EN_Values<RCU::APB2EN, 14, 1, ReadWriteMode, RCUAPB2ENBase> ;
    using FieldValues = RCU_APB2EN_USART0EN_Values<RCU::APB2EN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2ENPack  = Register<0x40021018, 32, ReadWriteMode, RCUAPB2ENBase, T...> ;

  struct RCUAPB1ENBase {} ;

  struct APB1EN : public RegisterBase<0x4002101C, 32, ReadWriteMode>
  {
    using TIMER1EN = RCU_APB1EN_TIMER1EN_Values<RCU::APB1EN, 0, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using TIMER2EN = RCU_APB1EN_TIMER2EN_Values<RCU::APB1EN, 1, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using TIMER3EN = RCU_APB1EN_TIMER3EN_Values<RCU::APB1EN, 2, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using TIMER4EN = RCU_APB1EN_TIMER4EN_Values<RCU::APB1EN, 3, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using TIMER5EN = RCU_APB1EN_TIMER5EN_Values<RCU::APB1EN, 4, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using TIMER6EN = RCU_APB1EN_TIMER6EN_Values<RCU::APB1EN, 5, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using WWDGTEN = RCU_APB1EN_WWDGTEN_Values<RCU::APB1EN, 11, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using SPI1EN = RCU_APB1EN_SPI1EN_Values<RCU::APB1EN, 14, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using SPI2EN = RCU_APB1EN_SPI2EN_Values<RCU::APB1EN, 15, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using USART1EN = RCU_APB1EN_USART1EN_Values<RCU::APB1EN, 17, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using USART2EN = RCU_APB1EN_USART2EN_Values<RCU::APB1EN, 18, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using UART3EN = RCU_APB1EN_UART3EN_Values<RCU::APB1EN, 19, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using UART4EN = RCU_APB1EN_UART4EN_Values<RCU::APB1EN, 20, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using I2C0EN = RCU_APB1EN_I2C0EN_Values<RCU::APB1EN, 21, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using I2C1EN = RCU_APB1EN_I2C1EN_Values<RCU::APB1EN, 22, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using CAN0EN = RCU_APB1EN_CAN0EN_Values<RCU::APB1EN, 25, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using CAN1EN = RCU_APB1EN_CAN1EN_Values<RCU::APB1EN, 26, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using BKPIEN = RCU_APB1EN_BKPIEN_Values<RCU::APB1EN, 27, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using PMUEN = RCU_APB1EN_PMUEN_Values<RCU::APB1EN, 28, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using DACEN = RCU_APB1EN_DACEN_Values<RCU::APB1EN, 29, 1, ReadWriteMode, RCUAPB1ENBase> ;
    using FieldValues = RCU_APB1EN_DACEN_Values<RCU::APB1EN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1ENPack  = Register<0x4002101C, 32, ReadWriteMode, RCUAPB1ENBase, T...> ;

  struct RCUBDCTLBase {} ;

  struct BDCTL : public RegisterBase<0x40021020, 32, ReadWriteMode>
  {
    using LXTALEN = RCU_BDCTL_LXTALEN_Values<RCU::BDCTL, 0, 1, ReadWriteMode, RCUBDCTLBase> ;
    using LXTALSTB = RCU_BDCTL_LXTALSTB_Values<RCU::BDCTL, 1, 1, ReadMode, RCUBDCTLBase> ;
    using LXTALBPS = RCU_BDCTL_LXTALBPS_Values<RCU::BDCTL, 2, 1, ReadWriteMode, RCUBDCTLBase> ;
    using RTCSRC = RCU_BDCTL_RTCSRC_Values<RCU::BDCTL, 8, 2, ReadWriteMode, RCUBDCTLBase> ;
    using RTCEN = RCU_BDCTL_RTCEN_Values<RCU::BDCTL, 15, 1, ReadWriteMode, RCUBDCTLBase> ;
    using BKPRST = RCU_BDCTL_BKPRST_Values<RCU::BDCTL, 16, 1, ReadWriteMode, RCUBDCTLBase> ;
    using FieldValues = RCU_BDCTL_BKPRST_Values<RCU::BDCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDCTLPack  = Register<0x40021020, 32, ReadWriteMode, RCUBDCTLBase, T...> ;

  struct RCURSTSCKBase {} ;

  struct RSTSCK : public RegisterBase<0x40021024, 32, ReadWriteMode>
  {
    using IRC40KEN = RCU_RSTSCK_IRC40KEN_Values<RCU::RSTSCK, 0, 1, ReadWriteMode, RCURSTSCKBase> ;
    using IRC40KSTB = RCU_RSTSCK_IRC40KSTB_Values<RCU::RSTSCK, 1, 1, ReadMode, RCURSTSCKBase> ;
    using RSTFC = RCU_RSTSCK_RSTFC_Values<RCU::RSTSCK, 24, 1, ReadWriteMode, RCURSTSCKBase> ;
    using EPRSTF = RCU_RSTSCK_EPRSTF_Values<RCU::RSTSCK, 26, 1, ReadMode, RCURSTSCKBase> ;
    using PORRSTF = RCU_RSTSCK_PORRSTF_Values<RCU::RSTSCK, 27, 1, ReadMode, RCURSTSCKBase> ;
    using SWRSTF = RCU_RSTSCK_SWRSTF_Values<RCU::RSTSCK, 28, 1, ReadMode, RCURSTSCKBase> ;
    using FWDGTRSTF = RCU_RSTSCK_FWDGTRSTF_Values<RCU::RSTSCK, 29, 1, ReadMode, RCURSTSCKBase> ;
    using WWDGTRSTF = RCU_RSTSCK_WWDGTRSTF_Values<RCU::RSTSCK, 30, 1, ReadMode, RCURSTSCKBase> ;
    using LPRSTF = RCU_RSTSCK_LPRSTF_Values<RCU::RSTSCK, 31, 1, ReadMode, RCURSTSCKBase> ;
    using FieldValues = RCU_RSTSCK_LPRSTF_Values<RCU::RSTSCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSTSCKPack  = Register<0x40021024, 32, ReadWriteMode, RCURSTSCKBase, T...> ;

  struct RCUAHBRSTBase {} ;

  struct AHBRST : public RegisterBase<0x40021028, 32, ReadWriteMode>
  {
    using USBFSRST = RCU_AHBRST_USBFSRST_Values<RCU::AHBRST, 12, 1, ReadWriteMode, RCUAHBRSTBase> ;
    using FieldValues = RCU_AHBRST_USBFSRST_Values<RCU::AHBRST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHBRSTPack  = Register<0x40021028, 32, ReadWriteMode, RCUAHBRSTBase, T...> ;

  struct RCUCFG1Base {} ;

  struct CFG1 : public RegisterBase<0x4002102C, 32, ReadWriteMode>
  {
    using PREDV0 = RCU_CFG1_PREDV0_Values<RCU::CFG1, 0, 4, ReadWriteMode, RCUCFG1Base> ;
    using PREDV1 = RCU_CFG1_PREDV1_Values<RCU::CFG1, 4, 4, ReadWriteMode, RCUCFG1Base> ;
    using PLL1MF = RCU_CFG1_PLL1MF_Values<RCU::CFG1, 8, 4, ReadWriteMode, RCUCFG1Base> ;
    using PLL2MF = RCU_CFG1_PLL2MF_Values<RCU::CFG1, 12, 4, ReadWriteMode, RCUCFG1Base> ;
    using PREDV0SEL = RCU_CFG1_PREDV0SEL_Values<RCU::CFG1, 16, 1, ReadWriteMode, RCUCFG1Base> ;
    using I2S1SEL = RCU_CFG1_I2S1SEL_Values<RCU::CFG1, 17, 1, ReadWriteMode, RCUCFG1Base> ;
    using I2S2SEL = RCU_CFG1_I2S2SEL_Values<RCU::CFG1, 18, 1, ReadWriteMode, RCUCFG1Base> ;
    using FieldValues = RCU_CFG1_I2S2SEL_Values<RCU::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x4002102C, 32, ReadWriteMode, RCUCFG1Base, T...> ;

  struct RCUDSVBase {} ;

  struct DSV : public RegisterBase<0x40021034, 32, ReadWriteMode>
  {
    using DSLPVS = RCU_DSV_DSLPVS_Values<RCU::DSV, 0, 2, ReadWriteMode, RCUDSVBase> ;
    using FieldValues = RCU_DSV_DSLPVS_Values<RCU::DSV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSVPack  = Register<0x40021034, 32, ReadWriteMode, RCUDSVBase, T...> ;

} ;

#endif //#if !defined(RCUREGISTERS_HPP)
