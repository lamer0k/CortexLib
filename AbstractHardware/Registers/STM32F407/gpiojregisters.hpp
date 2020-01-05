/*******************************************************************************
* Filename      : gpiojregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(GPIOJREGISTERS_HPP)
#define GPIOJREGISTERS_HPP

#include "gpiojfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOJ
{
  struct GPIOJMODERBase {} ;

  struct MODER : public RegisterBase<0x40022400, 32, ReadWriteMode>
  {
    using MODER15 = GPIOJ_MODER_MODER15_Values<GPIOJ::MODER, 30, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER14 = GPIOJ_MODER_MODER14_Values<GPIOJ::MODER, 28, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER13 = GPIOJ_MODER_MODER13_Values<GPIOJ::MODER, 26, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER12 = GPIOJ_MODER_MODER12_Values<GPIOJ::MODER, 24, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER11 = GPIOJ_MODER_MODER11_Values<GPIOJ::MODER, 22, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER10 = GPIOJ_MODER_MODER10_Values<GPIOJ::MODER, 20, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER9 = GPIOJ_MODER_MODER9_Values<GPIOJ::MODER, 18, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER8 = GPIOJ_MODER_MODER8_Values<GPIOJ::MODER, 16, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER7 = GPIOJ_MODER_MODER7_Values<GPIOJ::MODER, 14, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER6 = GPIOJ_MODER_MODER6_Values<GPIOJ::MODER, 12, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER5 = GPIOJ_MODER_MODER5_Values<GPIOJ::MODER, 10, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER4 = GPIOJ_MODER_MODER4_Values<GPIOJ::MODER, 8, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER3 = GPIOJ_MODER_MODER3_Values<GPIOJ::MODER, 6, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER2 = GPIOJ_MODER_MODER2_Values<GPIOJ::MODER, 4, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER1 = GPIOJ_MODER_MODER1_Values<GPIOJ::MODER, 2, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODER0 = GPIOJ_MODER_MODER0_Values<GPIOJ::MODER, 0, 2, ReadWriteMode, GPIOJMODERBase> ;
    using FieldValues = GPIOJ_MODER_MODER0_Values<GPIOJ::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40022400, 32, ReadWriteMode, GPIOJMODERBase, T...> ;

  struct GPIOJOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40022404, 32, ReadWriteMode>
  {
    using OT15 = GPIOJ_OTYPER_OT15_Values<GPIOJ::OTYPER, 15, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT14 = GPIOJ_OTYPER_OT14_Values<GPIOJ::OTYPER, 14, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT13 = GPIOJ_OTYPER_OT13_Values<GPIOJ::OTYPER, 13, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT12 = GPIOJ_OTYPER_OT12_Values<GPIOJ::OTYPER, 12, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT11 = GPIOJ_OTYPER_OT11_Values<GPIOJ::OTYPER, 11, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT10 = GPIOJ_OTYPER_OT10_Values<GPIOJ::OTYPER, 10, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT9 = GPIOJ_OTYPER_OT9_Values<GPIOJ::OTYPER, 9, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT8 = GPIOJ_OTYPER_OT8_Values<GPIOJ::OTYPER, 8, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT7 = GPIOJ_OTYPER_OT7_Values<GPIOJ::OTYPER, 7, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT6 = GPIOJ_OTYPER_OT6_Values<GPIOJ::OTYPER, 6, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT5 = GPIOJ_OTYPER_OT5_Values<GPIOJ::OTYPER, 5, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT4 = GPIOJ_OTYPER_OT4_Values<GPIOJ::OTYPER, 4, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT3 = GPIOJ_OTYPER_OT3_Values<GPIOJ::OTYPER, 3, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT2 = GPIOJ_OTYPER_OT2_Values<GPIOJ::OTYPER, 2, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT1 = GPIOJ_OTYPER_OT1_Values<GPIOJ::OTYPER, 1, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT0 = GPIOJ_OTYPER_OT0_Values<GPIOJ::OTYPER, 0, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using FieldValues = GPIOJ_OTYPER_OT0_Values<GPIOJ::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40022404, 32, ReadWriteMode, GPIOJOTYPERBase, T...> ;

  struct GPIOJOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40022408, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOJ_OSPEEDR_OSPEEDR15_Values<GPIOJ::OSPEEDR, 30, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR14 = GPIOJ_OSPEEDR_OSPEEDR14_Values<GPIOJ::OSPEEDR, 28, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR13 = GPIOJ_OSPEEDR_OSPEEDR13_Values<GPIOJ::OSPEEDR, 26, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR12 = GPIOJ_OSPEEDR_OSPEEDR12_Values<GPIOJ::OSPEEDR, 24, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR11 = GPIOJ_OSPEEDR_OSPEEDR11_Values<GPIOJ::OSPEEDR, 22, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR10 = GPIOJ_OSPEEDR_OSPEEDR10_Values<GPIOJ::OSPEEDR, 20, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR9 = GPIOJ_OSPEEDR_OSPEEDR9_Values<GPIOJ::OSPEEDR, 18, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR8 = GPIOJ_OSPEEDR_OSPEEDR8_Values<GPIOJ::OSPEEDR, 16, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR7 = GPIOJ_OSPEEDR_OSPEEDR7_Values<GPIOJ::OSPEEDR, 14, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR6 = GPIOJ_OSPEEDR_OSPEEDR6_Values<GPIOJ::OSPEEDR, 12, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR5 = GPIOJ_OSPEEDR_OSPEEDR5_Values<GPIOJ::OSPEEDR, 10, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR4 = GPIOJ_OSPEEDR_OSPEEDR4_Values<GPIOJ::OSPEEDR, 8, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR3 = GPIOJ_OSPEEDR_OSPEEDR3_Values<GPIOJ::OSPEEDR, 6, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR2 = GPIOJ_OSPEEDR_OSPEEDR2_Values<GPIOJ::OSPEEDR, 4, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR1 = GPIOJ_OSPEEDR_OSPEEDR1_Values<GPIOJ::OSPEEDR, 2, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEEDR0 = GPIOJ_OSPEEDR_OSPEEDR0_Values<GPIOJ::OSPEEDR, 0, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using FieldValues = GPIOJ_OSPEEDR_OSPEEDR0_Values<GPIOJ::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40022408, 32, ReadWriteMode, GPIOJOSPEEDRBase, T...> ;

  struct GPIOJPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002240C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOJ_PUPDR_PUPDR15_Values<GPIOJ::PUPDR, 30, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR14 = GPIOJ_PUPDR_PUPDR14_Values<GPIOJ::PUPDR, 28, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR13 = GPIOJ_PUPDR_PUPDR13_Values<GPIOJ::PUPDR, 26, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR12 = GPIOJ_PUPDR_PUPDR12_Values<GPIOJ::PUPDR, 24, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR11 = GPIOJ_PUPDR_PUPDR11_Values<GPIOJ::PUPDR, 22, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR10 = GPIOJ_PUPDR_PUPDR10_Values<GPIOJ::PUPDR, 20, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR9 = GPIOJ_PUPDR_PUPDR9_Values<GPIOJ::PUPDR, 18, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR8 = GPIOJ_PUPDR_PUPDR8_Values<GPIOJ::PUPDR, 16, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR7 = GPIOJ_PUPDR_PUPDR7_Values<GPIOJ::PUPDR, 14, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR6 = GPIOJ_PUPDR_PUPDR6_Values<GPIOJ::PUPDR, 12, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR5 = GPIOJ_PUPDR_PUPDR5_Values<GPIOJ::PUPDR, 10, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR4 = GPIOJ_PUPDR_PUPDR4_Values<GPIOJ::PUPDR, 8, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR3 = GPIOJ_PUPDR_PUPDR3_Values<GPIOJ::PUPDR, 6, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR2 = GPIOJ_PUPDR_PUPDR2_Values<GPIOJ::PUPDR, 4, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR1 = GPIOJ_PUPDR_PUPDR1_Values<GPIOJ::PUPDR, 2, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPDR0 = GPIOJ_PUPDR_PUPDR0_Values<GPIOJ::PUPDR, 0, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using FieldValues = GPIOJ_PUPDR_PUPDR0_Values<GPIOJ::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002240C, 32, ReadWriteMode, GPIOJPUPDRBase, T...> ;

  struct GPIOJIDRBase {} ;

  struct IDR : public RegisterBase<0x40022410, 32, ReadMode>
  {
    using IDR15 = GPIOJ_IDR_IDR15_Values<GPIOJ::IDR, 15, 1, ReadMode, GPIOJIDRBase> ;
    using IDR14 = GPIOJ_IDR_IDR14_Values<GPIOJ::IDR, 14, 1, ReadMode, GPIOJIDRBase> ;
    using IDR13 = GPIOJ_IDR_IDR13_Values<GPIOJ::IDR, 13, 1, ReadMode, GPIOJIDRBase> ;
    using IDR12 = GPIOJ_IDR_IDR12_Values<GPIOJ::IDR, 12, 1, ReadMode, GPIOJIDRBase> ;
    using IDR11 = GPIOJ_IDR_IDR11_Values<GPIOJ::IDR, 11, 1, ReadMode, GPIOJIDRBase> ;
    using IDR10 = GPIOJ_IDR_IDR10_Values<GPIOJ::IDR, 10, 1, ReadMode, GPIOJIDRBase> ;
    using IDR9 = GPIOJ_IDR_IDR9_Values<GPIOJ::IDR, 9, 1, ReadMode, GPIOJIDRBase> ;
    using IDR8 = GPIOJ_IDR_IDR8_Values<GPIOJ::IDR, 8, 1, ReadMode, GPIOJIDRBase> ;
    using IDR7 = GPIOJ_IDR_IDR7_Values<GPIOJ::IDR, 7, 1, ReadMode, GPIOJIDRBase> ;
    using IDR6 = GPIOJ_IDR_IDR6_Values<GPIOJ::IDR, 6, 1, ReadMode, GPIOJIDRBase> ;
    using IDR5 = GPIOJ_IDR_IDR5_Values<GPIOJ::IDR, 5, 1, ReadMode, GPIOJIDRBase> ;
    using IDR4 = GPIOJ_IDR_IDR4_Values<GPIOJ::IDR, 4, 1, ReadMode, GPIOJIDRBase> ;
    using IDR3 = GPIOJ_IDR_IDR3_Values<GPIOJ::IDR, 3, 1, ReadMode, GPIOJIDRBase> ;
    using IDR2 = GPIOJ_IDR_IDR2_Values<GPIOJ::IDR, 2, 1, ReadMode, GPIOJIDRBase> ;
    using IDR1 = GPIOJ_IDR_IDR1_Values<GPIOJ::IDR, 1, 1, ReadMode, GPIOJIDRBase> ;
    using IDR0 = GPIOJ_IDR_IDR0_Values<GPIOJ::IDR, 0, 1, ReadMode, GPIOJIDRBase> ;
    using FieldValues = GPIOJ_IDR_IDR0_Values<GPIOJ::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40022410, 32, ReadMode, GPIOJIDRBase, T...> ;

  struct GPIOJODRBase {} ;

  struct ODR : public RegisterBase<0x40022414, 32, ReadWriteMode>
  {
    using ODR15 = GPIOJ_ODR_ODR15_Values<GPIOJ::ODR, 15, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR14 = GPIOJ_ODR_ODR14_Values<GPIOJ::ODR, 14, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR13 = GPIOJ_ODR_ODR13_Values<GPIOJ::ODR, 13, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR12 = GPIOJ_ODR_ODR12_Values<GPIOJ::ODR, 12, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR11 = GPIOJ_ODR_ODR11_Values<GPIOJ::ODR, 11, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR10 = GPIOJ_ODR_ODR10_Values<GPIOJ::ODR, 10, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR9 = GPIOJ_ODR_ODR9_Values<GPIOJ::ODR, 9, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR8 = GPIOJ_ODR_ODR8_Values<GPIOJ::ODR, 8, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR7 = GPIOJ_ODR_ODR7_Values<GPIOJ::ODR, 7, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR6 = GPIOJ_ODR_ODR6_Values<GPIOJ::ODR, 6, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR5 = GPIOJ_ODR_ODR5_Values<GPIOJ::ODR, 5, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR4 = GPIOJ_ODR_ODR4_Values<GPIOJ::ODR, 4, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR3 = GPIOJ_ODR_ODR3_Values<GPIOJ::ODR, 3, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR2 = GPIOJ_ODR_ODR2_Values<GPIOJ::ODR, 2, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR1 = GPIOJ_ODR_ODR1_Values<GPIOJ::ODR, 1, 1, ReadWriteMode, GPIOJODRBase> ;
    using ODR0 = GPIOJ_ODR_ODR0_Values<GPIOJ::ODR, 0, 1, ReadWriteMode, GPIOJODRBase> ;
    using FieldValues = GPIOJ_ODR_ODR0_Values<GPIOJ::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40022414, 32, ReadWriteMode, GPIOJODRBase, T...> ;

  struct GPIOJBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40022418, 32, WriteMode>
  {
    using BR15 = GPIOJ_BSRR_BR15_Values<GPIOJ::BSRR, 31, 1, WriteMode, GPIOJBSRRBase> ;
    using BR14 = GPIOJ_BSRR_BR14_Values<GPIOJ::BSRR, 30, 1, WriteMode, GPIOJBSRRBase> ;
    using BR13 = GPIOJ_BSRR_BR13_Values<GPIOJ::BSRR, 29, 1, WriteMode, GPIOJBSRRBase> ;
    using BR12 = GPIOJ_BSRR_BR12_Values<GPIOJ::BSRR, 28, 1, WriteMode, GPIOJBSRRBase> ;
    using BR11 = GPIOJ_BSRR_BR11_Values<GPIOJ::BSRR, 27, 1, WriteMode, GPIOJBSRRBase> ;
    using BR10 = GPIOJ_BSRR_BR10_Values<GPIOJ::BSRR, 26, 1, WriteMode, GPIOJBSRRBase> ;
    using BR9 = GPIOJ_BSRR_BR9_Values<GPIOJ::BSRR, 25, 1, WriteMode, GPIOJBSRRBase> ;
    using BR8 = GPIOJ_BSRR_BR8_Values<GPIOJ::BSRR, 24, 1, WriteMode, GPIOJBSRRBase> ;
    using BR7 = GPIOJ_BSRR_BR7_Values<GPIOJ::BSRR, 23, 1, WriteMode, GPIOJBSRRBase> ;
    using BR6 = GPIOJ_BSRR_BR6_Values<GPIOJ::BSRR, 22, 1, WriteMode, GPIOJBSRRBase> ;
    using BR5 = GPIOJ_BSRR_BR5_Values<GPIOJ::BSRR, 21, 1, WriteMode, GPIOJBSRRBase> ;
    using BR4 = GPIOJ_BSRR_BR4_Values<GPIOJ::BSRR, 20, 1, WriteMode, GPIOJBSRRBase> ;
    using BR3 = GPIOJ_BSRR_BR3_Values<GPIOJ::BSRR, 19, 1, WriteMode, GPIOJBSRRBase> ;
    using BR2 = GPIOJ_BSRR_BR2_Values<GPIOJ::BSRR, 18, 1, WriteMode, GPIOJBSRRBase> ;
    using BR1 = GPIOJ_BSRR_BR1_Values<GPIOJ::BSRR, 17, 1, WriteMode, GPIOJBSRRBase> ;
    using BR0 = GPIOJ_BSRR_BR0_Values<GPIOJ::BSRR, 16, 1, WriteMode, GPIOJBSRRBase> ;
    using BS15 = GPIOJ_BSRR_BS15_Values<GPIOJ::BSRR, 15, 1, WriteMode, GPIOJBSRRBase> ;
    using BS14 = GPIOJ_BSRR_BS14_Values<GPIOJ::BSRR, 14, 1, WriteMode, GPIOJBSRRBase> ;
    using BS13 = GPIOJ_BSRR_BS13_Values<GPIOJ::BSRR, 13, 1, WriteMode, GPIOJBSRRBase> ;
    using BS12 = GPIOJ_BSRR_BS12_Values<GPIOJ::BSRR, 12, 1, WriteMode, GPIOJBSRRBase> ;
    using BS11 = GPIOJ_BSRR_BS11_Values<GPIOJ::BSRR, 11, 1, WriteMode, GPIOJBSRRBase> ;
    using BS10 = GPIOJ_BSRR_BS10_Values<GPIOJ::BSRR, 10, 1, WriteMode, GPIOJBSRRBase> ;
    using BS9 = GPIOJ_BSRR_BS9_Values<GPIOJ::BSRR, 9, 1, WriteMode, GPIOJBSRRBase> ;
    using BS8 = GPIOJ_BSRR_BS8_Values<GPIOJ::BSRR, 8, 1, WriteMode, GPIOJBSRRBase> ;
    using BS7 = GPIOJ_BSRR_BS7_Values<GPIOJ::BSRR, 7, 1, WriteMode, GPIOJBSRRBase> ;
    using BS6 = GPIOJ_BSRR_BS6_Values<GPIOJ::BSRR, 6, 1, WriteMode, GPIOJBSRRBase> ;
    using BS5 = GPIOJ_BSRR_BS5_Values<GPIOJ::BSRR, 5, 1, WriteMode, GPIOJBSRRBase> ;
    using BS4 = GPIOJ_BSRR_BS4_Values<GPIOJ::BSRR, 4, 1, WriteMode, GPIOJBSRRBase> ;
    using BS3 = GPIOJ_BSRR_BS3_Values<GPIOJ::BSRR, 3, 1, WriteMode, GPIOJBSRRBase> ;
    using BS2 = GPIOJ_BSRR_BS2_Values<GPIOJ::BSRR, 2, 1, WriteMode, GPIOJBSRRBase> ;
    using BS1 = GPIOJ_BSRR_BS1_Values<GPIOJ::BSRR, 1, 1, WriteMode, GPIOJBSRRBase> ;
    using BS0 = GPIOJ_BSRR_BS0_Values<GPIOJ::BSRR, 0, 1, WriteMode, GPIOJBSRRBase> ;
    using FieldValues = GPIOJ_BSRR_BS0_Values<GPIOJ::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40022418, 32, WriteMode, GPIOJBSRRBase, T...> ;

  struct GPIOJLCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002241C, 32, ReadWriteMode>
  {
    using LCKK = GPIOJ_LCKR_LCKK_Values<GPIOJ::LCKR, 16, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK15 = GPIOJ_LCKR_LCK15_Values<GPIOJ::LCKR, 15, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK14 = GPIOJ_LCKR_LCK14_Values<GPIOJ::LCKR, 14, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK13 = GPIOJ_LCKR_LCK13_Values<GPIOJ::LCKR, 13, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK12 = GPIOJ_LCKR_LCK12_Values<GPIOJ::LCKR, 12, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK11 = GPIOJ_LCKR_LCK11_Values<GPIOJ::LCKR, 11, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK10 = GPIOJ_LCKR_LCK10_Values<GPIOJ::LCKR, 10, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK9 = GPIOJ_LCKR_LCK9_Values<GPIOJ::LCKR, 9, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK8 = GPIOJ_LCKR_LCK8_Values<GPIOJ::LCKR, 8, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK7 = GPIOJ_LCKR_LCK7_Values<GPIOJ::LCKR, 7, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK6 = GPIOJ_LCKR_LCK6_Values<GPIOJ::LCKR, 6, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK5 = GPIOJ_LCKR_LCK5_Values<GPIOJ::LCKR, 5, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK4 = GPIOJ_LCKR_LCK4_Values<GPIOJ::LCKR, 4, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK3 = GPIOJ_LCKR_LCK3_Values<GPIOJ::LCKR, 3, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK2 = GPIOJ_LCKR_LCK2_Values<GPIOJ::LCKR, 2, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK1 = GPIOJ_LCKR_LCK1_Values<GPIOJ::LCKR, 1, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK0 = GPIOJ_LCKR_LCK0_Values<GPIOJ::LCKR, 0, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using FieldValues = GPIOJ_LCKR_LCK0_Values<GPIOJ::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002241C, 32, ReadWriteMode, GPIOJLCKRBase, T...> ;

  struct GPIOJAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40022420, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOJ_AFRL_AFRL7_Values<GPIOJ::AFRL, 28, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFRL6 = GPIOJ_AFRL_AFRL6_Values<GPIOJ::AFRL, 24, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFRL5 = GPIOJ_AFRL_AFRL5_Values<GPIOJ::AFRL, 20, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFRL4 = GPIOJ_AFRL_AFRL4_Values<GPIOJ::AFRL, 16, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFRL3 = GPIOJ_AFRL_AFRL3_Values<GPIOJ::AFRL, 12, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFRL2 = GPIOJ_AFRL_AFRL2_Values<GPIOJ::AFRL, 8, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFRL1 = GPIOJ_AFRL_AFRL1_Values<GPIOJ::AFRL, 4, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFRL0 = GPIOJ_AFRL_AFRL0_Values<GPIOJ::AFRL, 0, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using FieldValues = GPIOJ_AFRL_AFRL0_Values<GPIOJ::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40022420, 32, ReadWriteMode, GPIOJAFRLBase, T...> ;

  struct GPIOJAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40022424, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOJ_AFRH_AFRH15_Values<GPIOJ::AFRH, 28, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFRH14 = GPIOJ_AFRH_AFRH14_Values<GPIOJ::AFRH, 24, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFRH13 = GPIOJ_AFRH_AFRH13_Values<GPIOJ::AFRH, 20, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFRH12 = GPIOJ_AFRH_AFRH12_Values<GPIOJ::AFRH, 16, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFRH11 = GPIOJ_AFRH_AFRH11_Values<GPIOJ::AFRH, 12, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFRH10 = GPIOJ_AFRH_AFRH10_Values<GPIOJ::AFRH, 8, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFRH9 = GPIOJ_AFRH_AFRH9_Values<GPIOJ::AFRH, 4, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFRH8 = GPIOJ_AFRH_AFRH8_Values<GPIOJ::AFRH, 0, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using FieldValues = GPIOJ_AFRH_AFRH8_Values<GPIOJ::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40022424, 32, ReadWriteMode, GPIOJAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOJREGISTERS_HPP)
