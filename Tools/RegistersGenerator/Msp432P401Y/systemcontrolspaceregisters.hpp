/*******************************************************************************
* Filename      : systemcontrolspaceregisters.hpp
*
* Details       : System Control Space for ARM core: SCnSCB, SCB, SysTick, NVIC,
*                 CoreDebug, MPU, FPU. This header file is auto-generated for
*                 MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(SYSTEMCONTROLSPACEREGISTERS_HPP)
#define SYSTEMCONTROLSPACEREGISTERS_HPP

#include "systemcontrolspacefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SystemControlSpace
{
  struct SystemControlSpaceFPCCRBase {} ;

  struct FPCCR : public RegisterBase<0xE000EF34, 32, ReadWriteMode>
  {
    using ASPEN = SystemControlSpace_FPCCR_ASPEN_Values<SystemControlSpace::FPCCR, 31, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using LSPEN = SystemControlSpace_FPCCR_LSPEN_Values<SystemControlSpace::FPCCR, 30, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using MONRDY = SystemControlSpace_FPCCR_MONRDY_Values<SystemControlSpace::FPCCR, 8, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using BFRDY = SystemControlSpace_FPCCR_BFRDY_Values<SystemControlSpace::FPCCR, 6, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using MMRDY = SystemControlSpace_FPCCR_MMRDY_Values<SystemControlSpace::FPCCR, 5, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using HFRDY = SystemControlSpace_FPCCR_HFRDY_Values<SystemControlSpace::FPCCR, 4, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using THREAD = SystemControlSpace_FPCCR_THREAD_Values<SystemControlSpace::FPCCR, 3, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using USER = SystemControlSpace_FPCCR_USER_Values<SystemControlSpace::FPCCR, 1, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using LSPACT = SystemControlSpace_FPCCR_LSPACT_Values<SystemControlSpace::FPCCR, 0, 1, ReadWriteMode, SystemControlSpaceFPCCRBase> ;
    using FieldValues = SystemControlSpace_FPCCR_LSPACT_Values<SystemControlSpace::FPCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FPCCRPack  = Register<0xE000EF34, 32, ReadWriteMode, SystemControlSpaceFPCCRBase, T...> ;

  struct SystemControlSpaceFPCARBase {} ;

  struct FPCAR : public RegisterBase<0xE000EF38, 32, ReadWriteMode>
  {
    using ADDRESS = SystemControlSpace_FPCAR_ADDRESS_Values<SystemControlSpace::FPCAR, 2, 29, ReadWriteMode, SystemControlSpaceFPCARBase> ;
    using FieldValues = SystemControlSpace_FPCAR_ADDRESS_Values<SystemControlSpace::FPCAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FPCARPack  = Register<0xE000EF38, 32, ReadWriteMode, SystemControlSpaceFPCARBase, T...> ;

  struct SystemControlSpaceFPDSCRBase {} ;

  struct FPDSCR : public RegisterBase<0xE000EF3C, 32, ReadWriteMode>
  {
    using AHP = SystemControlSpace_FPDSCR_AHP_Values<SystemControlSpace::FPDSCR, 26, 1, ReadWriteMode, SystemControlSpaceFPDSCRBase> ;
    using DN = SystemControlSpace_FPDSCR_DN_Values<SystemControlSpace::FPDSCR, 25, 1, ReadWriteMode, SystemControlSpaceFPDSCRBase> ;
    using FZ = SystemControlSpace_FPDSCR_FZ_Values<SystemControlSpace::FPDSCR, 24, 1, ReadWriteMode, SystemControlSpaceFPDSCRBase> ;
    using RMODE = SystemControlSpace_FPDSCR_RMODE_Values<SystemControlSpace::FPDSCR, 22, 2, ReadWriteMode, SystemControlSpaceFPDSCRBase> ;
    using FieldValues = SystemControlSpace_FPDSCR_RMODE_Values<SystemControlSpace::FPDSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FPDSCRPack  = Register<0xE000EF3C, 32, ReadWriteMode, SystemControlSpaceFPDSCRBase, T...> ;

  struct SystemControlSpaceMVFR0Base {} ;

  struct MVFR0 : public RegisterBase<0xE000EF40, 32, ReadMode>
  {
    using FP_ROUNDING_MODES = SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values<SystemControlSpace::MVFR0, 28, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using SHORT_VECTORS = SystemControlSpace_MVFR0_SHORT_VECTORS_Values<SystemControlSpace::MVFR0, 24, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using SQUARE_ROOT = SystemControlSpace_MVFR0_SQUARE_ROOT_Values<SystemControlSpace::MVFR0, 20, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using DIVIDE = SystemControlSpace_MVFR0_DIVIDE_Values<SystemControlSpace::MVFR0, 16, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using FP_EXCEPTION_TRAPPING = SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values<SystemControlSpace::MVFR0, 12, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using DOUBLE_PRECISION = SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values<SystemControlSpace::MVFR0, 8, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using SINGLE_PRECISION = SystemControlSpace_MVFR0_SINGLE_PRECISION_Values<SystemControlSpace::MVFR0, 4, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using A_SIMD_REGISTERS = SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values<SystemControlSpace::MVFR0, 0, 4, ReadMode, SystemControlSpaceMVFR0Base> ;
    using FieldValues = SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values<SystemControlSpace::MVFR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MVFR0Pack  = Register<0xE000EF40, 32, ReadMode, SystemControlSpaceMVFR0Base, T...> ;

  struct SystemControlSpaceMVFR1Base {} ;

  struct MVFR1 : public RegisterBase<0xE000EF44, 32, ReadMode>
  {
    using FP_FUSED_MAC = SystemControlSpace_MVFR1_FP_FUSED_MAC_Values<SystemControlSpace::MVFR1, 28, 4, ReadMode, SystemControlSpaceMVFR1Base> ;
    using FP_HPFP = SystemControlSpace_MVFR1_FP_HPFP_Values<SystemControlSpace::MVFR1, 24, 4, ReadMode, SystemControlSpaceMVFR1Base> ;
    using D_NAN_MODE = SystemControlSpace_MVFR1_D_NAN_MODE_Values<SystemControlSpace::MVFR1, 4, 4, ReadMode, SystemControlSpaceMVFR1Base> ;
    using FTZ_MODE = SystemControlSpace_MVFR1_FTZ_MODE_Values<SystemControlSpace::MVFR1, 0, 4, ReadMode, SystemControlSpaceMVFR1Base> ;
    using FieldValues = SystemControlSpace_MVFR1_FTZ_MODE_Values<SystemControlSpace::MVFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MVFR1Pack  = Register<0xE000EF44, 32, ReadMode, SystemControlSpaceMVFR1Base, T...> ;

  struct SystemControlSpaceMPU_TYPEBase {} ;

  struct MPU_TYPE : public RegisterBase<0xE000ED90, 32, ReadMode>
  {
    using SEPARATE = SystemControlSpace_MPU_TYPE_SEPARATE_Values<SystemControlSpace::MPU_TYPE, 0, 1, ReadMode, SystemControlSpaceMPU_TYPEBase> ;
    using DREGION = SystemControlSpace_MPU_TYPE_DREGION_Values<SystemControlSpace::MPU_TYPE, 8, 8, ReadMode, SystemControlSpaceMPU_TYPEBase> ;
    using IREGION = SystemControlSpace_MPU_TYPE_IREGION_Values<SystemControlSpace::MPU_TYPE, 16, 8, ReadMode, SystemControlSpaceMPU_TYPEBase> ;
    using FieldValues = SystemControlSpace_MPU_TYPE_IREGION_Values<SystemControlSpace::MPU_TYPE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_TYPEPack  = Register<0xE000ED90, 32, ReadMode, SystemControlSpaceMPU_TYPEBase, T...> ;

  struct SystemControlSpaceMPU_CTRLBase {} ;

  struct MPU_CTRL : public RegisterBase<0xE000ED94, 32, ReadWriteMode>
  {
    using ENABLE = SystemControlSpace_MPU_CTRL_ENABLE_Values<SystemControlSpace::MPU_CTRL, 0, 1, ReadWriteMode, SystemControlSpaceMPU_CTRLBase> ;
    using HFNMIENA = SystemControlSpace_MPU_CTRL_HFNMIENA_Values<SystemControlSpace::MPU_CTRL, 1, 1, ReadWriteMode, SystemControlSpaceMPU_CTRLBase> ;
    using PRIVDEFENA = SystemControlSpace_MPU_CTRL_PRIVDEFENA_Values<SystemControlSpace::MPU_CTRL, 2, 1, ReadWriteMode, SystemControlSpaceMPU_CTRLBase> ;
    using FieldValues = SystemControlSpace_MPU_CTRL_PRIVDEFENA_Values<SystemControlSpace::MPU_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_CTRLPack  = Register<0xE000ED94, 32, ReadWriteMode, SystemControlSpaceMPU_CTRLBase, T...> ;

  struct SystemControlSpaceMPU_RNRBase {} ;

  struct MPU_RNR : public RegisterBase<0xE000ED98, 32, ReadWriteMode>
  {
    using REGION = SystemControlSpace_MPU_RNR_REGION_Values<SystemControlSpace::MPU_RNR, 0, 8, ReadWriteMode, SystemControlSpaceMPU_RNRBase> ;
    using FieldValues = SystemControlSpace_MPU_RNR_REGION_Values<SystemControlSpace::MPU_RNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_RNRPack  = Register<0xE000ED98, 32, ReadWriteMode, SystemControlSpaceMPU_RNRBase, T...> ;

  struct SystemControlSpaceMPU_RBARBase {} ;

  struct MPU_RBAR : public RegisterBase<0xE000ED9C, 32, ReadWriteMode>
  {
    using REGION = SystemControlSpace_MPU_RBAR_REGION_Values<SystemControlSpace::MPU_RBAR, 0, 4, ReadWriteMode, SystemControlSpaceMPU_RBARBase> ;
    using VALID = SystemControlSpace_MPU_RBAR_VALID_Values<SystemControlSpace::MPU_RBAR, 4, 1, ReadWriteMode, SystemControlSpaceMPU_RBARBase> ;
    using ADDR = SystemControlSpace_MPU_RBAR_ADDR_Values<SystemControlSpace::MPU_RBAR, 5, 27, ReadWriteMode, SystemControlSpaceMPU_RBARBase> ;
    using FieldValues = SystemControlSpace_MPU_RBAR_ADDR_Values<SystemControlSpace::MPU_RBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_RBARPack  = Register<0xE000ED9C, 32, ReadWriteMode, SystemControlSpaceMPU_RBARBase, T...> ;

  struct SystemControlSpaceMPU_RASRBase {} ;

  struct MPU_RASR : public RegisterBase<0xE000EDA0, 32, ReadWriteMode>
  {
    using ENABLE = SystemControlSpace_MPU_RASR_ENABLE_Values<SystemControlSpace::MPU_RASR, 0, 1, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using SIZE = SystemControlSpace_MPU_RASR_SIZE_Values<SystemControlSpace::MPU_RASR, 1, 5, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using SRD = SystemControlSpace_MPU_RASR_SRD_Values<SystemControlSpace::MPU_RASR, 8, 8, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using B = SystemControlSpace_MPU_RASR_B_Values<SystemControlSpace::MPU_RASR, 16, 1, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using C = SystemControlSpace_MPU_RASR_C_Values<SystemControlSpace::MPU_RASR, 17, 1, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using S = SystemControlSpace_MPU_RASR_S_Values<SystemControlSpace::MPU_RASR, 18, 1, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using TEX = SystemControlSpace_MPU_RASR_TEX_Values<SystemControlSpace::MPU_RASR, 19, 3, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using AP = SystemControlSpace_MPU_RASR_AP_Values<SystemControlSpace::MPU_RASR, 24, 3, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using XN = SystemControlSpace_MPU_RASR_XN_Values<SystemControlSpace::MPU_RASR, 28, 1, ReadWriteMode, SystemControlSpaceMPU_RASRBase> ;
    using FieldValues = SystemControlSpace_MPU_RASR_XN_Values<SystemControlSpace::MPU_RASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_RASRPack  = Register<0xE000EDA0, 32, ReadWriteMode, SystemControlSpaceMPU_RASRBase, T...> ;

  struct SystemControlSpaceMPU_RBAR_A1Base {} ;

  struct MPU_RBAR_A1 : public RegisterBase<0xE000EDA4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using MPU_RBAR_A1Pack  = Register<0xE000EDA4, 32, ReadWriteMode, SystemControlSpaceMPU_RBAR_A1Base, T...> ;

  struct SystemControlSpaceMPU_RASR_A1Base {} ;

  struct MPU_RASR_A1 : public RegisterBase<0xE000EDA8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using MPU_RASR_A1Pack  = Register<0xE000EDA8, 32, ReadWriteMode, SystemControlSpaceMPU_RASR_A1Base, T...> ;

  struct SystemControlSpaceMPU_RBAR_A2Base {} ;

  struct MPU_RBAR_A2 : public RegisterBase<0xE000EDAC, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using MPU_RBAR_A2Pack  = Register<0xE000EDAC, 32, ReadWriteMode, SystemControlSpaceMPU_RBAR_A2Base, T...> ;

  struct SystemControlSpaceMPU_RASR_A2Base {} ;

  struct MPU_RASR_A2 : public RegisterBase<0xE000EDB0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using MPU_RASR_A2Pack  = Register<0xE000EDB0, 32, ReadWriteMode, SystemControlSpaceMPU_RASR_A2Base, T...> ;

  struct SystemControlSpaceMPU_RBAR_A3Base {} ;

  struct MPU_RBAR_A3 : public RegisterBase<0xE000EDB4, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using MPU_RBAR_A3Pack  = Register<0xE000EDB4, 32, ReadWriteMode, SystemControlSpaceMPU_RBAR_A3Base, T...> ;

  struct SystemControlSpaceMPU_RASR_A3Base {} ;

  struct MPU_RASR_A3 : public RegisterBase<0xE000EDB8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using MPU_RASR_A3Pack  = Register<0xE000EDB8, 32, ReadWriteMode, SystemControlSpaceMPU_RASR_A3Base, T...> ;

  struct SystemControlSpaceDHCSRBase {} ;

  struct DHCSR : public RegisterBase<0xE000EDF0, 32, ReadWriteMode>
  {
    using C_DEBUGEN = SystemControlSpace_DHCSR_C_DEBUGEN_Values<SystemControlSpace::DHCSR, 0, 1, ReadWriteMode, SystemControlSpaceDHCSRBase> ;
    using C_HALT = SystemControlSpace_DHCSR_C_HALT_Values<SystemControlSpace::DHCSR, 1, 1, ReadWriteMode, SystemControlSpaceDHCSRBase> ;
    using C_STEP = SystemControlSpace_DHCSR_C_STEP_Values<SystemControlSpace::DHCSR, 2, 1, ReadWriteMode, SystemControlSpaceDHCSRBase> ;
    using C_MASKINTS = SystemControlSpace_DHCSR_C_MASKINTS_Values<SystemControlSpace::DHCSR, 3, 1, ReadWriteMode, SystemControlSpaceDHCSRBase> ;
    using C_SNAPSTALL = SystemControlSpace_DHCSR_C_SNAPSTALL_Values<SystemControlSpace::DHCSR, 5, 1, ReadWriteMode, SystemControlSpaceDHCSRBase> ;
    using S_REGRDY = SystemControlSpace_DHCSR_S_REGRDY_Values<SystemControlSpace::DHCSR, 16, 1, ReadMode, SystemControlSpaceDHCSRBase> ;
    using S_HALT = SystemControlSpace_DHCSR_S_HALT_Values<SystemControlSpace::DHCSR, 17, 1, ReadMode, SystemControlSpaceDHCSRBase> ;
    using S_SLEEP = SystemControlSpace_DHCSR_S_SLEEP_Values<SystemControlSpace::DHCSR, 18, 1, ReadMode, SystemControlSpaceDHCSRBase> ;
    using S_LOCKUP = SystemControlSpace_DHCSR_S_LOCKUP_Values<SystemControlSpace::DHCSR, 19, 1, ReadMode, SystemControlSpaceDHCSRBase> ;
    using S_RETIRE_ST = SystemControlSpace_DHCSR_S_RETIRE_ST_Values<SystemControlSpace::DHCSR, 24, 1, ReadMode, SystemControlSpaceDHCSRBase> ;
    using S_RESET_ST = SystemControlSpace_DHCSR_S_RESET_ST_Values<SystemControlSpace::DHCSR, 25, 1, ReadMode, SystemControlSpaceDHCSRBase> ;
    using FieldValues = SystemControlSpace_DHCSR_S_RESET_ST_Values<SystemControlSpace::DHCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHCSRPack  = Register<0xE000EDF0, 32, ReadWriteMode, SystemControlSpaceDHCSRBase, T...> ;

  struct SystemControlSpaceDCRSRBase {} ;

  struct DCRSR : public RegisterBase<0xE000EDF4, 32, WriteMode>
  {
    using REGSEL = SystemControlSpace_DCRSR_REGSEL_Values<SystemControlSpace::DCRSR, 0, 5, WriteMode, SystemControlSpaceDCRSRBase> ;
    using REGWNR = SystemControlSpace_DCRSR_REGWNR_Values<SystemControlSpace::DCRSR, 16, 1, WriteMode, SystemControlSpaceDCRSRBase> ;
    using FieldValues = SystemControlSpace_DCRSR_REGWNR_Values<SystemControlSpace::DCRSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRSRPack  = Register<0xE000EDF4, 32, WriteMode, SystemControlSpaceDCRSRBase, T...> ;

  struct SystemControlSpaceDCRDRBase {} ;

  struct DCRDR : public RegisterBase<0xE000EDF8, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using DCRDRPack  = Register<0xE000EDF8, 32, ReadWriteMode, SystemControlSpaceDCRDRBase, T...> ;

  struct SystemControlSpaceDEMCRBase {} ;

  struct DEMCR : public RegisterBase<0xE000EDFC, 32, ReadWriteMode>
  {
    using VC_CORERESET = SystemControlSpace_DEMCR_VC_CORERESET_Values<SystemControlSpace::DEMCR, 0, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using VC_MMERR = SystemControlSpace_DEMCR_VC_MMERR_Values<SystemControlSpace::DEMCR, 4, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using VC_NOCPERR = SystemControlSpace_DEMCR_VC_NOCPERR_Values<SystemControlSpace::DEMCR, 5, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using VC_CHKERR = SystemControlSpace_DEMCR_VC_CHKERR_Values<SystemControlSpace::DEMCR, 6, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using VC_STATERR = SystemControlSpace_DEMCR_VC_STATERR_Values<SystemControlSpace::DEMCR, 7, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using VC_BUSERR = SystemControlSpace_DEMCR_VC_BUSERR_Values<SystemControlSpace::DEMCR, 8, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using VC_INTERR = SystemControlSpace_DEMCR_VC_INTERR_Values<SystemControlSpace::DEMCR, 9, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using VC_HARDERR = SystemControlSpace_DEMCR_VC_HARDERR_Values<SystemControlSpace::DEMCR, 10, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using MON_EN = SystemControlSpace_DEMCR_MON_EN_Values<SystemControlSpace::DEMCR, 16, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using MON_PEND = SystemControlSpace_DEMCR_MON_PEND_Values<SystemControlSpace::DEMCR, 17, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using MON_STEP = SystemControlSpace_DEMCR_MON_STEP_Values<SystemControlSpace::DEMCR, 18, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using MON_REQ = SystemControlSpace_DEMCR_MON_REQ_Values<SystemControlSpace::DEMCR, 19, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using TRCENA = SystemControlSpace_DEMCR_TRCENA_Values<SystemControlSpace::DEMCR, 24, 1, ReadWriteMode, SystemControlSpaceDEMCRBase> ;
    using FieldValues = SystemControlSpace_DEMCR_TRCENA_Values<SystemControlSpace::DEMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DEMCRPack  = Register<0xE000EDFC, 32, ReadWriteMode, SystemControlSpaceDEMCRBase, T...> ;

  struct SystemControlSpaceICTRBase {} ;

  struct ICTR : public RegisterBase<0xE000E004, 32, ReadMode>
  {
    using INTLINESNUM = SystemControlSpace_ICTR_INTLINESNUM_Values<SystemControlSpace::ICTR, 0, 5, ReadMode, SystemControlSpaceICTRBase> ;
    using FieldValues = SystemControlSpace_ICTR_INTLINESNUM_Values<SystemControlSpace::ICTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICTRPack  = Register<0xE000E004, 32, ReadMode, SystemControlSpaceICTRBase, T...> ;

  struct SystemControlSpaceACTLRBase {} ;

  struct ACTLR : public RegisterBase<0xE000E008, 32, ReadWriteMode>
  {
    using DISMCYCINT = SystemControlSpace_ACTLR_DISMCYCINT_Values<SystemControlSpace::ACTLR, 0, 1, ReadWriteMode, SystemControlSpaceACTLRBase> ;
    using DISDEFWBUF = SystemControlSpace_ACTLR_DISDEFWBUF_Values<SystemControlSpace::ACTLR, 1, 1, ReadWriteMode, SystemControlSpaceACTLRBase> ;
    using DISFOLD = SystemControlSpace_ACTLR_DISFOLD_Values<SystemControlSpace::ACTLR, 2, 1, ReadWriteMode, SystemControlSpaceACTLRBase> ;
    using DISFPCA = SystemControlSpace_ACTLR_DISFPCA_Values<SystemControlSpace::ACTLR, 8, 1, ReadWriteMode, SystemControlSpaceACTLRBase> ;
    using DISOOFP = SystemControlSpace_ACTLR_DISOOFP_Values<SystemControlSpace::ACTLR, 9, 1, ReadWriteMode, SystemControlSpaceACTLRBase> ;
    using FieldValues = SystemControlSpace_ACTLR_DISOOFP_Values<SystemControlSpace::ACTLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACTLRPack  = Register<0xE000E008, 32, ReadWriteMode, SystemControlSpaceACTLRBase, T...> ;

  struct SystemControlSpaceISER0Base {} ;

  struct ISER0 : public RegisterBase<0xE000E100, 32, ReadWriteMode>
  {
    using SETENA = SystemControlSpace_ISER0_SETENA_Values<SystemControlSpace::ISER0, 0, 32, ReadWriteMode, SystemControlSpaceISER0Base> ;
    using FieldValues = SystemControlSpace_ISER0_SETENA_Values<SystemControlSpace::ISER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER0Pack  = Register<0xE000E100, 32, ReadWriteMode, SystemControlSpaceISER0Base, T...> ;

  struct SystemControlSpaceISER1Base {} ;

  struct ISER1 : public RegisterBase<0xE000E104, 32, ReadWriteMode>
  {
    using SETENA = SystemControlSpace_ISER1_SETENA_Values<SystemControlSpace::ISER1, 0, 32, ReadWriteMode, SystemControlSpaceISER1Base> ;
    using FieldValues = SystemControlSpace_ISER1_SETENA_Values<SystemControlSpace::ISER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER1Pack  = Register<0xE000E104, 32, ReadWriteMode, SystemControlSpaceISER1Base, T...> ;

  struct SystemControlSpaceICER0Base {} ;

  struct ICER0 : public RegisterBase<0xE000E180, 32, ReadWriteMode>
  {
    using CLRENA = SystemControlSpace_ICER0_CLRENA_Values<SystemControlSpace::ICER0, 0, 32, ReadWriteMode, SystemControlSpaceICER0Base> ;
    using FieldValues = SystemControlSpace_ICER0_CLRENA_Values<SystemControlSpace::ICER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER0Pack  = Register<0xE000E180, 32, ReadWriteMode, SystemControlSpaceICER0Base, T...> ;

  struct SystemControlSpaceICER1Base {} ;

  struct ICER1 : public RegisterBase<0xE000E184, 32, ReadWriteMode>
  {
    using CLRENA = SystemControlSpace_ICER1_CLRENA_Values<SystemControlSpace::ICER1, 0, 32, ReadWriteMode, SystemControlSpaceICER1Base> ;
    using FieldValues = SystemControlSpace_ICER1_CLRENA_Values<SystemControlSpace::ICER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER1Pack  = Register<0xE000E184, 32, ReadWriteMode, SystemControlSpaceICER1Base, T...> ;

  struct SystemControlSpaceISPR0Base {} ;

  struct ISPR0 : public RegisterBase<0xE000E200, 32, ReadWriteMode>
  {
    using SETPEND = SystemControlSpace_ISPR0_SETPEND_Values<SystemControlSpace::ISPR0, 0, 32, ReadWriteMode, SystemControlSpaceISPR0Base> ;
    using FieldValues = SystemControlSpace_ISPR0_SETPEND_Values<SystemControlSpace::ISPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR0Pack  = Register<0xE000E200, 32, ReadWriteMode, SystemControlSpaceISPR0Base, T...> ;

  struct SystemControlSpaceISPR1Base {} ;

  struct ISPR1 : public RegisterBase<0xE000E204, 32, ReadWriteMode>
  {
    using SETPEND = SystemControlSpace_ISPR1_SETPEND_Values<SystemControlSpace::ISPR1, 0, 32, ReadWriteMode, SystemControlSpaceISPR1Base> ;
    using FieldValues = SystemControlSpace_ISPR1_SETPEND_Values<SystemControlSpace::ISPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR1Pack  = Register<0xE000E204, 32, ReadWriteMode, SystemControlSpaceISPR1Base, T...> ;

  struct SystemControlSpaceICPR0Base {} ;

  struct ICPR0 : public RegisterBase<0xE000E280, 32, ReadWriteMode>
  {
    using CLRPEND = SystemControlSpace_ICPR0_CLRPEND_Values<SystemControlSpace::ICPR0, 0, 32, ReadWriteMode, SystemControlSpaceICPR0Base> ;
    using FieldValues = SystemControlSpace_ICPR0_CLRPEND_Values<SystemControlSpace::ICPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR0Pack  = Register<0xE000E280, 32, ReadWriteMode, SystemControlSpaceICPR0Base, T...> ;

  struct SystemControlSpaceICPR1Base {} ;

  struct ICPR1 : public RegisterBase<0xE000E284, 32, ReadWriteMode>
  {
    using CLRPEND = SystemControlSpace_ICPR1_CLRPEND_Values<SystemControlSpace::ICPR1, 0, 32, ReadWriteMode, SystemControlSpaceICPR1Base> ;
    using FieldValues = SystemControlSpace_ICPR1_CLRPEND_Values<SystemControlSpace::ICPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR1Pack  = Register<0xE000E284, 32, ReadWriteMode, SystemControlSpaceICPR1Base, T...> ;

  struct SystemControlSpaceIABR0Base {} ;

  struct IABR0 : public RegisterBase<0xE000E300, 32, ReadMode>
  {
    using ACTIVE = SystemControlSpace_IABR0_ACTIVE_Values<SystemControlSpace::IABR0, 0, 32, ReadMode, SystemControlSpaceIABR0Base> ;
    using FieldValues = SystemControlSpace_IABR0_ACTIVE_Values<SystemControlSpace::IABR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR0Pack  = Register<0xE000E300, 32, ReadMode, SystemControlSpaceIABR0Base, T...> ;

  struct SystemControlSpaceIABR1Base {} ;

  struct IABR1 : public RegisterBase<0xE000E304, 32, ReadMode>
  {
    using ACTIVE = SystemControlSpace_IABR1_ACTIVE_Values<SystemControlSpace::IABR1, 0, 32, ReadMode, SystemControlSpaceIABR1Base> ;
    using FieldValues = SystemControlSpace_IABR1_ACTIVE_Values<SystemControlSpace::IABR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR1Pack  = Register<0xE000E304, 32, ReadMode, SystemControlSpaceIABR1Base, T...> ;

  struct SystemControlSpaceIPR0Base {} ;

  struct IPR0 : public RegisterBase<0xE000E400, 32, ReadWriteMode>
  {
    using PRI_0 = SystemControlSpace_IPR0_PRI_0_Values<SystemControlSpace::IPR0, 0, 8, ReadWriteMode, SystemControlSpaceIPR0Base> ;
    using PRI_1 = SystemControlSpace_IPR0_PRI_1_Values<SystemControlSpace::IPR0, 8, 8, ReadWriteMode, SystemControlSpaceIPR0Base> ;
    using PRI_2 = SystemControlSpace_IPR0_PRI_2_Values<SystemControlSpace::IPR0, 16, 8, ReadWriteMode, SystemControlSpaceIPR0Base> ;
    using PRI_3 = SystemControlSpace_IPR0_PRI_3_Values<SystemControlSpace::IPR0, 24, 8, ReadWriteMode, SystemControlSpaceIPR0Base> ;
    using FieldValues = SystemControlSpace_IPR0_PRI_3_Values<SystemControlSpace::IPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR0Pack  = Register<0xE000E400, 32, ReadWriteMode, SystemControlSpaceIPR0Base, T...> ;

  struct SystemControlSpaceIPR1Base {} ;

  struct IPR1 : public RegisterBase<0xE000E404, 32, ReadWriteMode>
  {
    using PRI_4 = SystemControlSpace_IPR1_PRI_4_Values<SystemControlSpace::IPR1, 0, 8, ReadWriteMode, SystemControlSpaceIPR1Base> ;
    using PRI_5 = SystemControlSpace_IPR1_PRI_5_Values<SystemControlSpace::IPR1, 8, 8, ReadWriteMode, SystemControlSpaceIPR1Base> ;
    using PRI_6 = SystemControlSpace_IPR1_PRI_6_Values<SystemControlSpace::IPR1, 16, 8, ReadWriteMode, SystemControlSpaceIPR1Base> ;
    using PRI_7 = SystemControlSpace_IPR1_PRI_7_Values<SystemControlSpace::IPR1, 24, 8, ReadWriteMode, SystemControlSpaceIPR1Base> ;
    using FieldValues = SystemControlSpace_IPR1_PRI_7_Values<SystemControlSpace::IPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR1Pack  = Register<0xE000E404, 32, ReadWriteMode, SystemControlSpaceIPR1Base, T...> ;

  struct SystemControlSpaceIPR2Base {} ;

  struct IPR2 : public RegisterBase<0xE000E408, 32, ReadWriteMode>
  {
    using PRI_8 = SystemControlSpace_IPR2_PRI_8_Values<SystemControlSpace::IPR2, 0, 8, ReadWriteMode, SystemControlSpaceIPR2Base> ;
    using PRI_9 = SystemControlSpace_IPR2_PRI_9_Values<SystemControlSpace::IPR2, 8, 8, ReadWriteMode, SystemControlSpaceIPR2Base> ;
    using PRI_10 = SystemControlSpace_IPR2_PRI_10_Values<SystemControlSpace::IPR2, 16, 8, ReadWriteMode, SystemControlSpaceIPR2Base> ;
    using PRI_11 = SystemControlSpace_IPR2_PRI_11_Values<SystemControlSpace::IPR2, 24, 8, ReadWriteMode, SystemControlSpaceIPR2Base> ;
    using FieldValues = SystemControlSpace_IPR2_PRI_11_Values<SystemControlSpace::IPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR2Pack  = Register<0xE000E408, 32, ReadWriteMode, SystemControlSpaceIPR2Base, T...> ;

  struct SystemControlSpaceIPR3Base {} ;

  struct IPR3 : public RegisterBase<0xE000E40C, 32, ReadWriteMode>
  {
    using PRI_12 = SystemControlSpace_IPR3_PRI_12_Values<SystemControlSpace::IPR3, 0, 8, ReadWriteMode, SystemControlSpaceIPR3Base> ;
    using PRI_13 = SystemControlSpace_IPR3_PRI_13_Values<SystemControlSpace::IPR3, 8, 8, ReadWriteMode, SystemControlSpaceIPR3Base> ;
    using PRI_14 = SystemControlSpace_IPR3_PRI_14_Values<SystemControlSpace::IPR3, 16, 8, ReadWriteMode, SystemControlSpaceIPR3Base> ;
    using PRI_15 = SystemControlSpace_IPR3_PRI_15_Values<SystemControlSpace::IPR3, 24, 8, ReadWriteMode, SystemControlSpaceIPR3Base> ;
    using FieldValues = SystemControlSpace_IPR3_PRI_15_Values<SystemControlSpace::IPR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR3Pack  = Register<0xE000E40C, 32, ReadWriteMode, SystemControlSpaceIPR3Base, T...> ;

  struct SystemControlSpaceIPR4Base {} ;

  struct IPR4 : public RegisterBase<0xE000E410, 32, ReadWriteMode>
  {
    using PRI_16 = SystemControlSpace_IPR4_PRI_16_Values<SystemControlSpace::IPR4, 0, 8, ReadWriteMode, SystemControlSpaceIPR4Base> ;
    using PRI_17 = SystemControlSpace_IPR4_PRI_17_Values<SystemControlSpace::IPR4, 8, 8, ReadWriteMode, SystemControlSpaceIPR4Base> ;
    using PRI_18 = SystemControlSpace_IPR4_PRI_18_Values<SystemControlSpace::IPR4, 16, 8, ReadWriteMode, SystemControlSpaceIPR4Base> ;
    using PRI_19 = SystemControlSpace_IPR4_PRI_19_Values<SystemControlSpace::IPR4, 24, 8, ReadWriteMode, SystemControlSpaceIPR4Base> ;
    using FieldValues = SystemControlSpace_IPR4_PRI_19_Values<SystemControlSpace::IPR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR4Pack  = Register<0xE000E410, 32, ReadWriteMode, SystemControlSpaceIPR4Base, T...> ;

  struct SystemControlSpaceIPR5Base {} ;

  struct IPR5 : public RegisterBase<0xE000E414, 32, ReadWriteMode>
  {
    using PRI_20 = SystemControlSpace_IPR5_PRI_20_Values<SystemControlSpace::IPR5, 0, 8, ReadWriteMode, SystemControlSpaceIPR5Base> ;
    using PRI_21 = SystemControlSpace_IPR5_PRI_21_Values<SystemControlSpace::IPR5, 8, 8, ReadWriteMode, SystemControlSpaceIPR5Base> ;
    using PRI_22 = SystemControlSpace_IPR5_PRI_22_Values<SystemControlSpace::IPR5, 16, 8, ReadWriteMode, SystemControlSpaceIPR5Base> ;
    using PRI_23 = SystemControlSpace_IPR5_PRI_23_Values<SystemControlSpace::IPR5, 24, 8, ReadWriteMode, SystemControlSpaceIPR5Base> ;
    using FieldValues = SystemControlSpace_IPR5_PRI_23_Values<SystemControlSpace::IPR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR5Pack  = Register<0xE000E414, 32, ReadWriteMode, SystemControlSpaceIPR5Base, T...> ;

  struct SystemControlSpaceIPR6Base {} ;

  struct IPR6 : public RegisterBase<0xE000E418, 32, ReadWriteMode>
  {
    using PRI_24 = SystemControlSpace_IPR6_PRI_24_Values<SystemControlSpace::IPR6, 0, 8, ReadWriteMode, SystemControlSpaceIPR6Base> ;
    using PRI_25 = SystemControlSpace_IPR6_PRI_25_Values<SystemControlSpace::IPR6, 8, 8, ReadWriteMode, SystemControlSpaceIPR6Base> ;
    using PRI_26 = SystemControlSpace_IPR6_PRI_26_Values<SystemControlSpace::IPR6, 16, 8, ReadWriteMode, SystemControlSpaceIPR6Base> ;
    using PRI_27 = SystemControlSpace_IPR6_PRI_27_Values<SystemControlSpace::IPR6, 24, 8, ReadWriteMode, SystemControlSpaceIPR6Base> ;
    using FieldValues = SystemControlSpace_IPR6_PRI_27_Values<SystemControlSpace::IPR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR6Pack  = Register<0xE000E418, 32, ReadWriteMode, SystemControlSpaceIPR6Base, T...> ;

  struct SystemControlSpaceIPR7Base {} ;

  struct IPR7 : public RegisterBase<0xE000E41C, 32, ReadWriteMode>
  {
    using PRI_28 = SystemControlSpace_IPR7_PRI_28_Values<SystemControlSpace::IPR7, 0, 8, ReadWriteMode, SystemControlSpaceIPR7Base> ;
    using PRI_29 = SystemControlSpace_IPR7_PRI_29_Values<SystemControlSpace::IPR7, 8, 8, ReadWriteMode, SystemControlSpaceIPR7Base> ;
    using PRI_30 = SystemControlSpace_IPR7_PRI_30_Values<SystemControlSpace::IPR7, 16, 8, ReadWriteMode, SystemControlSpaceIPR7Base> ;
    using PRI_31 = SystemControlSpace_IPR7_PRI_31_Values<SystemControlSpace::IPR7, 24, 8, ReadWriteMode, SystemControlSpaceIPR7Base> ;
    using FieldValues = SystemControlSpace_IPR7_PRI_31_Values<SystemControlSpace::IPR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR7Pack  = Register<0xE000E41C, 32, ReadWriteMode, SystemControlSpaceIPR7Base, T...> ;

  struct SystemControlSpaceIPR8Base {} ;

  struct IPR8 : public RegisterBase<0xE000E420, 32, ReadWriteMode>
  {
    using PRI_32 = SystemControlSpace_IPR8_PRI_32_Values<SystemControlSpace::IPR8, 0, 8, ReadWriteMode, SystemControlSpaceIPR8Base> ;
    using PRI_33 = SystemControlSpace_IPR8_PRI_33_Values<SystemControlSpace::IPR8, 8, 8, ReadWriteMode, SystemControlSpaceIPR8Base> ;
    using PRI_34 = SystemControlSpace_IPR8_PRI_34_Values<SystemControlSpace::IPR8, 16, 8, ReadWriteMode, SystemControlSpaceIPR8Base> ;
    using PRI_35 = SystemControlSpace_IPR8_PRI_35_Values<SystemControlSpace::IPR8, 24, 8, ReadWriteMode, SystemControlSpaceIPR8Base> ;
    using FieldValues = SystemControlSpace_IPR8_PRI_35_Values<SystemControlSpace::IPR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR8Pack  = Register<0xE000E420, 32, ReadWriteMode, SystemControlSpaceIPR8Base, T...> ;

  struct SystemControlSpaceIPR9Base {} ;

  struct IPR9 : public RegisterBase<0xE000E424, 32, ReadWriteMode>
  {
    using PRI_36 = SystemControlSpace_IPR9_PRI_36_Values<SystemControlSpace::IPR9, 0, 8, ReadWriteMode, SystemControlSpaceIPR9Base> ;
    using PRI_37 = SystemControlSpace_IPR9_PRI_37_Values<SystemControlSpace::IPR9, 8, 8, ReadWriteMode, SystemControlSpaceIPR9Base> ;
    using PRI_38 = SystemControlSpace_IPR9_PRI_38_Values<SystemControlSpace::IPR9, 16, 8, ReadWriteMode, SystemControlSpaceIPR9Base> ;
    using PRI_39 = SystemControlSpace_IPR9_PRI_39_Values<SystemControlSpace::IPR9, 24, 8, ReadWriteMode, SystemControlSpaceIPR9Base> ;
    using FieldValues = SystemControlSpace_IPR9_PRI_39_Values<SystemControlSpace::IPR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR9Pack  = Register<0xE000E424, 32, ReadWriteMode, SystemControlSpaceIPR9Base, T...> ;

  struct SystemControlSpaceIPR10Base {} ;

  struct IPR10 : public RegisterBase<0xE000E428, 32, ReadWriteMode>
  {
    using PRI_40 = SystemControlSpace_IPR10_PRI_40_Values<SystemControlSpace::IPR10, 0, 8, ReadWriteMode, SystemControlSpaceIPR10Base> ;
    using PRI_41 = SystemControlSpace_IPR10_PRI_41_Values<SystemControlSpace::IPR10, 8, 8, ReadWriteMode, SystemControlSpaceIPR10Base> ;
    using PRI_42 = SystemControlSpace_IPR10_PRI_42_Values<SystemControlSpace::IPR10, 16, 8, ReadWriteMode, SystemControlSpaceIPR10Base> ;
    using PRI_43 = SystemControlSpace_IPR10_PRI_43_Values<SystemControlSpace::IPR10, 24, 8, ReadWriteMode, SystemControlSpaceIPR10Base> ;
    using FieldValues = SystemControlSpace_IPR10_PRI_43_Values<SystemControlSpace::IPR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR10Pack  = Register<0xE000E428, 32, ReadWriteMode, SystemControlSpaceIPR10Base, T...> ;

  struct SystemControlSpaceIPR11Base {} ;

  struct IPR11 : public RegisterBase<0xE000E42C, 32, ReadWriteMode>
  {
    using PRI_44 = SystemControlSpace_IPR11_PRI_44_Values<SystemControlSpace::IPR11, 0, 8, ReadWriteMode, SystemControlSpaceIPR11Base> ;
    using PRI_45 = SystemControlSpace_IPR11_PRI_45_Values<SystemControlSpace::IPR11, 8, 8, ReadWriteMode, SystemControlSpaceIPR11Base> ;
    using PRI_46 = SystemControlSpace_IPR11_PRI_46_Values<SystemControlSpace::IPR11, 16, 8, ReadWriteMode, SystemControlSpaceIPR11Base> ;
    using PRI_47 = SystemControlSpace_IPR11_PRI_47_Values<SystemControlSpace::IPR11, 24, 8, ReadWriteMode, SystemControlSpaceIPR11Base> ;
    using FieldValues = SystemControlSpace_IPR11_PRI_47_Values<SystemControlSpace::IPR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR11Pack  = Register<0xE000E42C, 32, ReadWriteMode, SystemControlSpaceIPR11Base, T...> ;

  struct SystemControlSpaceIPR12Base {} ;

  struct IPR12 : public RegisterBase<0xE000E430, 32, ReadWriteMode>
  {
    using PRI_48 = SystemControlSpace_IPR12_PRI_48_Values<SystemControlSpace::IPR12, 0, 8, ReadWriteMode, SystemControlSpaceIPR12Base> ;
    using PRI_49 = SystemControlSpace_IPR12_PRI_49_Values<SystemControlSpace::IPR12, 8, 8, ReadWriteMode, SystemControlSpaceIPR12Base> ;
    using PRI_50 = SystemControlSpace_IPR12_PRI_50_Values<SystemControlSpace::IPR12, 16, 8, ReadWriteMode, SystemControlSpaceIPR12Base> ;
    using PRI_51 = SystemControlSpace_IPR12_PRI_51_Values<SystemControlSpace::IPR12, 24, 8, ReadWriteMode, SystemControlSpaceIPR12Base> ;
    using FieldValues = SystemControlSpace_IPR12_PRI_51_Values<SystemControlSpace::IPR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR12Pack  = Register<0xE000E430, 32, ReadWriteMode, SystemControlSpaceIPR12Base, T...> ;

  struct SystemControlSpaceIPR13Base {} ;

  struct IPR13 : public RegisterBase<0xE000E434, 32, ReadWriteMode>
  {
    using PRI_52 = SystemControlSpace_IPR13_PRI_52_Values<SystemControlSpace::IPR13, 0, 8, ReadWriteMode, SystemControlSpaceIPR13Base> ;
    using PRI_53 = SystemControlSpace_IPR13_PRI_53_Values<SystemControlSpace::IPR13, 8, 8, ReadWriteMode, SystemControlSpaceIPR13Base> ;
    using PRI_54 = SystemControlSpace_IPR13_PRI_54_Values<SystemControlSpace::IPR13, 16, 8, ReadWriteMode, SystemControlSpaceIPR13Base> ;
    using PRI_55 = SystemControlSpace_IPR13_PRI_55_Values<SystemControlSpace::IPR13, 24, 8, ReadWriteMode, SystemControlSpaceIPR13Base> ;
    using FieldValues = SystemControlSpace_IPR13_PRI_55_Values<SystemControlSpace::IPR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR13Pack  = Register<0xE000E434, 32, ReadWriteMode, SystemControlSpaceIPR13Base, T...> ;

  struct SystemControlSpaceIPR14Base {} ;

  struct IPR14 : public RegisterBase<0xE000E438, 32, ReadWriteMode>
  {
    using PRI_56 = SystemControlSpace_IPR14_PRI_56_Values<SystemControlSpace::IPR14, 0, 8, ReadWriteMode, SystemControlSpaceIPR14Base> ;
    using PRI_57 = SystemControlSpace_IPR14_PRI_57_Values<SystemControlSpace::IPR14, 8, 8, ReadWriteMode, SystemControlSpaceIPR14Base> ;
    using PRI_58 = SystemControlSpace_IPR14_PRI_58_Values<SystemControlSpace::IPR14, 16, 8, ReadWriteMode, SystemControlSpaceIPR14Base> ;
    using PRI_59 = SystemControlSpace_IPR14_PRI_59_Values<SystemControlSpace::IPR14, 24, 8, ReadWriteMode, SystemControlSpaceIPR14Base> ;
    using FieldValues = SystemControlSpace_IPR14_PRI_59_Values<SystemControlSpace::IPR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR14Pack  = Register<0xE000E438, 32, ReadWriteMode, SystemControlSpaceIPR14Base, T...> ;

  struct SystemControlSpaceIPR15Base {} ;

  struct IPR15 : public RegisterBase<0xE000E43C, 32, ReadWriteMode>
  {
    using PRI_60 = SystemControlSpace_IPR15_PRI_60_Values<SystemControlSpace::IPR15, 0, 8, ReadWriteMode, SystemControlSpaceIPR15Base> ;
    using PRI_61 = SystemControlSpace_IPR15_PRI_61_Values<SystemControlSpace::IPR15, 8, 8, ReadWriteMode, SystemControlSpaceIPR15Base> ;
    using PRI_62 = SystemControlSpace_IPR15_PRI_62_Values<SystemControlSpace::IPR15, 16, 8, ReadWriteMode, SystemControlSpaceIPR15Base> ;
    using PRI_63 = SystemControlSpace_IPR15_PRI_63_Values<SystemControlSpace::IPR15, 24, 8, ReadWriteMode, SystemControlSpaceIPR15Base> ;
    using FieldValues = SystemControlSpace_IPR15_PRI_63_Values<SystemControlSpace::IPR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR15Pack  = Register<0xE000E43C, 32, ReadWriteMode, SystemControlSpaceIPR15Base, T...> ;

  struct SystemControlSpaceSTIRBase {} ;

  struct STIR : public RegisterBase<0xE000EF00, 32, WriteMode>
  {
    using INTID = SystemControlSpace_STIR_INTID_Values<SystemControlSpace::STIR, 0, 9, WriteMode, SystemControlSpaceSTIRBase> ;
    using FieldValues = SystemControlSpace_STIR_INTID_Values<SystemControlSpace::STIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STIRPack  = Register<0xE000EF00, 32, WriteMode, SystemControlSpaceSTIRBase, T...> ;

  struct SystemControlSpaceSTCSRBase {} ;

  struct STCSR : public RegisterBase<0xE000E010, 32, ReadWriteMode>
  {
    using ENABLE = SystemControlSpace_STCSR_ENABLE_Values<SystemControlSpace::STCSR, 0, 1, ReadWriteMode, SystemControlSpaceSTCSRBase> ;
    using TICKINT = SystemControlSpace_STCSR_TICKINT_Values<SystemControlSpace::STCSR, 1, 1, ReadWriteMode, SystemControlSpaceSTCSRBase> ;
    using CLKSOURCE = SystemControlSpace_STCSR_CLKSOURCE_Values<SystemControlSpace::STCSR, 2, 1, ReadMode, SystemControlSpaceSTCSRBase> ;
    using COUNTFLAG = SystemControlSpace_STCSR_COUNTFLAG_Values<SystemControlSpace::STCSR, 16, 1, ReadMode, SystemControlSpaceSTCSRBase> ;
    using FieldValues = SystemControlSpace_STCSR_COUNTFLAG_Values<SystemControlSpace::STCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STCSRPack  = Register<0xE000E010, 32, ReadWriteMode, SystemControlSpaceSTCSRBase, T...> ;

  struct SystemControlSpaceSTRVRBase {} ;

  struct STRVR : public RegisterBase<0xE000E014, 32, ReadWriteMode>
  {
    using RELOAD = SystemControlSpace_STRVR_RELOAD_Values<SystemControlSpace::STRVR, 0, 24, ReadWriteMode, SystemControlSpaceSTRVRBase> ;
    using FieldValues = SystemControlSpace_STRVR_RELOAD_Values<SystemControlSpace::STRVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STRVRPack  = Register<0xE000E014, 32, ReadWriteMode, SystemControlSpaceSTRVRBase, T...> ;

  struct SystemControlSpaceSTCVRBase {} ;

  struct STCVR : public RegisterBase<0xE000E018, 32, ReadWriteMode>
  {
    using CURRENT = SystemControlSpace_STCVR_CURRENT_Values<SystemControlSpace::STCVR, 0, 24, ReadWriteMode, SystemControlSpaceSTCVRBase> ;
    using FieldValues = SystemControlSpace_STCVR_CURRENT_Values<SystemControlSpace::STCVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STCVRPack  = Register<0xE000E018, 32, ReadWriteMode, SystemControlSpaceSTCVRBase, T...> ;

  struct SystemControlSpaceSTCRBase {} ;

  struct STCR : public RegisterBase<0xE000E01C, 32, ReadMode>
  {
    using TENMS = SystemControlSpace_STCR_TENMS_Values<SystemControlSpace::STCR, 0, 24, ReadMode, SystemControlSpaceSTCRBase> ;
    using SKEW = SystemControlSpace_STCR_SKEW_Values<SystemControlSpace::STCR, 30, 1, ReadMode, SystemControlSpaceSTCRBase> ;
    using NOREF = SystemControlSpace_STCR_NOREF_Values<SystemControlSpace::STCR, 31, 1, ReadMode, SystemControlSpaceSTCRBase> ;
    using FieldValues = SystemControlSpace_STCR_NOREF_Values<SystemControlSpace::STCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STCRPack  = Register<0xE000E01C, 32, ReadMode, SystemControlSpaceSTCRBase, T...> ;

  struct SystemControlSpaceCPUIDBase {} ;

  struct CPUID : public RegisterBase<0xE000ED00, 32, ReadMode>
  {
    using REVISION = SystemControlSpace_CPUID_REVISION_Values<SystemControlSpace::CPUID, 0, 4, ReadMode, SystemControlSpaceCPUIDBase> ;
    using PARTNO = SystemControlSpace_CPUID_PARTNO_Values<SystemControlSpace::CPUID, 4, 12, ReadMode, SystemControlSpaceCPUIDBase> ;
    using CONSTANT = SystemControlSpace_CPUID_CONSTANT_Values<SystemControlSpace::CPUID, 16, 4, ReadMode, SystemControlSpaceCPUIDBase> ;
    using VARIANT = SystemControlSpace_CPUID_VARIANT_Values<SystemControlSpace::CPUID, 20, 4, ReadMode, SystemControlSpaceCPUIDBase> ;
    using IMPLEMENTER = SystemControlSpace_CPUID_IMPLEMENTER_Values<SystemControlSpace::CPUID, 24, 8, ReadMode, SystemControlSpaceCPUIDBase> ;
    using FieldValues = SystemControlSpace_CPUID_IMPLEMENTER_Values<SystemControlSpace::CPUID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUIDPack  = Register<0xE000ED00, 32, ReadMode, SystemControlSpaceCPUIDBase, T...> ;

  struct SystemControlSpaceICSRBase {} ;

  struct ICSR : public RegisterBase<0xE000ED04, 32, ReadWriteMode>
  {
    using VECTACTIVE = SystemControlSpace_ICSR_VECTACTIVE_Values<SystemControlSpace::ICSR, 0, 9, ReadMode, SystemControlSpaceICSRBase> ;
    using RETTOBASE = SystemControlSpace_ICSR_RETTOBASE_Values<SystemControlSpace::ICSR, 11, 1, ReadMode, SystemControlSpaceICSRBase> ;
    using VECTPENDING = SystemControlSpace_ICSR_VECTPENDING_Values<SystemControlSpace::ICSR, 12, 6, ReadMode, SystemControlSpaceICSRBase> ;
    using ISRPENDING = SystemControlSpace_ICSR_ISRPENDING_Values<SystemControlSpace::ICSR, 22, 1, ReadMode, SystemControlSpaceICSRBase> ;
    using ISRPREEMPT = SystemControlSpace_ICSR_ISRPREEMPT_Values<SystemControlSpace::ICSR, 23, 1, ReadMode, SystemControlSpaceICSRBase> ;
    using PENDSTCLR = SystemControlSpace_ICSR_PENDSTCLR_Values<SystemControlSpace::ICSR, 25, 1, WriteMode, SystemControlSpaceICSRBase> ;
    using PENDSTSET = SystemControlSpace_ICSR_PENDSTSET_Values<SystemControlSpace::ICSR, 26, 1, ReadWriteMode, SystemControlSpaceICSRBase> ;
    using PENDSVCLR = SystemControlSpace_ICSR_PENDSVCLR_Values<SystemControlSpace::ICSR, 27, 1, WriteMode, SystemControlSpaceICSRBase> ;
    using PENDSVSET = SystemControlSpace_ICSR_PENDSVSET_Values<SystemControlSpace::ICSR, 28, 1, ReadWriteMode, SystemControlSpaceICSRBase> ;
    using NMIPENDSET = SystemControlSpace_ICSR_NMIPENDSET_Values<SystemControlSpace::ICSR, 31, 1, ReadWriteMode, SystemControlSpaceICSRBase> ;
    using FieldValues = SystemControlSpace_ICSR_NMIPENDSET_Values<SystemControlSpace::ICSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICSRPack  = Register<0xE000ED04, 32, ReadWriteMode, SystemControlSpaceICSRBase, T...> ;

  struct SystemControlSpaceVTORBase {} ;

  struct VTOR : public RegisterBase<0xE000ED08, 32, ReadWriteMode>
  {
    using TBLOFF = SystemControlSpace_VTOR_TBLOFF_Values<SystemControlSpace::VTOR, 7, 22, ReadWriteMode, SystemControlSpaceVTORBase> ;
    using TBLBASE = SystemControlSpace_VTOR_TBLBASE_Values<SystemControlSpace::VTOR, 29, 1, ReadWriteMode, SystemControlSpaceVTORBase> ;
    using FieldValues = SystemControlSpace_VTOR_TBLBASE_Values<SystemControlSpace::VTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VTORPack  = Register<0xE000ED08, 32, ReadWriteMode, SystemControlSpaceVTORBase, T...> ;

  struct SystemControlSpaceAIRCRBase {} ;

  struct AIRCR : public RegisterBase<0xE000ED0C, 32, ReadWriteMode>
  {
    using VECTRESET = SystemControlSpace_AIRCR_VECTRESET_Values<SystemControlSpace::AIRCR, 0, 1, WriteMode, SystemControlSpaceAIRCRBase> ;
    using VECTCLRACTIVE = SystemControlSpace_AIRCR_VECTCLRACTIVE_Values<SystemControlSpace::AIRCR, 1, 1, WriteMode, SystemControlSpaceAIRCRBase> ;
    using SYSRESETREQ = SystemControlSpace_AIRCR_SYSRESETREQ_Values<SystemControlSpace::AIRCR, 2, 1, WriteMode, SystemControlSpaceAIRCRBase> ;
    using PRIGROUP = SystemControlSpace_AIRCR_PRIGROUP_Values<SystemControlSpace::AIRCR, 8, 3, ReadWriteMode, SystemControlSpaceAIRCRBase> ;
    using ENDIANESS = SystemControlSpace_AIRCR_ENDIANESS_Values<SystemControlSpace::AIRCR, 15, 1, ReadMode, SystemControlSpaceAIRCRBase> ;
    using VECTKEY = SystemControlSpace_AIRCR_VECTKEY_Values<SystemControlSpace::AIRCR, 16, 16, WriteMode, SystemControlSpaceAIRCRBase> ;
    using FieldValues = SystemControlSpace_AIRCR_VECTKEY_Values<SystemControlSpace::AIRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AIRCRPack  = Register<0xE000ED0C, 32, ReadWriteMode, SystemControlSpaceAIRCRBase, T...> ;

  struct SystemControlSpaceSCRBase {} ;

  struct SCR : public RegisterBase<0xE000ED10, 32, ReadWriteMode>
  {
    using SLEEPONEXIT = SystemControlSpace_SCR_SLEEPONEXIT_Values<SystemControlSpace::SCR, 1, 1, ReadWriteMode, SystemControlSpaceSCRBase> ;
    using SLEEPDEEP = SystemControlSpace_SCR_SLEEPDEEP_Values<SystemControlSpace::SCR, 2, 1, ReadWriteMode, SystemControlSpaceSCRBase> ;
    using SEVONPEND = SystemControlSpace_SCR_SEVONPEND_Values<SystemControlSpace::SCR, 4, 1, ReadWriteMode, SystemControlSpaceSCRBase> ;
    using FieldValues = SystemControlSpace_SCR_SEVONPEND_Values<SystemControlSpace::SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCRPack  = Register<0xE000ED10, 32, ReadWriteMode, SystemControlSpaceSCRBase, T...> ;

  struct SystemControlSpaceCCRBase {} ;

  struct CCR : public RegisterBase<0xE000ED14, 32, ReadWriteMode>
  {
    using NONBASETHREDENA = SystemControlSpace_CCR_NONBASETHREDENA_Values<SystemControlSpace::CCR, 0, 1, ReadWriteMode, SystemControlSpaceCCRBase> ;
    using USERSETMPEND = SystemControlSpace_CCR_USERSETMPEND_Values<SystemControlSpace::CCR, 1, 1, ReadWriteMode, SystemControlSpaceCCRBase> ;
    using UNALIGN_TRP = SystemControlSpace_CCR_UNALIGN_TRP_Values<SystemControlSpace::CCR, 3, 1, ReadWriteMode, SystemControlSpaceCCRBase> ;
    using DIV_0_TRP = SystemControlSpace_CCR_DIV_0_TRP_Values<SystemControlSpace::CCR, 4, 1, ReadWriteMode, SystemControlSpaceCCRBase> ;
    using BFHFNMIGN = SystemControlSpace_CCR_BFHFNMIGN_Values<SystemControlSpace::CCR, 8, 1, ReadWriteMode, SystemControlSpaceCCRBase> ;
    using STKALIGN = SystemControlSpace_CCR_STKALIGN_Values<SystemControlSpace::CCR, 9, 1, ReadWriteMode, SystemControlSpaceCCRBase> ;
    using FieldValues = SystemControlSpace_CCR_STKALIGN_Values<SystemControlSpace::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0xE000ED14, 32, ReadWriteMode, SystemControlSpaceCCRBase, T...> ;

  struct SystemControlSpaceSHPR1Base {} ;

  struct SHPR1 : public RegisterBase<0xE000ED18, 32, ReadWriteMode>
  {
    using PRI_4 = SystemControlSpace_SHPR1_PRI_4_Values<SystemControlSpace::SHPR1, 0, 8, ReadWriteMode, SystemControlSpaceSHPR1Base> ;
    using PRI_5 = SystemControlSpace_SHPR1_PRI_5_Values<SystemControlSpace::SHPR1, 8, 8, ReadWriteMode, SystemControlSpaceSHPR1Base> ;
    using PRI_6 = SystemControlSpace_SHPR1_PRI_6_Values<SystemControlSpace::SHPR1, 16, 8, ReadWriteMode, SystemControlSpaceSHPR1Base> ;
    using PRI_7 = SystemControlSpace_SHPR1_PRI_7_Values<SystemControlSpace::SHPR1, 24, 8, ReadWriteMode, SystemControlSpaceSHPR1Base> ;
    using FieldValues = SystemControlSpace_SHPR1_PRI_7_Values<SystemControlSpace::SHPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHPR1Pack  = Register<0xE000ED18, 32, ReadWriteMode, SystemControlSpaceSHPR1Base, T...> ;

  struct SystemControlSpaceSHPR2Base {} ;

  struct SHPR2 : public RegisterBase<0xE000ED1C, 32, ReadWriteMode>
  {
    using PRI_8 = SystemControlSpace_SHPR2_PRI_8_Values<SystemControlSpace::SHPR2, 0, 8, ReadWriteMode, SystemControlSpaceSHPR2Base> ;
    using PRI_9 = SystemControlSpace_SHPR2_PRI_9_Values<SystemControlSpace::SHPR2, 8, 8, ReadWriteMode, SystemControlSpaceSHPR2Base> ;
    using PRI_10 = SystemControlSpace_SHPR2_PRI_10_Values<SystemControlSpace::SHPR2, 16, 8, ReadWriteMode, SystemControlSpaceSHPR2Base> ;
    using PRI_11 = SystemControlSpace_SHPR2_PRI_11_Values<SystemControlSpace::SHPR2, 24, 8, ReadWriteMode, SystemControlSpaceSHPR2Base> ;
    using FieldValues = SystemControlSpace_SHPR2_PRI_11_Values<SystemControlSpace::SHPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHPR2Pack  = Register<0xE000ED1C, 32, ReadWriteMode, SystemControlSpaceSHPR2Base, T...> ;

  struct SystemControlSpaceSHPR3Base {} ;

  struct SHPR3 : public RegisterBase<0xE000ED20, 32, ReadWriteMode>
  {
    using PRI_12 = SystemControlSpace_SHPR3_PRI_12_Values<SystemControlSpace::SHPR3, 0, 8, ReadWriteMode, SystemControlSpaceSHPR3Base> ;
    using PRI_13 = SystemControlSpace_SHPR3_PRI_13_Values<SystemControlSpace::SHPR3, 8, 8, ReadWriteMode, SystemControlSpaceSHPR3Base> ;
    using PRI_14 = SystemControlSpace_SHPR3_PRI_14_Values<SystemControlSpace::SHPR3, 16, 8, ReadWriteMode, SystemControlSpaceSHPR3Base> ;
    using PRI_15 = SystemControlSpace_SHPR3_PRI_15_Values<SystemControlSpace::SHPR3, 24, 8, ReadWriteMode, SystemControlSpaceSHPR3Base> ;
    using FieldValues = SystemControlSpace_SHPR3_PRI_15_Values<SystemControlSpace::SHPR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHPR3Pack  = Register<0xE000ED20, 32, ReadWriteMode, SystemControlSpaceSHPR3Base, T...> ;

  struct SystemControlSpaceSHCSRBase {} ;

  struct SHCSR : public RegisterBase<0xE000ED24, 32, ReadWriteMode>
  {
    using MEMFAULTACT = SystemControlSpace_SHCSR_MEMFAULTACT_Values<SystemControlSpace::SHCSR, 0, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using BUSFAULTACT = SystemControlSpace_SHCSR_BUSFAULTACT_Values<SystemControlSpace::SHCSR, 1, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using USGFAULTACT = SystemControlSpace_SHCSR_USGFAULTACT_Values<SystemControlSpace::SHCSR, 3, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using SVCALLACT = SystemControlSpace_SHCSR_SVCALLACT_Values<SystemControlSpace::SHCSR, 7, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using MONITORACT = SystemControlSpace_SHCSR_MONITORACT_Values<SystemControlSpace::SHCSR, 8, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using PENDSVACT = SystemControlSpace_SHCSR_PENDSVACT_Values<SystemControlSpace::SHCSR, 10, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using SYSTICKACT = SystemControlSpace_SHCSR_SYSTICKACT_Values<SystemControlSpace::SHCSR, 11, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using USGFAULTPENDED = SystemControlSpace_SHCSR_USGFAULTPENDED_Values<SystemControlSpace::SHCSR, 12, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using MEMFAULTPENDED = SystemControlSpace_SHCSR_MEMFAULTPENDED_Values<SystemControlSpace::SHCSR, 13, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using BUSFAULTPENDED = SystemControlSpace_SHCSR_BUSFAULTPENDED_Values<SystemControlSpace::SHCSR, 14, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using SVCALLPENDED = SystemControlSpace_SHCSR_SVCALLPENDED_Values<SystemControlSpace::SHCSR, 15, 1, ReadMode, SystemControlSpaceSHCSRBase> ;
    using MEMFAULTENA = SystemControlSpace_SHCSR_MEMFAULTENA_Values<SystemControlSpace::SHCSR, 16, 1, ReadWriteMode, SystemControlSpaceSHCSRBase> ;
    using BUSFAULTENA = SystemControlSpace_SHCSR_BUSFAULTENA_Values<SystemControlSpace::SHCSR, 17, 1, ReadWriteMode, SystemControlSpaceSHCSRBase> ;
    using USGFAULTENA = SystemControlSpace_SHCSR_USGFAULTENA_Values<SystemControlSpace::SHCSR, 18, 1, ReadWriteMode, SystemControlSpaceSHCSRBase> ;
    using FieldValues = SystemControlSpace_SHCSR_USGFAULTENA_Values<SystemControlSpace::SHCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHCSRPack  = Register<0xE000ED24, 32, ReadWriteMode, SystemControlSpaceSHCSRBase, T...> ;

  struct SystemControlSpaceCFSRBase {} ;

  struct CFSR : public RegisterBase<0xE000ED28, 32, ReadWriteMode>
  {
    using IACCVIOL = SystemControlSpace_CFSR_IACCVIOL_Values<SystemControlSpace::CFSR, 0, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using DACCVIOL = SystemControlSpace_CFSR_DACCVIOL_Values<SystemControlSpace::CFSR, 1, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using MUNSTKERR = SystemControlSpace_CFSR_MUNSTKERR_Values<SystemControlSpace::CFSR, 3, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using MSTKERR = SystemControlSpace_CFSR_MSTKERR_Values<SystemControlSpace::CFSR, 4, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using MMARVALID = SystemControlSpace_CFSR_MMARVALID_Values<SystemControlSpace::CFSR, 7, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using IBUSERR = SystemControlSpace_CFSR_IBUSERR_Values<SystemControlSpace::CFSR, 8, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using PRECISERR = SystemControlSpace_CFSR_PRECISERR_Values<SystemControlSpace::CFSR, 9, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using IMPRECISERR = SystemControlSpace_CFSR_IMPRECISERR_Values<SystemControlSpace::CFSR, 10, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using UNSTKERR = SystemControlSpace_CFSR_UNSTKERR_Values<SystemControlSpace::CFSR, 11, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using STKERR = SystemControlSpace_CFSR_STKERR_Values<SystemControlSpace::CFSR, 12, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using BFARVALID = SystemControlSpace_CFSR_BFARVALID_Values<SystemControlSpace::CFSR, 15, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using UNDEFINSTR = SystemControlSpace_CFSR_UNDEFINSTR_Values<SystemControlSpace::CFSR, 16, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using INVSTATE = SystemControlSpace_CFSR_INVSTATE_Values<SystemControlSpace::CFSR, 17, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using INVPC = SystemControlSpace_CFSR_INVPC_Values<SystemControlSpace::CFSR, 18, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using NOCP = SystemControlSpace_CFSR_NOCP_Values<SystemControlSpace::CFSR, 19, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using UNALIGNED = SystemControlSpace_CFSR_UNALIGNED_Values<SystemControlSpace::CFSR, 24, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using DIVBYZERO = SystemControlSpace_CFSR_DIVBYZERO_Values<SystemControlSpace::CFSR, 25, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using MLSPERR = SystemControlSpace_CFSR_MLSPERR_Values<SystemControlSpace::CFSR, 5, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using LSPERR = SystemControlSpace_CFSR_LSPERR_Values<SystemControlSpace::CFSR, 13, 1, ReadWriteMode, SystemControlSpaceCFSRBase> ;
    using FieldValues = SystemControlSpace_CFSR_LSPERR_Values<SystemControlSpace::CFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFSRPack  = Register<0xE000ED28, 32, ReadWriteMode, SystemControlSpaceCFSRBase, T...> ;

  struct SystemControlSpaceHFSRBase {} ;

  struct HFSR : public RegisterBase<0xE000ED2C, 32, ReadWriteMode>
  {
    using VECTTBL = SystemControlSpace_HFSR_VECTTBL_Values<SystemControlSpace::HFSR, 1, 1, ReadWriteMode, SystemControlSpaceHFSRBase> ;
    using FORCED = SystemControlSpace_HFSR_FORCED_Values<SystemControlSpace::HFSR, 30, 1, ReadWriteMode, SystemControlSpaceHFSRBase> ;
    using DEBUGEVT = SystemControlSpace_HFSR_DEBUGEVT_Values<SystemControlSpace::HFSR, 31, 1, ReadWriteMode, SystemControlSpaceHFSRBase> ;
    using FieldValues = SystemControlSpace_HFSR_DEBUGEVT_Values<SystemControlSpace::HFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HFSRPack  = Register<0xE000ED2C, 32, ReadWriteMode, SystemControlSpaceHFSRBase, T...> ;

  struct SystemControlSpaceDFSRBase {} ;

  struct DFSR : public RegisterBase<0xE000ED30, 32, ReadWriteMode>
  {
    using HALTED = SystemControlSpace_DFSR_HALTED_Values<SystemControlSpace::DFSR, 0, 1, ReadWriteMode, SystemControlSpaceDFSRBase> ;
    using BKPT = SystemControlSpace_DFSR_BKPT_Values<SystemControlSpace::DFSR, 1, 1, ReadWriteMode, SystemControlSpaceDFSRBase> ;
    using DWTTRAP = SystemControlSpace_DFSR_DWTTRAP_Values<SystemControlSpace::DFSR, 2, 1, ReadWriteMode, SystemControlSpaceDFSRBase> ;
    using VCATCH = SystemControlSpace_DFSR_VCATCH_Values<SystemControlSpace::DFSR, 3, 1, ReadWriteMode, SystemControlSpaceDFSRBase> ;
    using EXTERNAL = SystemControlSpace_DFSR_EXTERNAL_Values<SystemControlSpace::DFSR, 4, 1, ReadWriteMode, SystemControlSpaceDFSRBase> ;
    using FieldValues = SystemControlSpace_DFSR_EXTERNAL_Values<SystemControlSpace::DFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSRPack  = Register<0xE000ED30, 32, ReadWriteMode, SystemControlSpaceDFSRBase, T...> ;

  struct SystemControlSpaceMMFARBase {} ;

  struct MMFAR : public RegisterBase<0xE000ED34, 32, ReadWriteMode>
  {
    using ADDRESS = SystemControlSpace_MMFAR_ADDRESS_Values<SystemControlSpace::MMFAR, 0, 32, ReadWriteMode, SystemControlSpaceMMFARBase> ;
    using FieldValues = SystemControlSpace_MMFAR_ADDRESS_Values<SystemControlSpace::MMFAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMFARPack  = Register<0xE000ED34, 32, ReadWriteMode, SystemControlSpaceMMFARBase, T...> ;

  struct SystemControlSpaceBFARBase {} ;

  struct BFAR : public RegisterBase<0xE000ED38, 32, ReadWriteMode>
  {
    using ADDRESS = SystemControlSpace_BFAR_ADDRESS_Values<SystemControlSpace::BFAR, 0, 32, ReadWriteMode, SystemControlSpaceBFARBase> ;
    using FieldValues = SystemControlSpace_BFAR_ADDRESS_Values<SystemControlSpace::BFAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BFARPack  = Register<0xE000ED38, 32, ReadWriteMode, SystemControlSpaceBFARBase, T...> ;

  struct SystemControlSpaceAFSRBase {} ;

  struct AFSR : public RegisterBase<0xE000ED3C, 32, ReadWriteMode>
  {
    using IMPDEF = SystemControlSpace_AFSR_IMPDEF_Values<SystemControlSpace::AFSR, 0, 32, ReadWriteMode, SystemControlSpaceAFSRBase> ;
    using FieldValues = SystemControlSpace_AFSR_IMPDEF_Values<SystemControlSpace::AFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFSRPack  = Register<0xE000ED3C, 32, ReadWriteMode, SystemControlSpaceAFSRBase, T...> ;

  struct SystemControlSpacePFR0Base {} ;

  struct PFR0 : public RegisterBase<0xE000ED40, 32, ReadMode>
  {
    using STATE0 = SystemControlSpace_PFR0_STATE0_Values<SystemControlSpace::PFR0, 0, 4, ReadMode, SystemControlSpacePFR0Base> ;
    using STATE1 = SystemControlSpace_PFR0_STATE1_Values<SystemControlSpace::PFR0, 4, 4, ReadMode, SystemControlSpacePFR0Base> ;
    using FieldValues = SystemControlSpace_PFR0_STATE1_Values<SystemControlSpace::PFR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PFR0Pack  = Register<0xE000ED40, 32, ReadMode, SystemControlSpacePFR0Base, T...> ;

  struct SystemControlSpacePFR1Base {} ;

  struct PFR1 : public RegisterBase<0xE000ED44, 32, ReadMode>
  {
    using MICROCONTROLLER_PROGRAMMERS_MODEL = SystemControlSpace_PFR1_MICROCONTROLLER_PROGRAMMERS_MODEL_Values<SystemControlSpace::PFR1, 8, 4, ReadMode, SystemControlSpacePFR1Base> ;
    using FieldValues = SystemControlSpace_PFR1_MICROCONTROLLER_PROGRAMMERS_MODEL_Values<SystemControlSpace::PFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PFR1Pack  = Register<0xE000ED44, 32, ReadMode, SystemControlSpacePFR1Base, T...> ;

  struct SystemControlSpaceDFR0Base {} ;

  struct DFR0 : public RegisterBase<0xE000ED48, 32, ReadMode>
  {
    using MICROCONTROLLER_DEBUG_MODEL = SystemControlSpace_DFR0_MICROCONTROLLER_DEBUG_MODEL_Values<SystemControlSpace::DFR0, 20, 4, ReadMode, SystemControlSpaceDFR0Base> ;
    using FieldValues = SystemControlSpace_DFR0_MICROCONTROLLER_DEBUG_MODEL_Values<SystemControlSpace::DFR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFR0Pack  = Register<0xE000ED48, 32, ReadMode, SystemControlSpaceDFR0Base, T...> ;

  struct SystemControlSpaceAFR0Base {} ;

  struct AFR0 : public RegisterBase<0xE000ED4C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using AFR0Pack  = Register<0xE000ED4C, 32, ReadMode, SystemControlSpaceAFR0Base, T...> ;

  struct SystemControlSpaceMMFR0Base {} ;

  struct MMFR0 : public RegisterBase<0xE000ED50, 32, ReadMode>
  {
    using PMSA_SUPPORT = SystemControlSpace_MMFR0_PMSA_SUPPORT_Values<SystemControlSpace::MMFR0, 4, 4, ReadMode, SystemControlSpaceMMFR0Base> ;
    using CACHE_COHERENCE_SUPPORT = SystemControlSpace_MMFR0_CACHE_COHERENCE_SUPPORT_Values<SystemControlSpace::MMFR0, 8, 4, ReadMode, SystemControlSpaceMMFR0Base> ;
    using OUTER_NON_SHARABLE_SUPPORT = SystemControlSpace_MMFR0_OUTER_NON_SHARABLE_SUPPORT_Values<SystemControlSpace::MMFR0, 12, 4, ReadMode, SystemControlSpaceMMFR0Base> ;
    using AUXILIARY_REGISTER_SUPPORT = SystemControlSpace_MMFR0_AUXILIARY_REGISTER_SUPPORT_Values<SystemControlSpace::MMFR0, 20, 4, ReadMode, SystemControlSpaceMMFR0Base> ;
    using FieldValues = SystemControlSpace_MMFR0_AUXILIARY_REGISTER_SUPPORT_Values<SystemControlSpace::MMFR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMFR0Pack  = Register<0xE000ED50, 32, ReadMode, SystemControlSpaceMMFR0Base, T...> ;

  struct SystemControlSpaceMMFR1Base {} ;

  struct MMFR1 : public RegisterBase<0xE000ED54, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using MMFR1Pack  = Register<0xE000ED54, 32, ReadMode, SystemControlSpaceMMFR1Base, T...> ;

  struct SystemControlSpaceMMFR2Base {} ;

  struct MMFR2 : public RegisterBase<0xE000ED58, 32, ReadMode>
  {
    using WAIT_FOR_INTERRUPT_STALLING = SystemControlSpace_MMFR2_WAIT_FOR_INTERRUPT_STALLING_Values<SystemControlSpace::MMFR2, 24, 4, ReadMode, SystemControlSpaceMMFR2Base> ;
    using FieldValues = SystemControlSpace_MMFR2_WAIT_FOR_INTERRUPT_STALLING_Values<SystemControlSpace::MMFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMFR2Pack  = Register<0xE000ED58, 32, ReadMode, SystemControlSpaceMMFR2Base, T...> ;

  struct SystemControlSpaceMMFR3Base {} ;

  struct MMFR3 : public RegisterBase<0xE000ED5C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using MMFR3Pack  = Register<0xE000ED5C, 32, ReadMode, SystemControlSpaceMMFR3Base, T...> ;

  struct SystemControlSpaceISAR0Base {} ;

  struct ISAR0 : public RegisterBase<0xE000ED60, 32, ReadMode>
  {
    using BITCOUNT_INSTRS = SystemControlSpace_ISAR0_BITCOUNT_INSTRS_Values<SystemControlSpace::ISAR0, 4, 4, ReadMode, SystemControlSpaceISAR0Base> ;
    using BITFIELD_INSTRS = SystemControlSpace_ISAR0_BITFIELD_INSTRS_Values<SystemControlSpace::ISAR0, 8, 4, ReadMode, SystemControlSpaceISAR0Base> ;
    using CMPBRANCH_INSTRS = SystemControlSpace_ISAR0_CMPBRANCH_INSTRS_Values<SystemControlSpace::ISAR0, 12, 4, ReadMode, SystemControlSpaceISAR0Base> ;
    using COPROC_INSTRS = SystemControlSpace_ISAR0_COPROC_INSTRS_Values<SystemControlSpace::ISAR0, 16, 4, ReadMode, SystemControlSpaceISAR0Base> ;
    using DEBUG_INSTRS = SystemControlSpace_ISAR0_DEBUG_INSTRS_Values<SystemControlSpace::ISAR0, 20, 4, ReadMode, SystemControlSpaceISAR0Base> ;
    using DIVIDE_INSTRS = SystemControlSpace_ISAR0_DIVIDE_INSTRS_Values<SystemControlSpace::ISAR0, 24, 4, ReadMode, SystemControlSpaceISAR0Base> ;
    using FieldValues = SystemControlSpace_ISAR0_DIVIDE_INSTRS_Values<SystemControlSpace::ISAR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISAR0Pack  = Register<0xE000ED60, 32, ReadMode, SystemControlSpaceISAR0Base, T...> ;

  struct SystemControlSpaceISAR1Base {} ;

  struct ISAR1 : public RegisterBase<0xE000ED64, 32, ReadMode>
  {
    using EXTEND_INSRS = SystemControlSpace_ISAR1_EXTEND_INSRS_Values<SystemControlSpace::ISAR1, 12, 4, ReadMode, SystemControlSpaceISAR1Base> ;
    using IFTHEN_INSTRS = SystemControlSpace_ISAR1_IFTHEN_INSTRS_Values<SystemControlSpace::ISAR1, 16, 4, ReadMode, SystemControlSpaceISAR1Base> ;
    using IMMEDIATE_INSTRS = SystemControlSpace_ISAR1_IMMEDIATE_INSTRS_Values<SystemControlSpace::ISAR1, 20, 4, ReadMode, SystemControlSpaceISAR1Base> ;
    using INTERWORK_INSTRS = SystemControlSpace_ISAR1_INTERWORK_INSTRS_Values<SystemControlSpace::ISAR1, 24, 4, ReadMode, SystemControlSpaceISAR1Base> ;
    using FieldValues = SystemControlSpace_ISAR1_INTERWORK_INSTRS_Values<SystemControlSpace::ISAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISAR1Pack  = Register<0xE000ED64, 32, ReadMode, SystemControlSpaceISAR1Base, T...> ;

  struct SystemControlSpaceISAR2Base {} ;

  struct ISAR2 : public RegisterBase<0xE000ED68, 32, ReadMode>
  {
    using LOADSTORE_INSTRS = SystemControlSpace_ISAR2_LOADSTORE_INSTRS_Values<SystemControlSpace::ISAR2, 0, 4, ReadMode, SystemControlSpaceISAR2Base> ;
    using MEMHINT_INSTRS = SystemControlSpace_ISAR2_MEMHINT_INSTRS_Values<SystemControlSpace::ISAR2, 4, 4, ReadMode, SystemControlSpaceISAR2Base> ;
    using MULTIACCESSINT_INSTRS = SystemControlSpace_ISAR2_MULTIACCESSINT_INSTRS_Values<SystemControlSpace::ISAR2, 8, 4, ReadMode, SystemControlSpaceISAR2Base> ;
    using MULT_INSTRS = SystemControlSpace_ISAR2_MULT_INSTRS_Values<SystemControlSpace::ISAR2, 12, 4, ReadMode, SystemControlSpaceISAR2Base> ;
    using MULTS_INSTRS = SystemControlSpace_ISAR2_MULTS_INSTRS_Values<SystemControlSpace::ISAR2, 16, 4, ReadMode, SystemControlSpaceISAR2Base> ;
    using MULTU_INSTRS = SystemControlSpace_ISAR2_MULTU_INSTRS_Values<SystemControlSpace::ISAR2, 20, 4, ReadMode, SystemControlSpaceISAR2Base> ;
    using REVERSAL_INSTRS = SystemControlSpace_ISAR2_REVERSAL_INSTRS_Values<SystemControlSpace::ISAR2, 28, 4, ReadMode, SystemControlSpaceISAR2Base> ;
    using FieldValues = SystemControlSpace_ISAR2_REVERSAL_INSTRS_Values<SystemControlSpace::ISAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISAR2Pack  = Register<0xE000ED68, 32, ReadMode, SystemControlSpaceISAR2Base, T...> ;

  struct SystemControlSpaceISAR3Base {} ;

  struct ISAR3 : public RegisterBase<0xE000ED6C, 32, ReadMode>
  {
    using SATRUATE_INSTRS = SystemControlSpace_ISAR3_SATRUATE_INSTRS_Values<SystemControlSpace::ISAR3, 0, 4, ReadMode, SystemControlSpaceISAR3Base> ;
    using SIMD_INSTRS = SystemControlSpace_ISAR3_SIMD_INSTRS_Values<SystemControlSpace::ISAR3, 4, 4, ReadMode, SystemControlSpaceISAR3Base> ;
    using SVC_INSTRS = SystemControlSpace_ISAR3_SVC_INSTRS_Values<SystemControlSpace::ISAR3, 8, 4, ReadMode, SystemControlSpaceISAR3Base> ;
    using SYNCPRIM_INSTRS = SystemControlSpace_ISAR3_SYNCPRIM_INSTRS_Values<SystemControlSpace::ISAR3, 12, 4, ReadMode, SystemControlSpaceISAR3Base> ;
    using TABBRANCH_INSTRS = SystemControlSpace_ISAR3_TABBRANCH_INSTRS_Values<SystemControlSpace::ISAR3, 16, 4, ReadMode, SystemControlSpaceISAR3Base> ;
    using THUMBCOPY_INSTRS = SystemControlSpace_ISAR3_THUMBCOPY_INSTRS_Values<SystemControlSpace::ISAR3, 20, 4, ReadMode, SystemControlSpaceISAR3Base> ;
    using TRUENOP_INSTRS = SystemControlSpace_ISAR3_TRUENOP_INSTRS_Values<SystemControlSpace::ISAR3, 24, 4, ReadMode, SystemControlSpaceISAR3Base> ;
    using FieldValues = SystemControlSpace_ISAR3_TRUENOP_INSTRS_Values<SystemControlSpace::ISAR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISAR3Pack  = Register<0xE000ED6C, 32, ReadMode, SystemControlSpaceISAR3Base, T...> ;

  struct SystemControlSpaceISAR4Base {} ;

  struct ISAR4 : public RegisterBase<0xE000ED70, 32, ReadMode>
  {
    using UNPRIV_INSTRS = SystemControlSpace_ISAR4_UNPRIV_INSTRS_Values<SystemControlSpace::ISAR4, 0, 4, ReadMode, SystemControlSpaceISAR4Base> ;
    using WITHSHIFTS_INSTRS = SystemControlSpace_ISAR4_WITHSHIFTS_INSTRS_Values<SystemControlSpace::ISAR4, 4, 4, ReadMode, SystemControlSpaceISAR4Base> ;
    using WRITEBACK_INSTRS = SystemControlSpace_ISAR4_WRITEBACK_INSTRS_Values<SystemControlSpace::ISAR4, 8, 4, ReadMode, SystemControlSpaceISAR4Base> ;
    using BARRIER_INSTRS = SystemControlSpace_ISAR4_BARRIER_INSTRS_Values<SystemControlSpace::ISAR4, 16, 4, ReadMode, SystemControlSpaceISAR4Base> ;
    using SYNCPRIM_INSTRS_FRAC = SystemControlSpace_ISAR4_SYNCPRIM_INSTRS_FRAC_Values<SystemControlSpace::ISAR4, 20, 4, ReadMode, SystemControlSpaceISAR4Base> ;
    using PSR_M_INSTRS = SystemControlSpace_ISAR4_PSR_M_INSTRS_Values<SystemControlSpace::ISAR4, 24, 4, ReadMode, SystemControlSpaceISAR4Base> ;
    using FieldValues = SystemControlSpace_ISAR4_PSR_M_INSTRS_Values<SystemControlSpace::ISAR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISAR4Pack  = Register<0xE000ED70, 32, ReadMode, SystemControlSpaceISAR4Base, T...> ;

  struct SystemControlSpaceCPACRBase {} ;

  struct CPACR : public RegisterBase<0xE000ED88, 32, ReadWriteMode>
  {
    using CP11 = SystemControlSpace_CPACR_CP11_Values<SystemControlSpace::CPACR, 22, 2, ReadWriteMode, SystemControlSpaceCPACRBase> ;
    using CP10 = SystemControlSpace_CPACR_CP10_Values<SystemControlSpace::CPACR, 20, 2, ReadWriteMode, SystemControlSpaceCPACRBase> ;
    using FieldValues = SystemControlSpace_CPACR_CP10_Values<SystemControlSpace::CPACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPACRPack  = Register<0xE000ED88, 32, ReadWriteMode, SystemControlSpaceCPACRBase, T...> ;

} ;

#endif //#if !defined(SYSTEMCONTROLSPACEREGISTERS_HPP)
