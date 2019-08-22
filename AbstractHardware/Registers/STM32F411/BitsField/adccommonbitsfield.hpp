/*******************************************************************************
* Filename      : adccommonbitsfield.hpp
*
* Details       : Enumerations related with ADC_Common peripheral. This header
*                 file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(ADCCOMMONENUMS_HPP)
#define ADCCOMMONENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

struct AdcCommonCsrOvrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCsrOvrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCsrStrtValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCsrStrtValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCsrJstrtValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCsrJstrtValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCsrJeocValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCsrJeocValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCsrEocValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCsrEocValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCsrAwdValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCsrAwdValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCcrTsvrefeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCcrTsvrefeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCcrVbateValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCcrVbateValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCcrAdcpreValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCcrAdcpreValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

struct AdcCommonCcrDmaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCcrDmaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

struct AdcCommonCcrDdsValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCcrDdsValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct AdcCommonCcrDelayValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AdcCommonCcrDelayValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = BitsField<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = BitsField<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = BitsField<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = BitsField<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = BitsField<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = BitsField<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = BitsField<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = BitsField<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = BitsField<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = BitsField<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = BitsField<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = BitsField<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

#endif //#if !defined(ADCCOMMONENUMS_HPP)
