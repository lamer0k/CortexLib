/*******************************************************************************
* Filename      : gpiocregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOCREGISTERS_HPP)
#define GPIOCREGISTERS_HPP

#include "gpiocfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOC
{
  struct GPIOCMODERBase {} ;

  struct MODER : public RegisterBase<0x40020800, 32, ReadWriteMode>
  {
    using MODER15 = GPIOC_MODER_MODER15_Values<GPIOC::MODER, 30, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER14 = GPIOC_MODER_MODER14_Values<GPIOC::MODER, 28, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER13 = GPIOC_MODER_MODER13_Values<GPIOC::MODER, 26, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER12 = GPIOC_MODER_MODER12_Values<GPIOC::MODER, 24, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER11 = GPIOC_MODER_MODER11_Values<GPIOC::MODER, 22, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER10 = GPIOC_MODER_MODER10_Values<GPIOC::MODER, 20, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER9 = GPIOC_MODER_MODER9_Values<GPIOC::MODER, 18, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER8 = GPIOC_MODER_MODER8_Values<GPIOC::MODER, 16, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER7 = GPIOC_MODER_MODER7_Values<GPIOC::MODER, 14, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER6 = GPIOC_MODER_MODER6_Values<GPIOC::MODER, 12, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER5 = GPIOC_MODER_MODER5_Values<GPIOC::MODER, 10, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER4 = GPIOC_MODER_MODER4_Values<GPIOC::MODER, 8, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER3 = GPIOC_MODER_MODER3_Values<GPIOC::MODER, 6, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER2 = GPIOC_MODER_MODER2_Values<GPIOC::MODER, 4, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER1 = GPIOC_MODER_MODER1_Values<GPIOC::MODER, 2, 2, ReadWriteMode, GPIOCMODERBase> ;
    using MODER0 = GPIOC_MODER_MODER0_Values<GPIOC::MODER, 0, 2, ReadWriteMode, GPIOCMODERBase> ;
    using FieldValues = GPIOC_MODER_MODER0_Values<GPIOC::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40020800, 32, ReadWriteMode, GPIOCMODERBase, T...> ;

  struct GPIOCOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40020804, 32, ReadWriteMode>
  {
    using OT15 = GPIOC_OTYPER_OT15_Values<GPIOC::OTYPER, 15, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT14 = GPIOC_OTYPER_OT14_Values<GPIOC::OTYPER, 14, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT13 = GPIOC_OTYPER_OT13_Values<GPIOC::OTYPER, 13, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT12 = GPIOC_OTYPER_OT12_Values<GPIOC::OTYPER, 12, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT11 = GPIOC_OTYPER_OT11_Values<GPIOC::OTYPER, 11, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT10 = GPIOC_OTYPER_OT10_Values<GPIOC::OTYPER, 10, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT9 = GPIOC_OTYPER_OT9_Values<GPIOC::OTYPER, 9, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT8 = GPIOC_OTYPER_OT8_Values<GPIOC::OTYPER, 8, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT7 = GPIOC_OTYPER_OT7_Values<GPIOC::OTYPER, 7, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT6 = GPIOC_OTYPER_OT6_Values<GPIOC::OTYPER, 6, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT5 = GPIOC_OTYPER_OT5_Values<GPIOC::OTYPER, 5, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT4 = GPIOC_OTYPER_OT4_Values<GPIOC::OTYPER, 4, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT3 = GPIOC_OTYPER_OT3_Values<GPIOC::OTYPER, 3, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT2 = GPIOC_OTYPER_OT2_Values<GPIOC::OTYPER, 2, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT1 = GPIOC_OTYPER_OT1_Values<GPIOC::OTYPER, 1, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using OT0 = GPIOC_OTYPER_OT0_Values<GPIOC::OTYPER, 0, 1, ReadWriteMode, GPIOCOTYPERBase> ;
    using FieldValues = GPIOC_OTYPER_OT0_Values<GPIOC::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40020804, 32, ReadWriteMode, GPIOCOTYPERBase, T...> ;

  struct GPIOCOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40020808, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOC_OSPEEDR_OSPEEDR15_Values<GPIOC::OSPEEDR, 30, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR14 = GPIOC_OSPEEDR_OSPEEDR14_Values<GPIOC::OSPEEDR, 28, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR13 = GPIOC_OSPEEDR_OSPEEDR13_Values<GPIOC::OSPEEDR, 26, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR12 = GPIOC_OSPEEDR_OSPEEDR12_Values<GPIOC::OSPEEDR, 24, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR11 = GPIOC_OSPEEDR_OSPEEDR11_Values<GPIOC::OSPEEDR, 22, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR10 = GPIOC_OSPEEDR_OSPEEDR10_Values<GPIOC::OSPEEDR, 20, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR9 = GPIOC_OSPEEDR_OSPEEDR9_Values<GPIOC::OSPEEDR, 18, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR8 = GPIOC_OSPEEDR_OSPEEDR8_Values<GPIOC::OSPEEDR, 16, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR7 = GPIOC_OSPEEDR_OSPEEDR7_Values<GPIOC::OSPEEDR, 14, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR6 = GPIOC_OSPEEDR_OSPEEDR6_Values<GPIOC::OSPEEDR, 12, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR5 = GPIOC_OSPEEDR_OSPEEDR5_Values<GPIOC::OSPEEDR, 10, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR4 = GPIOC_OSPEEDR_OSPEEDR4_Values<GPIOC::OSPEEDR, 8, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR3 = GPIOC_OSPEEDR_OSPEEDR3_Values<GPIOC::OSPEEDR, 6, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR2 = GPIOC_OSPEEDR_OSPEEDR2_Values<GPIOC::OSPEEDR, 4, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR1 = GPIOC_OSPEEDR_OSPEEDR1_Values<GPIOC::OSPEEDR, 2, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using OSPEEDR0 = GPIOC_OSPEEDR_OSPEEDR0_Values<GPIOC::OSPEEDR, 0, 2, ReadWriteMode, GPIOCOSPEEDRBase> ;
    using FieldValues = GPIOC_OSPEEDR_OSPEEDR0_Values<GPIOC::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40020808, 32, ReadWriteMode, GPIOCOSPEEDRBase, T...> ;

  struct GPIOCPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002080C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOC_PUPDR_PUPDR15_Values<GPIOC::PUPDR, 30, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR14 = GPIOC_PUPDR_PUPDR14_Values<GPIOC::PUPDR, 28, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR13 = GPIOC_PUPDR_PUPDR13_Values<GPIOC::PUPDR, 26, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR12 = GPIOC_PUPDR_PUPDR12_Values<GPIOC::PUPDR, 24, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR11 = GPIOC_PUPDR_PUPDR11_Values<GPIOC::PUPDR, 22, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR10 = GPIOC_PUPDR_PUPDR10_Values<GPIOC::PUPDR, 20, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR9 = GPIOC_PUPDR_PUPDR9_Values<GPIOC::PUPDR, 18, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR8 = GPIOC_PUPDR_PUPDR8_Values<GPIOC::PUPDR, 16, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR7 = GPIOC_PUPDR_PUPDR7_Values<GPIOC::PUPDR, 14, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR6 = GPIOC_PUPDR_PUPDR6_Values<GPIOC::PUPDR, 12, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR5 = GPIOC_PUPDR_PUPDR5_Values<GPIOC::PUPDR, 10, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR4 = GPIOC_PUPDR_PUPDR4_Values<GPIOC::PUPDR, 8, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR3 = GPIOC_PUPDR_PUPDR3_Values<GPIOC::PUPDR, 6, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR2 = GPIOC_PUPDR_PUPDR2_Values<GPIOC::PUPDR, 4, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR1 = GPIOC_PUPDR_PUPDR1_Values<GPIOC::PUPDR, 2, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using PUPDR0 = GPIOC_PUPDR_PUPDR0_Values<GPIOC::PUPDR, 0, 2, ReadWriteMode, GPIOCPUPDRBase> ;
    using FieldValues = GPIOC_PUPDR_PUPDR0_Values<GPIOC::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002080C, 32, ReadWriteMode, GPIOCPUPDRBase, T...> ;

  struct GPIOCIDRBase {} ;

  struct IDR : public RegisterBase<0x40020810, 32, ReadMode>
  {
    using IDR15 = GPIOC_IDR_IDR15_Values<GPIOC::IDR, 15, 1, ReadMode, GPIOCIDRBase> ;
    using IDR14 = GPIOC_IDR_IDR14_Values<GPIOC::IDR, 14, 1, ReadMode, GPIOCIDRBase> ;
    using IDR13 = GPIOC_IDR_IDR13_Values<GPIOC::IDR, 13, 1, ReadMode, GPIOCIDRBase> ;
    using IDR12 = GPIOC_IDR_IDR12_Values<GPIOC::IDR, 12, 1, ReadMode, GPIOCIDRBase> ;
    using IDR11 = GPIOC_IDR_IDR11_Values<GPIOC::IDR, 11, 1, ReadMode, GPIOCIDRBase> ;
    using IDR10 = GPIOC_IDR_IDR10_Values<GPIOC::IDR, 10, 1, ReadMode, GPIOCIDRBase> ;
    using IDR9 = GPIOC_IDR_IDR9_Values<GPIOC::IDR, 9, 1, ReadMode, GPIOCIDRBase> ;
    using IDR8 = GPIOC_IDR_IDR8_Values<GPIOC::IDR, 8, 1, ReadMode, GPIOCIDRBase> ;
    using IDR7 = GPIOC_IDR_IDR7_Values<GPIOC::IDR, 7, 1, ReadMode, GPIOCIDRBase> ;
    using IDR6 = GPIOC_IDR_IDR6_Values<GPIOC::IDR, 6, 1, ReadMode, GPIOCIDRBase> ;
    using IDR5 = GPIOC_IDR_IDR5_Values<GPIOC::IDR, 5, 1, ReadMode, GPIOCIDRBase> ;
    using IDR4 = GPIOC_IDR_IDR4_Values<GPIOC::IDR, 4, 1, ReadMode, GPIOCIDRBase> ;
    using IDR3 = GPIOC_IDR_IDR3_Values<GPIOC::IDR, 3, 1, ReadMode, GPIOCIDRBase> ;
    using IDR2 = GPIOC_IDR_IDR2_Values<GPIOC::IDR, 2, 1, ReadMode, GPIOCIDRBase> ;
    using IDR1 = GPIOC_IDR_IDR1_Values<GPIOC::IDR, 1, 1, ReadMode, GPIOCIDRBase> ;
    using IDR0 = GPIOC_IDR_IDR0_Values<GPIOC::IDR, 0, 1, ReadMode, GPIOCIDRBase> ;
    using FieldValues = GPIOC_IDR_IDR0_Values<GPIOC::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40020810, 32, ReadMode, GPIOCIDRBase, T...> ;

  struct GPIOCODRBase {} ;

  struct ODR : public RegisterBase<0x40020814, 32, ReadWriteMode>
  {
    using ODR15 = GPIOC_ODR_ODR15_Values<GPIOC::ODR, 15, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR14 = GPIOC_ODR_ODR14_Values<GPIOC::ODR, 14, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR13 = GPIOC_ODR_ODR13_Values<GPIOC::ODR, 13, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR12 = GPIOC_ODR_ODR12_Values<GPIOC::ODR, 12, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR11 = GPIOC_ODR_ODR11_Values<GPIOC::ODR, 11, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR10 = GPIOC_ODR_ODR10_Values<GPIOC::ODR, 10, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR9 = GPIOC_ODR_ODR9_Values<GPIOC::ODR, 9, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR8 = GPIOC_ODR_ODR8_Values<GPIOC::ODR, 8, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR7 = GPIOC_ODR_ODR7_Values<GPIOC::ODR, 7, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR6 = GPIOC_ODR_ODR6_Values<GPIOC::ODR, 6, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR5 = GPIOC_ODR_ODR5_Values<GPIOC::ODR, 5, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR4 = GPIOC_ODR_ODR4_Values<GPIOC::ODR, 4, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR3 = GPIOC_ODR_ODR3_Values<GPIOC::ODR, 3, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR2 = GPIOC_ODR_ODR2_Values<GPIOC::ODR, 2, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR1 = GPIOC_ODR_ODR1_Values<GPIOC::ODR, 1, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR0 = GPIOC_ODR_ODR0_Values<GPIOC::ODR, 0, 1, ReadWriteMode, GPIOCODRBase> ;
    using FieldValues = GPIOC_ODR_ODR0_Values<GPIOC::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40020814, 32, ReadWriteMode, GPIOCODRBase, T...> ;

  struct GPIOCBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40020818, 32, WriteMode>
  {
    using BR15 = GPIOC_BSRR_BR15_Values<GPIOC::BSRR, 31, 1, WriteMode, GPIOCBSRRBase> ;
    using BR14 = GPIOC_BSRR_BR14_Values<GPIOC::BSRR, 30, 1, WriteMode, GPIOCBSRRBase> ;
    using BR13 = GPIOC_BSRR_BR13_Values<GPIOC::BSRR, 29, 1, WriteMode, GPIOCBSRRBase> ;
    using BR12 = GPIOC_BSRR_BR12_Values<GPIOC::BSRR, 28, 1, WriteMode, GPIOCBSRRBase> ;
    using BR11 = GPIOC_BSRR_BR11_Values<GPIOC::BSRR, 27, 1, WriteMode, GPIOCBSRRBase> ;
    using BR10 = GPIOC_BSRR_BR10_Values<GPIOC::BSRR, 26, 1, WriteMode, GPIOCBSRRBase> ;
    using BR9 = GPIOC_BSRR_BR9_Values<GPIOC::BSRR, 25, 1, WriteMode, GPIOCBSRRBase> ;
    using BR8 = GPIOC_BSRR_BR8_Values<GPIOC::BSRR, 24, 1, WriteMode, GPIOCBSRRBase> ;
    using BR7 = GPIOC_BSRR_BR7_Values<GPIOC::BSRR, 23, 1, WriteMode, GPIOCBSRRBase> ;
    using BR6 = GPIOC_BSRR_BR6_Values<GPIOC::BSRR, 22, 1, WriteMode, GPIOCBSRRBase> ;
    using BR5 = GPIOC_BSRR_BR5_Values<GPIOC::BSRR, 21, 1, WriteMode, GPIOCBSRRBase> ;
    using BR4 = GPIOC_BSRR_BR4_Values<GPIOC::BSRR, 20, 1, WriteMode, GPIOCBSRRBase> ;
    using BR3 = GPIOC_BSRR_BR3_Values<GPIOC::BSRR, 19, 1, WriteMode, GPIOCBSRRBase> ;
    using BR2 = GPIOC_BSRR_BR2_Values<GPIOC::BSRR, 18, 1, WriteMode, GPIOCBSRRBase> ;
    using BR1 = GPIOC_BSRR_BR1_Values<GPIOC::BSRR, 17, 1, WriteMode, GPIOCBSRRBase> ;
    using BR0 = GPIOC_BSRR_BR0_Values<GPIOC::BSRR, 16, 1, WriteMode, GPIOCBSRRBase> ;
    using BS15 = GPIOC_BSRR_BS15_Values<GPIOC::BSRR, 15, 1, WriteMode, GPIOCBSRRBase> ;
    using BS14 = GPIOC_BSRR_BS14_Values<GPIOC::BSRR, 14, 1, WriteMode, GPIOCBSRRBase> ;
    using BS13 = GPIOC_BSRR_BS13_Values<GPIOC::BSRR, 13, 1, WriteMode, GPIOCBSRRBase> ;
    using BS12 = GPIOC_BSRR_BS12_Values<GPIOC::BSRR, 12, 1, WriteMode, GPIOCBSRRBase> ;
    using BS11 = GPIOC_BSRR_BS11_Values<GPIOC::BSRR, 11, 1, WriteMode, GPIOCBSRRBase> ;
    using BS10 = GPIOC_BSRR_BS10_Values<GPIOC::BSRR, 10, 1, WriteMode, GPIOCBSRRBase> ;
    using BS9 = GPIOC_BSRR_BS9_Values<GPIOC::BSRR, 9, 1, WriteMode, GPIOCBSRRBase> ;
    using BS8 = GPIOC_BSRR_BS8_Values<GPIOC::BSRR, 8, 1, WriteMode, GPIOCBSRRBase> ;
    using BS7 = GPIOC_BSRR_BS7_Values<GPIOC::BSRR, 7, 1, WriteMode, GPIOCBSRRBase> ;
    using BS6 = GPIOC_BSRR_BS6_Values<GPIOC::BSRR, 6, 1, WriteMode, GPIOCBSRRBase> ;
    using BS5 = GPIOC_BSRR_BS5_Values<GPIOC::BSRR, 5, 1, WriteMode, GPIOCBSRRBase> ;
    using BS4 = GPIOC_BSRR_BS4_Values<GPIOC::BSRR, 4, 1, WriteMode, GPIOCBSRRBase> ;
    using BS3 = GPIOC_BSRR_BS3_Values<GPIOC::BSRR, 3, 1, WriteMode, GPIOCBSRRBase> ;
    using BS2 = GPIOC_BSRR_BS2_Values<GPIOC::BSRR, 2, 1, WriteMode, GPIOCBSRRBase> ;
    using BS1 = GPIOC_BSRR_BS1_Values<GPIOC::BSRR, 1, 1, WriteMode, GPIOCBSRRBase> ;
    using BS0 = GPIOC_BSRR_BS0_Values<GPIOC::BSRR, 0, 1, WriteMode, GPIOCBSRRBase> ;
    using FieldValues = GPIOC_BSRR_BS0_Values<GPIOC::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40020818, 32, WriteMode, GPIOCBSRRBase, T...> ;

  struct GPIOCLCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002081C, 32, ReadWriteMode>
  {
    using LCKK = GPIOC_LCKR_LCKK_Values<GPIOC::LCKR, 16, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK15 = GPIOC_LCKR_LCK15_Values<GPIOC::LCKR, 15, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK14 = GPIOC_LCKR_LCK14_Values<GPIOC::LCKR, 14, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK13 = GPIOC_LCKR_LCK13_Values<GPIOC::LCKR, 13, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK12 = GPIOC_LCKR_LCK12_Values<GPIOC::LCKR, 12, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK11 = GPIOC_LCKR_LCK11_Values<GPIOC::LCKR, 11, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK10 = GPIOC_LCKR_LCK10_Values<GPIOC::LCKR, 10, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK9 = GPIOC_LCKR_LCK9_Values<GPIOC::LCKR, 9, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK8 = GPIOC_LCKR_LCK8_Values<GPIOC::LCKR, 8, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK7 = GPIOC_LCKR_LCK7_Values<GPIOC::LCKR, 7, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK6 = GPIOC_LCKR_LCK6_Values<GPIOC::LCKR, 6, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK5 = GPIOC_LCKR_LCK5_Values<GPIOC::LCKR, 5, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK4 = GPIOC_LCKR_LCK4_Values<GPIOC::LCKR, 4, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK3 = GPIOC_LCKR_LCK3_Values<GPIOC::LCKR, 3, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK2 = GPIOC_LCKR_LCK2_Values<GPIOC::LCKR, 2, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK1 = GPIOC_LCKR_LCK1_Values<GPIOC::LCKR, 1, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK0 = GPIOC_LCKR_LCK0_Values<GPIOC::LCKR, 0, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using FieldValues = GPIOC_LCKR_LCK0_Values<GPIOC::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002081C, 32, ReadWriteMode, GPIOCLCKRBase, T...> ;

  struct GPIOCAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40020820, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOC_AFRL_AFRL7_Values<GPIOC::AFRL, 28, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using AFRL6 = GPIOC_AFRL_AFRL6_Values<GPIOC::AFRL, 24, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using AFRL5 = GPIOC_AFRL_AFRL5_Values<GPIOC::AFRL, 20, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using AFRL4 = GPIOC_AFRL_AFRL4_Values<GPIOC::AFRL, 16, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using AFRL3 = GPIOC_AFRL_AFRL3_Values<GPIOC::AFRL, 12, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using AFRL2 = GPIOC_AFRL_AFRL2_Values<GPIOC::AFRL, 8, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using AFRL1 = GPIOC_AFRL_AFRL1_Values<GPIOC::AFRL, 4, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using AFRL0 = GPIOC_AFRL_AFRL0_Values<GPIOC::AFRL, 0, 4, ReadWriteMode, GPIOCAFRLBase> ;
    using FieldValues = GPIOC_AFRL_AFRL0_Values<GPIOC::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40020820, 32, ReadWriteMode, GPIOCAFRLBase, T...> ;

  struct GPIOCAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40020824, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOC_AFRH_AFRH15_Values<GPIOC::AFRH, 28, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using AFRH14 = GPIOC_AFRH_AFRH14_Values<GPIOC::AFRH, 24, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using AFRH13 = GPIOC_AFRH_AFRH13_Values<GPIOC::AFRH, 20, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using AFRH12 = GPIOC_AFRH_AFRH12_Values<GPIOC::AFRH, 16, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using AFRH11 = GPIOC_AFRH_AFRH11_Values<GPIOC::AFRH, 12, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using AFRH10 = GPIOC_AFRH_AFRH10_Values<GPIOC::AFRH, 8, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using AFRH9 = GPIOC_AFRH_AFRH9_Values<GPIOC::AFRH, 4, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using AFRH8 = GPIOC_AFRH_AFRH8_Values<GPIOC::AFRH, 0, 4, ReadWriteMode, GPIOCAFRHBase> ;
    using FieldValues = GPIOC_AFRH_AFRH8_Values<GPIOC::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40020824, 32, ReadWriteMode, GPIOCAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOCREGISTERS_HPP)
