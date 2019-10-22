/*******************************************************************************
* Filename      : tim8registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM8REGISTERS_HPP)
#define TIM8REGISTERS_HPP

#include "tim8fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM8
{
  struct TIM8CR1Base {} ;

  struct CR1 : public RegisterBase<0x40010400, 32, ReadWriteMode>
  {
    using CKD = TIM_CR_CKD_Values<TIM8::CR1, 8, 2, ReadWriteMode, TIM8CR1Base> ;
    using ARPE = TIM_CR_ARPE_Values<TIM8::CR1, 7, 1, ReadWriteMode, TIM8CR1Base> ;
    using CMS = TIM_CR_CMS_Values<TIM8::CR1, 5, 2, ReadWriteMode, TIM8CR1Base> ;
    using DIR = TIM_CR_DIR_Values<TIM8::CR1, 4, 1, ReadWriteMode, TIM8CR1Base> ;
    using OPM = TIM_CR_OPM_Values<TIM8::CR1, 3, 1, ReadWriteMode, TIM8CR1Base> ;
    using URS = TIM_CR_URS_Values<TIM8::CR1, 2, 1, ReadWriteMode, TIM8CR1Base> ;
    using UDIS = TIM_CR_UDIS_Values<TIM8::CR1, 1, 1, ReadWriteMode, TIM8CR1Base> ;
    using CEN = TIM_CR_CEN_Values<TIM8::CR1, 0, 1, ReadWriteMode, TIM8CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40010400, 32, ReadWriteMode, TIM8CR1Base, T...> ;

  struct TIM8CR2Base {} ;

  struct CR2 : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using OIS4 = TIM_CR_OIS_Values<TIM8::CR2, 14, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS3N = TIM_CR_OISN_Values<TIM8::CR2, 13, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS3 = TIM_CR_OIS_Values<TIM8::CR2, 12, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS2N = TIM_CR_OISN_Values<TIM8::CR2, 11, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS2 = TIM_CR_OIS_Values<TIM8::CR2, 10, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS1N = TIM_CR_OISN_Values<TIM8::CR2, 9, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS1 = TIM_CR_OIS_Values<TIM8::CR2, 8, 1, ReadWriteMode, TIM8CR2Base> ;
    using TI1S = TIM_CR_TIS_Values<TIM8::CR2, 7, 1, ReadWriteMode, TIM8CR2Base> ;
    using MMS = TIM_CR_MMS_Values<TIM8::CR2, 4, 3, ReadWriteMode, TIM8CR2Base> ;
    using CCDS = TIM_CR_CCDS_Values<TIM8::CR2, 3, 1, ReadWriteMode, TIM8CR2Base> ;
    using CCUS = TIM_CR_CCUS_Values<TIM8::CR2, 2, 1, ReadWriteMode, TIM8CR2Base> ;
    using CCPC = TIM_CR_CCPC_Values<TIM8::CR2, 0, 1, ReadWriteMode, TIM8CR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40010404, 32, ReadWriteMode, TIM8CR2Base, T...> ;

  struct TIM8SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using ETP = TIM_SMCR_ETP_Values<TIM8::SMCR, 15, 1, ReadWriteMode, TIM8SMCRBase> ;
    using ECE = TIM_SMCR_ECE_Values<TIM8::SMCR, 14, 1, ReadWriteMode, TIM8SMCRBase> ;
    using ETPS = TIM_SMCR_ETPS_Values<TIM8::SMCR, 12, 2, ReadWriteMode, TIM8SMCRBase> ;
    using ETF = TIM_SMCR_ETF_Values<TIM8::SMCR, 8, 4, ReadWriteMode, TIM8SMCRBase> ;
    using MSM = TIM_SMCR_MSM_Values<TIM8::SMCR, 7, 1, ReadWriteMode, TIM8SMCRBase> ;
    using TS = TIM_SMCR_TS_Values<TIM8::SMCR, 4, 3, ReadWriteMode, TIM8SMCRBase> ;
    using SMS = TIM_SMCR_SMS_Values<TIM8::SMCR, 0, 3, ReadWriteMode, TIM8SMCRBase> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40010408, 32, ReadWriteMode, TIM8SMCRBase, T...> ;

  struct TIM8DIERBase {} ;

  struct DIER : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using TDE = TIM_DIER_TDE_Values<TIM8::DIER, 14, 1, ReadWriteMode, TIM8DIERBase> ;
    using COMDE = TIM_DIER_COMDE_Values<TIM8::DIER, 13, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC4DE = TIM_DIER_CCDE_Values<TIM8::DIER, 12, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC3DE = TIM_DIER_CCDE_Values<TIM8::DIER, 11, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC2DE = TIM_DIER_CCDE_Values<TIM8::DIER, 10, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC1DE = TIM_DIER_CCDE_Values<TIM8::DIER, 9, 1, ReadWriteMode, TIM8DIERBase> ;
    using UDE = TIM_DIER_UDE_Values<TIM8::DIER, 8, 1, ReadWriteMode, TIM8DIERBase> ;
    using BIE = TIM_DIER_BIE_Values<TIM8::DIER, 7, 1, ReadWriteMode, TIM8DIERBase> ;
    using TIE = TIM_DIER_TIE_Values<TIM8::DIER, 6, 1, ReadWriteMode, TIM8DIERBase> ;
    using COMIE = TIM_DIER_COMIE_Values<TIM8::DIER, 5, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC4IE = TIM_DIER_CCIE_Values<TIM8::DIER, 4, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC3IE = TIM_DIER_CCIE_Values<TIM8::DIER, 3, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC2IE = TIM_DIER_CCIE_Values<TIM8::DIER, 2, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC1IE = TIM_DIER_CCIE_Values<TIM8::DIER, 1, 1, ReadWriteMode, TIM8DIERBase> ;
    using UIE = TIM_DIER_UIE_Values<TIM8::DIER, 0, 1, ReadWriteMode, TIM8DIERBase> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001040C, 32, ReadWriteMode, TIM8DIERBase, T...> ;

  struct TIM8SRBase {} ;

  struct SR : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using CC4OF = TIM_SR_CCOF_Values<TIM8::SR, 12, 1, ReadWriteMode, TIM8SRBase> ;
    using CC3OF = TIM_SR_CCOF_Values<TIM8::SR, 11, 1, ReadWriteMode, TIM8SRBase> ;
    using CC2OF = TIM_SR_CCOF_Values<TIM8::SR, 10, 1, ReadWriteMode, TIM8SRBase> ;
    using CC1OF = TIM_SR_CCOF_Values<TIM8::SR, 9, 1, ReadWriteMode, TIM8SRBase> ;
    using BIF = TIM_SR_BIF_Values<TIM8::SR, 7, 1, ReadWriteMode, TIM8SRBase> ;
    using TIF = TIM_SR_TIF_Values<TIM8::SR, 6, 1, ReadWriteMode, TIM8SRBase> ;
    using COMIF = TIM_SR_COMIF_Values<TIM8::SR, 5, 1, ReadWriteMode, TIM8SRBase> ;
    using CC4IF = TIM_SR_CCIF_Values<TIM8::SR, 4, 1, ReadWriteMode, TIM8SRBase> ;
    using CC3IF = TIM_SR_CCIF_Values<TIM8::SR, 3, 1, ReadWriteMode, TIM8SRBase> ;
    using CC2IF = TIM_SR_CCIF_Values<TIM8::SR, 2, 1, ReadWriteMode, TIM8SRBase> ;
    using CC1IF = TIM_SR_CCIF_Values<TIM8::SR, 1, 1, ReadWriteMode, TIM8SRBase> ;
    using UIF = TIM_SR_UIF_Values<TIM8::SR, 0, 1, ReadWriteMode, TIM8SRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40010410, 32, ReadWriteMode, TIM8SRBase, T...> ;

  struct TIM8EGRBase {} ;

  struct EGR : public RegisterBase<0x40010414, 32, WriteMode>
  {
    using BG = TIM_EGR_BG_Values<TIM8::EGR, 7, 1, WriteMode, TIM8EGRBase> ;
    using TG = TIM_EGR_TG_Values<TIM8::EGR, 6, 1, WriteMode, TIM8EGRBase> ;
    using COMG = TIM_EGR_COMG_Values<TIM8::EGR, 5, 1, WriteMode, TIM8EGRBase> ;
    using CC4G = TIM_EGR_CCG_Values<TIM8::EGR, 4, 1, WriteMode, TIM8EGRBase> ;
    using CC3G = TIM_EGR_CCG_Values<TIM8::EGR, 3, 1, WriteMode, TIM8EGRBase> ;
    using CC2G = TIM_EGR_CCG_Values<TIM8::EGR, 2, 1, WriteMode, TIM8EGRBase> ;
    using CC1G = TIM_EGR_CCG_Values<TIM8::EGR, 1, 1, WriteMode, TIM8EGRBase> ;
    using UG = TIM_EGR_UG_Values<TIM8::EGR, 0, 1, WriteMode, TIM8EGRBase> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40010414, 32, WriteMode, TIM8EGRBase, T...> ;

  struct TIM8CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using OC2CE = TIM_CCMR_Output_OCCE_Values<TIM8::CCMR1_Output, 15, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2M = TIM_CCMR_Output_OCM_Values<TIM8::CCMR1_Output, 12, 3, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2PE = TIM_CCMR_Output_OCPE_Values<TIM8::CCMR1_Output, 11, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2FE = TIM_CCMR_Output_OCFE_Values<TIM8::CCMR1_Output, 10, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using CC2S = TIM_CCMR_Output_CCS_Values<TIM8::CCMR1_Output, 8, 2, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1CE = TIM_CCMR_Output_OCCE_Values<TIM8::CCMR1_Output, 7, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1M = TIM_CCMR_Output_OCM_Values<TIM8::CCMR1_Output, 4, 3, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1PE = TIM_CCMR_Output_OCPE_Values<TIM8::CCMR1_Output, 3, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1FE = TIM_CCMR_Output_OCFE_Values<TIM8::CCMR1_Output, 2, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using CC1S = TIM_CCMR_Output_CCS_Values<TIM8::CCMR1_Output, 0, 2, ReadWriteMode, TIM8CCMR1_OutputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40010418, 32, ReadWriteMode, TIM8CCMR1_OutputBase, T...> ;

  struct TIM8CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using IC2F = TIM_CCMR_Input_ICF_Values<TIM8::CCMR1_Input, 12, 4, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using IC2PCS = TIM_CCMR_Input_ICPCS_Values<TIM8::CCMR1_Input, 10, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using CC2S = TIM_CCMR_Input_CCS_Values<TIM8::CCMR1_Input, 8, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using IC1F = TIM_CCMR_Input_ICF_Values<TIM8::CCMR1_Input, 4, 4, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using ICPCS = TIM_CCMR_Input_ICPCS_Values<TIM8::CCMR1_Input, 2, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using CC1S = TIM_CCMR_Input_CCS_Values<TIM8::CCMR1_Input, 0, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40010418, 32, ReadWriteMode, TIM8CCMR1_InputBase, T...> ;

  struct TIM8CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4001041C, 32, ReadWriteMode>
  {
    using OC4CE = TIM_CCMR_Output_OCCE_Values<TIM8::CCMR2_Output, 15, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4M = TIM_CCMR_Output_OCM_Values<TIM8::CCMR2_Output, 12, 3, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4PE = TIM_CCMR_Output_OCPE_Values<TIM8::CCMR2_Output, 11, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4FE = TIM_CCMR_Output_OCFE_Values<TIM8::CCMR2_Output, 10, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using CC4S = TIM_CCMR_Output_CCS_Values<TIM8::CCMR2_Output, 8, 2, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3CE = TIM_CCMR_Output_OCCE_Values<TIM8::CCMR2_Output, 7, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3M = TIM_CCMR_Output_OCM_Values<TIM8::CCMR2_Output, 4, 3, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3PE = TIM_CCMR_Output_OCPE_Values<TIM8::CCMR2_Output, 3, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3FE = TIM_CCMR_Output_OCFE_Values<TIM8::CCMR2_Output, 2, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using CC3S = TIM_CCMR_Output_CCS_Values<TIM8::CCMR2_Output, 0, 2, ReadWriteMode, TIM8CCMR2_OutputBase> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4001041C, 32, ReadWriteMode, TIM8CCMR2_OutputBase, T...> ;

  struct TIM8CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4001041C, 32, ReadWriteMode>
  {
    using IC4F = TIM_CCMR_Input_ICF_Values<TIM8::CCMR2_Input, 12, 4, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC4PSC = TIM_CCMR_Input_ICPSC_Values<TIM8::CCMR2_Input, 10, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using CC4S = TIM_CCMR_Input_CCS_Values<TIM8::CCMR2_Input, 8, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC3F = TIM_CCMR_Input_ICF_Values<TIM8::CCMR2_Input, 4, 4, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC3PSC = TIM_CCMR_Input_ICPSC_Values<TIM8::CCMR2_Input, 2, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using CC3S = TIM_CCMR_Input_CCS_Values<TIM8::CCMR2_Input, 0, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4001041C, 32, ReadWriteMode, TIM8CCMR2_InputBase, T...> ;

  struct TIM8CCERBase {} ;

  struct CCER : public RegisterBase<0x40010420, 32, ReadWriteMode>
  {
    using CC4P = TIM_CCER_CCP_Values<TIM8::CCER, 13, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC4E = TIM_CCER_CCE_Values<TIM8::CCER, 12, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3NP = TIM_CCER_CCNP_Values<TIM8::CCER, 11, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3NE = TIM_CCER_CCNE_Values<TIM8::CCER, 10, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3P = TIM_CCER_CCP_Values<TIM8::CCER, 9, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3E = TIM_CCER_CCE_Values<TIM8::CCER, 8, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2NP = TIM_CCER_CCNP_Values<TIM8::CCER, 7, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2NE = TIM_CCER_CCNE_Values<TIM8::CCER, 6, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2P = TIM_CCER_CCP_Values<TIM8::CCER, 5, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2E = TIM_CCER_CCE_Values<TIM8::CCER, 4, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1NP = TIM_CCER_CCNP_Values<TIM8::CCER, 3, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1NE = TIM_CCER_CCNE_Values<TIM8::CCER, 2, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1P = TIM_CCER_CCP_Values<TIM8::CCER, 1, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1E = TIM_CCER_CCE_Values<TIM8::CCER, 0, 1, ReadWriteMode, TIM8CCERBase> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40010420, 32, ReadWriteMode, TIM8CCERBase, T...> ;

  struct TIM8CNTBase {} ;

  struct CNT : public RegisterBase<0x40010424, 32, ReadWriteMode>
  {
    using CNTField = TIM_CNT_CNT_Values<TIM8::CNT, 0, 16, ReadWriteMode, TIM8CNTBase> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40010424, 32, ReadWriteMode, TIM8CNTBase, T...> ;

  struct TIM8PSCBase {} ;

  struct PSC : public RegisterBase<0x40010428, 32, ReadWriteMode>
  {
    using PSCField = TIM_PSC_PSC_Values<TIM8::PSC, 0, 16, ReadWriteMode, TIM8PSCBase> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40010428, 32, ReadWriteMode, TIM8PSCBase, T...> ;

  struct TIM8ARRBase {} ;

  struct ARR : public RegisterBase<0x4001042C, 32, ReadWriteMode>
  {
    using ARRField = TIM_ARR_ARR_Values<TIM8::ARR, 0, 16, ReadWriteMode, TIM8ARRBase> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001042C, 32, ReadWriteMode, TIM8ARRBase, T...> ;

  struct TIM8CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40010434, 32, ReadWriteMode>
  {
    using CCR1Field = TIM_CCR_CCR_Values<TIM8::CCR1, 0, 16, ReadWriteMode, TIM8CCR1Base> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40010434, 32, ReadWriteMode, TIM8CCR1Base, T...> ;

  struct TIM8CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40010438, 32, ReadWriteMode>
  {
    using CCR2Field = TIM_CCR_CCR_Values<TIM8::CCR2, 0, 16, ReadWriteMode, TIM8CCR2Base> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40010438, 32, ReadWriteMode, TIM8CCR2Base, T...> ;

  struct TIM8CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4001043C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM_CCR_CCR_Values<TIM8::CCR3, 0, 16, ReadWriteMode, TIM8CCR3Base> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4001043C, 32, ReadWriteMode, TIM8CCR3Base, T...> ;

  struct TIM8CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40010440, 32, ReadWriteMode>
  {
    using CCR4Field = TIM_CCR_CCR_Values<TIM8::CCR4, 0, 16, ReadWriteMode, TIM8CCR4Base> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40010440, 32, ReadWriteMode, TIM8CCR4Base, T...> ;

  struct TIM8DCRBase {} ;

  struct DCR : public RegisterBase<0x40010448, 32, ReadWriteMode>
  {
    using DBL = TIM_DCR_DBL_Values<TIM8::DCR, 8, 5, ReadWriteMode, TIM8DCRBase> ;
    using DBA = TIM_DCR_DBA_Values<TIM8::DCR, 0, 5, ReadWriteMode, TIM8DCRBase> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40010448, 32, ReadWriteMode, TIM8DCRBase, T...> ;

  struct TIM8DMARBase {} ;

  struct DMAR : public RegisterBase<0x4001044C, 32, ReadWriteMode>
  {
    using DMAB = TIM_DMAR_DMAB_Values<TIM8::DMAR, 0, 16, ReadWriteMode, TIM8DMARBase> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4001044C, 32, ReadWriteMode, TIM8DMARBase, T...> ;

  struct TIM8RCRBase {} ;

  struct RCR : public RegisterBase<0x40010430, 32, ReadWriteMode>
  {
    using REP = TIM_RCR_REP_Values<TIM8::RCR, 0, 8, ReadWriteMode, TIM8RCRBase> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40010430, 32, ReadWriteMode, TIM8RCRBase, T...> ;

  struct TIM8BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40010444, 32, ReadWriteMode>
  {
    using MOE = TIM_BDTR_MOE_Values<TIM8::BDTR, 15, 1, ReadWriteMode, TIM8BDTRBase> ;
    using AOE = TIM_BDTR_AOE_Values<TIM8::BDTR, 14, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKP = TIM_BDTR_BKP_Values<TIM8::BDTR, 13, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKE = TIM_BDTR_BKE_Values<TIM8::BDTR, 12, 1, ReadWriteMode, TIM8BDTRBase> ;
    using OSSR = TIM_BDTR_OSSR_Values<TIM8::BDTR, 11, 1, ReadWriteMode, TIM8BDTRBase> ;
    using OSSI = TIM_BDTR_OSSI_Values<TIM8::BDTR, 10, 1, ReadWriteMode, TIM8BDTRBase> ;
    using LOCK = TIM_BDTR_LOCK_Values<TIM8::BDTR, 8, 2, ReadWriteMode, TIM8BDTRBase> ;
    using DTG = TIM_BDTR_DTG_Values<TIM8::BDTR, 0, 8, ReadWriteMode, TIM8BDTRBase> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40010444, 32, ReadWriteMode, TIM8BDTRBase, T...> ;

} ;

#endif //#if !defined(TIM8REGISTERS_HPP)
