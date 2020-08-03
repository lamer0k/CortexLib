/*******************************************************************************
* Filename      : usbfspwrclkregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USBFSPWRCLKREGISTERS_HPP)
#define USBFSPWRCLKREGISTERS_HPP

#include "usbfspwrclkfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USBFS_PWRCLK
{
  struct USBFS_PWRCLKPWRCLKCTLBase {} ;

  struct PWRCLKCTL : public RegisterBase<0x50000E00, 32, ReadWriteMode>
  {
    using SUCLK = USBFS_PWRCLK_PWRCLKCTL_SUCLK_Values<USBFS_PWRCLK::PWRCLKCTL, 0, 1, ReadWriteMode, USBFS_PWRCLKPWRCLKCTLBase> ;
    using SHCLK = USBFS_PWRCLK_PWRCLKCTL_SHCLK_Values<USBFS_PWRCLK::PWRCLKCTL, 1, 1, ReadWriteMode, USBFS_PWRCLKPWRCLKCTLBase> ;
    using FieldValues = USBFS_PWRCLK_PWRCLKCTL_SHCLK_Values<USBFS_PWRCLK::PWRCLKCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRCLKCTLPack  = Register<0x50000E00, 32, ReadWriteMode, USBFS_PWRCLKPWRCLKCTLBase, T...> ;

} ;

#endif //#if !defined(USBFSPWRCLKREGISTERS_HPP)
