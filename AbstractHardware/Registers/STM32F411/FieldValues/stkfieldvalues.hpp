/*******************************************************************************
* Filename      : stkfieldvalues.hpp
*
* Details       : Enumerations related with STK peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(STKENUMS_HPP)
#define STKENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CTRL_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<STK_CTRL_ENABLE_Values, BaseType, 0U> ;
  using Enable = FieldValue<STK_CTRL_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CTRL_TICKINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisableInterrupt = FieldValue<STK_CTRL_TICKINT_Values, BaseType, 0U> ;
  using EnableInterrupt = FieldValue<STK_CTRL_TICKINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CTRL_CLKSOURCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ExternalClock = FieldValue<STK_CTRL_CLKSOURCE_Values, BaseType, 0U> ;
  using CpuClock = FieldValue<STK_CTRL_CLKSOURCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CTRL_COUNTFLAG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOverflow = FieldValue<STK_CTRL_COUNTFLAG_Values, BaseType, 0U> ;
  using Overflow = FieldValue<STK_CTRL_COUNTFLAG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_LOAD_RELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_VAL_CURRENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CALIB_TENMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CALIB_SKEW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CalibrationCoef = FieldValue<STK_CALIB_SKEW_Values, BaseType, 0U> ;
  using DummyCoef = FieldValue<STK_CALIB_SKEW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct STK_CALIB_NOREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RefExist = FieldValue<STK_CALIB_NOREF_Values, BaseType, 0U> ;
  using NoRef = FieldValue<STK_CALIB_NOREF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(STKENUMS_HPP)
