/*******************************************************************************
* Filename      : wwdgtregisters.hpp
*
* Details       : Window watchdog timer. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(WWDGTREGISTERS_HPP)
#define WWDGTREGISTERS_HPP

#include "wwdgtfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WWDGT
{
  struct WWDGTCTLBase {} ;

  struct CTL : public RegisterBase<0x40002C00, 32, ReadWriteMode>
  {
    using WDGTEN = WWDGT_CTL_WDGTEN_Values<WWDGT::CTL, 7, 1, ReadWriteMode, WWDGTCTLBase> ;
    using CNT = WWDGT_CTL_CNT_Values<WWDGT::CTL, 0, 7, ReadWriteMode, WWDGTCTLBase> ;
    using FieldValues = WWDGT_CTL_CNT_Values<WWDGT::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40002C00, 32, ReadWriteMode, WWDGTCTLBase, T...> ;

  struct WWDGTCFGBase {} ;

  struct CFG : public RegisterBase<0x40002C04, 32, ReadWriteMode>
  {
    using EWIE = WWDGT_CFG_EWIE_Values<WWDGT::CFG, 9, 1, ReadWriteMode, WWDGTCFGBase> ;
    using PSC = WWDGT_CFG_PSC_Values<WWDGT::CFG, 7, 2, ReadWriteMode, WWDGTCFGBase> ;
    using WIN = WWDGT_CFG_WIN_Values<WWDGT::CFG, 0, 7, ReadWriteMode, WWDGTCFGBase> ;
    using FieldValues = WWDGT_CFG_WIN_Values<WWDGT::CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGPack  = Register<0x40002C04, 32, ReadWriteMode, WWDGTCFGBase, T...> ;

  struct WWDGTSTATBase {} ;

  struct STAT : public RegisterBase<0x40002C08, 32, ReadWriteMode>
  {
    using EWIF = WWDGT_STAT_EWIF_Values<WWDGT::STAT, 0, 1, ReadWriteMode, WWDGTSTATBase> ;
    using FieldValues = WWDGT_STAT_EWIF_Values<WWDGT::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40002C08, 32, ReadWriteMode, WWDGTSTATBase, T...> ;

} ;

#endif //#if !defined(WWDGTREGISTERS_HPP)
