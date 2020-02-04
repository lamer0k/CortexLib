/*******************************************************************************
* Filename      : rccfieldvalues.hpp
*
* Details       : Enumerations related with RCC peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(RCCENUMS_HPP)
#define RCCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 1U> ;
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
struct RCC_CR_HSICAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSEON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSERDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSEBYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSEBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_CSSON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_CSSON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_CSSON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLLRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLLRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLLRDY_Values, BaseType, 1U> ;
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
struct RCC_CFGR_SWS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 3U> ;
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
struct RCC_CFGR_PPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_PPRE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_ADCPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_ADCPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_ADCPRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_PLLSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_PLLSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_PLLSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_PLLSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_PLLSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_PLLXTPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_PLLXTPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_PLLXTPRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_PLLMUL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CFGR_PLLMUL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCO_Values, BaseType, 7U> ;
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
struct RCC_CFGR_PLLNODIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_PLLNODIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_PLLNODIV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSI14RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSI14RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSI14RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSI48RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSI48RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSI48RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_CSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_CSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_CSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSI14RDYE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSI14RDYE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSI14RDYE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSI48RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSI48RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSI48RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_LSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_LSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_LSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_PLLRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_PLLRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_PLLRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSI14RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSI14RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSI14RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_HSI48RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_HSI48RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_HSI48RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIR_CSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIR_CSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIR_CSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SYSCFGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_ADCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_ADCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_ADCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SPI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_USART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM15RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM15RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM15RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM16RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM16RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM16RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM17RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM17RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM17RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_DBGMCURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_DBGMCURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_DBGMCURST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM6RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM7RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM7RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM7RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_TIM14RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_TIM14RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_TIM14RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_WWDGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_WWDGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_WWDGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_SPI2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_SPI2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_SPI2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_USART2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_USART2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_USART2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_USART3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_USART3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_USART3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_USART4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_USART4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_USART4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_USART5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_USART5RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_USART5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_I2C1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_I2C1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_I2C1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_I2C2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_I2C2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_I2C2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_USBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_USBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_USBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_CANRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_CANRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_CANRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_CRSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_CRSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_CRSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_PWRRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_PWRRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_PWRRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_DACRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_DACRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_DACRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1RSTR_CECRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1RSTR_CECRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1RSTR_CECRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_DMA1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_DMA1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_DMA1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_DMA2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_DMA2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_DMA2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_SRAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_SRAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_SRAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_FLITFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_FLITFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_FLITFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_IOPAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_IOPAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_IOPAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_IOPBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_IOPBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_IOPBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_IOPCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_IOPCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_IOPCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_IOPDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_IOPDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_IOPDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_IOPFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_IOPFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_IOPFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBENR_TSCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBENR_TSCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBENR_TSCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SYSCFGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_ADCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_ADCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_ADCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SPI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM15EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM15EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM15EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM16EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM16EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM16EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM17EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM17EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM17EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_DBGMCUEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_DBGMCUEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_DBGMCUEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART8EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART8EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART8EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_TIM14EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_TIM14EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_TIM14EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_WWDGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_WWDGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_WWDGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_SPI2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_SPI2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_SPI2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_USART2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_USART2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_USART2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_USART3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_USART3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_USART3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_USART4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_USART4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_USART4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_USART5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_USART5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_USART5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_I2C1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_I2C1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_I2C1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_I2C2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_I2C2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_I2C2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_USBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_USBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_USBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_CANEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_CANEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_CANEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_CRSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_CRSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_CRSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_PWREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_PWREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_PWREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_DACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_DACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_DACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1ENR_CECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1ENR_CECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1ENR_CECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSERDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEBYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEBYP_Values, BaseType, 1U> ;
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
struct RCC_BDCR_RTCSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_BDCR_RTCSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_RTCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_BDRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_BDRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_BDRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_RMVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_RMVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_RMVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_OBLRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_OBLRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_OBLRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_PINRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_PINRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_PINRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_PORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_PORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_PORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_SFTRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_SFTRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_SFTRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_IWDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_IWDGRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_IWDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_WWDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_WWDGRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_WWDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LPWRRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LPWRRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LPWRRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBRSTR_IOPARST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBRSTR_IOPARST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBRSTR_IOPARST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBRSTR_IOPBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBRSTR_IOPBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBRSTR_IOPBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBRSTR_IOPCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBRSTR_IOPCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBRSTR_IOPCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBRSTR_IOPDRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBRSTR_IOPDRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBRSTR_IOPDRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBRSTR_IOPFRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBRSTR_IOPFRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBRSTR_IOPFRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHBRSTR_TSCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHBRSTR_TSCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHBRSTR_TSCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR2_PREDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CFGR2_PREDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR3_USART1SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR3_USART1SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR3_USART1SW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR3_USART1SW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR3_USART1SW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR3_I2C1SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR3_I2C1SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR3_I2C1SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR3_CECSW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR3_CECSW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR3_CECSW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR3_USBSW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR3_USBSW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR3_USBSW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR3_ADCSW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR3_ADCSW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR3_ADCSW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR3_USART2SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR3_USART2SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR3_USART2SW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR3_USART2SW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR3_USART2SW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI14ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR2_HSI14ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR2_HSI14ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI14RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR2_HSI14RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR2_HSI14RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI14DIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR2_HSI14DIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR2_HSI14DIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI14TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RCC_CR2_HSI14TRIM_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI14CAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI48ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR2_HSI48ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR2_HSI48ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI48RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR2_HSI48RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR2_HSI48RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR2_HSI48CAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR2_HSI48CAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR2_HSI48CAL_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(RCCENUMS_HPP)
