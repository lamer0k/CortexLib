/*******************************************************************************
* Filename      : lcdregisters.hpp
*
* Details       : Liquid crystal display controller. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(LCDREGISTERS_HPP)
#define LCDREGISTERS_HPP

#include "lcdfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LCD
{
  struct LCDCRBase {} ;

  struct CR : public RegisterBase<0x40002400, 32, ReadWriteMode>
  {
    using BIAS = LCD_CR_BIAS_Values<LCD::CR, 5, 2, ReadWriteMode, LCDCRBase> ;
    using DUTY = LCD_CR_DUTY_Values<LCD::CR, 2, 3, ReadWriteMode, LCDCRBase> ;
    using VSEL = LCD_CR_VSEL_Values<LCD::CR, 1, 1, ReadWriteMode, LCDCRBase> ;
    using LCDEN = LCD_CR_LCDEN_Values<LCD::CR, 0, 1, ReadWriteMode, LCDCRBase> ;
    using MUX_SEG = LCD_CR_MUX_SEG_Values<LCD::CR, 7, 1, ReadWriteMode, LCDCRBase> ;
    using BUFEN = LCD_CR_BUFEN_Values<LCD::CR, 8, 1, ReadWriteMode, LCDCRBase> ;
    using FieldValues = LCD_CR_BUFEN_Values<LCD::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40002400, 32, ReadWriteMode, LCDCRBase, T...> ;

  struct LCDFCRBase {} ;

  struct FCR : public RegisterBase<0x40002404, 32, ReadWriteMode>
  {
    using PS = LCD_FCR_PS_Values<LCD::FCR, 22, 4, ReadWriteMode, LCDFCRBase> ;
    using DIV = LCD_FCR_DIV_Values<LCD::FCR, 18, 4, ReadWriteMode, LCDFCRBase> ;
    using BLINK = LCD_FCR_BLINK_Values<LCD::FCR, 16, 2, ReadWriteMode, LCDFCRBase> ;
    using BLINKF = LCD_FCR_BLINKF_Values<LCD::FCR, 13, 3, ReadWriteMode, LCDFCRBase> ;
    using CC = LCD_FCR_CC_Values<LCD::FCR, 10, 3, ReadWriteMode, LCDFCRBase> ;
    using DEAD = LCD_FCR_DEAD_Values<LCD::FCR, 7, 3, ReadWriteMode, LCDFCRBase> ;
    using PON = LCD_FCR_PON_Values<LCD::FCR, 4, 3, ReadWriteMode, LCDFCRBase> ;
    using UDDIE = LCD_FCR_UDDIE_Values<LCD::FCR, 3, 1, ReadWriteMode, LCDFCRBase> ;
    using SOFIE = LCD_FCR_SOFIE_Values<LCD::FCR, 1, 1, ReadWriteMode, LCDFCRBase> ;
    using HD = LCD_FCR_HD_Values<LCD::FCR, 0, 1, ReadWriteMode, LCDFCRBase> ;
    using FieldValues = LCD_FCR_HD_Values<LCD::FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FCRPack  = Register<0x40002404, 32, ReadWriteMode, LCDFCRBase, T...> ;

  struct LCDSRBase {} ;

  struct SR : public RegisterBase<0x40002408, 32, ReadWriteMode>
  {
    using FCRSF = LCD_SR_FCRSF_Values<LCD::SR, 5, 1, ReadMode, LCDSRBase> ;
    using RDY = LCD_SR_RDY_Values<LCD::SR, 4, 1, ReadMode, LCDSRBase> ;
    using UDD = LCD_SR_UDD_Values<LCD::SR, 3, 1, ReadMode, LCDSRBase> ;
    using UDR = LCD_SR_UDR_Values<LCD::SR, 2, 1, WriteMode, LCDSRBase> ;
    using SOF = LCD_SR_SOF_Values<LCD::SR, 1, 1, ReadMode, LCDSRBase> ;
    using ENS = LCD_SR_ENS_Values<LCD::SR, 0, 1, ReadMode, LCDSRBase> ;
    using FieldValues = LCD_SR_ENS_Values<LCD::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40002408, 32, ReadWriteMode, LCDSRBase, T...> ;

  struct LCDCLRBase {} ;

  struct CLR : public RegisterBase<0x4000240C, 32, WriteMode>
  {
    using UDDC = LCD_CLR_UDDC_Values<LCD::CLR, 3, 1, WriteMode, LCDCLRBase> ;
    using SOFC = LCD_CLR_SOFC_Values<LCD::CLR, 1, 1, WriteMode, LCDCLRBase> ;
    using FieldValues = LCD_CLR_SOFC_Values<LCD::CLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLRPack  = Register<0x4000240C, 32, WriteMode, LCDCLRBase, T...> ;

  struct LCDRAM_COM0Base {} ;

  struct RAM_COM0 : public RegisterBase<0x40002414, 32, ReadWriteMode>
  {
    using S30 = LCD_RAM_COM0_S30_Values<LCD::RAM_COM0, 30, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S29 = LCD_RAM_COM0_S29_Values<LCD::RAM_COM0, 29, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S28 = LCD_RAM_COM0_S28_Values<LCD::RAM_COM0, 28, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S27 = LCD_RAM_COM0_S27_Values<LCD::RAM_COM0, 27, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S26 = LCD_RAM_COM0_S26_Values<LCD::RAM_COM0, 26, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S25 = LCD_RAM_COM0_S25_Values<LCD::RAM_COM0, 25, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S24 = LCD_RAM_COM0_S24_Values<LCD::RAM_COM0, 24, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S23 = LCD_RAM_COM0_S23_Values<LCD::RAM_COM0, 23, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S22 = LCD_RAM_COM0_S22_Values<LCD::RAM_COM0, 22, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S21 = LCD_RAM_COM0_S21_Values<LCD::RAM_COM0, 21, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S20 = LCD_RAM_COM0_S20_Values<LCD::RAM_COM0, 20, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S19 = LCD_RAM_COM0_S19_Values<LCD::RAM_COM0, 19, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S18 = LCD_RAM_COM0_S18_Values<LCD::RAM_COM0, 18, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S17 = LCD_RAM_COM0_S17_Values<LCD::RAM_COM0, 17, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S16 = LCD_RAM_COM0_S16_Values<LCD::RAM_COM0, 16, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S15 = LCD_RAM_COM0_S15_Values<LCD::RAM_COM0, 15, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S14 = LCD_RAM_COM0_S14_Values<LCD::RAM_COM0, 14, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S13 = LCD_RAM_COM0_S13_Values<LCD::RAM_COM0, 13, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S12 = LCD_RAM_COM0_S12_Values<LCD::RAM_COM0, 12, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S11 = LCD_RAM_COM0_S11_Values<LCD::RAM_COM0, 11, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S10 = LCD_RAM_COM0_S10_Values<LCD::RAM_COM0, 10, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S09 = LCD_RAM_COM0_S09_Values<LCD::RAM_COM0, 9, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S08 = LCD_RAM_COM0_S08_Values<LCD::RAM_COM0, 8, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S07 = LCD_RAM_COM0_S07_Values<LCD::RAM_COM0, 7, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S06 = LCD_RAM_COM0_S06_Values<LCD::RAM_COM0, 6, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S05 = LCD_RAM_COM0_S05_Values<LCD::RAM_COM0, 5, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S04 = LCD_RAM_COM0_S04_Values<LCD::RAM_COM0, 4, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S03 = LCD_RAM_COM0_S03_Values<LCD::RAM_COM0, 3, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S02 = LCD_RAM_COM0_S02_Values<LCD::RAM_COM0, 2, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S01 = LCD_RAM_COM0_S01_Values<LCD::RAM_COM0, 1, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using S00 = LCD_RAM_COM0_S00_Values<LCD::RAM_COM0, 0, 1, ReadWriteMode, LCDRAM_COM0Base> ;
    using FieldValues = LCD_RAM_COM0_S00_Values<LCD::RAM_COM0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM0Pack  = Register<0x40002414, 32, ReadWriteMode, LCDRAM_COM0Base, T...> ;

  struct LCDRAM_COM1Base {} ;

  struct RAM_COM1 : public RegisterBase<0x4000241C, 32, ReadWriteMode>
  {
    using S31 = LCD_RAM_COM1_S31_Values<LCD::RAM_COM1, 31, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S30 = LCD_RAM_COM1_S30_Values<LCD::RAM_COM1, 30, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S29 = LCD_RAM_COM1_S29_Values<LCD::RAM_COM1, 29, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S28 = LCD_RAM_COM1_S28_Values<LCD::RAM_COM1, 28, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S27 = LCD_RAM_COM1_S27_Values<LCD::RAM_COM1, 27, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S26 = LCD_RAM_COM1_S26_Values<LCD::RAM_COM1, 26, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S25 = LCD_RAM_COM1_S25_Values<LCD::RAM_COM1, 25, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S24 = LCD_RAM_COM1_S24_Values<LCD::RAM_COM1, 24, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S23 = LCD_RAM_COM1_S23_Values<LCD::RAM_COM1, 23, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S22 = LCD_RAM_COM1_S22_Values<LCD::RAM_COM1, 22, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S21 = LCD_RAM_COM1_S21_Values<LCD::RAM_COM1, 21, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S20 = LCD_RAM_COM1_S20_Values<LCD::RAM_COM1, 20, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S19 = LCD_RAM_COM1_S19_Values<LCD::RAM_COM1, 19, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S18 = LCD_RAM_COM1_S18_Values<LCD::RAM_COM1, 18, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S17 = LCD_RAM_COM1_S17_Values<LCD::RAM_COM1, 17, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S16 = LCD_RAM_COM1_S16_Values<LCD::RAM_COM1, 16, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S15 = LCD_RAM_COM1_S15_Values<LCD::RAM_COM1, 15, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S14 = LCD_RAM_COM1_S14_Values<LCD::RAM_COM1, 14, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S13 = LCD_RAM_COM1_S13_Values<LCD::RAM_COM1, 13, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S12 = LCD_RAM_COM1_S12_Values<LCD::RAM_COM1, 12, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S11 = LCD_RAM_COM1_S11_Values<LCD::RAM_COM1, 11, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S10 = LCD_RAM_COM1_S10_Values<LCD::RAM_COM1, 10, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S09 = LCD_RAM_COM1_S09_Values<LCD::RAM_COM1, 9, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S08 = LCD_RAM_COM1_S08_Values<LCD::RAM_COM1, 8, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S07 = LCD_RAM_COM1_S07_Values<LCD::RAM_COM1, 7, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S06 = LCD_RAM_COM1_S06_Values<LCD::RAM_COM1, 6, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S05 = LCD_RAM_COM1_S05_Values<LCD::RAM_COM1, 5, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S04 = LCD_RAM_COM1_S04_Values<LCD::RAM_COM1, 4, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S03 = LCD_RAM_COM1_S03_Values<LCD::RAM_COM1, 3, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S02 = LCD_RAM_COM1_S02_Values<LCD::RAM_COM1, 2, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S01 = LCD_RAM_COM1_S01_Values<LCD::RAM_COM1, 1, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using S00 = LCD_RAM_COM1_S00_Values<LCD::RAM_COM1, 0, 1, ReadWriteMode, LCDRAM_COM1Base> ;
    using FieldValues = LCD_RAM_COM1_S00_Values<LCD::RAM_COM1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM1Pack  = Register<0x4000241C, 32, ReadWriteMode, LCDRAM_COM1Base, T...> ;

  struct LCDRAM_COM2Base {} ;

  struct RAM_COM2 : public RegisterBase<0x40002424, 32, ReadWriteMode>
  {
    using S31 = LCD_RAM_COM2_S31_Values<LCD::RAM_COM2, 31, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S30 = LCD_RAM_COM2_S30_Values<LCD::RAM_COM2, 30, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S29 = LCD_RAM_COM2_S29_Values<LCD::RAM_COM2, 29, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S28 = LCD_RAM_COM2_S28_Values<LCD::RAM_COM2, 28, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S27 = LCD_RAM_COM2_S27_Values<LCD::RAM_COM2, 27, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S26 = LCD_RAM_COM2_S26_Values<LCD::RAM_COM2, 26, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S25 = LCD_RAM_COM2_S25_Values<LCD::RAM_COM2, 25, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S24 = LCD_RAM_COM2_S24_Values<LCD::RAM_COM2, 24, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S23 = LCD_RAM_COM2_S23_Values<LCD::RAM_COM2, 23, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S22 = LCD_RAM_COM2_S22_Values<LCD::RAM_COM2, 22, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S21 = LCD_RAM_COM2_S21_Values<LCD::RAM_COM2, 21, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S20 = LCD_RAM_COM2_S20_Values<LCD::RAM_COM2, 20, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S19 = LCD_RAM_COM2_S19_Values<LCD::RAM_COM2, 19, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S18 = LCD_RAM_COM2_S18_Values<LCD::RAM_COM2, 18, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S17 = LCD_RAM_COM2_S17_Values<LCD::RAM_COM2, 17, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S16 = LCD_RAM_COM2_S16_Values<LCD::RAM_COM2, 16, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S15 = LCD_RAM_COM2_S15_Values<LCD::RAM_COM2, 15, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S14 = LCD_RAM_COM2_S14_Values<LCD::RAM_COM2, 14, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S13 = LCD_RAM_COM2_S13_Values<LCD::RAM_COM2, 13, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S12 = LCD_RAM_COM2_S12_Values<LCD::RAM_COM2, 12, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S11 = LCD_RAM_COM2_S11_Values<LCD::RAM_COM2, 11, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S10 = LCD_RAM_COM2_S10_Values<LCD::RAM_COM2, 10, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S09 = LCD_RAM_COM2_S09_Values<LCD::RAM_COM2, 9, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S08 = LCD_RAM_COM2_S08_Values<LCD::RAM_COM2, 8, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S07 = LCD_RAM_COM2_S07_Values<LCD::RAM_COM2, 7, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S06 = LCD_RAM_COM2_S06_Values<LCD::RAM_COM2, 6, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S05 = LCD_RAM_COM2_S05_Values<LCD::RAM_COM2, 5, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S04 = LCD_RAM_COM2_S04_Values<LCD::RAM_COM2, 4, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S03 = LCD_RAM_COM2_S03_Values<LCD::RAM_COM2, 3, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S02 = LCD_RAM_COM2_S02_Values<LCD::RAM_COM2, 2, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S01 = LCD_RAM_COM2_S01_Values<LCD::RAM_COM2, 1, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using S00 = LCD_RAM_COM2_S00_Values<LCD::RAM_COM2, 0, 1, ReadWriteMode, LCDRAM_COM2Base> ;
    using FieldValues = LCD_RAM_COM2_S00_Values<LCD::RAM_COM2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM2Pack  = Register<0x40002424, 32, ReadWriteMode, LCDRAM_COM2Base, T...> ;

  struct LCDRAM_COM3Base {} ;

  struct RAM_COM3 : public RegisterBase<0x4000242C, 32, ReadWriteMode>
  {
    using S31 = LCD_RAM_COM3_S31_Values<LCD::RAM_COM3, 31, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S30 = LCD_RAM_COM3_S30_Values<LCD::RAM_COM3, 30, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S29 = LCD_RAM_COM3_S29_Values<LCD::RAM_COM3, 29, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S28 = LCD_RAM_COM3_S28_Values<LCD::RAM_COM3, 28, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S27 = LCD_RAM_COM3_S27_Values<LCD::RAM_COM3, 27, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S26 = LCD_RAM_COM3_S26_Values<LCD::RAM_COM3, 26, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S25 = LCD_RAM_COM3_S25_Values<LCD::RAM_COM3, 25, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S24 = LCD_RAM_COM3_S24_Values<LCD::RAM_COM3, 24, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S23 = LCD_RAM_COM3_S23_Values<LCD::RAM_COM3, 23, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S22 = LCD_RAM_COM3_S22_Values<LCD::RAM_COM3, 22, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S21 = LCD_RAM_COM3_S21_Values<LCD::RAM_COM3, 21, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S20 = LCD_RAM_COM3_S20_Values<LCD::RAM_COM3, 20, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S19 = LCD_RAM_COM3_S19_Values<LCD::RAM_COM3, 19, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S18 = LCD_RAM_COM3_S18_Values<LCD::RAM_COM3, 18, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S17 = LCD_RAM_COM3_S17_Values<LCD::RAM_COM3, 17, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S16 = LCD_RAM_COM3_S16_Values<LCD::RAM_COM3, 16, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S15 = LCD_RAM_COM3_S15_Values<LCD::RAM_COM3, 15, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S14 = LCD_RAM_COM3_S14_Values<LCD::RAM_COM3, 14, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S13 = LCD_RAM_COM3_S13_Values<LCD::RAM_COM3, 13, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S12 = LCD_RAM_COM3_S12_Values<LCD::RAM_COM3, 12, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S11 = LCD_RAM_COM3_S11_Values<LCD::RAM_COM3, 11, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S10 = LCD_RAM_COM3_S10_Values<LCD::RAM_COM3, 10, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S09 = LCD_RAM_COM3_S09_Values<LCD::RAM_COM3, 9, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S08 = LCD_RAM_COM3_S08_Values<LCD::RAM_COM3, 8, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S07 = LCD_RAM_COM3_S07_Values<LCD::RAM_COM3, 7, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S06 = LCD_RAM_COM3_S06_Values<LCD::RAM_COM3, 6, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S05 = LCD_RAM_COM3_S05_Values<LCD::RAM_COM3, 5, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S04 = LCD_RAM_COM3_S04_Values<LCD::RAM_COM3, 4, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S03 = LCD_RAM_COM3_S03_Values<LCD::RAM_COM3, 3, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S02 = LCD_RAM_COM3_S02_Values<LCD::RAM_COM3, 2, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S01 = LCD_RAM_COM3_S01_Values<LCD::RAM_COM3, 1, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using S00 = LCD_RAM_COM3_S00_Values<LCD::RAM_COM3, 0, 1, ReadWriteMode, LCDRAM_COM3Base> ;
    using FieldValues = LCD_RAM_COM3_S00_Values<LCD::RAM_COM3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM3Pack  = Register<0x4000242C, 32, ReadWriteMode, LCDRAM_COM3Base, T...> ;

  struct LCDRAM_COM4Base {} ;

  struct RAM_COM4 : public RegisterBase<0x40002434, 32, ReadWriteMode>
  {
    using S31 = LCD_RAM_COM4_S31_Values<LCD::RAM_COM4, 31, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S30 = LCD_RAM_COM4_S30_Values<LCD::RAM_COM4, 30, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S29 = LCD_RAM_COM4_S29_Values<LCD::RAM_COM4, 29, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S28 = LCD_RAM_COM4_S28_Values<LCD::RAM_COM4, 28, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S27 = LCD_RAM_COM4_S27_Values<LCD::RAM_COM4, 27, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S26 = LCD_RAM_COM4_S26_Values<LCD::RAM_COM4, 26, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S25 = LCD_RAM_COM4_S25_Values<LCD::RAM_COM4, 25, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S24 = LCD_RAM_COM4_S24_Values<LCD::RAM_COM4, 24, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S23 = LCD_RAM_COM4_S23_Values<LCD::RAM_COM4, 23, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S22 = LCD_RAM_COM4_S22_Values<LCD::RAM_COM4, 22, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S21 = LCD_RAM_COM4_S21_Values<LCD::RAM_COM4, 21, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S20 = LCD_RAM_COM4_S20_Values<LCD::RAM_COM4, 20, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S19 = LCD_RAM_COM4_S19_Values<LCD::RAM_COM4, 19, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S18 = LCD_RAM_COM4_S18_Values<LCD::RAM_COM4, 18, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S17 = LCD_RAM_COM4_S17_Values<LCD::RAM_COM4, 17, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S16 = LCD_RAM_COM4_S16_Values<LCD::RAM_COM4, 16, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S15 = LCD_RAM_COM4_S15_Values<LCD::RAM_COM4, 15, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S14 = LCD_RAM_COM4_S14_Values<LCD::RAM_COM4, 14, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S13 = LCD_RAM_COM4_S13_Values<LCD::RAM_COM4, 13, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S12 = LCD_RAM_COM4_S12_Values<LCD::RAM_COM4, 12, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S11 = LCD_RAM_COM4_S11_Values<LCD::RAM_COM4, 11, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S10 = LCD_RAM_COM4_S10_Values<LCD::RAM_COM4, 10, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S09 = LCD_RAM_COM4_S09_Values<LCD::RAM_COM4, 9, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S08 = LCD_RAM_COM4_S08_Values<LCD::RAM_COM4, 8, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S07 = LCD_RAM_COM4_S07_Values<LCD::RAM_COM4, 7, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S06 = LCD_RAM_COM4_S06_Values<LCD::RAM_COM4, 6, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S05 = LCD_RAM_COM4_S05_Values<LCD::RAM_COM4, 5, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S04 = LCD_RAM_COM4_S04_Values<LCD::RAM_COM4, 4, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S03 = LCD_RAM_COM4_S03_Values<LCD::RAM_COM4, 3, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S02 = LCD_RAM_COM4_S02_Values<LCD::RAM_COM4, 2, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S01 = LCD_RAM_COM4_S01_Values<LCD::RAM_COM4, 1, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using S00 = LCD_RAM_COM4_S00_Values<LCD::RAM_COM4, 0, 1, ReadWriteMode, LCDRAM_COM4Base> ;
    using FieldValues = LCD_RAM_COM4_S00_Values<LCD::RAM_COM4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM4Pack  = Register<0x40002434, 32, ReadWriteMode, LCDRAM_COM4Base, T...> ;

  struct LCDRAM_COM5Base {} ;

  struct RAM_COM5 : public RegisterBase<0x4000243C, 32, ReadWriteMode>
  {
    using S31 = LCD_RAM_COM5_S31_Values<LCD::RAM_COM5, 31, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S30 = LCD_RAM_COM5_S30_Values<LCD::RAM_COM5, 30, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S29 = LCD_RAM_COM5_S29_Values<LCD::RAM_COM5, 29, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S28 = LCD_RAM_COM5_S28_Values<LCD::RAM_COM5, 28, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S27 = LCD_RAM_COM5_S27_Values<LCD::RAM_COM5, 27, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S26 = LCD_RAM_COM5_S26_Values<LCD::RAM_COM5, 26, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S25 = LCD_RAM_COM5_S25_Values<LCD::RAM_COM5, 25, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S24 = LCD_RAM_COM5_S24_Values<LCD::RAM_COM5, 24, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S23 = LCD_RAM_COM5_S23_Values<LCD::RAM_COM5, 23, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S22 = LCD_RAM_COM5_S22_Values<LCD::RAM_COM5, 22, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S21 = LCD_RAM_COM5_S21_Values<LCD::RAM_COM5, 21, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S20 = LCD_RAM_COM5_S20_Values<LCD::RAM_COM5, 20, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S19 = LCD_RAM_COM5_S19_Values<LCD::RAM_COM5, 19, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S18 = LCD_RAM_COM5_S18_Values<LCD::RAM_COM5, 18, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S17 = LCD_RAM_COM5_S17_Values<LCD::RAM_COM5, 17, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S16 = LCD_RAM_COM5_S16_Values<LCD::RAM_COM5, 16, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S15 = LCD_RAM_COM5_S15_Values<LCD::RAM_COM5, 15, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S14 = LCD_RAM_COM5_S14_Values<LCD::RAM_COM5, 14, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S13 = LCD_RAM_COM5_S13_Values<LCD::RAM_COM5, 13, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S12 = LCD_RAM_COM5_S12_Values<LCD::RAM_COM5, 12, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S11 = LCD_RAM_COM5_S11_Values<LCD::RAM_COM5, 11, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S10 = LCD_RAM_COM5_S10_Values<LCD::RAM_COM5, 10, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S09 = LCD_RAM_COM5_S09_Values<LCD::RAM_COM5, 9, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S08 = LCD_RAM_COM5_S08_Values<LCD::RAM_COM5, 8, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S07 = LCD_RAM_COM5_S07_Values<LCD::RAM_COM5, 7, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S06 = LCD_RAM_COM5_S06_Values<LCD::RAM_COM5, 6, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S05 = LCD_RAM_COM5_S05_Values<LCD::RAM_COM5, 5, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S04 = LCD_RAM_COM5_S04_Values<LCD::RAM_COM5, 4, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S03 = LCD_RAM_COM5_S03_Values<LCD::RAM_COM5, 3, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S02 = LCD_RAM_COM5_S02_Values<LCD::RAM_COM5, 2, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S01 = LCD_RAM_COM5_S01_Values<LCD::RAM_COM5, 1, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using S00 = LCD_RAM_COM5_S00_Values<LCD::RAM_COM5, 0, 1, ReadWriteMode, LCDRAM_COM5Base> ;
    using FieldValues = LCD_RAM_COM5_S00_Values<LCD::RAM_COM5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM5Pack  = Register<0x4000243C, 32, ReadWriteMode, LCDRAM_COM5Base, T...> ;

  struct LCDRAM_COM6Base {} ;

  struct RAM_COM6 : public RegisterBase<0x40002444, 32, ReadWriteMode>
  {
    using S31 = LCD_RAM_COM6_S31_Values<LCD::RAM_COM6, 31, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S30 = LCD_RAM_COM6_S30_Values<LCD::RAM_COM6, 30, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S29 = LCD_RAM_COM6_S29_Values<LCD::RAM_COM6, 29, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S28 = LCD_RAM_COM6_S28_Values<LCD::RAM_COM6, 28, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S27 = LCD_RAM_COM6_S27_Values<LCD::RAM_COM6, 27, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S26 = LCD_RAM_COM6_S26_Values<LCD::RAM_COM6, 26, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S25 = LCD_RAM_COM6_S25_Values<LCD::RAM_COM6, 25, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S24 = LCD_RAM_COM6_S24_Values<LCD::RAM_COM6, 24, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S23 = LCD_RAM_COM6_S23_Values<LCD::RAM_COM6, 23, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S22 = LCD_RAM_COM6_S22_Values<LCD::RAM_COM6, 22, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S21 = LCD_RAM_COM6_S21_Values<LCD::RAM_COM6, 21, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S20 = LCD_RAM_COM6_S20_Values<LCD::RAM_COM6, 20, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S19 = LCD_RAM_COM6_S19_Values<LCD::RAM_COM6, 19, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S18 = LCD_RAM_COM6_S18_Values<LCD::RAM_COM6, 18, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S17 = LCD_RAM_COM6_S17_Values<LCD::RAM_COM6, 17, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S16 = LCD_RAM_COM6_S16_Values<LCD::RAM_COM6, 16, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S15 = LCD_RAM_COM6_S15_Values<LCD::RAM_COM6, 15, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S14 = LCD_RAM_COM6_S14_Values<LCD::RAM_COM6, 14, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S13 = LCD_RAM_COM6_S13_Values<LCD::RAM_COM6, 13, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S12 = LCD_RAM_COM6_S12_Values<LCD::RAM_COM6, 12, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S11 = LCD_RAM_COM6_S11_Values<LCD::RAM_COM6, 11, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S10 = LCD_RAM_COM6_S10_Values<LCD::RAM_COM6, 10, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S09 = LCD_RAM_COM6_S09_Values<LCD::RAM_COM6, 9, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S08 = LCD_RAM_COM6_S08_Values<LCD::RAM_COM6, 8, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S07 = LCD_RAM_COM6_S07_Values<LCD::RAM_COM6, 7, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S06 = LCD_RAM_COM6_S06_Values<LCD::RAM_COM6, 6, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S05 = LCD_RAM_COM6_S05_Values<LCD::RAM_COM6, 5, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S04 = LCD_RAM_COM6_S04_Values<LCD::RAM_COM6, 4, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S03 = LCD_RAM_COM6_S03_Values<LCD::RAM_COM6, 3, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S02 = LCD_RAM_COM6_S02_Values<LCD::RAM_COM6, 2, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S01 = LCD_RAM_COM6_S01_Values<LCD::RAM_COM6, 1, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using S00 = LCD_RAM_COM6_S00_Values<LCD::RAM_COM6, 0, 1, ReadWriteMode, LCDRAM_COM6Base> ;
    using FieldValues = LCD_RAM_COM6_S00_Values<LCD::RAM_COM6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM6Pack  = Register<0x40002444, 32, ReadWriteMode, LCDRAM_COM6Base, T...> ;

  struct LCDRAM_COM7Base {} ;

  struct RAM_COM7 : public RegisterBase<0x4000244C, 32, ReadWriteMode>
  {
    using S31 = LCD_RAM_COM7_S31_Values<LCD::RAM_COM7, 31, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S30 = LCD_RAM_COM7_S30_Values<LCD::RAM_COM7, 30, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S29 = LCD_RAM_COM7_S29_Values<LCD::RAM_COM7, 29, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S28 = LCD_RAM_COM7_S28_Values<LCD::RAM_COM7, 28, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S27 = LCD_RAM_COM7_S27_Values<LCD::RAM_COM7, 27, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S26 = LCD_RAM_COM7_S26_Values<LCD::RAM_COM7, 26, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S25 = LCD_RAM_COM7_S25_Values<LCD::RAM_COM7, 25, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S24 = LCD_RAM_COM7_S24_Values<LCD::RAM_COM7, 24, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S23 = LCD_RAM_COM7_S23_Values<LCD::RAM_COM7, 23, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S22 = LCD_RAM_COM7_S22_Values<LCD::RAM_COM7, 22, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S21 = LCD_RAM_COM7_S21_Values<LCD::RAM_COM7, 21, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S20 = LCD_RAM_COM7_S20_Values<LCD::RAM_COM7, 20, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S19 = LCD_RAM_COM7_S19_Values<LCD::RAM_COM7, 19, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S18 = LCD_RAM_COM7_S18_Values<LCD::RAM_COM7, 18, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S17 = LCD_RAM_COM7_S17_Values<LCD::RAM_COM7, 17, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S16 = LCD_RAM_COM7_S16_Values<LCD::RAM_COM7, 16, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S15 = LCD_RAM_COM7_S15_Values<LCD::RAM_COM7, 15, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S14 = LCD_RAM_COM7_S14_Values<LCD::RAM_COM7, 14, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S13 = LCD_RAM_COM7_S13_Values<LCD::RAM_COM7, 13, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S12 = LCD_RAM_COM7_S12_Values<LCD::RAM_COM7, 12, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S11 = LCD_RAM_COM7_S11_Values<LCD::RAM_COM7, 11, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S10 = LCD_RAM_COM7_S10_Values<LCD::RAM_COM7, 10, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S09 = LCD_RAM_COM7_S09_Values<LCD::RAM_COM7, 9, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S08 = LCD_RAM_COM7_S08_Values<LCD::RAM_COM7, 8, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S07 = LCD_RAM_COM7_S07_Values<LCD::RAM_COM7, 7, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S06 = LCD_RAM_COM7_S06_Values<LCD::RAM_COM7, 6, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S05 = LCD_RAM_COM7_S05_Values<LCD::RAM_COM7, 5, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S04 = LCD_RAM_COM7_S04_Values<LCD::RAM_COM7, 4, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S03 = LCD_RAM_COM7_S03_Values<LCD::RAM_COM7, 3, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S02 = LCD_RAM_COM7_S02_Values<LCD::RAM_COM7, 2, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S01 = LCD_RAM_COM7_S01_Values<LCD::RAM_COM7, 1, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using S00 = LCD_RAM_COM7_S00_Values<LCD::RAM_COM7, 0, 1, ReadWriteMode, LCDRAM_COM7Base> ;
    using FieldValues = LCD_RAM_COM7_S00_Values<LCD::RAM_COM7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RAM_COM7Pack  = Register<0x4000244C, 32, ReadWriteMode, LCDRAM_COM7Base, T...> ;

} ;

#endif //#if !defined(LCDREGISTERS_HPP)
