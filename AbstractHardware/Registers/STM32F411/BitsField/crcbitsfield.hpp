/*******************************************************************************
* Filename      : crcbitsfield.hpp
*
* Details       : Enumerations related with CRC peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(CRCENUMS_HPP)
#define CRCENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

struct CrcCrCrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CrcCrCrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(CRCENUMS_HPP)
