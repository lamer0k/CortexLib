/*******************************************************************************
* Filename      : syscfgregisters.hpp
*
* Details       : System configuration controller. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(SYSCFGREGISTERS_HPP)
#define SYSCFGREGISTERS_HPP

#include "syscfgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SYSCFG
{
  struct SYSCFGMEMRMPBase {} ;

  struct MEMRMP : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using FB_MODE = SYSCFG_MEMRMP_FB_MODE_Values<SYSCFG::MEMRMP, 8, 1, ReadWriteMode, SYSCFGMEMRMPBase> ;
    using QFS = SYSCFG_MEMRMP_QFS_Values<SYSCFG::MEMRMP, 3, 1, ReadWriteMode, SYSCFGMEMRMPBase> ;
    using MEM_MODE = SYSCFG_MEMRMP_MEM_MODE_Values<SYSCFG::MEMRMP, 0, 3, ReadWriteMode, SYSCFGMEMRMPBase> ;
    using FieldValues = SYSCFG_MEMRMP_MEM_MODE_Values<SYSCFG::MEMRMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MEMRMPPack  = Register<0x40010000, 32, ReadWriteMode, SYSCFGMEMRMPBase, T...> ;

  struct SYSCFGCFGR1Base {} ;

  struct CFGR1 : public RegisterBase<0x40010004, 32, ReadWriteMode>
  {
    using FPU_IE = SYSCFG_CFGR1_FPU_IE_Values<SYSCFG::CFGR1, 26, 6, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C3_FMP = SYSCFG_CFGR1_I2C3_FMP_Values<SYSCFG::CFGR1, 22, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C2_FMP = SYSCFG_CFGR1_I2C2_FMP_Values<SYSCFG::CFGR1, 21, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C1_FMP = SYSCFG_CFGR1_I2C1_FMP_Values<SYSCFG::CFGR1, 20, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB9_FMP = SYSCFG_CFGR1_I2C_PB9_FMP_Values<SYSCFG::CFGR1, 19, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB8_FMP = SYSCFG_CFGR1_I2C_PB8_FMP_Values<SYSCFG::CFGR1, 18, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB7_FMP = SYSCFG_CFGR1_I2C_PB7_FMP_Values<SYSCFG::CFGR1, 17, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB6_FMP = SYSCFG_CFGR1_I2C_PB6_FMP_Values<SYSCFG::CFGR1, 16, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using BOOSTEN = SYSCFG_CFGR1_BOOSTEN_Values<SYSCFG::CFGR1, 8, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using FWDIS = SYSCFG_CFGR1_FWDIS_Values<SYSCFG::CFGR1, 0, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using FieldValues = SYSCFG_CFGR1_FWDIS_Values<SYSCFG::CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR1Pack  = Register<0x40010004, 32, ReadWriteMode, SYSCFGCFGR1Base, T...> ;

  struct SYSCFGEXTICR1Base {} ;

  struct EXTICR1 : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using EXTI3 = SYSCFG_EXTICR1_EXTI3_Values<SYSCFG::EXTICR1, 12, 3, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI2 = SYSCFG_EXTICR1_EXTI2_Values<SYSCFG::EXTICR1, 8, 3, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI1 = SYSCFG_EXTICR1_EXTI1_Values<SYSCFG::EXTICR1, 4, 3, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI0 = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 3, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using FieldValues = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR1Pack  = Register<0x40010008, 32, ReadWriteMode, SYSCFGEXTICR1Base, T...> ;

  struct SYSCFGEXTICR2Base {} ;

  struct EXTICR2 : public RegisterBase<0x4001000C, 32, ReadWriteMode>
  {
    using EXTI7 = SYSCFG_EXTICR2_EXTI7_Values<SYSCFG::EXTICR2, 12, 3, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI6 = SYSCFG_EXTICR2_EXTI6_Values<SYSCFG::EXTICR2, 8, 3, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI5 = SYSCFG_EXTICR2_EXTI5_Values<SYSCFG::EXTICR2, 4, 3, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI4 = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 3, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using FieldValues = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR2Pack  = Register<0x4001000C, 32, ReadWriteMode, SYSCFGEXTICR2Base, T...> ;

  struct SYSCFGEXTICR3Base {} ;

  struct EXTICR3 : public RegisterBase<0x40010010, 32, ReadWriteMode>
  {
    using EXTI11 = SYSCFG_EXTICR3_EXTI11_Values<SYSCFG::EXTICR3, 12, 3, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI10 = SYSCFG_EXTICR3_EXTI10_Values<SYSCFG::EXTICR3, 8, 3, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI9 = SYSCFG_EXTICR3_EXTI9_Values<SYSCFG::EXTICR3, 4, 3, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI8 = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 3, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using FieldValues = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR3Pack  = Register<0x40010010, 32, ReadWriteMode, SYSCFGEXTICR3Base, T...> ;

  struct SYSCFGEXTICR4Base {} ;

  struct EXTICR4 : public RegisterBase<0x40010014, 32, ReadWriteMode>
  {
    using EXTI15 = SYSCFG_EXTICR4_EXTI15_Values<SYSCFG::EXTICR4, 12, 3, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI14 = SYSCFG_EXTICR4_EXTI14_Values<SYSCFG::EXTICR4, 8, 3, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI13 = SYSCFG_EXTICR4_EXTI13_Values<SYSCFG::EXTICR4, 4, 3, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI12 = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 3, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using FieldValues = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR4Pack  = Register<0x40010014, 32, ReadWriteMode, SYSCFGEXTICR4Base, T...> ;

  struct SYSCFGSCSRBase {} ;

  struct SCSR : public RegisterBase<0x40010018, 32, ReadWriteMode>
  {
    using SRAM2BSY = SYSCFG_SCSR_SRAM2BSY_Values<SYSCFG::SCSR, 1, 1, ReadMode, SYSCFGSCSRBase> ;
    using SRAM2ER = SYSCFG_SCSR_SRAM2ER_Values<SYSCFG::SCSR, 0, 1, ReadWriteMode, SYSCFGSCSRBase> ;
    using FieldValues = SYSCFG_SCSR_SRAM2ER_Values<SYSCFG::SCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCSRPack  = Register<0x40010018, 32, ReadWriteMode, SYSCFGSCSRBase, T...> ;

  struct SYSCFGCFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x4001001C, 32, ReadWriteMode>
  {
    using SPF = SYSCFG_CFGR2_SPF_Values<SYSCFG::CFGR2, 8, 1, ReadWriteMode, SYSCFGCFGR2Base> ;
    using ECCL = SYSCFG_CFGR2_ECCL_Values<SYSCFG::CFGR2, 3, 1, WriteMode, SYSCFGCFGR2Base> ;
    using PVDL = SYSCFG_CFGR2_PVDL_Values<SYSCFG::CFGR2, 2, 1, WriteMode, SYSCFGCFGR2Base> ;
    using SPL = SYSCFG_CFGR2_SPL_Values<SYSCFG::CFGR2, 1, 1, WriteMode, SYSCFGCFGR2Base> ;
    using CLL = SYSCFG_CFGR2_CLL_Values<SYSCFG::CFGR2, 0, 1, WriteMode, SYSCFGCFGR2Base> ;
    using FieldValues = SYSCFG_CFGR2_CLL_Values<SYSCFG::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x4001001C, 32, ReadWriteMode, SYSCFGCFGR2Base, T...> ;

  struct SYSCFGSWPRBase {} ;

  struct SWPR : public RegisterBase<0x40010020, 32, WriteMode>
  {
    using P31WP = SYSCFG_SWPR_P31WP_Values<SYSCFG::SWPR, 31, 1, WriteMode, SYSCFGSWPRBase> ;
    using P30WP = SYSCFG_SWPR_P30WP_Values<SYSCFG::SWPR, 30, 1, WriteMode, SYSCFGSWPRBase> ;
    using P29WP = SYSCFG_SWPR_P29WP_Values<SYSCFG::SWPR, 29, 1, WriteMode, SYSCFGSWPRBase> ;
    using P28WP = SYSCFG_SWPR_P28WP_Values<SYSCFG::SWPR, 28, 1, WriteMode, SYSCFGSWPRBase> ;
    using P27WP = SYSCFG_SWPR_P27WP_Values<SYSCFG::SWPR, 27, 1, WriteMode, SYSCFGSWPRBase> ;
    using P26WP = SYSCFG_SWPR_P26WP_Values<SYSCFG::SWPR, 26, 1, WriteMode, SYSCFGSWPRBase> ;
    using P25WP = SYSCFG_SWPR_P25WP_Values<SYSCFG::SWPR, 25, 1, WriteMode, SYSCFGSWPRBase> ;
    using P24WP = SYSCFG_SWPR_P24WP_Values<SYSCFG::SWPR, 24, 1, WriteMode, SYSCFGSWPRBase> ;
    using P23WP = SYSCFG_SWPR_P23WP_Values<SYSCFG::SWPR, 23, 1, WriteMode, SYSCFGSWPRBase> ;
    using P22WP = SYSCFG_SWPR_P22WP_Values<SYSCFG::SWPR, 22, 1, WriteMode, SYSCFGSWPRBase> ;
    using P21WP = SYSCFG_SWPR_P21WP_Values<SYSCFG::SWPR, 21, 1, WriteMode, SYSCFGSWPRBase> ;
    using P20WP = SYSCFG_SWPR_P20WP_Values<SYSCFG::SWPR, 20, 1, WriteMode, SYSCFGSWPRBase> ;
    using P19WP = SYSCFG_SWPR_P19WP_Values<SYSCFG::SWPR, 19, 1, WriteMode, SYSCFGSWPRBase> ;
    using P18WP = SYSCFG_SWPR_P18WP_Values<SYSCFG::SWPR, 18, 1, WriteMode, SYSCFGSWPRBase> ;
    using P17WP = SYSCFG_SWPR_P17WP_Values<SYSCFG::SWPR, 17, 1, WriteMode, SYSCFGSWPRBase> ;
    using P16WP = SYSCFG_SWPR_P16WP_Values<SYSCFG::SWPR, 16, 1, WriteMode, SYSCFGSWPRBase> ;
    using P15WP = SYSCFG_SWPR_P15WP_Values<SYSCFG::SWPR, 15, 1, WriteMode, SYSCFGSWPRBase> ;
    using P14WP = SYSCFG_SWPR_P14WP_Values<SYSCFG::SWPR, 14, 1, WriteMode, SYSCFGSWPRBase> ;
    using P13WP = SYSCFG_SWPR_P13WP_Values<SYSCFG::SWPR, 13, 1, WriteMode, SYSCFGSWPRBase> ;
    using P12WP = SYSCFG_SWPR_P12WP_Values<SYSCFG::SWPR, 12, 1, WriteMode, SYSCFGSWPRBase> ;
    using P11WP = SYSCFG_SWPR_P11WP_Values<SYSCFG::SWPR, 11, 1, WriteMode, SYSCFGSWPRBase> ;
    using P10WP = SYSCFG_SWPR_P10WP_Values<SYSCFG::SWPR, 10, 1, WriteMode, SYSCFGSWPRBase> ;
    using P9WP = SYSCFG_SWPR_P9WP_Values<SYSCFG::SWPR, 9, 1, WriteMode, SYSCFGSWPRBase> ;
    using P8WP = SYSCFG_SWPR_P8WP_Values<SYSCFG::SWPR, 8, 1, WriteMode, SYSCFGSWPRBase> ;
    using P7WP = SYSCFG_SWPR_P7WP_Values<SYSCFG::SWPR, 7, 1, WriteMode, SYSCFGSWPRBase> ;
    using P6WP = SYSCFG_SWPR_P6WP_Values<SYSCFG::SWPR, 6, 1, WriteMode, SYSCFGSWPRBase> ;
    using P5WP = SYSCFG_SWPR_P5WP_Values<SYSCFG::SWPR, 5, 1, WriteMode, SYSCFGSWPRBase> ;
    using P4WP = SYSCFG_SWPR_P4WP_Values<SYSCFG::SWPR, 4, 1, WriteMode, SYSCFGSWPRBase> ;
    using P3WP = SYSCFG_SWPR_P3WP_Values<SYSCFG::SWPR, 3, 1, WriteMode, SYSCFGSWPRBase> ;
    using P2WP = SYSCFG_SWPR_P2WP_Values<SYSCFG::SWPR, 2, 1, WriteMode, SYSCFGSWPRBase> ;
    using P1WP = SYSCFG_SWPR_P1WP_Values<SYSCFG::SWPR, 1, 1, WriteMode, SYSCFGSWPRBase> ;
    using P0WP = SYSCFG_SWPR_P0WP_Values<SYSCFG::SWPR, 0, 1, WriteMode, SYSCFGSWPRBase> ;
    using FieldValues = SYSCFG_SWPR_P0WP_Values<SYSCFG::SWPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWPRPack  = Register<0x40010020, 32, WriteMode, SYSCFGSWPRBase, T...> ;

  struct SYSCFGSKRBase {} ;

  struct SKR : public RegisterBase<0x40010024, 32, WriteMode>
  {
    using KEY = SYSCFG_SKR_KEY_Values<SYSCFG::SKR, 0, 8, WriteMode, SYSCFGSKRBase> ;
    using FieldValues = SYSCFG_SKR_KEY_Values<SYSCFG::SKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SKRPack  = Register<0x40010024, 32, WriteMode, SYSCFGSKRBase, T...> ;

} ;

#endif //#if !defined(SYSCFGREGISTERS_HPP)
