/*******************************************************************************
* Filename      : tscfieldvalues.hpp
*
* Details       : Enumerations related with TSC peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_DET_PERIOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TSC_TSC_CTRL_DET_PERIOD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_DET_FILTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_DET_FILTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_DET_FILTER_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_CTRL_DET_FILTER_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_CTRL_DET_FILTER_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_HW_DET_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_HW_DET_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_HW_DET_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_HW_DET_ST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_HW_DET_ST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_HW_DET_ST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_LESS_DET_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_LESS_DET_SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_LESS_DET_SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_GREAT_DET_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_GREAT_DET_SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_GREAT_DET_SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_DET_INTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_DET_INTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_DET_INTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_TIM4_ETR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_TIM4_ETR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_TIM4_ETR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CTRL_TIM2_ETR_CH1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_CTRL_TIM2_ETR_CH1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_CTRL_TIM2_ETR_CH1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_CHNEN_CHN_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_STS_CNT_VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_STS_LESS_DET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_STS_LESS_DET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_STS_LESS_DET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_STS_GREAT_DET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_STS_GREAT_DET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_STS_GREAT_DET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_STS_CHN_NUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TSC_TSC_STS_CHN_NUM_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_ANA_CTRL_SW_TSC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_ANA_CTRL_SW_TSC_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_ANA_CTRL_SW_TSC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_ANA_SEL_SP_OPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_ANA_SEL_SP_OPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_ANA_SEL_SP_OPT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_ANA_SEL_SP_OPT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_ANA_SEL_SP_OPT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_ANA_SEL_PAD_OPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_ANA_SEL_PAD_OPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_ANA_SEL_PAD_OPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST0_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST3_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST4_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST5_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST6_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR0_CHN_RESIST7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR0_CHN_RESIST7_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST8_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST9_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST10_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST11_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST12_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST13_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST14_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR1_CHN_RESIST15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR1_CHN_RESIST15_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST16_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST17_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST18_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST19_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST20_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST21_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST22_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_RESR2_CHN_RESIST23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TSC_TSC_RESR2_CHN_RESIST23_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD0_BASE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD0_DELTA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD1_BASE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD1_DELTA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD2_BASE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD2_DELTA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD3_BASE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD3_DELTA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD4_BASE4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD4_DELTA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD5_BASE5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD5_DELTA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD6_BASE6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD6_DELTA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD7_BASE7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD7_DELTA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD8_BASE8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD8_DELTA8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD9_BASE9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD9_DELTA9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD10_BASE10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD10_DELTA10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD11_BASE11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD11_DELTA11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD12_BASE12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD12_DELTA12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD13_BASE13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD13_DELTA13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD14_BASE14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD14_DELTA14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD15_BASE15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD15_DELTA15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD16_BASE16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD16_DELTA16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD17_BASE17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD17_DELTA17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD18_BASE18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD18_DELTA18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD19_BASE19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD19_DELTA19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD20_BASE20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TSC_TSC_THRHD20_DELTA20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

