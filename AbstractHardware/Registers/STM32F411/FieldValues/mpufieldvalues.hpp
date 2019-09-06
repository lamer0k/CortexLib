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

#include "fieldvalues.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_TYPER_SEPARATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
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
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_CTRL_HFNMIENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_CTRL_PRIVDEFENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RNR_REGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RBAR_REGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
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
struct MPU_MPU_RBAR_VALID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RBAR_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
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
struct MPU_MPU_RASR_SRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_B_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MPU_MPU_RASR_TEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
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
struct MPU_MPU_RASR_AP_Values: public RegisterField<Reg, offset, size, AccessMode> 
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
struct MPU_MPU_RASR_XN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(MPUENUMS_HPP)
