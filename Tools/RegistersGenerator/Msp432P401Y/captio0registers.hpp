/*******************************************************************************
* Filename      : captio0registers.hpp
*
* Details       : CAPTIO0. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(CAPTIO0REGISTERS_HPP)
#define CAPTIO0REGISTERS_HPP

#include "captio0bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CAPTIO0
{
  struct CAPTIO0CAPTIOxCTLBase {} ;

  struct CAPTIOxCTL : public RegisterBase<0x4000540E, 16, ReadWriteMode>
  {
    using CAPTIOPISELx = CAPTIO_CAPTIOxCTL_CAPTIOPISELx_Values<CAPTIO0::CAPTIOxCTL, 1, 3, ReadWriteMode, CAPTIO0CAPTIOxCTLBase> ;
    using CAPTIOPOSELx = CAPTIO_CAPTIOxCTL_CAPTIOPOSELx_Values<CAPTIO0::CAPTIOxCTL, 4, 4, ReadWriteMode, CAPTIO0CAPTIOxCTLBase> ;
    using CAPTIOEN = CAPTIO_CAPTIOxCTL_CAPTIOEN_Values<CAPTIO0::CAPTIOxCTL, 8, 1, ReadWriteMode, CAPTIO0CAPTIOxCTLBase> ;
    using CAPTIOSTATE = CAPTIO_CAPTIOxCTL_CAPTIOSTATE_Values<CAPTIO0::CAPTIOxCTL, 9, 1, ReadMode, CAPTIO0CAPTIOxCTLBase> ;
  } ;

  template<typename... T> 
  using CAPTIOxCTLPack  = Register<0x4000540E, 16, ReadWriteMode, CAPTIO0CAPTIOxCTLBase, T...> ;

} ;

#endif //#if !defined(CAPTIO0REGISTERS_HPP)
