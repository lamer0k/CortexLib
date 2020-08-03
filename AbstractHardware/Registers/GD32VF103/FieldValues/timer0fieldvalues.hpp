/*******************************************************************************
* Filename      : timer0fieldvalues.hpp
*
* Details       : Enumerations related with TIMER0 peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER0ENUMS_HPP)
#define TIMER0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_CKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_CKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_CKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CTL0_CKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CTL0_CKDIV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_ARSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_ARSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_ARSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_CAM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_CAM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_CAM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CTL0_CAM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CTL0_CAM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_SPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_SPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_SPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_UPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_UPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_UPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_UPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_UPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_UPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL0_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL0_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL0_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_ISO3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_ISO3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_ISO3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_ISO2N_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_ISO2N_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_ISO2N_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_ISO2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_ISO2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_ISO2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_ISO1N_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_ISO1N_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_ISO1N_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_ISO1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_ISO1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_ISO1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_ISO0N_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_ISO0N_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_ISO0N_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_ISO0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_ISO0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_ISO0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_TI0S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_TI0S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_TI0S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_MMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CTL1_MMC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_DMAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_DMAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_DMAS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_CCUC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_CCUC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_CCUC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CTL1_CCSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CTL1_CCSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CTL1_CCSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SMCFG_ETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SMCFG_ETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SMCFG_ETP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SMCFG_SMC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SMCFG_SMC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SMCFG_SMC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SMCFG_ETPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SMCFG_ETPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SMCFG_ETPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_SMCFG_ETPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_SMCFG_ETPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SMCFG_ETFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER0_SMCFG_ETFC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SMCFG_MSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SMCFG_MSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SMCFG_MSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SMCFG_TRGS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_SMCFG_TRGS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SMCFG_SMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_SMCFG_SMC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_TRGDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_TRGDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_TRGDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CMTDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CMTDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CMTDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH3DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH3DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH3DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH2DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH2DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH2DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH1DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH1DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH1DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH0DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH0DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH0DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_UPDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_UPDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_UPDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_BRKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_BRKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_BRKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_TRGIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_TRGIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_TRGIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CMTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CMTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CMTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_CH0IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_CH0IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_CH0IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMAINTEN_UPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMAINTEN_UPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMAINTEN_UPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH3OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH3OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH3OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH2OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH2OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH2OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH1OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH1OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH1OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH0OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH0OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH0OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_BRKIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_BRKIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_BRKIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_TRGIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_TRGIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_TRGIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CMTIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CMTIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CMTIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH3IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH3IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH3IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH2IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH2IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH2IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH1IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_CH0IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_CH0IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_CH0IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_INTF_UPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_INTF_UPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_INTF_UPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_BRKG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_BRKG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_BRKG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_TRGG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_TRGG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_TRGG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_CMTG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_CMTG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_CMTG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_CH3G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_CH3G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_CH3G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_CH2G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_CH2G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_CH2G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_CH1G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_CH1G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_CH1G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_CH0G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_CH0G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_CH0G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_SWEVG_UPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_SWEVG_UPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_SWEVG_UPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH1COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH1COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL0_Output_CH1COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH1COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH1COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH1COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH1COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH1COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH1COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH1MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH1MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH1MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Output_CH1MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Output_CH1MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH0COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH0COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL0_Output_CH0COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH0COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH0COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH0COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH0COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH0COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH0COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Output_CH0MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Output_CH0MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Output_CH0MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Output_CH0MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Output_CH0MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Input_CH1CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Input_CH1CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Input_CH1MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Input_CH1MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Input_CH1MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Input_CH1MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Input_CH1MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Input_CH0CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Input_CH0CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL0_Input_CH0MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL0_Input_CH0MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL0_Input_CH0MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL0_Input_CH0MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL0_Input_CH0MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH3COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH3COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL1_Output_CH3COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH3COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH3COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH3COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH3COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH3COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH3COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH3MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH3MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH3MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Output_CH3MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Output_CH3MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH2COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH2COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL1_Output_CH2COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH2COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH2COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH2COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH2COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH2COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH2COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Output_CH2MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Output_CH2MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Output_CH2MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Output_CH2MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Output_CH2MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Input_CH3CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Input_CH3CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Input_CH3MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Input_CH3MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Input_CH3MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Input_CH3MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Input_CH3MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Input_CH2CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Input_CH2CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL1_Input_CH2MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL1_Input_CH2MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL1_Input_CH2MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CHCTL1_Input_CH2MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CHCTL1_Input_CH2MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH3P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH3P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH3P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH2NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH2NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH2NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH2NEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH2NEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH2NEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH2P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH2P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH2P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH1NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH1NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH1NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH1NEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH1NEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH1NEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH1P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH1P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH1P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH0NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH0NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH0NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH0NEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH0NEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH0NEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH0P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH0P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH0P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CHCTL2_CH0EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CHCTL2_CH0EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CHCTL2_CH0EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CAR_CARL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CREP_CREP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CH0CV_CH0VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CH1CV_CH1VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CH2CV_CH2VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CH3CV_CH3VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_POEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CCHP_POEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CCHP_POEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_OAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CCHP_OAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CCHP_OAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_BRKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CCHP_BRKP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CCHP_BRKP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_BRKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CCHP_BRKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CCHP_BRKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_ROS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CCHP_ROS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CCHP_ROS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_IOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CCHP_IOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CCHP_IOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_PROT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_CCHP_PROT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_CCHP_PROT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_CCHP_PROT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_CCHP_PROT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_CCHP_DTCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMACFG_DMATC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIMER0_DMACFG_DMATC_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMACFG_DMATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIMER0_DMACFG_DMATA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER0_DMATB_DMATB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIMER0ENUMS_HPP)
