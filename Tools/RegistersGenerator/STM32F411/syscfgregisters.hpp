/*******************************************************************************
* Filename      : syscfgregisters.hpp
*
* Details       : System configuration controller. This header file is
*                 auto-generated for STM32F411 device.
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
  struct SYSCFGMEMRMBase {} ;

  struct MEMRM : public RegisterBase<0x40013800, 32, ReadWriteMode>
  {
    using MEM_MODE = SYSCFG_MEMRM_MEM_MODE_Values<SYSCFG::MEMRM, 0, 2, ReadWriteMode, SYSCFGMEMRMBase> ;
    using FieldValues = SYSCFG_MEMRM_MEM_MODE_Values<SYSCFG::MEMRM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MEMRMPack  = Register<0x40013800, 32, ReadWriteMode, SYSCFGMEMRMBase, T...> ;

  struct SYSCFGPMCBase {} ;

  struct PMC : public RegisterBase<0x40013804, 32, ReadWriteMode>
  {
    using ADC1DC2 = SYSCFG_PMC_ADC1DC2_Values<SYSCFG::PMC, 16, 1, ReadWriteMode, SYSCFGPMCBase> ;
    using FieldValues = SYSCFG_PMC_ADC1DC2_Values<SYSCFG::PMC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMCPack  = Register<0x40013804, 32, ReadWriteMode, SYSCFGPMCBase, T...> ;

  struct SYSCFGEXTICR1Base {} ;

  struct EXTICR1 : public RegisterBase<0x40013808, 32, ReadWriteMode>
  {
    using EXTI3 = SYSCFG_EXTICR1_EXTI3_Values<SYSCFG::EXTICR1, 12, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI2 = SYSCFG_EXTICR1_EXTI2_Values<SYSCFG::EXTICR1, 8, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI1 = SYSCFG_EXTICR1_EXTI1_Values<SYSCFG::EXTICR1, 4, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI0 = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using FieldValues = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR1Pack  = Register<0x40013808, 32, ReadWriteMode, SYSCFGEXTICR1Base, T...> ;

  struct SYSCFGEXTICR2Base {} ;

  struct EXTICR2 : public RegisterBase<0x4001380C, 32, ReadWriteMode>
  {
    using EXTI7 = SYSCFG_EXTICR2_EXTI7_Values<SYSCFG::EXTICR2, 12, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI6 = SYSCFG_EXTICR2_EXTI6_Values<SYSCFG::EXTICR2, 8, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI5 = SYSCFG_EXTICR2_EXTI5_Values<SYSCFG::EXTICR2, 4, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI4 = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using FieldValues = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR2Pack  = Register<0x4001380C, 32, ReadWriteMode, SYSCFGEXTICR2Base, T...> ;

  struct SYSCFGEXTICR3Base {} ;

  struct EXTICR3 : public RegisterBase<0x40013810, 32, ReadWriteMode>
  {
    using EXTI11 = SYSCFG_EXTICR3_EXTI11_Values<SYSCFG::EXTICR3, 12, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI10 = SYSCFG_EXTICR3_EXTI10_Values<SYSCFG::EXTICR3, 8, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI9 = SYSCFG_EXTICR3_EXTI9_Values<SYSCFG::EXTICR3, 4, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI8 = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using FieldValues = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR3Pack  = Register<0x40013810, 32, ReadWriteMode, SYSCFGEXTICR3Base, T...> ;

  struct SYSCFGEXTICR4Base {} ;

  struct EXTICR4 : public RegisterBase<0x40013814, 32, ReadWriteMode>
  {
    using EXTI15 = SYSCFG_EXTICR4_EXTI15_Values<SYSCFG::EXTICR4, 12, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI14 = SYSCFG_EXTICR4_EXTI14_Values<SYSCFG::EXTICR4, 8, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI13 = SYSCFG_EXTICR4_EXTI13_Values<SYSCFG::EXTICR4, 4, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI12 = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using FieldValues = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR4Pack  = Register<0x40013814, 32, ReadWriteMode, SYSCFGEXTICR4Base, T...> ;

  struct SYSCFGCMPCRBase {} ;

  struct CMPCR : public RegisterBase<0x40013820, 32, ReadMode>
  {
    using READY = SYSCFG_CMPCR_READY_Values<SYSCFG::CMPCR, 8, 1, ReadMode, SYSCFGCMPCRBase> ;
    using CMP_PD = SYSCFG_CMPCR_CMP_PD_Values<SYSCFG::CMPCR, 0, 1, ReadMode, SYSCFGCMPCRBase> ;
    using FieldValues = SYSCFG_CMPCR_CMP_PD_Values<SYSCFG::CMPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMPCRPack  = Register<0x40013820, 32, ReadMode, SYSCFGCMPCRBase, T...> ;

} ;

#endif //#if !defined(SYSCFGREGISTERS_HPP)
