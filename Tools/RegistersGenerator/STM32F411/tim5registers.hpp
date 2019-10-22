/*******************************************************************************
* Filename      : tim5registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM5REGISTERS_HPP)
#define TIM5REGISTERS_HPP

#include "tim5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM5
{
  struct TIM5CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000C00, 32, ReadWriteMode>
  {
    using CKD = TIM5_CR1_CKD_Values<TIM5::CR1, 8, 2, ReadWriteMode, TIM5CR1Base> ;
    using ARPE = TIM5_CR1_ARPE_Values<TIM5::CR1, 7, 1, ReadWriteMode, TIM5CR1Base> ;
    using CMS = TIM5_CR1_CMS_Values<TIM5::CR1, 5, 2, ReadWriteMode, TIM5CR1Base> ;
    using DIR = TIM5_CR1_DIR_Values<TIM5::CR1, 4, 1, ReadWriteMode, TIM5CR1Base> ;
    using OPM = TIM5_CR1_OPM_Values<TIM5::CR1, 3, 1, ReadWriteMode, TIM5CR1Base> ;
    using URS = TIM5_CR1_URS_Values<TIM5::CR1, 2, 1, ReadWriteMode, TIM5CR1Base> ;
    using UDIS = TIM5_CR1_UDIS_Values<TIM5::CR1, 1, 1, ReadWriteMode, TIM5CR1Base> ;
    using CEN = TIM5_CR1_CEN_Values<TIM5::CR1, 0, 1, ReadWriteMode, TIM5CR1Base> ;
    using FieldValues = TIM5_CR1_CEN_Values<TIM5::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000C00, 32, ReadWriteMode, TIM5CR1Base, T...> ;

  struct TIM5CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000C04, 32, ReadWriteMode>
  {
    using TI1S = TIM5_CR2_TI1S_Values<TIM5::CR2, 7, 1, ReadWriteMode, TIM5CR2Base> ;
    using MMS = TIM5_CR2_MMS_Values<TIM5::CR2, 4, 3, ReadWriteMode, TIM5CR2Base> ;
    using CCDS = TIM5_CR2_CCDS_Values<TIM5::CR2, 3, 1, ReadWriteMode, TIM5CR2Base> ;
    using FieldValues = TIM5_CR2_CCDS_Values<TIM5::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000C04, 32, ReadWriteMode, TIM5CR2Base, T...> ;

  struct TIM5SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000C08, 32, ReadWriteMode>
  {
    using ETP = TIM5_SMCR_ETP_Values<TIM5::SMCR, 15, 1, ReadWriteMode, TIM5SMCRBase> ;
    using ECE = TIM5_SMCR_ECE_Values<TIM5::SMCR, 14, 1, ReadWriteMode, TIM5SMCRBase> ;
    using ETPS = TIM5_SMCR_ETPS_Values<TIM5::SMCR, 12, 2, ReadWriteMode, TIM5SMCRBase> ;
    using ETF = TIM5_SMCR_ETF_Values<TIM5::SMCR, 8, 4, ReadWriteMode, TIM5SMCRBase> ;
    using MSM = TIM5_SMCR_MSM_Values<TIM5::SMCR, 7, 1, ReadWriteMode, TIM5SMCRBase> ;
    using TS = TIM5_SMCR_TS_Values<TIM5::SMCR, 4, 3, ReadWriteMode, TIM5SMCRBase> ;
    using SMS = TIM5_SMCR_SMS_Values<TIM5::SMCR, 0, 3, ReadWriteMode, TIM5SMCRBase> ;
    using FieldValues = TIM5_SMCR_SMS_Values<TIM5::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000C08, 32, ReadWriteMode, TIM5SMCRBase, T...> ;

  struct TIM5DIERBase {} ;

  struct DIER : public RegisterBase<0x40000C0C, 32, ReadWriteMode>
  {
    using TDE = TIM5_DIER_TDE_Values<TIM5::DIER, 14, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC4DE = TIM5_DIER_CC4DE_Values<TIM5::DIER, 12, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC3DE = TIM5_DIER_CC3DE_Values<TIM5::DIER, 11, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC2DE = TIM5_DIER_CC2DE_Values<TIM5::DIER, 10, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC1DE = TIM5_DIER_CC1DE_Values<TIM5::DIER, 9, 1, ReadWriteMode, TIM5DIERBase> ;
    using UDE = TIM5_DIER_UDE_Values<TIM5::DIER, 8, 1, ReadWriteMode, TIM5DIERBase> ;
    using TIE = TIM5_DIER_TIE_Values<TIM5::DIER, 6, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC4IE = TIM5_DIER_CC4IE_Values<TIM5::DIER, 4, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC3IE = TIM5_DIER_CC3IE_Values<TIM5::DIER, 3, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC2IE = TIM5_DIER_CC2IE_Values<TIM5::DIER, 2, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC1IE = TIM5_DIER_CC1IE_Values<TIM5::DIER, 1, 1, ReadWriteMode, TIM5DIERBase> ;
    using UIE = TIM5_DIER_UIE_Values<TIM5::DIER, 0, 1, ReadWriteMode, TIM5DIERBase> ;
    using FieldValues = TIM5_DIER_UIE_Values<TIM5::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x40000C0C, 32, ReadWriteMode, TIM5DIERBase, T...> ;

  struct TIM5SRBase {} ;

  struct SR : public RegisterBase<0x40000C10, 32, ReadWriteMode>
  {
    using CC4OF = TIM5_SR_CC4OF_Values<TIM5::SR, 12, 1, ReadWriteMode, TIM5SRBase> ;
    using CC3OF = TIM5_SR_CC3OF_Values<TIM5::SR, 11, 1, ReadWriteMode, TIM5SRBase> ;
    using CC2OF = TIM5_SR_CC2OF_Values<TIM5::SR, 10, 1, ReadWriteMode, TIM5SRBase> ;
    using CC1OF = TIM5_SR_CC1OF_Values<TIM5::SR, 9, 1, ReadWriteMode, TIM5SRBase> ;
    using TIF = TIM5_SR_TIF_Values<TIM5::SR, 6, 1, ReadWriteMode, TIM5SRBase> ;
    using CC4IF = TIM5_SR_CC4IF_Values<TIM5::SR, 4, 1, ReadWriteMode, TIM5SRBase> ;
    using CC3IF = TIM5_SR_CC3IF_Values<TIM5::SR, 3, 1, ReadWriteMode, TIM5SRBase> ;
    using CC2IF = TIM5_SR_CC2IF_Values<TIM5::SR, 2, 1, ReadWriteMode, TIM5SRBase> ;
    using CC1IF = TIM5_SR_CC1IF_Values<TIM5::SR, 1, 1, ReadWriteMode, TIM5SRBase> ;
    using UIF = TIM5_SR_UIF_Values<TIM5::SR, 0, 1, ReadWriteMode, TIM5SRBase> ;
    using FieldValues = TIM5_SR_UIF_Values<TIM5::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000C10, 32, ReadWriteMode, TIM5SRBase, T...> ;

  struct TIM5EGRBase {} ;

  struct EGR : public RegisterBase<0x40000C14, 32, WriteMode>
  {
    using TG = TIM5_EGR_TG_Values<TIM5::EGR, 6, 1, WriteMode, TIM5EGRBase> ;
    using CC4G = TIM5_EGR_CC4G_Values<TIM5::EGR, 4, 1, WriteMode, TIM5EGRBase> ;
    using CC3G = TIM5_EGR_CC3G_Values<TIM5::EGR, 3, 1, WriteMode, TIM5EGRBase> ;
    using CC2G = TIM5_EGR_CC2G_Values<TIM5::EGR, 2, 1, WriteMode, TIM5EGRBase> ;
    using CC1G = TIM5_EGR_CC1G_Values<TIM5::EGR, 1, 1, WriteMode, TIM5EGRBase> ;
    using UG = TIM5_EGR_UG_Values<TIM5::EGR, 0, 1, WriteMode, TIM5EGRBase> ;
    using FieldValues = TIM5_EGR_UG_Values<TIM5::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000C14, 32, WriteMode, TIM5EGRBase, T...> ;

  struct TIM5CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000C18, 32, ReadWriteMode>
  {
    using OC2CE = TIM5_CCMR1_Output_OC2CE_Values<TIM5::CCMR1_Output, 15, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC2M = TIM5_CCMR1_Output_OC2M_Values<TIM5::CCMR1_Output, 12, 3, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC2PE = TIM5_CCMR1_Output_OC2PE_Values<TIM5::CCMR1_Output, 11, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC2FE = TIM5_CCMR1_Output_OC2FE_Values<TIM5::CCMR1_Output, 10, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using CC2S = TIM5_CCMR1_Output_CC2S_Values<TIM5::CCMR1_Output, 8, 2, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1CE = TIM5_CCMR1_Output_OC1CE_Values<TIM5::CCMR1_Output, 7, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1M = TIM5_CCMR1_Output_OC1M_Values<TIM5::CCMR1_Output, 4, 3, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1PE = TIM5_CCMR1_Output_OC1PE_Values<TIM5::CCMR1_Output, 3, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1FE = TIM5_CCMR1_Output_OC1FE_Values<TIM5::CCMR1_Output, 2, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using CC1S = TIM5_CCMR1_Output_CC1S_Values<TIM5::CCMR1_Output, 0, 2, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using FieldValues = TIM5_CCMR1_Output_CC1S_Values<TIM5::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000C18, 32, ReadWriteMode, TIM5CCMR1_OutputBase, T...> ;

  struct TIM5CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000C18, 32, ReadWriteMode>
  {
    using IC2F = TIM5_CCMR1_Input_IC2F_Values<TIM5::CCMR1_Input, 12, 4, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using IC2PCS = TIM5_CCMR1_Input_IC2PCS_Values<TIM5::CCMR1_Input, 10, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using CC2S = TIM5_CCMR1_Input_CC2S_Values<TIM5::CCMR1_Input, 8, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using IC1F = TIM5_CCMR1_Input_IC1F_Values<TIM5::CCMR1_Input, 4, 4, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using ICPCS = TIM5_CCMR1_Input_ICPCS_Values<TIM5::CCMR1_Input, 2, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using CC1S = TIM5_CCMR1_Input_CC1S_Values<TIM5::CCMR1_Input, 0, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using FieldValues = TIM5_CCMR1_Input_CC1S_Values<TIM5::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000C18, 32, ReadWriteMode, TIM5CCMR1_InputBase, T...> ;

  struct TIM5CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x40000C1C, 32, ReadWriteMode>
  {
    using O24CE = TIM5_CCMR2_Output_O24CE_Values<TIM5::CCMR2_Output, 15, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC4M = TIM5_CCMR2_Output_OC4M_Values<TIM5::CCMR2_Output, 12, 3, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC4PE = TIM5_CCMR2_Output_OC4PE_Values<TIM5::CCMR2_Output, 11, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC4FE = TIM5_CCMR2_Output_OC4FE_Values<TIM5::CCMR2_Output, 10, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using CC4S = TIM5_CCMR2_Output_CC4S_Values<TIM5::CCMR2_Output, 8, 2, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3CE = TIM5_CCMR2_Output_OC3CE_Values<TIM5::CCMR2_Output, 7, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3M = TIM5_CCMR2_Output_OC3M_Values<TIM5::CCMR2_Output, 4, 3, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3PE = TIM5_CCMR2_Output_OC3PE_Values<TIM5::CCMR2_Output, 3, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3FE = TIM5_CCMR2_Output_OC3FE_Values<TIM5::CCMR2_Output, 2, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using CC3S = TIM5_CCMR2_Output_CC3S_Values<TIM5::CCMR2_Output, 0, 2, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using FieldValues = TIM5_CCMR2_Output_CC3S_Values<TIM5::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x40000C1C, 32, ReadWriteMode, TIM5CCMR2_OutputBase, T...> ;

  struct TIM5CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x40000C1C, 32, ReadWriteMode>
  {
    using IC4F = TIM5_CCMR2_Input_IC4F_Values<TIM5::CCMR2_Input, 12, 4, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using IC4PSC = TIM5_CCMR2_Input_IC4PSC_Values<TIM5::CCMR2_Input, 10, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using CC4S = TIM5_CCMR2_Input_CC4S_Values<TIM5::CCMR2_Input, 8, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using IC3F = TIM5_CCMR2_Input_IC3F_Values<TIM5::CCMR2_Input, 4, 4, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using IC3PSC = TIM5_CCMR2_Input_IC3PSC_Values<TIM5::CCMR2_Input, 2, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using CC3S = TIM5_CCMR2_Input_CC3S_Values<TIM5::CCMR2_Input, 0, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using FieldValues = TIM5_CCMR2_Input_CC3S_Values<TIM5::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x40000C1C, 32, ReadWriteMode, TIM5CCMR2_InputBase, T...> ;

  struct TIM5CCERBase {} ;

  struct CCER : public RegisterBase<0x40000C20, 32, ReadWriteMode>
  {
    using CC4NP = TIM5_CCER_CC4NP_Values<TIM5::CCER, 15, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC4P = TIM5_CCER_CC4P_Values<TIM5::CCER, 13, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC4E = TIM5_CCER_CC4E_Values<TIM5::CCER, 12, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC3NP = TIM5_CCER_CC3NP_Values<TIM5::CCER, 11, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC3P = TIM5_CCER_CC3P_Values<TIM5::CCER, 9, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC3E = TIM5_CCER_CC3E_Values<TIM5::CCER, 8, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC2NP = TIM5_CCER_CC2NP_Values<TIM5::CCER, 7, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC2P = TIM5_CCER_CC2P_Values<TIM5::CCER, 5, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC2E = TIM5_CCER_CC2E_Values<TIM5::CCER, 4, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC1NP = TIM5_CCER_CC1NP_Values<TIM5::CCER, 3, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC1P = TIM5_CCER_CC1P_Values<TIM5::CCER, 1, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC1E = TIM5_CCER_CC1E_Values<TIM5::CCER, 0, 1, ReadWriteMode, TIM5CCERBase> ;
    using FieldValues = TIM5_CCER_CC1E_Values<TIM5::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000C20, 32, ReadWriteMode, TIM5CCERBase, T...> ;

  struct TIM5CNTBase {} ;

  struct CNT : public RegisterBase<0x40000C24, 32, ReadWriteMode>
  {
    using CNT_H = TIM5_CNT_CNT_H_Values<TIM5::CNT, 16, 16, ReadWriteMode, TIM5CNTBase> ;
    using CNT_L = TIM5_CNT_CNT_L_Values<TIM5::CNT, 0, 16, ReadWriteMode, TIM5CNTBase> ;
    using FieldValues = TIM5_CNT_CNT_L_Values<TIM5::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000C24, 32, ReadWriteMode, TIM5CNTBase, T...> ;

  struct TIM5PSCBase {} ;

  struct PSC : public RegisterBase<0x40000C28, 32, ReadWriteMode>
  {
    using PSCField = TIM5_PSC_PSC_Values<TIM5::PSC, 0, 16, ReadWriteMode, TIM5PSCBase> ;
    using FieldValues = TIM5_PSC_PSC_Values<TIM5::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000C28, 32, ReadWriteMode, TIM5PSCBase, T...> ;

  struct TIM5ARRBase {} ;

  struct ARR : public RegisterBase<0x40000C2C, 32, ReadWriteMode>
  {
    using ARR_H = TIM5_ARR_ARR_H_Values<TIM5::ARR, 16, 16, ReadWriteMode, TIM5ARRBase> ;
    using ARR_L = TIM5_ARR_ARR_L_Values<TIM5::ARR, 0, 16, ReadWriteMode, TIM5ARRBase> ;
    using FieldValues = TIM5_ARR_ARR_L_Values<TIM5::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40000C2C, 32, ReadWriteMode, TIM5ARRBase, T...> ;

  struct TIM5CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000C34, 32, ReadWriteMode>
  {
    using CCR1_H = TIM5_CCR1_CCR1_H_Values<TIM5::CCR1, 16, 16, ReadWriteMode, TIM5CCR1Base> ;
    using CCR1_L = TIM5_CCR1_CCR1_L_Values<TIM5::CCR1, 0, 16, ReadWriteMode, TIM5CCR1Base> ;
    using FieldValues = TIM5_CCR1_CCR1_L_Values<TIM5::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000C34, 32, ReadWriteMode, TIM5CCR1Base, T...> ;

  struct TIM5CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000C38, 32, ReadWriteMode>
  {
    using CCR2_H = TIM5_CCR2_CCR2_H_Values<TIM5::CCR2, 16, 16, ReadWriteMode, TIM5CCR2Base> ;
    using CCR2_L = TIM5_CCR2_CCR2_L_Values<TIM5::CCR2, 0, 16, ReadWriteMode, TIM5CCR2Base> ;
    using FieldValues = TIM5_CCR2_CCR2_L_Values<TIM5::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000C38, 32, ReadWriteMode, TIM5CCR2Base, T...> ;

  struct TIM5CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x40000C3C, 32, ReadWriteMode>
  {
    using CCR3_H = TIM5_CCR3_CCR3_H_Values<TIM5::CCR3, 16, 16, ReadWriteMode, TIM5CCR3Base> ;
    using CCR3_L = TIM5_CCR3_CCR3_L_Values<TIM5::CCR3, 0, 16, ReadWriteMode, TIM5CCR3Base> ;
    using FieldValues = TIM5_CCR3_CCR3_L_Values<TIM5::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x40000C3C, 32, ReadWriteMode, TIM5CCR3Base, T...> ;

  struct TIM5CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000C40, 32, ReadWriteMode>
  {
    using CCR4_H = TIM5_CCR4_CCR4_H_Values<TIM5::CCR4, 16, 16, ReadWriteMode, TIM5CCR4Base> ;
    using CCR4_L = TIM5_CCR4_CCR4_L_Values<TIM5::CCR4, 0, 16, ReadWriteMode, TIM5CCR4Base> ;
    using FieldValues = TIM5_CCR4_CCR4_L_Values<TIM5::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000C40, 32, ReadWriteMode, TIM5CCR4Base, T...> ;

  struct TIM5DCRBase {} ;

  struct DCR : public RegisterBase<0x40000C48, 32, ReadWriteMode>
  {
    using DBL = TIM5_DCR_DBL_Values<TIM5::DCR, 8, 5, ReadWriteMode, TIM5DCRBase> ;
    using DBA = TIM5_DCR_DBA_Values<TIM5::DCR, 0, 5, ReadWriteMode, TIM5DCRBase> ;
    using FieldValues = TIM5_DCR_DBA_Values<TIM5::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40000C48, 32, ReadWriteMode, TIM5DCRBase, T...> ;

  struct TIM5DMARBase {} ;

  struct DMAR : public RegisterBase<0x40000C4C, 32, ReadWriteMode>
  {
    using DMAB = TIM5_DMAR_DMAB_Values<TIM5::DMAR, 0, 16, ReadWriteMode, TIM5DMARBase> ;
    using FieldValues = TIM5_DMAR_DMAB_Values<TIM5::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x40000C4C, 32, ReadWriteMode, TIM5DMARBase, T...> ;

  struct TIM5ORBase {} ;

  struct OR : public RegisterBase<0x40000C50, 32, ReadWriteMode>
  {
    using IT4_RMP = TIM5_OR_IT4_RMP_Values<TIM5::OR, 6, 2, ReadWriteMode, TIM5ORBase> ;
    using FieldValues = TIM5_OR_IT4_RMP_Values<TIM5::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40000C50, 32, ReadWriteMode, TIM5ORBase, T...> ;

} ;

#endif //#if !defined(TIM5REGISTERS_HPP)
