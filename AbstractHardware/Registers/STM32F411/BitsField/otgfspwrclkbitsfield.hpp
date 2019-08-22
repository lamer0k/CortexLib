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

struct OtgFsPwrclkFsPcgcctlStppclkValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OtgFsPwrclkFsPcgcctlStppclkValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct OtgFsPwrclkFsPcgcctlGatehclkValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OtgFsPwrclkFsPcgcctlGatehclkValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct OtgFsPwrclkFsPcgcctlPhysuspValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OtgFsPwrclkFsPcgcctlPhysuspValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(OTGFSPWRCLKENUMS_HPP)
