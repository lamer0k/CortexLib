/*******************************************************************************
* Filename      : rccfieldvalues.hpp
*
* Details       : Enumerations related with RCC peripheral. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(RCCENUMS_HPP)
#define RCCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLI2SRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLI2SRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLI2SRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLI2SON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLI2SON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLI2SON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_CSSON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_CSSON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_CSSON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSEBYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSEBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSERDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSEON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSICAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSITRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RCC_CR_HSITRIM_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLQ3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLQ3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLQ2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLQ1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLQ0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLQ0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLQ0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLSRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLP0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLP0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLN0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLM5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLM5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLM5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLM4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLM4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLM4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLM3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO2_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO2PRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO1PRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_I2SSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_I2SSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_I2SSRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_RTCPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RCC_CFGR_RTCPRE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_PPRE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_PPRE2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_PPRE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_PPRE1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_HPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CFGR_HPRE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_SWS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SWS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SWS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_SWS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SWS0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SWS0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_SW1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SW1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SW1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_SW0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SW0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SW0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_CSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_CSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_CSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLI2SRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLI2SRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLI2SRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLI2SRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLI2SRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLI2SRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_CSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_CSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_CSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLI2SRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLI2SRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLI2SRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_OTGHSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_OTGHSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_OTGHSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_ETHMACRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_ETHMACRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_ETHMACRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_DMA2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_DMA2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_DMA2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_DMA1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_DMA1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_DMA1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_CRCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_CRCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_CRCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOHRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOHRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOHRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOFRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOFRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOFRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOERST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOERST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOERST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIODRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIODRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIODRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_GPIOARST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_GPIOARST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_GPIOARST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_OTGFSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_OTGFSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_OTGFSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_RNGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_RNGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_RNGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_DCMIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_DCMIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_DCMIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_FSMCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_FSMCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_FSMCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_DACRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_DACRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_DACRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_PWRRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_PWRRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_PWRRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_CAN2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_CAN2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_CAN2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_CAN1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_CAN1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_CAN1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_I2C3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_I2C3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_I2C3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_I2C2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_I2C2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_I2C2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_I2C1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_I2C1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_I2C1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_UART5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_UART5RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_UART5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_UART4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_UART4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_UART4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_UART3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_UART3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_UART3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_UART2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_UART2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_UART2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_SPI3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_SPI3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_SPI3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_SPI2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_SPI2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_SPI2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_WWDGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_WWDGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_WWDGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM14RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM14RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM14RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM13RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM13RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM13RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM12RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM12RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM12RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM7RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM7RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM7RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM6RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM5RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM11RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM11RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM11RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM10RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM10RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM10RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM9RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM9RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM9RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SYSCFGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SPI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SDIORST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SDIORST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SDIORST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_ADCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_ADCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_ADCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_USART6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_USART6RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_USART6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_USART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM8RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM8RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM8RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_OTGHSULPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_OTGHSULPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_OTGHSULPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_OTGHSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_OTGHSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_OTGHSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ETHMACPTPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ETHMACPTPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ETHMACPTPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ETHMACRXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ETHMACRXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ETHMACRXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ETHMACTXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ETHMACTXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ETHMACTXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ETHMACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ETHMACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ETHMACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_DMA2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_DMA2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_DMA2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_DMA1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_DMA1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_DMA1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_BKPSRAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_BKPSRAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_BKPSRAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOEEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOEEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOEEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIODEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIODEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIODEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_GPIOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_GPIOAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_GPIOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_OTGFSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_OTGFSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_OTGFSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_RNGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_RNGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_RNGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_DCMIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_DCMIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_DCMIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_FSMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_FSMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_FSMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_DACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_DACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_DACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_PWREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_PWREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_PWREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_CAN2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_CAN2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_CAN2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_CAN1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_CAN1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_CAN1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_I2C3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_I2C3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_I2C3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_I2C2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_I2C2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_I2C2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_I2C1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_I2C1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_I2C1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_UART5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_UART5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_UART5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_UART4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_UART4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_UART4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_USART3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_USART3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_USART3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_USART2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_USART2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_USART2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_SPI3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_SPI3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_SPI3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_SPI2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_SPI2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_SPI2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_WWDGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_WWDGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_WWDGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM14EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM14EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM14EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM13EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM13EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM13EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM11EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM11EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM11EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM10EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM10EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM10EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM9EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM9EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM9EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SYSCFGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SPI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SDIOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SDIOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SDIOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_ADC3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_ADC3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_ADC3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_ADC2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_ADC2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_ADC2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_ADC1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_ADC1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_ADC1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM8EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM8EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM8EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_OTGHSULPILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_OTGHSULPILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_OTGHSULPILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_OTGHSLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_OTGHSLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_OTGHSLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ETHMACPTPLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ETHMACPTPLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ETHMACPTPLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ETHMACRXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ETHMACRXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ETHMACRXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ETHMACTXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ETHMACTXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ETHMACTXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ETHMACLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ETHMACLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ETHMACLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_DMA2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_DMA2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_DMA2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_DMA1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_DMA1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_DMA1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_BKPSRAMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_BKPSRAMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_BKPSRAMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_SRAM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_SRAM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_SRAM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_SRAM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_SRAM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_SRAM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_FLITFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_FLITFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_FLITFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_CRCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_CRCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_CRCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOHLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOHLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOHLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOELPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOELPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOELPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIODLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIODLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIODLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOBLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOBLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOBLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_GPIOALPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_GPIOALPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_GPIOALPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_OTGFSLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_OTGFSLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_OTGFSLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_RNGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_RNGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_RNGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_DCMILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_DCMILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_DCMILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_FSMCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_FSMCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_FSMCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_DACLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_DACLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_DACLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_PWRLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_PWRLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_PWRLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_CAN2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_CAN2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_CAN2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_CAN1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_CAN1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_CAN1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_I2C3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_I2C3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_I2C3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_I2C2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_I2C2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_I2C2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_I2C1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_I2C1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_I2C1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_UART5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_UART5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_UART5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_UART4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_UART4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_UART4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_USART3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_USART3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_USART3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_USART2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_USART2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_USART2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_SPI3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_SPI3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_SPI3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_SPI2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_SPI2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_SPI2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_WWDGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_WWDGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_WWDGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM14LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM14LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM14LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM13LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM13LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM13LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM7LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM7LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM7LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LPENR_TIM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LPENR_TIM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LPENR_TIM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM11LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM11LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM11LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM10LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM10LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM10LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM9LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM9LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM9LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SYSCFGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SYSCFGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SYSCFGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SPI1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SPI1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SPI1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SDIOLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SDIOLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SDIOLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_ADC3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_ADC3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_ADC3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_ADC2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_ADC2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_ADC2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_ADC1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_ADC1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_ADC1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_USART6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_USART6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_USART6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_USART1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_USART1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_USART1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM8LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM8LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM8LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_BDRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_BDRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_BDRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_RTCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_RTCSEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCSEL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCSEL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_RTCSEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCSEL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCSEL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEBYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSERDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LPWRRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LPWRRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LPWRRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_WWDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_WWDGRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_WWDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_WDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_WDGRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_WDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_SFTRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_SFTRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_SFTRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_PORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_PORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_PORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_PADRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_PADRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_PADRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_BORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_BORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_BORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_RMVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_RMVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_RMVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_SSCGR_SSCGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_SSCGR_SSCGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_SSCGR_SSCGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_SSCGR_SPREADSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_SSCGR_SPREADSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_SSCGR_SPREADSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_SSCGR_INCSTEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_SSCGR_MODPER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLI2SCFGR_PLLI2SRx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_PLLI2SCFGR_PLLI2SRx_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLI2SCFGR_PLLI2SNx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RCCENUMS_HPP)
