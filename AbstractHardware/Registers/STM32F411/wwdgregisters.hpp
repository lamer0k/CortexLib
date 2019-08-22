/*******************************************************************************
* Filename      : wwdgregisters.hpp
*
* Details       : Window watchdog. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(WWDGREGISTERS_HPP)
#define WWDGREGISTERS_HPP

#include "wwdgbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Wwdg
{
  struct Cr : public RegisterBase<0x40002C00, 32, ReadWriteMode>
  {
    using Wdga = WwdgCrWdgaValues<Wwdg::Cr, 7, 1, ReadWriteMode, WwdgCrWdgaValuesBase> ;
    using T = ReadWriteMode<Wwdg::Cr, 0, 7> ;
  } ;

  template<typename... T> 
  using CrPack  = Register<0x40002C00, 32, ReadWriteMode, WwdgCrWdgaValuesBase, T...> ;

  struct Cfr : public RegisterBase<0x40002C04, 32, ReadWriteMode>
  {
    using Ewi = WwdgCfrEwiValues<Wwdg::Cfr, 9, 1, ReadWriteMode, WwdgCfrEwiValuesBase> ;
    using Wdgtb1 = WwdgCfrWdgtbValues<Wwdg::Cfr, 8, 1, ReadWriteMode, WwdgCfrWdgtbValuesBase> ;
    using Wdgtb0 = WwdgCfrWdgtbValues<Wwdg::Cfr, 7, 1, ReadWriteMode, WwdgCfrWdgtbValuesBase> ;
    using W = ReadWriteMode<Wwdg::Cfr, 0, 7> ;
  } ;

  template<typename... T> 
  using CfrPack  = Register<0x40002C04, 32, ReadWriteMode, WwdgCfrEwiValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40002C08, 32, ReadWriteMode>
  {
    using Ewif = WwdgSrEwifValues<Wwdg::Sr, 0, 1, ReadWriteMode, WwdgSrEwifValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40002C08, 32, ReadWriteMode, WwdgSrEwifValuesBase, T...> ;

} ;

#endif //#if !defined(WWDGREGISTERS_HPP)
