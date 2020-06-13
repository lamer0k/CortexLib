/*******************************************************************************
* Filename      : timer2fieldvalues.hpp
*
* Details       : Enumerations related with TIMER2 peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER2ENUMS_HPP)
#define TIMER2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_CKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_CKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_CKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CTL0_CKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CTL0_CKDIV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_ARSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_ARSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_ARSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_CAM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_CAM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_CAM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CTL0_CAM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CTL0_CAM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_SPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_SPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_SPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_UPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_UPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_UPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_UPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_UPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_UPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL0_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL0_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL0_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL1_TI0S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL1_TI0S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL1_TI0S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL1_MMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CTL1_MMC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CTL1_DMAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CTL1_DMAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CTL1_DMAS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SMCFG_ETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SMCFG_ETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SMCFG_ETP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SMCFG_SMC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SMCFG_SMC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SMCFG_SMC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SMCFG_ETPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SMCFG_ETPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SMCFG_ETPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_SMCFG_ETPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_SMCFG_ETPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SMCFG_ETFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_SMCFG_ETFC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SMCFG_MSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SMCFG_MSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SMCFG_MSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SMCFG_TRGS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_SMCFG_TRGS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SMCFG_SMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_SMCFG_SMC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_TRGDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_TRGDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_TRGDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH3DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH3DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH3DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH2DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH2DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH2DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH1DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH1DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH1DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH0DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH0DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH0DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_UPDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_UPDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_UPDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_TRGIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_TRGIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_TRGIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_CH0IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_CH0IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_CH0IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMAINTEN_UPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMAINTEN_UPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMAINTEN_UPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH3OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH3OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH3OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH2OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH2OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH2OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH1OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH1OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH1OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH0OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH0OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH0OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_TRGIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_TRGIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_TRGIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH3IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH3IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH3IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH2IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH2IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH2IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH1IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_CH0IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_CH0IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_CH0IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_INTF_UPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_INTF_UPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_INTF_UPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SWEVG_TRGG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SWEVG_TRGG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SWEVG_TRGG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SWEVG_CH3G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SWEVG_CH3G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SWEVG_CH3G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SWEVG_CH2G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SWEVG_CH2G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SWEVG_CH2G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SWEVG_CH1G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SWEVG_CH1G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SWEVG_CH1G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SWEVG_CH0G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SWEVG_CH0G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SWEVG_CH0G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_SWEVG_UPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_SWEVG_UPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_SWEVG_UPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH1COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH1COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL0_Output_CH1COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH1COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH1COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH1COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH1COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH1COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH1COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH1MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH1MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH1MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Output_CH1MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Output_CH1MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH0COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH0COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL0_Output_CH0COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH0COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH0COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH0COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH0COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH0COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH0COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Output_CH0MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Output_CH0MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Output_CH0MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Output_CH0MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Output_CH0MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Input_CH1CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Input_CH1CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Input_CH1CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Input_CH1MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Input_CH1MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Input_CH1MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Input_CH1MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Input_CH1MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Input_CH0CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Input_CH0CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Input_CH0CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL0_Input_CH0MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL0_Input_CH0MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL0_Input_CH0MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL0_Input_CH0MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL0_Input_CH0MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH3COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH3COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL1_Output_CH3COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH3COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH3COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH3COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH3COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH3COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH3COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH3MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH3MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH3MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Output_CH3MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Output_CH3MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH2COMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH2COMCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL1_Output_CH2COMCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH2COMSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH2COMSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH2COMSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH2COMFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH2COMFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH2COMFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Output_CH2MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Output_CH2MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Output_CH2MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Output_CH2MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Output_CH2MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Input_CH3CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Input_CH3CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Input_CH3CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Input_CH3MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Input_CH3MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Input_CH3MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Input_CH3MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Input_CH3MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Input_CH2CAPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPFLT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Input_CH2CAPPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Input_CH2CAPPSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL1_Input_CH2MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL1_Input_CH2MS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL1_Input_CH2MS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_CHCTL1_Input_CH2MS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_CHCTL1_Input_CH2MS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH3P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH3P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH3P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH2P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH2P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH2P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH1P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH1P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH1P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH0P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH0P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH0P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CHCTL2_CH0EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_CHCTL2_CH0EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_CHCTL2_CH0EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CAR_CARL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CH0CV_CH0VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CH1CV_CH1VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CH2CV_CH2VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_CH3CV_CH3VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMACFG_DMATC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIMER2_DMACFG_DMATC_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMACFG_DMATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIMER2_DMACFG_DMATA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER2_DMATB_DMATB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIMER2ENUMS_HPP)
