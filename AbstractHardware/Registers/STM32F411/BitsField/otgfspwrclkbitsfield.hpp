/*******************************************************************************
* Filename      : otgfspwrclkbitsfield.hpp
*
* Details       : Enumerations related with OTG_FS_PWRCLK peripheral. This
*                 header file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSPWRCLKENUMS_HPP)
#define OTGFSPWRCLKENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_PWRCLK_FS_PCGCCTL_STPPCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_PWRCLK_FS_PCGCCTL_GATEHCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_PWRCLK_FS_PCGCCTL_PHYSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(OTGFSPWRCLKENUMS_HPP)
