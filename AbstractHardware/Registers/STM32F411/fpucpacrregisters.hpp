/*******************************************************************************
* Filename      : fpucpacrregisters.hpp
*
* Details       : Floating point unit CPACR. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(FPUCPACRREGISTERS_HPP)
#define FPUCPACRREGISTERS_HPP

#include "fpucpacrbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FpuCpacr
{
  struct Cpacr : public RegisterBase<0xE000ED88, 32, ReadWriteMode>
  {
    using Cp = FpuCpacrCpacrCpValues<FpuCpacr::Cpacr, 20, 4, ReadWriteMode, FpuCpacrCpacrCpValuesBase> ;
  } ;

  template<typename... T> 
  using CpacrPack  = Register<0xE000ED88, 32, ReadWriteMode, FpuCpacrCpacrCpValuesBase, T...> ;

} ;

#endif //#if !defined(FPUCPACRREGISTERS_HPP)
