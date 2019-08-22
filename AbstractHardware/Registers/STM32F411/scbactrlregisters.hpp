/*******************************************************************************
* Filename      : scbactrlregisters.hpp
*
* Details       : System control block ACTLR. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SCBACTRLREGISTERS_HPP)
#define SCBACTRLREGISTERS_HPP

#include "scbactrlbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ScbActrl
{
  struct Actrl : public RegisterBase<0xE000E008, 32, ReadWriteMode>
  {
    using Dismcycint = ScbActrlActrlDismcycintValues<ScbActrl::Actrl, 0, 1, ReadWriteMode, ScbActrlActrlDismcycintValuesBase> ;
    using Disdefwbuf = ScbActrlActrlDisdefwbufValues<ScbActrl::Actrl, 1, 1, ReadWriteMode, ScbActrlActrlDisdefwbufValuesBase> ;
    using Disfold = ScbActrlActrlDisfoldValues<ScbActrl::Actrl, 2, 1, ReadWriteMode, ScbActrlActrlDisfoldValuesBase> ;
    using Disfpca = ScbActrlActrlDisfpcaValues<ScbActrl::Actrl, 8, 1, ReadWriteMode, ScbActrlActrlDisfpcaValuesBase> ;
    using Disoofp = ScbActrlActrlDisoofpValues<ScbActrl::Actrl, 9, 1, ReadWriteMode, ScbActrlActrlDisoofpValuesBase> ;
  } ;

  template<typename... T> 
  using ActrlPack  = Register<0xE000E008, 32, ReadWriteMode, ScbActrlActrlDismcycintValuesBase, T...> ;

} ;

#endif //#if !defined(SCBACTRLREGISTERS_HPP)
