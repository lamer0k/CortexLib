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

#include "wwdgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WWDG
{
  struct WWDGCRBase {} ;

  struct CR : public RegisterBase<0x40002C00, 32, ReadWriteMode>
  {
    using WDGA = WWDG_CR_WDGA_Values<WWDG::CR, 7, 1, ReadWriteMode, WWDGCRBase> ;
    using T = WWDG_CR_T_Values<WWDG::CR, 0, 7, ReadWriteMode, WWDGCRBase> ;
    using FieldValues = WWDG_CR_T_Values<WWDG::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40002C00, 32, ReadWriteMode, WWDGCRBase, T...> ;

  struct WWDGCFRBase {} ;

  struct CFR : public RegisterBase<0x40002C04, 32, ReadWriteMode>
  {
    using EWI = WWDG_CFR_EWI_Values<WWDG::CFR, 9, 1, ReadWriteMode, WWDGCFRBase> ;
    using WDGTB1 = WWDG_CFR_WDGTB1_Values<WWDG::CFR, 8, 1, ReadWriteMode, WWDGCFRBase> ;
    using WDGTB0 = WWDG_CFR_WDGTB0_Values<WWDG::CFR, 7, 1, ReadWriteMode, WWDGCFRBase> ;
    using W = WWDG_CFR_W_Values<WWDG::CFR, 0, 7, ReadWriteMode, WWDGCFRBase> ;
    using FieldValues = WWDG_CFR_W_Values<WWDG::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x40002C04, 32, ReadWriteMode, WWDGCFRBase, T...> ;

  struct WWDGSRBase {} ;

  struct SR : public RegisterBase<0x40002C08, 32, ReadWriteMode>
  {
    using EWIF = WWDG_SR_EWIF_Values<WWDG::SR, 0, 1, ReadWriteMode, WWDGSRBase> ;
    using FieldValues = WWDG_SR_EWIF_Values<WWDG::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40002C08, 32, ReadWriteMode, WWDGSRBase, T...> ;

} ;

#endif //#if !defined(WWDGREGISTERS_HPP)
