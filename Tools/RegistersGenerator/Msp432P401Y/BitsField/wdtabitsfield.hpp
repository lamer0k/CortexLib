/*******************************************************************************
* Filename      : wdtabitsfield.hpp
*
* Details       : Enumerations related with WDT_A peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(WDTAENUMS_HPP)
#define WDTAENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTCNTCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTCNTCL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using WDTCNTCL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTTMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTTMSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using WDTTMSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTSSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using WDTSSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using WDTSSEL_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using WDTSSEL_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTHOLD_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using WDTHOLD_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTPW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(WDTAENUMS_HPP)
