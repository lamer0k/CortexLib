/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : External interrupt/event controller. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(EXTIREGISTERS_HPP)
#define EXTIREGISTERS_HPP

#include "extifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EXTI
{
  struct EXTIIMRBase {} ;

  struct IMR : public RegisterBase<0x40013C00, 32, ReadWriteMode>
  {
    using MR0 = EXTI_IMR_MR_Values<EXTI::IMR, 0, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR1 = EXTI_IMR_MR_Values<EXTI::IMR, 1, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR2 = EXTI_IMR_MR_Values<EXTI::IMR, 2, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR3 = EXTI_IMR_MR_Values<EXTI::IMR, 3, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR4 = EXTI_IMR_MR_Values<EXTI::IMR, 4, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR5 = EXTI_IMR_MR_Values<EXTI::IMR, 5, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR6 = EXTI_IMR_MR_Values<EXTI::IMR, 6, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR7 = EXTI_IMR_MR_Values<EXTI::IMR, 7, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR8 = EXTI_IMR_MR_Values<EXTI::IMR, 8, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR9 = EXTI_IMR_MR_Values<EXTI::IMR, 9, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR10 = EXTI_IMR_MR_Values<EXTI::IMR, 10, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR11 = EXTI_IMR_MR_Values<EXTI::IMR, 11, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR12 = EXTI_IMR_MR_Values<EXTI::IMR, 12, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR13 = EXTI_IMR_MR_Values<EXTI::IMR, 13, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR14 = EXTI_IMR_MR_Values<EXTI::IMR, 14, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR15 = EXTI_IMR_MR_Values<EXTI::IMR, 15, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR16 = EXTI_IMR_MR_Values<EXTI::IMR, 16, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR17 = EXTI_IMR_MR_Values<EXTI::IMR, 17, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR18 = EXTI_IMR_MR_Values<EXTI::IMR, 18, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR19 = EXTI_IMR_MR_Values<EXTI::IMR, 19, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR20 = EXTI_IMR_MR_Values<EXTI::IMR, 20, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR21 = EXTI_IMR_MR_Values<EXTI::IMR, 21, 1, ReadWriteMode, EXTIIMRBase> ;
    using MR22 = EXTI_IMR_MR_Values<EXTI::IMR, 22, 1, ReadWriteMode, EXTIIMRBase> ;
  } ;

  template<typename... T> 
  using IMRPack  = Register<0x40013C00, 32, ReadWriteMode, EXTIIMRBase, T...> ;

  struct EXTIEMRBase {} ;

  struct EMR : public RegisterBase<0x40013C04, 32, ReadWriteMode>
  {
    using MR0 = EXTI_EMR_MR_Values<EXTI::EMR, 0, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR1 = EXTI_EMR_MR_Values<EXTI::EMR, 1, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR2 = EXTI_EMR_MR_Values<EXTI::EMR, 2, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR3 = EXTI_EMR_MR_Values<EXTI::EMR, 3, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR4 = EXTI_EMR_MR_Values<EXTI::EMR, 4, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR5 = EXTI_EMR_MR_Values<EXTI::EMR, 5, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR6 = EXTI_EMR_MR_Values<EXTI::EMR, 6, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR7 = EXTI_EMR_MR_Values<EXTI::EMR, 7, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR8 = EXTI_EMR_MR_Values<EXTI::EMR, 8, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR9 = EXTI_EMR_MR_Values<EXTI::EMR, 9, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR10 = EXTI_EMR_MR_Values<EXTI::EMR, 10, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR11 = EXTI_EMR_MR_Values<EXTI::EMR, 11, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR12 = EXTI_EMR_MR_Values<EXTI::EMR, 12, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR13 = EXTI_EMR_MR_Values<EXTI::EMR, 13, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR14 = EXTI_EMR_MR_Values<EXTI::EMR, 14, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR15 = EXTI_EMR_MR_Values<EXTI::EMR, 15, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR16 = EXTI_EMR_MR_Values<EXTI::EMR, 16, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR17 = EXTI_EMR_MR_Values<EXTI::EMR, 17, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR18 = EXTI_EMR_MR_Values<EXTI::EMR, 18, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR19 = EXTI_EMR_MR_Values<EXTI::EMR, 19, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR20 = EXTI_EMR_MR_Values<EXTI::EMR, 20, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR21 = EXTI_EMR_MR_Values<EXTI::EMR, 21, 1, ReadWriteMode, EXTIEMRBase> ;
    using MR22 = EXTI_EMR_MR_Values<EXTI::EMR, 22, 1, ReadWriteMode, EXTIEMRBase> ;
  } ;

  template<typename... T> 
  using EMRPack  = Register<0x40013C04, 32, ReadWriteMode, EXTIEMRBase, T...> ;

  struct EXTIRTSRBase {} ;

  struct RTSR : public RegisterBase<0x40013C08, 32, ReadWriteMode>
  {
    using TR0 = EXTI_RTSR_TR_Values<EXTI::RTSR, 0, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR1 = EXTI_RTSR_TR_Values<EXTI::RTSR, 1, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR2 = EXTI_RTSR_TR_Values<EXTI::RTSR, 2, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR3 = EXTI_RTSR_TR_Values<EXTI::RTSR, 3, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR4 = EXTI_RTSR_TR_Values<EXTI::RTSR, 4, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR5 = EXTI_RTSR_TR_Values<EXTI::RTSR, 5, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR6 = EXTI_RTSR_TR_Values<EXTI::RTSR, 6, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR7 = EXTI_RTSR_TR_Values<EXTI::RTSR, 7, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR8 = EXTI_RTSR_TR_Values<EXTI::RTSR, 8, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR9 = EXTI_RTSR_TR_Values<EXTI::RTSR, 9, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR10 = EXTI_RTSR_TR_Values<EXTI::RTSR, 10, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR11 = EXTI_RTSR_TR_Values<EXTI::RTSR, 11, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR12 = EXTI_RTSR_TR_Values<EXTI::RTSR, 12, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR13 = EXTI_RTSR_TR_Values<EXTI::RTSR, 13, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR14 = EXTI_RTSR_TR_Values<EXTI::RTSR, 14, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR15 = EXTI_RTSR_TR_Values<EXTI::RTSR, 15, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR16 = EXTI_RTSR_TR_Values<EXTI::RTSR, 16, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR17 = EXTI_RTSR_TR_Values<EXTI::RTSR, 17, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR18 = EXTI_RTSR_TR_Values<EXTI::RTSR, 18, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR19 = EXTI_RTSR_TR_Values<EXTI::RTSR, 19, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR20 = EXTI_RTSR_TR_Values<EXTI::RTSR, 20, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR21 = EXTI_RTSR_TR_Values<EXTI::RTSR, 21, 1, ReadWriteMode, EXTIRTSRBase> ;
    using TR22 = EXTI_RTSR_TR_Values<EXTI::RTSR, 22, 1, ReadWriteMode, EXTIRTSRBase> ;
  } ;

  template<typename... T> 
  using RTSRPack  = Register<0x40013C08, 32, ReadWriteMode, EXTIRTSRBase, T...> ;

  struct EXTIFTSRBase {} ;

  struct FTSR : public RegisterBase<0x40013C0C, 32, ReadWriteMode>
  {
    using TR0 = EXTI_FTSR_TR_Values<EXTI::FTSR, 0, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR1 = EXTI_FTSR_TR_Values<EXTI::FTSR, 1, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR2 = EXTI_FTSR_TR_Values<EXTI::FTSR, 2, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR3 = EXTI_FTSR_TR_Values<EXTI::FTSR, 3, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR4 = EXTI_FTSR_TR_Values<EXTI::FTSR, 4, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR5 = EXTI_FTSR_TR_Values<EXTI::FTSR, 5, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR6 = EXTI_FTSR_TR_Values<EXTI::FTSR, 6, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR7 = EXTI_FTSR_TR_Values<EXTI::FTSR, 7, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR8 = EXTI_FTSR_TR_Values<EXTI::FTSR, 8, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR9 = EXTI_FTSR_TR_Values<EXTI::FTSR, 9, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR10 = EXTI_FTSR_TR_Values<EXTI::FTSR, 10, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR11 = EXTI_FTSR_TR_Values<EXTI::FTSR, 11, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR12 = EXTI_FTSR_TR_Values<EXTI::FTSR, 12, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR13 = EXTI_FTSR_TR_Values<EXTI::FTSR, 13, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR14 = EXTI_FTSR_TR_Values<EXTI::FTSR, 14, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR15 = EXTI_FTSR_TR_Values<EXTI::FTSR, 15, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR16 = EXTI_FTSR_TR_Values<EXTI::FTSR, 16, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR17 = EXTI_FTSR_TR_Values<EXTI::FTSR, 17, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR18 = EXTI_FTSR_TR_Values<EXTI::FTSR, 18, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR19 = EXTI_FTSR_TR_Values<EXTI::FTSR, 19, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR20 = EXTI_FTSR_TR_Values<EXTI::FTSR, 20, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR21 = EXTI_FTSR_TR_Values<EXTI::FTSR, 21, 1, ReadWriteMode, EXTIFTSRBase> ;
    using TR22 = EXTI_FTSR_TR_Values<EXTI::FTSR, 22, 1, ReadWriteMode, EXTIFTSRBase> ;
  } ;

  template<typename... T> 
  using FTSRPack  = Register<0x40013C0C, 32, ReadWriteMode, EXTIFTSRBase, T...> ;

  struct EXTISWIERBase {} ;

  struct SWIER : public RegisterBase<0x40013C10, 32, ReadWriteMode>
  {
    using SWIER0 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 0, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER1 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 1, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER2 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 2, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER3 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 3, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER4 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 4, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER5 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 5, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER6 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 6, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER7 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 7, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER8 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 8, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER9 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 9, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER10 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 10, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER11 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 11, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER12 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 12, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER13 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 13, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER14 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 14, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER15 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 15, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER16 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 16, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER17 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 17, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER18 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 18, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER19 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 19, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER20 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 20, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER21 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 21, 1, ReadWriteMode, EXTISWIERBase> ;
    using SWIER22 = EXTI_SWIER_SWIER_Values<EXTI::SWIER, 22, 1, ReadWriteMode, EXTISWIERBase> ;
  } ;

  template<typename... T> 
  using SWIERPack  = Register<0x40013C10, 32, ReadWriteMode, EXTISWIERBase, T...> ;

  struct EXTIPRBase {} ;

  struct PR : public RegisterBase<0x40013C14, 32, ReadWriteMode>
  {
    using PR0 = EXTI_PR_PR_Values<EXTI::PR, 0, 1, ReadWriteMode, EXTIPRBase> ;
    using PR1 = EXTI_PR_PR_Values<EXTI::PR, 1, 1, ReadWriteMode, EXTIPRBase> ;
    using PR2 = EXTI_PR_PR_Values<EXTI::PR, 2, 1, ReadWriteMode, EXTIPRBase> ;
    using PR3 = EXTI_PR_PR_Values<EXTI::PR, 3, 1, ReadWriteMode, EXTIPRBase> ;
    using PR4 = EXTI_PR_PR_Values<EXTI::PR, 4, 1, ReadWriteMode, EXTIPRBase> ;
    using PR5 = EXTI_PR_PR_Values<EXTI::PR, 5, 1, ReadWriteMode, EXTIPRBase> ;
    using PR6 = EXTI_PR_PR_Values<EXTI::PR, 6, 1, ReadWriteMode, EXTIPRBase> ;
    using PR7 = EXTI_PR_PR_Values<EXTI::PR, 7, 1, ReadWriteMode, EXTIPRBase> ;
    using PR8 = EXTI_PR_PR_Values<EXTI::PR, 8, 1, ReadWriteMode, EXTIPRBase> ;
    using PR9 = EXTI_PR_PR_Values<EXTI::PR, 9, 1, ReadWriteMode, EXTIPRBase> ;
    using PR10 = EXTI_PR_PR_Values<EXTI::PR, 10, 1, ReadWriteMode, EXTIPRBase> ;
    using PR11 = EXTI_PR_PR_Values<EXTI::PR, 11, 1, ReadWriteMode, EXTIPRBase> ;
    using PR12 = EXTI_PR_PR_Values<EXTI::PR, 12, 1, ReadWriteMode, EXTIPRBase> ;
    using PR13 = EXTI_PR_PR_Values<EXTI::PR, 13, 1, ReadWriteMode, EXTIPRBase> ;
    using PR14 = EXTI_PR_PR_Values<EXTI::PR, 14, 1, ReadWriteMode, EXTIPRBase> ;
    using PR15 = EXTI_PR_PR_Values<EXTI::PR, 15, 1, ReadWriteMode, EXTIPRBase> ;
    using PR16 = EXTI_PR_PR_Values<EXTI::PR, 16, 1, ReadWriteMode, EXTIPRBase> ;
    using PR17 = EXTI_PR_PR_Values<EXTI::PR, 17, 1, ReadWriteMode, EXTIPRBase> ;
    using PR18 = EXTI_PR_PR_Values<EXTI::PR, 18, 1, ReadWriteMode, EXTIPRBase> ;
    using PR19 = EXTI_PR_PR_Values<EXTI::PR, 19, 1, ReadWriteMode, EXTIPRBase> ;
    using PR20 = EXTI_PR_PR_Values<EXTI::PR, 20, 1, ReadWriteMode, EXTIPRBase> ;
    using PR21 = EXTI_PR_PR_Values<EXTI::PR, 21, 1, ReadWriteMode, EXTIPRBase> ;
    using PR22 = EXTI_PR_PR_Values<EXTI::PR, 22, 1, ReadWriteMode, EXTIPRBase> ;
  } ;

  template<typename... T> 
  using PRPack  = Register<0x40013C14, 32, ReadWriteMode, EXTIPRBase, T...> ;

} ;

#endif //#if !defined(EXTIREGISTERS_HPP)
