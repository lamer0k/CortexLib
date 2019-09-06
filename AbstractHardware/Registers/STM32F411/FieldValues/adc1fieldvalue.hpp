/*******************************************************************************
* Filename      : adc1fieldvalue.hpp
*
* Details       : Enumerations related with ADC1 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(ADC1ENUMS_HPP)
#define ADC1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_JSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_JEOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_AWD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JAWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DISCNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JDISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JAUTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDSGL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_SCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
  using Value16 = FieldValue<Reg, offset, size, AccessMode, BaseType, 16U> ;
  using Value17 = FieldValue<Reg, offset, size, AccessMode, BaseType, 17U> ;
  using Value18 = FieldValue<Reg, offset, size, AccessMode, BaseType, 18U> ;
  using Value19 = FieldValue<Reg, offset, size, AccessMode, BaseType, 19U> ;
  using Value20 = FieldValue<Reg, offset, size, AccessMode, BaseType, 20U> ;
  using Value21 = FieldValue<Reg, offset, size, AccessMode, BaseType, 21U> ;
  using Value22 = FieldValue<Reg, offset, size, AccessMode, BaseType, 22U> ;
  using Value23 = FieldValue<Reg, offset, size, AccessMode, BaseType, 23U> ;
  using Value24 = FieldValue<Reg, offset, size, AccessMode, BaseType, 24U> ;
  using Value25 = FieldValue<Reg, offset, size, AccessMode, BaseType, 25U> ;
  using Value26 = FieldValue<Reg, offset, size, AccessMode, BaseType, 26U> ;
  using Value27 = FieldValue<Reg, offset, size, AccessMode, BaseType, 27U> ;
  using Value28 = FieldValue<Reg, offset, size, AccessMode, BaseType, 28U> ;
  using Value29 = FieldValue<Reg, offset, size, AccessMode, BaseType, 29U> ;
  using Value30 = FieldValue<Reg, offset, size, AccessMode, BaseType, 30U> ;
  using Value31 = FieldValue<Reg, offset, size, AccessMode, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_SWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EOCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_CONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ADON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SMPR_SMPx_x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_JOFR_JOFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_HTR_HT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_LTR_LT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SQR_L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SQR_SQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
  using Value16 = FieldValue<Reg, offset, size, AccessMode, BaseType, 16U> ;
  using Value17 = FieldValue<Reg, offset, size, AccessMode, BaseType, 17U> ;
  using Value18 = FieldValue<Reg, offset, size, AccessMode, BaseType, 18U> ;
  using Value19 = FieldValue<Reg, offset, size, AccessMode, BaseType, 19U> ;
  using Value20 = FieldValue<Reg, offset, size, AccessMode, BaseType, 20U> ;
  using Value21 = FieldValue<Reg, offset, size, AccessMode, BaseType, 21U> ;
  using Value22 = FieldValue<Reg, offset, size, AccessMode, BaseType, 22U> ;
  using Value23 = FieldValue<Reg, offset, size, AccessMode, BaseType, 23U> ;
  using Value24 = FieldValue<Reg, offset, size, AccessMode, BaseType, 24U> ;
  using Value25 = FieldValue<Reg, offset, size, AccessMode, BaseType, 25U> ;
  using Value26 = FieldValue<Reg, offset, size, AccessMode, BaseType, 26U> ;
  using Value27 = FieldValue<Reg, offset, size, AccessMode, BaseType, 27U> ;
  using Value28 = FieldValue<Reg, offset, size, AccessMode, BaseType, 28U> ;
  using Value29 = FieldValue<Reg, offset, size, AccessMode, BaseType, 29U> ;
  using Value30 = FieldValue<Reg, offset, size, AccessMode, BaseType, 30U> ;
  using Value31 = FieldValue<Reg, offset, size, AccessMode, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_JSQR_JL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_JSQR_JSQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
  using Value16 = FieldValue<Reg, offset, size, AccessMode, BaseType, 16U> ;
  using Value17 = FieldValue<Reg, offset, size, AccessMode, BaseType, 17U> ;
  using Value18 = FieldValue<Reg, offset, size, AccessMode, BaseType, 18U> ;
  using Value19 = FieldValue<Reg, offset, size, AccessMode, BaseType, 19U> ;
  using Value20 = FieldValue<Reg, offset, size, AccessMode, BaseType, 20U> ;
  using Value21 = FieldValue<Reg, offset, size, AccessMode, BaseType, 21U> ;
  using Value22 = FieldValue<Reg, offset, size, AccessMode, BaseType, 22U> ;
  using Value23 = FieldValue<Reg, offset, size, AccessMode, BaseType, 23U> ;
  using Value24 = FieldValue<Reg, offset, size, AccessMode, BaseType, 24U> ;
  using Value25 = FieldValue<Reg, offset, size, AccessMode, BaseType, 25U> ;
  using Value26 = FieldValue<Reg, offset, size, AccessMode, BaseType, 26U> ;
  using Value27 = FieldValue<Reg, offset, size, AccessMode, BaseType, 27U> ;
  using Value28 = FieldValue<Reg, offset, size, AccessMode, BaseType, 28U> ;
  using Value29 = FieldValue<Reg, offset, size, AccessMode, BaseType, 29U> ;
  using Value30 = FieldValue<Reg, offset, size, AccessMode, BaseType, 30U> ;
  using Value31 = FieldValue<Reg, offset, size, AccessMode, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_JDR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_DR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC1ENUMS_HPP)
