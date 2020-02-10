/*******************************************************************************
* Filename      : tim20registers.hpp
*
* Details       : Advanced timer. This header file is auto-generated for
*                 STM32F303 device.
*
*
*******************************************************************************/

#if !defined(TIM20REGISTERS_HPP)
#define TIM20REGISTERS_HPP

#include "tim20fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM20
{
  struct TIM20CR1Base {} ;

  struct CR1 : public RegisterBase<0x40015000, 32, ReadWriteMode>
  {
    using CEN = TIM20_CR1_CEN_Values<TIM20::CR1, 0, 1, ReadWriteMode, TIM20CR1Base> ;
    using UDIS = TIM20_CR1_UDIS_Values<TIM20::CR1, 1, 1, ReadWriteMode, TIM20CR1Base> ;
    using URS = TIM20_CR1_URS_Values<TIM20::CR1, 2, 1, ReadWriteMode, TIM20CR1Base> ;
    using OPM = TIM20_CR1_OPM_Values<TIM20::CR1, 3, 1, ReadWriteMode, TIM20CR1Base> ;
    using DIR = TIM20_CR1_DIR_Values<TIM20::CR1, 4, 1, ReadWriteMode, TIM20CR1Base> ;
    using CMS = TIM20_CR1_CMS_Values<TIM20::CR1, 5, 2, ReadWriteMode, TIM20CR1Base> ;
    using ARPE = TIM20_CR1_ARPE_Values<TIM20::CR1, 7, 1, ReadWriteMode, TIM20CR1Base> ;
    using CKD = TIM20_CR1_CKD_Values<TIM20::CR1, 8, 2, ReadWriteMode, TIM20CR1Base> ;
    using UIFREMAP = TIM20_CR1_UIFREMAP_Values<TIM20::CR1, 11, 1, ReadWriteMode, TIM20CR1Base> ;
    using FieldValues = TIM20_CR1_UIFREMAP_Values<TIM20::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40015000, 32, ReadWriteMode, TIM20CR1Base, T...> ;

  struct TIM20CR2Base {} ;

  struct CR2 : public RegisterBase<0x40015004, 32, ReadWriteMode>
  {
    using CCPC = TIM20_CR2_CCPC_Values<TIM20::CR2, 0, 1, ReadWriteMode, TIM20CR2Base> ;
    using CCUS = TIM20_CR2_CCUS_Values<TIM20::CR2, 2, 1, ReadWriteMode, TIM20CR2Base> ;
    using CCDS = TIM20_CR2_CCDS_Values<TIM20::CR2, 3, 1, ReadWriteMode, TIM20CR2Base> ;
    using MMS = TIM20_CR2_MMS_Values<TIM20::CR2, 4, 3, ReadWriteMode, TIM20CR2Base> ;
    using TI1S = TIM20_CR2_TI1S_Values<TIM20::CR2, 7, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS1 = TIM20_CR2_OIS1_Values<TIM20::CR2, 8, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS1N = TIM20_CR2_OIS1N_Values<TIM20::CR2, 9, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS2 = TIM20_CR2_OIS2_Values<TIM20::CR2, 10, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS2N = TIM20_CR2_OIS2N_Values<TIM20::CR2, 11, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS3 = TIM20_CR2_OIS3_Values<TIM20::CR2, 12, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS3N = TIM20_CR2_OIS3N_Values<TIM20::CR2, 13, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS4 = TIM20_CR2_OIS4_Values<TIM20::CR2, 14, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS5 = TIM20_CR2_OIS5_Values<TIM20::CR2, 16, 1, ReadWriteMode, TIM20CR2Base> ;
    using OIS6 = TIM20_CR2_OIS6_Values<TIM20::CR2, 18, 1, ReadWriteMode, TIM20CR2Base> ;
    using MMS2 = TIM20_CR2_MMS2_Values<TIM20::CR2, 20, 4, ReadWriteMode, TIM20CR2Base> ;
    using FieldValues = TIM20_CR2_MMS2_Values<TIM20::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40015004, 32, ReadWriteMode, TIM20CR2Base, T...> ;

  struct TIM20SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40015008, 32, ReadWriteMode>
  {
    using SMS = TIM20_SMCR_SMS_Values<TIM20::SMCR, 0, 3, ReadWriteMode, TIM20SMCRBase> ;
    using OCCS = TIM20_SMCR_OCCS_Values<TIM20::SMCR, 3, 1, ReadWriteMode, TIM20SMCRBase> ;
    using TS = TIM20_SMCR_TS_Values<TIM20::SMCR, 4, 3, ReadWriteMode, TIM20SMCRBase> ;
    using MSM = TIM20_SMCR_MSM_Values<TIM20::SMCR, 7, 1, ReadWriteMode, TIM20SMCRBase> ;
    using ETF = TIM20_SMCR_ETF_Values<TIM20::SMCR, 8, 4, ReadWriteMode, TIM20SMCRBase> ;
    using ETPS = TIM20_SMCR_ETPS_Values<TIM20::SMCR, 12, 2, ReadWriteMode, TIM20SMCRBase> ;
    using ECE = TIM20_SMCR_ECE_Values<TIM20::SMCR, 14, 1, ReadWriteMode, TIM20SMCRBase> ;
    using ETP = TIM20_SMCR_ETP_Values<TIM20::SMCR, 15, 1, ReadWriteMode, TIM20SMCRBase> ;
    using SMS3 = TIM20_SMCR_SMS3_Values<TIM20::SMCR, 16, 1, ReadWriteMode, TIM20SMCRBase> ;
    using FieldValues = TIM20_SMCR_SMS3_Values<TIM20::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40015008, 32, ReadWriteMode, TIM20SMCRBase, T...> ;

  struct TIM20DIERBase {} ;

  struct DIER : public RegisterBase<0x4001500C, 32, ReadWriteMode>
  {
    using TDE = TIM20_DIER_TDE_Values<TIM20::DIER, 14, 1, ReadWriteMode, TIM20DIERBase> ;
    using COMDE = TIM20_DIER_COMDE_Values<TIM20::DIER, 13, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC4DE = TIM20_DIER_CC4DE_Values<TIM20::DIER, 12, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC3DE = TIM20_DIER_CC3DE_Values<TIM20::DIER, 11, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC2DE = TIM20_DIER_CC2DE_Values<TIM20::DIER, 10, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC1DE = TIM20_DIER_CC1DE_Values<TIM20::DIER, 9, 1, ReadWriteMode, TIM20DIERBase> ;
    using UDE = TIM20_DIER_UDE_Values<TIM20::DIER, 8, 1, ReadWriteMode, TIM20DIERBase> ;
    using BIE = TIM20_DIER_BIE_Values<TIM20::DIER, 7, 1, ReadWriteMode, TIM20DIERBase> ;
    using TIE = TIM20_DIER_TIE_Values<TIM20::DIER, 6, 1, ReadWriteMode, TIM20DIERBase> ;
    using COMIE = TIM20_DIER_COMIE_Values<TIM20::DIER, 5, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC4IE = TIM20_DIER_CC4IE_Values<TIM20::DIER, 4, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC3IE = TIM20_DIER_CC3IE_Values<TIM20::DIER, 3, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC2IE = TIM20_DIER_CC2IE_Values<TIM20::DIER, 2, 1, ReadWriteMode, TIM20DIERBase> ;
    using CC1IE = TIM20_DIER_CC1IE_Values<TIM20::DIER, 1, 1, ReadWriteMode, TIM20DIERBase> ;
    using UIE = TIM20_DIER_UIE_Values<TIM20::DIER, 0, 1, ReadWriteMode, TIM20DIERBase> ;
    using FieldValues = TIM20_DIER_UIE_Values<TIM20::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001500C, 32, ReadWriteMode, TIM20DIERBase, T...> ;

  struct TIM20SRBase {} ;

  struct SR : public RegisterBase<0x40015010, 32, ReadWriteMode>
  {
    using UIF = TIM20_SR_UIF_Values<TIM20::SR, 0, 1, ReadWriteMode, TIM20SRBase> ;
    using CC1IF = TIM20_SR_CC1IF_Values<TIM20::SR, 1, 1, ReadWriteMode, TIM20SRBase> ;
    using CC2IF = TIM20_SR_CC2IF_Values<TIM20::SR, 2, 1, ReadWriteMode, TIM20SRBase> ;
    using CC3IF = TIM20_SR_CC3IF_Values<TIM20::SR, 3, 1, ReadWriteMode, TIM20SRBase> ;
    using CC4IF = TIM20_SR_CC4IF_Values<TIM20::SR, 4, 1, ReadWriteMode, TIM20SRBase> ;
    using COMIF = TIM20_SR_COMIF_Values<TIM20::SR, 5, 1, ReadWriteMode, TIM20SRBase> ;
    using TIF = TIM20_SR_TIF_Values<TIM20::SR, 6, 1, ReadWriteMode, TIM20SRBase> ;
    using BIF = TIM20_SR_BIF_Values<TIM20::SR, 7, 1, ReadWriteMode, TIM20SRBase> ;
    using B2IF = TIM20_SR_B2IF_Values<TIM20::SR, 8, 1, ReadWriteMode, TIM20SRBase> ;
    using CC1OF = TIM20_SR_CC1OF_Values<TIM20::SR, 9, 1, ReadWriteMode, TIM20SRBase> ;
    using CC2OF = TIM20_SR_CC2OF_Values<TIM20::SR, 10, 1, ReadWriteMode, TIM20SRBase> ;
    using CC3OF = TIM20_SR_CC3OF_Values<TIM20::SR, 11, 1, ReadWriteMode, TIM20SRBase> ;
    using CC4OF = TIM20_SR_CC4OF_Values<TIM20::SR, 12, 1, ReadWriteMode, TIM20SRBase> ;
    using C5IF = TIM20_SR_C5IF_Values<TIM20::SR, 16, 1, ReadWriteMode, TIM20SRBase> ;
    using C6IF = TIM20_SR_C6IF_Values<TIM20::SR, 17, 1, ReadWriteMode, TIM20SRBase> ;
    using FieldValues = TIM20_SR_C6IF_Values<TIM20::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40015010, 32, ReadWriteMode, TIM20SRBase, T...> ;

  struct TIM20EGRBase {} ;

  struct EGR : public RegisterBase<0x40015014, 32, WriteMode>
  {
    using UG = TIM20_EGR_UG_Values<TIM20::EGR, 0, 1, WriteMode, TIM20EGRBase> ;
    using CC1G = TIM20_EGR_CC1G_Values<TIM20::EGR, 1, 1, WriteMode, TIM20EGRBase> ;
    using CC2G = TIM20_EGR_CC2G_Values<TIM20::EGR, 2, 1, WriteMode, TIM20EGRBase> ;
    using CC3G = TIM20_EGR_CC3G_Values<TIM20::EGR, 3, 1, WriteMode, TIM20EGRBase> ;
    using CC4G = TIM20_EGR_CC4G_Values<TIM20::EGR, 4, 1, WriteMode, TIM20EGRBase> ;
    using COMG = TIM20_EGR_COMG_Values<TIM20::EGR, 5, 1, WriteMode, TIM20EGRBase> ;
    using TG = TIM20_EGR_TG_Values<TIM20::EGR, 6, 1, WriteMode, TIM20EGRBase> ;
    using BG = TIM20_EGR_BG_Values<TIM20::EGR, 7, 1, WriteMode, TIM20EGRBase> ;
    using B2G = TIM20_EGR_B2G_Values<TIM20::EGR, 8, 1, WriteMode, TIM20EGRBase> ;
    using FieldValues = TIM20_EGR_B2G_Values<TIM20::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40015014, 32, WriteMode, TIM20EGRBase, T...> ;

  struct TIM20CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40015018, 32, ReadWriteMode>
  {
    using OC2CE = TIM20_CCMR1_Output_OC2CE_Values<TIM20::CCMR1_Output, 15, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC2M = TIM20_CCMR1_Output_OC2M_Values<TIM20::CCMR1_Output, 12, 3, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC2PE = TIM20_CCMR1_Output_OC2PE_Values<TIM20::CCMR1_Output, 11, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC2FE = TIM20_CCMR1_Output_OC2FE_Values<TIM20::CCMR1_Output, 10, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using CC2S = TIM20_CCMR1_Output_CC2S_Values<TIM20::CCMR1_Output, 8, 2, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC1CE = TIM20_CCMR1_Output_OC1CE_Values<TIM20::CCMR1_Output, 7, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC1M = TIM20_CCMR1_Output_OC1M_Values<TIM20::CCMR1_Output, 4, 3, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC1PE = TIM20_CCMR1_Output_OC1PE_Values<TIM20::CCMR1_Output, 3, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC1FE = TIM20_CCMR1_Output_OC1FE_Values<TIM20::CCMR1_Output, 2, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using CC1S = TIM20_CCMR1_Output_CC1S_Values<TIM20::CCMR1_Output, 0, 2, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC1M_3 = TIM20_CCMR1_Output_OC1M_3_Values<TIM20::CCMR1_Output, 16, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using OC2M_3 = TIM20_CCMR1_Output_OC2M_3_Values<TIM20::CCMR1_Output, 24, 1, ReadWriteMode, TIM20CCMR1_OutputBase> ;
    using FieldValues = TIM20_CCMR1_Output_OC2M_3_Values<TIM20::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40015018, 32, ReadWriteMode, TIM20CCMR1_OutputBase, T...> ;

  struct TIM20CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40015018, 32, ReadWriteMode>
  {
    using IC2F = TIM20_CCMR1_Input_IC2F_Values<TIM20::CCMR1_Input, 12, 4, ReadWriteMode, TIM20CCMR1_InputBase> ;
    using IC2PCS = TIM20_CCMR1_Input_IC2PCS_Values<TIM20::CCMR1_Input, 10, 2, ReadWriteMode, TIM20CCMR1_InputBase> ;
    using CC2S = TIM20_CCMR1_Input_CC2S_Values<TIM20::CCMR1_Input, 8, 2, ReadWriteMode, TIM20CCMR1_InputBase> ;
    using IC1F = TIM20_CCMR1_Input_IC1F_Values<TIM20::CCMR1_Input, 4, 4, ReadWriteMode, TIM20CCMR1_InputBase> ;
    using IC1PCS = TIM20_CCMR1_Input_IC1PCS_Values<TIM20::CCMR1_Input, 2, 2, ReadWriteMode, TIM20CCMR1_InputBase> ;
    using CC1S = TIM20_CCMR1_Input_CC1S_Values<TIM20::CCMR1_Input, 0, 2, ReadWriteMode, TIM20CCMR1_InputBase> ;
    using FieldValues = TIM20_CCMR1_Input_CC1S_Values<TIM20::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40015018, 32, ReadWriteMode, TIM20CCMR1_InputBase, T...> ;

  struct TIM20CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4001501C, 32, ReadWriteMode>
  {
    using OC4CE = TIM20_CCMR2_Output_OC4CE_Values<TIM20::CCMR2_Output, 15, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC4M = TIM20_CCMR2_Output_OC4M_Values<TIM20::CCMR2_Output, 12, 3, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC4PE = TIM20_CCMR2_Output_OC4PE_Values<TIM20::CCMR2_Output, 11, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC4FE = TIM20_CCMR2_Output_OC4FE_Values<TIM20::CCMR2_Output, 10, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using CC4S = TIM20_CCMR2_Output_CC4S_Values<TIM20::CCMR2_Output, 8, 2, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC3CE = TIM20_CCMR2_Output_OC3CE_Values<TIM20::CCMR2_Output, 7, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC3M = TIM20_CCMR2_Output_OC3M_Values<TIM20::CCMR2_Output, 4, 3, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC3PE = TIM20_CCMR2_Output_OC3PE_Values<TIM20::CCMR2_Output, 3, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC3FE = TIM20_CCMR2_Output_OC3FE_Values<TIM20::CCMR2_Output, 2, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using CC3S = TIM20_CCMR2_Output_CC3S_Values<TIM20::CCMR2_Output, 0, 2, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC3M_3 = TIM20_CCMR2_Output_OC3M_3_Values<TIM20::CCMR2_Output, 16, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using OC4M_3 = TIM20_CCMR2_Output_OC4M_3_Values<TIM20::CCMR2_Output, 24, 1, ReadWriteMode, TIM20CCMR2_OutputBase> ;
    using FieldValues = TIM20_CCMR2_Output_OC4M_3_Values<TIM20::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4001501C, 32, ReadWriteMode, TIM20CCMR2_OutputBase, T...> ;

  struct TIM20CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4001501C, 32, ReadWriteMode>
  {
    using IC4F = TIM20_CCMR2_Input_IC4F_Values<TIM20::CCMR2_Input, 12, 4, ReadWriteMode, TIM20CCMR2_InputBase> ;
    using IC4PSC = TIM20_CCMR2_Input_IC4PSC_Values<TIM20::CCMR2_Input, 10, 2, ReadWriteMode, TIM20CCMR2_InputBase> ;
    using CC4S = TIM20_CCMR2_Input_CC4S_Values<TIM20::CCMR2_Input, 8, 2, ReadWriteMode, TIM20CCMR2_InputBase> ;
    using IC3F = TIM20_CCMR2_Input_IC3F_Values<TIM20::CCMR2_Input, 4, 4, ReadWriteMode, TIM20CCMR2_InputBase> ;
    using IC3PSC = TIM20_CCMR2_Input_IC3PSC_Values<TIM20::CCMR2_Input, 2, 2, ReadWriteMode, TIM20CCMR2_InputBase> ;
    using CC3S = TIM20_CCMR2_Input_CC3S_Values<TIM20::CCMR2_Input, 0, 2, ReadWriteMode, TIM20CCMR2_InputBase> ;
    using FieldValues = TIM20_CCMR2_Input_CC3S_Values<TIM20::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4001501C, 32, ReadWriteMode, TIM20CCMR2_InputBase, T...> ;

  struct TIM20CCERBase {} ;

  struct CCER : public RegisterBase<0x40015020, 32, ReadWriteMode>
  {
    using CC1E = TIM20_CCER_CC1E_Values<TIM20::CCER, 0, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC1P = TIM20_CCER_CC1P_Values<TIM20::CCER, 1, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC1NE = TIM20_CCER_CC1NE_Values<TIM20::CCER, 2, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC1NP = TIM20_CCER_CC1NP_Values<TIM20::CCER, 3, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC2E = TIM20_CCER_CC2E_Values<TIM20::CCER, 4, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC2P = TIM20_CCER_CC2P_Values<TIM20::CCER, 5, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC2NE = TIM20_CCER_CC2NE_Values<TIM20::CCER, 6, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC2NP = TIM20_CCER_CC2NP_Values<TIM20::CCER, 7, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC3E = TIM20_CCER_CC3E_Values<TIM20::CCER, 8, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC3P = TIM20_CCER_CC3P_Values<TIM20::CCER, 9, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC3NE = TIM20_CCER_CC3NE_Values<TIM20::CCER, 10, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC3NP = TIM20_CCER_CC3NP_Values<TIM20::CCER, 11, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC4E = TIM20_CCER_CC4E_Values<TIM20::CCER, 12, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC4P = TIM20_CCER_CC4P_Values<TIM20::CCER, 13, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC4NP = TIM20_CCER_CC4NP_Values<TIM20::CCER, 15, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC5E = TIM20_CCER_CC5E_Values<TIM20::CCER, 16, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC5P = TIM20_CCER_CC5P_Values<TIM20::CCER, 17, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC6E = TIM20_CCER_CC6E_Values<TIM20::CCER, 20, 1, ReadWriteMode, TIM20CCERBase> ;
    using CC6P = TIM20_CCER_CC6P_Values<TIM20::CCER, 21, 1, ReadWriteMode, TIM20CCERBase> ;
    using FieldValues = TIM20_CCER_CC6P_Values<TIM20::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40015020, 32, ReadWriteMode, TIM20CCERBase, T...> ;

  struct TIM20CNTBase {} ;

  struct CNT : public RegisterBase<0x40015024, 32, ReadWriteMode>
  {
    using CNTField = TIM20_CNT_CNT_Values<TIM20::CNT, 0, 16, ReadWriteMode, TIM20CNTBase> ;
    using UIFCPY = TIM20_CNT_UIFCPY_Values<TIM20::CNT, 31, 1, ReadMode, TIM20CNTBase> ;
    using FieldValues = TIM20_CNT_UIFCPY_Values<TIM20::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40015024, 32, ReadWriteMode, TIM20CNTBase, T...> ;

  struct TIM20PSCBase {} ;

  struct PSC : public RegisterBase<0x40015028, 32, ReadWriteMode>
  {
    using PSCField = TIM20_PSC_PSC_Values<TIM20::PSC, 0, 16, ReadWriteMode, TIM20PSCBase> ;
    using FieldValues = TIM20_PSC_PSC_Values<TIM20::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40015028, 32, ReadWriteMode, TIM20PSCBase, T...> ;

  struct TIM20ARRBase {} ;

  struct ARR : public RegisterBase<0x4001502C, 32, ReadWriteMode>
  {
    using ARRField = TIM20_ARR_ARR_Values<TIM20::ARR, 0, 16, ReadWriteMode, TIM20ARRBase> ;
    using FieldValues = TIM20_ARR_ARR_Values<TIM20::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001502C, 32, ReadWriteMode, TIM20ARRBase, T...> ;

  struct TIM20RCRBase {} ;

  struct RCR : public RegisterBase<0x40015030, 32, ReadWriteMode>
  {
    using REP = TIM20_RCR_REP_Values<TIM20::RCR, 0, 16, ReadWriteMode, TIM20RCRBase> ;
    using FieldValues = TIM20_RCR_REP_Values<TIM20::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40015030, 32, ReadWriteMode, TIM20RCRBase, T...> ;

  struct TIM20CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40015034, 32, ReadWriteMode>
  {
    using CCR1Field = TIM20_CCR1_CCR1_Values<TIM20::CCR1, 0, 16, ReadWriteMode, TIM20CCR1Base> ;
    using FieldValues = TIM20_CCR1_CCR1_Values<TIM20::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40015034, 32, ReadWriteMode, TIM20CCR1Base, T...> ;

  struct TIM20CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40015038, 32, ReadWriteMode>
  {
    using CCR2Field = TIM20_CCR2_CCR2_Values<TIM20::CCR2, 0, 16, ReadWriteMode, TIM20CCR2Base> ;
    using FieldValues = TIM20_CCR2_CCR2_Values<TIM20::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40015038, 32, ReadWriteMode, TIM20CCR2Base, T...> ;

  struct TIM20CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4001503C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM20_CCR3_CCR3_Values<TIM20::CCR3, 0, 16, ReadWriteMode, TIM20CCR3Base> ;
    using FieldValues = TIM20_CCR3_CCR3_Values<TIM20::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4001503C, 32, ReadWriteMode, TIM20CCR3Base, T...> ;

  struct TIM20CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40015040, 32, ReadWriteMode>
  {
    using CCR4Field = TIM20_CCR4_CCR4_Values<TIM20::CCR4, 0, 16, ReadWriteMode, TIM20CCR4Base> ;
    using FieldValues = TIM20_CCR4_CCR4_Values<TIM20::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40015040, 32, ReadWriteMode, TIM20CCR4Base, T...> ;

  struct TIM20BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40015044, 32, ReadWriteMode>
  {
    using DTG = TIM20_BDTR_DTG_Values<TIM20::BDTR, 0, 8, ReadWriteMode, TIM20BDTRBase> ;
    using LOCK = TIM20_BDTR_LOCK_Values<TIM20::BDTR, 8, 2, ReadWriteMode, TIM20BDTRBase> ;
    using OSSI = TIM20_BDTR_OSSI_Values<TIM20::BDTR, 10, 1, ReadWriteMode, TIM20BDTRBase> ;
    using OSSR = TIM20_BDTR_OSSR_Values<TIM20::BDTR, 11, 1, ReadWriteMode, TIM20BDTRBase> ;
    using BKE = TIM20_BDTR_BKE_Values<TIM20::BDTR, 12, 1, ReadWriteMode, TIM20BDTRBase> ;
    using BKP = TIM20_BDTR_BKP_Values<TIM20::BDTR, 13, 1, ReadWriteMode, TIM20BDTRBase> ;
    using AOE = TIM20_BDTR_AOE_Values<TIM20::BDTR, 14, 1, ReadWriteMode, TIM20BDTRBase> ;
    using MOE = TIM20_BDTR_MOE_Values<TIM20::BDTR, 15, 1, ReadWriteMode, TIM20BDTRBase> ;
    using BKF = TIM20_BDTR_BKF_Values<TIM20::BDTR, 16, 4, ReadWriteMode, TIM20BDTRBase> ;
    using BK2F = TIM20_BDTR_BK2F_Values<TIM20::BDTR, 20, 4, ReadWriteMode, TIM20BDTRBase> ;
    using BK2E = TIM20_BDTR_BK2E_Values<TIM20::BDTR, 24, 1, ReadWriteMode, TIM20BDTRBase> ;
    using BK2P = TIM20_BDTR_BK2P_Values<TIM20::BDTR, 25, 1, ReadWriteMode, TIM20BDTRBase> ;
    using FieldValues = TIM20_BDTR_BK2P_Values<TIM20::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40015044, 32, ReadWriteMode, TIM20BDTRBase, T...> ;

  struct TIM20DCRBase {} ;

  struct DCR : public RegisterBase<0x40015048, 32, ReadWriteMode>
  {
    using DBL = TIM20_DCR_DBL_Values<TIM20::DCR, 8, 5, ReadWriteMode, TIM20DCRBase> ;
    using DBA = TIM20_DCR_DBA_Values<TIM20::DCR, 0, 5, ReadWriteMode, TIM20DCRBase> ;
    using FieldValues = TIM20_DCR_DBA_Values<TIM20::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40015048, 32, ReadWriteMode, TIM20DCRBase, T...> ;

  struct TIM20DMARBase {} ;

  struct DMAR : public RegisterBase<0x4001504C, 32, ReadWriteMode>
  {
    using DMAB = TIM20_DMAR_DMAB_Values<TIM20::DMAR, 0, 16, ReadWriteMode, TIM20DMARBase> ;
    using FieldValues = TIM20_DMAR_DMAB_Values<TIM20::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4001504C, 32, ReadWriteMode, TIM20DMARBase, T...> ;

  struct TIM20CCMR3_OutputBase {} ;

  struct CCMR3_Output : public RegisterBase<0x40015054, 32, ReadWriteMode>
  {
    using OC5FE = TIM20_CCMR3_Output_OC5FE_Values<TIM20::CCMR3_Output, 2, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC5PE = TIM20_CCMR3_Output_OC5PE_Values<TIM20::CCMR3_Output, 3, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC5M = TIM20_CCMR3_Output_OC5M_Values<TIM20::CCMR3_Output, 4, 3, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC5CE = TIM20_CCMR3_Output_OC5CE_Values<TIM20::CCMR3_Output, 7, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC6FE = TIM20_CCMR3_Output_OC6FE_Values<TIM20::CCMR3_Output, 10, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC6PE = TIM20_CCMR3_Output_OC6PE_Values<TIM20::CCMR3_Output, 11, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC6M = TIM20_CCMR3_Output_OC6M_Values<TIM20::CCMR3_Output, 12, 3, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC6CE = TIM20_CCMR3_Output_OC6CE_Values<TIM20::CCMR3_Output, 15, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC5M_3 = TIM20_CCMR3_Output_OC5M_3_Values<TIM20::CCMR3_Output, 16, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using OC6M_3 = TIM20_CCMR3_Output_OC6M_3_Values<TIM20::CCMR3_Output, 24, 1, ReadWriteMode, TIM20CCMR3_OutputBase> ;
    using FieldValues = TIM20_CCMR3_Output_OC6M_3_Values<TIM20::CCMR3_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR3_OutputPack  = Register<0x40015054, 32, ReadWriteMode, TIM20CCMR3_OutputBase, T...> ;

  struct TIM20CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40015058, 32, ReadWriteMode>
  {
    using CCR5Field = TIM20_CCR5_CCR5_Values<TIM20::CCR5, 0, 16, ReadWriteMode, TIM20CCR5Base> ;
    using GC5C1 = TIM20_CCR5_GC5C1_Values<TIM20::CCR5, 29, 1, ReadWriteMode, TIM20CCR5Base> ;
    using GC5C2 = TIM20_CCR5_GC5C2_Values<TIM20::CCR5, 30, 1, ReadWriteMode, TIM20CCR5Base> ;
    using GC5C3 = TIM20_CCR5_GC5C3_Values<TIM20::CCR5, 31, 1, ReadWriteMode, TIM20CCR5Base> ;
    using FieldValues = TIM20_CCR5_GC5C3_Values<TIM20::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40015058, 32, ReadWriteMode, TIM20CCR5Base, T...> ;

  struct TIM20CCR6Base {} ;

  struct CCR6 : public RegisterBase<0x4001505C, 32, ReadWriteMode>
  {
    using CCR6Field = TIM20_CCR6_CCR6_Values<TIM20::CCR6, 0, 16, ReadWriteMode, TIM20CCR6Base> ;
    using FieldValues = TIM20_CCR6_CCR6_Values<TIM20::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x4001505C, 32, ReadWriteMode, TIM20CCR6Base, T...> ;

  struct TIM20ORBase {} ;

  struct OR : public RegisterBase<0x40015060, 32, ReadWriteMode>
  {
    using TIM1_ETR_ADC1_RMP = TIM20_OR_TIM1_ETR_ADC1_RMP_Values<TIM20::OR, 0, 2, ReadWriteMode, TIM20ORBase> ;
    using TIM1_ETR_ADC4_RMP = TIM20_OR_TIM1_ETR_ADC4_RMP_Values<TIM20::OR, 2, 2, ReadWriteMode, TIM20ORBase> ;
    using FieldValues = TIM20_OR_TIM1_ETR_ADC4_RMP_Values<TIM20::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40015060, 32, ReadWriteMode, TIM20ORBase, T...> ;

} ;

#endif //#if !defined(TIM20REGISTERS_HPP)
