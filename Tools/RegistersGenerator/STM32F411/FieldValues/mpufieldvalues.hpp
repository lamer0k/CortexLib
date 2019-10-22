/*******************************************************************************
* Filename      : mpufieldvalues.hpp
*
* Details       : Enumerations related with MPU peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(MPUENUMS_HPP)
#define MPUENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_TYPER_SEPARATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_TYPER_SEPARATE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_TYPER_SEPARATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_TYPER_DREGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_TYPER_IREGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_CTRL_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_CTRL_ENABLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_CTRL_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_CTRL_HFNMIENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_CTRL_HFNMIENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_CTRL_HFNMIENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_CTRL_PRIVDEFENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_CTRL_PRIVDEFENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_CTRL_PRIVDEFENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RNR_REGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RBAR_REGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 3U> ;
  using Value4 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 4U> ;
  using Value5 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 5U> ;
  using Value6 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 6U> ;
  using Value7 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 7U> ;
  using Value8 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 8U> ;
  using Value9 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 9U> ;
  using Value10 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 10U> ;
  using Value11 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 11U> ;
  using Value12 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 12U> ;
  using Value13 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 13U> ;
  using Value14 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 14U> ;
  using Value15 = FieldValue<MPU_MPU_RBAR_REGION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RBAR_VALID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RBAR_VALID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RBAR_VALID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RBAR_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_ENABLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 15U> ;
  using Value16 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 16U> ;
  using Value17 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 17U> ;
  using Value18 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 18U> ;
  using Value19 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 19U> ;
  using Value20 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 20U> ;
  using Value21 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 21U> ;
  using Value22 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 22U> ;
  using Value23 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 23U> ;
  using Value24 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 24U> ;
  using Value25 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 25U> ;
  using Value26 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 26U> ;
  using Value27 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 27U> ;
  using Value28 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 28U> ;
  using Value29 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 29U> ;
  using Value30 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 30U> ;
  using Value31 = FieldValue<MPU_MPU_RASR_SIZE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_SRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_B_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_B_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_B_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_TEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 3U> ;
  using Value4 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 4U> ;
  using Value5 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 5U> ;
  using Value6 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 6U> ;
  using Value7 = FieldValue<MPU_MPU_RASR_TEX_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_AP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<MPU_MPU_RASR_AP_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_XN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MPU_MPU_RASR_XN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MPU_MPU_RASR_XN_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MPUENUMS_HPP)
