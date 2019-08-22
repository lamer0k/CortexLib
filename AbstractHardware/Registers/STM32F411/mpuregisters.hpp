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

#include "mpubitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Mpu
{
  struct MpuTyper : public RegisterBase<0xE000ED90, 32, ReadMode>
  {
    using Separate = MpuMpuTyperSeparateValues<Mpu::MpuTyper, 0, 1, ReadMode, MpuMpuTyperSeparateValuesBase> ;
    using Dregion = ReadMode<Mpu::MpuTyper, 8, 8> ;
    using Iregion = ReadMode<Mpu::MpuTyper, 16, 8> ;
  } ;

  template<typename... T> 
  using MpuTyperPack  = Register<0xE000ED90, 32, ReadMode, MpuMpuTyperSeparateValuesBase, T...> ;

  struct MpuCtrl : public RegisterBase<0xE000ED94, 32, ReadMode>
  {
    using Enable = MpuMpuCtrlEnableValues<Mpu::MpuCtrl, 0, 1, ReadMode, MpuMpuCtrlEnableValuesBase> ;
    using Hfnmiena = MpuMpuCtrlHfnmienaValues<Mpu::MpuCtrl, 1, 1, ReadMode, MpuMpuCtrlHfnmienaValuesBase> ;
    using Privdefena = MpuMpuCtrlPrivdefenaValues<Mpu::MpuCtrl, 2, 1, ReadMode, MpuMpuCtrlPrivdefenaValuesBase> ;
  } ;

  template<typename... T> 
  using MpuCtrlPack  = Register<0xE000ED94, 32, ReadMode, MpuMpuCtrlEnableValuesBase, T...> ;

  struct MpuRnr : public RegisterBase<0xE000ED98, 32, ReadWriteMode>
  {
    using Region = ReadWriteMode<Mpu::MpuRnr, 0, 8> ;
  } ;

  template<typename... T> 
  using MpuRnrPack  = Register<0xE000ED98, 32, ReadWriteMode, MpuMpuRnrRegionValuesBase, T...> ;

  struct MpuRbar : public RegisterBase<0xE000ED9C, 32, ReadWriteMode>
  {
    using Region = MpuMpuRbarRegionValues<Mpu::MpuRbar, 0, 4, ReadWriteMode, MpuMpuRbarRegionValuesBase> ;
    using Valid = MpuMpuRbarValidValues<Mpu::MpuRbar, 4, 1, ReadWriteMode, MpuMpuRbarValidValuesBase> ;
    using Addr = ReadWriteMode<Mpu::MpuRbar, 5, 27> ;
  } ;

  template<typename... T> 
  using MpuRbarPack  = Register<0xE000ED9C, 32, ReadWriteMode, MpuMpuRbarRegionValuesBase, T...> ;

  struct MpuRasr : public RegisterBase<0xE000EDA0, 32, ReadWriteMode>
  {
    using Enable = MpuMpuRasrEnableValues<Mpu::MpuRasr, 0, 1, ReadWriteMode, MpuMpuRasrEnableValuesBase> ;
    using Size = MpuMpuRasrSizeValues<Mpu::MpuRasr, 1, 5, ReadWriteMode, MpuMpuRasrSizeValuesBase> ;
    using Srd = ReadWriteMode<Mpu::MpuRasr, 8, 8> ;
    using B = MpuMpuRasrBValues<Mpu::MpuRasr, 16, 1, ReadWriteMode, MpuMpuRasrBValuesBase> ;
    using C = MpuMpuRasrCValues<Mpu::MpuRasr, 17, 1, ReadWriteMode, MpuMpuRasrCValuesBase> ;
    using S = MpuMpuRasrSValues<Mpu::MpuRasr, 18, 1, ReadWriteMode, MpuMpuRasrSValuesBase> ;
    using Tex = MpuMpuRasrTexValues<Mpu::MpuRasr, 19, 3, ReadWriteMode, MpuMpuRasrTexValuesBase> ;
    using Ap = MpuMpuRasrApValues<Mpu::MpuRasr, 24, 3, ReadWriteMode, MpuMpuRasrApValuesBase> ;
    using Xn = MpuMpuRasrXnValues<Mpu::MpuRasr, 28, 1, ReadWriteMode, MpuMpuRasrXnValuesBase> ;
  } ;

  template<typename... T> 
  using MpuRasrPack  = Register<0xE000EDA0, 32, ReadWriteMode, MpuMpuRasrEnableValuesBase, T...> ;

} ;

#endif //#if !defined(MPUREGISTERS_HPP)
