/*******************************************************************************
* Filename      : crcfieldvalues.hpp
*
* Details       : Enumerations related with CRC peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(CRCENUMS_HPP)
#define CRCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_DATA_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_FDATA_FDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CTL_RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CTL_RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CTL_RST_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(CRCENUMS_HPP)
