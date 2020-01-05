/*******************************************************************************
* Filename      : gpioiregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(GPIOIREGISTERS_HPP)
#define GPIOIREGISTERS_HPP

#include "gpioifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOI
{
  struct GPIOIMODERBase {} ;

  struct MODER : public RegisterBase<0x40022000, 32, ReadWriteMode>
  {
    using MODER15 = GPIOI_MODER_MODER15_Values<GPIOI::MODER, 30, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER14 = GPIOI_MODER_MODER14_Values<GPIOI::MODER, 28, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER13 = GPIOI_MODER_MODER13_Values<GPIOI::MODER, 26, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER12 = GPIOI_MODER_MODER12_Values<GPIOI::MODER, 24, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER11 = GPIOI_MODER_MODER11_Values<GPIOI::MODER, 22, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER10 = GPIOI_MODER_MODER10_Values<GPIOI::MODER, 20, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER9 = GPIOI_MODER_MODER9_Values<GPIOI::MODER, 18, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER8 = GPIOI_MODER_MODER8_Values<GPIOI::MODER, 16, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER7 = GPIOI_MODER_MODER7_Values<GPIOI::MODER, 14, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER6 = GPIOI_MODER_MODER6_Values<GPIOI::MODER, 12, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER5 = GPIOI_MODER_MODER5_Values<GPIOI::MODER, 10, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER4 = GPIOI_MODER_MODER4_Values<GPIOI::MODER, 8, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER3 = GPIOI_MODER_MODER3_Values<GPIOI::MODER, 6, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER2 = GPIOI_MODER_MODER2_Values<GPIOI::MODER, 4, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER1 = GPIOI_MODER_MODER1_Values<GPIOI::MODER, 2, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODER0 = GPIOI_MODER_MODER0_Values<GPIOI::MODER, 0, 2, ReadWriteMode, GPIOIMODERBase> ;
    using FieldValues = GPIOI_MODER_MODER0_Values<GPIOI::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40022000, 32, ReadWriteMode, GPIOIMODERBase, T...> ;

  struct GPIOIOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40022004, 32, ReadWriteMode>
  {
    using OT15 = GPIOI_OTYPER_OT15_Values<GPIOI::OTYPER, 15, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT14 = GPIOI_OTYPER_OT14_Values<GPIOI::OTYPER, 14, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT13 = GPIOI_OTYPER_OT13_Values<GPIOI::OTYPER, 13, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT12 = GPIOI_OTYPER_OT12_Values<GPIOI::OTYPER, 12, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT11 = GPIOI_OTYPER_OT11_Values<GPIOI::OTYPER, 11, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT10 = GPIOI_OTYPER_OT10_Values<GPIOI::OTYPER, 10, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT9 = GPIOI_OTYPER_OT9_Values<GPIOI::OTYPER, 9, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT8 = GPIOI_OTYPER_OT8_Values<GPIOI::OTYPER, 8, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT7 = GPIOI_OTYPER_OT7_Values<GPIOI::OTYPER, 7, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT6 = GPIOI_OTYPER_OT6_Values<GPIOI::OTYPER, 6, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT5 = GPIOI_OTYPER_OT5_Values<GPIOI::OTYPER, 5, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT4 = GPIOI_OTYPER_OT4_Values<GPIOI::OTYPER, 4, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT3 = GPIOI_OTYPER_OT3_Values<GPIOI::OTYPER, 3, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT2 = GPIOI_OTYPER_OT2_Values<GPIOI::OTYPER, 2, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT1 = GPIOI_OTYPER_OT1_Values<GPIOI::OTYPER, 1, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT0 = GPIOI_OTYPER_OT0_Values<GPIOI::OTYPER, 0, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using FieldValues = GPIOI_OTYPER_OT0_Values<GPIOI::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40022004, 32, ReadWriteMode, GPIOIOTYPERBase, T...> ;

  struct GPIOIOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40022008, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOI_OSPEEDR_OSPEEDR15_Values<GPIOI::OSPEEDR, 30, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR14 = GPIOI_OSPEEDR_OSPEEDR14_Values<GPIOI::OSPEEDR, 28, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR13 = GPIOI_OSPEEDR_OSPEEDR13_Values<GPIOI::OSPEEDR, 26, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR12 = GPIOI_OSPEEDR_OSPEEDR12_Values<GPIOI::OSPEEDR, 24, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR11 = GPIOI_OSPEEDR_OSPEEDR11_Values<GPIOI::OSPEEDR, 22, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR10 = GPIOI_OSPEEDR_OSPEEDR10_Values<GPIOI::OSPEEDR, 20, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR9 = GPIOI_OSPEEDR_OSPEEDR9_Values<GPIOI::OSPEEDR, 18, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR8 = GPIOI_OSPEEDR_OSPEEDR8_Values<GPIOI::OSPEEDR, 16, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR7 = GPIOI_OSPEEDR_OSPEEDR7_Values<GPIOI::OSPEEDR, 14, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR6 = GPIOI_OSPEEDR_OSPEEDR6_Values<GPIOI::OSPEEDR, 12, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR5 = GPIOI_OSPEEDR_OSPEEDR5_Values<GPIOI::OSPEEDR, 10, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR4 = GPIOI_OSPEEDR_OSPEEDR4_Values<GPIOI::OSPEEDR, 8, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR3 = GPIOI_OSPEEDR_OSPEEDR3_Values<GPIOI::OSPEEDR, 6, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR2 = GPIOI_OSPEEDR_OSPEEDR2_Values<GPIOI::OSPEEDR, 4, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR1 = GPIOI_OSPEEDR_OSPEEDR1_Values<GPIOI::OSPEEDR, 2, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEEDR0 = GPIOI_OSPEEDR_OSPEEDR0_Values<GPIOI::OSPEEDR, 0, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using FieldValues = GPIOI_OSPEEDR_OSPEEDR0_Values<GPIOI::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40022008, 32, ReadWriteMode, GPIOIOSPEEDRBase, T...> ;

  struct GPIOIPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002200C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOI_PUPDR_PUPDR15_Values<GPIOI::PUPDR, 30, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR14 = GPIOI_PUPDR_PUPDR14_Values<GPIOI::PUPDR, 28, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR13 = GPIOI_PUPDR_PUPDR13_Values<GPIOI::PUPDR, 26, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR12 = GPIOI_PUPDR_PUPDR12_Values<GPIOI::PUPDR, 24, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR11 = GPIOI_PUPDR_PUPDR11_Values<GPIOI::PUPDR, 22, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR10 = GPIOI_PUPDR_PUPDR10_Values<GPIOI::PUPDR, 20, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR9 = GPIOI_PUPDR_PUPDR9_Values<GPIOI::PUPDR, 18, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR8 = GPIOI_PUPDR_PUPDR8_Values<GPIOI::PUPDR, 16, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR7 = GPIOI_PUPDR_PUPDR7_Values<GPIOI::PUPDR, 14, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR6 = GPIOI_PUPDR_PUPDR6_Values<GPIOI::PUPDR, 12, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR5 = GPIOI_PUPDR_PUPDR5_Values<GPIOI::PUPDR, 10, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR4 = GPIOI_PUPDR_PUPDR4_Values<GPIOI::PUPDR, 8, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR3 = GPIOI_PUPDR_PUPDR3_Values<GPIOI::PUPDR, 6, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR2 = GPIOI_PUPDR_PUPDR2_Values<GPIOI::PUPDR, 4, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR1 = GPIOI_PUPDR_PUPDR1_Values<GPIOI::PUPDR, 2, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPDR0 = GPIOI_PUPDR_PUPDR0_Values<GPIOI::PUPDR, 0, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using FieldValues = GPIOI_PUPDR_PUPDR0_Values<GPIOI::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002200C, 32, ReadWriteMode, GPIOIPUPDRBase, T...> ;

  struct GPIOIIDRBase {} ;

  struct IDR : public RegisterBase<0x40022010, 32, ReadMode>
  {
    using IDR15 = GPIOI_IDR_IDR15_Values<GPIOI::IDR, 15, 1, ReadMode, GPIOIIDRBase> ;
    using IDR14 = GPIOI_IDR_IDR14_Values<GPIOI::IDR, 14, 1, ReadMode, GPIOIIDRBase> ;
    using IDR13 = GPIOI_IDR_IDR13_Values<GPIOI::IDR, 13, 1, ReadMode, GPIOIIDRBase> ;
    using IDR12 = GPIOI_IDR_IDR12_Values<GPIOI::IDR, 12, 1, ReadMode, GPIOIIDRBase> ;
    using IDR11 = GPIOI_IDR_IDR11_Values<GPIOI::IDR, 11, 1, ReadMode, GPIOIIDRBase> ;
    using IDR10 = GPIOI_IDR_IDR10_Values<GPIOI::IDR, 10, 1, ReadMode, GPIOIIDRBase> ;
    using IDR9 = GPIOI_IDR_IDR9_Values<GPIOI::IDR, 9, 1, ReadMode, GPIOIIDRBase> ;
    using IDR8 = GPIOI_IDR_IDR8_Values<GPIOI::IDR, 8, 1, ReadMode, GPIOIIDRBase> ;
    using IDR7 = GPIOI_IDR_IDR7_Values<GPIOI::IDR, 7, 1, ReadMode, GPIOIIDRBase> ;
    using IDR6 = GPIOI_IDR_IDR6_Values<GPIOI::IDR, 6, 1, ReadMode, GPIOIIDRBase> ;
    using IDR5 = GPIOI_IDR_IDR5_Values<GPIOI::IDR, 5, 1, ReadMode, GPIOIIDRBase> ;
    using IDR4 = GPIOI_IDR_IDR4_Values<GPIOI::IDR, 4, 1, ReadMode, GPIOIIDRBase> ;
    using IDR3 = GPIOI_IDR_IDR3_Values<GPIOI::IDR, 3, 1, ReadMode, GPIOIIDRBase> ;
    using IDR2 = GPIOI_IDR_IDR2_Values<GPIOI::IDR, 2, 1, ReadMode, GPIOIIDRBase> ;
    using IDR1 = GPIOI_IDR_IDR1_Values<GPIOI::IDR, 1, 1, ReadMode, GPIOIIDRBase> ;
    using IDR0 = GPIOI_IDR_IDR0_Values<GPIOI::IDR, 0, 1, ReadMode, GPIOIIDRBase> ;
    using FieldValues = GPIOI_IDR_IDR0_Values<GPIOI::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40022010, 32, ReadMode, GPIOIIDRBase, T...> ;

  struct GPIOIODRBase {} ;

  struct ODR : public RegisterBase<0x40022014, 32, ReadWriteMode>
  {
    using ODR15 = GPIOI_ODR_ODR15_Values<GPIOI::ODR, 15, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR14 = GPIOI_ODR_ODR14_Values<GPIOI::ODR, 14, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR13 = GPIOI_ODR_ODR13_Values<GPIOI::ODR, 13, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR12 = GPIOI_ODR_ODR12_Values<GPIOI::ODR, 12, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR11 = GPIOI_ODR_ODR11_Values<GPIOI::ODR, 11, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR10 = GPIOI_ODR_ODR10_Values<GPIOI::ODR, 10, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR9 = GPIOI_ODR_ODR9_Values<GPIOI::ODR, 9, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR8 = GPIOI_ODR_ODR8_Values<GPIOI::ODR, 8, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR7 = GPIOI_ODR_ODR7_Values<GPIOI::ODR, 7, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR6 = GPIOI_ODR_ODR6_Values<GPIOI::ODR, 6, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR5 = GPIOI_ODR_ODR5_Values<GPIOI::ODR, 5, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR4 = GPIOI_ODR_ODR4_Values<GPIOI::ODR, 4, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR3 = GPIOI_ODR_ODR3_Values<GPIOI::ODR, 3, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR2 = GPIOI_ODR_ODR2_Values<GPIOI::ODR, 2, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR1 = GPIOI_ODR_ODR1_Values<GPIOI::ODR, 1, 1, ReadWriteMode, GPIOIODRBase> ;
    using ODR0 = GPIOI_ODR_ODR0_Values<GPIOI::ODR, 0, 1, ReadWriteMode, GPIOIODRBase> ;
    using FieldValues = GPIOI_ODR_ODR0_Values<GPIOI::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40022014, 32, ReadWriteMode, GPIOIODRBase, T...> ;

  struct GPIOIBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40022018, 32, WriteMode>
  {
    using BR15 = GPIOI_BSRR_BR15_Values<GPIOI::BSRR, 31, 1, WriteMode, GPIOIBSRRBase> ;
    using BR14 = GPIOI_BSRR_BR14_Values<GPIOI::BSRR, 30, 1, WriteMode, GPIOIBSRRBase> ;
    using BR13 = GPIOI_BSRR_BR13_Values<GPIOI::BSRR, 29, 1, WriteMode, GPIOIBSRRBase> ;
    using BR12 = GPIOI_BSRR_BR12_Values<GPIOI::BSRR, 28, 1, WriteMode, GPIOIBSRRBase> ;
    using BR11 = GPIOI_BSRR_BR11_Values<GPIOI::BSRR, 27, 1, WriteMode, GPIOIBSRRBase> ;
    using BR10 = GPIOI_BSRR_BR10_Values<GPIOI::BSRR, 26, 1, WriteMode, GPIOIBSRRBase> ;
    using BR9 = GPIOI_BSRR_BR9_Values<GPIOI::BSRR, 25, 1, WriteMode, GPIOIBSRRBase> ;
    using BR8 = GPIOI_BSRR_BR8_Values<GPIOI::BSRR, 24, 1, WriteMode, GPIOIBSRRBase> ;
    using BR7 = GPIOI_BSRR_BR7_Values<GPIOI::BSRR, 23, 1, WriteMode, GPIOIBSRRBase> ;
    using BR6 = GPIOI_BSRR_BR6_Values<GPIOI::BSRR, 22, 1, WriteMode, GPIOIBSRRBase> ;
    using BR5 = GPIOI_BSRR_BR5_Values<GPIOI::BSRR, 21, 1, WriteMode, GPIOIBSRRBase> ;
    using BR4 = GPIOI_BSRR_BR4_Values<GPIOI::BSRR, 20, 1, WriteMode, GPIOIBSRRBase> ;
    using BR3 = GPIOI_BSRR_BR3_Values<GPIOI::BSRR, 19, 1, WriteMode, GPIOIBSRRBase> ;
    using BR2 = GPIOI_BSRR_BR2_Values<GPIOI::BSRR, 18, 1, WriteMode, GPIOIBSRRBase> ;
    using BR1 = GPIOI_BSRR_BR1_Values<GPIOI::BSRR, 17, 1, WriteMode, GPIOIBSRRBase> ;
    using BR0 = GPIOI_BSRR_BR0_Values<GPIOI::BSRR, 16, 1, WriteMode, GPIOIBSRRBase> ;
    using BS15 = GPIOI_BSRR_BS15_Values<GPIOI::BSRR, 15, 1, WriteMode, GPIOIBSRRBase> ;
    using BS14 = GPIOI_BSRR_BS14_Values<GPIOI::BSRR, 14, 1, WriteMode, GPIOIBSRRBase> ;
    using BS13 = GPIOI_BSRR_BS13_Values<GPIOI::BSRR, 13, 1, WriteMode, GPIOIBSRRBase> ;
    using BS12 = GPIOI_BSRR_BS12_Values<GPIOI::BSRR, 12, 1, WriteMode, GPIOIBSRRBase> ;
    using BS11 = GPIOI_BSRR_BS11_Values<GPIOI::BSRR, 11, 1, WriteMode, GPIOIBSRRBase> ;
    using BS10 = GPIOI_BSRR_BS10_Values<GPIOI::BSRR, 10, 1, WriteMode, GPIOIBSRRBase> ;
    using BS9 = GPIOI_BSRR_BS9_Values<GPIOI::BSRR, 9, 1, WriteMode, GPIOIBSRRBase> ;
    using BS8 = GPIOI_BSRR_BS8_Values<GPIOI::BSRR, 8, 1, WriteMode, GPIOIBSRRBase> ;
    using BS7 = GPIOI_BSRR_BS7_Values<GPIOI::BSRR, 7, 1, WriteMode, GPIOIBSRRBase> ;
    using BS6 = GPIOI_BSRR_BS6_Values<GPIOI::BSRR, 6, 1, WriteMode, GPIOIBSRRBase> ;
    using BS5 = GPIOI_BSRR_BS5_Values<GPIOI::BSRR, 5, 1, WriteMode, GPIOIBSRRBase> ;
    using BS4 = GPIOI_BSRR_BS4_Values<GPIOI::BSRR, 4, 1, WriteMode, GPIOIBSRRBase> ;
    using BS3 = GPIOI_BSRR_BS3_Values<GPIOI::BSRR, 3, 1, WriteMode, GPIOIBSRRBase> ;
    using BS2 = GPIOI_BSRR_BS2_Values<GPIOI::BSRR, 2, 1, WriteMode, GPIOIBSRRBase> ;
    using BS1 = GPIOI_BSRR_BS1_Values<GPIOI::BSRR, 1, 1, WriteMode, GPIOIBSRRBase> ;
    using BS0 = GPIOI_BSRR_BS0_Values<GPIOI::BSRR, 0, 1, WriteMode, GPIOIBSRRBase> ;
    using FieldValues = GPIOI_BSRR_BS0_Values<GPIOI::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40022018, 32, WriteMode, GPIOIBSRRBase, T...> ;

  struct GPIOILCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002201C, 32, ReadWriteMode>
  {
    using LCKK = GPIOI_LCKR_LCKK_Values<GPIOI::LCKR, 16, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK15 = GPIOI_LCKR_LCK15_Values<GPIOI::LCKR, 15, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK14 = GPIOI_LCKR_LCK14_Values<GPIOI::LCKR, 14, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK13 = GPIOI_LCKR_LCK13_Values<GPIOI::LCKR, 13, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK12 = GPIOI_LCKR_LCK12_Values<GPIOI::LCKR, 12, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK11 = GPIOI_LCKR_LCK11_Values<GPIOI::LCKR, 11, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK10 = GPIOI_LCKR_LCK10_Values<GPIOI::LCKR, 10, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK9 = GPIOI_LCKR_LCK9_Values<GPIOI::LCKR, 9, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK8 = GPIOI_LCKR_LCK8_Values<GPIOI::LCKR, 8, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK7 = GPIOI_LCKR_LCK7_Values<GPIOI::LCKR, 7, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK6 = GPIOI_LCKR_LCK6_Values<GPIOI::LCKR, 6, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK5 = GPIOI_LCKR_LCK5_Values<GPIOI::LCKR, 5, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK4 = GPIOI_LCKR_LCK4_Values<GPIOI::LCKR, 4, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK3 = GPIOI_LCKR_LCK3_Values<GPIOI::LCKR, 3, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK2 = GPIOI_LCKR_LCK2_Values<GPIOI::LCKR, 2, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK1 = GPIOI_LCKR_LCK1_Values<GPIOI::LCKR, 1, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK0 = GPIOI_LCKR_LCK0_Values<GPIOI::LCKR, 0, 1, ReadWriteMode, GPIOILCKRBase> ;
    using FieldValues = GPIOI_LCKR_LCK0_Values<GPIOI::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002201C, 32, ReadWriteMode, GPIOILCKRBase, T...> ;

  struct GPIOIAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40022020, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOI_AFRL_AFRL7_Values<GPIOI::AFRL, 28, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFRL6 = GPIOI_AFRL_AFRL6_Values<GPIOI::AFRL, 24, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFRL5 = GPIOI_AFRL_AFRL5_Values<GPIOI::AFRL, 20, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFRL4 = GPIOI_AFRL_AFRL4_Values<GPIOI::AFRL, 16, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFRL3 = GPIOI_AFRL_AFRL3_Values<GPIOI::AFRL, 12, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFRL2 = GPIOI_AFRL_AFRL2_Values<GPIOI::AFRL, 8, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFRL1 = GPIOI_AFRL_AFRL1_Values<GPIOI::AFRL, 4, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFRL0 = GPIOI_AFRL_AFRL0_Values<GPIOI::AFRL, 0, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using FieldValues = GPIOI_AFRL_AFRL0_Values<GPIOI::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40022020, 32, ReadWriteMode, GPIOIAFRLBase, T...> ;

  struct GPIOIAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40022024, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOI_AFRH_AFRH15_Values<GPIOI::AFRH, 28, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFRH14 = GPIOI_AFRH_AFRH14_Values<GPIOI::AFRH, 24, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFRH13 = GPIOI_AFRH_AFRH13_Values<GPIOI::AFRH, 20, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFRH12 = GPIOI_AFRH_AFRH12_Values<GPIOI::AFRH, 16, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFRH11 = GPIOI_AFRH_AFRH11_Values<GPIOI::AFRH, 12, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFRH10 = GPIOI_AFRH_AFRH10_Values<GPIOI::AFRH, 8, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFRH9 = GPIOI_AFRH_AFRH9_Values<GPIOI::AFRH, 4, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFRH8 = GPIOI_AFRH_AFRH8_Values<GPIOI::AFRH, 0, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using FieldValues = GPIOI_AFRH_AFRH8_Values<GPIOI::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40022024, 32, ReadWriteMode, GPIOIAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOIREGISTERS_HPP)
