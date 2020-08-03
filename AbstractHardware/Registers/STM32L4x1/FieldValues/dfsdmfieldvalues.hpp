/*******************************************************************************
* Filename      : dfsdmfieldvalues.hpp
*
* Details       : Enumerations related with DFSDM peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(DFSDMENUMS_HPP)
#define DFSDMENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_DFSDMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_DFSDMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_DFSDMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_CKOUTSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_CKOUTSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_CKOUTSRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_CKOUTDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG0R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG0R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG0R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG0R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG0R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG0R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG0R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG0R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG0R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG0R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD0R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD0R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD0R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD0R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD0R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD0R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD0R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD0R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD0R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD0R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT0R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN0R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN0R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG1R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG1R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG1R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG1R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG1R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG1R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG1R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG1R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG1R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG1R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD1R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD1R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD1R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD1R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD1R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD1R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD1R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD1R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD1R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD1R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT1R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN1R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN1R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG2R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG2R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG2R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG2R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG2R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG2R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG2R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG2R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG2R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG2R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD2R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD2R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD2R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD2R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD2R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD2R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD2R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD2R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD2R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD2R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT2R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN2R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN2R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG3R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG3R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG3R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG3R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG3R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG3R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG3R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG3R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG3R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG3R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD3R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD3R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD3R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD3R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD3R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD3R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD3R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD3R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD3R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD3R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT3R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN3R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN3R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG4R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG4R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG4R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG4R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG4R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG4R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG4R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG4R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG4R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG4R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD4R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD4R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD4R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD4R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD4R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD4R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD4R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD4R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD4R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD4R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT4R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN4R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN4R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG5R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG5R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG5R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG5R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG5R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG5R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG5R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG5R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG5R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG5R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD5R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD5R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD5R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD5R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD5R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD5R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD5R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD5R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD5R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD5R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT5R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN5R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN5R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG6R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG6R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG6R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG6R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG6R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG6R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG6R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG6R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG6R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG6R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD6R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD6R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD6R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD6R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD6R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD6R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD6R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD6R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD6R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD6R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT6R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN6R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN6R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG7R1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG7R1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG7R1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG7R1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG7R1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG7R1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG7R1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG7R1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHCFG7R2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CHCFG7R2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD7R_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD7R_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD7R_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD7R_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD7R_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD7R_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_AWSCD7R_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD7R_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_AWSCD7R_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_AWSCD7R_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHWDAT7R_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN7R_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CHDATIN7R_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_JCHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM0_AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM0_AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM0_EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM0_CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_JCHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM1_AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM1_AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM1_EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM1_CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_JCHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM2_AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM2_AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM2_EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM2_CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_JCHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM3_AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM3_AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM3_EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM3_CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(DFSDMENUMS_HPP)
