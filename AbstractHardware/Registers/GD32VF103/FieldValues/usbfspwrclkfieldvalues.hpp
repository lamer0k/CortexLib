/*******************************************************************************
* Filename      : usbfspwrclkfieldvalues.hpp
*
* Details       : Enumerations related with USBFS_PWRCLK peripheral. This header
*                 file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USBFSPWRCLKENUMS_HPP)
#define USBFSPWRCLKENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_PWRCLK_PWRCLKCTL_SUCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_PWRCLK_PWRCLKCTL_SUCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_PWRCLK_PWRCLKCTL_SUCLK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_PWRCLK_PWRCLKCTL_SHCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_PWRCLK_PWRCLKCTL_SHCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_PWRCLK_PWRCLKCTL_SHCLK_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(USBFSPWRCLKENUMS_HPP)
