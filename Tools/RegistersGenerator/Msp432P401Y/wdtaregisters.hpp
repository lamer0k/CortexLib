/*******************************************************************************
* Filename      : wdtaregisters.hpp
*
* Details       : WDT_A. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(WDTAREGISTERS_HPP)
#define WDTAREGISTERS_HPP

#include "wdtabitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WDT_A
{
  struct WDT_AWDTCTLBase {} ;

  struct WDTCTL : public RegisterBase<0x4000480C, 16, ReadWriteMode>
  {
    using WDTIS = WDT_A_WDTCTL_WDTIS_Values<WDT_A::WDTCTL, 0, 3, ReadWriteMode, WDT_AWDTCTLBase> ;
    using WDTCNTCL = WDT_A_WDTCTL_WDTCNTCL_Values<WDT_A::WDTCTL, 3, 1, WriteMode, WDT_AWDTCTLBase> ;
    using WDTTMSEL = WDT_A_WDTCTL_WDTTMSEL_Values<WDT_A::WDTCTL, 4, 1, ReadWriteMode, WDT_AWDTCTLBase> ;
    using WDTSSEL = WDT_A_WDTCTL_WDTSSEL_Values<WDT_A::WDTCTL, 5, 2, ReadWriteMode, WDT_AWDTCTLBase> ;
    using WDTHOLD = WDT_A_WDTCTL_WDTHOLD_Values<WDT_A::WDTCTL, 7, 1, ReadWriteMode, WDT_AWDTCTLBase> ;
    using WDTPW = WDT_A_WDTCTL_WDTPW_Values<WDT_A::WDTCTL, 8, 8, ReadWriteMode, WDT_AWDTCTLBase> ;
  } ;

  template<typename... T> 
  using WDTCTLPack  = Register<0x4000480C, 16, ReadWriteMode, WDT_AWDTCTLBase, T...> ;

} ;

#endif //#if !defined(WDTAREGISTERS_HPP)
