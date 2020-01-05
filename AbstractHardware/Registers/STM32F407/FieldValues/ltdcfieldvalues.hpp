/*******************************************************************************
* Filename      : ltdcfieldvalues.hpp
*
* Details       : Enumerations related with LTDC peripheral. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(LTDCENUMS_HPP)
#define LTDCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_SSCR_HSW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_SSCR_VSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_BPCR_AHBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_BPCR_AVBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_AWCR_AAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_AWCR_AAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_TWCR_TOTALW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_TWCR_TOTALH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_HSPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_HSPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_HSPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_VSPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_VSPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_VSPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_DEPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_DEPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_DEPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_PCPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_PCPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_PCPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_DRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_GCR_DRW_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_DGW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_GCR_DGW_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_DBW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_GCR_DBW_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_GCR_LTDCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_GCR_LTDCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_GCR_LTDCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_SRCR_VBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_SRCR_VBR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_SRCR_VBR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_SRCR_IMR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_SRCR_IMR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_SRCR_IMR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_BCCR_BC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_IER_RRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_IER_RRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_IER_RRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_IER_TERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_IER_TERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_IER_TERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_IER_FUIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_IER_FUIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_IER_FUIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_IER_LIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_IER_LIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_IER_LIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ISR_RRIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ISR_RRIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ISR_RRIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ISR_TERRIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ISR_TERRIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ISR_TERRIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ISR_FUIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ISR_FUIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ISR_FUIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ISR_LIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ISR_LIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ISR_LIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ICR_CRRIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ICR_CRRIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ICR_CRRIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ICR_CTERRIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ICR_CTERRIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ICR_CTERRIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ICR_CFUIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ICR_CFUIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ICR_CFUIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_ICR_CLIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_ICR_CLIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_ICR_CLIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_LIPCR_LIPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_CPSR_CXPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_CPSR_CYPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_CDSR_HSYNCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_CDSR_HSYNCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_CDSR_HSYNCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_CDSR_VSYNCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_CDSR_VSYNCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_CDSR_VSYNCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_CDSR_HDES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_CDSR_HDES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_CDSR_HDES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_CDSR_VDES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_CDSR_VDES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_CDSR_VDES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CR_CLUTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L1CR_CLUTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L1CR_CLUTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CR_COLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L1CR_COLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L1CR_COLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CR_LEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L1CR_LEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L1CR_LEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1WHPCR_WHSPPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1WHPCR_WHSTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1WVPCR_WVSPPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1WVPCR_WVSTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CKCR_CKRED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CKCR_CKGREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CKCR_CKBLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1PFCR_PF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_L1PFCR_PF_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CACR_CONSTA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1DCCR_DCALPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1DCCR_DCRED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1DCCR_DCGREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1DCCR_DCBLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1BFCR_BF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_L1BFCR_BF1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1BFCR_BF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_L1BFCR_BF2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CFBAR_CFBADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CFBLR_CFBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CFBLR_CFBLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CFBLNR_CFBLNBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CLUTWR_CLUTADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CLUTWR_RED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CLUTWR_GREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L1CLUTWR_BLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CR_CLUTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L2CR_CLUTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L2CR_CLUTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CR_COLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L2CR_COLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L2CR_COLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CR_LEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L2CR_LEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L2CR_LEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2WHPCR_WHSPPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2WHPCR_WHSTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2WVPCR_WVSPPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2WVPCR_WVSTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CKCR_CKRED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CKCR_CKGREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CKCR_CKBLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2PFCR_PF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_L2PFCR_PF_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CACR_CONSTA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2DCCR_DCALPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2DCCR_DCRED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2DCCR_DCGREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2DCCR_DCBLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2BFCR_BF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_L2BFCR_BF1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2BFCR_BF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LTDC_L2BFCR_BF2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CFBAR_CFBADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CFBLR_CFBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CFBLR_CFBLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CFBLNR_CFBLNBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CLUTWR_CLUTADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CLUTWR_RED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CLUTWR_GREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LTDC_L2CLUTWR_BLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(LTDCENUMS_HPP)
