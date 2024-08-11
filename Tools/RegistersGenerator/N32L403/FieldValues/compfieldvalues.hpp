/*******************************************************************************
* Filename      : compfieldvalues.hpp
*
* Details       : Enumerations related with COMP peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_INTEN_CMP1IEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_INTEN_CMP1IEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_INTEN_CMP1IEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_INTEN_CMP2IEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_INTEN_CMP2IEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_INTEN_CMP2IEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_LPCKSEL_LPCKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_LPCKSEL_LPCKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_LPCKSEL_LPCKSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_WINMODE_CMP12MD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_WINMODE_CMP12MD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_WINMODE_CMP12MD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_LOCK_CMP1LK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_LOCK_CMP1LK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_LOCK_CMP1LK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_LOCK_CMP2LK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_LOCK_CMP2LK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_LOCK_CMP2LK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_CTRL_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP1_CTRL_INPSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_OUTTRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP1_CTRL_OUTTRG_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CTRL_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CTRL_HYST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_BLKING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_CTRL_BLKING_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_OUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_INPDAC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_INPDAC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_INPDAC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CTRL_PWRMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CTRL_PWRMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CTRL_PWRMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_FILC_FILEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_FILC_FILEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_FILC_FILEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_FILC_THRESH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<COMP_COMP1_FILC_THRESH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_FILC_SAMPW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 15U> ;
  using Value16 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 16U> ;
  using Value17 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 17U> ;
  using Value18 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 18U> ;
  using Value19 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 19U> ;
  using Value20 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 20U> ;
  using Value21 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 21U> ;
  using Value22 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 22U> ;
  using Value23 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 23U> ;
  using Value24 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 24U> ;
  using Value25 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 25U> ;
  using Value26 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 26U> ;
  using Value27 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 27U> ;
  using Value28 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 28U> ;
  using Value29 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 29U> ;
  using Value30 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 30U> ;
  using Value31 = FieldValue<COMP_COMP1_FILC_SAMPW_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_FILP_CLKPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_CTRL_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP2_CTRL_INPSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_OUTTRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP2_CTRL_OUTTRG_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CTRL_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CTRL_HYST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_BLKING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_CTRL_BLKING_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CTRL_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CTRL_OUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CTRL_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_FILC_FILEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_FILC_FILEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_FILC_FILEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_FILC_THRESH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<COMP_COMP2_FILC_THRESH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_FILC_SAMPW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 15U> ;
  using Value16 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 16U> ;
  using Value17 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 17U> ;
  using Value18 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 18U> ;
  using Value19 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 19U> ;
  using Value20 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 20U> ;
  using Value21 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 21U> ;
  using Value22 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 22U> ;
  using Value23 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 23U> ;
  using Value24 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 24U> ;
  using Value25 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 25U> ;
  using Value26 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 26U> ;
  using Value27 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 27U> ;
  using Value28 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 28U> ;
  using Value29 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 29U> ;
  using Value30 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 30U> ;
  using Value31 = FieldValue<COMP_COMP2_FILC_SAMPW_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_FILP_CLKPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_OSEL_CMP2XO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_OSEL_CMP2XO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_OSEL_CMP2XO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_VREFSCL_VV1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_VREFSCL_VV1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_VREFSCL_VV1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_VREFSCL_VV1TRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_VREFSCL_VV2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_VREFSCL_VV2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_VREFSCL_VV2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_VREFSCL_VV2TRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_TEST_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_TEST_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_TEST_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_INTSTS_CMP1IS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_INTSTS_CMP1IS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_INTSTS_CMP1IS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_INTSTS_CMP2IS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_INTSTS_CMP2IS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_INTSTS_CMP2IS_Values, BaseType, 1U> ;
} ;

