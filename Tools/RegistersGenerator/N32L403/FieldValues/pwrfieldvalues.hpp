/*******************************************************************************
* Filename      : pwrfieldvalues.hpp
*
* Details       : Enumerations related with PWR peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL1_LPMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_PWR_CTRL1_LPMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL1_DRBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL1_DRBP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL1_DRBP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL1_MRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL1_MRSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL1_MRSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_PWR_CTRL1_MRSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_PWR_CTRL1_MRSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL1_LPREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL1_LPREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL1_LPREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL2_PVDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL2_PVDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL2_PVDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL2_PLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_PWR_CTRL2_PLS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL2_PVDFLTENL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL2_PVDFLTENL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL2_PVDFLTENL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_WKUP1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_WKUP1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_WKUP1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_WKUP2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_WKUP2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_WKUP2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_WKUP3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_WKUP3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_WKUP3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_WKUP1PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_WKUP1PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_WKUP1PS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_WKUP2PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_WKUP2PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_WKUP2PS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_WKUP3PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_WKUP3PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_WKUP3PS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_BGDTLPR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_BGDTLPR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_BGDTLPR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_BGDTSTP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_BGDTSTP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_BGDTSTP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_BGDTSTBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_BGDTSTBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_BGDTSTBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_RAM1RET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_RAM1RET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_RAM1RET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_RAM2RET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_RAM2RET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_RAM2RET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_WKUPLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_WKUPLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_WKUPLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_PBDTLPR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_PBDTLPR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_PBDTLPR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_PBDTSTP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_PBDTSTP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_PBDTSTP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_PBDTSTBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_PBDTSTBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_PBDTSTBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_PSTSTBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_PSTSTBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_PSTSTBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CTRL3_PSTSTP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CTRL3_PSTSTP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CTRL3_PSTSTP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS1_WKUPF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS1_WKUPF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS1_WKUPF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS1_WKUPF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS1_WKUPF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS1_WKUPF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS1_WKUPF3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS1_WKUPF3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS1_WKUPF3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS1_STBYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS1_STBYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS1_STBYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS1_IWKUPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS1_IWKUPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS1_IWKUPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS2_LPRUNF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS2_LPRUNF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS2_LPRUNF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS2_MRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS2_MRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS2_MRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STS2_PVDO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STS2_PVDO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STS2_PVDO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STSCLR_CLRWKUP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STSCLR_CLRWKUP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STSCLR_CLRWKUP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STSCLR_CLRWKUP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STSCLR_CLRWKUP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STSCLR_CLRWKUP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STSCLR_CLRWKUP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STSCLR_CLRWKUP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STSCLR_CLRWKUP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_STSCLR_CLRSTBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_STSCLR_CLRSTBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_STSCLR_CLRSTBY_Values, BaseType, 1U> ;
} ;

