/*******************************************************************************
* Filename      : afioregisters.hpp
*
* Details       : Alternate-function I/Os. This header file is auto-generated
*                 for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(AFIOREGISTERS_HPP)
#define AFIOREGISTERS_HPP

#include "afiofieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AFIO
{
  struct AFIOECBase {} ;

  struct EC : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using EOE = AFIO_EC_EOE_Values<AFIO::EC, 7, 1, ReadWriteMode, AFIOECBase> ;
    using PORT = AFIO_EC_PORT_Values<AFIO::EC, 4, 3, ReadWriteMode, AFIOECBase> ;
    using PIN = AFIO_EC_PIN_Values<AFIO::EC, 0, 4, ReadWriteMode, AFIOECBase> ;
    using FieldValues = AFIO_EC_PIN_Values<AFIO::EC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECPack  = Register<0x40010000, 32, ReadWriteMode, AFIOECBase, T...> ;

  struct AFIOPCF0Base {} ;

  struct PCF0 : public RegisterBase<0x40010004, 32, ReadWriteMode>
  {
    using TIMER1ITI1_REMAP = AFIO_PCF0_TIMER1ITI1_REMAP_Values<AFIO::PCF0, 29, 1, ReadWriteMode, AFIOPCF0Base> ;
    using SPI2_REMAP = AFIO_PCF0_SPI2_REMAP_Values<AFIO::PCF0, 28, 1, ReadWriteMode, AFIOPCF0Base> ;
    using SWJ_CFG = AFIO_PCF0_SWJ_CFG_Values<AFIO::PCF0, 24, 3, ReadWriteMode, AFIOPCF0Base> ;
    using CAN1_REMAP = AFIO_PCF0_CAN1_REMAP_Values<AFIO::PCF0, 22, 1, ReadWriteMode, AFIOPCF0Base> ;
    using TIMER4CH3_IREMAP = AFIO_PCF0_TIMER4CH3_IREMAP_Values<AFIO::PCF0, 16, 1, ReadWriteMode, AFIOPCF0Base> ;
    using PD01_REMAP = AFIO_PCF0_PD01_REMAP_Values<AFIO::PCF0, 15, 1, ReadWriteMode, AFIOPCF0Base> ;
    using CAN0_REMAP = AFIO_PCF0_CAN0_REMAP_Values<AFIO::PCF0, 13, 2, ReadWriteMode, AFIOPCF0Base> ;
    using TIMER3_REMAP = AFIO_PCF0_TIMER3_REMAP_Values<AFIO::PCF0, 12, 1, ReadWriteMode, AFIOPCF0Base> ;
    using TIMER2_REMAP = AFIO_PCF0_TIMER2_REMAP_Values<AFIO::PCF0, 10, 2, ReadWriteMode, AFIOPCF0Base> ;
    using TIMER1_REMAP = AFIO_PCF0_TIMER1_REMAP_Values<AFIO::PCF0, 8, 2, ReadWriteMode, AFIOPCF0Base> ;
    using TIMER0_REMAP = AFIO_PCF0_TIMER0_REMAP_Values<AFIO::PCF0, 6, 2, ReadWriteMode, AFIOPCF0Base> ;
    using USART2_REMAP = AFIO_PCF0_USART2_REMAP_Values<AFIO::PCF0, 4, 2, ReadWriteMode, AFIOPCF0Base> ;
    using USART1_REMAP = AFIO_PCF0_USART1_REMAP_Values<AFIO::PCF0, 3, 1, ReadWriteMode, AFIOPCF0Base> ;
    using USART0_REMAP = AFIO_PCF0_USART0_REMAP_Values<AFIO::PCF0, 2, 1, ReadWriteMode, AFIOPCF0Base> ;
    using I2C0_REMAP = AFIO_PCF0_I2C0_REMAP_Values<AFIO::PCF0, 1, 1, ReadWriteMode, AFIOPCF0Base> ;
    using SPI0_REMAP = AFIO_PCF0_SPI0_REMAP_Values<AFIO::PCF0, 0, 1, ReadWriteMode, AFIOPCF0Base> ;
    using FieldValues = AFIO_PCF0_SPI0_REMAP_Values<AFIO::PCF0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCF0Pack  = Register<0x40010004, 32, ReadWriteMode, AFIOPCF0Base, T...> ;

  struct AFIOEXTISS0Base {} ;

  struct EXTISS0 : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using EXTI3_SS = AFIO_EXTISS0_EXTI3_SS_Values<AFIO::EXTISS0, 12, 4, ReadWriteMode, AFIOEXTISS0Base> ;
    using EXTI2_SS = AFIO_EXTISS0_EXTI2_SS_Values<AFIO::EXTISS0, 8, 4, ReadWriteMode, AFIOEXTISS0Base> ;
    using EXTI1_SS = AFIO_EXTISS0_EXTI1_SS_Values<AFIO::EXTISS0, 4, 4, ReadWriteMode, AFIOEXTISS0Base> ;
    using EXTI0_SS = AFIO_EXTISS0_EXTI0_SS_Values<AFIO::EXTISS0, 0, 4, ReadWriteMode, AFIOEXTISS0Base> ;
    using FieldValues = AFIO_EXTISS0_EXTI0_SS_Values<AFIO::EXTISS0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTISS0Pack  = Register<0x40010008, 32, ReadWriteMode, AFIOEXTISS0Base, T...> ;

  struct AFIOEXTISS1Base {} ;

  struct EXTISS1 : public RegisterBase<0x4001000C, 32, ReadWriteMode>
  {
    using EXTI7_SS = AFIO_EXTISS1_EXTI7_SS_Values<AFIO::EXTISS1, 12, 4, ReadWriteMode, AFIOEXTISS1Base> ;
    using EXTI6_SS = AFIO_EXTISS1_EXTI6_SS_Values<AFIO::EXTISS1, 8, 4, ReadWriteMode, AFIOEXTISS1Base> ;
    using EXTI5_SS = AFIO_EXTISS1_EXTI5_SS_Values<AFIO::EXTISS1, 4, 4, ReadWriteMode, AFIOEXTISS1Base> ;
    using EXTI4_SS = AFIO_EXTISS1_EXTI4_SS_Values<AFIO::EXTISS1, 0, 4, ReadWriteMode, AFIOEXTISS1Base> ;
    using FieldValues = AFIO_EXTISS1_EXTI4_SS_Values<AFIO::EXTISS1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTISS1Pack  = Register<0x4001000C, 32, ReadWriteMode, AFIOEXTISS1Base, T...> ;

  struct AFIOEXTISS2Base {} ;

  struct EXTISS2 : public RegisterBase<0x40010010, 32, ReadWriteMode>
  {
    using EXTI11_SS = AFIO_EXTISS2_EXTI11_SS_Values<AFIO::EXTISS2, 12, 4, ReadWriteMode, AFIOEXTISS2Base> ;
    using EXTI10_SS = AFIO_EXTISS2_EXTI10_SS_Values<AFIO::EXTISS2, 8, 4, ReadWriteMode, AFIOEXTISS2Base> ;
    using EXTI9_SS = AFIO_EXTISS2_EXTI9_SS_Values<AFIO::EXTISS2, 4, 4, ReadWriteMode, AFIOEXTISS2Base> ;
    using EXTI8_SS = AFIO_EXTISS2_EXTI8_SS_Values<AFIO::EXTISS2, 0, 4, ReadWriteMode, AFIOEXTISS2Base> ;
    using FieldValues = AFIO_EXTISS2_EXTI8_SS_Values<AFIO::EXTISS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTISS2Pack  = Register<0x40010010, 32, ReadWriteMode, AFIOEXTISS2Base, T...> ;

  struct AFIOEXTISS3Base {} ;

  struct EXTISS3 : public RegisterBase<0x40010014, 32, ReadWriteMode>
  {
    using EXTI15_SS = AFIO_EXTISS3_EXTI15_SS_Values<AFIO::EXTISS3, 12, 4, ReadWriteMode, AFIOEXTISS3Base> ;
    using EXTI14_SS = AFIO_EXTISS3_EXTI14_SS_Values<AFIO::EXTISS3, 8, 4, ReadWriteMode, AFIOEXTISS3Base> ;
    using EXTI13_SS = AFIO_EXTISS3_EXTI13_SS_Values<AFIO::EXTISS3, 4, 4, ReadWriteMode, AFIOEXTISS3Base> ;
    using EXTI12_SS = AFIO_EXTISS3_EXTI12_SS_Values<AFIO::EXTISS3, 0, 4, ReadWriteMode, AFIOEXTISS3Base> ;
    using FieldValues = AFIO_EXTISS3_EXTI12_SS_Values<AFIO::EXTISS3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTISS3Pack  = Register<0x40010014, 32, ReadWriteMode, AFIOEXTISS3Base, T...> ;

  struct AFIOPCF1Base {} ;

  struct PCF1 : public RegisterBase<0x4001001C, 32, ReadWriteMode>
  {
    using EXMC_NADV = AFIO_PCF1_EXMC_NADV_Values<AFIO::PCF1, 10, 1, ReadWriteMode, AFIOPCF1Base> ;
    using FieldValues = AFIO_PCF1_EXMC_NADV_Values<AFIO::PCF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCF1Pack  = Register<0x4001001C, 32, ReadWriteMode, AFIOPCF1Base, T...> ;

} ;

#endif //#if !defined(AFIOREGISTERS_HPP)
