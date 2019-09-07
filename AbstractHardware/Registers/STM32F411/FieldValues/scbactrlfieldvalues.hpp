/*******************************************************************************
* Filename      : scbactrlfieldvalues.hpp
*
* Details       : Enumerations related with SCB_ACTRL peripheral. This header
*                 file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SCBACTRLENUMS_HPP)
#define SCBACTRLENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISMCYCINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISMCYCINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISMCYCINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISDEFWBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISDEFWBUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISDEFWBUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISFOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISFOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISFOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISFPCA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISFPCA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISFPCA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISOOFP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISOOFP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISOOFP_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SCBACTRLENUMS_HPP)
