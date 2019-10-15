/*******************************************************************************
* Filename      : mpuregisters.hpp
*
* Details       : Memory protection unit. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(MPUREGISTERS_HPP)
#define MPUREGISTERS_HPP

#include "mpufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MPU
{
  struct MPUMPU_TYPERBase {} ;

  struct MPU_TYPER : public RegisterBase<0xE000ED90, 32, ReadMode>
  {
    using SEPARATE = MPU_MPU_TYPER_SEPARATE_Values<MPU::MPU_TYPER, 0, 1, ReadMode, MPUMPU_TYPERBase> ;
    using DREGION = MPU_MPU_TYPER_DREGION_Values<MPU::MPU_TYPER, 8, 8, ReadMode, MPUMPU_TYPERBase> ;
    using IREGION = MPU_MPU_TYPER_IREGION_Values<MPU::MPU_TYPER, 16, 8, ReadMode, MPUMPU_TYPERBase> ;
    using FieldValues = MPU_MPU_TYPER_IREGION_Values<MPU::MPU_TYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_TYPERPack  = Register<0xE000ED90, 32, ReadMode, MPUMPU_TYPERBase, T...> ;

  struct MPUMPU_CTRLBase {} ;

  struct MPU_CTRL : public RegisterBase<0xE000ED94, 32, ReadMode>
  {
    using ENABLE = MPU_MPU_CTRL_ENABLE_Values<MPU::MPU_CTRL, 0, 1, ReadMode, MPUMPU_CTRLBase> ;
    using HFNMIENA = MPU_MPU_CTRL_HFNMIENA_Values<MPU::MPU_CTRL, 1, 1, ReadMode, MPUMPU_CTRLBase> ;
    using PRIVDEFENA = MPU_MPU_CTRL_PRIVDEFENA_Values<MPU::MPU_CTRL, 2, 1, ReadMode, MPUMPU_CTRLBase> ;
    using FieldValues = MPU_MPU_CTRL_PRIVDEFENA_Values<MPU::MPU_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_CTRLPack  = Register<0xE000ED94, 32, ReadMode, MPUMPU_CTRLBase, T...> ;

  struct MPUMPU_RNRBase {} ;

  struct MPU_RNR : public RegisterBase<0xE000ED98, 32, ReadWriteMode>
  {
    using REGION = MPU_MPU_RNR_REGION_Values<MPU::MPU_RNR, 0, 8, ReadWriteMode, MPUMPU_RNRBase> ;
    using FieldValues = MPU_MPU_RNR_REGION_Values<MPU::MPU_RNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_RNRPack  = Register<0xE000ED98, 32, ReadWriteMode, MPUMPU_RNRBase, T...> ;

  struct MPUMPU_RBARBase {} ;

  struct MPU_RBAR : public RegisterBase<0xE000ED9C, 32, ReadWriteMode>
  {
    using REGION = MPU_MPU_RBAR_REGION_Values<MPU::MPU_RBAR, 0, 4, ReadWriteMode, MPUMPU_RBARBase> ;
    using VALID = MPU_MPU_RBAR_VALID_Values<MPU::MPU_RBAR, 4, 1, ReadWriteMode, MPUMPU_RBARBase> ;
    using ADDR = MPU_MPU_RBAR_ADDR_Values<MPU::MPU_RBAR, 5, 27, ReadWriteMode, MPUMPU_RBARBase> ;
    using FieldValues = MPU_MPU_RBAR_ADDR_Values<MPU::MPU_RBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_RBARPack  = Register<0xE000ED9C, 32, ReadWriteMode, MPUMPU_RBARBase, T...> ;

  struct MPUMPU_RASRBase {} ;

  struct MPU_RASR : public RegisterBase<0xE000EDA0, 32, ReadWriteMode>
  {
    using ENABLE = MPU_MPU_RASR_ENABLE_Values<MPU::MPU_RASR, 0, 1, ReadWriteMode, MPUMPU_RASRBase> ;
    using SIZE = MPU_MPU_RASR_SIZE_Values<MPU::MPU_RASR, 1, 5, ReadWriteMode, MPUMPU_RASRBase> ;
    using SRD = MPU_MPU_RASR_SRD_Values<MPU::MPU_RASR, 8, 8, ReadWriteMode, MPUMPU_RASRBase> ;
    using B = MPU_MPU_RASR_B_Values<MPU::MPU_RASR, 16, 1, ReadWriteMode, MPUMPU_RASRBase> ;
    using C = MPU_MPU_RASR_C_Values<MPU::MPU_RASR, 17, 1, ReadWriteMode, MPUMPU_RASRBase> ;
    using S = MPU_MPU_RASR_S_Values<MPU::MPU_RASR, 18, 1, ReadWriteMode, MPUMPU_RASRBase> ;
    using TEX = MPU_MPU_RASR_TEX_Values<MPU::MPU_RASR, 19, 3, ReadWriteMode, MPUMPU_RASRBase> ;
    using AP = MPU_MPU_RASR_AP_Values<MPU::MPU_RASR, 24, 3, ReadWriteMode, MPUMPU_RASRBase> ;
    using XN = MPU_MPU_RASR_XN_Values<MPU::MPU_RASR, 28, 1, ReadWriteMode, MPUMPU_RASRBase> ;
    using FieldValues = MPU_MPU_RASR_XN_Values<MPU::MPU_RASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPU_RASRPack  = Register<0xE000EDA0, 32, ReadWriteMode, MPUMPU_RASRBase, T...> ;

} ;

#endif //#if !defined(MPUREGISTERS_HPP)
