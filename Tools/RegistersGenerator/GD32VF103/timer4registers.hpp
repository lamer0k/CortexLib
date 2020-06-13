/*******************************************************************************
* Filename      : timer4registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER4REGISTERS_HPP)
#define TIMER4REGISTERS_HPP

#include "timer4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER4
{
  struct TIMER4CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40000C00, 16, ReadWriteMode>
  {
    using CKDIV = TIMER4_CTL0_CKDIV_Values<TIMER4::CTL0, 8, 2, ReadWriteMode, TIMER4CTL0Base> ;
    using ARSE = TIMER4_CTL0_ARSE_Values<TIMER4::CTL0, 7, 1, ReadWriteMode, TIMER4CTL0Base> ;
    using CAM = TIMER4_CTL0_CAM_Values<TIMER4::CTL0, 5, 2, ReadWriteMode, TIMER4CTL0Base> ;
    using DIR = TIMER4_CTL0_DIR_Values<TIMER4::CTL0, 4, 1, ReadWriteMode, TIMER4CTL0Base> ;
    using SPM = TIMER4_CTL0_SPM_Values<TIMER4::CTL0, 3, 1, ReadWriteMode, TIMER4CTL0Base> ;
    using UPS = TIMER4_CTL0_UPS_Values<TIMER4::CTL0, 2, 1, ReadWriteMode, TIMER4CTL0Base> ;
    using UPDIS = TIMER4_CTL0_UPDIS_Values<TIMER4::CTL0, 1, 1, ReadWriteMode, TIMER4CTL0Base> ;
    using CEN = TIMER4_CTL0_CEN_Values<TIMER4::CTL0, 0, 1, ReadWriteMode, TIMER4CTL0Base> ;
    using FieldValues = TIMER4_CTL0_CEN_Values<TIMER4::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40000C00, 16, ReadWriteMode, TIMER4CTL0Base, T...> ;

  struct TIMER4CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40000C04, 16, ReadWriteMode>
  {
    using TI0S = TIMER4_CTL1_TI0S_Values<TIMER4::CTL1, 7, 1, ReadWriteMode, TIMER4CTL1Base> ;
    using MMC = TIMER4_CTL1_MMC_Values<TIMER4::CTL1, 4, 3, ReadWriteMode, TIMER4CTL1Base> ;
    using DMAS = TIMER4_CTL1_DMAS_Values<TIMER4::CTL1, 3, 1, ReadWriteMode, TIMER4CTL1Base> ;
    using FieldValues = TIMER4_CTL1_DMAS_Values<TIMER4::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40000C04, 16, ReadWriteMode, TIMER4CTL1Base, T...> ;

  struct TIMER4SMCFGBase {} ;

  struct SMCFG : public RegisterBase<0x40000C08, 16, ReadWriteMode>
  {
    using ETP = TIMER4_SMCFG_ETP_Values<TIMER4::SMCFG, 15, 1, ReadWriteMode, TIMER4SMCFGBase> ;
    using SMC1 = TIMER4_SMCFG_SMC1_Values<TIMER4::SMCFG, 14, 1, ReadWriteMode, TIMER4SMCFGBase> ;
    using ETPSC = TIMER4_SMCFG_ETPSC_Values<TIMER4::SMCFG, 12, 2, ReadWriteMode, TIMER4SMCFGBase> ;
    using ETFC = TIMER4_SMCFG_ETFC_Values<TIMER4::SMCFG, 8, 4, ReadWriteMode, TIMER4SMCFGBase> ;
    using MSM = TIMER4_SMCFG_MSM_Values<TIMER4::SMCFG, 7, 1, ReadWriteMode, TIMER4SMCFGBase> ;
    using TRGS = TIMER4_SMCFG_TRGS_Values<TIMER4::SMCFG, 4, 3, ReadWriteMode, TIMER4SMCFGBase> ;
    using SMC = TIMER4_SMCFG_SMC_Values<TIMER4::SMCFG, 0, 3, ReadWriteMode, TIMER4SMCFGBase> ;
    using FieldValues = TIMER4_SMCFG_SMC_Values<TIMER4::SMCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCFGPack  = Register<0x40000C08, 16, ReadWriteMode, TIMER4SMCFGBase, T...> ;

  struct TIMER4DMAINTENBase {} ;

  struct DMAINTEN : public RegisterBase<0x40000C0C, 16, ReadWriteMode>
  {
    using TRGDEN = TIMER4_DMAINTEN_TRGDEN_Values<TIMER4::DMAINTEN, 14, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH3DEN = TIMER4_DMAINTEN_CH3DEN_Values<TIMER4::DMAINTEN, 12, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH2DEN = TIMER4_DMAINTEN_CH2DEN_Values<TIMER4::DMAINTEN, 11, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH1DEN = TIMER4_DMAINTEN_CH1DEN_Values<TIMER4::DMAINTEN, 10, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH0DEN = TIMER4_DMAINTEN_CH0DEN_Values<TIMER4::DMAINTEN, 9, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using UPDEN = TIMER4_DMAINTEN_UPDEN_Values<TIMER4::DMAINTEN, 8, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using TRGIE = TIMER4_DMAINTEN_TRGIE_Values<TIMER4::DMAINTEN, 6, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH3IE = TIMER4_DMAINTEN_CH3IE_Values<TIMER4::DMAINTEN, 4, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH2IE = TIMER4_DMAINTEN_CH2IE_Values<TIMER4::DMAINTEN, 3, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH1IE = TIMER4_DMAINTEN_CH1IE_Values<TIMER4::DMAINTEN, 2, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using CH0IE = TIMER4_DMAINTEN_CH0IE_Values<TIMER4::DMAINTEN, 1, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using UPIE = TIMER4_DMAINTEN_UPIE_Values<TIMER4::DMAINTEN, 0, 1, ReadWriteMode, TIMER4DMAINTENBase> ;
    using FieldValues = TIMER4_DMAINTEN_UPIE_Values<TIMER4::DMAINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAINTENPack  = Register<0x40000C0C, 16, ReadWriteMode, TIMER4DMAINTENBase, T...> ;

  struct TIMER4INTFBase {} ;

  struct INTF : public RegisterBase<0x40000C10, 16, ReadWriteMode>
  {
    using CH3OF = TIMER4_INTF_CH3OF_Values<TIMER4::INTF, 12, 1, ReadWriteMode, TIMER4INTFBase> ;
    using CH2OF = TIMER4_INTF_CH2OF_Values<TIMER4::INTF, 11, 1, ReadWriteMode, TIMER4INTFBase> ;
    using CH1OF = TIMER4_INTF_CH1OF_Values<TIMER4::INTF, 10, 1, ReadWriteMode, TIMER4INTFBase> ;
    using CH0OF = TIMER4_INTF_CH0OF_Values<TIMER4::INTF, 9, 1, ReadWriteMode, TIMER4INTFBase> ;
    using TRGIF = TIMER4_INTF_TRGIF_Values<TIMER4::INTF, 6, 1, ReadWriteMode, TIMER4INTFBase> ;
    using CH3IF = TIMER4_INTF_CH3IF_Values<TIMER4::INTF, 4, 1, ReadWriteMode, TIMER4INTFBase> ;
    using CH2IF = TIMER4_INTF_CH2IF_Values<TIMER4::INTF, 3, 1, ReadWriteMode, TIMER4INTFBase> ;
    using CH1IF = TIMER4_INTF_CH1IF_Values<TIMER4::INTF, 2, 1, ReadWriteMode, TIMER4INTFBase> ;
    using CH0IF = TIMER4_INTF_CH0IF_Values<TIMER4::INTF, 1, 1, ReadWriteMode, TIMER4INTFBase> ;
    using UPIF = TIMER4_INTF_UPIF_Values<TIMER4::INTF, 0, 1, ReadWriteMode, TIMER4INTFBase> ;
    using FieldValues = TIMER4_INTF_UPIF_Values<TIMER4::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40000C10, 16, ReadWriteMode, TIMER4INTFBase, T...> ;

  struct TIMER4SWEVGBase {} ;

  struct SWEVG : public RegisterBase<0x40000C14, 16, WriteMode>
  {
    using TRGG = TIMER4_SWEVG_TRGG_Values<TIMER4::SWEVG, 6, 1, WriteMode, TIMER4SWEVGBase> ;
    using CH3G = TIMER4_SWEVG_CH3G_Values<TIMER4::SWEVG, 4, 1, WriteMode, TIMER4SWEVGBase> ;
    using CH2G = TIMER4_SWEVG_CH2G_Values<TIMER4::SWEVG, 3, 1, WriteMode, TIMER4SWEVGBase> ;
    using CH1G = TIMER4_SWEVG_CH1G_Values<TIMER4::SWEVG, 2, 1, WriteMode, TIMER4SWEVGBase> ;
    using CH0G = TIMER4_SWEVG_CH0G_Values<TIMER4::SWEVG, 1, 1, WriteMode, TIMER4SWEVGBase> ;
    using UPG = TIMER4_SWEVG_UPG_Values<TIMER4::SWEVG, 0, 1, WriteMode, TIMER4SWEVGBase> ;
    using FieldValues = TIMER4_SWEVG_UPG_Values<TIMER4::SWEVG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWEVGPack  = Register<0x40000C14, 16, WriteMode, TIMER4SWEVGBase, T...> ;

  struct TIMER4CHCTL0_OutputBase {} ;

  struct CHCTL0_Output : public RegisterBase<0x40000C18, 16, ReadWriteMode>
  {
    using CH1COMCEN = TIMER4_CHCTL0_Output_CH1COMCEN_Values<TIMER4::CHCTL0_Output, 15, 1, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH1COMCTL = TIMER4_CHCTL0_Output_CH1COMCTL_Values<TIMER4::CHCTL0_Output, 12, 3, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH1COMSEN = TIMER4_CHCTL0_Output_CH1COMSEN_Values<TIMER4::CHCTL0_Output, 11, 1, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH1COMFEN = TIMER4_CHCTL0_Output_CH1COMFEN_Values<TIMER4::CHCTL0_Output, 10, 1, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH1MS = TIMER4_CHCTL0_Output_CH1MS_Values<TIMER4::CHCTL0_Output, 8, 2, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH0COMCEN = TIMER4_CHCTL0_Output_CH0COMCEN_Values<TIMER4::CHCTL0_Output, 7, 1, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH0COMCTL = TIMER4_CHCTL0_Output_CH0COMCTL_Values<TIMER4::CHCTL0_Output, 4, 3, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH0COMSEN = TIMER4_CHCTL0_Output_CH0COMSEN_Values<TIMER4::CHCTL0_Output, 3, 1, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH0COMFEN = TIMER4_CHCTL0_Output_CH0COMFEN_Values<TIMER4::CHCTL0_Output, 2, 1, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using CH0MS = TIMER4_CHCTL0_Output_CH0MS_Values<TIMER4::CHCTL0_Output, 0, 2, ReadWriteMode, TIMER4CHCTL0_OutputBase> ;
    using FieldValues = TIMER4_CHCTL0_Output_CH0MS_Values<TIMER4::CHCTL0_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_OutputPack  = Register<0x40000C18, 16, ReadWriteMode, TIMER4CHCTL0_OutputBase, T...> ;

  struct TIMER4CHCTL0_InputBase {} ;

  struct CHCTL0_Input : public RegisterBase<0x40000C18, 16, ReadWriteMode>
  {
    using CH1CAPFLT = TIMER4_CHCTL0_Input_CH1CAPFLT_Values<TIMER4::CHCTL0_Input, 12, 4, ReadWriteMode, TIMER4CHCTL0_InputBase> ;
    using CH1CAPPSC = TIMER4_CHCTL0_Input_CH1CAPPSC_Values<TIMER4::CHCTL0_Input, 10, 2, ReadWriteMode, TIMER4CHCTL0_InputBase> ;
    using CH1MS = TIMER4_CHCTL0_Input_CH1MS_Values<TIMER4::CHCTL0_Input, 8, 2, ReadWriteMode, TIMER4CHCTL0_InputBase> ;
    using CH0CAPFLT = TIMER4_CHCTL0_Input_CH0CAPFLT_Values<TIMER4::CHCTL0_Input, 4, 4, ReadWriteMode, TIMER4CHCTL0_InputBase> ;
    using CH0CAPPSC = TIMER4_CHCTL0_Input_CH0CAPPSC_Values<TIMER4::CHCTL0_Input, 2, 2, ReadWriteMode, TIMER4CHCTL0_InputBase> ;
    using CH0MS = TIMER4_CHCTL0_Input_CH0MS_Values<TIMER4::CHCTL0_Input, 0, 2, ReadWriteMode, TIMER4CHCTL0_InputBase> ;
    using FieldValues = TIMER4_CHCTL0_Input_CH0MS_Values<TIMER4::CHCTL0_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_InputPack  = Register<0x40000C18, 16, ReadWriteMode, TIMER4CHCTL0_InputBase, T...> ;

  struct TIMER4CHCTL1_OutputBase {} ;

  struct CHCTL1_Output : public RegisterBase<0x40000C1C, 16, ReadWriteMode>
  {
    using CH3COMCEN = TIMER4_CHCTL1_Output_CH3COMCEN_Values<TIMER4::CHCTL1_Output, 15, 1, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH3COMCTL = TIMER4_CHCTL1_Output_CH3COMCTL_Values<TIMER4::CHCTL1_Output, 12, 3, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH3COMSEN = TIMER4_CHCTL1_Output_CH3COMSEN_Values<TIMER4::CHCTL1_Output, 11, 1, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH3COMFEN = TIMER4_CHCTL1_Output_CH3COMFEN_Values<TIMER4::CHCTL1_Output, 10, 1, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH3MS = TIMER4_CHCTL1_Output_CH3MS_Values<TIMER4::CHCTL1_Output, 8, 2, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH2COMCEN = TIMER4_CHCTL1_Output_CH2COMCEN_Values<TIMER4::CHCTL1_Output, 7, 1, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH2COMCTL = TIMER4_CHCTL1_Output_CH2COMCTL_Values<TIMER4::CHCTL1_Output, 4, 3, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH2COMSEN = TIMER4_CHCTL1_Output_CH2COMSEN_Values<TIMER4::CHCTL1_Output, 3, 1, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH2COMFEN = TIMER4_CHCTL1_Output_CH2COMFEN_Values<TIMER4::CHCTL1_Output, 2, 1, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using CH2MS = TIMER4_CHCTL1_Output_CH2MS_Values<TIMER4::CHCTL1_Output, 0, 2, ReadWriteMode, TIMER4CHCTL1_OutputBase> ;
    using FieldValues = TIMER4_CHCTL1_Output_CH2MS_Values<TIMER4::CHCTL1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_OutputPack  = Register<0x40000C1C, 16, ReadWriteMode, TIMER4CHCTL1_OutputBase, T...> ;

  struct TIMER4CHCTL1_InputBase {} ;

  struct CHCTL1_Input : public RegisterBase<0x40000C1C, 16, ReadWriteMode>
  {
    using CH3CAPFLT = TIMER4_CHCTL1_Input_CH3CAPFLT_Values<TIMER4::CHCTL1_Input, 12, 4, ReadWriteMode, TIMER4CHCTL1_InputBase> ;
    using CH3CAPPSC = TIMER4_CHCTL1_Input_CH3CAPPSC_Values<TIMER4::CHCTL1_Input, 10, 2, ReadWriteMode, TIMER4CHCTL1_InputBase> ;
    using CH3MS = TIMER4_CHCTL1_Input_CH3MS_Values<TIMER4::CHCTL1_Input, 8, 2, ReadWriteMode, TIMER4CHCTL1_InputBase> ;
    using CH2CAPFLT = TIMER4_CHCTL1_Input_CH2CAPFLT_Values<TIMER4::CHCTL1_Input, 4, 4, ReadWriteMode, TIMER4CHCTL1_InputBase> ;
    using CH2CAPPSC = TIMER4_CHCTL1_Input_CH2CAPPSC_Values<TIMER4::CHCTL1_Input, 2, 2, ReadWriteMode, TIMER4CHCTL1_InputBase> ;
    using CH2MS = TIMER4_CHCTL1_Input_CH2MS_Values<TIMER4::CHCTL1_Input, 0, 2, ReadWriteMode, TIMER4CHCTL1_InputBase> ;
    using FieldValues = TIMER4_CHCTL1_Input_CH2MS_Values<TIMER4::CHCTL1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_InputPack  = Register<0x40000C1C, 16, ReadWriteMode, TIMER4CHCTL1_InputBase, T...> ;

  struct TIMER4CHCTL2Base {} ;

  struct CHCTL2 : public RegisterBase<0x40000C20, 16, ReadWriteMode>
  {
    using CH3P = TIMER4_CHCTL2_CH3P_Values<TIMER4::CHCTL2, 13, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using CH3EN = TIMER4_CHCTL2_CH3EN_Values<TIMER4::CHCTL2, 12, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using CH2P = TIMER4_CHCTL2_CH2P_Values<TIMER4::CHCTL2, 9, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using CH2EN = TIMER4_CHCTL2_CH2EN_Values<TIMER4::CHCTL2, 8, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using CH1P = TIMER4_CHCTL2_CH1P_Values<TIMER4::CHCTL2, 5, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using CH1EN = TIMER4_CHCTL2_CH1EN_Values<TIMER4::CHCTL2, 4, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using CH0P = TIMER4_CHCTL2_CH0P_Values<TIMER4::CHCTL2, 1, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using CH0EN = TIMER4_CHCTL2_CH0EN_Values<TIMER4::CHCTL2, 0, 1, ReadWriteMode, TIMER4CHCTL2Base> ;
    using FieldValues = TIMER4_CHCTL2_CH0EN_Values<TIMER4::CHCTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL2Pack  = Register<0x40000C20, 16, ReadWriteMode, TIMER4CHCTL2Base, T...> ;

  struct TIMER4CNTBase {} ;

  struct CNT : public RegisterBase<0x40000C24, 16, ReadWriteMode>
  {
    using CNTField = TIMER4_CNT_CNT_Values<TIMER4::CNT, 0, 16, ReadWriteMode, TIMER4CNTBase> ;
    using FieldValues = TIMER4_CNT_CNT_Values<TIMER4::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000C24, 16, ReadWriteMode, TIMER4CNTBase, T...> ;

  struct TIMER4PSCBase {} ;

  struct PSC : public RegisterBase<0x40000C28, 16, ReadWriteMode>
  {
    using PSCField = TIMER4_PSC_PSC_Values<TIMER4::PSC, 0, 16, ReadWriteMode, TIMER4PSCBase> ;
    using FieldValues = TIMER4_PSC_PSC_Values<TIMER4::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000C28, 16, ReadWriteMode, TIMER4PSCBase, T...> ;

  struct TIMER4CARBase {} ;

  struct CAR : public RegisterBase<0x40000C2C, 16, ReadWriteMode>
  {
    using CARL = TIMER4_CAR_CARL_Values<TIMER4::CAR, 0, 16, ReadWriteMode, TIMER4CARBase> ;
    using FieldValues = TIMER4_CAR_CARL_Values<TIMER4::CAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CARPack  = Register<0x40000C2C, 16, ReadWriteMode, TIMER4CARBase, T...> ;

  struct TIMER4CH0CVBase {} ;

  struct CH0CV : public RegisterBase<0x40000C34, 32, ReadWriteMode>
  {
    using CH0VAL = TIMER4_CH0CV_CH0VAL_Values<TIMER4::CH0CV, 0, 16, ReadWriteMode, TIMER4CH0CVBase> ;
    using FieldValues = TIMER4_CH0CV_CH0VAL_Values<TIMER4::CH0CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CVPack  = Register<0x40000C34, 32, ReadWriteMode, TIMER4CH0CVBase, T...> ;

  struct TIMER4CH1CVBase {} ;

  struct CH1CV : public RegisterBase<0x40000C38, 32, ReadWriteMode>
  {
    using CH1VAL = TIMER4_CH1CV_CH1VAL_Values<TIMER4::CH1CV, 0, 16, ReadWriteMode, TIMER4CH1CVBase> ;
    using FieldValues = TIMER4_CH1CV_CH1VAL_Values<TIMER4::CH1CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CVPack  = Register<0x40000C38, 32, ReadWriteMode, TIMER4CH1CVBase, T...> ;

  struct TIMER4CH2CVBase {} ;

  struct CH2CV : public RegisterBase<0x40000C3C, 32, ReadWriteMode>
  {
    using CH2VAL = TIMER4_CH2CV_CH2VAL_Values<TIMER4::CH2CV, 0, 16, ReadWriteMode, TIMER4CH2CVBase> ;
    using FieldValues = TIMER4_CH2CV_CH2VAL_Values<TIMER4::CH2CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CVPack  = Register<0x40000C3C, 32, ReadWriteMode, TIMER4CH2CVBase, T...> ;

  struct TIMER4CH3CVBase {} ;

  struct CH3CV : public RegisterBase<0x40000C40, 32, ReadWriteMode>
  {
    using CH3VAL = TIMER4_CH3CV_CH3VAL_Values<TIMER4::CH3CV, 0, 16, ReadWriteMode, TIMER4CH3CVBase> ;
    using FieldValues = TIMER4_CH3CV_CH3VAL_Values<TIMER4::CH3CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CVPack  = Register<0x40000C40, 32, ReadWriteMode, TIMER4CH3CVBase, T...> ;

  struct TIMER4DMACFGBase {} ;

  struct DMACFG : public RegisterBase<0x40000C48, 16, ReadWriteMode>
  {
    using DMATC = TIMER4_DMACFG_DMATC_Values<TIMER4::DMACFG, 8, 5, ReadWriteMode, TIMER4DMACFGBase> ;
    using DMATA = TIMER4_DMACFG_DMATA_Values<TIMER4::DMACFG, 0, 5, ReadWriteMode, TIMER4DMACFGBase> ;
    using FieldValues = TIMER4_DMACFG_DMATA_Values<TIMER4::DMACFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACFGPack  = Register<0x40000C48, 16, ReadWriteMode, TIMER4DMACFGBase, T...> ;

  struct TIMER4DMATBBase {} ;

  struct DMATB : public RegisterBase<0x40000C4C, 32, ReadWriteMode>
  {
    using DMATBField = TIMER4_DMATB_DMATB_Values<TIMER4::DMATB, 0, 16, ReadWriteMode, TIMER4DMATBBase> ;
    using FieldValues = TIMER4_DMATB_DMATB_Values<TIMER4::DMATB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMATBPack  = Register<0x40000C4C, 32, ReadWriteMode, TIMER4DMATBBase, T...> ;

} ;

#endif //#if !defined(TIMER4REGISTERS_HPP)
