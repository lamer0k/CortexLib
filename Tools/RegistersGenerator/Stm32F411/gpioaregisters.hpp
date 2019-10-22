/*******************************************************************************
* Filename      : gpioaregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOAREGISTERS_HPP)
#define GPIOAREGISTERS_HPP

#include "gpioafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOA
{
  struct GPIOAMODERBase {} ;

  struct MODER : public RegisterBase<0x40020000, 32, ReadWriteMode>
  {
    using MODER15 = GPIOA_MODER_MODER15_Values<GPIOA::MODER, 30, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER14 = GPIOA_MODER_MODER14_Values<GPIOA::MODER, 28, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER13 = GPIOA_MODER_MODER13_Values<GPIOA::MODER, 26, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER12 = GPIOA_MODER_MODER12_Values<GPIOA::MODER, 24, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER11 = GPIOA_MODER_MODER11_Values<GPIOA::MODER, 22, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER10 = GPIOA_MODER_MODER10_Values<GPIOA::MODER, 20, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER9 = GPIOA_MODER_MODER9_Values<GPIOA::MODER, 18, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER8 = GPIOA_MODER_MODER8_Values<GPIOA::MODER, 16, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER7 = GPIOA_MODER_MODER7_Values<GPIOA::MODER, 14, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER6 = GPIOA_MODER_MODER6_Values<GPIOA::MODER, 12, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER5 = GPIOA_MODER_MODER5_Values<GPIOA::MODER, 10, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER4 = GPIOA_MODER_MODER4_Values<GPIOA::MODER, 8, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER3 = GPIOA_MODER_MODER3_Values<GPIOA::MODER, 6, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER2 = GPIOA_MODER_MODER2_Values<GPIOA::MODER, 4, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER1 = GPIOA_MODER_MODER1_Values<GPIOA::MODER, 2, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODER0 = GPIOA_MODER_MODER0_Values<GPIOA::MODER, 0, 2, ReadWriteMode, GPIOAMODERBase> ;
    using FieldValues = GPIOA_MODER_MODER0_Values<GPIOA::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40020000, 32, ReadWriteMode, GPIOAMODERBase, T...> ;

  struct GPIOAOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40020004, 32, ReadWriteMode>
  {
    using OT15 = GPIOA_OTYPER_OT15_Values<GPIOA::OTYPER, 15, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT14 = GPIOA_OTYPER_OT14_Values<GPIOA::OTYPER, 14, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT13 = GPIOA_OTYPER_OT13_Values<GPIOA::OTYPER, 13, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT12 = GPIOA_OTYPER_OT12_Values<GPIOA::OTYPER, 12, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT11 = GPIOA_OTYPER_OT11_Values<GPIOA::OTYPER, 11, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT10 = GPIOA_OTYPER_OT10_Values<GPIOA::OTYPER, 10, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT9 = GPIOA_OTYPER_OT9_Values<GPIOA::OTYPER, 9, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT8 = GPIOA_OTYPER_OT8_Values<GPIOA::OTYPER, 8, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT7 = GPIOA_OTYPER_OT7_Values<GPIOA::OTYPER, 7, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT6 = GPIOA_OTYPER_OT6_Values<GPIOA::OTYPER, 6, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT5 = GPIOA_OTYPER_OT5_Values<GPIOA::OTYPER, 5, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT4 = GPIOA_OTYPER_OT4_Values<GPIOA::OTYPER, 4, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT3 = GPIOA_OTYPER_OT3_Values<GPIOA::OTYPER, 3, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT2 = GPIOA_OTYPER_OT2_Values<GPIOA::OTYPER, 2, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT1 = GPIOA_OTYPER_OT1_Values<GPIOA::OTYPER, 1, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT0 = GPIOA_OTYPER_OT0_Values<GPIOA::OTYPER, 0, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using FieldValues = GPIOA_OTYPER_OT0_Values<GPIOA::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40020004, 32, ReadWriteMode, GPIOAOTYPERBase, T...> ;

  struct GPIOAOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40020008, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOA_OSPEEDR_OSPEEDR15_Values<GPIOA::OSPEEDR, 30, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR14 = GPIOA_OSPEEDR_OSPEEDR14_Values<GPIOA::OSPEEDR, 28, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR13 = GPIOA_OSPEEDR_OSPEEDR13_Values<GPIOA::OSPEEDR, 26, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR12 = GPIOA_OSPEEDR_OSPEEDR12_Values<GPIOA::OSPEEDR, 24, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR11 = GPIOA_OSPEEDR_OSPEEDR11_Values<GPIOA::OSPEEDR, 22, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR10 = GPIOA_OSPEEDR_OSPEEDR10_Values<GPIOA::OSPEEDR, 20, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR9 = GPIOA_OSPEEDR_OSPEEDR9_Values<GPIOA::OSPEEDR, 18, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR8 = GPIOA_OSPEEDR_OSPEEDR8_Values<GPIOA::OSPEEDR, 16, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR7 = GPIOA_OSPEEDR_OSPEEDR7_Values<GPIOA::OSPEEDR, 14, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR6 = GPIOA_OSPEEDR_OSPEEDR6_Values<GPIOA::OSPEEDR, 12, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR5 = GPIOA_OSPEEDR_OSPEEDR5_Values<GPIOA::OSPEEDR, 10, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR4 = GPIOA_OSPEEDR_OSPEEDR4_Values<GPIOA::OSPEEDR, 8, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR3 = GPIOA_OSPEEDR_OSPEEDR3_Values<GPIOA::OSPEEDR, 6, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR2 = GPIOA_OSPEEDR_OSPEEDR2_Values<GPIOA::OSPEEDR, 4, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR1 = GPIOA_OSPEEDR_OSPEEDR1_Values<GPIOA::OSPEEDR, 2, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEEDR0 = GPIOA_OSPEEDR_OSPEEDR0_Values<GPIOA::OSPEEDR, 0, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using FieldValues = GPIOA_OSPEEDR_OSPEEDR0_Values<GPIOA::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40020008, 32, ReadWriteMode, GPIOAOSPEEDRBase, T...> ;

  struct GPIOAPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002000C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOA_PUPDR_PUPDR15_Values<GPIOA::PUPDR, 30, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR14 = GPIOA_PUPDR_PUPDR14_Values<GPIOA::PUPDR, 28, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR13 = GPIOA_PUPDR_PUPDR13_Values<GPIOA::PUPDR, 26, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR12 = GPIOA_PUPDR_PUPDR12_Values<GPIOA::PUPDR, 24, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR11 = GPIOA_PUPDR_PUPDR11_Values<GPIOA::PUPDR, 22, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR10 = GPIOA_PUPDR_PUPDR10_Values<GPIOA::PUPDR, 20, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR9 = GPIOA_PUPDR_PUPDR9_Values<GPIOA::PUPDR, 18, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR8 = GPIOA_PUPDR_PUPDR8_Values<GPIOA::PUPDR, 16, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR7 = GPIOA_PUPDR_PUPDR7_Values<GPIOA::PUPDR, 14, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR6 = GPIOA_PUPDR_PUPDR6_Values<GPIOA::PUPDR, 12, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR5 = GPIOA_PUPDR_PUPDR5_Values<GPIOA::PUPDR, 10, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR4 = GPIOA_PUPDR_PUPDR4_Values<GPIOA::PUPDR, 8, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR3 = GPIOA_PUPDR_PUPDR3_Values<GPIOA::PUPDR, 6, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR2 = GPIOA_PUPDR_PUPDR2_Values<GPIOA::PUPDR, 4, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR1 = GPIOA_PUPDR_PUPDR1_Values<GPIOA::PUPDR, 2, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPDR0 = GPIOA_PUPDR_PUPDR0_Values<GPIOA::PUPDR, 0, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using FieldValues = GPIOA_PUPDR_PUPDR0_Values<GPIOA::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002000C, 32, ReadWriteMode, GPIOAPUPDRBase, T...> ;

  struct GPIOAIDRBase {} ;

  struct IDR : public RegisterBase<0x40020010, 32, ReadMode>
  {
    using IDR15 = GPIOA_IDR_IDR15_Values<GPIOA::IDR, 15, 1, ReadMode, GPIOAIDRBase> ;
    using IDR14 = GPIOA_IDR_IDR14_Values<GPIOA::IDR, 14, 1, ReadMode, GPIOAIDRBase> ;
    using IDR13 = GPIOA_IDR_IDR13_Values<GPIOA::IDR, 13, 1, ReadMode, GPIOAIDRBase> ;
    using IDR12 = GPIOA_IDR_IDR12_Values<GPIOA::IDR, 12, 1, ReadMode, GPIOAIDRBase> ;
    using IDR11 = GPIOA_IDR_IDR11_Values<GPIOA::IDR, 11, 1, ReadMode, GPIOAIDRBase> ;
    using IDR10 = GPIOA_IDR_IDR10_Values<GPIOA::IDR, 10, 1, ReadMode, GPIOAIDRBase> ;
    using IDR9 = GPIOA_IDR_IDR9_Values<GPIOA::IDR, 9, 1, ReadMode, GPIOAIDRBase> ;
    using IDR8 = GPIOA_IDR_IDR8_Values<GPIOA::IDR, 8, 1, ReadMode, GPIOAIDRBase> ;
    using IDR7 = GPIOA_IDR_IDR7_Values<GPIOA::IDR, 7, 1, ReadMode, GPIOAIDRBase> ;
    using IDR6 = GPIOA_IDR_IDR6_Values<GPIOA::IDR, 6, 1, ReadMode, GPIOAIDRBase> ;
    using IDR5 = GPIOA_IDR_IDR5_Values<GPIOA::IDR, 5, 1, ReadMode, GPIOAIDRBase> ;
    using IDR4 = GPIOA_IDR_IDR4_Values<GPIOA::IDR, 4, 1, ReadMode, GPIOAIDRBase> ;
    using IDR3 = GPIOA_IDR_IDR3_Values<GPIOA::IDR, 3, 1, ReadMode, GPIOAIDRBase> ;
    using IDR2 = GPIOA_IDR_IDR2_Values<GPIOA::IDR, 2, 1, ReadMode, GPIOAIDRBase> ;
    using IDR1 = GPIOA_IDR_IDR1_Values<GPIOA::IDR, 1, 1, ReadMode, GPIOAIDRBase> ;
    using IDR0 = GPIOA_IDR_IDR0_Values<GPIOA::IDR, 0, 1, ReadMode, GPIOAIDRBase> ;
    using FieldValues = GPIOA_IDR_IDR0_Values<GPIOA::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40020010, 32, ReadMode, GPIOAIDRBase, T...> ;

  struct GPIOAODRBase {} ;

  struct ODR : public RegisterBase<0x40020014, 32, ReadWriteMode>
  {
    using ODR15 = GPIOA_ODR_ODR15_Values<GPIOA::ODR, 15, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR14 = GPIOA_ODR_ODR14_Values<GPIOA::ODR, 14, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR13 = GPIOA_ODR_ODR13_Values<GPIOA::ODR, 13, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR12 = GPIOA_ODR_ODR12_Values<GPIOA::ODR, 12, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR11 = GPIOA_ODR_ODR11_Values<GPIOA::ODR, 11, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR10 = GPIOA_ODR_ODR10_Values<GPIOA::ODR, 10, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR9 = GPIOA_ODR_ODR9_Values<GPIOA::ODR, 9, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR8 = GPIOA_ODR_ODR8_Values<GPIOA::ODR, 8, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR7 = GPIOA_ODR_ODR7_Values<GPIOA::ODR, 7, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR6 = GPIOA_ODR_ODR6_Values<GPIOA::ODR, 6, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR5 = GPIOA_ODR_ODR5_Values<GPIOA::ODR, 5, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR4 = GPIOA_ODR_ODR4_Values<GPIOA::ODR, 4, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR3 = GPIOA_ODR_ODR3_Values<GPIOA::ODR, 3, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR2 = GPIOA_ODR_ODR2_Values<GPIOA::ODR, 2, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR1 = GPIOA_ODR_ODR1_Values<GPIOA::ODR, 1, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR0 = GPIOA_ODR_ODR0_Values<GPIOA::ODR, 0, 1, ReadWriteMode, GPIOAODRBase> ;
    using FieldValues = GPIOA_ODR_ODR0_Values<GPIOA::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40020014, 32, ReadWriteMode, GPIOAODRBase, T...> ;

  struct GPIOABSRRBase {} ;

  struct BSRR : public RegisterBase<0x40020018, 32, WriteMode>
  {
    using BR15 = GPIOA_BSRR_BR15_Values<GPIOA::BSRR, 31, 1, WriteMode, GPIOABSRRBase> ;
    using BR14 = GPIOA_BSRR_BR14_Values<GPIOA::BSRR, 30, 1, WriteMode, GPIOABSRRBase> ;
    using BR13 = GPIOA_BSRR_BR13_Values<GPIOA::BSRR, 29, 1, WriteMode, GPIOABSRRBase> ;
    using BR12 = GPIOA_BSRR_BR12_Values<GPIOA::BSRR, 28, 1, WriteMode, GPIOABSRRBase> ;
    using BR11 = GPIOA_BSRR_BR11_Values<GPIOA::BSRR, 27, 1, WriteMode, GPIOABSRRBase> ;
    using BR10 = GPIOA_BSRR_BR10_Values<GPIOA::BSRR, 26, 1, WriteMode, GPIOABSRRBase> ;
    using BR9 = GPIOA_BSRR_BR9_Values<GPIOA::BSRR, 25, 1, WriteMode, GPIOABSRRBase> ;
    using BR8 = GPIOA_BSRR_BR8_Values<GPIOA::BSRR, 24, 1, WriteMode, GPIOABSRRBase> ;
    using BR7 = GPIOA_BSRR_BR7_Values<GPIOA::BSRR, 23, 1, WriteMode, GPIOABSRRBase> ;
    using BR6 = GPIOA_BSRR_BR6_Values<GPIOA::BSRR, 22, 1, WriteMode, GPIOABSRRBase> ;
    using BR5 = GPIOA_BSRR_BR5_Values<GPIOA::BSRR, 21, 1, WriteMode, GPIOABSRRBase> ;
    using BR4 = GPIOA_BSRR_BR4_Values<GPIOA::BSRR, 20, 1, WriteMode, GPIOABSRRBase> ;
    using BR3 = GPIOA_BSRR_BR3_Values<GPIOA::BSRR, 19, 1, WriteMode, GPIOABSRRBase> ;
    using BR2 = GPIOA_BSRR_BR2_Values<GPIOA::BSRR, 18, 1, WriteMode, GPIOABSRRBase> ;
    using BR1 = GPIOA_BSRR_BR1_Values<GPIOA::BSRR, 17, 1, WriteMode, GPIOABSRRBase> ;
    using BR0 = GPIOA_BSRR_BR0_Values<GPIOA::BSRR, 16, 1, WriteMode, GPIOABSRRBase> ;
    using BS15 = GPIOA_BSRR_BS15_Values<GPIOA::BSRR, 15, 1, WriteMode, GPIOABSRRBase> ;
    using BS14 = GPIOA_BSRR_BS14_Values<GPIOA::BSRR, 14, 1, WriteMode, GPIOABSRRBase> ;
    using BS13 = GPIOA_BSRR_BS13_Values<GPIOA::BSRR, 13, 1, WriteMode, GPIOABSRRBase> ;
    using BS12 = GPIOA_BSRR_BS12_Values<GPIOA::BSRR, 12, 1, WriteMode, GPIOABSRRBase> ;
    using BS11 = GPIOA_BSRR_BS11_Values<GPIOA::BSRR, 11, 1, WriteMode, GPIOABSRRBase> ;
    using BS10 = GPIOA_BSRR_BS10_Values<GPIOA::BSRR, 10, 1, WriteMode, GPIOABSRRBase> ;
    using BS9 = GPIOA_BSRR_BS9_Values<GPIOA::BSRR, 9, 1, WriteMode, GPIOABSRRBase> ;
    using BS8 = GPIOA_BSRR_BS8_Values<GPIOA::BSRR, 8, 1, WriteMode, GPIOABSRRBase> ;
    using BS7 = GPIOA_BSRR_BS7_Values<GPIOA::BSRR, 7, 1, WriteMode, GPIOABSRRBase> ;
    using BS6 = GPIOA_BSRR_BS6_Values<GPIOA::BSRR, 6, 1, WriteMode, GPIOABSRRBase> ;
    using BS5 = GPIOA_BSRR_BS5_Values<GPIOA::BSRR, 5, 1, WriteMode, GPIOABSRRBase> ;
    using BS4 = GPIOA_BSRR_BS4_Values<GPIOA::BSRR, 4, 1, WriteMode, GPIOABSRRBase> ;
    using BS3 = GPIOA_BSRR_BS3_Values<GPIOA::BSRR, 3, 1, WriteMode, GPIOABSRRBase> ;
    using BS2 = GPIOA_BSRR_BS2_Values<GPIOA::BSRR, 2, 1, WriteMode, GPIOABSRRBase> ;
    using BS1 = GPIOA_BSRR_BS1_Values<GPIOA::BSRR, 1, 1, WriteMode, GPIOABSRRBase> ;
    using BS0 = GPIOA_BSRR_BS0_Values<GPIOA::BSRR, 0, 1, WriteMode, GPIOABSRRBase> ;
    using FieldValues = GPIOA_BSRR_BS0_Values<GPIOA::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40020018, 32, WriteMode, GPIOABSRRBase, T...> ;

  struct GPIOALCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002001C, 32, ReadWriteMode>
  {
    using LCKK = GPIOA_LCKR_LCKK_Values<GPIOA::LCKR, 16, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK15 = GPIOA_LCKR_LCK15_Values<GPIOA::LCKR, 15, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK14 = GPIOA_LCKR_LCK14_Values<GPIOA::LCKR, 14, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK13 = GPIOA_LCKR_LCK13_Values<GPIOA::LCKR, 13, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK12 = GPIOA_LCKR_LCK12_Values<GPIOA::LCKR, 12, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK11 = GPIOA_LCKR_LCK11_Values<GPIOA::LCKR, 11, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK10 = GPIOA_LCKR_LCK10_Values<GPIOA::LCKR, 10, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK9 = GPIOA_LCKR_LCK9_Values<GPIOA::LCKR, 9, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK8 = GPIOA_LCKR_LCK8_Values<GPIOA::LCKR, 8, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK7 = GPIOA_LCKR_LCK7_Values<GPIOA::LCKR, 7, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK6 = GPIOA_LCKR_LCK6_Values<GPIOA::LCKR, 6, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK5 = GPIOA_LCKR_LCK5_Values<GPIOA::LCKR, 5, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK4 = GPIOA_LCKR_LCK4_Values<GPIOA::LCKR, 4, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK3 = GPIOA_LCKR_LCK3_Values<GPIOA::LCKR, 3, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK2 = GPIOA_LCKR_LCK2_Values<GPIOA::LCKR, 2, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK1 = GPIOA_LCKR_LCK1_Values<GPIOA::LCKR, 1, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK0 = GPIOA_LCKR_LCK0_Values<GPIOA::LCKR, 0, 1, ReadWriteMode, GPIOALCKRBase> ;
    using FieldValues = GPIOA_LCKR_LCK0_Values<GPIOA::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002001C, 32, ReadWriteMode, GPIOALCKRBase, T...> ;

  struct GPIOAAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40020020, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOA_AFRL_AFRL7_Values<GPIOA::AFRL, 28, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFRL6 = GPIOA_AFRL_AFRL6_Values<GPIOA::AFRL, 24, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFRL5 = GPIOA_AFRL_AFRL5_Values<GPIOA::AFRL, 20, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFRL4 = GPIOA_AFRL_AFRL4_Values<GPIOA::AFRL, 16, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFRL3 = GPIOA_AFRL_AFRL3_Values<GPIOA::AFRL, 12, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFRL2 = GPIOA_AFRL_AFRL2_Values<GPIOA::AFRL, 8, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFRL1 = GPIOA_AFRL_AFRL1_Values<GPIOA::AFRL, 4, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFRL0 = GPIOA_AFRL_AFRL0_Values<GPIOA::AFRL, 0, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using FieldValues = GPIOA_AFRL_AFRL0_Values<GPIOA::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40020020, 32, ReadWriteMode, GPIOAAFRLBase, T...> ;

  struct GPIOAAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40020024, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOA_AFRH_AFRH15_Values<GPIOA::AFRH, 28, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFRH14 = GPIOA_AFRH_AFRH14_Values<GPIOA::AFRH, 24, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFRH13 = GPIOA_AFRH_AFRH13_Values<GPIOA::AFRH, 20, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFRH12 = GPIOA_AFRH_AFRH12_Values<GPIOA::AFRH, 16, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFRH11 = GPIOA_AFRH_AFRH11_Values<GPIOA::AFRH, 12, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFRH10 = GPIOA_AFRH_AFRH10_Values<GPIOA::AFRH, 8, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFRH9 = GPIOA_AFRH_AFRH9_Values<GPIOA::AFRH, 4, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFRH8 = GPIOA_AFRH_AFRH8_Values<GPIOA::AFRH, 0, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using FieldValues = GPIOA_AFRH_AFRH8_Values<GPIOA::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40020024, 32, ReadWriteMode, GPIOAAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOAREGISTERS_HPP)
