/*******************************************************************************
* Filename      : syscfgfieldvalues.hpp
*
* Details       : Enumerations related with SYSCFG peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SYSCFGENUMS_HPP)
#define SYSCFGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_MEMRM_MEM_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_MEMRM_MEM_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_MEMRM_MEM_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_MEMRM_MEM_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_MEMRM_MEM_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_PMC_ADCDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_PMC_ADCDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_PMC_ADCDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR_EXTI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR_EXTI_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CMPCR_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CMPCR_READY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CMPCR_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CMPCR_CMP_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CMPCR_CMP_PD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CMPCR_CMP_PD_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SYSCFGENUMS_HPP)
