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

#include "nvicstirfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct NVIC_STIR
{
  struct NVIC_STIRSTIRBase {} ;

  struct STIR : public RegisterBase<0xE000EF00, 32, ReadWriteMode>
  {
    using INTID = NVIC_STIR_STIR_INTID_Values<NVIC_STIR::STIR, 0, 9, ReadWriteMode, NVIC_STIRSTIRBase> ;
    using FieldValues = NVIC_STIR_STIR_INTID_Values<NVIC_STIR::STIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STIRPack  = Register<0xE000EF00, 32, ReadWriteMode, NVIC_STIRSTIRBase, T...> ;

} ;

#endif //#if !defined(NVICSTIRREGISTERS_HPP)
