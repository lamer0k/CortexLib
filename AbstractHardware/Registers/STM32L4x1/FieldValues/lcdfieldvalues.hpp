/*******************************************************************************
* Filename      : lcdfieldvalues.hpp
*
* Details       : Enumerations related with LCD peripheral. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(LCDENUMS_HPP)
#define LCDENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CR_BIAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CR_BIAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CR_BIAS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_CR_BIAS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_CR_BIAS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CR_DUTY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CR_DUTY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CR_DUTY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_CR_DUTY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_CR_DUTY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LCD_CR_DUTY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LCD_CR_DUTY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LCD_CR_DUTY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LCD_CR_DUTY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CR_VSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CR_VSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CR_VSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CR_LCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CR_LCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CR_LCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CR_MUX_SEG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CR_MUX_SEG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CR_MUX_SEG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CR_BUFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CR_BUFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CR_BUFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_PS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_FCR_PS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_FCR_PS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LCD_FCR_PS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LCD_FCR_PS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LCD_FCR_PS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LCD_FCR_PS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<LCD_FCR_PS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<LCD_FCR_PS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<LCD_FCR_PS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<LCD_FCR_PS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<LCD_FCR_PS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<LCD_FCR_PS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<LCD_FCR_PS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<LCD_FCR_PS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_DIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_DIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_DIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_FCR_DIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_FCR_DIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LCD_FCR_DIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LCD_FCR_DIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LCD_FCR_DIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LCD_FCR_DIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<LCD_FCR_DIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<LCD_FCR_DIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<LCD_FCR_DIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<LCD_FCR_DIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<LCD_FCR_DIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<LCD_FCR_DIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<LCD_FCR_DIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<LCD_FCR_DIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_BLINK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_BLINK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_BLINK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_FCR_BLINK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_FCR_BLINK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_BLINKF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LCD_FCR_BLINKF_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_CC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_CC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_CC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_FCR_CC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_FCR_CC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LCD_FCR_CC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LCD_FCR_CC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LCD_FCR_CC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LCD_FCR_CC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_DEAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LCD_FCR_DEAD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_PON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_PON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_PON_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LCD_FCR_PON_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LCD_FCR_PON_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LCD_FCR_PON_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LCD_FCR_PON_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LCD_FCR_PON_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LCD_FCR_PON_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_UDDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_UDDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_UDDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_SOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_SOFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_SOFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_FCR_HD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_FCR_HD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_FCR_HD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_SR_FCRSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_SR_FCRSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_SR_FCRSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_SR_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_SR_RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_SR_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_SR_UDD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_SR_UDD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_SR_UDD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_SR_UDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_SR_UDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_SR_UDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_SR_SOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_SR_SOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_SR_SOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_SR_ENS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_SR_ENS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_SR_ENS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CLR_UDDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CLR_UDDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CLR_UDDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_CLR_SOFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_CLR_SOFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_CLR_SOFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM0_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM0_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM0_S00_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM1_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM1_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM1_S00_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM2_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM2_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM2_S00_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM3_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM3_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM3_S00_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM4_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM4_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM4_S00_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM5_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM5_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM5_S00_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM6_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM6_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM6_S00_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S09_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S09_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S09_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S08_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S08_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S08_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S07_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S07_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S07_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S06_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S06_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S06_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S05_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S05_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S05_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S04_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S04_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S03_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S03_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S03_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S02_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S02_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S02_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S01_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S01_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LCD_RAM_COM7_S00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LCD_RAM_COM7_S00_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LCD_RAM_COM7_S00_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(LCDENUMS_HPP)
