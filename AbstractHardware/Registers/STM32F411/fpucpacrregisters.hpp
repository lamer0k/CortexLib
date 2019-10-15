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

#include "fpucpacrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FPU_CPACR
{
  struct FPU_CPACRCPACRBase {} ;

  struct CPACR : public RegisterBase<0xE000ED88, 32, ReadWriteMode>
  {
    using CP = FPU_CPACR_CPACR_CP_Values<FPU_CPACR::CPACR, 20, 4, ReadWriteMode, FPU_CPACRCPACRBase> ;
    using FieldValues = FPU_CPACR_CPACR_CP_Values<FPU_CPACR::CPACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPACRPack  = Register<0xE000ED88, 32, ReadWriteMode, FPU_CPACRCPACRBase, T...> ;

} ;

#endif //#if !defined(FPUCPACRREGISTERS_HPP)
