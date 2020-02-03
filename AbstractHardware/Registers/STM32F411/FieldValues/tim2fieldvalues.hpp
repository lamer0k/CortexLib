/*******************************************************************************
* Filename      : tim2fieldvalues.hpp
*
* Details       : Enumerations related with TIM2 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM2ENUMS_HPP)
#define TIM2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_CKD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TckInt = FieldValue<TIM2_CR1_CKD_Values, BaseType, 0U> ;
  using TckInt2 = FieldValue<TIM2_CR1_CKD_Values, BaseType, 1U> ;
  using TckInt4 = FieldValue<TIM2_CR1_CKD_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_ARPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ArrNotBuffered = FieldValue<TIM2_CR1_ARPE_Values, BaseType, 0U> ;
  using ArrBuffered = FieldValue<TIM2_CR1_ARPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_CMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using EdgeAlignedMode = FieldValue<TIM2_CR1_CMS_Values, BaseType, 0U> ;
  using CenterAlignedMode1 = FieldValue<TIM2_CR1_CMS_Values, BaseType, 1U> ;
  using CenterAlignedMode2 = FieldValue<TIM2_CR1_CMS_Values, BaseType, 2U> ;
  using CenterAlignedMode3 = FieldValue<TIM2_CR1_CMS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UpCounter = FieldValue<TIM2_CR1_DIR_Values, BaseType, 0U> ;
  using DownCounter = FieldValue<TIM2_CR1_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_OPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotStopped = FieldValue<TIM2_CR1_OPM_Values, BaseType, 0U> ;
  using Stops = FieldValue<TIM2_CR1_OPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_URS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AnyEvent = FieldValue<TIM2_CR1_URS_Values, BaseType, 0U> ;
  using OverflowEvent = FieldValue<TIM2_CR1_URS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_UDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UevEnable = FieldValue<TIM2_CR1_UDIS_Values, BaseType, 0U> ;
  using UevDisable = FieldValue<TIM2_CR1_UDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CR1_CEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CR1_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR2_TI1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Chanel1ToTi1 = FieldValue<TIM2_CR2_TI1S_Values, BaseType, 0U> ;
  using Chanel123ToTi1 = FieldValue<TIM2_CR2_TI1S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR2_MMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Reset = FieldValue<TIM2_CR2_MMS_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CR2_MMS_Values, BaseType, 1U> ;
  using Update = FieldValue<TIM2_CR2_MMS_Values, BaseType, 2U> ;
  using ComparePulse = FieldValue<TIM2_CR2_MMS_Values, BaseType, 3U> ;
  using CompareOc1Ref = FieldValue<TIM2_CR2_MMS_Values, BaseType, 4U> ;
  using CompareOc2Ref = FieldValue<TIM2_CR2_MMS_Values, BaseType, 5U> ;
  using CompareOc3Ref = FieldValue<TIM2_CR2_MMS_Values, BaseType, 6U> ;
  using CompareOc4Ref = FieldValue<TIM2_CR2_MMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR2_CCDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DmaRequestOnCcEvent = FieldValue<TIM2_CR2_CCDS_Values, BaseType, 0U> ;
  using DmaRequestOnAnyEvent = FieldValue<TIM2_CR2_CCDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using EtrNoninverted = FieldValue<TIM2_SMCR_ETP_Values, BaseType, 0U> ;
  using EtrInverted = FieldValue<TIM2_SMCR_ETP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ECE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ExternalClockMode2Disabled = FieldValue<TIM2_SMCR_ECE_Values, BaseType, 0U> ;
  using ExternalClockMode2Enabled = FieldValue<TIM2_SMCR_ECE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ETPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PrescalerOff = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 0U> ;
  using EtrpFrequencyDiv2 = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 1U> ;
  using EtrpFrequencyDiv4 = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 2U> ;
  using EtrpFrequencyDiv5 = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ETF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoFilter = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 0U> ;
  using SamplingFckN2 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 1U> ;
  using SamplingFckN4 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 2U> ;
  using SamplingFckN8 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 3U> ;
  using SamplingDtsDiv2N6 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 4U> ;
  using SamplingDtsDiv2N8 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 5U> ;
  using SamplingDtsDiv4N6 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 6U> ;
  using SamplingDtsDiv4N8 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 7U> ;
  using SamplingDtsDiv8N6 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 8U> ;
  using SamplingDtsDiv8N8 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 9U> ;
  using SamplingDtsDiv16N5 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 10U> ;
  using SamplingDtsDiv16N6 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 11U> ;
  using SamplingDtsDiv16N8 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 12U> ;
  using SamplingDtsDiv32N5 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 13U> ;
  using SamplingDtsDiv32N6 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 14U> ;
  using SamplingDtsDiv32N8 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_MSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value1 = FieldValue<TIM2_SMCR_MSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InternalTrigger0 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 0U> ;
  using InternalTrigger1 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 1U> ;
  using InternalTrigger2 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 2U> ;
  using InternalTrigger3 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 3U> ;
  using Ti1EdgeDetector = FieldValue<TIM2_SMCR_TS_Values, BaseType, 4U> ;
  using FilteredTimerInput1 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 5U> ;
  using FilteredTimerInput2 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 6U> ;
  using ExternalTrigger = FieldValue<TIM2_SMCR_TS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_SMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 0U> ;
  using EncoderMode1 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 1U> ;
  using EncoderMode2 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 2U> ;
  using EncoderMode3 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 3U> ;
  using ResetMode = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 4U> ;
  using GatedMode = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 5U> ;
  using TriggerMode = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 6U> ;
  using ExternalClockMode = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_TDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_TDE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_TDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC4DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC4DE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC4DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC3DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC3DE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC3DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC2DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC2DE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC2DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC1DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC1DE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC1DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_UDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_UDE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_UDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_TIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_TIE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_TIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC4IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC4IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC4IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC3IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC2IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC1IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_UIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_UIE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_UIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC4OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOvercaptureDetected = FieldValue<TIM2_SR_CC4OF_Values, BaseType, 0U> ;
  using CounterCaptured = FieldValue<TIM2_SR_CC4OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC3OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOvercaptureDetected = FieldValue<TIM2_SR_CC3OF_Values, BaseType, 0U> ;
  using CounterCaptured = FieldValue<TIM2_SR_CC3OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC2OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOvercaptureDetected = FieldValue<TIM2_SR_CC2OF_Values, BaseType, 0U> ;
  using CounterCaptured = FieldValue<TIM2_SR_CC2OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC1OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOvercaptureDetected = FieldValue<TIM2_SR_CC1OF_Values, BaseType, 0U> ;
  using CounterCaptured = FieldValue<TIM2_SR_CC1OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_TIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoTrigerEvent = FieldValue<TIM2_SR_TIF_Values, BaseType, 0U> ;
  using TriggerIntPending = FieldValue<TIM2_SR_TIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC4IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM2_SR_CC4IF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM2_SR_CC4IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC3IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM2_SR_CC3IF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM2_SR_CC3IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC2IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM2_SR_CC2IF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM2_SR_CC2IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM2_SR_CC1IF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM2_SR_CC1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_UIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM2_SR_UIF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM2_SR_UIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_TG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TifFlagSet = FieldValue<TIM2_EGR_TG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC4G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CcEventGenerated = FieldValue<TIM2_EGR_CC4G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC3G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
    using CcEventGenerated = FieldValue<TIM2_EGR_CC3G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC2G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_EGR_CC2G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_EGR_CC2G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC1G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CcEventGenerated = FieldValue<TIM2_EGR_CC1G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_UG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
   using UpdateGenerated = FieldValue<TIM2_EGR_UG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2CE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_CC2S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Output = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 0U> ;
  using InputOnTi2 = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 1U> ;
  using InputOnTi1 = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 2U> ;
  using InputOnTrc = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR1_Output_OC1CE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR1_Output_OC1CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Frozen = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 0U> ;
  using HighOnMatch = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 1U> ;
  using LowOnMatch = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 2U> ;
  using Toggle = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 3U> ;
  using Low = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 4U> ;
  using High = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 5U> ;
  using PwmMode1 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 6U> ;
  using PwmMode2 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR1_Output_OC1PE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR1_Output_OC1PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR1_Output_OC1FE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR1_Output_OC1FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_CC1S_Values: public TIM2_CCMR1_Output_CC2S_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_IC2F_Values: public TIM2_SMCR_ETF_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_IC2PCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoPrescaler = FieldValue<TIM2_CCMR1_Input_IC2PCS_Values, BaseType, 0U> ;
  using Every2Events = FieldValue<TIM2_CCMR1_Input_IC2PCS_Values, BaseType, 1U> ;
  using Every4Events = FieldValue<TIM2_CCMR1_Input_IC2PCS_Values, BaseType, 2U> ;
  using Every8Events = FieldValue<TIM2_CCMR1_Input_IC2PCS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_CC2S_Values: public TIM2_CCMR1_Output_CC2S_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_IC1F_Values: public TIM2_SMCR_ETF_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_ICPCS_Values: public TIM2_CCMR1_Input_IC2PCS_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_CC1S_Values: public TIM2_CCMR1_Output_CC2S_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_O24CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR2_Output_O24CE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR2_Output_O24CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC4M_Values: public TIM2_CCMR1_Output_OC1M_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC4PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR2_Output_OC4PE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR2_Output_OC4PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC4FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR2_Output_OC4FE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR2_Output_OC4FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_CC4S_Values: public TIM2_CCMR1_Output_CC2S_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR2_Output_OC3CE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR2_Output_OC3CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3M_Values: public TIM2_CCMR1_Output_OC1M_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR2_Output_OC3PE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR2_Output_OC3PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CCMR2_Output_OC3FE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CCMR2_Output_OC3FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_CC3S_Values: public TIM2_CCMR1_Output_CC2S_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC4F_Values:  public TIM2_SMCR_ETF_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC4PSC_Values:  public TIM2_CCMR1_Input_IC2PCS_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_CC4S_Values: public TIM2_CCMR1_Output_CC2S_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC3F_Values: public TIM2_SMCR_ETF_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC3PSC_Values:  public TIM2_CCMR1_Input_IC2PCS_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_CC3S_Values:  public TIM2_CCMR1_Output_CC2S_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC4NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Output = FieldValue<TIM2_CCER_CC4NP_Values, BaseType, 0U> ;
  using Input = FieldValue<TIM2_CCER_CC4NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC4P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using High = FieldValue<TIM2_CCER_CC4P_Values, BaseType, 0U> ;
  using Low = FieldValue<TIM2_CCER_CC4P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC4E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<TIM2_CCER_CC4E_Values, BaseType, 0U> ;
  using On = FieldValue<TIM2_CCER_CC4E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC3NP_Values: public TIM2_CCER_CC4NP_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC3P_Values: public TIM2_CCER_CC4P_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC3E_Values: public TIM2_CCER_CC4E_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC2NP_Values: public TIM2_CCER_CC4NP_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC2P_Values: public TIM2_CCER_CC4P_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC2E_Values: public TIM2_CCER_CC4E_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC1NP_Values: public TIM2_CCER_CC4NP_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC1P_Values: public TIM2_CCER_CC4P_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC1E_Values: public TIM2_CCER_CC4E_Values<Reg, offset, size, AccessMode,BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM2_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR1_CCR1_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR2_CCR2_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR3_CCR3_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR4_CCR4_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DCR_DBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Transfer1 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 0U> ;
  using Transfer2 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 1U> ;
  using Transfer3 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 2U> ;
  using Transfer4 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 3U> ;
  using Transfer5 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 4U> ;
  using Transfer6 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 5U> ;
  using Transfer7 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 6U> ;
  using Transfer8 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 7U> ;
  using Transfer9 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 8U> ;
  using Transfer10 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 9U> ;
  using Transfer11 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 10U> ;
  using Transfer12 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 11U> ;
  using Transfer13 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 12U> ;
  using Transfer14 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 13U> ;
  using Transfer15 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 14U> ;
  using Transfer16 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 15U> ;
  using Transfer17 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 16U> ;
  using Transfer18 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 17U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DCR_DBA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DMAR_DMAB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_OR_ITR1_RMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PtpOutputToItr1 = FieldValue<TIM2_OR_ITR1_RMP_Values, BaseType, 1U> ;
  using OtgFsSofToItr1 = FieldValue<TIM2_OR_ITR1_RMP_Values, BaseType, 2U> ;
  using OtgHsSofToItr1 = FieldValue<TIM2_OR_ITR1_RMP_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(TIM2ENUMS_HPP)
