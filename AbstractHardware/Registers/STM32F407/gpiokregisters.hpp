/*******************************************************************************
* Filename      : gpiokregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(GPIOKREGISTERS_HPP)
#define GPIOKREGISTERS_HPP

#include "gpiokfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOK
{
  struct GPIOKMODERBase {} ;

  struct MODER : public RegisterBase<0x40022800, 32, ReadWriteMode>
  {
    using MODER15 = GPIOK_MODER_MODER15_Values<GPIOK::MODER, 30, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER14 = GPIOK_MODER_MODER14_Values<GPIOK::MODER, 28, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER13 = GPIOK_MODER_MODER13_Values<GPIOK::MODER, 26, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER12 = GPIOK_MODER_MODER12_Values<GPIOK::MODER, 24, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER11 = GPIOK_MODER_MODER11_Values<GPIOK::MODER, 22, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER10 = GPIOK_MODER_MODER10_Values<GPIOK::MODER, 20, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER9 = GPIOK_MODER_MODER9_Values<GPIOK::MODER, 18, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER8 = GPIOK_MODER_MODER8_Values<GPIOK::MODER, 16, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER7 = GPIOK_MODER_MODER7_Values<GPIOK::MODER, 14, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER6 = GPIOK_MODER_MODER6_Values<GPIOK::MODER, 12, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER5 = GPIOK_MODER_MODER5_Values<GPIOK::MODER, 10, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER4 = GPIOK_MODER_MODER4_Values<GPIOK::MODER, 8, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER3 = GPIOK_MODER_MODER3_Values<GPIOK::MODER, 6, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER2 = GPIOK_MODER_MODER2_Values<GPIOK::MODER, 4, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER1 = GPIOK_MODER_MODER1_Values<GPIOK::MODER, 2, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODER0 = GPIOK_MODER_MODER0_Values<GPIOK::MODER, 0, 2, ReadWriteMode, GPIOKMODERBase> ;
    using FieldValues = GPIOK_MODER_MODER0_Values<GPIOK::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40022800, 32, ReadWriteMode, GPIOKMODERBase, T...> ;

  struct GPIOKOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40022804, 32, ReadWriteMode>
  {
    using OT15 = GPIOK_OTYPER_OT15_Values<GPIOK::OTYPER, 15, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT14 = GPIOK_OTYPER_OT14_Values<GPIOK::OTYPER, 14, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT13 = GPIOK_OTYPER_OT13_Values<GPIOK::OTYPER, 13, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT12 = GPIOK_OTYPER_OT12_Values<GPIOK::OTYPER, 12, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT11 = GPIOK_OTYPER_OT11_Values<GPIOK::OTYPER, 11, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT10 = GPIOK_OTYPER_OT10_Values<GPIOK::OTYPER, 10, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT9 = GPIOK_OTYPER_OT9_Values<GPIOK::OTYPER, 9, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT8 = GPIOK_OTYPER_OT8_Values<GPIOK::OTYPER, 8, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT7 = GPIOK_OTYPER_OT7_Values<GPIOK::OTYPER, 7, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT6 = GPIOK_OTYPER_OT6_Values<GPIOK::OTYPER, 6, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT5 = GPIOK_OTYPER_OT5_Values<GPIOK::OTYPER, 5, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT4 = GPIOK_OTYPER_OT4_Values<GPIOK::OTYPER, 4, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT3 = GPIOK_OTYPER_OT3_Values<GPIOK::OTYPER, 3, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT2 = GPIOK_OTYPER_OT2_Values<GPIOK::OTYPER, 2, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT1 = GPIOK_OTYPER_OT1_Values<GPIOK::OTYPER, 1, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT0 = GPIOK_OTYPER_OT0_Values<GPIOK::OTYPER, 0, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using FieldValues = GPIOK_OTYPER_OT0_Values<GPIOK::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40022804, 32, ReadWriteMode, GPIOKOTYPERBase, T...> ;

  struct GPIOKOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40022808, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOK_OSPEEDR_OSPEEDR15_Values<GPIOK::OSPEEDR, 30, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR14 = GPIOK_OSPEEDR_OSPEEDR14_Values<GPIOK::OSPEEDR, 28, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR13 = GPIOK_OSPEEDR_OSPEEDR13_Values<GPIOK::OSPEEDR, 26, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR12 = GPIOK_OSPEEDR_OSPEEDR12_Values<GPIOK::OSPEEDR, 24, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR11 = GPIOK_OSPEEDR_OSPEEDR11_Values<GPIOK::OSPEEDR, 22, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR10 = GPIOK_OSPEEDR_OSPEEDR10_Values<GPIOK::OSPEEDR, 20, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR9 = GPIOK_OSPEEDR_OSPEEDR9_Values<GPIOK::OSPEEDR, 18, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR8 = GPIOK_OSPEEDR_OSPEEDR8_Values<GPIOK::OSPEEDR, 16, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR7 = GPIOK_OSPEEDR_OSPEEDR7_Values<GPIOK::OSPEEDR, 14, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR6 = GPIOK_OSPEEDR_OSPEEDR6_Values<GPIOK::OSPEEDR, 12, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR5 = GPIOK_OSPEEDR_OSPEEDR5_Values<GPIOK::OSPEEDR, 10, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR4 = GPIOK_OSPEEDR_OSPEEDR4_Values<GPIOK::OSPEEDR, 8, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR3 = GPIOK_OSPEEDR_OSPEEDR3_Values<GPIOK::OSPEEDR, 6, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR2 = GPIOK_OSPEEDR_OSPEEDR2_Values<GPIOK::OSPEEDR, 4, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR1 = GPIOK_OSPEEDR_OSPEEDR1_Values<GPIOK::OSPEEDR, 2, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEEDR0 = GPIOK_OSPEEDR_OSPEEDR0_Values<GPIOK::OSPEEDR, 0, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using FieldValues = GPIOK_OSPEEDR_OSPEEDR0_Values<GPIOK::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40022808, 32, ReadWriteMode, GPIOKOSPEEDRBase, T...> ;

  struct GPIOKPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002280C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOK_PUPDR_PUPDR15_Values<GPIOK::PUPDR, 30, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR14 = GPIOK_PUPDR_PUPDR14_Values<GPIOK::PUPDR, 28, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR13 = GPIOK_PUPDR_PUPDR13_Values<GPIOK::PUPDR, 26, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR12 = GPIOK_PUPDR_PUPDR12_Values<GPIOK::PUPDR, 24, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR11 = GPIOK_PUPDR_PUPDR11_Values<GPIOK::PUPDR, 22, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR10 = GPIOK_PUPDR_PUPDR10_Values<GPIOK::PUPDR, 20, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR9 = GPIOK_PUPDR_PUPDR9_Values<GPIOK::PUPDR, 18, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR8 = GPIOK_PUPDR_PUPDR8_Values<GPIOK::PUPDR, 16, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR7 = GPIOK_PUPDR_PUPDR7_Values<GPIOK::PUPDR, 14, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR6 = GPIOK_PUPDR_PUPDR6_Values<GPIOK::PUPDR, 12, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR5 = GPIOK_PUPDR_PUPDR5_Values<GPIOK::PUPDR, 10, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR4 = GPIOK_PUPDR_PUPDR4_Values<GPIOK::PUPDR, 8, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR3 = GPIOK_PUPDR_PUPDR3_Values<GPIOK::PUPDR, 6, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR2 = GPIOK_PUPDR_PUPDR2_Values<GPIOK::PUPDR, 4, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR1 = GPIOK_PUPDR_PUPDR1_Values<GPIOK::PUPDR, 2, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPDR0 = GPIOK_PUPDR_PUPDR0_Values<GPIOK::PUPDR, 0, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using FieldValues = GPIOK_PUPDR_PUPDR0_Values<GPIOK::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002280C, 32, ReadWriteMode, GPIOKPUPDRBase, T...> ;

  struct GPIOKIDRBase {} ;

  struct IDR : public RegisterBase<0x40022810, 32, ReadMode>
  {
    using IDR15 = GPIOK_IDR_IDR15_Values<GPIOK::IDR, 15, 1, ReadMode, GPIOKIDRBase> ;
    using IDR14 = GPIOK_IDR_IDR14_Values<GPIOK::IDR, 14, 1, ReadMode, GPIOKIDRBase> ;
    using IDR13 = GPIOK_IDR_IDR13_Values<GPIOK::IDR, 13, 1, ReadMode, GPIOKIDRBase> ;
    using IDR12 = GPIOK_IDR_IDR12_Values<GPIOK::IDR, 12, 1, ReadMode, GPIOKIDRBase> ;
    using IDR11 = GPIOK_IDR_IDR11_Values<GPIOK::IDR, 11, 1, ReadMode, GPIOKIDRBase> ;
    using IDR10 = GPIOK_IDR_IDR10_Values<GPIOK::IDR, 10, 1, ReadMode, GPIOKIDRBase> ;
    using IDR9 = GPIOK_IDR_IDR9_Values<GPIOK::IDR, 9, 1, ReadMode, GPIOKIDRBase> ;
    using IDR8 = GPIOK_IDR_IDR8_Values<GPIOK::IDR, 8, 1, ReadMode, GPIOKIDRBase> ;
    using IDR7 = GPIOK_IDR_IDR7_Values<GPIOK::IDR, 7, 1, ReadMode, GPIOKIDRBase> ;
    using IDR6 = GPIOK_IDR_IDR6_Values<GPIOK::IDR, 6, 1, ReadMode, GPIOKIDRBase> ;
    using IDR5 = GPIOK_IDR_IDR5_Values<GPIOK::IDR, 5, 1, ReadMode, GPIOKIDRBase> ;
    using IDR4 = GPIOK_IDR_IDR4_Values<GPIOK::IDR, 4, 1, ReadMode, GPIOKIDRBase> ;
    using IDR3 = GPIOK_IDR_IDR3_Values<GPIOK::IDR, 3, 1, ReadMode, GPIOKIDRBase> ;
    using IDR2 = GPIOK_IDR_IDR2_Values<GPIOK::IDR, 2, 1, ReadMode, GPIOKIDRBase> ;
    using IDR1 = GPIOK_IDR_IDR1_Values<GPIOK::IDR, 1, 1, ReadMode, GPIOKIDRBase> ;
    using IDR0 = GPIOK_IDR_IDR0_Values<GPIOK::IDR, 0, 1, ReadMode, GPIOKIDRBase> ;
    using FieldValues = GPIOK_IDR_IDR0_Values<GPIOK::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40022810, 32, ReadMode, GPIOKIDRBase, T...> ;

  struct GPIOKODRBase {} ;

  struct ODR : public RegisterBase<0x40022814, 32, ReadWriteMode>
  {
    using ODR15 = GPIOK_ODR_ODR15_Values<GPIOK::ODR, 15, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR14 = GPIOK_ODR_ODR14_Values<GPIOK::ODR, 14, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR13 = GPIOK_ODR_ODR13_Values<GPIOK::ODR, 13, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR12 = GPIOK_ODR_ODR12_Values<GPIOK::ODR, 12, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR11 = GPIOK_ODR_ODR11_Values<GPIOK::ODR, 11, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR10 = GPIOK_ODR_ODR10_Values<GPIOK::ODR, 10, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR9 = GPIOK_ODR_ODR9_Values<GPIOK::ODR, 9, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR8 = GPIOK_ODR_ODR8_Values<GPIOK::ODR, 8, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR7 = GPIOK_ODR_ODR7_Values<GPIOK::ODR, 7, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR6 = GPIOK_ODR_ODR6_Values<GPIOK::ODR, 6, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR5 = GPIOK_ODR_ODR5_Values<GPIOK::ODR, 5, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR4 = GPIOK_ODR_ODR4_Values<GPIOK::ODR, 4, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR3 = GPIOK_ODR_ODR3_Values<GPIOK::ODR, 3, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR2 = GPIOK_ODR_ODR2_Values<GPIOK::ODR, 2, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR1 = GPIOK_ODR_ODR1_Values<GPIOK::ODR, 1, 1, ReadWriteMode, GPIOKODRBase> ;
    using ODR0 = GPIOK_ODR_ODR0_Values<GPIOK::ODR, 0, 1, ReadWriteMode, GPIOKODRBase> ;
    using FieldValues = GPIOK_ODR_ODR0_Values<GPIOK::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40022814, 32, ReadWriteMode, GPIOKODRBase, T...> ;

  struct GPIOKBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40022818, 32, WriteMode>
  {
    using BR15 = GPIOK_BSRR_BR15_Values<GPIOK::BSRR, 31, 1, WriteMode, GPIOKBSRRBase> ;
    using BR14 = GPIOK_BSRR_BR14_Values<GPIOK::BSRR, 30, 1, WriteMode, GPIOKBSRRBase> ;
    using BR13 = GPIOK_BSRR_BR13_Values<GPIOK::BSRR, 29, 1, WriteMode, GPIOKBSRRBase> ;
    using BR12 = GPIOK_BSRR_BR12_Values<GPIOK::BSRR, 28, 1, WriteMode, GPIOKBSRRBase> ;
    using BR11 = GPIOK_BSRR_BR11_Values<GPIOK::BSRR, 27, 1, WriteMode, GPIOKBSRRBase> ;
    using BR10 = GPIOK_BSRR_BR10_Values<GPIOK::BSRR, 26, 1, WriteMode, GPIOKBSRRBase> ;
    using BR9 = GPIOK_BSRR_BR9_Values<GPIOK::BSRR, 25, 1, WriteMode, GPIOKBSRRBase> ;
    using BR8 = GPIOK_BSRR_BR8_Values<GPIOK::BSRR, 24, 1, WriteMode, GPIOKBSRRBase> ;
    using BR7 = GPIOK_BSRR_BR7_Values<GPIOK::BSRR, 23, 1, WriteMode, GPIOKBSRRBase> ;
    using BR6 = GPIOK_BSRR_BR6_Values<GPIOK::BSRR, 22, 1, WriteMode, GPIOKBSRRBase> ;
    using BR5 = GPIOK_BSRR_BR5_Values<GPIOK::BSRR, 21, 1, WriteMode, GPIOKBSRRBase> ;
    using BR4 = GPIOK_BSRR_BR4_Values<GPIOK::BSRR, 20, 1, WriteMode, GPIOKBSRRBase> ;
    using BR3 = GPIOK_BSRR_BR3_Values<GPIOK::BSRR, 19, 1, WriteMode, GPIOKBSRRBase> ;
    using BR2 = GPIOK_BSRR_BR2_Values<GPIOK::BSRR, 18, 1, WriteMode, GPIOKBSRRBase> ;
    using BR1 = GPIOK_BSRR_BR1_Values<GPIOK::BSRR, 17, 1, WriteMode, GPIOKBSRRBase> ;
    using BR0 = GPIOK_BSRR_BR0_Values<GPIOK::BSRR, 16, 1, WriteMode, GPIOKBSRRBase> ;
    using BS15 = GPIOK_BSRR_BS15_Values<GPIOK::BSRR, 15, 1, WriteMode, GPIOKBSRRBase> ;
    using BS14 = GPIOK_BSRR_BS14_Values<GPIOK::BSRR, 14, 1, WriteMode, GPIOKBSRRBase> ;
    using BS13 = GPIOK_BSRR_BS13_Values<GPIOK::BSRR, 13, 1, WriteMode, GPIOKBSRRBase> ;
    using BS12 = GPIOK_BSRR_BS12_Values<GPIOK::BSRR, 12, 1, WriteMode, GPIOKBSRRBase> ;
    using BS11 = GPIOK_BSRR_BS11_Values<GPIOK::BSRR, 11, 1, WriteMode, GPIOKBSRRBase> ;
    using BS10 = GPIOK_BSRR_BS10_Values<GPIOK::BSRR, 10, 1, WriteMode, GPIOKBSRRBase> ;
    using BS9 = GPIOK_BSRR_BS9_Values<GPIOK::BSRR, 9, 1, WriteMode, GPIOKBSRRBase> ;
    using BS8 = GPIOK_BSRR_BS8_Values<GPIOK::BSRR, 8, 1, WriteMode, GPIOKBSRRBase> ;
    using BS7 = GPIOK_BSRR_BS7_Values<GPIOK::BSRR, 7, 1, WriteMode, GPIOKBSRRBase> ;
    using BS6 = GPIOK_BSRR_BS6_Values<GPIOK::BSRR, 6, 1, WriteMode, GPIOKBSRRBase> ;
    using BS5 = GPIOK_BSRR_BS5_Values<GPIOK::BSRR, 5, 1, WriteMode, GPIOKBSRRBase> ;
    using BS4 = GPIOK_BSRR_BS4_Values<GPIOK::BSRR, 4, 1, WriteMode, GPIOKBSRRBase> ;
    using BS3 = GPIOK_BSRR_BS3_Values<GPIOK::BSRR, 3, 1, WriteMode, GPIOKBSRRBase> ;
    using BS2 = GPIOK_BSRR_BS2_Values<GPIOK::BSRR, 2, 1, WriteMode, GPIOKBSRRBase> ;
    using BS1 = GPIOK_BSRR_BS1_Values<GPIOK::BSRR, 1, 1, WriteMode, GPIOKBSRRBase> ;
    using BS0 = GPIOK_BSRR_BS0_Values<GPIOK::BSRR, 0, 1, WriteMode, GPIOKBSRRBase> ;
    using FieldValues = GPIOK_BSRR_BS0_Values<GPIOK::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40022818, 32, WriteMode, GPIOKBSRRBase, T...> ;

  struct GPIOKLCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002281C, 32, ReadWriteMode>
  {
    using LCKK = GPIOK_LCKR_LCKK_Values<GPIOK::LCKR, 16, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK15 = GPIOK_LCKR_LCK15_Values<GPIOK::LCKR, 15, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK14 = GPIOK_LCKR_LCK14_Values<GPIOK::LCKR, 14, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK13 = GPIOK_LCKR_LCK13_Values<GPIOK::LCKR, 13, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK12 = GPIOK_LCKR_LCK12_Values<GPIOK::LCKR, 12, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK11 = GPIOK_LCKR_LCK11_Values<GPIOK::LCKR, 11, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK10 = GPIOK_LCKR_LCK10_Values<GPIOK::LCKR, 10, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK9 = GPIOK_LCKR_LCK9_Values<GPIOK::LCKR, 9, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK8 = GPIOK_LCKR_LCK8_Values<GPIOK::LCKR, 8, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK7 = GPIOK_LCKR_LCK7_Values<GPIOK::LCKR, 7, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK6 = GPIOK_LCKR_LCK6_Values<GPIOK::LCKR, 6, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK5 = GPIOK_LCKR_LCK5_Values<GPIOK::LCKR, 5, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK4 = GPIOK_LCKR_LCK4_Values<GPIOK::LCKR, 4, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK3 = GPIOK_LCKR_LCK3_Values<GPIOK::LCKR, 3, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK2 = GPIOK_LCKR_LCK2_Values<GPIOK::LCKR, 2, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK1 = GPIOK_LCKR_LCK1_Values<GPIOK::LCKR, 1, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK0 = GPIOK_LCKR_LCK0_Values<GPIOK::LCKR, 0, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using FieldValues = GPIOK_LCKR_LCK0_Values<GPIOK::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002281C, 32, ReadWriteMode, GPIOKLCKRBase, T...> ;

  struct GPIOKAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40022820, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOK_AFRL_AFRL7_Values<GPIOK::AFRL, 28, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFRL6 = GPIOK_AFRL_AFRL6_Values<GPIOK::AFRL, 24, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFRL5 = GPIOK_AFRL_AFRL5_Values<GPIOK::AFRL, 20, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFRL4 = GPIOK_AFRL_AFRL4_Values<GPIOK::AFRL, 16, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFRL3 = GPIOK_AFRL_AFRL3_Values<GPIOK::AFRL, 12, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFRL2 = GPIOK_AFRL_AFRL2_Values<GPIOK::AFRL, 8, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFRL1 = GPIOK_AFRL_AFRL1_Values<GPIOK::AFRL, 4, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFRL0 = GPIOK_AFRL_AFRL0_Values<GPIOK::AFRL, 0, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using FieldValues = GPIOK_AFRL_AFRL0_Values<GPIOK::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40022820, 32, ReadWriteMode, GPIOKAFRLBase, T...> ;

  struct GPIOKAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40022824, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOK_AFRH_AFRH15_Values<GPIOK::AFRH, 28, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFRH14 = GPIOK_AFRH_AFRH14_Values<GPIOK::AFRH, 24, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFRH13 = GPIOK_AFRH_AFRH13_Values<GPIOK::AFRH, 20, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFRH12 = GPIOK_AFRH_AFRH12_Values<GPIOK::AFRH, 16, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFRH11 = GPIOK_AFRH_AFRH11_Values<GPIOK::AFRH, 12, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFRH10 = GPIOK_AFRH_AFRH10_Values<GPIOK::AFRH, 8, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFRH9 = GPIOK_AFRH_AFRH9_Values<GPIOK::AFRH, 4, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFRH8 = GPIOK_AFRH_AFRH8_Values<GPIOK::AFRH, 0, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using FieldValues = GPIOK_AFRH_AFRH8_Values<GPIOK::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40022824, 32, ReadWriteMode, GPIOKAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOKREGISTERS_HPP)
