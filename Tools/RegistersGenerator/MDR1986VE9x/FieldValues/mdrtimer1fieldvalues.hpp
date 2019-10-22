/*******************************************************************************
* Filename      : mdrtimer1fieldvalues.hpp
*
* Details       : Enumerations related with MDR_TIMER1 peripheral. This header
*                 file is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRTIMER1ENUMS_HPP)
#define MDRTIMER1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNT_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_PSG_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_ARR_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNTRL_CNT_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_CNTRL_CNT_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_CNTRL_CNT_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNTRL_ARRB_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Immediately = FieldValue<MDR_TIMER1_CNTRL_ARRB_EN_Values, BaseType, 0U> ;
  using OnCompleted = FieldValue<MDR_TIMER1_CNTRL_ARRB_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNTRL_WR_CMPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ready = FieldValue<MDR_TIMER1_CNTRL_WR_CMPL_Values, BaseType, 0U> ;
  using BUSY = FieldValue<MDR_TIMER1_CNTRL_WR_CMPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNTRL_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UP = FieldValue<MDR_TIMER1_CNTRL_DIR_Values, BaseType, 0U> ;
  using DOWN = FieldValue<MDR_TIMER1_CNTRL_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNTRL_FDTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TIM_CLK_div1 = FieldValue<MDR_TIMER1_CNTRL_FDTS_Values, BaseType, 0U> ;
  using TIM_CLK_div2 = FieldValue<MDR_TIMER1_CNTRL_FDTS_Values, BaseType, 1U> ;
  using TIM_CLK_div4 = FieldValue<MDR_TIMER1_CNTRL_FDTS_Values, BaseType, 2U> ;
  using TIM_CLK_div8 = FieldValue<MDR_TIMER1_CNTRL_FDTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNTRL_CNT_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DIR_TIM_CLK = FieldValue<MDR_TIMER1_CNTRL_CNT_MODE_Values, BaseType, 0U> ;
  using UpDown_TIM_CLK = FieldValue<MDR_TIMER1_CNTRL_CNT_MODE_Values, BaseType, 1U> ;
  using DIR_ExtEvents = FieldValue<MDR_TIMER1_CNTRL_CNT_MODE_Values, BaseType, 2U> ;
  using UpDown_ExtEvents = FieldValue<MDR_TIMER1_CNTRL_CNT_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CNTRL_EVENT_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Rise_TIM_CLK = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 0U> ;
  using CNT_eq_ARR_TIM1 = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 1U> ;
  using CNT_eq_ARR_TIM2 = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 2U> ;
  using CNT_eq_ARR_TIM3 = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 3U> ;
  using Event_Ch1 = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 4U> ;
  using Event_Ch2 = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 5U> ;
  using Event_Ch3 = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 6U> ;
  using Event_Ch4 = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 7U> ;
  using Rise_ETR = FieldValue<MDR_TIMER1_CNTRL_EVENT_SEL_Values, BaseType, 8U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CCR1_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_CHFLTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TIM_CLK = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 0U> ;
  using 2_TIM_CLK = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 1U> ;
  using 4_TIM_CLK = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 2U> ;
  using 8_TIM_CLK = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 3U> ;
  using 6_FDTS_div2 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 4U> ;
  using 8_FDTS_div2 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 5U> ;
  using 6_FDTS_div4 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 6U> ;
  using 8_FDTS_div4 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 7U> ;
  using 6_FDTS_div8 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 8U> ;
  using 8_FDTS_div8 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 9U> ;
  using 5_FDTS_div16 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 10U> ;
  using 6_FDTS_div16 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 11U> ;
  using 8_FDTS_div16 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 12U> ;
  using 5_FDTS_div32 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 13U> ;
  using 6_FDTS_div32 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 14U> ;
  using 8_FDTS_div32 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHFLTR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_CHSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Rise_Pin = FieldValue<MDR_TIMER1_CH1_CNTRL_CHSEL_Values, BaseType, 0U> ;
  using Fall_Pin = FieldValue<MDR_TIMER1_CH1_CNTRL_CHSEL_Values, BaseType, 1U> ;
  using Rise_NextCH = FieldValue<MDR_TIMER1_CH1_CNTRL_CHSEL_Values, BaseType, 2U> ;
  using Rise_NextNextCH = FieldValue<MDR_TIMER1_CH1_CNTRL_CHSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_CHPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using EveryEvent = FieldValue<MDR_TIMER1_CH1_CNTRL_CHPSC_Values, BaseType, 0U> ;
  using Events_div2 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHPSC_Values, BaseType, 1U> ;
  using Events_div4 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHPSC_Values, BaseType, 2U> ;
  using Events_div8 = FieldValue<MDR_TIMER1_CH1_CNTRL_CHPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_OCCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCE_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_OCCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ref_0 = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 0U> ;
  using Ref_1_eqCCRx = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 1U> ;
  using Ref_0_eqCCRx = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 2U> ;
  using Ref_sw_eqCCRx = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 3U> ;
  using Ref0 = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 4U> ;
  using Ref_1 = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 5U> ;
  using Ref_nDir_inCCRs = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 6U> ;
  using Ref_Dir_inCCRs = FieldValue<MDR_TIMER1_CH1_CNTRL_OCCM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_BRKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_CH1_CNTRL_BRKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_CH1_CNTRL_BRKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_ETREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_CH1_CNTRL_ETREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_CH1_CNTRL_ETREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_WR_CMPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ready = FieldValue<MDR_TIMER1_CH1_CNTRL_WR_CMPL_Values, BaseType, 0U> ;
  using BUSY = FieldValue<MDR_TIMER1_CH1_CNTRL_WR_CMPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL_CAP_nPWM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PWM = FieldValue<MDR_TIMER1_CH1_CNTRL_CAP_nPWM_Values, BaseType, 0U> ;
  using CAPTURE = FieldValue<MDR_TIMER1_CH1_CNTRL_CAP_nPWM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL1_SelOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IN = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelOE_Values, BaseType, 0U> ;
  using OUT = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelOE_Values, BaseType, 1U> ;
  using IO_byRef = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelOE_Values, BaseType, 2U> ;
  using IO_byDTG = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelOE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL1_SelO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelO_Values, BaseType, 0U> ;
  using High = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelO_Values, BaseType, 1U> ;
  using Ref = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelO_Values, BaseType, 2U> ;
  using DTG = FieldValue<MDR_TIMER1_CH1_CNTRL1_SelO_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL1_Inv_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_CH1_CNTRL1_Inv_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_CH1_CNTRL1_Inv_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL1_NSelOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelOE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelOE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelOE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL1_NSelO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelO_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelO_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NSelO_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL1_NInv_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NInv_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_CH1_CNTRL1_NInv_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_DTG_DTG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using x0 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 0U> ;
  using x1 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 1U> ;
  using x2 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 2U> ;
  using x3 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 3U> ;
  using x4 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 4U> ;
  using x5 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 5U> ;
  using x6 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 6U> ;
  using x7 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 7U> ;
  using x8 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 8U> ;
  using x9 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 9U> ;
  using x10 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 10U> ;
  using x11 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 11U> ;
  using x12 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 12U> ;
  using x13 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 13U> ;
  using x14 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 14U> ;
  using x15 = FieldValue<MDR_TIMER1_CH1_DTG_DTG_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_DTG_EDTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TIM_Clock = FieldValue<MDR_TIMER1_CH1_DTG_EDTS_Values, BaseType, 0U> ;
  using FDTS = FieldValue<MDR_TIMER1_CH1_DTG_EDTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_DTG_DTGx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_BRKETR_CNTRL_BRK_INV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Normal = FieldValue<MDR_TIMER1_BRKETR_CNTRL_BRK_INV_Values, BaseType, 0U> ;
  using Invert = FieldValue<MDR_TIMER1_BRKETR_CNTRL_BRK_INV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_BRKETR_CNTRL_ETR_INV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_INV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_INV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_BRKETR_CNTRL_ETR_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div1 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_PSC_Values, BaseType, 0U> ;
  using div2 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_PSC_Values, BaseType, 1U> ;
  using div4 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_PSC_Values, BaseType, 2U> ;
  using div8 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 1U> ;
  using Value2 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 2U> ;
  using Value3 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 3U> ;
  using Value4 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 4U> ;
  using Value5 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 5U> ;
  using Value6 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 6U> ;
  using Value7 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 7U> ;
  using Value8 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 8U> ;
  using Value9 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 9U> ;
  using Value10 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 10U> ;
  using Value11 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 11U> ;
  using Value12 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 12U> ;
  using Value13 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 13U> ;
  using Value14 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 14U> ;
  using Value15 = FieldValue<MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CNT_ZERO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_STATUS_CNT_ZERO_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_STATUS_CNT_ZERO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CNT_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CNT_ARR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CNT_ARR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_ETR_RE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_ETR_RE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_ETR_RE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_ETR_FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_ETR_FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_ETR_FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_BRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_BRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_BRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_CAP_CH1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_CAP_CH2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_CAP_CH3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_CAP_CH4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_CAP_CH4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_REF_CH1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_REF_CH2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_REF_CH3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR_REF_CH4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR_REF_CH4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR1_CAP_CH1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR1_CAP_CH2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR1_CAP_CH3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_STATUS_CCR1_CAP_CH4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_STATUS_CCR1_CAP_CH4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CNT_ZERO_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_IE_CNT_ZERO_IE_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_IE_CNT_ZERO_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CNT_ARR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CNT_ARR_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CNT_ARR_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_ETR_RE_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_ETR_RE_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_ETR_RE_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_ETR_FE_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_ETR_FE_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_ETR_FE_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_BRK_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_BRK_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_BRK_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_CAP_CH1_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH1_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH1_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_CAP_CH2_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH2_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH2_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_CAP_CH3_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH3_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH3_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_CAP_CH4_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH4_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_CAP_CH4_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_REF_CH1_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH1_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH1_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_REF_CH2_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH2_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH2_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_REF_CH3_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH3_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH3_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR_REF_CH4_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH4_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR_REF_CH4_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR1_CAP_CH1_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH1_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH1_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR1_CAP_CH2_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH2_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH2_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR1_CAP_CH3_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH3_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH3_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_IE_CCR1_CAP_CH4_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH4_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_IE_CCR1_CAP_CH4_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CNT_ZERO_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_DMA_RE_CNT_ZERO_DMAE_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_DMA_RE_CNT_ZERO_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CNT_ARR_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CNT_ARR_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CNT_ARR_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_ETR_RE_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_ETR_RE_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_ETR_RE_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_ETR_FE_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_ETR_FE_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_ETR_FE_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_BRK_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_BRK_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_BRK_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_CAP_CH1_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH1_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH1_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_CAP_CH2_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH2_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH2_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_CAP_CH3_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH3_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH3_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_CAP_CH4_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH4_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_CAP_CH4_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_REF_CH1_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH1_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH1_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_REF_CH2_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH2_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH2_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_REF_CH3_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH3_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH3_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR_REF_CH4_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH4_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR_REF_CH4_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR1_CAP_CH1_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH1_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH1_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR1_CAP_CH2_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH2_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH2_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR1_CAP_CH3_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH3_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH3_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_DMA_RE_CCR1_CAP_CH4_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH4_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_TIMER1_DMA_RE_CCR1_CAP_CH4_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL2_CHSel1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Rise_Pin = FieldValue<MDR_TIMER1_CH1_CNTRL2_CHSel1_Values, BaseType, 0U> ;
  using Fall_Pin = FieldValue<MDR_TIMER1_CH1_CNTRL2_CHSel1_Values, BaseType, 1U> ;
  using Fall_NextCH = FieldValue<MDR_TIMER1_CH1_CNTRL2_CHSel1_Values, BaseType, 2U> ;
  using Fall_NextNextCH = FieldValue<MDR_TIMER1_CH1_CNTRL2_CHSel1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL2_CCR1_En_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_CH1_CNTRL2_CCR1_En_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_CH1_CNTRL2_CCR1_En_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL2_CCRRLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Immediately = FieldValue<MDR_TIMER1_CH1_CNTRL2_CCRRLD_Values, BaseType, 0U> ;
  using byPreriodCNT = FieldValue<MDR_TIMER1_CH1_CNTRL2_CCRRLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_TIMER1_CH1_CNTRL2_CAP_CCR_Fix_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_TIMER1_CH1_CNTRL2_CAP_CCR_Fix_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_TIMER1_CH1_CNTRL2_CAP_CCR_Fix_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRTIMER1ENUMS_HPP)
