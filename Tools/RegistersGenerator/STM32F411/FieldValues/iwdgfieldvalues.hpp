/*******************************************************************************
* Filename      : iwdgfieldvalues.hpp
*
* Details       : Enumerations related with IWDG peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(IWDGENUMS_HPP)
#define IWDGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_KR_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_PR_PR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG_PR_PR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG_PR_PR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<IWDG_PR_PR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<IWDG_PR_PR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<IWDG_PR_PR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<IWDG_PR_PR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<IWDG_PR_PR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<IWDG_PR_PR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_RLR_RL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_SR_RVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG_SR_RVU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG_SR_RVU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG_SR_PVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG_SR_PVU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG_SR_PVU_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(IWDGENUMS_HPP)
