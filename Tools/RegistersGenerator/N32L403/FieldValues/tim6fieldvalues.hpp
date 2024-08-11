/*******************************************************************************
* Filename      : tim6fieldvalues.hpp
*
* Details       : Enumerations related with TIM6 peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_CTRL1_CNTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_CTRL1_CNTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_CTRL1_CNTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_CTRL1_UPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_CTRL1_UPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_CTRL1_UPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_CTRL1_UPRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_CTRL1_UPRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_CTRL1_UPRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_CTRL1_ONEPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_CTRL1_ONEPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_CTRL1_ONEPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_CTRL1_ARPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_CTRL1_ARPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_CTRL1_ARPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_CTRL2_MMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM6_TIMx_CTRL2_MMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_DINTEN_UIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_DINTEN_UIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_DINTEN_UIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_DINTEN_UDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_DINTEN_UDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_DINTEN_UDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_STS_UDITF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_STS_UDITF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_STS_UDITF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_EVTGEN_UDGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM6_TIMx_EVTGEN_UDGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM6_TIMx_EVTGEN_UDGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM6_TIMx_AR_AR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

