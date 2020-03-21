/*******************************************************************************
* Filename      : canfieldvalues.hpp
*
* Details       : Enumerations related with CAN peripheral. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(CANENUMS_HPP)
#define CANENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_DBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_DBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_DBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_RESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_TTCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_TTCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_TTCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_ABOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_ABOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_ABOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_AWUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_AWUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_AWUM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_NART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_NART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_NART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_RFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_RFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_RFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_TXFP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_TXFP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_TXFP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_SLEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_SLEEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_SLEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MCR_INRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MCR_INRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MCR_INRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_SAMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_SAMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_SAMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_RXM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_RXM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_RXM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_TXM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_TXM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_TXM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_SLAKI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_SLAKI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_SLAKI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_WKUI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_WKUI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_WKUI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_ERRI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_ERRI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_ERRI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_SLAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_SLAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_SLAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_MSR_INAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_MSR_INAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_MSR_INAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_LOW2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_LOW2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_LOW2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_LOW1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_LOW1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_LOW1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_LOW0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_LOW0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_LOW0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TME2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TME2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TME2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TME1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TME1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TME1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TME0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TME0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TME0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_CODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_CODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_CODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_TSR_CODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_TSR_CODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_ABRQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_ABRQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_ABRQ2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_ALST2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_ALST2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_ALST2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TXOK2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TXOK2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TXOK2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_RQCP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_RQCP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_RQCP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_ABRQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_ABRQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_ABRQ1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_ALST1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_ALST1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_ALST1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TXOK1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TXOK1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TXOK1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_RQCP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_RQCP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_RQCP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_ABRQ0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_ABRQ0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_ABRQ0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TERR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TERR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TERR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_ALST0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_ALST0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_ALST0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_TXOK0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_TXOK0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_TXOK0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TSR_RQCP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TSR_RQCP0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TSR_RQCP0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF0R_RFOM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF0R_RFOM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF0R_RFOM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF0R_FOVR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF0R_FOVR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF0R_FOVR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF0R_FULL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF0R_FULL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF0R_FULL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF0R_FMP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF0R_FMP0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF0R_FMP0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_RF0R_FMP0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_RF0R_FMP0_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF1R_RFOM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF1R_RFOM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF1R_RFOM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF1R_FOVR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF1R_FOVR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF1R_FOVR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF1R_FULL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF1R_FULL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF1R_FULL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RF1R_FMP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RF1R_FMP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RF1R_FMP1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_RF1R_FMP1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_RF1R_FMP1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_SLKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_SLKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_SLKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_WKUIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_WKUIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_WKUIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_LECIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_LECIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_LECIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_BOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_BOFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_BOFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_EPVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_EPVIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_EPVIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_EWGIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_EWGIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_EWGIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_FOVIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_FOVIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_FOVIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_FFIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_FFIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_FFIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_FMPIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_FMPIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_FMPIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_FOVIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_FOVIE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_FOVIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_FFIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_FFIE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_FFIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_FMPIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_FMPIE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_FMPIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_IER_TMEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_IER_TMEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_IER_TMEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_ESR_REC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_ESR_TEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_ESR_LEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_ESR_LEC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_ESR_LEC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_ESR_LEC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_ESR_LEC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_ESR_LEC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_ESR_LEC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_ESR_LEC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_ESR_LEC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_ESR_BOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_ESR_BOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_ESR_BOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_ESR_EPVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_ESR_EPVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_ESR_EPVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_ESR_EWGF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_ESR_EWGF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_ESR_EWGF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_BTR_SILM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_BTR_SILM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_BTR_SILM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_BTR_LBKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_BTR_LBKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_BTR_LBKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_BTR_SJW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_BTR_SJW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_BTR_SJW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_BTR_SJW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_BTR_SJW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_BTR_TS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_BTR_TS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_BTR_TS2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_BTR_TS2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_BTR_TS2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_BTR_TS2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_BTR_TS2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_BTR_TS2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_BTR_TS2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_BTR_TS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_BTR_TS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_BTR_TS1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_BTR_TS1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_BTR_TS1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_BTR_TS1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_BTR_TS1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_BTR_TS1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_BTR_TS1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_BTR_TS1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_BTR_TS1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_BTR_TS1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_BTR_TS1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_BTR_TS1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_BTR_TS1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_BTR_TS1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_BTR_TS1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_BTR_BRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI0R_STID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI0R_EXID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI0R_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI0R_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI0R_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI0R_RTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI0R_RTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI0R_RTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI0R_TXRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI0R_TXRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI0R_TXRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT0R_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT0R_TGT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TDT0R_TGT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TDT0R_TGT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT0R_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_TDT0R_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL0R_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL0R_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL0R_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL0R_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH0R_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH0R_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH0R_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH0R_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI1R_STID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI1R_EXID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI1R_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI1R_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI1R_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI1R_RTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI1R_RTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI1R_RTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI1R_TXRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI1R_TXRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI1R_TXRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT1R_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT1R_TGT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TDT1R_TGT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TDT1R_TGT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT1R_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_TDT1R_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL1R_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL1R_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL1R_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL1R_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH1R_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH1R_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH1R_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH1R_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI2R_STID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI2R_EXID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI2R_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI2R_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI2R_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI2R_RTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI2R_RTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI2R_RTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TI2R_TXRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TI2R_TXRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TI2R_TXRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT2R_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT2R_TGT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TDT2R_TGT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TDT2R_TGT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDT2R_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_TDT2R_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL2R_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL2R_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL2R_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDL2R_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH2R_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH2R_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH2R_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_TDH2R_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI0R_STID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI0R_EXID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI0R_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RI0R_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RI0R_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI0R_RTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RI0R_RTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RI0R_RTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDT0R_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDT0R_FMI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDT0R_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_RDT0R_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL0R_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL0R_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL0R_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL0R_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH0R_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH0R_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH0R_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH0R_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI1R_STID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI1R_EXID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI1R_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RI1R_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RI1R_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RI1R_RTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RI1R_RTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RI1R_RTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDT1R_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDT1R_FMI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDT1R_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_RDT1R_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL1R_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL1R_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL1R_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDL1R_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH1R_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH1R_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH1R_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_RDH1R_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FMR_CAN2SB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FMR_FINIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FMR_FINIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FMR_FINIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FM1R_FBM27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FM1R_FBM27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FM1R_FBM27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FS1R_FSC27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FS1R_FSC27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FS1R_FSC27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FFA1R_FFA27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FFA1R_FFA27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FFA1R_FFA27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_FA1R_FACT27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_FA1R_FACT27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_FA1R_FACT27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F0R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F0R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F0R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F1R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F1R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F1R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F2R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F2R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F2R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F3R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F3R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F3R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F4R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F4R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F4R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F5R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F5R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F5R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F6R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F6R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F6R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F7R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F7R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F7R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F8R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F8R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F8R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F9R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F9R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F9R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F10R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F10R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F10R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F11R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F11R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F11R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F12R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F12R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F12R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F13R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F13R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F13R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F14R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F14R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F14R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F15R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F15R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F15R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F16R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F16R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F16R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F17R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F17R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F17R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F18R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F18R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F18R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F19R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F19R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F19R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F20R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F20R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F20R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F21R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F21R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F21R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F22R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F22R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F22R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F23R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F23R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F23R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F24R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F24R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F24R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F25R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F25R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F25R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F26R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F26R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F26R2_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R1_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R1_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R1_FB31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_F27R2_FB31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_F27R2_FB31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_F27R2_FB31_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(CANENUMS_HPP)
