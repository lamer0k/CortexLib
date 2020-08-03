/*******************************************************************************
* Filename      : timer2registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER2REGISTERS_HPP)
#define TIMER2REGISTERS_HPP

#include "timer2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER2
{
  struct TIMER2CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40000400, 16, ReadWriteMode>
  {
    using CKDIV = TIMER2_CTL0_CKDIV_Values<TIMER2::CTL0, 8, 2, ReadWriteMode, TIMER2CTL0Base> ;
    using ARSE = TIMER2_CTL0_ARSE_Values<TIMER2::CTL0, 7, 1, ReadWriteMode, TIMER2CTL0Base> ;
    using CAM = TIMER2_CTL0_CAM_Values<TIMER2::CTL0, 5, 2, ReadWriteMode, TIMER2CTL0Base> ;
    using DIR = TIMER2_CTL0_DIR_Values<TIMER2::CTL0, 4, 1, ReadWriteMode, TIMER2CTL0Base> ;
    using SPM = TIMER2_CTL0_SPM_Values<TIMER2::CTL0, 3, 1, ReadWriteMode, TIMER2CTL0Base> ;
    using UPS = TIMER2_CTL0_UPS_Values<TIMER2::CTL0, 2, 1, ReadWriteMode, TIMER2CTL0Base> ;
    using UPDIS = TIMER2_CTL0_UPDIS_Values<TIMER2::CTL0, 1, 1, ReadWriteMode, TIMER2CTL0Base> ;
    using CEN = TIMER2_CTL0_CEN_Values<TIMER2::CTL0, 0, 1, ReadWriteMode, TIMER2CTL0Base> ;
    using FieldValues = TIMER2_CTL0_CEN_Values<TIMER2::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40000400, 16, ReadWriteMode, TIMER2CTL0Base, T...> ;

  struct TIMER2CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40000404, 16, ReadWriteMode>
  {
    using TI0S = TIMER2_CTL1_TI0S_Values<TIMER2::CTL1, 7, 1, ReadWriteMode, TIMER2CTL1Base> ;
    using MMC = TIMER2_CTL1_MMC_Values<TIMER2::CTL1, 4, 3, ReadWriteMode, TIMER2CTL1Base> ;
    using DMAS = TIMER2_CTL1_DMAS_Values<TIMER2::CTL1, 3, 1, ReadWriteMode, TIMER2CTL1Base> ;
    using FieldValues = TIMER2_CTL1_DMAS_Values<TIMER2::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40000404, 16, ReadWriteMode, TIMER2CTL1Base, T...> ;

  struct TIMER2SMCFGBase {} ;

  struct SMCFG : public RegisterBase<0x40000408, 16, ReadWriteMode>
  {
    using ETP = TIMER2_SMCFG_ETP_Values<TIMER2::SMCFG, 15, 1, ReadWriteMode, TIMER2SMCFGBase> ;
    using SMC1 = TIMER2_SMCFG_SMC1_Values<TIMER2::SMCFG, 14, 1, ReadWriteMode, TIMER2SMCFGBase> ;
    using ETPSC = TIMER2_SMCFG_ETPSC_Values<TIMER2::SMCFG, 12, 2, ReadWriteMode, TIMER2SMCFGBase> ;
    using ETFC = TIMER2_SMCFG_ETFC_Values<TIMER2::SMCFG, 8, 4, ReadWriteMode, TIMER2SMCFGBase> ;
    using MSM = TIMER2_SMCFG_MSM_Values<TIMER2::SMCFG, 7, 1, ReadWriteMode, TIMER2SMCFGBase> ;
    using TRGS = TIMER2_SMCFG_TRGS_Values<TIMER2::SMCFG, 4, 3, ReadWriteMode, TIMER2SMCFGBase> ;
    using SMC = TIMER2_SMCFG_SMC_Values<TIMER2::SMCFG, 0, 3, ReadWriteMode, TIMER2SMCFGBase> ;
    using FieldValues = TIMER2_SMCFG_SMC_Values<TIMER2::SMCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCFGPack  = Register<0x40000408, 16, ReadWriteMode, TIMER2SMCFGBase, T...> ;

  struct TIMER2DMAINTENBase {} ;

  struct DMAINTEN : public RegisterBase<0x4000040C, 16, ReadWriteMode>
  {
    using TRGDEN = TIMER2_DMAINTEN_TRGDEN_Values<TIMER2::DMAINTEN, 14, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH3DEN = TIMER2_DMAINTEN_CH3DEN_Values<TIMER2::DMAINTEN, 12, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH2DEN = TIMER2_DMAINTEN_CH2DEN_Values<TIMER2::DMAINTEN, 11, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH1DEN = TIMER2_DMAINTEN_CH1DEN_Values<TIMER2::DMAINTEN, 10, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH0DEN = TIMER2_DMAINTEN_CH0DEN_Values<TIMER2::DMAINTEN, 9, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using UPDEN = TIMER2_DMAINTEN_UPDEN_Values<TIMER2::DMAINTEN, 8, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using TRGIE = TIMER2_DMAINTEN_TRGIE_Values<TIMER2::DMAINTEN, 6, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH3IE = TIMER2_DMAINTEN_CH3IE_Values<TIMER2::DMAINTEN, 4, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH2IE = TIMER2_DMAINTEN_CH2IE_Values<TIMER2::DMAINTEN, 3, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH1IE = TIMER2_DMAINTEN_CH1IE_Values<TIMER2::DMAINTEN, 2, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using CH0IE = TIMER2_DMAINTEN_CH0IE_Values<TIMER2::DMAINTEN, 1, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using UPIE = TIMER2_DMAINTEN_UPIE_Values<TIMER2::DMAINTEN, 0, 1, ReadWriteMode, TIMER2DMAINTENBase> ;
    using FieldValues = TIMER2_DMAINTEN_UPIE_Values<TIMER2::DMAINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAINTENPack  = Register<0x4000040C, 16, ReadWriteMode, TIMER2DMAINTENBase, T...> ;

  struct TIMER2INTFBase {} ;

  struct INTF : public RegisterBase<0x40000410, 16, ReadWriteMode>
  {
    using CH3OF = TIMER2_INTF_CH3OF_Values<TIMER2::INTF, 12, 1, ReadWriteMode, TIMER2INTFBase> ;
    using CH2OF = TIMER2_INTF_CH2OF_Values<TIMER2::INTF, 11, 1, ReadWriteMode, TIMER2INTFBase> ;
    using CH1OF = TIMER2_INTF_CH1OF_Values<TIMER2::INTF, 10, 1, ReadWriteMode, TIMER2INTFBase> ;
    using CH0OF = TIMER2_INTF_CH0OF_Values<TIMER2::INTF, 9, 1, ReadWriteMode, TIMER2INTFBase> ;
    using TRGIF = TIMER2_INTF_TRGIF_Values<TIMER2::INTF, 6, 1, ReadWriteMode, TIMER2INTFBase> ;
    using CH3IF = TIMER2_INTF_CH3IF_Values<TIMER2::INTF, 4, 1, ReadWriteMode, TIMER2INTFBase> ;
    using CH2IF = TIMER2_INTF_CH2IF_Values<TIMER2::INTF, 3, 1, ReadWriteMode, TIMER2INTFBase> ;
    using CH1IF = TIMER2_INTF_CH1IF_Values<TIMER2::INTF, 2, 1, ReadWriteMode, TIMER2INTFBase> ;
    using CH0IF = TIMER2_INTF_CH0IF_Values<TIMER2::INTF, 1, 1, ReadWriteMode, TIMER2INTFBase> ;
    using UPIF = TIMER2_INTF_UPIF_Values<TIMER2::INTF, 0, 1, ReadWriteMode, TIMER2INTFBase> ;
    using FieldValues = TIMER2_INTF_UPIF_Values<TIMER2::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40000410, 16, ReadWriteMode, TIMER2INTFBase, T...> ;

  struct TIMER2SWEVGBase {} ;

  struct SWEVG : public RegisterBase<0x40000414, 16, WriteMode>
  {
    using TRGG = TIMER2_SWEVG_TRGG_Values<TIMER2::SWEVG, 6, 1, WriteMode, TIMER2SWEVGBase> ;
    using CH3G = TIMER2_SWEVG_CH3G_Values<TIMER2::SWEVG, 4, 1, WriteMode, TIMER2SWEVGBase> ;
    using CH2G = TIMER2_SWEVG_CH2G_Values<TIMER2::SWEVG, 3, 1, WriteMode, TIMER2SWEVGBase> ;
    using CH1G = TIMER2_SWEVG_CH1G_Values<TIMER2::SWEVG, 2, 1, WriteMode, TIMER2SWEVGBase> ;
    using CH0G = TIMER2_SWEVG_CH0G_Values<TIMER2::SWEVG, 1, 1, WriteMode, TIMER2SWEVGBase> ;
    using UPG = TIMER2_SWEVG_UPG_Values<TIMER2::SWEVG, 0, 1, WriteMode, TIMER2SWEVGBase> ;
    using FieldValues = TIMER2_SWEVG_UPG_Values<TIMER2::SWEVG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWEVGPack  = Register<0x40000414, 16, WriteMode, TIMER2SWEVGBase, T...> ;

  struct TIMER2CHCTL0_OutputBase {} ;

  struct CHCTL0_Output : public RegisterBase<0x40000418, 16, ReadWriteMode>
  {
    using CH1COMCEN = TIMER2_CHCTL0_Output_CH1COMCEN_Values<TIMER2::CHCTL0_Output, 15, 1, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH1COMCTL = TIMER2_CHCTL0_Output_CH1COMCTL_Values<TIMER2::CHCTL0_Output, 12, 3, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH1COMSEN = TIMER2_CHCTL0_Output_CH1COMSEN_Values<TIMER2::CHCTL0_Output, 11, 1, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH1COMFEN = TIMER2_CHCTL0_Output_CH1COMFEN_Values<TIMER2::CHCTL0_Output, 10, 1, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH1MS = TIMER2_CHCTL0_Output_CH1MS_Values<TIMER2::CHCTL0_Output, 8, 2, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH0COMCEN = TIMER2_CHCTL0_Output_CH0COMCEN_Values<TIMER2::CHCTL0_Output, 7, 1, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH0COMCTL = TIMER2_CHCTL0_Output_CH0COMCTL_Values<TIMER2::CHCTL0_Output, 4, 3, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH0COMSEN = TIMER2_CHCTL0_Output_CH0COMSEN_Values<TIMER2::CHCTL0_Output, 3, 1, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH0COMFEN = TIMER2_CHCTL0_Output_CH0COMFEN_Values<TIMER2::CHCTL0_Output, 2, 1, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using CH0MS = TIMER2_CHCTL0_Output_CH0MS_Values<TIMER2::CHCTL0_Output, 0, 2, ReadWriteMode, TIMER2CHCTL0_OutputBase> ;
    using FieldValues = TIMER2_CHCTL0_Output_CH0MS_Values<TIMER2::CHCTL0_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_OutputPack  = Register<0x40000418, 16, ReadWriteMode, TIMER2CHCTL0_OutputBase, T...> ;

  struct TIMER2CHCTL0_InputBase {} ;

  struct CHCTL0_Input : public RegisterBase<0x40000418, 16, ReadWriteMode>
  {
    using CH1CAPFLT = TIMER2_CHCTL0_Input_CH1CAPFLT_Values<TIMER2::CHCTL0_Input, 12, 4, ReadWriteMode, TIMER2CHCTL0_InputBase> ;
    using CH1CAPPSC = TIMER2_CHCTL0_Input_CH1CAPPSC_Values<TIMER2::CHCTL0_Input, 10, 2, ReadWriteMode, TIMER2CHCTL0_InputBase> ;
    using CH1MS = TIMER2_CHCTL0_Input_CH1MS_Values<TIMER2::CHCTL0_Input, 8, 2, ReadWriteMode, TIMER2CHCTL0_InputBase> ;
    using CH0CAPFLT = TIMER2_CHCTL0_Input_CH0CAPFLT_Values<TIMER2::CHCTL0_Input, 4, 4, ReadWriteMode, TIMER2CHCTL0_InputBase> ;
    using CH0CAPPSC = TIMER2_CHCTL0_Input_CH0CAPPSC_Values<TIMER2::CHCTL0_Input, 2, 2, ReadWriteMode, TIMER2CHCTL0_InputBase> ;
    using CH0MS = TIMER2_CHCTL0_Input_CH0MS_Values<TIMER2::CHCTL0_Input, 0, 2, ReadWriteMode, TIMER2CHCTL0_InputBase> ;
    using FieldValues = TIMER2_CHCTL0_Input_CH0MS_Values<TIMER2::CHCTL0_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_InputPack  = Register<0x40000418, 16, ReadWriteMode, TIMER2CHCTL0_InputBase, T...> ;

  struct TIMER2CHCTL1_OutputBase {} ;

  struct CHCTL1_Output : public RegisterBase<0x4000041C, 16, ReadWriteMode>
  {
    using CH3COMCEN = TIMER2_CHCTL1_Output_CH3COMCEN_Values<TIMER2::CHCTL1_Output, 15, 1, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH3COMCTL = TIMER2_CHCTL1_Output_CH3COMCTL_Values<TIMER2::CHCTL1_Output, 12, 3, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH3COMSEN = TIMER2_CHCTL1_Output_CH3COMSEN_Values<TIMER2::CHCTL1_Output, 11, 1, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH3COMFEN = TIMER2_CHCTL1_Output_CH3COMFEN_Values<TIMER2::CHCTL1_Output, 10, 1, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH3MS = TIMER2_CHCTL1_Output_CH3MS_Values<TIMER2::CHCTL1_Output, 8, 2, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH2COMCEN = TIMER2_CHCTL1_Output_CH2COMCEN_Values<TIMER2::CHCTL1_Output, 7, 1, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH2COMCTL = TIMER2_CHCTL1_Output_CH2COMCTL_Values<TIMER2::CHCTL1_Output, 4, 3, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH2COMSEN = TIMER2_CHCTL1_Output_CH2COMSEN_Values<TIMER2::CHCTL1_Output, 3, 1, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH2COMFEN = TIMER2_CHCTL1_Output_CH2COMFEN_Values<TIMER2::CHCTL1_Output, 2, 1, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using CH2MS = TIMER2_CHCTL1_Output_CH2MS_Values<TIMER2::CHCTL1_Output, 0, 2, ReadWriteMode, TIMER2CHCTL1_OutputBase> ;
    using FieldValues = TIMER2_CHCTL1_Output_CH2MS_Values<TIMER2::CHCTL1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_OutputPack  = Register<0x4000041C, 16, ReadWriteMode, TIMER2CHCTL1_OutputBase, T...> ;

  struct TIMER2CHCTL1_InputBase {} ;

  struct CHCTL1_Input : public RegisterBase<0x4000041C, 16, ReadWriteMode>
  {
    using CH3CAPFLT = TIMER2_CHCTL1_Input_CH3CAPFLT_Values<TIMER2::CHCTL1_Input, 12, 4, ReadWriteMode, TIMER2CHCTL1_InputBase> ;
    using CH3CAPPSC = TIMER2_CHCTL1_Input_CH3CAPPSC_Values<TIMER2::CHCTL1_Input, 10, 2, ReadWriteMode, TIMER2CHCTL1_InputBase> ;
    using CH3MS = TIMER2_CHCTL1_Input_CH3MS_Values<TIMER2::CHCTL1_Input, 8, 2, ReadWriteMode, TIMER2CHCTL1_InputBase> ;
    using CH2CAPFLT = TIMER2_CHCTL1_Input_CH2CAPFLT_Values<TIMER2::CHCTL1_Input, 4, 4, ReadWriteMode, TIMER2CHCTL1_InputBase> ;
    using CH2CAPPSC = TIMER2_CHCTL1_Input_CH2CAPPSC_Values<TIMER2::CHCTL1_Input, 2, 2, ReadWriteMode, TIMER2CHCTL1_InputBase> ;
    using CH2MS = TIMER2_CHCTL1_Input_CH2MS_Values<TIMER2::CHCTL1_Input, 0, 2, ReadWriteMode, TIMER2CHCTL1_InputBase> ;
    using FieldValues = TIMER2_CHCTL1_Input_CH2MS_Values<TIMER2::CHCTL1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_InputPack  = Register<0x4000041C, 16, ReadWriteMode, TIMER2CHCTL1_InputBase, T...> ;

  struct TIMER2CHCTL2Base {} ;

  struct CHCTL2 : public RegisterBase<0x40000420, 16, ReadWriteMode>
  {
    using CH3P = TIMER2_CHCTL2_CH3P_Values<TIMER2::CHCTL2, 13, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using CH3EN = TIMER2_CHCTL2_CH3EN_Values<TIMER2::CHCTL2, 12, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using CH2P = TIMER2_CHCTL2_CH2P_Values<TIMER2::CHCTL2, 9, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using CH2EN = TIMER2_CHCTL2_CH2EN_Values<TIMER2::CHCTL2, 8, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using CH1P = TIMER2_CHCTL2_CH1P_Values<TIMER2::CHCTL2, 5, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using CH1EN = TIMER2_CHCTL2_CH1EN_Values<TIMER2::CHCTL2, 4, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using CH0P = TIMER2_CHCTL2_CH0P_Values<TIMER2::CHCTL2, 1, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using CH0EN = TIMER2_CHCTL2_CH0EN_Values<TIMER2::CHCTL2, 0, 1, ReadWriteMode, TIMER2CHCTL2Base> ;
    using FieldValues = TIMER2_CHCTL2_CH0EN_Values<TIMER2::CHCTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL2Pack  = Register<0x40000420, 16, ReadWriteMode, TIMER2CHCTL2Base, T...> ;

  struct TIMER2CNTBase {} ;

  struct CNT : public RegisterBase<0x40000424, 16, ReadWriteMode>
  {
    using CNTField = TIMER2_CNT_CNT_Values<TIMER2::CNT, 0, 16, ReadWriteMode, TIMER2CNTBase> ;
    using FieldValues = TIMER2_CNT_CNT_Values<TIMER2::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000424, 16, ReadWriteMode, TIMER2CNTBase, T...> ;

  struct TIMER2PSCBase {} ;

  struct PSC : public RegisterBase<0x40000428, 16, ReadWriteMode>
  {
    using PSCField = TIMER2_PSC_PSC_Values<TIMER2::PSC, 0, 16, ReadWriteMode, TIMER2PSCBase> ;
    using FieldValues = TIMER2_PSC_PSC_Values<TIMER2::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000428, 16, ReadWriteMode, TIMER2PSCBase, T...> ;

  struct TIMER2CARBase {} ;

  struct CAR : public RegisterBase<0x4000042C, 16, ReadWriteMode>
  {
    using CARL = TIMER2_CAR_CARL_Values<TIMER2::CAR, 0, 16, ReadWriteMode, TIMER2CARBase> ;
    using FieldValues = TIMER2_CAR_CARL_Values<TIMER2::CAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CARPack  = Register<0x4000042C, 16, ReadWriteMode, TIMER2CARBase, T...> ;

  struct TIMER2CH0CVBase {} ;

  struct CH0CV : public RegisterBase<0x40000434, 32, ReadWriteMode>
  {
    using CH0VAL = TIMER2_CH0CV_CH0VAL_Values<TIMER2::CH0CV, 0, 16, ReadWriteMode, TIMER2CH0CVBase> ;
    using FieldValues = TIMER2_CH0CV_CH0VAL_Values<TIMER2::CH0CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CVPack  = Register<0x40000434, 32, ReadWriteMode, TIMER2CH0CVBase, T...> ;

  struct TIMER2CH1CVBase {} ;

  struct CH1CV : public RegisterBase<0x40000438, 32, ReadWriteMode>
  {
    using CH1VAL = TIMER2_CH1CV_CH1VAL_Values<TIMER2::CH1CV, 0, 16, ReadWriteMode, TIMER2CH1CVBase> ;
    using FieldValues = TIMER2_CH1CV_CH1VAL_Values<TIMER2::CH1CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CVPack  = Register<0x40000438, 32, ReadWriteMode, TIMER2CH1CVBase, T...> ;

  struct TIMER2CH2CVBase {} ;

  struct CH2CV : public RegisterBase<0x4000043C, 32, ReadWriteMode>
  {
    using CH2VAL = TIMER2_CH2CV_CH2VAL_Values<TIMER2::CH2CV, 0, 16, ReadWriteMode, TIMER2CH2CVBase> ;
    using FieldValues = TIMER2_CH2CV_CH2VAL_Values<TIMER2::CH2CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CVPack  = Register<0x4000043C, 32, ReadWriteMode, TIMER2CH2CVBase, T...> ;

  struct TIMER2CH3CVBase {} ;

  struct CH3CV : public RegisterBase<0x40000440, 32, ReadWriteMode>
  {
    using CH3VAL = TIMER2_CH3CV_CH3VAL_Values<TIMER2::CH3CV, 0, 16, ReadWriteMode, TIMER2CH3CVBase> ;
    using FieldValues = TIMER2_CH3CV_CH3VAL_Values<TIMER2::CH3CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CVPack  = Register<0x40000440, 32, ReadWriteMode, TIMER2CH3CVBase, T...> ;

  struct TIMER2DMACFGBase {} ;

  struct DMACFG : public RegisterBase<0x40000448, 16, ReadWriteMode>
  {
    using DMATC = TIMER2_DMACFG_DMATC_Values<TIMER2::DMACFG, 8, 5, ReadWriteMode, TIMER2DMACFGBase> ;
    using DMATA = TIMER2_DMACFG_DMATA_Values<TIMER2::DMACFG, 0, 5, ReadWriteMode, TIMER2DMACFGBase> ;
    using FieldValues = TIMER2_DMACFG_DMATA_Values<TIMER2::DMACFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACFGPack  = Register<0x40000448, 16, ReadWriteMode, TIMER2DMACFGBase, T...> ;

  struct TIMER2DMATBBase {} ;

  struct DMATB : public RegisterBase<0x4000044C, 32, ReadWriteMode>
  {
    using DMATBField = TIMER2_DMATB_DMATB_Values<TIMER2::DMATB, 0, 16, ReadWriteMode, TIMER2DMATBBase> ;
    using FieldValues = TIMER2_DMATB_DMATB_Values<TIMER2::DMATB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMATBPack  = Register<0x4000044C, 32, ReadWriteMode, TIMER2DMATBBase, T...> ;

} ;

#endif //#if !defined(TIMER2REGISTERS_HPP)
