/*******************************************************************************
* Filename      : timer1registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER1REGISTERS_HPP)
#define TIMER1REGISTERS_HPP

#include "timer1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER1
{
  struct TIMER1CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40000000, 16, ReadWriteMode>
  {
    using CKDIV = TIMER1_CTL0_CKDIV_Values<TIMER1::CTL0, 8, 2, ReadWriteMode, TIMER1CTL0Base> ;
    using ARSE = TIMER1_CTL0_ARSE_Values<TIMER1::CTL0, 7, 1, ReadWriteMode, TIMER1CTL0Base> ;
    using CAM = TIMER1_CTL0_CAM_Values<TIMER1::CTL0, 5, 2, ReadWriteMode, TIMER1CTL0Base> ;
    using DIR = TIMER1_CTL0_DIR_Values<TIMER1::CTL0, 4, 1, ReadWriteMode, TIMER1CTL0Base> ;
    using SPM = TIMER1_CTL0_SPM_Values<TIMER1::CTL0, 3, 1, ReadWriteMode, TIMER1CTL0Base> ;
    using UPS = TIMER1_CTL0_UPS_Values<TIMER1::CTL0, 2, 1, ReadWriteMode, TIMER1CTL0Base> ;
    using UPDIS = TIMER1_CTL0_UPDIS_Values<TIMER1::CTL0, 1, 1, ReadWriteMode, TIMER1CTL0Base> ;
    using CEN = TIMER1_CTL0_CEN_Values<TIMER1::CTL0, 0, 1, ReadWriteMode, TIMER1CTL0Base> ;
    using FieldValues = TIMER1_CTL0_CEN_Values<TIMER1::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40000000, 16, ReadWriteMode, TIMER1CTL0Base, T...> ;

  struct TIMER1CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40000004, 16, ReadWriteMode>
  {
    using TI0S = TIMER1_CTL1_TI0S_Values<TIMER1::CTL1, 7, 1, ReadWriteMode, TIMER1CTL1Base> ;
    using MMC = TIMER1_CTL1_MMC_Values<TIMER1::CTL1, 4, 3, ReadWriteMode, TIMER1CTL1Base> ;
    using DMAS = TIMER1_CTL1_DMAS_Values<TIMER1::CTL1, 3, 1, ReadWriteMode, TIMER1CTL1Base> ;
    using FieldValues = TIMER1_CTL1_DMAS_Values<TIMER1::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40000004, 16, ReadWriteMode, TIMER1CTL1Base, T...> ;

  struct TIMER1SMCFGBase {} ;

  struct SMCFG : public RegisterBase<0x40000008, 16, ReadWriteMode>
  {
    using ETP = TIMER1_SMCFG_ETP_Values<TIMER1::SMCFG, 15, 1, ReadWriteMode, TIMER1SMCFGBase> ;
    using SMC1 = TIMER1_SMCFG_SMC1_Values<TIMER1::SMCFG, 14, 1, ReadWriteMode, TIMER1SMCFGBase> ;
    using ETPSC = TIMER1_SMCFG_ETPSC_Values<TIMER1::SMCFG, 12, 2, ReadWriteMode, TIMER1SMCFGBase> ;
    using ETFC = TIMER1_SMCFG_ETFC_Values<TIMER1::SMCFG, 8, 4, ReadWriteMode, TIMER1SMCFGBase> ;
    using MSM = TIMER1_SMCFG_MSM_Values<TIMER1::SMCFG, 7, 1, ReadWriteMode, TIMER1SMCFGBase> ;
    using TRGS = TIMER1_SMCFG_TRGS_Values<TIMER1::SMCFG, 4, 3, ReadWriteMode, TIMER1SMCFGBase> ;
    using SMC = TIMER1_SMCFG_SMC_Values<TIMER1::SMCFG, 0, 3, ReadWriteMode, TIMER1SMCFGBase> ;
    using FieldValues = TIMER1_SMCFG_SMC_Values<TIMER1::SMCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCFGPack  = Register<0x40000008, 16, ReadWriteMode, TIMER1SMCFGBase, T...> ;

  struct TIMER1DMAINTENBase {} ;

  struct DMAINTEN : public RegisterBase<0x4000000C, 16, ReadWriteMode>
  {
    using TRGDEN = TIMER1_DMAINTEN_TRGDEN_Values<TIMER1::DMAINTEN, 14, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH3DEN = TIMER1_DMAINTEN_CH3DEN_Values<TIMER1::DMAINTEN, 12, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH2DEN = TIMER1_DMAINTEN_CH2DEN_Values<TIMER1::DMAINTEN, 11, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH1DEN = TIMER1_DMAINTEN_CH1DEN_Values<TIMER1::DMAINTEN, 10, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH0DEN = TIMER1_DMAINTEN_CH0DEN_Values<TIMER1::DMAINTEN, 9, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using UPDEN = TIMER1_DMAINTEN_UPDEN_Values<TIMER1::DMAINTEN, 8, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using TRGIE = TIMER1_DMAINTEN_TRGIE_Values<TIMER1::DMAINTEN, 6, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH3IE = TIMER1_DMAINTEN_CH3IE_Values<TIMER1::DMAINTEN, 4, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH2IE = TIMER1_DMAINTEN_CH2IE_Values<TIMER1::DMAINTEN, 3, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH1IE = TIMER1_DMAINTEN_CH1IE_Values<TIMER1::DMAINTEN, 2, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using CH0IE = TIMER1_DMAINTEN_CH0IE_Values<TIMER1::DMAINTEN, 1, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using UPIE = TIMER1_DMAINTEN_UPIE_Values<TIMER1::DMAINTEN, 0, 1, ReadWriteMode, TIMER1DMAINTENBase> ;
    using FieldValues = TIMER1_DMAINTEN_UPIE_Values<TIMER1::DMAINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAINTENPack  = Register<0x4000000C, 16, ReadWriteMode, TIMER1DMAINTENBase, T...> ;

  struct TIMER1INTFBase {} ;

  struct INTF : public RegisterBase<0x40000010, 16, ReadWriteMode>
  {
    using CH3OF = TIMER1_INTF_CH3OF_Values<TIMER1::INTF, 12, 1, ReadWriteMode, TIMER1INTFBase> ;
    using CH2OF = TIMER1_INTF_CH2OF_Values<TIMER1::INTF, 11, 1, ReadWriteMode, TIMER1INTFBase> ;
    using CH1OF = TIMER1_INTF_CH1OF_Values<TIMER1::INTF, 10, 1, ReadWriteMode, TIMER1INTFBase> ;
    using CH0OF = TIMER1_INTF_CH0OF_Values<TIMER1::INTF, 9, 1, ReadWriteMode, TIMER1INTFBase> ;
    using TRGIF = TIMER1_INTF_TRGIF_Values<TIMER1::INTF, 6, 1, ReadWriteMode, TIMER1INTFBase> ;
    using CH3IF = TIMER1_INTF_CH3IF_Values<TIMER1::INTF, 4, 1, ReadWriteMode, TIMER1INTFBase> ;
    using CH2IF = TIMER1_INTF_CH2IF_Values<TIMER1::INTF, 3, 1, ReadWriteMode, TIMER1INTFBase> ;
    using CH1IF = TIMER1_INTF_CH1IF_Values<TIMER1::INTF, 2, 1, ReadWriteMode, TIMER1INTFBase> ;
    using CH0IF = TIMER1_INTF_CH0IF_Values<TIMER1::INTF, 1, 1, ReadWriteMode, TIMER1INTFBase> ;
    using UPIF = TIMER1_INTF_UPIF_Values<TIMER1::INTF, 0, 1, ReadWriteMode, TIMER1INTFBase> ;
    using FieldValues = TIMER1_INTF_UPIF_Values<TIMER1::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40000010, 16, ReadWriteMode, TIMER1INTFBase, T...> ;

  struct TIMER1SWEVGBase {} ;

  struct SWEVG : public RegisterBase<0x40000014, 16, WriteMode>
  {
    using TRGG = TIMER1_SWEVG_TRGG_Values<TIMER1::SWEVG, 6, 1, WriteMode, TIMER1SWEVGBase> ;
    using CH3G = TIMER1_SWEVG_CH3G_Values<TIMER1::SWEVG, 4, 1, WriteMode, TIMER1SWEVGBase> ;
    using CH2G = TIMER1_SWEVG_CH2G_Values<TIMER1::SWEVG, 3, 1, WriteMode, TIMER1SWEVGBase> ;
    using CH1G = TIMER1_SWEVG_CH1G_Values<TIMER1::SWEVG, 2, 1, WriteMode, TIMER1SWEVGBase> ;
    using CH0G = TIMER1_SWEVG_CH0G_Values<TIMER1::SWEVG, 1, 1, WriteMode, TIMER1SWEVGBase> ;
    using UPG = TIMER1_SWEVG_UPG_Values<TIMER1::SWEVG, 0, 1, WriteMode, TIMER1SWEVGBase> ;
    using FieldValues = TIMER1_SWEVG_UPG_Values<TIMER1::SWEVG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWEVGPack  = Register<0x40000014, 16, WriteMode, TIMER1SWEVGBase, T...> ;

  struct TIMER1CHCTL0_OutputBase {} ;

  struct CHCTL0_Output : public RegisterBase<0x40000018, 16, ReadWriteMode>
  {
    using CH1COMCEN = TIMER1_CHCTL0_Output_CH1COMCEN_Values<TIMER1::CHCTL0_Output, 15, 1, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH1COMCTL = TIMER1_CHCTL0_Output_CH1COMCTL_Values<TIMER1::CHCTL0_Output, 12, 3, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH1COMSEN = TIMER1_CHCTL0_Output_CH1COMSEN_Values<TIMER1::CHCTL0_Output, 11, 1, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH1COMFEN = TIMER1_CHCTL0_Output_CH1COMFEN_Values<TIMER1::CHCTL0_Output, 10, 1, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH1MS = TIMER1_CHCTL0_Output_CH1MS_Values<TIMER1::CHCTL0_Output, 8, 2, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH0COMCEN = TIMER1_CHCTL0_Output_CH0COMCEN_Values<TIMER1::CHCTL0_Output, 7, 1, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH0COMCTL = TIMER1_CHCTL0_Output_CH0COMCTL_Values<TIMER1::CHCTL0_Output, 4, 3, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH0COMSEN = TIMER1_CHCTL0_Output_CH0COMSEN_Values<TIMER1::CHCTL0_Output, 3, 1, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH0COMFEN = TIMER1_CHCTL0_Output_CH0COMFEN_Values<TIMER1::CHCTL0_Output, 2, 1, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using CH0MS = TIMER1_CHCTL0_Output_CH0MS_Values<TIMER1::CHCTL0_Output, 0, 2, ReadWriteMode, TIMER1CHCTL0_OutputBase> ;
    using FieldValues = TIMER1_CHCTL0_Output_CH0MS_Values<TIMER1::CHCTL0_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_OutputPack  = Register<0x40000018, 16, ReadWriteMode, TIMER1CHCTL0_OutputBase, T...> ;

  struct TIMER1CHCTL0_InputBase {} ;

  struct CHCTL0_Input : public RegisterBase<0x40000018, 16, ReadWriteMode>
  {
    using CH1CAPFLT = TIMER1_CHCTL0_Input_CH1CAPFLT_Values<TIMER1::CHCTL0_Input, 12, 4, ReadWriteMode, TIMER1CHCTL0_InputBase> ;
    using CH1CAPPSC = TIMER1_CHCTL0_Input_CH1CAPPSC_Values<TIMER1::CHCTL0_Input, 10, 2, ReadWriteMode, TIMER1CHCTL0_InputBase> ;
    using CH1MS = TIMER1_CHCTL0_Input_CH1MS_Values<TIMER1::CHCTL0_Input, 8, 2, ReadWriteMode, TIMER1CHCTL0_InputBase> ;
    using CH0CAPFLT = TIMER1_CHCTL0_Input_CH0CAPFLT_Values<TIMER1::CHCTL0_Input, 4, 4, ReadWriteMode, TIMER1CHCTL0_InputBase> ;
    using CH0CAPPSC = TIMER1_CHCTL0_Input_CH0CAPPSC_Values<TIMER1::CHCTL0_Input, 2, 2, ReadWriteMode, TIMER1CHCTL0_InputBase> ;
    using CH0MS = TIMER1_CHCTL0_Input_CH0MS_Values<TIMER1::CHCTL0_Input, 0, 2, ReadWriteMode, TIMER1CHCTL0_InputBase> ;
    using FieldValues = TIMER1_CHCTL0_Input_CH0MS_Values<TIMER1::CHCTL0_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_InputPack  = Register<0x40000018, 16, ReadWriteMode, TIMER1CHCTL0_InputBase, T...> ;

  struct TIMER1CHCTL1_OutputBase {} ;

  struct CHCTL1_Output : public RegisterBase<0x4000001C, 16, ReadWriteMode>
  {
    using CH3COMCEN = TIMER1_CHCTL1_Output_CH3COMCEN_Values<TIMER1::CHCTL1_Output, 15, 1, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH3COMCTL = TIMER1_CHCTL1_Output_CH3COMCTL_Values<TIMER1::CHCTL1_Output, 12, 3, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH3COMSEN = TIMER1_CHCTL1_Output_CH3COMSEN_Values<TIMER1::CHCTL1_Output, 11, 1, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH3COMFEN = TIMER1_CHCTL1_Output_CH3COMFEN_Values<TIMER1::CHCTL1_Output, 10, 1, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH3MS = TIMER1_CHCTL1_Output_CH3MS_Values<TIMER1::CHCTL1_Output, 8, 2, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH2COMCEN = TIMER1_CHCTL1_Output_CH2COMCEN_Values<TIMER1::CHCTL1_Output, 7, 1, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH2COMCTL = TIMER1_CHCTL1_Output_CH2COMCTL_Values<TIMER1::CHCTL1_Output, 4, 3, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH2COMSEN = TIMER1_CHCTL1_Output_CH2COMSEN_Values<TIMER1::CHCTL1_Output, 3, 1, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH2COMFEN = TIMER1_CHCTL1_Output_CH2COMFEN_Values<TIMER1::CHCTL1_Output, 2, 1, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using CH2MS = TIMER1_CHCTL1_Output_CH2MS_Values<TIMER1::CHCTL1_Output, 0, 2, ReadWriteMode, TIMER1CHCTL1_OutputBase> ;
    using FieldValues = TIMER1_CHCTL1_Output_CH2MS_Values<TIMER1::CHCTL1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_OutputPack  = Register<0x4000001C, 16, ReadWriteMode, TIMER1CHCTL1_OutputBase, T...> ;

  struct TIMER1CHCTL1_InputBase {} ;

  struct CHCTL1_Input : public RegisterBase<0x4000001C, 16, ReadWriteMode>
  {
    using CH3CAPFLT = TIMER1_CHCTL1_Input_CH3CAPFLT_Values<TIMER1::CHCTL1_Input, 12, 4, ReadWriteMode, TIMER1CHCTL1_InputBase> ;
    using CH3CAPPSC = TIMER1_CHCTL1_Input_CH3CAPPSC_Values<TIMER1::CHCTL1_Input, 10, 2, ReadWriteMode, TIMER1CHCTL1_InputBase> ;
    using CH3MS = TIMER1_CHCTL1_Input_CH3MS_Values<TIMER1::CHCTL1_Input, 8, 2, ReadWriteMode, TIMER1CHCTL1_InputBase> ;
    using CH2CAPFLT = TIMER1_CHCTL1_Input_CH2CAPFLT_Values<TIMER1::CHCTL1_Input, 4, 4, ReadWriteMode, TIMER1CHCTL1_InputBase> ;
    using CH2CAPPSC = TIMER1_CHCTL1_Input_CH2CAPPSC_Values<TIMER1::CHCTL1_Input, 2, 2, ReadWriteMode, TIMER1CHCTL1_InputBase> ;
    using CH2MS = TIMER1_CHCTL1_Input_CH2MS_Values<TIMER1::CHCTL1_Input, 0, 2, ReadWriteMode, TIMER1CHCTL1_InputBase> ;
    using FieldValues = TIMER1_CHCTL1_Input_CH2MS_Values<TIMER1::CHCTL1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_InputPack  = Register<0x4000001C, 16, ReadWriteMode, TIMER1CHCTL1_InputBase, T...> ;

  struct TIMER1CHCTL2Base {} ;

  struct CHCTL2 : public RegisterBase<0x40000020, 16, ReadWriteMode>
  {
    using CH3P = TIMER1_CHCTL2_CH3P_Values<TIMER1::CHCTL2, 13, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using CH3EN = TIMER1_CHCTL2_CH3EN_Values<TIMER1::CHCTL2, 12, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using CH2P = TIMER1_CHCTL2_CH2P_Values<TIMER1::CHCTL2, 9, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using CH2EN = TIMER1_CHCTL2_CH2EN_Values<TIMER1::CHCTL2, 8, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using CH1P = TIMER1_CHCTL2_CH1P_Values<TIMER1::CHCTL2, 5, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using CH1EN = TIMER1_CHCTL2_CH1EN_Values<TIMER1::CHCTL2, 4, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using CH0P = TIMER1_CHCTL2_CH0P_Values<TIMER1::CHCTL2, 1, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using CH0EN = TIMER1_CHCTL2_CH0EN_Values<TIMER1::CHCTL2, 0, 1, ReadWriteMode, TIMER1CHCTL2Base> ;
    using FieldValues = TIMER1_CHCTL2_CH0EN_Values<TIMER1::CHCTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL2Pack  = Register<0x40000020, 16, ReadWriteMode, TIMER1CHCTL2Base, T...> ;

  struct TIMER1CNTBase {} ;

  struct CNT : public RegisterBase<0x40000024, 16, ReadWriteMode>
  {
    using CNTField = TIMER1_CNT_CNT_Values<TIMER1::CNT, 0, 16, ReadWriteMode, TIMER1CNTBase> ;
    using FieldValues = TIMER1_CNT_CNT_Values<TIMER1::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000024, 16, ReadWriteMode, TIMER1CNTBase, T...> ;

  struct TIMER1PSCBase {} ;

  struct PSC : public RegisterBase<0x40000028, 16, ReadWriteMode>
  {
    using PSCField = TIMER1_PSC_PSC_Values<TIMER1::PSC, 0, 16, ReadWriteMode, TIMER1PSCBase> ;
    using FieldValues = TIMER1_PSC_PSC_Values<TIMER1::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000028, 16, ReadWriteMode, TIMER1PSCBase, T...> ;

  struct TIMER1CARBase {} ;

  struct CAR : public RegisterBase<0x4000002C, 16, ReadWriteMode>
  {
    using CARL = TIMER1_CAR_CARL_Values<TIMER1::CAR, 0, 16, ReadWriteMode, TIMER1CARBase> ;
    using FieldValues = TIMER1_CAR_CARL_Values<TIMER1::CAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CARPack  = Register<0x4000002C, 16, ReadWriteMode, TIMER1CARBase, T...> ;

  struct TIMER1CH0CVBase {} ;

  struct CH0CV : public RegisterBase<0x40000034, 32, ReadWriteMode>
  {
    using CH0VAL = TIMER1_CH0CV_CH0VAL_Values<TIMER1::CH0CV, 0, 16, ReadWriteMode, TIMER1CH0CVBase> ;
    using FieldValues = TIMER1_CH0CV_CH0VAL_Values<TIMER1::CH0CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CVPack  = Register<0x40000034, 32, ReadWriteMode, TIMER1CH0CVBase, T...> ;

  struct TIMER1CH1CVBase {} ;

  struct CH1CV : public RegisterBase<0x40000038, 32, ReadWriteMode>
  {
    using CH1VAL = TIMER1_CH1CV_CH1VAL_Values<TIMER1::CH1CV, 0, 16, ReadWriteMode, TIMER1CH1CVBase> ;
    using FieldValues = TIMER1_CH1CV_CH1VAL_Values<TIMER1::CH1CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CVPack  = Register<0x40000038, 32, ReadWriteMode, TIMER1CH1CVBase, T...> ;

  struct TIMER1CH2CVBase {} ;

  struct CH2CV : public RegisterBase<0x4000003C, 32, ReadWriteMode>
  {
    using CH2VAL = TIMER1_CH2CV_CH2VAL_Values<TIMER1::CH2CV, 0, 16, ReadWriteMode, TIMER1CH2CVBase> ;
    using FieldValues = TIMER1_CH2CV_CH2VAL_Values<TIMER1::CH2CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CVPack  = Register<0x4000003C, 32, ReadWriteMode, TIMER1CH2CVBase, T...> ;

  struct TIMER1CH3CVBase {} ;

  struct CH3CV : public RegisterBase<0x40000040, 32, ReadWriteMode>
  {
    using CH3VAL = TIMER1_CH3CV_CH3VAL_Values<TIMER1::CH3CV, 0, 16, ReadWriteMode, TIMER1CH3CVBase> ;
    using FieldValues = TIMER1_CH3CV_CH3VAL_Values<TIMER1::CH3CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CVPack  = Register<0x40000040, 32, ReadWriteMode, TIMER1CH3CVBase, T...> ;

  struct TIMER1DMACFGBase {} ;

  struct DMACFG : public RegisterBase<0x40000048, 16, ReadWriteMode>
  {
    using DMATC = TIMER1_DMACFG_DMATC_Values<TIMER1::DMACFG, 8, 5, ReadWriteMode, TIMER1DMACFGBase> ;
    using DMATA = TIMER1_DMACFG_DMATA_Values<TIMER1::DMACFG, 0, 5, ReadWriteMode, TIMER1DMACFGBase> ;
    using FieldValues = TIMER1_DMACFG_DMATA_Values<TIMER1::DMACFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACFGPack  = Register<0x40000048, 16, ReadWriteMode, TIMER1DMACFGBase, T...> ;

  struct TIMER1DMATBBase {} ;

  struct DMATB : public RegisterBase<0x4000004C, 32, ReadWriteMode>
  {
    using DMATBField = TIMER1_DMATB_DMATB_Values<TIMER1::DMATB, 0, 16, ReadWriteMode, TIMER1DMATBBase> ;
    using FieldValues = TIMER1_DMATB_DMATB_Values<TIMER1::DMATB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMATBPack  = Register<0x4000004C, 32, ReadWriteMode, TIMER1DMATBBase, T...> ;

} ;

#endif //#if !defined(TIMER1REGISTERS_HPP)
