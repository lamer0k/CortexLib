/*******************************************************************************
* Filename      : can0fieldvalues.hpp
*
* Details       : Enumerations related with CAN0 peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(CAN0ENUMS_HPP)
#define CAN0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_DFZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_DFZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_DFZ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_SWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_SWRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_SWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_TTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_TTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_TTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_ABOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_ABOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_ABOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_AWU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_AWU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_AWU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_ARD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_ARD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_ARD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_RFOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_RFOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_RFOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_TFO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_TFO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_TFO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_SLPWMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_SLPWMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_SLPWMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_CTL_IWMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_CTL_IWMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_CTL_IWMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_RXL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_RXL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_RXL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_LASTRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_LASTRX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_LASTRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_RS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_RS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_RS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_TS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_TS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_SLPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_SLPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_SLPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_WUIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_WUIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_WUIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_ERRIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_ERRIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_ERRIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_SLPWS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_SLPWS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_SLPWS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_STAT_IWS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_STAT_IWS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_STAT_IWS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_TMLS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_TMLS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_TMLS2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_TMLS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_TMLS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_TMLS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_TMLS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_TMLS0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_TMLS0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_TME2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_TME2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_TME2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_TME1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_TME1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_TME1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_TME0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_TME0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_TME0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_NUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_NUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_NUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_TSTAT_NUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_TSTAT_NUM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MST2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MST2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MST2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MAL2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MAL2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MAL2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTFNERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTFNERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTFNERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MST1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MST1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MST1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MAL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MAL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MAL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTFNERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTFNERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTFNERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MST0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MST0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MST0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MAL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MAL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MAL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTFNERR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTFNERR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTFNERR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TSTAT_MTF0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TSTAT_MTF0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TSTAT_MTF0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO0_RFD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO0_RFD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO0_RFD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO0_RFO0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO0_RFO0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO0_RFO0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO0_RFF0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO0_RFF0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO0_RFF0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO0_RFL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO0_RFL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO0_RFL0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_RFIFO0_RFL0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_RFIFO0_RFL0_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO1_RFD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO1_RFD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO1_RFD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO1_RFO1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO1_RFO1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO1_RFO1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO1_RFF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO1_RFF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO1_RFF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFO1_RFL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFO1_RFL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFO1_RFL1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_RFIFO1_RFL1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_RFIFO1_RFL1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_SLPWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_SLPWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_SLPWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_WIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_WIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_WIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_ERRNIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_ERRNIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_ERRNIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_BOIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_BOIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_BOIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_PERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_PERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_PERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_WERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_WERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_WERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_RFOIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_RFOIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_RFOIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_RFFIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_RFFIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_RFFIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_RFNEIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_RFNEIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_RFNEIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_RFOIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_RFOIE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_RFOIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_RFFIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_RFFIE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_RFFIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_RFNEIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_RFNEIE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_RFNEIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_INTEN_TMEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_INTEN_TMEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_INTEN_TMEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_ERR_RECNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_ERR_TECNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_ERR_ERRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_ERR_ERRN_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_ERR_BOERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_ERR_BOERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_ERR_BOERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_ERR_PERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_ERR_PERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_ERR_PERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_ERR_WERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_ERR_WERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_ERR_WERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_BT_SCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_BT_SCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_BT_SCMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_BT_LCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_BT_LCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_BT_LCMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_BT_SJW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_BT_SJW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_BT_SJW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_BT_SJW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_BT_SJW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_BT_BS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_BT_BS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_BT_BS2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_BT_BS2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_BT_BS2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_BT_BS2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_BT_BS2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_BT_BS2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_BT_BS2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_BT_BS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_BT_BS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_BT_BS1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_BT_BS1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_BT_BS1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_BT_BS1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_BT_BS1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_BT_BS1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_BT_BS1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN0_BT_BS1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN0_BT_BS1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN0_BT_BS1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN0_BT_BS1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN0_BT_BS1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN0_BT_BS1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN0_BT_BS1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN0_BT_BS1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_BT_BAUDPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI0_SFID_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI0_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI0_FF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI0_FF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI0_FF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI0_FT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI0_FT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI0_FT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI0_TEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI0_TEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI0_TEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP0_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP0_TSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMP0_TSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMP0_TSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP0_DLENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN0_TMP0_DLENC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA00_DB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA00_DB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA00_DB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA00_DB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA10_DB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA10_DB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA10_DB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA10_DB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI1_SFID_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI1_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI1_FF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI1_FF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI1_FF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI1_FT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI1_FT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI1_FT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI1_TEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI1_TEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI1_TEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP1_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP1_TSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMP1_TSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMP1_TSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP1_DLENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN0_TMP1_DLENC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA01_DB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA01_DB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA01_DB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA01_DB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA11_DB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA11_DB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA11_DB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA11_DB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI2_SFID_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI2_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI2_FF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI2_FF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI2_FF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI2_FT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI2_FT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI2_FT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMI2_TEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMI2_TEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMI2_TEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP2_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP2_TSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMP2_TSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMP2_TSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMP2_DLENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN0_TMP2_DLENC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA02_DB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA02_DB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA02_DB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA02_DB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA12_DB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA12_DB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA12_DB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_TMDATA12_DB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI0_SFID_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI0_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI0_FF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFOMI0_FF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFOMI0_FF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI0_FT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFOMI0_FT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFOMI0_FT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMP0_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMP0_FI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMP0_DLENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN0_RFIFOMP0_DLENC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA00_DB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA00_DB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA00_DB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA00_DB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA10_DB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA10_DB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA10_DB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA10_DB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI1_SFID_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI1_EFID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI1_FF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFOMI1_FF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFOMI1_FF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMI1_FT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFOMI1_FT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFOMI1_FT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMP1_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMP1_FI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMP1_DLENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN0_RFIFOMP1_DLENC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA01_DB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA01_DB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA01_DB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA01_DB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA11_DB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA11_DB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA11_DB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_RFIFOMDATA11_DB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FCTL_HBC1F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FCTL_FLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FCTL_FLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FCTL_FLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FMCFG_FMOD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FMCFG_FMOD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FMCFG_FMOD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FSCFG_FS27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FSCFG_FS27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FSCFG_FS27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FAFIFO_FAF27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FAFIFO_FAF27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FAFIFO_FAF27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_FW_FW27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_FW_FW27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_FW_FW27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F0DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F0DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F0DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F1DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F1DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F1DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F2DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F2DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F2DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F3DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F3DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F3DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F4DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F4DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F4DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F5DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F5DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F5DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F6DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F6DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F6DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F7DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F7DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F7DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F8DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F8DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F8DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F9DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F9DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F9DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F10DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F10DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F10DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F11DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F11DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F11DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F12DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F12DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F12DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F13DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F13DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F13DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F14DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F14DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F14DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F15DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F15DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F15DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F16DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F16DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F16DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F17DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F17DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F17DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F18DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F18DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F18DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F19DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F19DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F19DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F20DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F20DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F20DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F21DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F21DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F21DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F22DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F22DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F22DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F23DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F23DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F23DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F24DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F24DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F24DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F25DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F25DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F25DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F26DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F26DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F26DATA1_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA0_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA0_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA0_FD31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN0_F27DATA1_FD31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN0_F27DATA1_FD31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN0_F27DATA1_FD31_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(CAN0ENUMS_HPP)
