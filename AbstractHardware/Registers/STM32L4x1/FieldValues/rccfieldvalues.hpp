/*******************************************************************************
* Filename      : rccfieldvalues.hpp
*
* Details       : Enumerations related with RCC peripheral. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(RCCENUMS_HPP)
#define RCCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLSAI1RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLSAI1RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLSAI1RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLSAI1ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLSAI1ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLSAI1ON_Values, BaseType, 1U> ;
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
struct RCC_CR_HSIASFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIASFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIASFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIKERON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIKERON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIKERON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_MSIRANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CR_MSIRANGE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_MSIRGSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_MSIRGSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_MSIRGSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_MSIPLLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_MSIPLLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_MSIPLLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_MSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_MSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_MSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_MSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_MSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_MSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_HSITRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RCC_ICSCR_HSITRIM_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_HSICAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_MSITRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_MSICAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCOPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCOPRE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCOSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCOSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_STOPWUCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_STOPWUCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_STOPWUCK_Values, BaseType, 1U> ;
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
struct RCC_CFGR_SWS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_SW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_SW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLLR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLLR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLQ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLLQ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLLQ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLQEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLQEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLQEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_PLLCFGR_PLLM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLLSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLLSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLLPDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RCC_PLLCFGR_PLLPDIV_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1R_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1R_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1R_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1R_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1REN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1REN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1Q_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1Q_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1Q_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1Q_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1Q_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1QEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1QEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1QEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1N_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RCC_PLLSAI1CFGR_PLLSAI1PDIV_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_LSECSSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_LSECSSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_LSECSSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_PLLSAI1RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_PLLSAI1RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_PLLSAI1RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_PLLRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_PLLRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_PLLRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_HSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_HSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_HSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_HSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_HSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_HSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_MSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_MSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_MSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_LSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_LSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_LSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_LSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_LSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_LSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_HSI48RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_HSI48RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_HSI48RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_LSECSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_LSECSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_LSECSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_CSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_CSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_CSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_PLLSAI1RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_PLLSAI1RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_PLLSAI1RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_PLLRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_PLLRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_PLLRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_HSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_HSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_HSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_HSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_HSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_HSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_MSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_MSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_MSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_LSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_LSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_LSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_LSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_LSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_LSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_HSI48RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_HSI48RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_HSI48RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_LSECSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_LSECSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_LSECSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_CSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_CSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_CSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_PLLSAI1RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_PLLSAI1RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_PLLSAI1RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_PLLRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_PLLRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_PLLRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_HSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_HSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_HSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_HSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_HSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_HSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_MSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_MSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_MSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_LSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_LSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_LSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_LSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_LSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_LSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_HSI48RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_HSI48RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_HSI48RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_TSCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_TSCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_TSCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_CRCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_CRCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_CRCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_FLASHRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_FLASHRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_FLASHRST_Values, BaseType, 1U> ;
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
struct RCC_AHB2RSTR_RNGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_RNGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_RNGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_AESRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_AESRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_AESRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_ADCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_ADCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_ADCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_GPIOHRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_GPIOHRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_GPIOHRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_GPIOERST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_GPIOERST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_GPIOERST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_GPIODRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_GPIODRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_GPIODRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_GPIOCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_GPIOCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_GPIOCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_GPIOBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_GPIOBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_GPIOBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_GPIOARST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_GPIOARST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_GPIOARST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_QSPIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_QSPIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_QSPIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_LPTIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_LPTIM1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_LPTIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_OPAMPRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_OPAMPRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_OPAMPRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_DAC1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_DAC1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_DAC1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_PWRRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_PWRRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_PWRRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_CAN1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_CAN1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_CAN1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_I2C3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_I2C3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_I2C3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_I2C1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_I2C1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_I2C1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_USART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_USART1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_USART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_USART2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_USART2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_USART2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_SPI3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_SPI3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_SPI3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_SPI2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_SPI2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_SPI2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_LCDRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_LCDRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_LCDRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_TIM7RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_TIM7RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_TIM7RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_TIM6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_TIM6RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_TIM6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_TIM2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_TIM2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_TIM2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_USART4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_USART4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_USART4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_I2C2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_I2C2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_I2C2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_CRSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_CRSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_CRSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR1_USBFSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR1_USBFSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR1_USBFSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR2_LPTIM2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR2_LPTIM2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR2_LPTIM2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR2_SWPMI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR2_SWPMI1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR2_SWPMI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR2_LPUART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR2_LPUART1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR2_LPUART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR2_I2C4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR2_I2C4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR2_I2C4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SAI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SAI1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SAI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM16RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM16RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM16RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM15RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM15RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM15RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_USART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SPI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SDMMCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SDMMCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SDMMCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SYSCFGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_DFSDMRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_DFSDMRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_DFSDMRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_TSCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_TSCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_TSCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_FLASHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_FLASHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_FLASHEN_Values, BaseType, 1U> ;
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
struct RCC_AHB2ENR_RNGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_RNGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_RNGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_AESEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_AESEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_AESEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_ADCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_ADCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_ADCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_GPIOHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_GPIOHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_GPIOHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_GPIOEEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_GPIOEEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_GPIOEEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_GPIODEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_GPIODEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_GPIODEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_GPIOCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_GPIOCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_GPIOCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_GPIOBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_GPIOBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_GPIOBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_GPIOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_GPIOAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_GPIOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_QSPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_QSPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_QSPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_LPTIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_LPTIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_LPTIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_OPAMPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_OPAMPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_OPAMPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_DAC1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_DAC1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_DAC1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_PWREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_PWREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_PWREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_CAN1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_CAN1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_CAN1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_I2C3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_I2C3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_I2C3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_I2C1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_I2C1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_I2C1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_USART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_USART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_USART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_USART2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_USART2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_USART2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_SPI3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_SPI3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_SPI3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_SPI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_SPI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_SPI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_WWDGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_WWDGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_WWDGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_LCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_LCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_LCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_TIM7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_TIM7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_TIM7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_TIM6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_TIM6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_TIM6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_TIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_TIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_TIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_RTCAPBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_RTCAPBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_RTCAPBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_CRSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_CRSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_CRSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_USBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_USBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_USBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_TIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_TIM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_TIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_UART4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_UART4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_UART4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR1_I2C2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR1_I2C2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR1_I2C2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR2_LPTIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR2_LPTIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR2_LPTIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR2_SWPMI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR2_SWPMI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR2_SWPMI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR2_LPUART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR2_LPUART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR2_LPUART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR2_DFSDMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR2_DFSDMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR2_DFSDMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR2_I2C4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR2_I2C4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR2_I2C4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SAI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SAI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SAI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM16EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM16EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM16EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM15EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM15EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM15EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SPI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SDMMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SDMMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SDMMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_FIREWALLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_FIREWALLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_FIREWALLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SYSCFGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1SMENR_TSCSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1SMENR_TSCSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1SMENR_TSCSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1SMENR_CRCSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1SMENR_CRCSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1SMENR_CRCSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1SMENR_SRAM1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1SMENR_SRAM1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1SMENR_SRAM1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1SMENR_FLASHSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1SMENR_FLASHSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1SMENR_FLASHSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1SMENR_DMA2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1SMENR_DMA2SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1SMENR_DMA2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1SMENR_DMA1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1SMENR_DMA1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1SMENR_DMA1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_RNGSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_RNGSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_RNGSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_AESSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_AESSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_AESSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_ADCFSSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_ADCFSSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_ADCFSSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_SRAM2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_SRAM2SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_SRAM2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_GPIOHSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_GPIOHSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_GPIOHSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_GPIOESMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_GPIOESMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_GPIOESMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_GPIODSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_GPIODSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_GPIODSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_GPIOCSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_GPIOCSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_GPIOCSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_GPIOBSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_GPIOBSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_GPIOBSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2SMENR_GPIOASMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2SMENR_GPIOASMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2SMENR_GPIOASMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3SMENR_QSPISMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3SMENR_QSPISMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3SMENR_QSPISMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_LPTIM1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_LPTIM1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_LPTIM1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_OPAMPSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_OPAMPSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_OPAMPSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_DAC1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_DAC1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_DAC1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_PWRSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_PWRSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_PWRSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_CAN1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_CAN1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_CAN1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_I2C3SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_I2C3SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_I2C3SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_I2C1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_I2C1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_I2C1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_USART2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_USART2SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_USART2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_USART1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_USART1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_USART1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_SP3SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_SP3SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_SP3SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_SPI2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_SPI2SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_SPI2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_WWDGSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_WWDGSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_WWDGSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_LCDSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_LCDSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_LCDSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_TIM7SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_TIM7SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_TIM7SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_TIM6SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_TIM6SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_TIM6SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_TIM2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_TIM2SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_TIM2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_RTCAPBSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_RTCAPBSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_RTCAPBSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_USBFSSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_USBFSSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_USBFSSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_I2C2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_I2C2SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_I2C2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR1_CRSSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR1_CRSSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR1_CRSSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR2_LPTIM2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR2_LPTIM2SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR2_LPTIM2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR2_SWPMI1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR2_SWPMI1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR2_SWPMI1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1SMENR2_LPUART1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1SMENR2_LPUART1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1SMENR2_LPUART1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_SAI1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_SAI1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_SAI1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_TIM16SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_TIM16SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_TIM16SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_TIM15SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_TIM15SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_TIM15SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_USART1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_USART1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_USART1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_SPI1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_SPI1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_SPI1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_TIM1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_TIM1SMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_TIM1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_SDMMCSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_SDMMCSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_SDMMCSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2SMENR_SYSCFGSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2SMENR_SYSCFGSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2SMENR_SYSCFGSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_SWPMI1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_SWPMI1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_SWPMI1SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_ADCSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_ADCSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_ADCSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_ADCSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_ADCSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_CLK48SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_CLK48SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_CLK48SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_CLK48SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_CLK48SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_SAI1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_SAI1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_SAI1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_SAI1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_SAI1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_LPTIM2SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_LPTIM2SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_LPTIM2SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_LPTIM2SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_LPTIM2SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_LPTIM1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_LPTIM1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_LPTIM1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_LPTIM1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_LPTIM1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_I2C3SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_I2C3SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_I2C3SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_I2C3SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_I2C3SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_I2C1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_I2C1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_I2C1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_I2C1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_I2C1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_LPUART1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_LPUART1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_LPUART1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_LPUART1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_LPUART1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_USART2SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_USART2SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_USART2SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_USART2SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_USART2SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_USART1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_USART1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_USART1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_USART1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_USART1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_USART4SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_USART4SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_USART4SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_USART4SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_USART4SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_USART3SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_USART3SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_USART3SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_USART3SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_USART3SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CCIPR_I2C2SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CCIPR_I2C2SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CCIPR_I2C2SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CCIPR_I2C2SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CCIPR_I2C2SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSCOSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSCOSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSCOSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSCOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSCOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSCOEN_Values, BaseType, 1U> ;
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
struct RCC_BDCR_RTCSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSECSSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSECSSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSECSSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSECSSON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSECSSON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSECSSON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEDRV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 3U> ;
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
struct RCC_CSR_LPWRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LPWRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LPWRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_WWDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_WWDGRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_WWDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_IWDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_IWDGRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_IWDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_SFTRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_SFTRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_SFTRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_BORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_BORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_BORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_PINRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_PINRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_PINRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_OBLRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_OBLRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_OBLRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_FIREWALLRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_FIREWALLRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_FIREWALLRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_RMVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_RMVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_RMVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_MSISRANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CSR_MSISRANGE_Values, BaseType, 15U> ;
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
struct RCC_CRRCR_HSI48ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CRRCR_HSI48ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CRRCR_HSI48ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CRRCR_HSI48RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CRRCR_HSI48RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CRRCR_HSI48RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CRRCR_HSI48CAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RCCENUMS_HPP)
