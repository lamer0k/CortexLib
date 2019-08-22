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

#include "fpubitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Fpu
{
  struct Fpccr : public RegisterBase<0xE000EF34, 32, ReadWriteMode>
  {
    using Lspact = FpuFpccrLspactValues<Fpu::Fpccr, 0, 1, ReadWriteMode, FpuFpccrLspactValuesBase> ;
    using User = FpuFpccrUserValues<Fpu::Fpccr, 1, 1, ReadWriteMode, FpuFpccrUserValuesBase> ;
    using Thread = FpuFpccrThreadValues<Fpu::Fpccr, 3, 1, ReadWriteMode, FpuFpccrThreadValuesBase> ;
    using Hfrdy = FpuFpccrHfrdyValues<Fpu::Fpccr, 4, 1, ReadWriteMode, FpuFpccrHfrdyValuesBase> ;
    using Mmrdy = FpuFpccrMmrdyValues<Fpu::Fpccr, 5, 1, ReadWriteMode, FpuFpccrMmrdyValuesBase> ;
    using Bfrdy = FpuFpccrBfrdyValues<Fpu::Fpccr, 6, 1, ReadWriteMode, FpuFpccrBfrdyValuesBase> ;
    using Monrdy = FpuFpccrMonrdyValues<Fpu::Fpccr, 8, 1, ReadWriteMode, FpuFpccrMonrdyValuesBase> ;
    using Lspen = FpuFpccrLspenValues<Fpu::Fpccr, 30, 1, ReadWriteMode, FpuFpccrLspenValuesBase> ;
    using Aspen = FpuFpccrAspenValues<Fpu::Fpccr, 31, 1, ReadWriteMode, FpuFpccrAspenValuesBase> ;
  } ;

  template<typename... T> 
  using FpccrPack  = Register<0xE000EF34, 32, ReadWriteMode, FpuFpccrLspactValuesBase, T...> ;

  struct Fpcar : public RegisterBase<0xE000EF38, 32, ReadWriteMode>
  {
    using Address = ReadWriteMode<Fpu::Fpcar, 3, 29> ;
  } ;

  template<typename... T> 
  using FpcarPack  = Register<0xE000EF38, 32, ReadWriteMode, FpuFpcarAddressValuesBase, T...> ;

  struct Fpscr : public RegisterBase<0xE000EF3C, 32, ReadWriteMode>
  {
    using Ioc = FpuFpscrIocValues<Fpu::Fpscr, 0, 1, ReadWriteMode, FpuFpscrIocValuesBase> ;
    using Dzc = FpuFpscrDzcValues<Fpu::Fpscr, 1, 1, ReadWriteMode, FpuFpscrDzcValuesBase> ;
    using Ofc = FpuFpscrOfcValues<Fpu::Fpscr, 2, 1, ReadWriteMode, FpuFpscrOfcValuesBase> ;
    using Ufc = FpuFpscrUfcValues<Fpu::Fpscr, 3, 1, ReadWriteMode, FpuFpscrUfcValuesBase> ;
    using Ixc = FpuFpscrIxcValues<Fpu::Fpscr, 4, 1, ReadWriteMode, FpuFpscrIxcValuesBase> ;
    using Idc = FpuFpscrIdcValues<Fpu::Fpscr, 7, 1, ReadWriteMode, FpuFpscrIdcValuesBase> ;
    using Rmode = FpuFpscrRmodeValues<Fpu::Fpscr, 22, 2, ReadWriteMode, FpuFpscrRmodeValuesBase> ;
    using Fz = FpuFpscrFzValues<Fpu::Fpscr, 24, 1, ReadWriteMode, FpuFpscrFzValuesBase> ;
    using Dn = FpuFpscrDnValues<Fpu::Fpscr, 25, 1, ReadWriteMode, FpuFpscrDnValuesBase> ;
    using Ahp = FpuFpscrAhpValues<Fpu::Fpscr, 26, 1, ReadWriteMode, FpuFpscrAhpValuesBase> ;
    using V = FpuFpscrVValues<Fpu::Fpscr, 28, 1, ReadWriteMode, FpuFpscrVValuesBase> ;
    using C = FpuFpscrCValues<Fpu::Fpscr, 29, 1, ReadWriteMode, FpuFpscrCValuesBase> ;
    using Z = FpuFpscrZValues<Fpu::Fpscr, 30, 1, ReadWriteMode, FpuFpscrZValuesBase> ;
    using N = FpuFpscrNValues<Fpu::Fpscr, 31, 1, ReadWriteMode, FpuFpscrNValuesBase> ;
  } ;

  template<typename... T> 
  using FpscrPack  = Register<0xE000EF3C, 32, ReadWriteMode, FpuFpscrIocValuesBase, T...> ;

} ;

#endif //#if !defined(FPUREGISTERS_HPP)
