/*******************************************************************************
* Filename      : fpuregisters.hpp
*
* Details       : Floting point unit. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(FPUREGISTERS_HPP)
#define FPUREGISTERS_HPP

#include "fpufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FPU
{
  struct FPUFPCCRBase {} ;

  struct FPCCR : public RegisterBase<0xE000EF34, 32, ReadWriteMode>
  {
    using LSPACT = FPU_FPCCR_LSPACT_Values<FPU::FPCCR, 0, 1, ReadWriteMode, FPUFPCCRBase> ;
    using USER = FPU_FPCCR_USER_Values<FPU::FPCCR, 1, 1, ReadWriteMode, FPUFPCCRBase> ;
    using THREAD = FPU_FPCCR_THREAD_Values<FPU::FPCCR, 3, 1, ReadWriteMode, FPUFPCCRBase> ;
    using HFRDY = FPU_FPCCR_HFRDY_Values<FPU::FPCCR, 4, 1, ReadWriteMode, FPUFPCCRBase> ;
    using MMRDY = FPU_FPCCR_MMRDY_Values<FPU::FPCCR, 5, 1, ReadWriteMode, FPUFPCCRBase> ;
    using BFRDY = FPU_FPCCR_BFRDY_Values<FPU::FPCCR, 6, 1, ReadWriteMode, FPUFPCCRBase> ;
    using MONRDY = FPU_FPCCR_MONRDY_Values<FPU::FPCCR, 8, 1, ReadWriteMode, FPUFPCCRBase> ;
    using LSPEN = FPU_FPCCR_LSPEN_Values<FPU::FPCCR, 30, 1, ReadWriteMode, FPUFPCCRBase> ;
    using ASPEN = FPU_FPCCR_ASPEN_Values<FPU::FPCCR, 31, 1, ReadWriteMode, FPUFPCCRBase> ;
    using FieldValues = FPU_FPCCR_ASPEN_Values<FPU::FPCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FPCCRPack  = Register<0xE000EF34, 32, ReadWriteMode, FPUFPCCRBase, T...> ;

  struct FPUFPCARBase {} ;

  struct FPCAR : public RegisterBase<0xE000EF38, 32, ReadWriteMode>
  {
    using ADDRESS = FPU_FPCAR_ADDRESS_Values<FPU::FPCAR, 3, 29, ReadWriteMode, FPUFPCARBase> ;
    using FieldValues = FPU_FPCAR_ADDRESS_Values<FPU::FPCAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FPCARPack  = Register<0xE000EF38, 32, ReadWriteMode, FPUFPCARBase, T...> ;

  struct FPUFPSCRBase {} ;

  struct FPSCR : public RegisterBase<0xE000EF3C, 32, ReadWriteMode>
  {
    using IOC = FPU_FPSCR_IOC_Values<FPU::FPSCR, 0, 1, ReadWriteMode, FPUFPSCRBase> ;
    using DZC = FPU_FPSCR_DZC_Values<FPU::FPSCR, 1, 1, ReadWriteMode, FPUFPSCRBase> ;
    using OFC = FPU_FPSCR_OFC_Values<FPU::FPSCR, 2, 1, ReadWriteMode, FPUFPSCRBase> ;
    using UFC = FPU_FPSCR_UFC_Values<FPU::FPSCR, 3, 1, ReadWriteMode, FPUFPSCRBase> ;
    using IXC = FPU_FPSCR_IXC_Values<FPU::FPSCR, 4, 1, ReadWriteMode, FPUFPSCRBase> ;
    using IDC = FPU_FPSCR_IDC_Values<FPU::FPSCR, 7, 1, ReadWriteMode, FPUFPSCRBase> ;
    using RMode = FPU_FPSCR_RMode_Values<FPU::FPSCR, 22, 2, ReadWriteMode, FPUFPSCRBase> ;
    using FZ = FPU_FPSCR_FZ_Values<FPU::FPSCR, 24, 1, ReadWriteMode, FPUFPSCRBase> ;
    using DN = FPU_FPSCR_DN_Values<FPU::FPSCR, 25, 1, ReadWriteMode, FPUFPSCRBase> ;
    using AHP = FPU_FPSCR_AHP_Values<FPU::FPSCR, 26, 1, ReadWriteMode, FPUFPSCRBase> ;
    using V = FPU_FPSCR_V_Values<FPU::FPSCR, 28, 1, ReadWriteMode, FPUFPSCRBase> ;
    using C = FPU_FPSCR_C_Values<FPU::FPSCR, 29, 1, ReadWriteMode, FPUFPSCRBase> ;
    using Z = FPU_FPSCR_Z_Values<FPU::FPSCR, 30, 1, ReadWriteMode, FPUFPSCRBase> ;
    using N = FPU_FPSCR_N_Values<FPU::FPSCR, 31, 1, ReadWriteMode, FPUFPSCRBase> ;
    using FieldValues = FPU_FPSCR_N_Values<FPU::FPSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FPSCRPack  = Register<0xE000EF3C, 32, ReadWriteMode, FPUFPSCRBase, T...> ;

} ;

#endif //#if !defined(FPUREGISTERS_HPP)
