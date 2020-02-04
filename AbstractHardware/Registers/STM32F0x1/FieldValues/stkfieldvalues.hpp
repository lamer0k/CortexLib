/*******************************************************************************
* Filename      : stkfieldvalues.hpp
*
* Details       : Enumerations related with STK peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(STKENUMS_HPP)
#define STKENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CSR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<STK_CSR_ENABLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<STK_CSR_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CSR_TICKINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<STK_CSR_TICKINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<STK_CSR_TICKINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CSR_CLKSOURCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<STK_CSR_CLKSOURCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<STK_CSR_CLKSOURCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CSR_COUNTFLAG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<STK_CSR_COUNTFLAG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<STK_CSR_COUNTFLAG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_RVR_RELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CVR_CURRENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CALIB_TENMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CALIB_SKEW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<STK_CALIB_SKEW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<STK_CALIB_SKEW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CALIB_NOREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<STK_CALIB_NOREF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<STK_CALIB_NOREF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(STKENUMS_HPP)
