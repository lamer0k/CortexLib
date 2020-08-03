/*******************************************************************************
* Filename      : vrefbuffieldvalues.hpp
*
* Details       : Enumerations related with VREFBUF peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(VREFBUFENUMS_HPP)
#define VREFBUFENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_ENVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_ENVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_ENVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_HIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_HIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_HIZ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_VRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_VRR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_VRR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_VRR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CCR_TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(VREFBUFENUMS_HPP)
