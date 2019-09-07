/*******************************************************************************
* Filename      : nvicfieldvalues.hpp
*
* Details       : Enumerations related with NVIC peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(NVICENUMS_HPP)
#define NVICENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVIC_ISER_SETENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVIC_ICER_CLRENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVIC_ISPR_SETPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVIC_ICPR_CLRPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVIC_IABR_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct NVIC_IPR_IPR_N_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(NVICENUMS_HPP)
