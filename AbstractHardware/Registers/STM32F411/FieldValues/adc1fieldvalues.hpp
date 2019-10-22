/*******************************************************************************
* Filename      : adc1fieldvalues.hpp
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
  using Value0 = FieldValue<ADC_SR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_SR_STRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_JSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_SR_JSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SR_JSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_JEOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_SR_JEOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SR_JEOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_SR_EOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SR_EOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SR_AWD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_SR_AWD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SR_AWD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_OVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_OVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_RES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_RES_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CR_RES_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CR_RES_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_AWDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_AWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JAWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_JAWDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_JAWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DISCNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_CR_DISCNUM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JDISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_JDISCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_JDISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_DISCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_DISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JAUTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_JAUTO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_JAUTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDSGL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_AWDSGL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_AWDSGL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_SCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_SCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_SCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_EOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_EOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC_CR_AWDCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_SWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_SWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_SWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_EXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_EXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CR_EXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CR_EXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_CR_EXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CR_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CR_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_CR_JEXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_ALIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_ALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_EOCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_EOCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_EOCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_DDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_DDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_DMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_DMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_CONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_CONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_CONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ADON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_ADON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_ADON_Values, BaseType, 1U> ;
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
  using Value0 = FieldValue<ADC_SQR_L_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SQR_L_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_SQR_L_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_SQR_L_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_SQR_L_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_SQR_L_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_SQR_L_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_SQR_L_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_SQR_L_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_SQR_L_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_SQR_L_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_SQR_L_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_SQR_L_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_SQR_L_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_SQR_L_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_SQR_L_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SQR_SQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_SQR_SQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SQR_SQ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_SQR_SQ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_SQR_SQ_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_SQR_SQ_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_SQR_SQ_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_SQR_SQ_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_SQR_SQ_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_SQR_SQ_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_SQR_SQ_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_SQR_SQ_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_SQR_SQ_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_SQR_SQ_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_SQR_SQ_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_SQR_SQ_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_SQR_SQ_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC_SQR_SQ_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC_SQR_SQ_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC_SQR_SQ_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC_SQR_SQ_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC_SQR_SQ_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC_SQR_SQ_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC_SQR_SQ_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC_SQR_SQ_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC_SQR_SQ_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC_SQR_SQ_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC_SQR_SQ_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC_SQR_SQ_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC_SQR_SQ_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC_SQR_SQ_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC_SQR_SQ_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC_SQR_SQ_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_JSQR_JL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_JSQR_JL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_JSQR_JL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_JSQR_JL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_JSQR_JL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_JSQR_JSQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC_JSQR_JSQ_Values, BaseType, 31U> ;
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
