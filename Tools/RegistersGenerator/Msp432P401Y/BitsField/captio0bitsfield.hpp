/*******************************************************************************
* Filename      : captio0bitsfield.hpp
*
* Details       : Enumerations related with CAPTIO0 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(CAPTIO0ENUMS_HPP)
#define CAPTIO0ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO_CAPTIOxCTL_CAPTIOPISELx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO_CAPTIOxCTL_CAPTIOPOSELx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO_CAPTIOxCTL_CAPTIOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAPTIOEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CAPTIOEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO_CAPTIOxCTL_CAPTIOSTATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAPTIOSTATE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CAPTIOSTATE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(CAPTIO0ENUMS_HPP)
