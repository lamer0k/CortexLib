/*******************************************************************************
* Filename      : tim11fieldvalues.hpp
*
* Details       : Enumerations related with TIM11 peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM11ENUMS_HPP)
#define TIM11ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CR1_CKD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CR1_CKD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CR1_CKD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM11_CR1_CKD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM11_CR1_CKD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CR1_ARPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CR1_ARPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CR1_ARPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CR1_URS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CR1_URS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CR1_URS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CR1_UDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CR1_UDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CR1_UDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CR1_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CR1_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CR1_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_DIER_CC1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_DIER_CC1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_DIER_CC1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_DIER_UIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_DIER_UIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_DIER_UIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_SR_CC1OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_SR_CC1OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_SR_CC1OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_SR_CC1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM11_SR_CC1IF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM11_SR_CC1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_SR_UIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM11_SR_UIF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM11_SR_UIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_EGR_CC1G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_EGR_CC1G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_EGR_CC1G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_EGR_UG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_EGR_UG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_EGR_UG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCMR1_Output_OC1M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM11_CCMR1_Output_OC1M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCMR1_Output_OC1PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCMR1_Output_OC1PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCMR1_Output_OC1PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCMR1_Output_OC1FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCMR1_Output_OC1FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCMR1_Output_OC1FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCMR1_Output_CC1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCMR1_Output_CC1S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCMR1_Output_CC1S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM11_CCMR1_Output_CC1S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM11_CCMR1_Output_CC1S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCMR1_Input_IC1F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM11_CCMR1_Input_IC1F_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCMR1_Input_ICPCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCMR1_Input_ICPCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCMR1_Input_ICPCS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM11_CCMR1_Input_ICPCS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM11_CCMR1_Input_ICPCS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCMR1_Input_CC1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCMR1_Input_CC1S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCMR1_Input_CC1S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM11_CCMR1_Input_CC1S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM11_CCMR1_Input_CC1S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCER_CC1NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCER_CC1NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCER_CC1NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCER_CC1P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCER_CC1P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCER_CC1P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCER_CC1E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_CCER_CC1E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_CCER_CC1E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_CCR1_CCR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM11_OR_RMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM11_OR_RMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM11_OR_RMP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM11_OR_RMP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM11_OR_RMP_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(TIM11ENUMS_HPP)
