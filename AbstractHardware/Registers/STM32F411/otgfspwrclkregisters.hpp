/*******************************************************************************
* Filename      : otgfspwrclkregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSPWRCLKREGISTERS_HPP)
#define OTGFSPWRCLKREGISTERS_HPP

#include "otgfspwrclkbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OtgFsPwrclk
{
  struct FsPcgcctl : public RegisterBase<0x50000E00, 32, ReadWriteMode>
  {
    using Stppclk = OtgFsPwrclkFsPcgcctlStppclkValues<OtgFsPwrclk::FsPcgcctl, 0, 1, ReadWriteMode, OtgFsPwrclkFsPcgcctlStppclkValuesBase> ;
    using Gatehclk = OtgFsPwrclkFsPcgcctlGatehclkValues<OtgFsPwrclk::FsPcgcctl, 1, 1, ReadWriteMode, OtgFsPwrclkFsPcgcctlGatehclkValuesBase> ;
    using Physusp = OtgFsPwrclkFsPcgcctlPhysuspValues<OtgFsPwrclk::FsPcgcctl, 4, 1, ReadWriteMode, OtgFsPwrclkFsPcgcctlPhysuspValuesBase> ;
  } ;

  template<typename... T> 
  using FsPcgcctlPack  = Register<0x50000E00, 32, ReadWriteMode, OtgFsPwrclkFsPcgcctlStppclkValuesBase, T...> ;

} ;

#endif //#if !defined(OTGFSPWRCLKREGISTERS_HPP)
