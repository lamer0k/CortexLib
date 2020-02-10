/*******************************************************************************
* Filename      : crcfieldvalues.hpp
*
* Details       : Enumerations related with CRC peripheral. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(CRCENUMS_HPP)
#define CRCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CR_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CR_RESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CR_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CR_POLYSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CR_POLYSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CR_POLYSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRC_CR_POLYSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRC_CR_POLYSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CR_REV_IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CR_REV_IN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CR_REV_IN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRC_CR_REV_IN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRC_CR_REV_IN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CR_REV_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CR_REV_OUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CR_REV_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_INIT_INIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_POL_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(CRCENUMS_HPP)
