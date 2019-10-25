/*******************************************************************************
* Filename      : tim3registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM3REGISTERS_HPP)
#define TIM3REGISTERS_HPP

#include "tim3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM3
{
  struct TIM3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000400, 32, ReadWriteMode>
  {
    using CKD = TIM3_CR1_CKD_Values<TIM3::CR1, 8, 2, ReadWriteMode, TIM3CR1Base> ;
    using ARPE = TIM3_CR1_ARPE_Values<TIM3::CR1, 7, 1, ReadWriteMode, TIM3CR1Base> ;
    using CMS = TIM3_CR1_CMS_Values<TIM3::CR1, 5, 2, ReadWriteMode, TIM3CR1Base> ;
    using DIR = TIM3_CR1_DIR_Values<TIM3::CR1, 4, 1, ReadWriteMode, TIM3CR1Base> ;
    using OPM = TIM3_CR1_OPM_Values<TIM3::CR1, 3, 1, ReadWriteMode, TIM3CR1Base> ;
    using URS = TIM3_CR1_URS_Values<TIM3::CR1, 2, 1, ReadWriteMode, TIM3CR1Base> ;
    using UDIS = TIM3_CR1_UDIS_Values<TIM3::CR1, 1, 1, ReadWriteMode, TIM3CR1Base> ;
    using CEN = TIM3_CR1_CEN_Values<TIM3::CR1, 0, 1, ReadWriteMode, TIM3CR1Base> ;
    using FieldValues = TIM3_CR1_CEN_Values<TIM3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000400, 32, ReadWriteMode, TIM3CR1Base, T...> ;

  struct TIM3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000404, 32, ReadWriteMode>
  {
    using TI1S = TIM3_CR2_TI1S_Values<TIM3::CR2, 7, 1, ReadWriteMode, TIM3CR2Base> ;
    using MMS = TIM3_CR2_MMS_Values<TIM3::CR2, 4, 3, ReadWriteMode, TIM3CR2Base> ;
    using CCDS = TIM3_CR2_CCDS_Values<TIM3::CR2, 3, 1, ReadWriteMode, TIM3CR2Base> ;
    using FieldValues = TIM3_CR2_CCDS_Values<TIM3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000404, 32, ReadWriteMode, TIM3CR2Base, T...> ;

  struct TIM3SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000408, 32, ReadWriteMode>
  {
    using ETP = TIM3_SMCR_ETP_Values<TIM3::SMCR, 15, 1, ReadWriteMode, TIM3SMCRBase> ;
    using ECE = TIM3_SMCR_ECE_Values<TIM3::SMCR, 14, 1, ReadWriteMode, TIM3SMCRBase> ;
    using ETPS = TIM3_SMCR_ETPS_Values<TIM3::SMCR, 12, 2, ReadWriteMode, TIM3SMCRBase> ;
    using ETF = TIM3_SMCR_ETF_Values<TIM3::SMCR, 8, 4, ReadWriteMode, TIM3SMCRBase> ;
    using MSM = TIM3_SMCR_MSM_Values<TIM3::SMCR, 7, 1, ReadWriteMode, TIM3SMCRBase> ;
    using TS = TIM3_SMCR_TS_Values<TIM3::SMCR, 4, 3, ReadWriteMode, TIM3SMCRBase> ;
    using SMS = TIM3_SMCR_SMS_Values<TIM3::SMCR, 0, 3, ReadWriteMode, TIM3SMCRBase> ;
    using FieldValues = TIM3_SMCR_SMS_Values<TIM3::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000408, 32, ReadWriteMode, TIM3SMCRBase, T...> ;

  struct TIM3DIERBase {} ;

  struct DIER : public RegisterBase<0x4000040C, 32, ReadWriteMode>
  {
    using TDE = TIM3_DIER_TDE_Values<TIM3::DIER, 14, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC4DE = TIM3_DIER_CC4DE_Values<TIM3::DIER, 12, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC3DE = TIM3_DIER_CC3DE_Values<TIM3::DIER, 11, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC2DE = TIM3_DIER_CC2DE_Values<TIM3::DIER, 10, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC1DE = TIM3_DIER_CC1DE_Values<TIM3::DIER, 9, 1, ReadWriteMode, TIM3DIERBase> ;
    using UDE = TIM3_DIER_UDE_Values<TIM3::DIER, 8, 1, ReadWriteMode, TIM3DIERBase> ;
    using TIE = TIM3_DIER_TIE_Values<TIM3::DIER, 6, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC4IE = TIM3_DIER_CC4IE_Values<TIM3::DIER, 4, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC3IE = TIM3_DIER_CC3IE_Values<TIM3::DIER, 3, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC2IE = TIM3_DIER_CC2IE_Values<TIM3::DIER, 2, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC1IE = TIM3_DIER_CC1IE_Values<TIM3::DIER, 1, 1, ReadWriteMode, TIM3DIERBase> ;
    using UIE = TIM3_DIER_UIE_Values<TIM3::DIER, 0, 1, ReadWriteMode, TIM3DIERBase> ;
    using FieldValues = TIM3_DIER_UIE_Values<TIM3::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000040C, 32, ReadWriteMode, TIM3DIERBase, T...> ;

  struct TIM3SRBase {} ;

  struct SR : public RegisterBase<0x40000410, 32, ReadWriteMode>
  {
    using CC4OF = TIM3_SR_CC4OF_Values<TIM3::SR, 12, 1, ReadWriteMode, TIM3SRBase> ;
    using CC3OF = TIM3_SR_CC3OF_Values<TIM3::SR, 11, 1, ReadWriteMode, TIM3SRBase> ;
    using CC2OF = TIM3_SR_CC2OF_Values<TIM3::SR, 10, 1, ReadWriteMode, TIM3SRBase> ;
    using CC1OF = TIM3_SR_CC1OF_Values<TIM3::SR, 9, 1, ReadWriteMode, TIM3SRBase> ;
    using TIF = TIM3_SR_TIF_Values<TIM3::SR, 6, 1, ReadWriteMode, TIM3SRBase> ;
    using CC4IF = TIM3_SR_CC4IF_Values<TIM3::SR, 4, 1, ReadWriteMode, TIM3SRBase> ;
    using CC3IF = TIM3_SR_CC3IF_Values<TIM3::SR, 3, 1, ReadWriteMode, TIM3SRBase> ;
    using CC2IF = TIM3_SR_CC2IF_Values<TIM3::SR, 2, 1, ReadWriteMode, TIM3SRBase> ;
    using CC1IF = TIM3_SR_CC1IF_Values<TIM3::SR, 1, 1, ReadWriteMode, TIM3SRBase> ;
    using UIF = TIM3_SR_UIF_Values<TIM3::SR, 0, 1, ReadWriteMode, TIM3SRBase> ;
    using FieldValues = TIM3_SR_UIF_Values<TIM3::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000410, 32, ReadWriteMode, TIM3SRBase, T...> ;

  struct TIM3EGRBase {} ;

  struct EGR : public RegisterBase<0x40000414, 32, WriteMode>
  {
    using TG = TIM3_EGR_TG_Values<TIM3::EGR, 6, 1, WriteMode, TIM3EGRBase> ;
    using CC4G = TIM3_EGR_CC4G_Values<TIM3::EGR, 4, 1, WriteMode, TIM3EGRBase> ;
    using CC3G = TIM3_EGR_CC3G_Values<TIM3::EGR, 3, 1, WriteMode, TIM3EGRBase> ;
    using CC2G = TIM3_EGR_CC2G_Values<TIM3::EGR, 2, 1, WriteMode, TIM3EGRBase> ;
    using CC1G = TIM3_EGR_CC1G_Values<TIM3::EGR, 1, 1, WriteMode, TIM3EGRBase> ;
    using UG = TIM3_EGR_UG_Values<TIM3::EGR, 0, 1, WriteMode, TIM3EGRBase> ;
    using FieldValues = TIM3_EGR_UG_Values<TIM3::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000414, 32, WriteMode, TIM3EGRBase, T...> ;

  struct TIM3CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000418, 32, ReadWriteMode>
  {
    using OC2CE = TIM3_CCMR1_Output_OC2CE_Values<TIM3::CCMR1_Output, 15, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC2M = TIM3_CCMR1_Output_OC2M_Values<TIM3::CCMR1_Output, 12, 3, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC2PE = TIM3_CCMR1_Output_OC2PE_Values<TIM3::CCMR1_Output, 11, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC2FE = TIM3_CCMR1_Output_OC2FE_Values<TIM3::CCMR1_Output, 10, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using CC2S = TIM3_CCMR1_Output_CC2S_Values<TIM3::CCMR1_Output, 8, 2, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1CE = TIM3_CCMR1_Output_OC1CE_Values<TIM3::CCMR1_Output, 7, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1M = TIM3_CCMR1_Output_OC1M_Values<TIM3::CCMR1_Output, 4, 3, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1PE = TIM3_CCMR1_Output_OC1PE_Values<TIM3::CCMR1_Output, 3, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1FE = TIM3_CCMR1_Output_OC1FE_Values<TIM3::CCMR1_Output, 2, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using CC1S = TIM3_CCMR1_Output_CC1S_Values<TIM3::CCMR1_Output, 0, 2, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using FieldValues = TIM3_CCMR1_Output_CC1S_Values<TIM3::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000418, 32, ReadWriteMode, TIM3CCMR1_OutputBase, T...> ;

  struct TIM3CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000418, 32, ReadWriteMode>
  {
    using IC2F = TIM3_CCMR1_Input_IC2F_Values<TIM3::CCMR1_Input, 12, 4, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using IC2PCS = TIM3_CCMR1_Input_IC2PCS_Values<TIM3::CCMR1_Input, 10, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using CC2S = TIM3_CCMR1_Input_CC2S_Values<TIM3::CCMR1_Input, 8, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using IC1F = TIM3_CCMR1_Input_IC1F_Values<TIM3::CCMR1_Input, 4, 4, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using ICPCS = TIM3_CCMR1_Input_ICPCS_Values<TIM3::CCMR1_Input, 2, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using CC1S = TIM3_CCMR1_Input_CC1S_Values<TIM3::CCMR1_Input, 0, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using FieldValues = TIM3_CCMR1_Input_CC1S_Values<TIM3::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000418, 32, ReadWriteMode, TIM3CCMR1_InputBase, T...> ;

  struct TIM3CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000041C, 32, ReadWriteMode>
  {
    using O24CE = TIM3_CCMR2_Output_O24CE_Values<TIM3::CCMR2_Output, 15, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC4M = TIM3_CCMR2_Output_OC4M_Values<TIM3::CCMR2_Output, 12, 3, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC4PE = TIM3_CCMR2_Output_OC4PE_Values<TIM3::CCMR2_Output, 11, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC4FE = TIM3_CCMR2_Output_OC4FE_Values<TIM3::CCMR2_Output, 10, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using CC4S = TIM3_CCMR2_Output_CC4S_Values<TIM3::CCMR2_Output, 8, 2, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3CE = TIM3_CCMR2_Output_OC3CE_Values<TIM3::CCMR2_Output, 7, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3M = TIM3_CCMR2_Output_OC3M_Values<TIM3::CCMR2_Output, 4, 3, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3PE = TIM3_CCMR2_Output_OC3PE_Values<TIM3::CCMR2_Output, 3, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3FE = TIM3_CCMR2_Output_OC3FE_Values<TIM3::CCMR2_Output, 2, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using CC3S = TIM3_CCMR2_Output_CC3S_Values<TIM3::CCMR2_Output, 0, 2, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using FieldValues = TIM3_CCMR2_Output_CC3S_Values<TIM3::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000041C, 32, ReadWriteMode, TIM3CCMR2_OutputBase, T...> ;

  struct TIM3CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000041C, 32, ReadWriteMode>
  {
    using IC4F = TIM3_CCMR2_Input_IC4F_Values<TIM3::CCMR2_Input, 12, 4, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using IC4PSC = TIM3_CCMR2_Input_IC4PSC_Values<TIM3::CCMR2_Input, 10, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using CC4S = TIM3_CCMR2_Input_CC4S_Values<TIM3::CCMR2_Input, 8, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using IC3F = TIM3_CCMR2_Input_IC3F_Values<TIM3::CCMR2_Input, 4, 4, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using IC3PSC = TIM3_CCMR2_Input_IC3PSC_Values<TIM3::CCMR2_Input, 2, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using CC3S = TIM3_CCMR2_Input_CC3S_Values<TIM3::CCMR2_Input, 0, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using FieldValues = TIM3_CCMR2_Input_CC3S_Values<TIM3::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000041C, 32, ReadWriteMode, TIM3CCMR2_InputBase, T...> ;

  struct TIM3CCERBase {} ;

  struct CCER : public RegisterBase<0x40000420, 32, ReadWriteMode>
  {
    using CC4NP = TIM3_CCER_CC4NP_Values<TIM3::CCER, 15, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC4P = TIM3_CCER_CC4P_Values<TIM3::CCER, 13, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC4E = TIM3_CCER_CC4E_Values<TIM3::CCER, 12, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC3NP = TIM3_CCER_CC3NP_Values<TIM3::CCER, 11, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC3P = TIM3_CCER_CC3P_Values<TIM3::CCER, 9, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC3E = TIM3_CCER_CC3E_Values<TIM3::CCER, 8, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC2NP = TIM3_CCER_CC2NP_Values<TIM3::CCER, 7, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC2P = TIM3_CCER_CC2P_Values<TIM3::CCER, 5, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC2E = TIM3_CCER_CC2E_Values<TIM3::CCER, 4, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC1NP = TIM3_CCER_CC1NP_Values<TIM3::CCER, 3, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC1P = TIM3_CCER_CC1P_Values<TIM3::CCER, 1, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC1E = TIM3_CCER_CC1E_Values<TIM3::CCER, 0, 1, ReadWriteMode, TIM3CCERBase> ;
    using FieldValues = TIM3_CCER_CC1E_Values<TIM3::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000420, 32, ReadWriteMode, TIM3CCERBase, T...> ;

  struct TIM3CNTBase {} ;

  struct CNT : public RegisterBase<0x40000424, 32, ReadWriteMode>
  {
    using CNT_H = TIM3_CNT_CNT_H_Values<TIM3::CNT, 16, 16, ReadWriteMode, TIM3CNTBase> ;
    using CNT_L = TIM3_CNT_CNT_L_Values<TIM3::CNT, 0, 16, ReadWriteMode, TIM3CNTBase> ;
    using FieldValues = TIM3_CNT_CNT_L_Values<TIM3::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000424, 32, ReadWriteMode, TIM3CNTBase, T...> ;

  struct TIM3PSCBase {} ;

  struct PSC : public RegisterBase<0x40000428, 32, ReadWriteMode>
  {
    using PSCField = TIM3_PSC_PSC_Values<TIM3::PSC, 0, 16, ReadWriteMode, TIM3PSCBase> ;
    using FieldValues = TIM3_PSC_PSC_Values<TIM3::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000428, 32, ReadWriteMode, TIM3PSCBase, T...> ;

  struct TIM3ARRBase {} ;

  struct ARR : public RegisterBase<0x4000042C, 32, ReadWriteMode>
  {
    using ARR_H = TIM3_ARR_ARR_H_Values<TIM3::ARR, 16, 16, ReadWriteMode, TIM3ARRBase> ;
    using ARR_L = TIM3_ARR_ARR_L_Values<TIM3::ARR, 0, 16, ReadWriteMode, TIM3ARRBase> ;
    using FieldValues = TIM3_ARR_ARR_L_Values<TIM3::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000042C, 32, ReadWriteMode, TIM3ARRBase, T...> ;

  struct TIM3CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000434, 32, ReadWriteMode>
  {
    using CCR1_H = TIM3_CCR1_CCR1_H_Values<TIM3::CCR1, 16, 16, ReadWriteMode, TIM3CCR1Base> ;
    using CCR1_L = TIM3_CCR1_CCR1_L_Values<TIM3::CCR1, 0, 16, ReadWriteMode, TIM3CCR1Base> ;
    using FieldValues = TIM3_CCR1_CCR1_L_Values<TIM3::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000434, 32, ReadWriteMode, TIM3CCR1Base, T...> ;

  struct TIM3CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000438, 32, ReadWriteMode>
  {
    using CCR2_H = TIM3_CCR2_CCR2_H_Values<TIM3::CCR2, 16, 16, ReadWriteMode, TIM3CCR2Base> ;
    using CCR2_L = TIM3_CCR2_CCR2_L_Values<TIM3::CCR2, 0, 16, ReadWriteMode, TIM3CCR2Base> ;
    using FieldValues = TIM3_CCR2_CCR2_L_Values<TIM3::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000438, 32, ReadWriteMode, TIM3CCR2Base, T...> ;

  struct TIM3CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000043C, 32, ReadWriteMode>
  {
    using CCR3_H = TIM3_CCR3_CCR3_H_Values<TIM3::CCR3, 16, 16, ReadWriteMode, TIM3CCR3Base> ;
    using CCR3_L = TIM3_CCR3_CCR3_L_Values<TIM3::CCR3, 0, 16, ReadWriteMode, TIM3CCR3Base> ;
    using FieldValues = TIM3_CCR3_CCR3_L_Values<TIM3::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000043C, 32, ReadWriteMode, TIM3CCR3Base, T...> ;

  struct TIM3CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000440, 32, ReadWriteMode>
  {
    using CCR4_H = TIM3_CCR4_CCR4_H_Values<TIM3::CCR4, 16, 16, ReadWriteMode, TIM3CCR4Base> ;
    using CCR4_L = TIM3_CCR4_CCR4_L_Values<TIM3::CCR4, 0, 16, ReadWriteMode, TIM3CCR4Base> ;
    using FieldValues = TIM3_CCR4_CCR4_L_Values<TIM3::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000440, 32, ReadWriteMode, TIM3CCR4Base, T...> ;

  struct TIM3DCRBase {} ;

  struct DCR : public RegisterBase<0x40000448, 32, ReadWriteMode>
  {
    using DBL = TIM3_DCR_DBL_Values<TIM3::DCR, 8, 5, ReadWriteMode, TIM3DCRBase> ;
    using DBA = TIM3_DCR_DBA_Values<TIM3::DCR, 0, 5, ReadWriteMode, TIM3DCRBase> ;
    using FieldValues = TIM3_DCR_DBA_Values<TIM3::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40000448, 32, ReadWriteMode, TIM3DCRBase, T...> ;

  struct TIM3DMARBase {} ;

  struct DMAR : public RegisterBase<0x4000044C, 32, ReadWriteMode>
  {
    using DMAB = TIM3_DMAR_DMAB_Values<TIM3::DMAR, 0, 16, ReadWriteMode, TIM3DMARBase> ;
    using FieldValues = TIM3_DMAR_DMAB_Values<TIM3::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4000044C, 32, ReadWriteMode, TIM3DMARBase, T...> ;

} ;

#endif //#if !defined(TIM3REGISTERS_HPP)
