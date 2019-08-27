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

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_IDR_IDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CR_CR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(CRCENUMS_HPP)
