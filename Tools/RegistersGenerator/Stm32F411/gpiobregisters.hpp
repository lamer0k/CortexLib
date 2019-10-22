/*******************************************************************************
* Filename      : gpiobregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOBREGISTERS_HPP)
#define GPIOBREGISTERS_HPP

#include "gpiobfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOB
{
  struct GPIOBMODERBase {} ;

  struct MODER : public RegisterBase<0x40020400, 32, ReadWriteMode>
  {
    using MODER15 = GPIOB_MODER_MODER15_Values<GPIOB::MODER, 30, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER14 = GPIOB_MODER_MODER14_Values<GPIOB::MODER, 28, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER13 = GPIOB_MODER_MODER13_Values<GPIOB::MODER, 26, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER12 = GPIOB_MODER_MODER12_Values<GPIOB::MODER, 24, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER11 = GPIOB_MODER_MODER11_Values<GPIOB::MODER, 22, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER10 = GPIOB_MODER_MODER10_Values<GPIOB::MODER, 20, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER9 = GPIOB_MODER_MODER9_Values<GPIOB::MODER, 18, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER8 = GPIOB_MODER_MODER8_Values<GPIOB::MODER, 16, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER7 = GPIOB_MODER_MODER7_Values<GPIOB::MODER, 14, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER6 = GPIOB_MODER_MODER6_Values<GPIOB::MODER, 12, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER5 = GPIOB_MODER_MODER5_Values<GPIOB::MODER, 10, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER4 = GPIOB_MODER_MODER4_Values<GPIOB::MODER, 8, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER3 = GPIOB_MODER_MODER3_Values<GPIOB::MODER, 6, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER2 = GPIOB_MODER_MODER2_Values<GPIOB::MODER, 4, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER1 = GPIOB_MODER_MODER1_Values<GPIOB::MODER, 2, 2, ReadWriteMode, GPIOBMODERBase> ;
    using MODER0 = GPIOB_MODER_MODER0_Values<GPIOB::MODER, 0, 2, ReadWriteMode, GPIOBMODERBase> ;
    using FieldValues = GPIOB_MODER_MODER0_Values<GPIOB::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40020400, 32, ReadWriteMode, GPIOBMODERBase, T...> ;

  struct GPIOBOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40020404, 32, ReadWriteMode>
  {
    using OT15 = GPIOB_OTYPER_OT15_Values<GPIOB::OTYPER, 15, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT14 = GPIOB_OTYPER_OT14_Values<GPIOB::OTYPER, 14, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT13 = GPIOB_OTYPER_OT13_Values<GPIOB::OTYPER, 13, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT12 = GPIOB_OTYPER_OT12_Values<GPIOB::OTYPER, 12, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT11 = GPIOB_OTYPER_OT11_Values<GPIOB::OTYPER, 11, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT10 = GPIOB_OTYPER_OT10_Values<GPIOB::OTYPER, 10, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT9 = GPIOB_OTYPER_OT9_Values<GPIOB::OTYPER, 9, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT8 = GPIOB_OTYPER_OT8_Values<GPIOB::OTYPER, 8, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT7 = GPIOB_OTYPER_OT7_Values<GPIOB::OTYPER, 7, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT6 = GPIOB_OTYPER_OT6_Values<GPIOB::OTYPER, 6, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT5 = GPIOB_OTYPER_OT5_Values<GPIOB::OTYPER, 5, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT4 = GPIOB_OTYPER_OT4_Values<GPIOB::OTYPER, 4, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT3 = GPIOB_OTYPER_OT3_Values<GPIOB::OTYPER, 3, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT2 = GPIOB_OTYPER_OT2_Values<GPIOB::OTYPER, 2, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT1 = GPIOB_OTYPER_OT1_Values<GPIOB::OTYPER, 1, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using OT0 = GPIOB_OTYPER_OT0_Values<GPIOB::OTYPER, 0, 1, ReadWriteMode, GPIOBOTYPERBase> ;
    using FieldValues = GPIOB_OTYPER_OT0_Values<GPIOB::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40020404, 32, ReadWriteMode, GPIOBOTYPERBase, T...> ;

  struct GPIOBOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40020408, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOB_OSPEEDR_OSPEEDR15_Values<GPIOB::OSPEEDR, 30, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR14 = GPIOB_OSPEEDR_OSPEEDR14_Values<GPIOB::OSPEEDR, 28, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR13 = GPIOB_OSPEEDR_OSPEEDR13_Values<GPIOB::OSPEEDR, 26, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR12 = GPIOB_OSPEEDR_OSPEEDR12_Values<GPIOB::OSPEEDR, 24, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR11 = GPIOB_OSPEEDR_OSPEEDR11_Values<GPIOB::OSPEEDR, 22, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR10 = GPIOB_OSPEEDR_OSPEEDR10_Values<GPIOB::OSPEEDR, 20, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR9 = GPIOB_OSPEEDR_OSPEEDR9_Values<GPIOB::OSPEEDR, 18, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR8 = GPIOB_OSPEEDR_OSPEEDR8_Values<GPIOB::OSPEEDR, 16, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR7 = GPIOB_OSPEEDR_OSPEEDR7_Values<GPIOB::OSPEEDR, 14, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR6 = GPIOB_OSPEEDR_OSPEEDR6_Values<GPIOB::OSPEEDR, 12, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR5 = GPIOB_OSPEEDR_OSPEEDR5_Values<GPIOB::OSPEEDR, 10, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR4 = GPIOB_OSPEEDR_OSPEEDR4_Values<GPIOB::OSPEEDR, 8, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR3 = GPIOB_OSPEEDR_OSPEEDR3_Values<GPIOB::OSPEEDR, 6, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR2 = GPIOB_OSPEEDR_OSPEEDR2_Values<GPIOB::OSPEEDR, 4, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR1 = GPIOB_OSPEEDR_OSPEEDR1_Values<GPIOB::OSPEEDR, 2, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using OSPEEDR0 = GPIOB_OSPEEDR_OSPEEDR0_Values<GPIOB::OSPEEDR, 0, 2, ReadWriteMode, GPIOBOSPEEDRBase> ;
    using FieldValues = GPIOB_OSPEEDR_OSPEEDR0_Values<GPIOB::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40020408, 32, ReadWriteMode, GPIOBOSPEEDRBase, T...> ;

  struct GPIOBPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002040C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOB_PUPDR_PUPDR15_Values<GPIOB::PUPDR, 30, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR14 = GPIOB_PUPDR_PUPDR14_Values<GPIOB::PUPDR, 28, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR13 = GPIOB_PUPDR_PUPDR13_Values<GPIOB::PUPDR, 26, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR12 = GPIOB_PUPDR_PUPDR12_Values<GPIOB::PUPDR, 24, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR11 = GPIOB_PUPDR_PUPDR11_Values<GPIOB::PUPDR, 22, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR10 = GPIOB_PUPDR_PUPDR10_Values<GPIOB::PUPDR, 20, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR9 = GPIOB_PUPDR_PUPDR9_Values<GPIOB::PUPDR, 18, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR8 = GPIOB_PUPDR_PUPDR8_Values<GPIOB::PUPDR, 16, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR7 = GPIOB_PUPDR_PUPDR7_Values<GPIOB::PUPDR, 14, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR6 = GPIOB_PUPDR_PUPDR6_Values<GPIOB::PUPDR, 12, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR5 = GPIOB_PUPDR_PUPDR5_Values<GPIOB::PUPDR, 10, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR4 = GPIOB_PUPDR_PUPDR4_Values<GPIOB::PUPDR, 8, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR3 = GPIOB_PUPDR_PUPDR3_Values<GPIOB::PUPDR, 6, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR2 = GPIOB_PUPDR_PUPDR2_Values<GPIOB::PUPDR, 4, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR1 = GPIOB_PUPDR_PUPDR1_Values<GPIOB::PUPDR, 2, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using PUPDR0 = GPIOB_PUPDR_PUPDR0_Values<GPIOB::PUPDR, 0, 2, ReadWriteMode, GPIOBPUPDRBase> ;
    using FieldValues = GPIOB_PUPDR_PUPDR0_Values<GPIOB::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002040C, 32, ReadWriteMode, GPIOBPUPDRBase, T...> ;

  struct GPIOBIDRBase {} ;

  struct IDR : public RegisterBase<0x40020410, 32, ReadMode>
  {
    using IDR15 = GPIOB_IDR_IDR15_Values<GPIOB::IDR, 15, 1, ReadMode, GPIOBIDRBase> ;
    using IDR14 = GPIOB_IDR_IDR14_Values<GPIOB::IDR, 14, 1, ReadMode, GPIOBIDRBase> ;
    using IDR13 = GPIOB_IDR_IDR13_Values<GPIOB::IDR, 13, 1, ReadMode, GPIOBIDRBase> ;
    using IDR12 = GPIOB_IDR_IDR12_Values<GPIOB::IDR, 12, 1, ReadMode, GPIOBIDRBase> ;
    using IDR11 = GPIOB_IDR_IDR11_Values<GPIOB::IDR, 11, 1, ReadMode, GPIOBIDRBase> ;
    using IDR10 = GPIOB_IDR_IDR10_Values<GPIOB::IDR, 10, 1, ReadMode, GPIOBIDRBase> ;
    using IDR9 = GPIOB_IDR_IDR9_Values<GPIOB::IDR, 9, 1, ReadMode, GPIOBIDRBase> ;
    using IDR8 = GPIOB_IDR_IDR8_Values<GPIOB::IDR, 8, 1, ReadMode, GPIOBIDRBase> ;
    using IDR7 = GPIOB_IDR_IDR7_Values<GPIOB::IDR, 7, 1, ReadMode, GPIOBIDRBase> ;
    using IDR6 = GPIOB_IDR_IDR6_Values<GPIOB::IDR, 6, 1, ReadMode, GPIOBIDRBase> ;
    using IDR5 = GPIOB_IDR_IDR5_Values<GPIOB::IDR, 5, 1, ReadMode, GPIOBIDRBase> ;
    using IDR4 = GPIOB_IDR_IDR4_Values<GPIOB::IDR, 4, 1, ReadMode, GPIOBIDRBase> ;
    using IDR3 = GPIOB_IDR_IDR3_Values<GPIOB::IDR, 3, 1, ReadMode, GPIOBIDRBase> ;
    using IDR2 = GPIOB_IDR_IDR2_Values<GPIOB::IDR, 2, 1, ReadMode, GPIOBIDRBase> ;
    using IDR1 = GPIOB_IDR_IDR1_Values<GPIOB::IDR, 1, 1, ReadMode, GPIOBIDRBase> ;
    using IDR0 = GPIOB_IDR_IDR0_Values<GPIOB::IDR, 0, 1, ReadMode, GPIOBIDRBase> ;
    using FieldValues = GPIOB_IDR_IDR0_Values<GPIOB::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40020410, 32, ReadMode, GPIOBIDRBase, T...> ;

  struct GPIOBODRBase {} ;

  struct ODR : public RegisterBase<0x40020414, 32, ReadWriteMode>
  {
    using ODR15 = GPIOB_ODR_ODR15_Values<GPIOB::ODR, 15, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR14 = GPIOB_ODR_ODR14_Values<GPIOB::ODR, 14, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR13 = GPIOB_ODR_ODR13_Values<GPIOB::ODR, 13, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR12 = GPIOB_ODR_ODR12_Values<GPIOB::ODR, 12, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR11 = GPIOB_ODR_ODR11_Values<GPIOB::ODR, 11, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR10 = GPIOB_ODR_ODR10_Values<GPIOB::ODR, 10, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR9 = GPIOB_ODR_ODR9_Values<GPIOB::ODR, 9, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR8 = GPIOB_ODR_ODR8_Values<GPIOB::ODR, 8, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR7 = GPIOB_ODR_ODR7_Values<GPIOB::ODR, 7, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR6 = GPIOB_ODR_ODR6_Values<GPIOB::ODR, 6, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR5 = GPIOB_ODR_ODR5_Values<GPIOB::ODR, 5, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR4 = GPIOB_ODR_ODR4_Values<GPIOB::ODR, 4, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR3 = GPIOB_ODR_ODR3_Values<GPIOB::ODR, 3, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR2 = GPIOB_ODR_ODR2_Values<GPIOB::ODR, 2, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR1 = GPIOB_ODR_ODR1_Values<GPIOB::ODR, 1, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR0 = GPIOB_ODR_ODR0_Values<GPIOB::ODR, 0, 1, ReadWriteMode, GPIOBODRBase> ;
    using FieldValues = GPIOB_ODR_ODR0_Values<GPIOB::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40020414, 32, ReadWriteMode, GPIOBODRBase, T...> ;

  struct GPIOBBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40020418, 32, WriteMode>
  {
    using BR15 = GPIOB_BSRR_BR15_Values<GPIOB::BSRR, 31, 1, WriteMode, GPIOBBSRRBase> ;
    using BR14 = GPIOB_BSRR_BR14_Values<GPIOB::BSRR, 30, 1, WriteMode, GPIOBBSRRBase> ;
    using BR13 = GPIOB_BSRR_BR13_Values<GPIOB::BSRR, 29, 1, WriteMode, GPIOBBSRRBase> ;
    using BR12 = GPIOB_BSRR_BR12_Values<GPIOB::BSRR, 28, 1, WriteMode, GPIOBBSRRBase> ;
    using BR11 = GPIOB_BSRR_BR11_Values<GPIOB::BSRR, 27, 1, WriteMode, GPIOBBSRRBase> ;
    using BR10 = GPIOB_BSRR_BR10_Values<GPIOB::BSRR, 26, 1, WriteMode, GPIOBBSRRBase> ;
    using BR9 = GPIOB_BSRR_BR9_Values<GPIOB::BSRR, 25, 1, WriteMode, GPIOBBSRRBase> ;
    using BR8 = GPIOB_BSRR_BR8_Values<GPIOB::BSRR, 24, 1, WriteMode, GPIOBBSRRBase> ;
    using BR7 = GPIOB_BSRR_BR7_Values<GPIOB::BSRR, 23, 1, WriteMode, GPIOBBSRRBase> ;
    using BR6 = GPIOB_BSRR_BR6_Values<GPIOB::BSRR, 22, 1, WriteMode, GPIOBBSRRBase> ;
    using BR5 = GPIOB_BSRR_BR5_Values<GPIOB::BSRR, 21, 1, WriteMode, GPIOBBSRRBase> ;
    using BR4 = GPIOB_BSRR_BR4_Values<GPIOB::BSRR, 20, 1, WriteMode, GPIOBBSRRBase> ;
    using BR3 = GPIOB_BSRR_BR3_Values<GPIOB::BSRR, 19, 1, WriteMode, GPIOBBSRRBase> ;
    using BR2 = GPIOB_BSRR_BR2_Values<GPIOB::BSRR, 18, 1, WriteMode, GPIOBBSRRBase> ;
    using BR1 = GPIOB_BSRR_BR1_Values<GPIOB::BSRR, 17, 1, WriteMode, GPIOBBSRRBase> ;
    using BR0 = GPIOB_BSRR_BR0_Values<GPIOB::BSRR, 16, 1, WriteMode, GPIOBBSRRBase> ;
    using BS15 = GPIOB_BSRR_BS15_Values<GPIOB::BSRR, 15, 1, WriteMode, GPIOBBSRRBase> ;
    using BS14 = GPIOB_BSRR_BS14_Values<GPIOB::BSRR, 14, 1, WriteMode, GPIOBBSRRBase> ;
    using BS13 = GPIOB_BSRR_BS13_Values<GPIOB::BSRR, 13, 1, WriteMode, GPIOBBSRRBase> ;
    using BS12 = GPIOB_BSRR_BS12_Values<GPIOB::BSRR, 12, 1, WriteMode, GPIOBBSRRBase> ;
    using BS11 = GPIOB_BSRR_BS11_Values<GPIOB::BSRR, 11, 1, WriteMode, GPIOBBSRRBase> ;
    using BS10 = GPIOB_BSRR_BS10_Values<GPIOB::BSRR, 10, 1, WriteMode, GPIOBBSRRBase> ;
    using BS9 = GPIOB_BSRR_BS9_Values<GPIOB::BSRR, 9, 1, WriteMode, GPIOBBSRRBase> ;
    using BS8 = GPIOB_BSRR_BS8_Values<GPIOB::BSRR, 8, 1, WriteMode, GPIOBBSRRBase> ;
    using BS7 = GPIOB_BSRR_BS7_Values<GPIOB::BSRR, 7, 1, WriteMode, GPIOBBSRRBase> ;
    using BS6 = GPIOB_BSRR_BS6_Values<GPIOB::BSRR, 6, 1, WriteMode, GPIOBBSRRBase> ;
    using BS5 = GPIOB_BSRR_BS5_Values<GPIOB::BSRR, 5, 1, WriteMode, GPIOBBSRRBase> ;
    using BS4 = GPIOB_BSRR_BS4_Values<GPIOB::BSRR, 4, 1, WriteMode, GPIOBBSRRBase> ;
    using BS3 = GPIOB_BSRR_BS3_Values<GPIOB::BSRR, 3, 1, WriteMode, GPIOBBSRRBase> ;
    using BS2 = GPIOB_BSRR_BS2_Values<GPIOB::BSRR, 2, 1, WriteMode, GPIOBBSRRBase> ;
    using BS1 = GPIOB_BSRR_BS1_Values<GPIOB::BSRR, 1, 1, WriteMode, GPIOBBSRRBase> ;
    using BS0 = GPIOB_BSRR_BS0_Values<GPIOB::BSRR, 0, 1, WriteMode, GPIOBBSRRBase> ;
    using FieldValues = GPIOB_BSRR_BS0_Values<GPIOB::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40020418, 32, WriteMode, GPIOBBSRRBase, T...> ;

  struct GPIOBLCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002041C, 32, ReadWriteMode>
  {
    using LCKK = GPIOB_LCKR_LCKK_Values<GPIOB::LCKR, 16, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK15 = GPIOB_LCKR_LCK15_Values<GPIOB::LCKR, 15, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK14 = GPIOB_LCKR_LCK14_Values<GPIOB::LCKR, 14, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK13 = GPIOB_LCKR_LCK13_Values<GPIOB::LCKR, 13, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK12 = GPIOB_LCKR_LCK12_Values<GPIOB::LCKR, 12, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK11 = GPIOB_LCKR_LCK11_Values<GPIOB::LCKR, 11, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK10 = GPIOB_LCKR_LCK10_Values<GPIOB::LCKR, 10, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK9 = GPIOB_LCKR_LCK9_Values<GPIOB::LCKR, 9, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK8 = GPIOB_LCKR_LCK8_Values<GPIOB::LCKR, 8, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK7 = GPIOB_LCKR_LCK7_Values<GPIOB::LCKR, 7, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK6 = GPIOB_LCKR_LCK6_Values<GPIOB::LCKR, 6, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK5 = GPIOB_LCKR_LCK5_Values<GPIOB::LCKR, 5, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK4 = GPIOB_LCKR_LCK4_Values<GPIOB::LCKR, 4, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK3 = GPIOB_LCKR_LCK3_Values<GPIOB::LCKR, 3, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK2 = GPIOB_LCKR_LCK2_Values<GPIOB::LCKR, 2, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK1 = GPIOB_LCKR_LCK1_Values<GPIOB::LCKR, 1, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK0 = GPIOB_LCKR_LCK0_Values<GPIOB::LCKR, 0, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using FieldValues = GPIOB_LCKR_LCK0_Values<GPIOB::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002041C, 32, ReadWriteMode, GPIOBLCKRBase, T...> ;

  struct GPIOBAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40020420, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOB_AFRL_AFRL7_Values<GPIOB::AFRL, 28, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using AFRL6 = GPIOB_AFRL_AFRL6_Values<GPIOB::AFRL, 24, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using AFRL5 = GPIOB_AFRL_AFRL5_Values<GPIOB::AFRL, 20, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using AFRL4 = GPIOB_AFRL_AFRL4_Values<GPIOB::AFRL, 16, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using AFRL3 = GPIOB_AFRL_AFRL3_Values<GPIOB::AFRL, 12, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using AFRL2 = GPIOB_AFRL_AFRL2_Values<GPIOB::AFRL, 8, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using AFRL1 = GPIOB_AFRL_AFRL1_Values<GPIOB::AFRL, 4, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using AFRL0 = GPIOB_AFRL_AFRL0_Values<GPIOB::AFRL, 0, 4, ReadWriteMode, GPIOBAFRLBase> ;
    using FieldValues = GPIOB_AFRL_AFRL0_Values<GPIOB::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40020420, 32, ReadWriteMode, GPIOBAFRLBase, T...> ;

  struct GPIOBAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40020424, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOB_AFRH_AFRH15_Values<GPIOB::AFRH, 28, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using AFRH14 = GPIOB_AFRH_AFRH14_Values<GPIOB::AFRH, 24, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using AFRH13 = GPIOB_AFRH_AFRH13_Values<GPIOB::AFRH, 20, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using AFRH12 = GPIOB_AFRH_AFRH12_Values<GPIOB::AFRH, 16, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using AFRH11 = GPIOB_AFRH_AFRH11_Values<GPIOB::AFRH, 12, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using AFRH10 = GPIOB_AFRH_AFRH10_Values<GPIOB::AFRH, 8, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using AFRH9 = GPIOB_AFRH_AFRH9_Values<GPIOB::AFRH, 4, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using AFRH8 = GPIOB_AFRH_AFRH8_Values<GPIOB::AFRH, 0, 4, ReadWriteMode, GPIOBAFRHBase> ;
    using FieldValues = GPIOB_AFRH_AFRH8_Values<GPIOB::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40020424, 32, ReadWriteMode, GPIOBAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOBREGISTERS_HPP)
