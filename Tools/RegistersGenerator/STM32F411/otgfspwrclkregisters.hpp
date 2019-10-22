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

#include "otgfspwrclkfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OTG_FS_PWRCLK
{
  struct OTG_FS_PWRCLKFS_PCGCCTLBase {} ;

  struct FS_PCGCCTL : public RegisterBase<0x50000E00, 32, ReadWriteMode>
  {
    using STPPCLK = OTG_FS_PWRCLK_FS_PCGCCTL_STPPCLK_Values<OTG_FS_PWRCLK::FS_PCGCCTL, 0, 1, ReadWriteMode, OTG_FS_PWRCLKFS_PCGCCTLBase> ;
    using GATEHCLK = OTG_FS_PWRCLK_FS_PCGCCTL_GATEHCLK_Values<OTG_FS_PWRCLK::FS_PCGCCTL, 1, 1, ReadWriteMode, OTG_FS_PWRCLKFS_PCGCCTLBase> ;
    using PHYSUSP = OTG_FS_PWRCLK_FS_PCGCCTL_PHYSUSP_Values<OTG_FS_PWRCLK::FS_PCGCCTL, 4, 1, ReadWriteMode, OTG_FS_PWRCLKFS_PCGCCTLBase> ;
    using FieldValues = OTG_FS_PWRCLK_FS_PCGCCTL_PHYSUSP_Values<OTG_FS_PWRCLK::FS_PCGCCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_PCGCCTLPack  = Register<0x50000E00, 32, ReadWriteMode, OTG_FS_PWRCLKFS_PCGCCTLBase, T...> ;

} ;

#endif //#if !defined(OTGFSPWRCLKREGISTERS_HPP)
