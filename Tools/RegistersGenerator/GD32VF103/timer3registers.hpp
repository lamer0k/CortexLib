/*******************************************************************************
* Filename      : timer3registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER3REGISTERS_HPP)
#define TIMER3REGISTERS_HPP

#include "timer3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER3
{
  struct TIMER3CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40000800, 16, ReadWriteMode>
  {
    using CKDIV = TIMER3_CTL0_CKDIV_Values<TIMER3::CTL0, 8, 2, ReadWriteMode, TIMER3CTL0Base> ;
    using ARSE = TIMER3_CTL0_ARSE_Values<TIMER3::CTL0, 7, 1, ReadWriteMode, TIMER3CTL0Base> ;
    using CAM = TIMER3_CTL0_CAM_Values<TIMER3::CTL0, 5, 2, ReadWriteMode, TIMER3CTL0Base> ;
    using DIR = TIMER3_CTL0_DIR_Values<TIMER3::CTL0, 4, 1, ReadWriteMode, TIMER3CTL0Base> ;
    using SPM = TIMER3_CTL0_SPM_Values<TIMER3::CTL0, 3, 1, ReadWriteMode, TIMER3CTL0Base> ;
    using UPS = TIMER3_CTL0_UPS_Values<TIMER3::CTL0, 2, 1, ReadWriteMode, TIMER3CTL0Base> ;
    using UPDIS = TIMER3_CTL0_UPDIS_Values<TIMER3::CTL0, 1, 1, ReadWriteMode, TIMER3CTL0Base> ;
    using CEN = TIMER3_CTL0_CEN_Values<TIMER3::CTL0, 0, 1, ReadWriteMode, TIMER3CTL0Base> ;
    using FieldValues = TIMER3_CTL0_CEN_Values<TIMER3::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40000800, 16, ReadWriteMode, TIMER3CTL0Base, T...> ;

  struct TIMER3CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40000804, 16, ReadWriteMode>
  {
    using TI0S = TIMER3_CTL1_TI0S_Values<TIMER3::CTL1, 7, 1, ReadWriteMode, TIMER3CTL1Base> ;
    using MMC = TIMER3_CTL1_MMC_Values<TIMER3::CTL1, 4, 3, ReadWriteMode, TIMER3CTL1Base> ;
    using DMAS = TIMER3_CTL1_DMAS_Values<TIMER3::CTL1, 3, 1, ReadWriteMode, TIMER3CTL1Base> ;
    using FieldValues = TIMER3_CTL1_DMAS_Values<TIMER3::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40000804, 16, ReadWriteMode, TIMER3CTL1Base, T...> ;

  struct TIMER3SMCFGBase {} ;

  struct SMCFG : public RegisterBase<0x40000808, 16, ReadWriteMode>
  {
    using ETP = TIMER3_SMCFG_ETP_Values<TIMER3::SMCFG, 15, 1, ReadWriteMode, TIMER3SMCFGBase> ;
    using SMC1 = TIMER3_SMCFG_SMC1_Values<TIMER3::SMCFG, 14, 1, ReadWriteMode, TIMER3SMCFGBase> ;
    using ETPSC = TIMER3_SMCFG_ETPSC_Values<TIMER3::SMCFG, 12, 2, ReadWriteMode, TIMER3SMCFGBase> ;
    using ETFC = TIMER3_SMCFG_ETFC_Values<TIMER3::SMCFG, 8, 4, ReadWriteMode, TIMER3SMCFGBase> ;
    using MSM = TIMER3_SMCFG_MSM_Values<TIMER3::SMCFG, 7, 1, ReadWriteMode, TIMER3SMCFGBase> ;
    using TRGS = TIMER3_SMCFG_TRGS_Values<TIMER3::SMCFG, 4, 3, ReadWriteMode, TIMER3SMCFGBase> ;
    using SMC = TIMER3_SMCFG_SMC_Values<TIMER3::SMCFG, 0, 3, ReadWriteMode, TIMER3SMCFGBase> ;
    using FieldValues = TIMER3_SMCFG_SMC_Values<TIMER3::SMCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCFGPack  = Register<0x40000808, 16, ReadWriteMode, TIMER3SMCFGBase, T...> ;

  struct TIMER3DMAINTENBase {} ;

  struct DMAINTEN : public RegisterBase<0x4000080C, 16, ReadWriteMode>
  {
    using TRGDEN = TIMER3_DMAINTEN_TRGDEN_Values<TIMER3::DMAINTEN, 14, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH3DEN = TIMER3_DMAINTEN_CH3DEN_Values<TIMER3::DMAINTEN, 12, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH2DEN = TIMER3_DMAINTEN_CH2DEN_Values<TIMER3::DMAINTEN, 11, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH1DEN = TIMER3_DMAINTEN_CH1DEN_Values<TIMER3::DMAINTEN, 10, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH0DEN = TIMER3_DMAINTEN_CH0DEN_Values<TIMER3::DMAINTEN, 9, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using UPDEN = TIMER3_DMAINTEN_UPDEN_Values<TIMER3::DMAINTEN, 8, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using TRGIE = TIMER3_DMAINTEN_TRGIE_Values<TIMER3::DMAINTEN, 6, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH3IE = TIMER3_DMAINTEN_CH3IE_Values<TIMER3::DMAINTEN, 4, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH2IE = TIMER3_DMAINTEN_CH2IE_Values<TIMER3::DMAINTEN, 3, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH1IE = TIMER3_DMAINTEN_CH1IE_Values<TIMER3::DMAINTEN, 2, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using CH0IE = TIMER3_DMAINTEN_CH0IE_Values<TIMER3::DMAINTEN, 1, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using UPIE = TIMER3_DMAINTEN_UPIE_Values<TIMER3::DMAINTEN, 0, 1, ReadWriteMode, TIMER3DMAINTENBase> ;
    using FieldValues = TIMER3_DMAINTEN_UPIE_Values<TIMER3::DMAINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAINTENPack  = Register<0x4000080C, 16, ReadWriteMode, TIMER3DMAINTENBase, T...> ;

  struct TIMER3INTFBase {} ;

  struct INTF : public RegisterBase<0x40000810, 16, ReadWriteMode>
  {
    using CH3OF = TIMER3_INTF_CH3OF_Values<TIMER3::INTF, 12, 1, ReadWriteMode, TIMER3INTFBase> ;
    using CH2OF = TIMER3_INTF_CH2OF_Values<TIMER3::INTF, 11, 1, ReadWriteMode, TIMER3INTFBase> ;
    using CH1OF = TIMER3_INTF_CH1OF_Values<TIMER3::INTF, 10, 1, ReadWriteMode, TIMER3INTFBase> ;
    using CH0OF = TIMER3_INTF_CH0OF_Values<TIMER3::INTF, 9, 1, ReadWriteMode, TIMER3INTFBase> ;
    using TRGIF = TIMER3_INTF_TRGIF_Values<TIMER3::INTF, 6, 1, ReadWriteMode, TIMER3INTFBase> ;
    using CH3IF = TIMER3_INTF_CH3IF_Values<TIMER3::INTF, 4, 1, ReadWriteMode, TIMER3INTFBase> ;
    using CH2IF = TIMER3_INTF_CH2IF_Values<TIMER3::INTF, 3, 1, ReadWriteMode, TIMER3INTFBase> ;
    using CH1IF = TIMER3_INTF_CH1IF_Values<TIMER3::INTF, 2, 1, ReadWriteMode, TIMER3INTFBase> ;
    using CH0IF = TIMER3_INTF_CH0IF_Values<TIMER3::INTF, 1, 1, ReadWriteMode, TIMER3INTFBase> ;
    using UPIF = TIMER3_INTF_UPIF_Values<TIMER3::INTF, 0, 1, ReadWriteMode, TIMER3INTFBase> ;
    using FieldValues = TIMER3_INTF_UPIF_Values<TIMER3::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40000810, 16, ReadWriteMode, TIMER3INTFBase, T...> ;

  struct TIMER3SWEVGBase {} ;

  struct SWEVG : public RegisterBase<0x40000814, 16, WriteMode>
  {
    using TRGG = TIMER3_SWEVG_TRGG_Values<TIMER3::SWEVG, 6, 1, WriteMode, TIMER3SWEVGBase> ;
    using CH3G = TIMER3_SWEVG_CH3G_Values<TIMER3::SWEVG, 4, 1, WriteMode, TIMER3SWEVGBase> ;
    using CH2G = TIMER3_SWEVG_CH2G_Values<TIMER3::SWEVG, 3, 1, WriteMode, TIMER3SWEVGBase> ;
    using CH1G = TIMER3_SWEVG_CH1G_Values<TIMER3::SWEVG, 2, 1, WriteMode, TIMER3SWEVGBase> ;
    using CH0G = TIMER3_SWEVG_CH0G_Values<TIMER3::SWEVG, 1, 1, WriteMode, TIMER3SWEVGBase> ;
    using UPG = TIMER3_SWEVG_UPG_Values<TIMER3::SWEVG, 0, 1, WriteMode, TIMER3SWEVGBase> ;
    using FieldValues = TIMER3_SWEVG_UPG_Values<TIMER3::SWEVG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWEVGPack  = Register<0x40000814, 16, WriteMode, TIMER3SWEVGBase, T...> ;

  struct TIMER3CHCTL0_OutputBase {} ;

  struct CHCTL0_Output : public RegisterBase<0x40000818, 16, ReadWriteMode>
  {
    using CH1COMCEN = TIMER3_CHCTL0_Output_CH1COMCEN_Values<TIMER3::CHCTL0_Output, 15, 1, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH1COMCTL = TIMER3_CHCTL0_Output_CH1COMCTL_Values<TIMER3::CHCTL0_Output, 12, 3, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH1COMSEN = TIMER3_CHCTL0_Output_CH1COMSEN_Values<TIMER3::CHCTL0_Output, 11, 1, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH1COMFEN = TIMER3_CHCTL0_Output_CH1COMFEN_Values<TIMER3::CHCTL0_Output, 10, 1, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH1MS = TIMER3_CHCTL0_Output_CH1MS_Values<TIMER3::CHCTL0_Output, 8, 2, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH0COMCEN = TIMER3_CHCTL0_Output_CH0COMCEN_Values<TIMER3::CHCTL0_Output, 7, 1, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH0COMCTL = TIMER3_CHCTL0_Output_CH0COMCTL_Values<TIMER3::CHCTL0_Output, 4, 3, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH0COMSEN = TIMER3_CHCTL0_Output_CH0COMSEN_Values<TIMER3::CHCTL0_Output, 3, 1, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH0COMFEN = TIMER3_CHCTL0_Output_CH0COMFEN_Values<TIMER3::CHCTL0_Output, 2, 1, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using CH0MS = TIMER3_CHCTL0_Output_CH0MS_Values<TIMER3::CHCTL0_Output, 0, 2, ReadWriteMode, TIMER3CHCTL0_OutputBase> ;
    using FieldValues = TIMER3_CHCTL0_Output_CH0MS_Values<TIMER3::CHCTL0_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_OutputPack  = Register<0x40000818, 16, ReadWriteMode, TIMER3CHCTL0_OutputBase, T...> ;

  struct TIMER3CHCTL0_InputBase {} ;

  struct CHCTL0_Input : public RegisterBase<0x40000818, 16, ReadWriteMode>
  {
    using CH1CAPFLT = TIMER3_CHCTL0_Input_CH1CAPFLT_Values<TIMER3::CHCTL0_Input, 12, 4, ReadWriteMode, TIMER3CHCTL0_InputBase> ;
    using CH1CAPPSC = TIMER3_CHCTL0_Input_CH1CAPPSC_Values<TIMER3::CHCTL0_Input, 10, 2, ReadWriteMode, TIMER3CHCTL0_InputBase> ;
    using CH1MS = TIMER3_CHCTL0_Input_CH1MS_Values<TIMER3::CHCTL0_Input, 8, 2, ReadWriteMode, TIMER3CHCTL0_InputBase> ;
    using CH0CAPFLT = TIMER3_CHCTL0_Input_CH0CAPFLT_Values<TIMER3::CHCTL0_Input, 4, 4, ReadWriteMode, TIMER3CHCTL0_InputBase> ;
    using CH0CAPPSC = TIMER3_CHCTL0_Input_CH0CAPPSC_Values<TIMER3::CHCTL0_Input, 2, 2, ReadWriteMode, TIMER3CHCTL0_InputBase> ;
    using CH0MS = TIMER3_CHCTL0_Input_CH0MS_Values<TIMER3::CHCTL0_Input, 0, 2, ReadWriteMode, TIMER3CHCTL0_InputBase> ;
    using FieldValues = TIMER3_CHCTL0_Input_CH0MS_Values<TIMER3::CHCTL0_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_InputPack  = Register<0x40000818, 16, ReadWriteMode, TIMER3CHCTL0_InputBase, T...> ;

  struct TIMER3CHCTL1_OutputBase {} ;

  struct CHCTL1_Output : public RegisterBase<0x4000081C, 16, ReadWriteMode>
  {
    using CH3COMCEN = TIMER3_CHCTL1_Output_CH3COMCEN_Values<TIMER3::CHCTL1_Output, 15, 1, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH3COMCTL = TIMER3_CHCTL1_Output_CH3COMCTL_Values<TIMER3::CHCTL1_Output, 12, 3, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH3COMSEN = TIMER3_CHCTL1_Output_CH3COMSEN_Values<TIMER3::CHCTL1_Output, 11, 1, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH3COMFEN = TIMER3_CHCTL1_Output_CH3COMFEN_Values<TIMER3::CHCTL1_Output, 10, 1, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH3MS = TIMER3_CHCTL1_Output_CH3MS_Values<TIMER3::CHCTL1_Output, 8, 2, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH2COMCEN = TIMER3_CHCTL1_Output_CH2COMCEN_Values<TIMER3::CHCTL1_Output, 7, 1, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH2COMCTL = TIMER3_CHCTL1_Output_CH2COMCTL_Values<TIMER3::CHCTL1_Output, 4, 3, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH2COMSEN = TIMER3_CHCTL1_Output_CH2COMSEN_Values<TIMER3::CHCTL1_Output, 3, 1, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH2COMFEN = TIMER3_CHCTL1_Output_CH2COMFEN_Values<TIMER3::CHCTL1_Output, 2, 1, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using CH2MS = TIMER3_CHCTL1_Output_CH2MS_Values<TIMER3::CHCTL1_Output, 0, 2, ReadWriteMode, TIMER3CHCTL1_OutputBase> ;
    using FieldValues = TIMER3_CHCTL1_Output_CH2MS_Values<TIMER3::CHCTL1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_OutputPack  = Register<0x4000081C, 16, ReadWriteMode, TIMER3CHCTL1_OutputBase, T...> ;

  struct TIMER3CHCTL1_InputBase {} ;

  struct CHCTL1_Input : public RegisterBase<0x4000081C, 16, ReadWriteMode>
  {
    using CH3CAPFLT = TIMER3_CHCTL1_Input_CH3CAPFLT_Values<TIMER3::CHCTL1_Input, 12, 4, ReadWriteMode, TIMER3CHCTL1_InputBase> ;
    using CH3CAPPSC = TIMER3_CHCTL1_Input_CH3CAPPSC_Values<TIMER3::CHCTL1_Input, 10, 2, ReadWriteMode, TIMER3CHCTL1_InputBase> ;
    using CH3MS = TIMER3_CHCTL1_Input_CH3MS_Values<TIMER3::CHCTL1_Input, 8, 2, ReadWriteMode, TIMER3CHCTL1_InputBase> ;
    using CH2CAPFLT = TIMER3_CHCTL1_Input_CH2CAPFLT_Values<TIMER3::CHCTL1_Input, 4, 4, ReadWriteMode, TIMER3CHCTL1_InputBase> ;
    using CH2CAPPSC = TIMER3_CHCTL1_Input_CH2CAPPSC_Values<TIMER3::CHCTL1_Input, 2, 2, ReadWriteMode, TIMER3CHCTL1_InputBase> ;
    using CH2MS = TIMER3_CHCTL1_Input_CH2MS_Values<TIMER3::CHCTL1_Input, 0, 2, ReadWriteMode, TIMER3CHCTL1_InputBase> ;
    using FieldValues = TIMER3_CHCTL1_Input_CH2MS_Values<TIMER3::CHCTL1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_InputPack  = Register<0x4000081C, 16, ReadWriteMode, TIMER3CHCTL1_InputBase, T...> ;

  struct TIMER3CHCTL2Base {} ;

  struct CHCTL2 : public RegisterBase<0x40000820, 16, ReadWriteMode>
  {
    using CH3P = TIMER3_CHCTL2_CH3P_Values<TIMER3::CHCTL2, 13, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using CH3EN = TIMER3_CHCTL2_CH3EN_Values<TIMER3::CHCTL2, 12, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using CH2P = TIMER3_CHCTL2_CH2P_Values<TIMER3::CHCTL2, 9, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using CH2EN = TIMER3_CHCTL2_CH2EN_Values<TIMER3::CHCTL2, 8, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using CH1P = TIMER3_CHCTL2_CH1P_Values<TIMER3::CHCTL2, 5, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using CH1EN = TIMER3_CHCTL2_CH1EN_Values<TIMER3::CHCTL2, 4, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using CH0P = TIMER3_CHCTL2_CH0P_Values<TIMER3::CHCTL2, 1, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using CH0EN = TIMER3_CHCTL2_CH0EN_Values<TIMER3::CHCTL2, 0, 1, ReadWriteMode, TIMER3CHCTL2Base> ;
    using FieldValues = TIMER3_CHCTL2_CH0EN_Values<TIMER3::CHCTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL2Pack  = Register<0x40000820, 16, ReadWriteMode, TIMER3CHCTL2Base, T...> ;

  struct TIMER3CNTBase {} ;

  struct CNT : public RegisterBase<0x40000824, 16, ReadWriteMode>
  {
    using CNTField = TIMER3_CNT_CNT_Values<TIMER3::CNT, 0, 16, ReadWriteMode, TIMER3CNTBase> ;
    using FieldValues = TIMER3_CNT_CNT_Values<TIMER3::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000824, 16, ReadWriteMode, TIMER3CNTBase, T...> ;

  struct TIMER3PSCBase {} ;

  struct PSC : public RegisterBase<0x40000828, 16, ReadWriteMode>
  {
    using PSCField = TIMER3_PSC_PSC_Values<TIMER3::PSC, 0, 16, ReadWriteMode, TIMER3PSCBase> ;
    using FieldValues = TIMER3_PSC_PSC_Values<TIMER3::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000828, 16, ReadWriteMode, TIMER3PSCBase, T...> ;

  struct TIMER3CARBase {} ;

  struct CAR : public RegisterBase<0x4000082C, 16, ReadWriteMode>
  {
    using CARL = TIMER3_CAR_CARL_Values<TIMER3::CAR, 0, 16, ReadWriteMode, TIMER3CARBase> ;
    using FieldValues = TIMER3_CAR_CARL_Values<TIMER3::CAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CARPack  = Register<0x4000082C, 16, ReadWriteMode, TIMER3CARBase, T...> ;

  struct TIMER3CH0CVBase {} ;

  struct CH0CV : public RegisterBase<0x40000834, 32, ReadWriteMode>
  {
    using CH0VAL = TIMER3_CH0CV_CH0VAL_Values<TIMER3::CH0CV, 0, 16, ReadWriteMode, TIMER3CH0CVBase> ;
    using FieldValues = TIMER3_CH0CV_CH0VAL_Values<TIMER3::CH0CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CVPack  = Register<0x40000834, 32, ReadWriteMode, TIMER3CH0CVBase, T...> ;

  struct TIMER3CH1CVBase {} ;

  struct CH1CV : public RegisterBase<0x40000838, 32, ReadWriteMode>
  {
    using CH1VAL = TIMER3_CH1CV_CH1VAL_Values<TIMER3::CH1CV, 0, 16, ReadWriteMode, TIMER3CH1CVBase> ;
    using FieldValues = TIMER3_CH1CV_CH1VAL_Values<TIMER3::CH1CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CVPack  = Register<0x40000838, 32, ReadWriteMode, TIMER3CH1CVBase, T...> ;

  struct TIMER3CH2CVBase {} ;

  struct CH2CV : public RegisterBase<0x4000083C, 32, ReadWriteMode>
  {
    using CH2VAL = TIMER3_CH2CV_CH2VAL_Values<TIMER3::CH2CV, 0, 16, ReadWriteMode, TIMER3CH2CVBase> ;
    using FieldValues = TIMER3_CH2CV_CH2VAL_Values<TIMER3::CH2CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CVPack  = Register<0x4000083C, 32, ReadWriteMode, TIMER3CH2CVBase, T...> ;

  struct TIMER3CH3CVBase {} ;

  struct CH3CV : public RegisterBase<0x40000840, 32, ReadWriteMode>
  {
    using CH3VAL = TIMER3_CH3CV_CH3VAL_Values<TIMER3::CH3CV, 0, 16, ReadWriteMode, TIMER3CH3CVBase> ;
    using FieldValues = TIMER3_CH3CV_CH3VAL_Values<TIMER3::CH3CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CVPack  = Register<0x40000840, 32, ReadWriteMode, TIMER3CH3CVBase, T...> ;

  struct TIMER3DMACFGBase {} ;

  struct DMACFG : public RegisterBase<0x40000848, 16, ReadWriteMode>
  {
    using DMATC = TIMER3_DMACFG_DMATC_Values<TIMER3::DMACFG, 8, 5, ReadWriteMode, TIMER3DMACFGBase> ;
    using DMATA = TIMER3_DMACFG_DMATA_Values<TIMER3::DMACFG, 0, 5, ReadWriteMode, TIMER3DMACFGBase> ;
    using FieldValues = TIMER3_DMACFG_DMATA_Values<TIMER3::DMACFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACFGPack  = Register<0x40000848, 16, ReadWriteMode, TIMER3DMACFGBase, T...> ;

  struct TIMER3DMATBBase {} ;

  struct DMATB : public RegisterBase<0x4000084C, 32, ReadWriteMode>
  {
    using DMATBField = TIMER3_DMATB_DMATB_Values<TIMER3::DMATB, 0, 16, ReadWriteMode, TIMER3DMATBBase> ;
    using FieldValues = TIMER3_DMATB_DMATB_Values<TIMER3::DMATB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMATBPack  = Register<0x4000084C, 32, ReadWriteMode, TIMER3DMATBBase, T...> ;

} ;

#endif //#if !defined(TIMER3REGISTERS_HPP)
