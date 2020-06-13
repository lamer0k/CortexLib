/*******************************************************************************
* Filename      : timer0registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER0REGISTERS_HPP)
#define TIMER0REGISTERS_HPP

#include "timer0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER0
{
  struct TIMER0CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40012C00, 16, ReadWriteMode>
  {
    using CKDIV = TIMER0_CTL0_CKDIV_Values<TIMER0::CTL0, 8, 2, ReadWriteMode, TIMER0CTL0Base> ;
    using ARSE = TIMER0_CTL0_ARSE_Values<TIMER0::CTL0, 7, 1, ReadWriteMode, TIMER0CTL0Base> ;
    using CAM = TIMER0_CTL0_CAM_Values<TIMER0::CTL0, 5, 2, ReadWriteMode, TIMER0CTL0Base> ;
    using DIR = TIMER0_CTL0_DIR_Values<TIMER0::CTL0, 4, 1, ReadWriteMode, TIMER0CTL0Base> ;
    using SPM = TIMER0_CTL0_SPM_Values<TIMER0::CTL0, 3, 1, ReadWriteMode, TIMER0CTL0Base> ;
    using UPS = TIMER0_CTL0_UPS_Values<TIMER0::CTL0, 2, 1, ReadWriteMode, TIMER0CTL0Base> ;
    using UPDIS = TIMER0_CTL0_UPDIS_Values<TIMER0::CTL0, 1, 1, ReadWriteMode, TIMER0CTL0Base> ;
    using CEN = TIMER0_CTL0_CEN_Values<TIMER0::CTL0, 0, 1, ReadWriteMode, TIMER0CTL0Base> ;
    using FieldValues = TIMER0_CTL0_CEN_Values<TIMER0::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40012C00, 16, ReadWriteMode, TIMER0CTL0Base, T...> ;

  struct TIMER0CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40012C04, 16, ReadWriteMode>
  {
    using ISO3 = TIMER0_CTL1_ISO3_Values<TIMER0::CTL1, 14, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using ISO2N = TIMER0_CTL1_ISO2N_Values<TIMER0::CTL1, 13, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using ISO2 = TIMER0_CTL1_ISO2_Values<TIMER0::CTL1, 12, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using ISO1N = TIMER0_CTL1_ISO1N_Values<TIMER0::CTL1, 11, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using ISO1 = TIMER0_CTL1_ISO1_Values<TIMER0::CTL1, 10, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using ISO0N = TIMER0_CTL1_ISO0N_Values<TIMER0::CTL1, 9, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using ISO0 = TIMER0_CTL1_ISO0_Values<TIMER0::CTL1, 8, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using TI0S = TIMER0_CTL1_TI0S_Values<TIMER0::CTL1, 7, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using MMC = TIMER0_CTL1_MMC_Values<TIMER0::CTL1, 4, 3, ReadWriteMode, TIMER0CTL1Base> ;
    using DMAS = TIMER0_CTL1_DMAS_Values<TIMER0::CTL1, 3, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using CCUC = TIMER0_CTL1_CCUC_Values<TIMER0::CTL1, 2, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using CCSE = TIMER0_CTL1_CCSE_Values<TIMER0::CTL1, 0, 1, ReadWriteMode, TIMER0CTL1Base> ;
    using FieldValues = TIMER0_CTL1_CCSE_Values<TIMER0::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40012C04, 16, ReadWriteMode, TIMER0CTL1Base, T...> ;

  struct TIMER0SMCFGBase {} ;

  struct SMCFG : public RegisterBase<0x40012C08, 16, ReadWriteMode>
  {
    using ETP = TIMER0_SMCFG_ETP_Values<TIMER0::SMCFG, 15, 1, ReadWriteMode, TIMER0SMCFGBase> ;
    using SMC1 = TIMER0_SMCFG_SMC1_Values<TIMER0::SMCFG, 14, 1, ReadWriteMode, TIMER0SMCFGBase> ;
    using ETPSC = TIMER0_SMCFG_ETPSC_Values<TIMER0::SMCFG, 12, 2, ReadWriteMode, TIMER0SMCFGBase> ;
    using ETFC = TIMER0_SMCFG_ETFC_Values<TIMER0::SMCFG, 8, 4, ReadWriteMode, TIMER0SMCFGBase> ;
    using MSM = TIMER0_SMCFG_MSM_Values<TIMER0::SMCFG, 7, 1, ReadWriteMode, TIMER0SMCFGBase> ;
    using TRGS = TIMER0_SMCFG_TRGS_Values<TIMER0::SMCFG, 4, 3, ReadWriteMode, TIMER0SMCFGBase> ;
    using SMC = TIMER0_SMCFG_SMC_Values<TIMER0::SMCFG, 0, 3, ReadWriteMode, TIMER0SMCFGBase> ;
    using FieldValues = TIMER0_SMCFG_SMC_Values<TIMER0::SMCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCFGPack  = Register<0x40012C08, 16, ReadWriteMode, TIMER0SMCFGBase, T...> ;

  struct TIMER0DMAINTENBase {} ;

  struct DMAINTEN : public RegisterBase<0x40012C0C, 16, ReadWriteMode>
  {
    using TRGDEN = TIMER0_DMAINTEN_TRGDEN_Values<TIMER0::DMAINTEN, 14, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CMTDEN = TIMER0_DMAINTEN_CMTDEN_Values<TIMER0::DMAINTEN, 13, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH3DEN = TIMER0_DMAINTEN_CH3DEN_Values<TIMER0::DMAINTEN, 12, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH2DEN = TIMER0_DMAINTEN_CH2DEN_Values<TIMER0::DMAINTEN, 11, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH1DEN = TIMER0_DMAINTEN_CH1DEN_Values<TIMER0::DMAINTEN, 10, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH0DEN = TIMER0_DMAINTEN_CH0DEN_Values<TIMER0::DMAINTEN, 9, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using UPDEN = TIMER0_DMAINTEN_UPDEN_Values<TIMER0::DMAINTEN, 8, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using BRKIE = TIMER0_DMAINTEN_BRKIE_Values<TIMER0::DMAINTEN, 7, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using TRGIE = TIMER0_DMAINTEN_TRGIE_Values<TIMER0::DMAINTEN, 6, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CMTIE = TIMER0_DMAINTEN_CMTIE_Values<TIMER0::DMAINTEN, 5, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH3IE = TIMER0_DMAINTEN_CH3IE_Values<TIMER0::DMAINTEN, 4, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH2IE = TIMER0_DMAINTEN_CH2IE_Values<TIMER0::DMAINTEN, 3, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH1IE = TIMER0_DMAINTEN_CH1IE_Values<TIMER0::DMAINTEN, 2, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using CH0IE = TIMER0_DMAINTEN_CH0IE_Values<TIMER0::DMAINTEN, 1, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using UPIE = TIMER0_DMAINTEN_UPIE_Values<TIMER0::DMAINTEN, 0, 1, ReadWriteMode, TIMER0DMAINTENBase> ;
    using FieldValues = TIMER0_DMAINTEN_UPIE_Values<TIMER0::DMAINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAINTENPack  = Register<0x40012C0C, 16, ReadWriteMode, TIMER0DMAINTENBase, T...> ;

  struct TIMER0INTFBase {} ;

  struct INTF : public RegisterBase<0x40012C10, 16, ReadWriteMode>
  {
    using CH3OF = TIMER0_INTF_CH3OF_Values<TIMER0::INTF, 12, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CH2OF = TIMER0_INTF_CH2OF_Values<TIMER0::INTF, 11, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CH1OF = TIMER0_INTF_CH1OF_Values<TIMER0::INTF, 10, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CH0OF = TIMER0_INTF_CH0OF_Values<TIMER0::INTF, 9, 1, ReadWriteMode, TIMER0INTFBase> ;
    using BRKIF = TIMER0_INTF_BRKIF_Values<TIMER0::INTF, 7, 1, ReadWriteMode, TIMER0INTFBase> ;
    using TRGIF = TIMER0_INTF_TRGIF_Values<TIMER0::INTF, 6, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CMTIF = TIMER0_INTF_CMTIF_Values<TIMER0::INTF, 5, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CH3IF = TIMER0_INTF_CH3IF_Values<TIMER0::INTF, 4, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CH2IF = TIMER0_INTF_CH2IF_Values<TIMER0::INTF, 3, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CH1IF = TIMER0_INTF_CH1IF_Values<TIMER0::INTF, 2, 1, ReadWriteMode, TIMER0INTFBase> ;
    using CH0IF = TIMER0_INTF_CH0IF_Values<TIMER0::INTF, 1, 1, ReadWriteMode, TIMER0INTFBase> ;
    using UPIF = TIMER0_INTF_UPIF_Values<TIMER0::INTF, 0, 1, ReadWriteMode, TIMER0INTFBase> ;
    using FieldValues = TIMER0_INTF_UPIF_Values<TIMER0::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40012C10, 16, ReadWriteMode, TIMER0INTFBase, T...> ;

  struct TIMER0SWEVGBase {} ;

  struct SWEVG : public RegisterBase<0x40012C14, 16, WriteMode>
  {
    using BRKG = TIMER0_SWEVG_BRKG_Values<TIMER0::SWEVG, 7, 1, WriteMode, TIMER0SWEVGBase> ;
    using TRGG = TIMER0_SWEVG_TRGG_Values<TIMER0::SWEVG, 6, 1, WriteMode, TIMER0SWEVGBase> ;
    using CMTG = TIMER0_SWEVG_CMTG_Values<TIMER0::SWEVG, 5, 1, WriteMode, TIMER0SWEVGBase> ;
    using CH3G = TIMER0_SWEVG_CH3G_Values<TIMER0::SWEVG, 4, 1, WriteMode, TIMER0SWEVGBase> ;
    using CH2G = TIMER0_SWEVG_CH2G_Values<TIMER0::SWEVG, 3, 1, WriteMode, TIMER0SWEVGBase> ;
    using CH1G = TIMER0_SWEVG_CH1G_Values<TIMER0::SWEVG, 2, 1, WriteMode, TIMER0SWEVGBase> ;
    using CH0G = TIMER0_SWEVG_CH0G_Values<TIMER0::SWEVG, 1, 1, WriteMode, TIMER0SWEVGBase> ;
    using UPG = TIMER0_SWEVG_UPG_Values<TIMER0::SWEVG, 0, 1, WriteMode, TIMER0SWEVGBase> ;
    using FieldValues = TIMER0_SWEVG_UPG_Values<TIMER0::SWEVG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWEVGPack  = Register<0x40012C14, 16, WriteMode, TIMER0SWEVGBase, T...> ;

  struct TIMER0CHCTL0_OutputBase {} ;

  struct CHCTL0_Output : public RegisterBase<0x40012C18, 16, ReadWriteMode>
  {
    using CH1COMCEN = TIMER0_CHCTL0_Output_CH1COMCEN_Values<TIMER0::CHCTL0_Output, 15, 1, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH1COMCTL = TIMER0_CHCTL0_Output_CH1COMCTL_Values<TIMER0::CHCTL0_Output, 12, 3, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH1COMSEN = TIMER0_CHCTL0_Output_CH1COMSEN_Values<TIMER0::CHCTL0_Output, 11, 1, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH1COMFEN = TIMER0_CHCTL0_Output_CH1COMFEN_Values<TIMER0::CHCTL0_Output, 10, 1, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH1MS = TIMER0_CHCTL0_Output_CH1MS_Values<TIMER0::CHCTL0_Output, 8, 2, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH0COMCEN = TIMER0_CHCTL0_Output_CH0COMCEN_Values<TIMER0::CHCTL0_Output, 7, 1, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH0COMCTL = TIMER0_CHCTL0_Output_CH0COMCTL_Values<TIMER0::CHCTL0_Output, 4, 3, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH0COMSEN = TIMER0_CHCTL0_Output_CH0COMSEN_Values<TIMER0::CHCTL0_Output, 3, 1, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH0COMFEN = TIMER0_CHCTL0_Output_CH0COMFEN_Values<TIMER0::CHCTL0_Output, 2, 1, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using CH0MS = TIMER0_CHCTL0_Output_CH0MS_Values<TIMER0::CHCTL0_Output, 0, 2, ReadWriteMode, TIMER0CHCTL0_OutputBase> ;
    using FieldValues = TIMER0_CHCTL0_Output_CH0MS_Values<TIMER0::CHCTL0_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_OutputPack  = Register<0x40012C18, 16, ReadWriteMode, TIMER0CHCTL0_OutputBase, T...> ;

  struct TIMER0CHCTL0_InputBase {} ;

  struct CHCTL0_Input : public RegisterBase<0x40012C18, 16, ReadWriteMode>
  {
    using CH1CAPFLT = TIMER0_CHCTL0_Input_CH1CAPFLT_Values<TIMER0::CHCTL0_Input, 12, 4, ReadWriteMode, TIMER0CHCTL0_InputBase> ;
    using CH1CAPPSC = TIMER0_CHCTL0_Input_CH1CAPPSC_Values<TIMER0::CHCTL0_Input, 10, 2, ReadWriteMode, TIMER0CHCTL0_InputBase> ;
    using CH1MS = TIMER0_CHCTL0_Input_CH1MS_Values<TIMER0::CHCTL0_Input, 8, 2, ReadWriteMode, TIMER0CHCTL0_InputBase> ;
    using CH0CAPFLT = TIMER0_CHCTL0_Input_CH0CAPFLT_Values<TIMER0::CHCTL0_Input, 4, 4, ReadWriteMode, TIMER0CHCTL0_InputBase> ;
    using CH0CAPPSC = TIMER0_CHCTL0_Input_CH0CAPPSC_Values<TIMER0::CHCTL0_Input, 2, 2, ReadWriteMode, TIMER0CHCTL0_InputBase> ;
    using CH0MS = TIMER0_CHCTL0_Input_CH0MS_Values<TIMER0::CHCTL0_Input, 0, 2, ReadWriteMode, TIMER0CHCTL0_InputBase> ;
    using FieldValues = TIMER0_CHCTL0_Input_CH0MS_Values<TIMER0::CHCTL0_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL0_InputPack  = Register<0x40012C18, 16, ReadWriteMode, TIMER0CHCTL0_InputBase, T...> ;

  struct TIMER0CHCTL1_OutputBase {} ;

  struct CHCTL1_Output : public RegisterBase<0x40012C1C, 16, ReadWriteMode>
  {
    using CH3COMCEN = TIMER0_CHCTL1_Output_CH3COMCEN_Values<TIMER0::CHCTL1_Output, 15, 1, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH3COMCTL = TIMER0_CHCTL1_Output_CH3COMCTL_Values<TIMER0::CHCTL1_Output, 12, 3, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH3COMSEN = TIMER0_CHCTL1_Output_CH3COMSEN_Values<TIMER0::CHCTL1_Output, 11, 1, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH3COMFEN = TIMER0_CHCTL1_Output_CH3COMFEN_Values<TIMER0::CHCTL1_Output, 10, 1, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH3MS = TIMER0_CHCTL1_Output_CH3MS_Values<TIMER0::CHCTL1_Output, 8, 2, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH2COMCEN = TIMER0_CHCTL1_Output_CH2COMCEN_Values<TIMER0::CHCTL1_Output, 7, 1, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH2COMCTL = TIMER0_CHCTL1_Output_CH2COMCTL_Values<TIMER0::CHCTL1_Output, 4, 3, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH2COMSEN = TIMER0_CHCTL1_Output_CH2COMSEN_Values<TIMER0::CHCTL1_Output, 3, 1, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH2COMFEN = TIMER0_CHCTL1_Output_CH2COMFEN_Values<TIMER0::CHCTL1_Output, 2, 1, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using CH2MS = TIMER0_CHCTL1_Output_CH2MS_Values<TIMER0::CHCTL1_Output, 0, 2, ReadWriteMode, TIMER0CHCTL1_OutputBase> ;
    using FieldValues = TIMER0_CHCTL1_Output_CH2MS_Values<TIMER0::CHCTL1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_OutputPack  = Register<0x40012C1C, 16, ReadWriteMode, TIMER0CHCTL1_OutputBase, T...> ;

  struct TIMER0CHCTL1_InputBase {} ;

  struct CHCTL1_Input : public RegisterBase<0x40012C1C, 16, ReadWriteMode>
  {
    using CH3CAPFLT = TIMER0_CHCTL1_Input_CH3CAPFLT_Values<TIMER0::CHCTL1_Input, 12, 4, ReadWriteMode, TIMER0CHCTL1_InputBase> ;
    using CH3CAPPSC = TIMER0_CHCTL1_Input_CH3CAPPSC_Values<TIMER0::CHCTL1_Input, 10, 2, ReadWriteMode, TIMER0CHCTL1_InputBase> ;
    using CH3MS = TIMER0_CHCTL1_Input_CH3MS_Values<TIMER0::CHCTL1_Input, 8, 2, ReadWriteMode, TIMER0CHCTL1_InputBase> ;
    using CH2CAPFLT = TIMER0_CHCTL1_Input_CH2CAPFLT_Values<TIMER0::CHCTL1_Input, 4, 4, ReadWriteMode, TIMER0CHCTL1_InputBase> ;
    using CH2CAPPSC = TIMER0_CHCTL1_Input_CH2CAPPSC_Values<TIMER0::CHCTL1_Input, 2, 2, ReadWriteMode, TIMER0CHCTL1_InputBase> ;
    using CH2MS = TIMER0_CHCTL1_Input_CH2MS_Values<TIMER0::CHCTL1_Input, 0, 2, ReadWriteMode, TIMER0CHCTL1_InputBase> ;
    using FieldValues = TIMER0_CHCTL1_Input_CH2MS_Values<TIMER0::CHCTL1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL1_InputPack  = Register<0x40012C1C, 16, ReadWriteMode, TIMER0CHCTL1_InputBase, T...> ;

  struct TIMER0CHCTL2Base {} ;

  struct CHCTL2 : public RegisterBase<0x40012C20, 16, ReadWriteMode>
  {
    using CH3P = TIMER0_CHCTL2_CH3P_Values<TIMER0::CHCTL2, 13, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH3EN = TIMER0_CHCTL2_CH3EN_Values<TIMER0::CHCTL2, 12, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH2NP = TIMER0_CHCTL2_CH2NP_Values<TIMER0::CHCTL2, 11, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH2NEN = TIMER0_CHCTL2_CH2NEN_Values<TIMER0::CHCTL2, 10, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH2P = TIMER0_CHCTL2_CH2P_Values<TIMER0::CHCTL2, 9, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH2EN = TIMER0_CHCTL2_CH2EN_Values<TIMER0::CHCTL2, 8, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH1NP = TIMER0_CHCTL2_CH1NP_Values<TIMER0::CHCTL2, 7, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH1NEN = TIMER0_CHCTL2_CH1NEN_Values<TIMER0::CHCTL2, 6, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH1P = TIMER0_CHCTL2_CH1P_Values<TIMER0::CHCTL2, 5, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH1EN = TIMER0_CHCTL2_CH1EN_Values<TIMER0::CHCTL2, 4, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH0NP = TIMER0_CHCTL2_CH0NP_Values<TIMER0::CHCTL2, 3, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH0NEN = TIMER0_CHCTL2_CH0NEN_Values<TIMER0::CHCTL2, 2, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH0P = TIMER0_CHCTL2_CH0P_Values<TIMER0::CHCTL2, 1, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using CH0EN = TIMER0_CHCTL2_CH0EN_Values<TIMER0::CHCTL2, 0, 1, ReadWriteMode, TIMER0CHCTL2Base> ;
    using FieldValues = TIMER0_CHCTL2_CH0EN_Values<TIMER0::CHCTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCTL2Pack  = Register<0x40012C20, 16, ReadWriteMode, TIMER0CHCTL2Base, T...> ;

  struct TIMER0CNTBase {} ;

  struct CNT : public RegisterBase<0x40012C24, 16, ReadWriteMode>
  {
    using CNTField = TIMER0_CNT_CNT_Values<TIMER0::CNT, 0, 16, ReadWriteMode, TIMER0CNTBase> ;
    using FieldValues = TIMER0_CNT_CNT_Values<TIMER0::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40012C24, 16, ReadWriteMode, TIMER0CNTBase, T...> ;

  struct TIMER0PSCBase {} ;

  struct PSC : public RegisterBase<0x40012C28, 16, ReadWriteMode>
  {
    using PSCField = TIMER0_PSC_PSC_Values<TIMER0::PSC, 0, 16, ReadWriteMode, TIMER0PSCBase> ;
    using FieldValues = TIMER0_PSC_PSC_Values<TIMER0::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40012C28, 16, ReadWriteMode, TIMER0PSCBase, T...> ;

  struct TIMER0CARBase {} ;

  struct CAR : public RegisterBase<0x40012C2C, 16, ReadWriteMode>
  {
    using CARL = TIMER0_CAR_CARL_Values<TIMER0::CAR, 0, 16, ReadWriteMode, TIMER0CARBase> ;
    using FieldValues = TIMER0_CAR_CARL_Values<TIMER0::CAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CARPack  = Register<0x40012C2C, 16, ReadWriteMode, TIMER0CARBase, T...> ;

  struct TIMER0CREPBase {} ;

  struct CREP : public RegisterBase<0x40012C30, 16, ReadWriteMode>
  {
    using CREPField = TIMER0_CREP_CREP_Values<TIMER0::CREP, 0, 8, ReadWriteMode, TIMER0CREPBase> ;
    using FieldValues = TIMER0_CREP_CREP_Values<TIMER0::CREP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CREPPack  = Register<0x40012C30, 16, ReadWriteMode, TIMER0CREPBase, T...> ;

  struct TIMER0CH0CVBase {} ;

  struct CH0CV : public RegisterBase<0x40012C34, 16, ReadWriteMode>
  {
    using CH0VAL = TIMER0_CH0CV_CH0VAL_Values<TIMER0::CH0CV, 0, 16, ReadWriteMode, TIMER0CH0CVBase> ;
    using FieldValues = TIMER0_CH0CV_CH0VAL_Values<TIMER0::CH0CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CVPack  = Register<0x40012C34, 16, ReadWriteMode, TIMER0CH0CVBase, T...> ;

  struct TIMER0CH1CVBase {} ;

  struct CH1CV : public RegisterBase<0x40012C38, 16, ReadWriteMode>
  {
    using CH1VAL = TIMER0_CH1CV_CH1VAL_Values<TIMER0::CH1CV, 0, 16, ReadWriteMode, TIMER0CH1CVBase> ;
    using FieldValues = TIMER0_CH1CV_CH1VAL_Values<TIMER0::CH1CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CVPack  = Register<0x40012C38, 16, ReadWriteMode, TIMER0CH1CVBase, T...> ;

  struct TIMER0CH2CVBase {} ;

  struct CH2CV : public RegisterBase<0x40012C3C, 16, ReadWriteMode>
  {
    using CH2VAL = TIMER0_CH2CV_CH2VAL_Values<TIMER0::CH2CV, 0, 16, ReadWriteMode, TIMER0CH2CVBase> ;
    using FieldValues = TIMER0_CH2CV_CH2VAL_Values<TIMER0::CH2CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CVPack  = Register<0x40012C3C, 16, ReadWriteMode, TIMER0CH2CVBase, T...> ;

  struct TIMER0CH3CVBase {} ;

  struct CH3CV : public RegisterBase<0x40012C40, 16, ReadWriteMode>
  {
    using CH3VAL = TIMER0_CH3CV_CH3VAL_Values<TIMER0::CH3CV, 0, 16, ReadWriteMode, TIMER0CH3CVBase> ;
    using FieldValues = TIMER0_CH3CV_CH3VAL_Values<TIMER0::CH3CV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CVPack  = Register<0x40012C40, 16, ReadWriteMode, TIMER0CH3CVBase, T...> ;

  struct TIMER0CCHPBase {} ;

  struct CCHP : public RegisterBase<0x40012C44, 16, ReadWriteMode>
  {
    using POEN = TIMER0_CCHP_POEN_Values<TIMER0::CCHP, 15, 1, ReadWriteMode, TIMER0CCHPBase> ;
    using OAEN = TIMER0_CCHP_OAEN_Values<TIMER0::CCHP, 14, 1, ReadWriteMode, TIMER0CCHPBase> ;
    using BRKP = TIMER0_CCHP_BRKP_Values<TIMER0::CCHP, 13, 1, ReadWriteMode, TIMER0CCHPBase> ;
    using BRKEN = TIMER0_CCHP_BRKEN_Values<TIMER0::CCHP, 12, 1, ReadWriteMode, TIMER0CCHPBase> ;
    using ROS = TIMER0_CCHP_ROS_Values<TIMER0::CCHP, 11, 1, ReadWriteMode, TIMER0CCHPBase> ;
    using IOS = TIMER0_CCHP_IOS_Values<TIMER0::CCHP, 10, 1, ReadWriteMode, TIMER0CCHPBase> ;
    using PROT = TIMER0_CCHP_PROT_Values<TIMER0::CCHP, 8, 2, ReadWriteMode, TIMER0CCHPBase> ;
    using DTCFG = TIMER0_CCHP_DTCFG_Values<TIMER0::CCHP, 0, 8, ReadWriteMode, TIMER0CCHPBase> ;
    using FieldValues = TIMER0_CCHP_DTCFG_Values<TIMER0::CCHP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCHPPack  = Register<0x40012C44, 16, ReadWriteMode, TIMER0CCHPBase, T...> ;

  struct TIMER0DMACFGBase {} ;

  struct DMACFG : public RegisterBase<0x40012C48, 16, ReadWriteMode>
  {
    using DMATC = TIMER0_DMACFG_DMATC_Values<TIMER0::DMACFG, 8, 5, ReadWriteMode, TIMER0DMACFGBase> ;
    using DMATA = TIMER0_DMACFG_DMATA_Values<TIMER0::DMACFG, 0, 5, ReadWriteMode, TIMER0DMACFGBase> ;
    using FieldValues = TIMER0_DMACFG_DMATA_Values<TIMER0::DMACFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACFGPack  = Register<0x40012C48, 16, ReadWriteMode, TIMER0DMACFGBase, T...> ;

  struct TIMER0DMATBBase {} ;

  struct DMATB : public RegisterBase<0x40012C4C, 16, ReadWriteMode>
  {
    using DMATBField = TIMER0_DMATB_DMATB_Values<TIMER0::DMATB, 0, 16, ReadWriteMode, TIMER0DMATBBase> ;
    using FieldValues = TIMER0_DMATB_DMATB_Values<TIMER0::DMATB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMATBPack  = Register<0x40012C4C, 16, ReadWriteMode, TIMER0DMATBBase, T...> ;

} ;

#endif //#if !defined(TIMER0REGISTERS_HPP)
