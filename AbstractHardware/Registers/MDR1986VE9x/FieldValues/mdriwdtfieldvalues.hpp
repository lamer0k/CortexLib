/*******************************************************************************
* Filename      : mdriwdtfieldvalues.hpp
*
* Details       : Enumerations related with MDR_IWDT peripheral. This header
*                 file is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRIWDTENUMS_HPP)
#define MDRIWDTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_IWDT_KR_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_IWDT_PR_PR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div4 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 0U> ;
  using div8 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 1U> ;
  using div16 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 2U> ;
  using div32 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 3U> ;
  using div64 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 4U> ;
  using div128 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 5U> ;
  using div256 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 6U> ;
  using div256_1 = FieldValue<MDR_IWDT_PR_PR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_IWDT_RLR_PRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_IWDT_SR_PVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ready = FieldValue<MDR_IWDT_SR_PVU_Values, BaseType, 0U> ;
  using Busy = FieldValue<MDR_IWDT_SR_PVU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_IWDT_SR_RVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ready = FieldValue<MDR_IWDT_SR_RVU_Values, BaseType, 0U> ;
  using Busy = FieldValue<MDR_IWDT_SR_RVU_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRIWDTENUMS_HPP)
