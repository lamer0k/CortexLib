/*******************************************************************************
* Filename      : rtcfieldvalues.hpp
*
* Details       : Enumerations related with RTC peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(RTCENUMS_HPP)
#define RTCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_INTEN_OVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_INTEN_OVIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_INTEN_OVIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_INTEN_ALRMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_INTEN_ALRMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_INTEN_ALRMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_INTEN_SCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_INTEN_SCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_INTEN_SCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CTL_LWOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CTL_LWOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CTL_LWOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CTL_CMF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CTL_CMF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CTL_CMF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CTL_RSYNF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CTL_RSYNF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CTL_RSYNF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CTL_OVIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CTL_OVIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CTL_OVIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CTL_ALRMIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CTL_ALRMIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CTL_ALRMIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CTL_SCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CTL_SCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CTL_SCIF_Values, BaseType, 1U> ;
} ;

