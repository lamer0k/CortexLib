/*******************************************************************************
* Filename      : pmufieldvalues.hpp
*
* Details       : Enumerations related with PMU peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(PMUENUMS_HPP)
#define PMUENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CTL_BKPWEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CTL_BKPWEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CTL_BKPWEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CTL_LVDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PMU_CTL_LVDT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CTL_LVDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CTL_LVDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CTL_LVDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CTL_STBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CTL_STBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CTL_STBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CTL_WURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CTL_WURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CTL_WURST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CTL_STBMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CTL_STBMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CTL_STBMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CTL_LDOLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CTL_LDOLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CTL_LDOLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CS_WUPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CS_WUPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CS_WUPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CS_LVDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CS_LVDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CS_LVDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CS_STBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CS_STBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CS_STBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMU_CS_WUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PMU_CS_WUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PMU_CS_WUF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(PMUENUMS_HPP)
