/*******************************************************************************
* Filename      : refabitsfield.hpp
*
* Details       : Enumerations related with REF_A peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(REFAENUMS_HPP)
#define REFAENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFOUT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFOUT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFTCOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFTCOFF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFTCOFF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFVSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFVSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFVSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using REFVSEL_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFGENOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENOT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFGENOT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFBGOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFBGOT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFBGOT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFGENACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENACT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFGENACT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFBGACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFBGACT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFBGACT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFGENBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENBUSY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFGENBUSY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_BGMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BGMODE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using BGMODE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFGENRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENRDY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFGENRDY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL_REFBGRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFBGRDY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFBGRDY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(REFAENUMS_HPP)
