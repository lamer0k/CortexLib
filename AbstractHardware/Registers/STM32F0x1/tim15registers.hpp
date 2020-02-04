/*******************************************************************************
* Filename      : tim15registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(TIM15REGISTERS_HPP)
#define TIM15REGISTERS_HPP

#include "tim15fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM15
{
  struct TIM15CR1Base {} ;

  struct CR1 : public RegisterBase<0x40014000, 32, ReadWriteMode>
  {
    using CKD = TIM15_CR1_CKD_Values<TIM15::CR1, 8, 2, ReadWriteMode, TIM15CR1Base> ;
    using ARPE = TIM15_CR1_ARPE_Values<TIM15::CR1, 7, 1, ReadWriteMode, TIM15CR1Base> ;
    using OPM = TIM15_CR1_OPM_Values<TIM15::CR1, 3, 1, ReadWriteMode, TIM15CR1Base> ;
    using URS = TIM15_CR1_URS_Values<TIM15::CR1, 2, 1, ReadWriteMode, TIM15CR1Base> ;
    using UDIS = TIM15_CR1_UDIS_Values<TIM15::CR1, 1, 1, ReadWriteMode, TIM15CR1Base> ;
    using CEN = TIM15_CR1_CEN_Values<TIM15::CR1, 0, 1, ReadWriteMode, TIM15CR1Base> ;
    using FieldValues = TIM15_CR1_CEN_Values<TIM15::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40014000, 32, ReadWriteMode, TIM15CR1Base, T...> ;

  struct TIM15CR2Base {} ;

  struct CR2 : public RegisterBase<0x40014004, 32, ReadWriteMode>
  {
    using OIS2 = TIM15_CR2_OIS2_Values<TIM15::CR2, 10, 1, ReadWriteMode, TIM15CR2Base> ;
    using OIS1N = TIM15_CR2_OIS1N_Values<TIM15::CR2, 9, 1, ReadWriteMode, TIM15CR2Base> ;
    using OIS1 = TIM15_CR2_OIS1_Values<TIM15::CR2, 8, 1, ReadWriteMode, TIM15CR2Base> ;
    using MMS = TIM15_CR2_MMS_Values<TIM15::CR2, 4, 3, ReadWriteMode, TIM15CR2Base> ;
    using CCDS = TIM15_CR2_CCDS_Values<TIM15::CR2, 3, 1, ReadWriteMode, TIM15CR2Base> ;
    using CCUS = TIM15_CR2_CCUS_Values<TIM15::CR2, 2, 1, ReadWriteMode, TIM15CR2Base> ;
    using CCPC = TIM15_CR2_CCPC_Values<TIM15::CR2, 0, 1, ReadWriteMode, TIM15CR2Base> ;
    using FieldValues = TIM15_CR2_CCPC_Values<TIM15::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40014004, 32, ReadWriteMode, TIM15CR2Base, T...> ;

  struct TIM15SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40014008, 32, ReadWriteMode>
  {
    using MSM = TIM15_SMCR_MSM_Values<TIM15::SMCR, 7, 1, ReadWriteMode, TIM15SMCRBase> ;
    using TS = TIM15_SMCR_TS_Values<TIM15::SMCR, 4, 3, ReadWriteMode, TIM15SMCRBase> ;
    using SMS = TIM15_SMCR_SMS_Values<TIM15::SMCR, 0, 3, ReadWriteMode, TIM15SMCRBase> ;
    using FieldValues = TIM15_SMCR_SMS_Values<TIM15::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40014008, 32, ReadWriteMode, TIM15SMCRBase, T...> ;

  struct TIM15DIERBase {} ;

  struct DIER : public RegisterBase<0x4001400C, 32, ReadWriteMode>
  {
    using TDE = TIM15_DIER_TDE_Values<TIM15::DIER, 14, 1, ReadWriteMode, TIM15DIERBase> ;
    using CC2DE = TIM15_DIER_CC2DE_Values<TIM15::DIER, 10, 1, ReadWriteMode, TIM15DIERBase> ;
    using CC1DE = TIM15_DIER_CC1DE_Values<TIM15::DIER, 9, 1, ReadWriteMode, TIM15DIERBase> ;
    using UDE = TIM15_DIER_UDE_Values<TIM15::DIER, 8, 1, ReadWriteMode, TIM15DIERBase> ;
    using BIE = TIM15_DIER_BIE_Values<TIM15::DIER, 7, 1, ReadWriteMode, TIM15DIERBase> ;
    using TIE = TIM15_DIER_TIE_Values<TIM15::DIER, 6, 1, ReadWriteMode, TIM15DIERBase> ;
    using COMIE = TIM15_DIER_COMIE_Values<TIM15::DIER, 5, 1, ReadWriteMode, TIM15DIERBase> ;
    using CC2IE = TIM15_DIER_CC2IE_Values<TIM15::DIER, 2, 1, ReadWriteMode, TIM15DIERBase> ;
    using CC1IE = TIM15_DIER_CC1IE_Values<TIM15::DIER, 1, 1, ReadWriteMode, TIM15DIERBase> ;
    using UIE = TIM15_DIER_UIE_Values<TIM15::DIER, 0, 1, ReadWriteMode, TIM15DIERBase> ;
    using FieldValues = TIM15_DIER_UIE_Values<TIM15::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001400C, 32, ReadWriteMode, TIM15DIERBase, T...> ;

  struct TIM15SRBase {} ;

  struct SR : public RegisterBase<0x40014010, 32, ReadWriteMode>
  {
    using CC2OF = TIM15_SR_CC2OF_Values<TIM15::SR, 10, 1, ReadWriteMode, TIM15SRBase> ;
    using CC1OF = TIM15_SR_CC1OF_Values<TIM15::SR, 9, 1, ReadWriteMode, TIM15SRBase> ;
    using BIF = TIM15_SR_BIF_Values<TIM15::SR, 7, 1, ReadWriteMode, TIM15SRBase> ;
    using TIF = TIM15_SR_TIF_Values<TIM15::SR, 6, 1, ReadWriteMode, TIM15SRBase> ;
    using COMIF = TIM15_SR_COMIF_Values<TIM15::SR, 5, 1, ReadWriteMode, TIM15SRBase> ;
    using CC2IF = TIM15_SR_CC2IF_Values<TIM15::SR, 2, 1, ReadWriteMode, TIM15SRBase> ;
    using CC1IF = TIM15_SR_CC1IF_Values<TIM15::SR, 1, 1, ReadWriteMode, TIM15SRBase> ;
    using UIF = TIM15_SR_UIF_Values<TIM15::SR, 0, 1, ReadWriteMode, TIM15SRBase> ;
    using FieldValues = TIM15_SR_UIF_Values<TIM15::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40014010, 32, ReadWriteMode, TIM15SRBase, T...> ;

  struct TIM15EGRBase {} ;

  struct EGR : public RegisterBase<0x40014014, 32, WriteMode>
  {
    using BG = TIM15_EGR_BG_Values<TIM15::EGR, 7, 1, WriteMode, TIM15EGRBase> ;
    using TG = TIM15_EGR_TG_Values<TIM15::EGR, 6, 1, WriteMode, TIM15EGRBase> ;
    using COMG = TIM15_EGR_COMG_Values<TIM15::EGR, 5, 1, WriteMode, TIM15EGRBase> ;
    using CC2G = TIM15_EGR_CC2G_Values<TIM15::EGR, 2, 1, WriteMode, TIM15EGRBase> ;
    using CC1G = TIM15_EGR_CC1G_Values<TIM15::EGR, 1, 1, WriteMode, TIM15EGRBase> ;
    using UG = TIM15_EGR_UG_Values<TIM15::EGR, 0, 1, WriteMode, TIM15EGRBase> ;
    using FieldValues = TIM15_EGR_UG_Values<TIM15::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40014014, 32, WriteMode, TIM15EGRBase, T...> ;

  struct TIM15CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40014018, 32, ReadWriteMode>
  {
    using OC2M = TIM15_CCMR1_Output_OC2M_Values<TIM15::CCMR1_Output, 12, 3, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using OC2PE = TIM15_CCMR1_Output_OC2PE_Values<TIM15::CCMR1_Output, 11, 1, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using OC2FE = TIM15_CCMR1_Output_OC2FE_Values<TIM15::CCMR1_Output, 10, 1, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using CC2S = TIM15_CCMR1_Output_CC2S_Values<TIM15::CCMR1_Output, 8, 2, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using OC1M = TIM15_CCMR1_Output_OC1M_Values<TIM15::CCMR1_Output, 4, 3, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using OC1PE = TIM15_CCMR1_Output_OC1PE_Values<TIM15::CCMR1_Output, 3, 1, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using OC1FE = TIM15_CCMR1_Output_OC1FE_Values<TIM15::CCMR1_Output, 2, 1, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using CC1S = TIM15_CCMR1_Output_CC1S_Values<TIM15::CCMR1_Output, 0, 2, ReadWriteMode, TIM15CCMR1_OutputBase> ;
    using FieldValues = TIM15_CCMR1_Output_CC1S_Values<TIM15::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40014018, 32, ReadWriteMode, TIM15CCMR1_OutputBase, T...> ;

  struct TIM15CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40014018, 32, ReadWriteMode>
  {
    using IC2F = TIM15_CCMR1_Input_IC2F_Values<TIM15::CCMR1_Input, 12, 4, ReadWriteMode, TIM15CCMR1_InputBase> ;
    using IC2PSC = TIM15_CCMR1_Input_IC2PSC_Values<TIM15::CCMR1_Input, 10, 2, ReadWriteMode, TIM15CCMR1_InputBase> ;
    using CC2S = TIM15_CCMR1_Input_CC2S_Values<TIM15::CCMR1_Input, 8, 2, ReadWriteMode, TIM15CCMR1_InputBase> ;
    using IC1F = TIM15_CCMR1_Input_IC1F_Values<TIM15::CCMR1_Input, 4, 4, ReadWriteMode, TIM15CCMR1_InputBase> ;
    using IC1PSC = TIM15_CCMR1_Input_IC1PSC_Values<TIM15::CCMR1_Input, 2, 2, ReadWriteMode, TIM15CCMR1_InputBase> ;
    using CC1S = TIM15_CCMR1_Input_CC1S_Values<TIM15::CCMR1_Input, 0, 2, ReadWriteMode, TIM15CCMR1_InputBase> ;
    using FieldValues = TIM15_CCMR1_Input_CC1S_Values<TIM15::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40014018, 32, ReadWriteMode, TIM15CCMR1_InputBase, T...> ;

  struct TIM15CCERBase {} ;

  struct CCER : public RegisterBase<0x40014020, 32, ReadWriteMode>
  {
    using CC2NP = TIM15_CCER_CC2NP_Values<TIM15::CCER, 7, 1, ReadWriteMode, TIM15CCERBase> ;
    using CC2P = TIM15_CCER_CC2P_Values<TIM15::CCER, 5, 1, ReadWriteMode, TIM15CCERBase> ;
    using CC2E = TIM15_CCER_CC2E_Values<TIM15::CCER, 4, 1, ReadWriteMode, TIM15CCERBase> ;
    using CC1NP = TIM15_CCER_CC1NP_Values<TIM15::CCER, 3, 1, ReadWriteMode, TIM15CCERBase> ;
    using CC1NE = TIM15_CCER_CC1NE_Values<TIM15::CCER, 2, 1, ReadWriteMode, TIM15CCERBase> ;
    using CC1P = TIM15_CCER_CC1P_Values<TIM15::CCER, 1, 1, ReadWriteMode, TIM15CCERBase> ;
    using CC1E = TIM15_CCER_CC1E_Values<TIM15::CCER, 0, 1, ReadWriteMode, TIM15CCERBase> ;
    using FieldValues = TIM15_CCER_CC1E_Values<TIM15::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40014020, 32, ReadWriteMode, TIM15CCERBase, T...> ;

  struct TIM15CNTBase {} ;

  struct CNT : public RegisterBase<0x40014024, 32, ReadWriteMode>
  {
    using CNTField = TIM15_CNT_CNT_Values<TIM15::CNT, 0, 16, ReadWriteMode, TIM15CNTBase> ;
    using FieldValues = TIM15_CNT_CNT_Values<TIM15::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40014024, 32, ReadWriteMode, TIM15CNTBase, T...> ;

  struct TIM15PSCBase {} ;

  struct PSC : public RegisterBase<0x40014028, 32, ReadWriteMode>
  {
    using PSCField = TIM15_PSC_PSC_Values<TIM15::PSC, 0, 16, ReadWriteMode, TIM15PSCBase> ;
    using FieldValues = TIM15_PSC_PSC_Values<TIM15::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40014028, 32, ReadWriteMode, TIM15PSCBase, T...> ;

  struct TIM15ARRBase {} ;

  struct ARR : public RegisterBase<0x4001402C, 32, ReadWriteMode>
  {
    using ARRField = TIM15_ARR_ARR_Values<TIM15::ARR, 0, 16, ReadWriteMode, TIM15ARRBase> ;
    using FieldValues = TIM15_ARR_ARR_Values<TIM15::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001402C, 32, ReadWriteMode, TIM15ARRBase, T...> ;

  struct TIM15RCRBase {} ;

  struct RCR : public RegisterBase<0x40014030, 32, ReadWriteMode>
  {
    using REP = TIM15_RCR_REP_Values<TIM15::RCR, 0, 8, ReadWriteMode, TIM15RCRBase> ;
    using FieldValues = TIM15_RCR_REP_Values<TIM15::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40014030, 32, ReadWriteMode, TIM15RCRBase, T...> ;

  struct TIM15CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40014034, 32, ReadWriteMode>
  {
    using CCR1Field = TIM15_CCR1_CCR1_Values<TIM15::CCR1, 0, 16, ReadWriteMode, TIM15CCR1Base> ;
    using FieldValues = TIM15_CCR1_CCR1_Values<TIM15::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40014034, 32, ReadWriteMode, TIM15CCR1Base, T...> ;

  struct TIM15CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40014038, 32, ReadWriteMode>
  {
    using CCR2Field = TIM15_CCR2_CCR2_Values<TIM15::CCR2, 0, 16, ReadWriteMode, TIM15CCR2Base> ;
    using FieldValues = TIM15_CCR2_CCR2_Values<TIM15::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40014038, 32, ReadWriteMode, TIM15CCR2Base, T...> ;

  struct TIM15BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40014044, 32, ReadWriteMode>
  {
    using MOE = TIM15_BDTR_MOE_Values<TIM15::BDTR, 15, 1, ReadWriteMode, TIM15BDTRBase> ;
    using AOE = TIM15_BDTR_AOE_Values<TIM15::BDTR, 14, 1, ReadWriteMode, TIM15BDTRBase> ;
    using BKP = TIM15_BDTR_BKP_Values<TIM15::BDTR, 13, 1, ReadWriteMode, TIM15BDTRBase> ;
    using BKE = TIM15_BDTR_BKE_Values<TIM15::BDTR, 12, 1, ReadWriteMode, TIM15BDTRBase> ;
    using OSSR = TIM15_BDTR_OSSR_Values<TIM15::BDTR, 11, 1, ReadWriteMode, TIM15BDTRBase> ;
    using OSSI = TIM15_BDTR_OSSI_Values<TIM15::BDTR, 10, 1, ReadWriteMode, TIM15BDTRBase> ;
    using LOCK = TIM15_BDTR_LOCK_Values<TIM15::BDTR, 8, 2, ReadWriteMode, TIM15BDTRBase> ;
    using DTG = TIM15_BDTR_DTG_Values<TIM15::BDTR, 0, 8, ReadWriteMode, TIM15BDTRBase> ;
    using FieldValues = TIM15_BDTR_DTG_Values<TIM15::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40014044, 32, ReadWriteMode, TIM15BDTRBase, T...> ;

  struct TIM15DCRBase {} ;

  struct DCR : public RegisterBase<0x40014048, 32, ReadWriteMode>
  {
    using DBL = TIM15_DCR_DBL_Values<TIM15::DCR, 8, 5, ReadWriteMode, TIM15DCRBase> ;
    using DBA = TIM15_DCR_DBA_Values<TIM15::DCR, 0, 5, ReadWriteMode, TIM15DCRBase> ;
    using FieldValues = TIM15_DCR_DBA_Values<TIM15::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40014048, 32, ReadWriteMode, TIM15DCRBase, T...> ;

  struct TIM15DMARBase {} ;

  struct DMAR : public RegisterBase<0x4001404C, 32, ReadWriteMode>
  {
    using DMAB = TIM15_DMAR_DMAB_Values<TIM15::DMAR, 0, 16, ReadWriteMode, TIM15DMARBase> ;
    using FieldValues = TIM15_DMAR_DMAB_Values<TIM15::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4001404C, 32, ReadWriteMode, TIM15DMARBase, T...> ;

} ;

#endif //#if !defined(TIM15REGISTERS_HPP)
