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
struct ADC1_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoOverrun = FieldValue<ADC1_SR_OVR_Values, BaseType, 0U> ;
  using Overrun = FieldValue<ADC1_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotStarted = FieldValue<ADC1_SR_STRT_Values, BaseType, 0U> ;
  using Started = FieldValue<ADC1_SR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_JSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotStarted = FieldValue<ADC1_SR_JSTRT_Values, BaseType, 0U> ;
  using Started = FieldValue<ADC1_SR_JSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_JEOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConversionNotComplete = FieldValue<ADC1_SR_JEOC_Values, BaseType, 0U> ;
  using ConversionComplete = FieldValue<ADC1_SR_JEOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ConversionNotComplete = FieldValue<ADC1_SR_EOC_Values, BaseType, 0U> ;
  using ConversionComplete = FieldValue<ADC1_SR_EOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_AWD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoEvent = FieldValue<ADC1_SR_AWD_Values, BaseType, 0U> ;
  using EventOccured = FieldValue<ADC1_SR_AWD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_OVRIE_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_OVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Bits12 = FieldValue<ADC1_CR1_RES_Values, BaseType, 0U> ;
  using Bits10 = FieldValue<ADC1_CR1_RES_Values, BaseType, 1U> ;
  using Bits8 = FieldValue<ADC1_CR1_RES_Values, BaseType, 2U> ;
  using Bits6 = FieldValue<ADC1_CR1_RES_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_AWDEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_AWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JAWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_JAWDEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_JAWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_DISCNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using One = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 0U> ;
  using Two = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 1U> ;
  using Three = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 2U> ;
  using Four = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 3U> ;
  using Five = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 4U> ;
  using Six = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 5U> ;
  using Seven = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 6U> ;
  using Eight = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JDISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_JDISCEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_JDISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_DISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_DISCEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_DISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JAUTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_JAUTO_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_JAUTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDSGL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using EnabledForAllChannels = FieldValue<ADC1_CR1_AWDSGL_Values, BaseType, 0U> ;
  using EnabledForSingleChannel = FieldValue<ADC1_CR1_AWDSGL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_SCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_SCAN_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_SCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_JEOCIE_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_AWDIE_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR1_EOCIE_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR1_EOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 16U> ;

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_SWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ResetState = FieldValue<ADC1_CR2_SWSTART_Values, BaseType, 0U> ;
  using On = FieldValue<ADC1_CR2_SWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_EXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TriggerDisabled = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 0U> ;
  using TriggerOnRising = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 1U> ;
  using TriggerOnFalling = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 2U> ;
  using TriggerOnRisingFalling = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_EXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Timer1CC1Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 0U> ;
  using Timer1CC2Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 1U> ;
  using Timer1CC3Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 2U> ;
  using Timer2CC2Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 3U> ;
  using Timer2CC3Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 4U> ;
  using Timer2CC4Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 5U> ;
  using Timer2TRGOEvent = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 6U> ;
  using Timer3CC1Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 7U> ;
  using Timer3TRGOEvent = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 8U> ;
  using Timer4CC4Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 9U> ;
  using Timer5CC1Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 10U> ;
  using Timer5CC2Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 11U> ;
  using Timer5CC3Event = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 12U> ;
  using EXTILine11 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ResetState = FieldValue<ADC1_CR2_JSWSTART_Values, BaseType, 0U> ;
  using On = FieldValue<ADC1_CR2_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_JEXTEN_Values: public ADC1_CR2_EXTEN_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Timer1CC4Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 0U> ;
  using Timer1TRGOEvent = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 1U> ;
  using Timer2CC1Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 2U> ;
  using Timer2TRGOEvent = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 3U> ;
  using Timer3CC2Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 4U> ;
  using Timer3CC4Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 5U> ;
  using Timer4CC1Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 6U> ;
  using Timer4CC2Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 7U> ;
  using Timer4CC3Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 8U> ;
  using Timer4TRGOEvent = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 9U> ;
  using Timer5CC2Event = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 10U> ;
  using Timer5TRGOEvent = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 11U> ;
  using EXTILine15 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_ALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Right = FieldValue<ADC1_CR2_ALIGN_Values, BaseType, 0U> ;
  using Left = FieldValue<ADC1_CR2_ALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_EOCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SequenceConversion = FieldValue<ADC1_CR2_EOCS_Values, BaseType, 0U> ;
  using SingleConversion = FieldValue<ADC1_CR2_EOCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_DDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoDMARequest = FieldValue<ADC1_CR2_DDS_Values, BaseType, 0U> ;
  using DMARequest = FieldValue<ADC1_CR2_DDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR2_DMA_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR2_DMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_CONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SingleConversion = FieldValue<ADC1_CR2_CONT_Values, BaseType, 0U> ;
  using ContinuousConversion = FieldValue<ADC1_CR2_CONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_ADON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<ADC1_CR2_ADON_Values, BaseType, 0U> ;
  using Enable = FieldValue<ADC1_CR2_ADON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SMPR1_SMPx_x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Cycles3 = FieldValue<ADC1_SMPR1_SMPx_x_Values, BaseType, 0U> ;
  using Cycles15 = FieldValue<ADC1_SMPR1_SMPx_x_Values, BaseType, 1U> ;
  using Cycles28 = FieldValue<ADC1_SMPR1_SMPx_x_Values, BaseType, 2U> ;
  using Cycles56 = FieldValue<ADC1_SMPR1_SMPx_x_Values, BaseType, 3U> ;
  using Cycles84 = FieldValue<ADC1_SMPR1_SMPx_x_Values, BaseType, 4U> ;
  using Cycles112 = FieldValue<ADC1_SMPR1_SMPx_x_Values, BaseType, 5U> ;
  using Cycles480 = FieldValue<ADC1_SMPR1_SMPx_x_Values, BaseType, 6U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SMPR2_SMPx_x_Values: public ADC1_SMPR1_SMPx_x_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR1_JOFFSET1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR2_JOFFSET2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR3_JOFFSET3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR4_JOFFSET4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_HTR_HT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_LTR_LT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Conversions1 = FieldValue<ADC1_SQR1_L_Values, BaseType, 0U> ;
  using Conversions2 = FieldValue<ADC1_SQR1_L_Values, BaseType, 1U> ;
  using Conversions3 = FieldValue<ADC1_SQR1_L_Values, BaseType, 2U> ;
  using Conversions4 = FieldValue<ADC1_SQR1_L_Values, BaseType, 3U> ;
  using Conversions5 = FieldValue<ADC1_SQR1_L_Values, BaseType, 4U> ;
  using Conversions6 = FieldValue<ADC1_SQR1_L_Values, BaseType, 5U> ;
  using Conversions7 = FieldValue<ADC1_SQR1_L_Values, BaseType, 6U> ;
  using Conversions8 = FieldValue<ADC1_SQR1_L_Values, BaseType, 7U> ;
  using Conversions9 = FieldValue<ADC1_SQR1_L_Values, BaseType, 8U> ;
  using Conversions10 = FieldValue<ADC1_SQR1_L_Values, BaseType, 9U> ;
  using Conversions11 = FieldValue<ADC1_SQR1_L_Values, BaseType, 10U> ;
  using Conversions12 = FieldValue<ADC1_SQR1_L_Values, BaseType, 11U> ;
  using Conversions13 = FieldValue<ADC1_SQR1_L_Values, BaseType, 12U> ;
  using Conversions14 = FieldValue<ADC1_SQR1_L_Values, BaseType, 13U> ;
  using Conversions15 = FieldValue<ADC1_SQR1_L_Values, BaseType, 14U> ;
  using Conversions16 = FieldValue<ADC1_SQR1_L_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Conversion1 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 0U> ;
  using Conversions2 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 1U> ;
  using Conversions3 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 2U> ;
  using Conversions4 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel0 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 0U> ;
  using Channel1 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 1U> ;
  using Channel2 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 2U> ;
  using Channel3 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 3U> ;
  using Channel4 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 4U> ;
  using Channel5 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 5U> ;
  using Channel6 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 6U> ;
  using Channel7 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 7U> ;
  using Channel8 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 8U> ;
  using Channel9 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 9U> ;
  using Channel10 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 10U> ;
  using Channel11 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 11U> ;
  using Channel12 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 12U> ;
  using Channel13 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 13U> ;
  using Channel14 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 14U> ;
  using Channel15 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 15U> ;
  using Channel16 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 16U> ;
  using Channel17 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 17U> ;
  using Channel18 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 18U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR1_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR2_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR3_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR4_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_DR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC1ENUMS_HPP)
