/*******************************************************************************
* Filename      : nvicstirregisters.hpp
*
* Details       : Nested vectored interrupt controller. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(NVICSTIRREGISTERS_HPP)
#define NVICSTIRREGISTERS_HPP

#include "nvicstirbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct NvicStir
{
  struct Stir : public RegisterBase<0xE000EF00, 32, ReadWriteMode>
  {
    using Intid = ReadWriteMode<NvicStir::Stir, 0, 9> ;
  } ;

  template<typename... T> 
  using StirPack  = Register<0xE000EF00, 32, ReadWriteMode, NvicStirStirIntidValuesBase, T...> ;

} ;

#endif //#if !defined(NVICSTIRREGISTERS_HPP)
