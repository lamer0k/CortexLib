/*******************************************************************************
* Filename      : dac1fieldvalues.hpp
*
* Details       : Enumerations related with DAC1 peripheral. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(DAC1ENUMS_HPP)
#define DAC1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_EN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_EN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_EN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_TEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_TEN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_TEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_TSEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_CR_TSEL1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_WAVE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_WAVE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_WAVE1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CR_WAVE1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CR_WAVE1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_MAMP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DAC1_CR_MAMP1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_DMAEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_DMAEN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_DMAEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_DMAUDRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_DMAUDRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_DMAUDRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_CEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_CEN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_CEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_EN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_EN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_EN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_TEN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_TEN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_TEN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_TSEL2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_CR_TSEL2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_WAVE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_WAVE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_WAVE2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CR_WAVE2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CR_WAVE2_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_MAMP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DAC1_CR_MAMP2_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_DMAEN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_DMAEN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_DMAEN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_DMAUDRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_DMAUDRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_DMAUDRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CR_CEN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CR_CEN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CR_CEN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SWTRIGR_SWTRIG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SWTRIGR_SWTRIG1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SWTRIGR_SWTRIG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SWTRIGR_SWTRIG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SWTRIGR_SWTRIG2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SWTRIGR_SWTRIG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12R1_DACC1DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12L1_DACC1DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR8R1_DACC1DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12R2_DACC2DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12L2_DACC2DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR8R2_DACC2DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12RD_DACC1DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12RD_DACC2DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12LD_DACC1DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR12LD_DACC2DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR8RD_DACC1DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DHR8RD_DACC2DHR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DOR1_DACC1DOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_DOR2_DACC2DOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SR_DMAUDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SR_DMAUDR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SR_DMAUDR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SR_CAL_FLAG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SR_CAL_FLAG1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SR_CAL_FLAG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SR_BWST1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SR_BWST1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SR_BWST1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SR_DMAUDR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SR_DMAUDR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SR_DMAUDR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SR_CAL_FLAG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SR_CAL_FLAG2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SR_CAL_FLAG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SR_BWST2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_SR_BWST2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_SR_BWST2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CCR_OTRIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DAC1_CCR_OTRIM1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_CCR_OTRIM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DAC1_CCR_OTRIM2_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_MCR_MODE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_MCR_MODE1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_MCR_MODE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DAC1_MCR_MODE2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SHSR1_TSAMPLE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SHSR2_TSAMPLE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SHHR_THOLD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SHHR_THOLD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SHRR_TREFRESH1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DAC1_SHRR_TREFRESH2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(DAC1ENUMS_HPP)
