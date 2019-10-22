/*******************************************************************************
* Filename      : tim2registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM2REGISTERS_HPP)
#define TIM2REGISTERS_HPP

#include "tim2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM2
{
  struct TIM2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000000, 32, ReadWriteMode>
  {
    using CKD = TIM_CR_CKD_Values<TIM2::CR1, 8, 2, ReadWriteMode, TIM2CR1Base> ;
    using ARPE = TIM_CR_ARPE_Values<TIM2::CR1, 7, 1, ReadWriteMode, TIM2CR1Base> ;
    using CMS = TIM_CR_CMS_Values<TIM2::CR1, 5, 2, ReadWriteMode, TIM2CR1Base> ;
    using DIR = TIM_CR_DIR_Values<TIM2::CR1, 4, 1, ReadWriteMode, TIM2CR1Base> ;
    using OPM = TIM_CR_OPM_Values<TIM2::CR1, 3, 1, ReadWriteMode, TIM2CR1Base> ;
    using URS = TIM_CR_URS_Values<TIM2::CR1, 2, 1, ReadWriteMode, TIM2CR1Base> ;
    using UDIS = TIM_CR_UDIS_Values<TIM2::CR1, 1, 1, ReadWriteMode, TIM2CR1Base> ;
    using CEN = TIM_CR_CEN_Values<TIM2::CR1, 0, 1, ReadWriteMode, TIM2CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000000, 32, ReadWriteMode, TIM2CR1Base, T...> ;

  struct TIM2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000004, 32, ReadWriteMode>
  {
    using TI1S = TIM_CR_TIS_Values<TIM2::CR2, 7, 1, ReadWriteMode, TIM2CR2Base> ;
    using MMS = TIM_CR_MMS_Values<TIM2::CR2, 4, 3, ReadWriteMode, TIM2CR2Base> ;
    using CCDS = TIM_CR_CCDS_Values<TIM2::CR2, 3, 1, ReadWriteMode, TIM2CR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000004, 32, ReadWriteMode, TIM2CR2Base, T...> ;

  struct TIM2SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000008, 32, ReadWriteMode>
  {
    using ETP = TIM_SMCR_ETP_Values<TIM2::SMCR, 15, 1, ReadWriteMode, TIM2SMCRBase> ;
    using ECE = TIM_SMCR_ECE_Values<TIM2::SMCR, 14, 1, ReadWriteMode, TIM2SMCRBase> ;
    using ETPS = TIM_SMCR_ETPS_Values<TIM2::SMCR, 12, 2, ReadWriteMode, TIM2SMCRBase> ;
    using ETF = TIM_SMCR_ETF_Values<TIM2::SMCR, 8, 4, ReadWriteMode, TIM2SMCRBase> ;
    using MSM = TIM_SMCR_MSM_Values<TIM2::SMCR, 7, 1, ReadWriteMode, TIM2SMCRBase> ;
    using TS = TIM_SMCR_TS_Values<TIM2::SMCR, 4, 3, ReadWriteMode, TIM2SMCRBase> ;
    using SMS = TIM_SMCR_SMS_Values<TIM2::SMCR, 0, 3, ReadWriteMode, TIM2SMCRBase> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000008, 32, ReadWriteMode, TIM2SMCRBase, T...> ;

  struct TIM2DIERBase {} ;

  struct DIER : public RegisterBase<0x4000000C, 32, ReadWriteMode>
  {
    using TDE = TIM_DIER_TDE_Values<TIM2::DIER, 14, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC4DE = TIM_DIER_CCDE_Values<TIM2::DIER, 12, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC3DE = TIM_DIER_CCDE_Values<TIM2::DIER, 11, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC2DE = TIM_DIER_CCDE_Values<TIM2::DIER, 10, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC1DE = TIM_DIER_CCDE_Values<TIM2::DIER, 9, 1, ReadWriteMode, TIM2DIERBase> ;
    using UDE = TIM_DIER_UDE_Values<TIM2::DIER, 8, 1, ReadWriteMode, TIM2DIERBase> ;
    using TIE = TIM_DIER_TIE_Values<TIM2::DIER, 6, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC4IE = TIM_DIER_CCIE_Values<TIM2::DIER, 4, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC3IE = TIM_DIER_CCIE_Values<TIM2::DIER, 3, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC2IE = TIM_DIER_CCIE_Values<TIM2::DIER, 2, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC1IE = TIM_DIER_CCIE_Values<TIM2::DIER, 1, 1, ReadWriteMode, TIM2DIERBase> ;
    using UIE = TIM_DIER_UIE_Values<TIM2::DIER, 0, 1, ReadWriteMode, TIM2DIERBase> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000000C, 32, ReadWriteMode, TIM2DIERBase, T...> ;

  struct TIM2SRBase {} ;

  struct SR : public RegisterBase<0x40000010, 32, ReadWriteMode>
  {
    using CC4OF = TIM_SR_CCOF_Values<TIM2::SR, 12, 1, ReadWriteMode, TIM2SRBase> ;
    using CC3OF = TIM_SR_CCOF_Values<TIM2::SR, 11, 1, ReadWriteMode, TIM2SRBase> ;
    using CC2OF = TIM_SR_CCOF_Values<TIM2::SR, 10, 1, ReadWriteMode, TIM2SRBase> ;
    using CC1OF = TIM_SR_CCOF_Values<TIM2::SR, 9, 1, ReadWriteMode, TIM2SRBase> ;
    using TIF = TIM_SR_TIF_Values<TIM2::SR, 6, 1, ReadWriteMode, TIM2SRBase> ;
    using CC4IF = TIM_SR_CCIF_Values<TIM2::SR, 4, 1, ReadWriteMode, TIM2SRBase> ;
    using CC3IF = TIM_SR_CCIF_Values<TIM2::SR, 3, 1, ReadWriteMode, TIM2SRBase> ;
    using CC2IF = TIM_SR_CCIF_Values<TIM2::SR, 2, 1, ReadWriteMode, TIM2SRBase> ;
    using CC1IF = TIM_SR_CCIF_Values<TIM2::SR, 1, 1, ReadWriteMode, TIM2SRBase> ;
    using UIF = TIM_SR_UIF_Values<TIM2::SR, 0, 1, ReadWriteMode, TIM2SRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000010, 32, ReadWriteMode, TIM2SRBase, T...> ;

  struct TIM2EGRBase {} ;

  struct EGR : public RegisterBase<0x40000014, 32, WriteMode>
  {
    using TG = TIM_EGR_TG_Values<TIM2::EGR, 6, 1, WriteMode, TIM2EGRBase> ;
    using CC4G = TIM_EGR_CCG_Values<TIM2::EGR, 4, 1, WriteMode, TIM2EGRBase> ;
    using CC3G = TIM_EGR_CCG_Values<TIM2::EGR, 3, 1, WriteMode, TIM2EGRBase> ;
    using CC2G = TIM_EGR_CCG_Values<TIM2::EGR, 2, 1, WriteMode, TIM2EGRBase> ;
    using CC1G = TIM_EGR_CCG_Values<TIM2::EGR, 1, 1, WriteMode, TIM2EGRBase> ;
    using UG = TIM_EGR_UG_Values<TIM2::EGR, 0, 1, WriteMode, TIM2EGRBase> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000014, 32, WriteMode, TIM2EGRBase, T...> ;

  struct TIM2CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using OC2CE = TIM_CCMR_Output_OCCE_Values<TIM2::CCMR1_Output, 15, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2M = TIM_CCMR_Output_OCM_Values<TIM2::CCMR1_Output, 12, 3, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2PE = TIM_CCMR_Output_OCPE_Values<TIM2::CCMR1_Output, 11, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2FE = TIM_CCMR_Output_OCFE_Values<TIM2::CCMR1_Output, 10, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using CC2S = TIM_CCMR_Output_CCS_Values<TIM2::CCMR1_Output, 8, 2, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1CE = TIM_CCMR_Output_OCCE_Values<TIM2::CCMR1_Output, 7, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1M = TIM_CCMR_Output_OCM_Values<TIM2::CCMR1_Output, 4, 3, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1PE = TIM_CCMR_Output_OCPE_Values<TIM2::CCMR1_Output, 3, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1FE = TIM_CCMR_Output_OCFE_Values<TIM2::CCMR1_Output, 2, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using CC1S = TIM_CCMR_Output_CCS_Values<TIM2::CCMR1_Output, 0, 2, ReadWriteMode, TIM2CCMR1_OutputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000018, 32, ReadWriteMode, TIM2CCMR1_OutputBase, T...> ;

  struct TIM2CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using IC2F = TIM_CCMR_Input_ICF_Values<TIM2::CCMR1_Input, 12, 4, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using IC2PCS = TIM_CCMR_Input_ICPCS_Values<TIM2::CCMR1_Input, 10, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using CC2S = TIM_CCMR_Input_CCS_Values<TIM2::CCMR1_Input, 8, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using IC1F = TIM_CCMR_Input_ICF_Values<TIM2::CCMR1_Input, 4, 4, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using ICPCS = TIM_CCMR_Input_ICPCS_Values<TIM2::CCMR1_Input, 2, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using CC1S = TIM_CCMR_Input_CCS_Values<TIM2::CCMR1_Input, 0, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000018, 32, ReadWriteMode, TIM2CCMR1_InputBase, T...> ;

  struct TIM2CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using O24CE = TIM_CCMR_Output_OCE_Values<TIM2::CCMR2_Output, 15, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4M = TIM_CCMR_Output_OCM_Values<TIM2::CCMR2_Output, 12, 3, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4PE = TIM_CCMR_Output_OCPE_Values<TIM2::CCMR2_Output, 11, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4FE = TIM_CCMR_Output_OCFE_Values<TIM2::CCMR2_Output, 10, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using CC4S = TIM_CCMR_Output_CCS_Values<TIM2::CCMR2_Output, 8, 2, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3CE = TIM_CCMR_Output_OCCE_Values<TIM2::CCMR2_Output, 7, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3M = TIM_CCMR_Output_OCM_Values<TIM2::CCMR2_Output, 4, 3, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3PE = TIM_CCMR_Output_OCPE_Values<TIM2::CCMR2_Output, 3, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3FE = TIM_CCMR_Output_OCFE_Values<TIM2::CCMR2_Output, 2, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using CC3S = TIM_CCMR_Output_CCS_Values<TIM2::CCMR2_Output, 0, 2, ReadWriteMode, TIM2CCMR2_OutputBase> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000001C, 32, ReadWriteMode, TIM2CCMR2_OutputBase, T...> ;

  struct TIM2CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using IC4F = TIM_CCMR_Input_ICF_Values<TIM2::CCMR2_Input, 12, 4, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC4PSC = TIM_CCMR_Input_ICPSC_Values<TIM2::CCMR2_Input, 10, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using CC4S = TIM_CCMR_Input_CCS_Values<TIM2::CCMR2_Input, 8, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC3F = TIM_CCMR_Input_ICF_Values<TIM2::CCMR2_Input, 4, 4, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC3PSC = TIM_CCMR_Input_ICPSC_Values<TIM2::CCMR2_Input, 2, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using CC3S = TIM_CCMR_Input_CCS_Values<TIM2::CCMR2_Input, 0, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000001C, 32, ReadWriteMode, TIM2CCMR2_InputBase, T...> ;

  struct TIM2CCERBase {} ;

  struct CCER : public RegisterBase<0x40000020, 32, ReadWriteMode>
  {
    using CC4NP = TIM_CCER_CCNP_Values<TIM2::CCER, 15, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4P = TIM_CCER_CCP_Values<TIM2::CCER, 13, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4E = TIM_CCER_CCE_Values<TIM2::CCER, 12, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3NP = TIM_CCER_CCNP_Values<TIM2::CCER, 11, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3P = TIM_CCER_CCP_Values<TIM2::CCER, 9, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3E = TIM_CCER_CCE_Values<TIM2::CCER, 8, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2NP = TIM_CCER_CCNP_Values<TIM2::CCER, 7, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2P = TIM_CCER_CCP_Values<TIM2::CCER, 5, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2E = TIM_CCER_CCE_Values<TIM2::CCER, 4, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1NP = TIM_CCER_CCNP_Values<TIM2::CCER, 3, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1P = TIM_CCER_CCP_Values<TIM2::CCER, 1, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1E = TIM_CCER_CCE_Values<TIM2::CCER, 0, 1, ReadWriteMode, TIM2CCERBase> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000020, 32, ReadWriteMode, TIM2CCERBase, T...> ;

  struct TIM2CNTBase {} ;

  struct CNT : public RegisterBase<0x40000024, 32, ReadWriteMode>
  {
    using CNT_H = TIM_CNT_CNT_H_Values<TIM2::CNT, 16, 16, ReadWriteMode, TIM2CNTBase> ;
    using CNT_L = TIM_CNT_CNT_L_Values<TIM2::CNT, 0, 16, ReadWriteMode, TIM2CNTBase> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000024, 32, ReadWriteMode, TIM2CNTBase, T...> ;

  struct TIM2PSCBase {} ;

  struct PSC : public RegisterBase<0x40000028, 32, ReadWriteMode>
  {
    using PSCField = TIM_PSC_PSC_Values<TIM2::PSC, 0, 16, ReadWriteMode, TIM2PSCBase> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000028, 32, ReadWriteMode, TIM2PSCBase, T...> ;

  struct TIM2ARRBase {} ;

  struct ARR : public RegisterBase<0x4000002C, 32, ReadWriteMode>
  {
    using ARR_H = TIM_ARR_ARR_H_Values<TIM2::ARR, 16, 16, ReadWriteMode, TIM2ARRBase> ;
    using ARR_L = TIM_ARR_ARR_L_Values<TIM2::ARR, 0, 16, ReadWriteMode, TIM2ARRBase> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000002C, 32, ReadWriteMode, TIM2ARRBase, T...> ;

  struct TIM2CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000034, 32, ReadWriteMode>
  {
    using CCR1_H = TIM_CCR_CCR_H_Values<TIM2::CCR1, 16, 16, ReadWriteMode, TIM2CCR1Base> ;
    using CCR1_L = TIM_CCR_CCR_L_Values<TIM2::CCR1, 0, 16, ReadWriteMode, TIM2CCR1Base> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000034, 32, ReadWriteMode, TIM2CCR1Base, T...> ;

  struct TIM2CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000038, 32, ReadWriteMode>
  {
    using CCR2_H = TIM_CCR_CCR_H_Values<TIM2::CCR2, 16, 16, ReadWriteMode, TIM2CCR2Base> ;
    using CCR2_L = TIM_CCR_CCR_L_Values<TIM2::CCR2, 0, 16, ReadWriteMode, TIM2CCR2Base> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000038, 32, ReadWriteMode, TIM2CCR2Base, T...> ;

  struct TIM2CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000003C, 32, ReadWriteMode>
  {
    using CCR3_H = TIM_CCR_CCR_H_Values<TIM2::CCR3, 16, 16, ReadWriteMode, TIM2CCR3Base> ;
    using CCR3_L = TIM_CCR_CCR_L_Values<TIM2::CCR3, 0, 16, ReadWriteMode, TIM2CCR3Base> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000003C, 32, ReadWriteMode, TIM2CCR3Base, T...> ;

  struct TIM2CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000040, 32, ReadWriteMode>
  {
    using CCR4_H = TIM_CCR_CCR_H_Values<TIM2::CCR4, 16, 16, ReadWriteMode, TIM2CCR4Base> ;
    using CCR4_L = TIM_CCR_CCR_L_Values<TIM2::CCR4, 0, 16, ReadWriteMode, TIM2CCR4Base> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000040, 32, ReadWriteMode, TIM2CCR4Base, T...> ;

  struct TIM2DCRBase {} ;

  struct DCR : public RegisterBase<0x40000048, 32, ReadWriteMode>
  {
    using DBL = TIM_DCR_DBL_Values<TIM2::DCR, 8, 5, ReadWriteMode, TIM2DCRBase> ;
    using DBA = TIM_DCR_DBA_Values<TIM2::DCR, 0, 5, ReadWriteMode, TIM2DCRBase> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40000048, 32, ReadWriteMode, TIM2DCRBase, T...> ;

  struct TIM2DMARBase {} ;

  struct DMAR : public RegisterBase<0x4000004C, 32, ReadWriteMode>
  {
    using DMAB = TIM_DMAR_DMAB_Values<TIM2::DMAR, 0, 16, ReadWriteMode, TIM2DMARBase> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4000004C, 32, ReadWriteMode, TIM2DMARBase, T...> ;

  struct TIM2ORBase {} ;

  struct OR : public RegisterBase<0x40000050, 32, ReadWriteMode>
  {
    using ITR1_RMP = TIM_OR_ITR_RMP_Values<TIM2::OR, 10, 2, ReadWriteMode, TIM2ORBase> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40000050, 32, ReadWriteMode, TIM2ORBase, T...> ;

} ;

#endif //#if !defined(TIM2REGISTERS_HPP)
