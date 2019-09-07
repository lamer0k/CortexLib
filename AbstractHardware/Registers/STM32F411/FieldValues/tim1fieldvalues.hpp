/*******************************************************************************
* Filename      : tim1fieldvalues.hpp
*
* Details       : Enumerations related with TIM1 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM1ENUMS_HPP)
#define TIM1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_CKD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DividedBy1 = FieldValue<TIM_CR_CKD_Values, BaseType, 0U> ;
  using DividedBy2 = FieldValue<TIM_CR_CKD_Values, BaseType, 1U> ;
  using DividedBy4 = FieldValue<TIM_CR_CKD_Values, BaseType, 2U> ;
  using Reserved = FieldValue<TIM_CR_CKD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_ARPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ARRNotBuffered = FieldValue<TIM_CR_ARPE_Values, BaseType, 0U> ;
  using ARRBuffered = FieldValue<TIM_CR_ARPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_CMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CenterAlignedMode0 = FieldValue<TIM_CR_CMS_Values, BaseType, 0U> ;
  using CenterAlignedMode1 = FieldValue<TIM_CR_CMS_Values, BaseType, 1U> ;
  using CenterAlignedMode2 = FieldValue<TIM_CR_CMS_Values, BaseType, 2U> ;
  using CenterAlignedMode3 = FieldValue<TIM_CR_CMS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Upcounter = FieldValue<TIM_CR_DIR_Values, BaseType, 0U> ;
  using Downcounter = FieldValue<TIM_CR_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_OPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ContinueAfterUEV = FieldValue<TIM_CR_OPM_Values, BaseType, 0U> ;
  using StopAfterUEV = FieldValue<TIM_CR_OPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_URS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Any = FieldValue<TIM_CR_URS_Values, BaseType, 0U> ;
  using Overflow = FieldValue<TIM_CR_URS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_UDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Enable  = FieldValue<TIM_CR_UDIS_Values, BaseType, 0U> ;
  using Disable = FieldValue<TIM_CR_UDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM_CR_CEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM_CR_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_OIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CR_OIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CR_OIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_OISN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CR_OISN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CR_OISN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_TIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CR_TIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CR_TIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_MMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CR_MMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CR_MMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_CR_MMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_CR_MMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_CR_MMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_CR_MMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_CR_MMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_CR_MMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_CCDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CR_CCDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CR_CCDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_CCUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CR_CCUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CR_CCUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CR_CCPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CR_CCPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CR_CCPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SMCR_ETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SMCR_ETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SMCR_ETP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SMCR_ECE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SMCR_ECE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SMCR_ECE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SMCR_ETPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SMCR_ETPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SMCR_ETPS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_SMCR_ETPS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_SMCR_ETPS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SMCR_ETF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM_SMCR_ETF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SMCR_MSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SMCR_MSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SMCR_MSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SMCR_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SMCR_TS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SMCR_TS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_SMCR_TS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_SMCR_TS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_SMCR_TS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_SMCR_TS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_SMCR_TS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_SMCR_TS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SMCR_SMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_SMCR_SMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_TDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_TDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_TDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_COMDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_COMDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_COMDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_CCDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_CCDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_CCDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_UDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_UDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_UDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_BIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_BIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_BIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_TIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_TIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_TIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_COMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_COMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_COMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_CCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_CCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_CCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DIER_UIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DIER_UIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DIER_UIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SR_CCOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SR_CCOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SR_CCOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SR_BIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SR_BIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SR_BIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SR_TIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SR_TIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SR_TIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SR_COMIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SR_COMIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SR_COMIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SR_CCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SR_CCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SR_CCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_SR_UIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_SR_UIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_SR_UIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_EGR_BG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_EGR_BG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_EGR_BG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_EGR_TG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_EGR_TG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_EGR_TG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_EGR_COMG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_EGR_COMG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_EGR_COMG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_EGR_CCG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_EGR_CCG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_EGR_CCG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_EGR_UG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_EGR_UG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_EGR_UG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Output_OCCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Output_OCCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Output_OCCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Output_OCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_CCMR_Output_OCM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Output_OCPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Output_OCPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Output_OCPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Output_OCFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Output_OCFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Output_OCFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Output_CCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Output_CCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Output_CCS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_CCMR_Output_CCS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_CCMR_Output_CCS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Input_ICF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM_CCMR_Input_ICF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Input_ICPCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Input_ICPCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Input_ICPCS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_CCMR_Input_ICPCS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_CCMR_Input_ICPCS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Input_CCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Input_CCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Input_CCS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_CCMR_Input_CCS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_CCMR_Input_CCS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCMR_Input_ICPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCMR_Input_ICPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCMR_Input_ICPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_CCMR_Input_ICPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_CCMR_Input_ICPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCER_CCP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCER_CCP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCER_CCP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCER_CCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCER_CCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCER_CCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCER_CCNP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCER_CCNP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCER_CCNP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCER_CCNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_CCER_CCNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_CCER_CCNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_CCR_CCR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DCR_DBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DCR_DBL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DCR_DBL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_DCR_DBL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_DCR_DBL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_DCR_DBL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_DCR_DBL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_DCR_DBL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_DCR_DBL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM_DCR_DBL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM_DCR_DBL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM_DCR_DBL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM_DCR_DBL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM_DCR_DBL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM_DCR_DBL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM_DCR_DBL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM_DCR_DBL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM_DCR_DBL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM_DCR_DBL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM_DCR_DBL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM_DCR_DBL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM_DCR_DBL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM_DCR_DBL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM_DCR_DBL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM_DCR_DBL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM_DCR_DBL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM_DCR_DBL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM_DCR_DBL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM_DCR_DBL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM_DCR_DBL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM_DCR_DBL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM_DCR_DBL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM_DCR_DBL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DCR_DBA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_DCR_DBA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_DCR_DBA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_DCR_DBA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_DCR_DBA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM_DCR_DBA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM_DCR_DBA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM_DCR_DBA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM_DCR_DBA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM_DCR_DBA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM_DCR_DBA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM_DCR_DBA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM_DCR_DBA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM_DCR_DBA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM_DCR_DBA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM_DCR_DBA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM_DCR_DBA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM_DCR_DBA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM_DCR_DBA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM_DCR_DBA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM_DCR_DBA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM_DCR_DBA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM_DCR_DBA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM_DCR_DBA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM_DCR_DBA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM_DCR_DBA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM_DCR_DBA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM_DCR_DBA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM_DCR_DBA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM_DCR_DBA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM_DCR_DBA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM_DCR_DBA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM_DCR_DBA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_DMAR_DMAB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_RCR_REP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_MOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_BDTR_MOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_BDTR_MOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_AOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_BDTR_AOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_BDTR_AOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_BDTR_BKP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_BDTR_BKP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_BKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_BDTR_BKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_BDTR_BKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_OSSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_BDTR_OSSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_BDTR_OSSR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_OSSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_BDTR_OSSI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_BDTR_OSSI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM_BDTR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM_BDTR_LOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM_BDTR_LOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM_BDTR_LOCK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM_BDTR_DTG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIM1ENUMS_HPP)
