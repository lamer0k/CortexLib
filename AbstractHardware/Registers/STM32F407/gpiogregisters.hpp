/*******************************************************************************
* Filename      : gpiogregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(GPIOGREGISTERS_HPP)
#define GPIOGREGISTERS_HPP

#include "gpiogfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOG
{
  struct GPIOGMODERBase {} ;

  struct MODER : public RegisterBase<0x40021800, 32, ReadWriteMode>
  {
    using MODER15 = GPIOG_MODER_MODER15_Values<GPIOG::MODER, 30, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER14 = GPIOG_MODER_MODER14_Values<GPIOG::MODER, 28, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER13 = GPIOG_MODER_MODER13_Values<GPIOG::MODER, 26, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER12 = GPIOG_MODER_MODER12_Values<GPIOG::MODER, 24, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER11 = GPIOG_MODER_MODER11_Values<GPIOG::MODER, 22, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER10 = GPIOG_MODER_MODER10_Values<GPIOG::MODER, 20, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER9 = GPIOG_MODER_MODER9_Values<GPIOG::MODER, 18, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER8 = GPIOG_MODER_MODER8_Values<GPIOG::MODER, 16, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER7 = GPIOG_MODER_MODER7_Values<GPIOG::MODER, 14, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER6 = GPIOG_MODER_MODER6_Values<GPIOG::MODER, 12, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER5 = GPIOG_MODER_MODER5_Values<GPIOG::MODER, 10, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER4 = GPIOG_MODER_MODER4_Values<GPIOG::MODER, 8, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER3 = GPIOG_MODER_MODER3_Values<GPIOG::MODER, 6, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER2 = GPIOG_MODER_MODER2_Values<GPIOG::MODER, 4, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER1 = GPIOG_MODER_MODER1_Values<GPIOG::MODER, 2, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODER0 = GPIOG_MODER_MODER0_Values<GPIOG::MODER, 0, 2, ReadWriteMode, GPIOGMODERBase> ;
    using FieldValues = GPIOG_MODER_MODER0_Values<GPIOG::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40021800, 32, ReadWriteMode, GPIOGMODERBase, T...> ;

  struct GPIOGOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40021804, 32, ReadWriteMode>
  {
    using OT15 = GPIOG_OTYPER_OT15_Values<GPIOG::OTYPER, 15, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT14 = GPIOG_OTYPER_OT14_Values<GPIOG::OTYPER, 14, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT13 = GPIOG_OTYPER_OT13_Values<GPIOG::OTYPER, 13, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT12 = GPIOG_OTYPER_OT12_Values<GPIOG::OTYPER, 12, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT11 = GPIOG_OTYPER_OT11_Values<GPIOG::OTYPER, 11, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT10 = GPIOG_OTYPER_OT10_Values<GPIOG::OTYPER, 10, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT9 = GPIOG_OTYPER_OT9_Values<GPIOG::OTYPER, 9, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT8 = GPIOG_OTYPER_OT8_Values<GPIOG::OTYPER, 8, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT7 = GPIOG_OTYPER_OT7_Values<GPIOG::OTYPER, 7, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT6 = GPIOG_OTYPER_OT6_Values<GPIOG::OTYPER, 6, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT5 = GPIOG_OTYPER_OT5_Values<GPIOG::OTYPER, 5, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT4 = GPIOG_OTYPER_OT4_Values<GPIOG::OTYPER, 4, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT3 = GPIOG_OTYPER_OT3_Values<GPIOG::OTYPER, 3, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT2 = GPIOG_OTYPER_OT2_Values<GPIOG::OTYPER, 2, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT1 = GPIOG_OTYPER_OT1_Values<GPIOG::OTYPER, 1, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT0 = GPIOG_OTYPER_OT0_Values<GPIOG::OTYPER, 0, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using FieldValues = GPIOG_OTYPER_OT0_Values<GPIOG::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40021804, 32, ReadWriteMode, GPIOGOTYPERBase, T...> ;

  struct GPIOGOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40021808, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOG_OSPEEDR_OSPEEDR15_Values<GPIOG::OSPEEDR, 30, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR14 = GPIOG_OSPEEDR_OSPEEDR14_Values<GPIOG::OSPEEDR, 28, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR13 = GPIOG_OSPEEDR_OSPEEDR13_Values<GPIOG::OSPEEDR, 26, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR12 = GPIOG_OSPEEDR_OSPEEDR12_Values<GPIOG::OSPEEDR, 24, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR11 = GPIOG_OSPEEDR_OSPEEDR11_Values<GPIOG::OSPEEDR, 22, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR10 = GPIOG_OSPEEDR_OSPEEDR10_Values<GPIOG::OSPEEDR, 20, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR9 = GPIOG_OSPEEDR_OSPEEDR9_Values<GPIOG::OSPEEDR, 18, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR8 = GPIOG_OSPEEDR_OSPEEDR8_Values<GPIOG::OSPEEDR, 16, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR7 = GPIOG_OSPEEDR_OSPEEDR7_Values<GPIOG::OSPEEDR, 14, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR6 = GPIOG_OSPEEDR_OSPEEDR6_Values<GPIOG::OSPEEDR, 12, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR5 = GPIOG_OSPEEDR_OSPEEDR5_Values<GPIOG::OSPEEDR, 10, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR4 = GPIOG_OSPEEDR_OSPEEDR4_Values<GPIOG::OSPEEDR, 8, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR3 = GPIOG_OSPEEDR_OSPEEDR3_Values<GPIOG::OSPEEDR, 6, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR2 = GPIOG_OSPEEDR_OSPEEDR2_Values<GPIOG::OSPEEDR, 4, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR1 = GPIOG_OSPEEDR_OSPEEDR1_Values<GPIOG::OSPEEDR, 2, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEEDR0 = GPIOG_OSPEEDR_OSPEEDR0_Values<GPIOG::OSPEEDR, 0, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using FieldValues = GPIOG_OSPEEDR_OSPEEDR0_Values<GPIOG::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40021808, 32, ReadWriteMode, GPIOGOSPEEDRBase, T...> ;

  struct GPIOGPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002180C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOG_PUPDR_PUPDR15_Values<GPIOG::PUPDR, 30, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR14 = GPIOG_PUPDR_PUPDR14_Values<GPIOG::PUPDR, 28, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR13 = GPIOG_PUPDR_PUPDR13_Values<GPIOG::PUPDR, 26, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR12 = GPIOG_PUPDR_PUPDR12_Values<GPIOG::PUPDR, 24, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR11 = GPIOG_PUPDR_PUPDR11_Values<GPIOG::PUPDR, 22, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR10 = GPIOG_PUPDR_PUPDR10_Values<GPIOG::PUPDR, 20, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR9 = GPIOG_PUPDR_PUPDR9_Values<GPIOG::PUPDR, 18, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR8 = GPIOG_PUPDR_PUPDR8_Values<GPIOG::PUPDR, 16, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR7 = GPIOG_PUPDR_PUPDR7_Values<GPIOG::PUPDR, 14, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR6 = GPIOG_PUPDR_PUPDR6_Values<GPIOG::PUPDR, 12, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR5 = GPIOG_PUPDR_PUPDR5_Values<GPIOG::PUPDR, 10, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR4 = GPIOG_PUPDR_PUPDR4_Values<GPIOG::PUPDR, 8, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR3 = GPIOG_PUPDR_PUPDR3_Values<GPIOG::PUPDR, 6, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR2 = GPIOG_PUPDR_PUPDR2_Values<GPIOG::PUPDR, 4, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR1 = GPIOG_PUPDR_PUPDR1_Values<GPIOG::PUPDR, 2, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPDR0 = GPIOG_PUPDR_PUPDR0_Values<GPIOG::PUPDR, 0, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using FieldValues = GPIOG_PUPDR_PUPDR0_Values<GPIOG::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002180C, 32, ReadWriteMode, GPIOGPUPDRBase, T...> ;

  struct GPIOGIDRBase {} ;

  struct IDR : public RegisterBase<0x40021810, 32, ReadMode>
  {
    using IDR15 = GPIOG_IDR_IDR15_Values<GPIOG::IDR, 15, 1, ReadMode, GPIOGIDRBase> ;
    using IDR14 = GPIOG_IDR_IDR14_Values<GPIOG::IDR, 14, 1, ReadMode, GPIOGIDRBase> ;
    using IDR13 = GPIOG_IDR_IDR13_Values<GPIOG::IDR, 13, 1, ReadMode, GPIOGIDRBase> ;
    using IDR12 = GPIOG_IDR_IDR12_Values<GPIOG::IDR, 12, 1, ReadMode, GPIOGIDRBase> ;
    using IDR11 = GPIOG_IDR_IDR11_Values<GPIOG::IDR, 11, 1, ReadMode, GPIOGIDRBase> ;
    using IDR10 = GPIOG_IDR_IDR10_Values<GPIOG::IDR, 10, 1, ReadMode, GPIOGIDRBase> ;
    using IDR9 = GPIOG_IDR_IDR9_Values<GPIOG::IDR, 9, 1, ReadMode, GPIOGIDRBase> ;
    using IDR8 = GPIOG_IDR_IDR8_Values<GPIOG::IDR, 8, 1, ReadMode, GPIOGIDRBase> ;
    using IDR7 = GPIOG_IDR_IDR7_Values<GPIOG::IDR, 7, 1, ReadMode, GPIOGIDRBase> ;
    using IDR6 = GPIOG_IDR_IDR6_Values<GPIOG::IDR, 6, 1, ReadMode, GPIOGIDRBase> ;
    using IDR5 = GPIOG_IDR_IDR5_Values<GPIOG::IDR, 5, 1, ReadMode, GPIOGIDRBase> ;
    using IDR4 = GPIOG_IDR_IDR4_Values<GPIOG::IDR, 4, 1, ReadMode, GPIOGIDRBase> ;
    using IDR3 = GPIOG_IDR_IDR3_Values<GPIOG::IDR, 3, 1, ReadMode, GPIOGIDRBase> ;
    using IDR2 = GPIOG_IDR_IDR2_Values<GPIOG::IDR, 2, 1, ReadMode, GPIOGIDRBase> ;
    using IDR1 = GPIOG_IDR_IDR1_Values<GPIOG::IDR, 1, 1, ReadMode, GPIOGIDRBase> ;
    using IDR0 = GPIOG_IDR_IDR0_Values<GPIOG::IDR, 0, 1, ReadMode, GPIOGIDRBase> ;
    using FieldValues = GPIOG_IDR_IDR0_Values<GPIOG::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40021810, 32, ReadMode, GPIOGIDRBase, T...> ;

  struct GPIOGODRBase {} ;

  struct ODR : public RegisterBase<0x40021814, 32, ReadWriteMode>
  {
    using ODR15 = GPIOG_ODR_ODR15_Values<GPIOG::ODR, 15, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR14 = GPIOG_ODR_ODR14_Values<GPIOG::ODR, 14, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR13 = GPIOG_ODR_ODR13_Values<GPIOG::ODR, 13, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR12 = GPIOG_ODR_ODR12_Values<GPIOG::ODR, 12, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR11 = GPIOG_ODR_ODR11_Values<GPIOG::ODR, 11, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR10 = GPIOG_ODR_ODR10_Values<GPIOG::ODR, 10, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR9 = GPIOG_ODR_ODR9_Values<GPIOG::ODR, 9, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR8 = GPIOG_ODR_ODR8_Values<GPIOG::ODR, 8, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR7 = GPIOG_ODR_ODR7_Values<GPIOG::ODR, 7, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR6 = GPIOG_ODR_ODR6_Values<GPIOG::ODR, 6, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR5 = GPIOG_ODR_ODR5_Values<GPIOG::ODR, 5, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR4 = GPIOG_ODR_ODR4_Values<GPIOG::ODR, 4, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR3 = GPIOG_ODR_ODR3_Values<GPIOG::ODR, 3, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR2 = GPIOG_ODR_ODR2_Values<GPIOG::ODR, 2, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR1 = GPIOG_ODR_ODR1_Values<GPIOG::ODR, 1, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR0 = GPIOG_ODR_ODR0_Values<GPIOG::ODR, 0, 1, ReadWriteMode, GPIOGODRBase> ;
    using FieldValues = GPIOG_ODR_ODR0_Values<GPIOG::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40021814, 32, ReadWriteMode, GPIOGODRBase, T...> ;

  struct GPIOGBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40021818, 32, WriteMode>
  {
    using BR15 = GPIOG_BSRR_BR15_Values<GPIOG::BSRR, 31, 1, WriteMode, GPIOGBSRRBase> ;
    using BR14 = GPIOG_BSRR_BR14_Values<GPIOG::BSRR, 30, 1, WriteMode, GPIOGBSRRBase> ;
    using BR13 = GPIOG_BSRR_BR13_Values<GPIOG::BSRR, 29, 1, WriteMode, GPIOGBSRRBase> ;
    using BR12 = GPIOG_BSRR_BR12_Values<GPIOG::BSRR, 28, 1, WriteMode, GPIOGBSRRBase> ;
    using BR11 = GPIOG_BSRR_BR11_Values<GPIOG::BSRR, 27, 1, WriteMode, GPIOGBSRRBase> ;
    using BR10 = GPIOG_BSRR_BR10_Values<GPIOG::BSRR, 26, 1, WriteMode, GPIOGBSRRBase> ;
    using BR9 = GPIOG_BSRR_BR9_Values<GPIOG::BSRR, 25, 1, WriteMode, GPIOGBSRRBase> ;
    using BR8 = GPIOG_BSRR_BR8_Values<GPIOG::BSRR, 24, 1, WriteMode, GPIOGBSRRBase> ;
    using BR7 = GPIOG_BSRR_BR7_Values<GPIOG::BSRR, 23, 1, WriteMode, GPIOGBSRRBase> ;
    using BR6 = GPIOG_BSRR_BR6_Values<GPIOG::BSRR, 22, 1, WriteMode, GPIOGBSRRBase> ;
    using BR5 = GPIOG_BSRR_BR5_Values<GPIOG::BSRR, 21, 1, WriteMode, GPIOGBSRRBase> ;
    using BR4 = GPIOG_BSRR_BR4_Values<GPIOG::BSRR, 20, 1, WriteMode, GPIOGBSRRBase> ;
    using BR3 = GPIOG_BSRR_BR3_Values<GPIOG::BSRR, 19, 1, WriteMode, GPIOGBSRRBase> ;
    using BR2 = GPIOG_BSRR_BR2_Values<GPIOG::BSRR, 18, 1, WriteMode, GPIOGBSRRBase> ;
    using BR1 = GPIOG_BSRR_BR1_Values<GPIOG::BSRR, 17, 1, WriteMode, GPIOGBSRRBase> ;
    using BR0 = GPIOG_BSRR_BR0_Values<GPIOG::BSRR, 16, 1, WriteMode, GPIOGBSRRBase> ;
    using BS15 = GPIOG_BSRR_BS15_Values<GPIOG::BSRR, 15, 1, WriteMode, GPIOGBSRRBase> ;
    using BS14 = GPIOG_BSRR_BS14_Values<GPIOG::BSRR, 14, 1, WriteMode, GPIOGBSRRBase> ;
    using BS13 = GPIOG_BSRR_BS13_Values<GPIOG::BSRR, 13, 1, WriteMode, GPIOGBSRRBase> ;
    using BS12 = GPIOG_BSRR_BS12_Values<GPIOG::BSRR, 12, 1, WriteMode, GPIOGBSRRBase> ;
    using BS11 = GPIOG_BSRR_BS11_Values<GPIOG::BSRR, 11, 1, WriteMode, GPIOGBSRRBase> ;
    using BS10 = GPIOG_BSRR_BS10_Values<GPIOG::BSRR, 10, 1, WriteMode, GPIOGBSRRBase> ;
    using BS9 = GPIOG_BSRR_BS9_Values<GPIOG::BSRR, 9, 1, WriteMode, GPIOGBSRRBase> ;
    using BS8 = GPIOG_BSRR_BS8_Values<GPIOG::BSRR, 8, 1, WriteMode, GPIOGBSRRBase> ;
    using BS7 = GPIOG_BSRR_BS7_Values<GPIOG::BSRR, 7, 1, WriteMode, GPIOGBSRRBase> ;
    using BS6 = GPIOG_BSRR_BS6_Values<GPIOG::BSRR, 6, 1, WriteMode, GPIOGBSRRBase> ;
    using BS5 = GPIOG_BSRR_BS5_Values<GPIOG::BSRR, 5, 1, WriteMode, GPIOGBSRRBase> ;
    using BS4 = GPIOG_BSRR_BS4_Values<GPIOG::BSRR, 4, 1, WriteMode, GPIOGBSRRBase> ;
    using BS3 = GPIOG_BSRR_BS3_Values<GPIOG::BSRR, 3, 1, WriteMode, GPIOGBSRRBase> ;
    using BS2 = GPIOG_BSRR_BS2_Values<GPIOG::BSRR, 2, 1, WriteMode, GPIOGBSRRBase> ;
    using BS1 = GPIOG_BSRR_BS1_Values<GPIOG::BSRR, 1, 1, WriteMode, GPIOGBSRRBase> ;
    using BS0 = GPIOG_BSRR_BS0_Values<GPIOG::BSRR, 0, 1, WriteMode, GPIOGBSRRBase> ;
    using FieldValues = GPIOG_BSRR_BS0_Values<GPIOG::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40021818, 32, WriteMode, GPIOGBSRRBase, T...> ;

  struct GPIOGLCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002181C, 32, ReadWriteMode>
  {
    using LCKK = GPIOG_LCKR_LCKK_Values<GPIOG::LCKR, 16, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK15 = GPIOG_LCKR_LCK15_Values<GPIOG::LCKR, 15, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK14 = GPIOG_LCKR_LCK14_Values<GPIOG::LCKR, 14, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK13 = GPIOG_LCKR_LCK13_Values<GPIOG::LCKR, 13, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK12 = GPIOG_LCKR_LCK12_Values<GPIOG::LCKR, 12, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK11 = GPIOG_LCKR_LCK11_Values<GPIOG::LCKR, 11, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK10 = GPIOG_LCKR_LCK10_Values<GPIOG::LCKR, 10, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK9 = GPIOG_LCKR_LCK9_Values<GPIOG::LCKR, 9, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK8 = GPIOG_LCKR_LCK8_Values<GPIOG::LCKR, 8, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK7 = GPIOG_LCKR_LCK7_Values<GPIOG::LCKR, 7, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK6 = GPIOG_LCKR_LCK6_Values<GPIOG::LCKR, 6, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK5 = GPIOG_LCKR_LCK5_Values<GPIOG::LCKR, 5, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK4 = GPIOG_LCKR_LCK4_Values<GPIOG::LCKR, 4, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK3 = GPIOG_LCKR_LCK3_Values<GPIOG::LCKR, 3, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK2 = GPIOG_LCKR_LCK2_Values<GPIOG::LCKR, 2, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK1 = GPIOG_LCKR_LCK1_Values<GPIOG::LCKR, 1, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK0 = GPIOG_LCKR_LCK0_Values<GPIOG::LCKR, 0, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using FieldValues = GPIOG_LCKR_LCK0_Values<GPIOG::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002181C, 32, ReadWriteMode, GPIOGLCKRBase, T...> ;

  struct GPIOGAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40021820, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOG_AFRL_AFRL7_Values<GPIOG::AFRL, 28, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFRL6 = GPIOG_AFRL_AFRL6_Values<GPIOG::AFRL, 24, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFRL5 = GPIOG_AFRL_AFRL5_Values<GPIOG::AFRL, 20, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFRL4 = GPIOG_AFRL_AFRL4_Values<GPIOG::AFRL, 16, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFRL3 = GPIOG_AFRL_AFRL3_Values<GPIOG::AFRL, 12, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFRL2 = GPIOG_AFRL_AFRL2_Values<GPIOG::AFRL, 8, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFRL1 = GPIOG_AFRL_AFRL1_Values<GPIOG::AFRL, 4, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFRL0 = GPIOG_AFRL_AFRL0_Values<GPIOG::AFRL, 0, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using FieldValues = GPIOG_AFRL_AFRL0_Values<GPIOG::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40021820, 32, ReadWriteMode, GPIOGAFRLBase, T...> ;

  struct GPIOGAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40021824, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOG_AFRH_AFRH15_Values<GPIOG::AFRH, 28, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFRH14 = GPIOG_AFRH_AFRH14_Values<GPIOG::AFRH, 24, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFRH13 = GPIOG_AFRH_AFRH13_Values<GPIOG::AFRH, 20, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFRH12 = GPIOG_AFRH_AFRH12_Values<GPIOG::AFRH, 16, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFRH11 = GPIOG_AFRH_AFRH11_Values<GPIOG::AFRH, 12, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFRH10 = GPIOG_AFRH_AFRH10_Values<GPIOG::AFRH, 8, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFRH9 = GPIOG_AFRH_AFRH9_Values<GPIOG::AFRH, 4, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFRH8 = GPIOG_AFRH_AFRH8_Values<GPIOG::AFRH, 0, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using FieldValues = GPIOG_AFRH_AFRH8_Values<GPIOG::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40021824, 32, ReadWriteMode, GPIOGAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOGREGISTERS_HPP)
