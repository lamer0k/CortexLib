/*******************************************************************************
* Filename      : firewallfieldvalues.hpp
*
* Details       : Enumerations related with FIREWALL peripheral. This header
*                 file is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(FIREWALLENUMS_HPP)
#define FIREWALLENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_CSSA_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_CSL_LENG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_NVDSSA_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_NVDSL_LENG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_VDSSA_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_VDSL_LENG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_CR_VDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FIREWALL_CR_VDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FIREWALL_CR_VDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_CR_VDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FIREWALL_CR_VDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FIREWALL_CR_VDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FIREWALL_CR_FPA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FIREWALL_CR_FPA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FIREWALL_CR_FPA_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(FIREWALLENUMS_HPP)
