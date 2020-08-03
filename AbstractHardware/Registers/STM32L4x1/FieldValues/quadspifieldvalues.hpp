/*******************************************************************************
* Filename      : quadspifieldvalues.hpp
*
* Details       : Enumerations related with QUADSPI peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(QUADSPIENUMS_HPP)
#define QUADSPIENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_PRESCALER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_PMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_PMM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_PMM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_APMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_APMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_APMS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_TOIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_TOIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_TOIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_SMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_SMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_SMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_FTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_FTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_FTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_TEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_TEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_TEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_FTHRES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 3U> ;
  using Value4 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 4U> ;
  using Value5 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 5U> ;
  using Value6 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 6U> ;
  using Value7 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 7U> ;
  using Value8 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 8U> ;
  using Value9 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 9U> ;
  using Value10 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 10U> ;
  using Value11 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 11U> ;
  using Value12 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 12U> ;
  using Value13 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 13U> ;
  using Value14 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 14U> ;
  using Value15 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 15U> ;
  using Value16 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 16U> ;
  using Value17 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 17U> ;
  using Value18 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 18U> ;
  using Value19 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 19U> ;
  using Value20 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 20U> ;
  using Value21 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 21U> ;
  using Value22 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 22U> ;
  using Value23 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 23U> ;
  using Value24 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 24U> ;
  using Value25 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 25U> ;
  using Value26 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 26U> ;
  using Value27 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 27U> ;
  using Value28 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 28U> ;
  using Value29 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 29U> ;
  using Value30 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 30U> ;
  using Value31 = FieldValue<QUADSPI_CR_FTHRES_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_FSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_FSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_FSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_DFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_DFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_DFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_SSHIFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_SSHIFT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_SSHIFT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_TCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_TCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_TCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_ABORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_ABORT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_ABORT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_DCR_FSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 15U> ;
  using Value16 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 16U> ;
  using Value17 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 17U> ;
  using Value18 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 18U> ;
  using Value19 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 19U> ;
  using Value20 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 20U> ;
  using Value21 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 21U> ;
  using Value22 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 22U> ;
  using Value23 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 23U> ;
  using Value24 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 24U> ;
  using Value25 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 25U> ;
  using Value26 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 26U> ;
  using Value27 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 27U> ;
  using Value28 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 28U> ;
  using Value29 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 29U> ;
  using Value30 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 30U> ;
  using Value31 = FieldValue<QUADSPI_DCR_FSIZE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_DCR_CSHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<QUADSPI_DCR_CSHT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_DCR_CKMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_DCR_CKMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_DCR_CKMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_SR_FLEVEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_SR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_SR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_SR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_SR_TOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_SR_TOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_SR_TOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_SR_SMF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_SR_SMF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_SR_SMF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_SR_FTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_SR_FTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_SR_FTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_SR_TCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_SR_TCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_SR_TCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_SR_TEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_SR_TEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_SR_TEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_FCR_CTOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_FCR_CTOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_FCR_CTOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_FCR_CSMF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_FCR_CSMF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_FCR_CSMF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_FCR_CTCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_FCR_CTCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_FCR_CTCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_FCR_CTEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_FCR_CTEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_FCR_CTEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_DLR_DL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_DDRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_DDRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_DDRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_DHHC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_DHHC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_DHHC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_SIOO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_SIOO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_SIOO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_FMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_FMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_FMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_FMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_FMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_DMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_DMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_DMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_DMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_DMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_DCYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 15U> ;
  using Value16 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 16U> ;
  using Value17 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 17U> ;
  using Value18 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 18U> ;
  using Value19 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 19U> ;
  using Value20 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 20U> ;
  using Value21 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 21U> ;
  using Value22 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 22U> ;
  using Value23 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 23U> ;
  using Value24 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 24U> ;
  using Value25 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 25U> ;
  using Value26 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 26U> ;
  using Value27 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 27U> ;
  using Value28 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 28U> ;
  using Value29 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 29U> ;
  using Value30 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 30U> ;
  using Value31 = FieldValue<QUADSPI_CCR_DCYC_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_ABSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_ABSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_ABSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_ABSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_ABSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_ABMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_ABMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_ABMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_ABMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_ABMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_ADSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_ADSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_ADSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_ADSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_ADSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_ADMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_ADMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_ADMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_ADMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_ADMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_IMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<QUADSPI_CCR_IMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<QUADSPI_CCR_IMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<QUADSPI_CCR_IMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<QUADSPI_CCR_IMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_CCR_INSTRUCTION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_AR_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_ABR_ALTERNATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_DR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_PSMKR_MASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_PSMAR_MATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_PIR_INTERVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct QUADSPI_LPTR_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(QUADSPIENUMS_HPP)
