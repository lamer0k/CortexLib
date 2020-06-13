/*******************************************************************************
* Filename      : adc1fieldvalues.hpp
*
* Details       : Enumerations related with ADC1 peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(ADC1ENUMS_HPP)
#define ADC1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_STAT_STRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_STAT_STRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_STAT_STRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_STAT_STIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_STAT_STIC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_STAT_STIC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_STAT_EOIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_STAT_EOIC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_STAT_EOIC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_STAT_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_STAT_EOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_STAT_EOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_STAT_WDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_STAT_WDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_STAT_WDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_RWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_RWDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_RWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_IWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_IWDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_IWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_DISNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CTL0_DISNUM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_DISIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_DISIC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_DISIC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_DISRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_DISRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_DISRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_ICA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_ICA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_ICA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_WDSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_WDSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_WDSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_SM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_SM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_SM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_EOICIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_EOICIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_EOICIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_WDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_WDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_WDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_EOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_EOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL0_WDCHSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_CTL0_WDCHSEL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_SWRCST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_SWRCST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_SWRCST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_SWICST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_SWICST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_SWICST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_ETERC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_ETERC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_ETERC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_ETSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CTL1_ETSRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_ETEIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_ETEIC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_ETEIC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_ETSIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CTL1_ETSIC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_DAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_DAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_DAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_DMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_DMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_RSTCLB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_RSTCLB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_RSTCLB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_CLB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_CLB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_CLB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_CTN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_CTN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_CTN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CTL1_ADCON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CTL1_ADCON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CTL1_ADCON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT10_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT11_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT12_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT13_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT14_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT15_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT16_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT0_SPT17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT0_SPT17_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT0_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT3_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT4_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT5_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT6_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT7_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT8_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SAMPT1_SPT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SAMPT1_SPT9_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IOFF0_IOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IOFF1_IOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IOFF2_IOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IOFF3_IOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_WDHT_WDHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_WDLT_WDLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ0_RL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ0_RL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ0_RSQ15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ0_RSQ15_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ0_RSQ14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ0_RSQ14_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ0_RSQ13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ0_RSQ13_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ0_RSQ12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ0_RSQ12_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ1_RSQ11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ1_RSQ11_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ1_RSQ10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ1_RSQ10_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ1_RSQ9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ1_RSQ9_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ1_RSQ8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ1_RSQ8_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ1_RSQ7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ1_RSQ7_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ1_RSQ6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ1_RSQ6_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ2_RSQ5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ2_RSQ5_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ2_RSQ4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ2_RSQ4_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ2_RSQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ2_RSQ3_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ2_RSQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ2_RSQ2_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ2_RSQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ2_RSQ1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RSQ2_RSQ0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_RSQ2_RSQ0_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_ISQ_IL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_ISQ_IL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_ISQ_IL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_ISQ_IL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_ISQ_IL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_ISQ_ISQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_ISQ_ISQ3_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_ISQ_ISQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_ISQ_ISQ2_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_ISQ_ISQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_ISQ_ISQ1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_ISQ_ISQ0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_ISQ_ISQ0_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IDATA0_IDATAn_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IDATA1_IDATAn_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IDATA2_IDATAn_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_IDATA3_IDATAn_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_RDATA_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC1ENUMS_HPP)
