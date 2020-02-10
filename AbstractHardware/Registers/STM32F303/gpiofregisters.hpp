/*******************************************************************************
* Filename      : gpiofregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F303 device.
*
*
*******************************************************************************/

#if !defined(GPIOFREGISTERS_HPP)
#define GPIOFREGISTERS_HPP

#include "gpioffieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOF
{
  struct GPIOFMODERBase {} ;

  struct MODER : public RegisterBase<0x48001400, 32, ReadWriteMode>
  {
    using MODER15 = GPIOF_MODER_MODER15_Values<GPIOF::MODER, 30, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER14 = GPIOF_MODER_MODER14_Values<GPIOF::MODER, 28, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER13 = GPIOF_MODER_MODER13_Values<GPIOF::MODER, 26, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER12 = GPIOF_MODER_MODER12_Values<GPIOF::MODER, 24, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER11 = GPIOF_MODER_MODER11_Values<GPIOF::MODER, 22, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER10 = GPIOF_MODER_MODER10_Values<GPIOF::MODER, 20, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER9 = GPIOF_MODER_MODER9_Values<GPIOF::MODER, 18, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER8 = GPIOF_MODER_MODER8_Values<GPIOF::MODER, 16, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER7 = GPIOF_MODER_MODER7_Values<GPIOF::MODER, 14, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER6 = GPIOF_MODER_MODER6_Values<GPIOF::MODER, 12, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER5 = GPIOF_MODER_MODER5_Values<GPIOF::MODER, 10, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER4 = GPIOF_MODER_MODER4_Values<GPIOF::MODER, 8, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER3 = GPIOF_MODER_MODER3_Values<GPIOF::MODER, 6, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER2 = GPIOF_MODER_MODER2_Values<GPIOF::MODER, 4, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER1 = GPIOF_MODER_MODER1_Values<GPIOF::MODER, 2, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODER0 = GPIOF_MODER_MODER0_Values<GPIOF::MODER, 0, 2, ReadWriteMode, GPIOFMODERBase> ;
    using FieldValues = GPIOF_MODER_MODER0_Values<GPIOF::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x48001400, 32, ReadWriteMode, GPIOFMODERBase, T...> ;

  struct GPIOFOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x48001404, 32, ReadWriteMode>
  {
    using OT15 = GPIOF_OTYPER_OT15_Values<GPIOF::OTYPER, 15, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT14 = GPIOF_OTYPER_OT14_Values<GPIOF::OTYPER, 14, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT13 = GPIOF_OTYPER_OT13_Values<GPIOF::OTYPER, 13, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT12 = GPIOF_OTYPER_OT12_Values<GPIOF::OTYPER, 12, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT11 = GPIOF_OTYPER_OT11_Values<GPIOF::OTYPER, 11, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT10 = GPIOF_OTYPER_OT10_Values<GPIOF::OTYPER, 10, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT9 = GPIOF_OTYPER_OT9_Values<GPIOF::OTYPER, 9, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT8 = GPIOF_OTYPER_OT8_Values<GPIOF::OTYPER, 8, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT7 = GPIOF_OTYPER_OT7_Values<GPIOF::OTYPER, 7, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT6 = GPIOF_OTYPER_OT6_Values<GPIOF::OTYPER, 6, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT5 = GPIOF_OTYPER_OT5_Values<GPIOF::OTYPER, 5, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT4 = GPIOF_OTYPER_OT4_Values<GPIOF::OTYPER, 4, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT3 = GPIOF_OTYPER_OT3_Values<GPIOF::OTYPER, 3, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT2 = GPIOF_OTYPER_OT2_Values<GPIOF::OTYPER, 2, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT1 = GPIOF_OTYPER_OT1_Values<GPIOF::OTYPER, 1, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT0 = GPIOF_OTYPER_OT0_Values<GPIOF::OTYPER, 0, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using FieldValues = GPIOF_OTYPER_OT0_Values<GPIOF::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x48001404, 32, ReadWriteMode, GPIOFOTYPERBase, T...> ;

  struct GPIOFOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x48001408, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOF_OSPEEDR_OSPEEDR15_Values<GPIOF::OSPEEDR, 30, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR14 = GPIOF_OSPEEDR_OSPEEDR14_Values<GPIOF::OSPEEDR, 28, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR13 = GPIOF_OSPEEDR_OSPEEDR13_Values<GPIOF::OSPEEDR, 26, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR12 = GPIOF_OSPEEDR_OSPEEDR12_Values<GPIOF::OSPEEDR, 24, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR11 = GPIOF_OSPEEDR_OSPEEDR11_Values<GPIOF::OSPEEDR, 22, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR10 = GPIOF_OSPEEDR_OSPEEDR10_Values<GPIOF::OSPEEDR, 20, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR9 = GPIOF_OSPEEDR_OSPEEDR9_Values<GPIOF::OSPEEDR, 18, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR8 = GPIOF_OSPEEDR_OSPEEDR8_Values<GPIOF::OSPEEDR, 16, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR7 = GPIOF_OSPEEDR_OSPEEDR7_Values<GPIOF::OSPEEDR, 14, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR6 = GPIOF_OSPEEDR_OSPEEDR6_Values<GPIOF::OSPEEDR, 12, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR5 = GPIOF_OSPEEDR_OSPEEDR5_Values<GPIOF::OSPEEDR, 10, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR4 = GPIOF_OSPEEDR_OSPEEDR4_Values<GPIOF::OSPEEDR, 8, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR3 = GPIOF_OSPEEDR_OSPEEDR3_Values<GPIOF::OSPEEDR, 6, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR2 = GPIOF_OSPEEDR_OSPEEDR2_Values<GPIOF::OSPEEDR, 4, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR1 = GPIOF_OSPEEDR_OSPEEDR1_Values<GPIOF::OSPEEDR, 2, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEEDR0 = GPIOF_OSPEEDR_OSPEEDR0_Values<GPIOF::OSPEEDR, 0, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using FieldValues = GPIOF_OSPEEDR_OSPEEDR0_Values<GPIOF::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x48001408, 32, ReadWriteMode, GPIOFOSPEEDRBase, T...> ;

  struct GPIOFPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4800140C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOF_PUPDR_PUPDR15_Values<GPIOF::PUPDR, 30, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR14 = GPIOF_PUPDR_PUPDR14_Values<GPIOF::PUPDR, 28, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR13 = GPIOF_PUPDR_PUPDR13_Values<GPIOF::PUPDR, 26, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR12 = GPIOF_PUPDR_PUPDR12_Values<GPIOF::PUPDR, 24, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR11 = GPIOF_PUPDR_PUPDR11_Values<GPIOF::PUPDR, 22, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR10 = GPIOF_PUPDR_PUPDR10_Values<GPIOF::PUPDR, 20, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR9 = GPIOF_PUPDR_PUPDR9_Values<GPIOF::PUPDR, 18, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR8 = GPIOF_PUPDR_PUPDR8_Values<GPIOF::PUPDR, 16, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR7 = GPIOF_PUPDR_PUPDR7_Values<GPIOF::PUPDR, 14, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR6 = GPIOF_PUPDR_PUPDR6_Values<GPIOF::PUPDR, 12, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR5 = GPIOF_PUPDR_PUPDR5_Values<GPIOF::PUPDR, 10, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR4 = GPIOF_PUPDR_PUPDR4_Values<GPIOF::PUPDR, 8, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR3 = GPIOF_PUPDR_PUPDR3_Values<GPIOF::PUPDR, 6, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR2 = GPIOF_PUPDR_PUPDR2_Values<GPIOF::PUPDR, 4, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR1 = GPIOF_PUPDR_PUPDR1_Values<GPIOF::PUPDR, 2, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPDR0 = GPIOF_PUPDR_PUPDR0_Values<GPIOF::PUPDR, 0, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using FieldValues = GPIOF_PUPDR_PUPDR0_Values<GPIOF::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4800140C, 32, ReadWriteMode, GPIOFPUPDRBase, T...> ;

  struct GPIOFIDRBase {} ;

  struct IDR : public RegisterBase<0x48001410, 32, ReadMode>
  {
    using IDR15 = GPIOF_IDR_IDR15_Values<GPIOF::IDR, 15, 1, ReadMode, GPIOFIDRBase> ;
    using IDR14 = GPIOF_IDR_IDR14_Values<GPIOF::IDR, 14, 1, ReadMode, GPIOFIDRBase> ;
    using IDR13 = GPIOF_IDR_IDR13_Values<GPIOF::IDR, 13, 1, ReadMode, GPIOFIDRBase> ;
    using IDR12 = GPIOF_IDR_IDR12_Values<GPIOF::IDR, 12, 1, ReadMode, GPIOFIDRBase> ;
    using IDR11 = GPIOF_IDR_IDR11_Values<GPIOF::IDR, 11, 1, ReadMode, GPIOFIDRBase> ;
    using IDR10 = GPIOF_IDR_IDR10_Values<GPIOF::IDR, 10, 1, ReadMode, GPIOFIDRBase> ;
    using IDR9 = GPIOF_IDR_IDR9_Values<GPIOF::IDR, 9, 1, ReadMode, GPIOFIDRBase> ;
    using IDR8 = GPIOF_IDR_IDR8_Values<GPIOF::IDR, 8, 1, ReadMode, GPIOFIDRBase> ;
    using IDR7 = GPIOF_IDR_IDR7_Values<GPIOF::IDR, 7, 1, ReadMode, GPIOFIDRBase> ;
    using IDR6 = GPIOF_IDR_IDR6_Values<GPIOF::IDR, 6, 1, ReadMode, GPIOFIDRBase> ;
    using IDR5 = GPIOF_IDR_IDR5_Values<GPIOF::IDR, 5, 1, ReadMode, GPIOFIDRBase> ;
    using IDR4 = GPIOF_IDR_IDR4_Values<GPIOF::IDR, 4, 1, ReadMode, GPIOFIDRBase> ;
    using IDR3 = GPIOF_IDR_IDR3_Values<GPIOF::IDR, 3, 1, ReadMode, GPIOFIDRBase> ;
    using IDR2 = GPIOF_IDR_IDR2_Values<GPIOF::IDR, 2, 1, ReadMode, GPIOFIDRBase> ;
    using IDR1 = GPIOF_IDR_IDR1_Values<GPIOF::IDR, 1, 1, ReadMode, GPIOFIDRBase> ;
    using IDR0 = GPIOF_IDR_IDR0_Values<GPIOF::IDR, 0, 1, ReadMode, GPIOFIDRBase> ;
    using FieldValues = GPIOF_IDR_IDR0_Values<GPIOF::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x48001410, 32, ReadMode, GPIOFIDRBase, T...> ;

  struct GPIOFODRBase {} ;

  struct ODR : public RegisterBase<0x48001414, 32, ReadWriteMode>
  {
    using ODR15 = GPIOF_ODR_ODR15_Values<GPIOF::ODR, 15, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR14 = GPIOF_ODR_ODR14_Values<GPIOF::ODR, 14, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR13 = GPIOF_ODR_ODR13_Values<GPIOF::ODR, 13, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR12 = GPIOF_ODR_ODR12_Values<GPIOF::ODR, 12, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR11 = GPIOF_ODR_ODR11_Values<GPIOF::ODR, 11, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR10 = GPIOF_ODR_ODR10_Values<GPIOF::ODR, 10, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR9 = GPIOF_ODR_ODR9_Values<GPIOF::ODR, 9, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR8 = GPIOF_ODR_ODR8_Values<GPIOF::ODR, 8, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR7 = GPIOF_ODR_ODR7_Values<GPIOF::ODR, 7, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR6 = GPIOF_ODR_ODR6_Values<GPIOF::ODR, 6, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR5 = GPIOF_ODR_ODR5_Values<GPIOF::ODR, 5, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR4 = GPIOF_ODR_ODR4_Values<GPIOF::ODR, 4, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR3 = GPIOF_ODR_ODR3_Values<GPIOF::ODR, 3, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR2 = GPIOF_ODR_ODR2_Values<GPIOF::ODR, 2, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR1 = GPIOF_ODR_ODR1_Values<GPIOF::ODR, 1, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR0 = GPIOF_ODR_ODR0_Values<GPIOF::ODR, 0, 1, ReadWriteMode, GPIOFODRBase> ;
    using FieldValues = GPIOF_ODR_ODR0_Values<GPIOF::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x48001414, 32, ReadWriteMode, GPIOFODRBase, T...> ;

  struct GPIOFBSRRBase {} ;

  struct BSRR : public RegisterBase<0x48001418, 32, WriteMode>
  {
    using BR15 = GPIOF_BSRR_BR15_Values<GPIOF::BSRR, 31, 1, WriteMode, GPIOFBSRRBase> ;
    using BR14 = GPIOF_BSRR_BR14_Values<GPIOF::BSRR, 30, 1, WriteMode, GPIOFBSRRBase> ;
    using BR13 = GPIOF_BSRR_BR13_Values<GPIOF::BSRR, 29, 1, WriteMode, GPIOFBSRRBase> ;
    using BR12 = GPIOF_BSRR_BR12_Values<GPIOF::BSRR, 28, 1, WriteMode, GPIOFBSRRBase> ;
    using BR11 = GPIOF_BSRR_BR11_Values<GPIOF::BSRR, 27, 1, WriteMode, GPIOFBSRRBase> ;
    using BR10 = GPIOF_BSRR_BR10_Values<GPIOF::BSRR, 26, 1, WriteMode, GPIOFBSRRBase> ;
    using BR9 = GPIOF_BSRR_BR9_Values<GPIOF::BSRR, 25, 1, WriteMode, GPIOFBSRRBase> ;
    using BR8 = GPIOF_BSRR_BR8_Values<GPIOF::BSRR, 24, 1, WriteMode, GPIOFBSRRBase> ;
    using BR7 = GPIOF_BSRR_BR7_Values<GPIOF::BSRR, 23, 1, WriteMode, GPIOFBSRRBase> ;
    using BR6 = GPIOF_BSRR_BR6_Values<GPIOF::BSRR, 22, 1, WriteMode, GPIOFBSRRBase> ;
    using BR5 = GPIOF_BSRR_BR5_Values<GPIOF::BSRR, 21, 1, WriteMode, GPIOFBSRRBase> ;
    using BR4 = GPIOF_BSRR_BR4_Values<GPIOF::BSRR, 20, 1, WriteMode, GPIOFBSRRBase> ;
    using BR3 = GPIOF_BSRR_BR3_Values<GPIOF::BSRR, 19, 1, WriteMode, GPIOFBSRRBase> ;
    using BR2 = GPIOF_BSRR_BR2_Values<GPIOF::BSRR, 18, 1, WriteMode, GPIOFBSRRBase> ;
    using BR1 = GPIOF_BSRR_BR1_Values<GPIOF::BSRR, 17, 1, WriteMode, GPIOFBSRRBase> ;
    using BR0 = GPIOF_BSRR_BR0_Values<GPIOF::BSRR, 16, 1, WriteMode, GPIOFBSRRBase> ;
    using BS15 = GPIOF_BSRR_BS15_Values<GPIOF::BSRR, 15, 1, WriteMode, GPIOFBSRRBase> ;
    using BS14 = GPIOF_BSRR_BS14_Values<GPIOF::BSRR, 14, 1, WriteMode, GPIOFBSRRBase> ;
    using BS13 = GPIOF_BSRR_BS13_Values<GPIOF::BSRR, 13, 1, WriteMode, GPIOFBSRRBase> ;
    using BS12 = GPIOF_BSRR_BS12_Values<GPIOF::BSRR, 12, 1, WriteMode, GPIOFBSRRBase> ;
    using BS11 = GPIOF_BSRR_BS11_Values<GPIOF::BSRR, 11, 1, WriteMode, GPIOFBSRRBase> ;
    using BS10 = GPIOF_BSRR_BS10_Values<GPIOF::BSRR, 10, 1, WriteMode, GPIOFBSRRBase> ;
    using BS9 = GPIOF_BSRR_BS9_Values<GPIOF::BSRR, 9, 1, WriteMode, GPIOFBSRRBase> ;
    using BS8 = GPIOF_BSRR_BS8_Values<GPIOF::BSRR, 8, 1, WriteMode, GPIOFBSRRBase> ;
    using BS7 = GPIOF_BSRR_BS7_Values<GPIOF::BSRR, 7, 1, WriteMode, GPIOFBSRRBase> ;
    using BS6 = GPIOF_BSRR_BS6_Values<GPIOF::BSRR, 6, 1, WriteMode, GPIOFBSRRBase> ;
    using BS5 = GPIOF_BSRR_BS5_Values<GPIOF::BSRR, 5, 1, WriteMode, GPIOFBSRRBase> ;
    using BS4 = GPIOF_BSRR_BS4_Values<GPIOF::BSRR, 4, 1, WriteMode, GPIOFBSRRBase> ;
    using BS3 = GPIOF_BSRR_BS3_Values<GPIOF::BSRR, 3, 1, WriteMode, GPIOFBSRRBase> ;
    using BS2 = GPIOF_BSRR_BS2_Values<GPIOF::BSRR, 2, 1, WriteMode, GPIOFBSRRBase> ;
    using BS1 = GPIOF_BSRR_BS1_Values<GPIOF::BSRR, 1, 1, WriteMode, GPIOFBSRRBase> ;
    using BS0 = GPIOF_BSRR_BS0_Values<GPIOF::BSRR, 0, 1, WriteMode, GPIOFBSRRBase> ;
    using FieldValues = GPIOF_BSRR_BS0_Values<GPIOF::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x48001418, 32, WriteMode, GPIOFBSRRBase, T...> ;

  struct GPIOFLCKRBase {} ;

  struct LCKR : public RegisterBase<0x4800141C, 32, ReadWriteMode>
  {
    using LCKK = GPIOF_LCKR_LCKK_Values<GPIOF::LCKR, 16, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK15 = GPIOF_LCKR_LCK15_Values<GPIOF::LCKR, 15, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK14 = GPIOF_LCKR_LCK14_Values<GPIOF::LCKR, 14, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK13 = GPIOF_LCKR_LCK13_Values<GPIOF::LCKR, 13, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK12 = GPIOF_LCKR_LCK12_Values<GPIOF::LCKR, 12, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK11 = GPIOF_LCKR_LCK11_Values<GPIOF::LCKR, 11, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK10 = GPIOF_LCKR_LCK10_Values<GPIOF::LCKR, 10, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK9 = GPIOF_LCKR_LCK9_Values<GPIOF::LCKR, 9, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK8 = GPIOF_LCKR_LCK8_Values<GPIOF::LCKR, 8, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK7 = GPIOF_LCKR_LCK7_Values<GPIOF::LCKR, 7, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK6 = GPIOF_LCKR_LCK6_Values<GPIOF::LCKR, 6, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK5 = GPIOF_LCKR_LCK5_Values<GPIOF::LCKR, 5, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK4 = GPIOF_LCKR_LCK4_Values<GPIOF::LCKR, 4, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK3 = GPIOF_LCKR_LCK3_Values<GPIOF::LCKR, 3, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK2 = GPIOF_LCKR_LCK2_Values<GPIOF::LCKR, 2, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK1 = GPIOF_LCKR_LCK1_Values<GPIOF::LCKR, 1, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK0 = GPIOF_LCKR_LCK0_Values<GPIOF::LCKR, 0, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using FieldValues = GPIOF_LCKR_LCK0_Values<GPIOF::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4800141C, 32, ReadWriteMode, GPIOFLCKRBase, T...> ;

  struct GPIOFAFRLBase {} ;

  struct AFRL : public RegisterBase<0x48001420, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOF_AFRL_AFRL7_Values<GPIOF::AFRL, 28, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFRL6 = GPIOF_AFRL_AFRL6_Values<GPIOF::AFRL, 24, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFRL5 = GPIOF_AFRL_AFRL5_Values<GPIOF::AFRL, 20, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFRL4 = GPIOF_AFRL_AFRL4_Values<GPIOF::AFRL, 16, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFRL3 = GPIOF_AFRL_AFRL3_Values<GPIOF::AFRL, 12, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFRL2 = GPIOF_AFRL_AFRL2_Values<GPIOF::AFRL, 8, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFRL1 = GPIOF_AFRL_AFRL1_Values<GPIOF::AFRL, 4, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFRL0 = GPIOF_AFRL_AFRL0_Values<GPIOF::AFRL, 0, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using FieldValues = GPIOF_AFRL_AFRL0_Values<GPIOF::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x48001420, 32, ReadWriteMode, GPIOFAFRLBase, T...> ;

  struct GPIOFAFRHBase {} ;

  struct AFRH : public RegisterBase<0x48001424, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOF_AFRH_AFRH15_Values<GPIOF::AFRH, 28, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFRH14 = GPIOF_AFRH_AFRH14_Values<GPIOF::AFRH, 24, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFRH13 = GPIOF_AFRH_AFRH13_Values<GPIOF::AFRH, 20, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFRH12 = GPIOF_AFRH_AFRH12_Values<GPIOF::AFRH, 16, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFRH11 = GPIOF_AFRH_AFRH11_Values<GPIOF::AFRH, 12, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFRH10 = GPIOF_AFRH_AFRH10_Values<GPIOF::AFRH, 8, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFRH9 = GPIOF_AFRH_AFRH9_Values<GPIOF::AFRH, 4, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFRH8 = GPIOF_AFRH_AFRH8_Values<GPIOF::AFRH, 0, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using FieldValues = GPIOF_AFRH_AFRH8_Values<GPIOF::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x48001424, 32, ReadWriteMode, GPIOFAFRHBase, T...> ;

  struct GPIOFBRRBase {} ;

  struct BRR : public RegisterBase<0x48001428, 32, WriteMode>
  {
    using BR0 = GPIOF_BRR_BR0_Values<GPIOF::BRR, 0, 1, WriteMode, GPIOFBRRBase> ;
    using BR1 = GPIOF_BRR_BR1_Values<GPIOF::BRR, 1, 1, WriteMode, GPIOFBRRBase> ;
    using BR2 = GPIOF_BRR_BR2_Values<GPIOF::BRR, 2, 1, WriteMode, GPIOFBRRBase> ;
    using BR3 = GPIOF_BRR_BR3_Values<GPIOF::BRR, 3, 1, WriteMode, GPIOFBRRBase> ;
    using BR4 = GPIOF_BRR_BR4_Values<GPIOF::BRR, 4, 1, WriteMode, GPIOFBRRBase> ;
    using BR5 = GPIOF_BRR_BR5_Values<GPIOF::BRR, 5, 1, WriteMode, GPIOFBRRBase> ;
    using BR6 = GPIOF_BRR_BR6_Values<GPIOF::BRR, 6, 1, WriteMode, GPIOFBRRBase> ;
    using BR7 = GPIOF_BRR_BR7_Values<GPIOF::BRR, 7, 1, WriteMode, GPIOFBRRBase> ;
    using BR8 = GPIOF_BRR_BR8_Values<GPIOF::BRR, 8, 1, WriteMode, GPIOFBRRBase> ;
    using BR9 = GPIOF_BRR_BR9_Values<GPIOF::BRR, 9, 1, WriteMode, GPIOFBRRBase> ;
    using BR10 = GPIOF_BRR_BR10_Values<GPIOF::BRR, 10, 1, WriteMode, GPIOFBRRBase> ;
    using BR11 = GPIOF_BRR_BR11_Values<GPIOF::BRR, 11, 1, WriteMode, GPIOFBRRBase> ;
    using BR12 = GPIOF_BRR_BR12_Values<GPIOF::BRR, 12, 1, WriteMode, GPIOFBRRBase> ;
    using BR13 = GPIOF_BRR_BR13_Values<GPIOF::BRR, 13, 1, WriteMode, GPIOFBRRBase> ;
    using BR14 = GPIOF_BRR_BR14_Values<GPIOF::BRR, 14, 1, WriteMode, GPIOFBRRBase> ;
    using BR15 = GPIOF_BRR_BR15_Values<GPIOF::BRR, 15, 1, WriteMode, GPIOFBRRBase> ;
    using FieldValues = GPIOF_BRR_BR15_Values<GPIOF::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x48001428, 32, WriteMode, GPIOFBRRBase, T...> ;

} ;

#endif //#if !defined(GPIOFREGISTERS_HPP)
