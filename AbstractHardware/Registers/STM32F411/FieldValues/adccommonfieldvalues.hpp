/*******************************************************************************
* Filename      : adccommonfieldvalues.hpp
*
* Details       : Enumerations related with ADC_Common peripheral. This header
*                 file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(ADCCOMMONENUMS_HPP)
#define ADCCOMMONENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CSR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CSR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CSR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CSR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CSR_STRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CSR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CSR_JSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CSR_JSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CSR_JSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CSR_JEOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CSR_JEOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CSR_JEOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CSR_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CSR_EOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CSR_EOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CSR_AWD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CSR_AWD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CSR_AWD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CCR_TSVREFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CCR_TSVREFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CCR_TSVREFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CCR_VBATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CCR_VBATE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CCR_VBATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CCR_ADCPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CCR_ADCPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CCR_ADCPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_Common_CCR_ADCPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_Common_CCR_ADCPRE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CCR_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CCR_DMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CCR_DMA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_Common_CCR_DMA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_Common_CCR_DMA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CCR_DDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CCR_DDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CCR_DDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_Common_CCR_DELAY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_Common_CCR_DELAY_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(ADCCOMMONENUMS_HPP)
