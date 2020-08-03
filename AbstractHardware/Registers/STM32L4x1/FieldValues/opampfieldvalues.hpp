/*******************************************************************************
* Filename      : opampfieldvalues.hpp
*
* Details       : Enumerations related with OPAMP peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(OPAMPENUMS_HPP)
#define OPAMPENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_OPAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_OPAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_OPAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_OPALPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_OPALPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_OPALPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_OPAMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_OPAMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_OPAMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP1_CSR_OPAMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP1_CSR_OPAMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_PGA_GAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_PGA_GAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_PGA_GAIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP1_CSR_PGA_GAIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP1_CSR_PGA_GAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_VM_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_VM_SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_VM_SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP1_CSR_VM_SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP1_CSR_VM_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_VP_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_VP_SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_VP_SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_CALON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_CALON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_CALON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_CALSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_CALSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_CALSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_USERTRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_USERTRIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_USERTRIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_CALOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_CALOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_CALOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_CSR_OPA_RANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_CSR_OPA_RANGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_CSR_OPA_RANGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_OPAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_OPAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_OPAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_OPALPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_OPALPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_OPALPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_OPAMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_OPAMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_OPAMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP2_CSR_OPAMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP2_CSR_OPAMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_PGA_GAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_PGA_GAIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_PGA_GAIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP2_CSR_PGA_GAIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP2_CSR_PGA_GAIN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_VM_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_VM_SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_VM_SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP2_CSR_VM_SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP2_CSR_VM_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_VP_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_VP_SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_VP_SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_CALON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_CALON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_CALON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_CALSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_CALSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_CALSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_USERTRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_USERTRIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_USERTRIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_CSR_CALOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_CSR_CALOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_CSR_CALOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 15U> ;
  using Value16 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 16U> ;
  using Value17 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 17U> ;
  using Value18 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 18U> ;
  using Value19 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 19U> ;
  using Value20 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 20U> ;
  using Value21 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 21U> ;
  using Value22 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 22U> ;
  using Value23 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 23U> ;
  using Value24 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 24U> ;
  using Value25 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 25U> ;
  using Value26 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 26U> ;
  using Value27 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 27U> ;
  using Value28 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 28U> ;
  using Value29 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 29U> ;
  using Value30 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 30U> ;
  using Value31 = FieldValue<OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values, BaseType, 31U> ;
} ;

#endif //#if !defined(OPAMPENUMS_HPP)
