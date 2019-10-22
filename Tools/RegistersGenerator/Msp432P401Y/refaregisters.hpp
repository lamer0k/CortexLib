/*******************************************************************************
* Filename      : refaregisters.hpp
*
* Details       : REF_A. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(REFAREGISTERS_HPP)
#define REFAREGISTERS_HPP

#include "refabitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct REF_A
{
  struct REF_AREFCTL0Base {} ;

  struct REFCTL0 : public RegisterBase<0x40003000, 16, ReadWriteMode>
  {
    using REFON = REF_A_REFCTL_REFON_Values<REF_A::REFCTL0, 0, 1, ReadWriteMode, REF_AREFCTL0Base> ;
    using REFOUT = REF_A_REFCTL_REFOUT_Values<REF_A::REFCTL0, 1, 1, ReadWriteMode, REF_AREFCTL0Base> ;
    using REFTCOFF = REF_A_REFCTL_REFTCOFF_Values<REF_A::REFCTL0, 3, 1, ReadWriteMode, REF_AREFCTL0Base> ;
    using REFVSEL = REF_A_REFCTL_REFVSEL_Values<REF_A::REFCTL0, 4, 2, ReadWriteMode, REF_AREFCTL0Base> ;
    using REFGENOT = REF_A_REFCTL_REFGENOT_Values<REF_A::REFCTL0, 6, 1, ReadWriteMode, REF_AREFCTL0Base> ;
    using REFBGOT = REF_A_REFCTL_REFBGOT_Values<REF_A::REFCTL0, 7, 1, ReadWriteMode, REF_AREFCTL0Base> ;
    using REFGENACT = REF_A_REFCTL_REFGENACT_Values<REF_A::REFCTL0, 8, 1, ReadMode, REF_AREFCTL0Base> ;
    using REFBGACT = REF_A_REFCTL_REFBGACT_Values<REF_A::REFCTL0, 9, 1, ReadMode, REF_AREFCTL0Base> ;
    using REFGENBUSY = REF_A_REFCTL_REFGENBUSY_Values<REF_A::REFCTL0, 10, 1, ReadMode, REF_AREFCTL0Base> ;
    using BGMODE = REF_A_REFCTL_BGMODE_Values<REF_A::REFCTL0, 11, 1, ReadMode, REF_AREFCTL0Base> ;
    using REFGENRDY = REF_A_REFCTL_REFGENRDY_Values<REF_A::REFCTL0, 12, 1, ReadMode, REF_AREFCTL0Base> ;
    using REFBGRDY = REF_A_REFCTL_REFBGRDY_Values<REF_A::REFCTL0, 13, 1, ReadMode, REF_AREFCTL0Base> ;
  } ;

  template<typename... T> 
  using REFCTL0Pack  = Register<0x40003000, 16, ReadWriteMode, REF_AREFCTL0Base, T...> ;

} ;

#endif //#if !defined(REFAREGISTERS_HPP)
