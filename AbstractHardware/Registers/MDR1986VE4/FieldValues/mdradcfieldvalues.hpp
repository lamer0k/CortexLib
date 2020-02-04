/*******************************************************************************
* Filename      : mdradcfieldvalues.hpp
*
* Details       : Enumerations related with MDR_ADC peripheral. This header file
*                 is auto-generated for MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRADCENUMS_HPP)
#define MDRADCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_ADON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_Cfg_ADON_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_ADC_ADC1_Cfg_ADON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_GO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_ADC_ADC1_Cfg_GO_Values, BaseType, 0U> ;
  using Start = FieldValue<MDR_ADC_ADC1_Cfg_GO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_CLKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CPU_Clock = FieldValue<MDR_ADC_ADC1_Cfg_CLKS_Values, BaseType, 0U> ;
  using ADC_Clock = FieldValue<MDR_ADC_ADC1_Cfg_CLKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_SAMPLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Single = FieldValue<MDR_ADC_ADC1_Cfg_SAMPLE_Values, BaseType, 0U> ;
  using Continuouse = FieldValue<MDR_ADC_ADC1_Cfg_SAMPLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_CHS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel_0_RefN = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 0U> ;
  using Channel_1_RefP = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 1U> ;
  using Channel_2 = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 2U> ;
  using Channel_3 = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 3U> ;
  using Channel_4 = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 4U> ;
  using Channel_5 = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 5U> ;
  using Channel_6 = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 6U> ;
  using Channel_7 = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 7U> ;
  using TS_VRef_1_23 = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 30U> ;
  using TS_Temperature = FieldValue<MDR_ADC_ADC1_Cfg_CHS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_CHCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_Cfg_CHCH_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_ADC_ADC1_Cfg_CHCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_RGNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_Cfg_RGNC_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_ADC_ADC1_Cfg_RGNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_M_REF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Internal = FieldValue<MDR_ADC_ADC1_Cfg_M_REF_Values, BaseType, 0U> ;
  using External = FieldValue<MDR_ADC_ADC1_Cfg_M_REF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_DIV_CLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using div_1 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 0U> ;
  using div_2 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 1U> ;
  using div_4 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 2U> ;
  using div_8 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 3U> ;
  using div_16 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 4U> ;
  using div_32 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 5U> ;
  using div_64 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 6U> ;
  using div_128 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 7U> ;
  using div_256 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 8U> ;
  using div_512 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 9U> ;
  using div_1024 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 10U> ;
  using div_2048 = FieldValue<MDR_ADC_ADC1_Cfg_DIV_CLK_Values, BaseType, 11U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_TS_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_Cfg_TS_EN_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_ADC_ADC1_Cfg_TS_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_TS_BUFF_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_Cfg_TS_BUFF_EN_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_ADC_ADC1_Cfg_TS_BUFF_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_SEL_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_Cfg_SEL_TS_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_Cfg_SEL_TS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_SEL_VREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_Cfg_SEL_VREF_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_Cfg_SEL_VREF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_Cfg_Delay_GO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _1 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 0U> ;
  using _2 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 1U> ;
  using _3 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 2U> ;
  using _4 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 3U> ;
  using _5 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 4U> ;
  using _6 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 5U> ;
  using _7 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 6U> ;
  using _8 = FieldValue<MDR_ADC_ADC1_Cfg_Delay_GO_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC2_Cfg_ADC1_OP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Own = FieldValue<MDR_ADC_ADC2_Cfg_ADC1_OP_Values, BaseType, 0U> ;
  using Thermosensor = FieldValue<MDR_ADC_ADC2_Cfg_ADC1_OP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_H_Level_Level_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_RESULT_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_RESULT_Channel_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Channel_0_RefN = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 0U> ;
  using Channel_1_RefP = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 1U> ;
  using Channel_2 = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 2U> ;
  using Channel_3 = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 3U> ;
  using Channel_4 = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 4U> ;
  using Channel_5 = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 5U> ;
  using Channel_6 = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 6U> ;
  using Channel_7 = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 7U> ;
  using TS_VRef_1_23 = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 30U> ;
  using TS_Temperature = FieldValue<MDR_ADC_ADC1_RESULT_Channel_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_STATUS_Overwrite_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Normal = FieldValue<MDR_ADC_ADC1_STATUS_Overwrite_Values, BaseType, 0U> ;
  using Overwrite = FieldValue<MDR_ADC_ADC1_STATUS_Overwrite_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_STATUS_AWOIFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InRange = FieldValue<MDR_ADC_ADC1_STATUS_AWOIFEN_Values, BaseType, 0U> ;
  using OutOfRange = FieldValue<MDR_ADC_ADC1_STATUS_AWOIFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_STATUS_EOCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoResult = FieldValue<MDR_ADC_ADC1_STATUS_EOCIF_Values, BaseType, 0U> ;
  using Ready = FieldValue<MDR_ADC_ADC1_STATUS_EOCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_STATUS_AWOIF_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_STATUS_AWOIF_IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_ADC_ADC1_STATUS_AWOIF_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_STATUS_EOCIF_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_STATUS_EOCIF_EN_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_ADC_ADC1_STATUS_EOCIF_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_0_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_1_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_2_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_3_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_4_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_5_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_6_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_7_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_30_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_CHSEL_Channel_31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_31_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_CHSEL_Channel_31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_TRIM_TS_Trim_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Vref_1v23 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 0U> ;
  using Vref_1v213 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 1U> ;
  using Vref_1v211 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 2U> ;
  using Vref_1v208 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 3U> ;
  using Vref_1v206 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 4U> ;
  using Vref_1v203 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 5U> ;
  using Vref_1v200 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 6U> ;
  using Vref_1v197 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 7U> ;
  using Vref_1v193 = FieldValue<MDR_ADC_ADC1_TRIM_TS_Trim_Values, BaseType, 8U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_ADC_ADC1_TRIM_SEL_VREF_BUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_ADC_ADC1_TRIM_SEL_VREF_BUF_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_ADC_ADC1_TRIM_SEL_VREF_BUF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRADCENUMS_HPP)
