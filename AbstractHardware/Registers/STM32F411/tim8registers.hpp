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
    using CKD = TIM8_CR1_CKD_Values<TIM8::CR1, 8, 2, ReadWriteMode, TIM8CR1Base> ;
    using ARPE = TIM8_CR1_ARPE_Values<TIM8::CR1, 7, 1, ReadWriteMode, TIM8CR1Base> ;
    using CMS = TIM8_CR1_CMS_Values<TIM8::CR1, 5, 2, ReadWriteMode, TIM8CR1Base> ;
    using DIR = TIM8_CR1_DIR_Values<TIM8::CR1, 4, 1, ReadWriteMode, TIM8CR1Base> ;
    using OPM = TIM8_CR1_OPM_Values<TIM8::CR1, 3, 1, ReadWriteMode, TIM8CR1Base> ;
    using URS = TIM8_CR1_URS_Values<TIM8::CR1, 2, 1, ReadWriteMode, TIM8CR1Base> ;
    using UDIS = TIM8_CR1_UDIS_Values<TIM8::CR1, 1, 1, ReadWriteMode, TIM8CR1Base> ;
    using CEN = TIM8_CR1_CEN_Values<TIM8::CR1, 0, 1, ReadWriteMode, TIM8CR1Base> ;
    using FieldValues = TIM8_CR1_CEN_Values<TIM8::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40010400, 32, ReadWriteMode, TIM8CR1Base, T...> ;

  struct TIM8CR2Base {} ;

  struct CR2 : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using OIS4 = TIM8_CR2_OIS4_Values<TIM8::CR2, 14, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS3N = TIM8_CR2_OIS3N_Values<TIM8::CR2, 13, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS3 = TIM8_CR2_OIS3_Values<TIM8::CR2, 12, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS2N = TIM8_CR2_OIS2N_Values<TIM8::CR2, 11, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS2 = TIM8_CR2_OIS2_Values<TIM8::CR2, 10, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS1N = TIM8_CR2_OIS1N_Values<TIM8::CR2, 9, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS1 = TIM8_CR2_OIS1_Values<TIM8::CR2, 8, 1, ReadWriteMode, TIM8CR2Base> ;
    using TI1S = TIM8_CR2_TI1S_Values<TIM8::CR2, 7, 1, ReadWriteMode, TIM8CR2Base> ;
    using MMS = TIM8_CR2_MMS_Values<TIM8::CR2, 4, 3, ReadWriteMode, TIM8CR2Base> ;
    using CCDS = TIM8_CR2_CCDS_Values<TIM8::CR2, 3, 1, ReadWriteMode, TIM8CR2Base> ;
    using CCUS = TIM8_CR2_CCUS_Values<TIM8::CR2, 2, 1, ReadWriteMode, TIM8CR2Base> ;
    using CCPC = TIM8_CR2_CCPC_Values<TIM8::CR2, 0, 1, ReadWriteMode, TIM8CR2Base> ;
    using FieldValues = TIM8_CR2_CCPC_Values<TIM8::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40010404, 32, ReadWriteMode, TIM8CR2Base, T...> ;

  struct TIM8SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using ETP = TIM8_SMCR_ETP_Values<TIM8::SMCR, 15, 1, ReadWriteMode, TIM8SMCRBase> ;
    using ECE = TIM8_SMCR_ECE_Values<TIM8::SMCR, 14, 1, ReadWriteMode, TIM8SMCRBase> ;
    using ETPS = TIM8_SMCR_ETPS_Values<TIM8::SMCR, 12, 2, ReadWriteMode, TIM8SMCRBase> ;
    using ETF = TIM8_SMCR_ETF_Values<TIM8::SMCR, 8, 4, ReadWriteMode, TIM8SMCRBase> ;
    using MSM = TIM8_SMCR_MSM_Values<TIM8::SMCR, 7, 1, ReadWriteMode, TIM8SMCRBase> ;
    using TS = TIM8_SMCR_TS_Values<TIM8::SMCR, 4, 3, ReadWriteMode, TIM8SMCRBase> ;
    using SMS = TIM8_SMCR_SMS_Values<TIM8::SMCR, 0, 3, ReadWriteMode, TIM8SMCRBase> ;
    using FieldValues = TIM8_SMCR_SMS_Values<TIM8::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40010408, 32, ReadWriteMode, TIM8SMCRBase, T...> ;

  struct TIM8DIERBase {} ;

  struct DIER : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using TDE = TIM8_DIER_TDE_Values<TIM8::DIER, 14, 1, ReadWriteMode, TIM8DIERBase> ;
    using COMDE = TIM8_DIER_COMDE_Values<TIM8::DIER, 13, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC4DE = TIM8_DIER_CC4DE_Values<TIM8::DIER, 12, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC3DE = TIM8_DIER_CC3DE_Values<TIM8::DIER, 11, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC2DE = TIM8_DIER_CC2DE_Values<TIM8::DIER, 10, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC1DE = TIM8_DIER_CC1DE_Values<TIM8::DIER, 9, 1, ReadWriteMode, TIM8DIERBase> ;
    using UDE = TIM8_DIER_UDE_Values<TIM8::DIER, 8, 1, ReadWriteMode, TIM8DIERBase> ;
    using BIE = TIM8_DIER_BIE_Values<TIM8::DIER, 7, 1, ReadWriteMode, TIM8DIERBase> ;
    using TIE = TIM8_DIER_TIE_Values<TIM8::DIER, 6, 1, ReadWriteMode, TIM8DIERBase> ;
    using COMIE = TIM8_DIER_COMIE_Values<TIM8::DIER, 5, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC4IE = TIM8_DIER_CC4IE_Values<TIM8::DIER, 4, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC3IE = TIM8_DIER_CC3IE_Values<TIM8::DIER, 3, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC2IE = TIM8_DIER_CC2IE_Values<TIM8::DIER, 2, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC1IE = TIM8_DIER_CC1IE_Values<TIM8::DIER, 1, 1, ReadWriteMode, TIM8DIERBase> ;
    using UIE = TIM8_DIER_UIE_Values<TIM8::DIER, 0, 1, ReadWriteMode, TIM8DIERBase> ;
    using FieldValues = TIM8_DIER_UIE_Values<TIM8::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001040C, 32, ReadWriteMode, TIM8DIERBase, T...> ;

  struct TIM8SRBase {} ;

  struct SR : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using CC4OF = TIM8_SR_CC4OF_Values<TIM8::SR, 12, 1, ReadWriteMode, TIM8SRBase> ;
    using CC3OF = TIM8_SR_CC3OF_Values<TIM8::SR, 11, 1, ReadWriteMode, TIM8SRBase> ;
    using CC2OF = TIM8_SR_CC2OF_Values<TIM8::SR, 10, 1, ReadWriteMode, TIM8SRBase> ;
    using CC1OF = TIM8_SR_CC1OF_Values<TIM8::SR, 9, 1, ReadWriteMode, TIM8SRBase> ;
    using BIF = TIM8_SR_BIF_Values<TIM8::SR, 7, 1, ReadWriteMode, TIM8SRBase> ;
    using TIF = TIM8_SR_TIF_Values<TIM8::SR, 6, 1, ReadWriteMode, TIM8SRBase> ;
    using COMIF = TIM8_SR_COMIF_Values<TIM8::SR, 5, 1, ReadWriteMode, TIM8SRBase> ;
    using CC4IF = TIM8_SR_CC4IF_Values<TIM8::SR, 4, 1, ReadWriteMode, TIM8SRBase> ;
    using CC3IF = TIM8_SR_CC3IF_Values<TIM8::SR, 3, 1, ReadWriteMode, TIM8SRBase> ;
    using CC2IF = TIM8_SR_CC2IF_Values<TIM8::SR, 2, 1, ReadWriteMode, TIM8SRBase> ;
    using CC1IF = TIM8_SR_CC1IF_Values<TIM8::SR, 1, 1, ReadWriteMode, TIM8SRBase> ;
    using UIF = TIM8_SR_UIF_Values<TIM8::SR, 0, 1, ReadWriteMode, TIM8SRBase> ;
    using FieldValues = TIM8_SR_UIF_Values<TIM8::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40010410, 32, ReadWriteMode, TIM8SRBase, T...> ;

  struct TIM8EGRBase {} ;

  struct EGR : public RegisterBase<0x40010414, 32, WriteMode>
  {
    using BG = TIM8_EGR_BG_Values<TIM8::EGR, 7, 1, WriteMode, TIM8EGRBase> ;
    using TG = TIM8_EGR_TG_Values<TIM8::EGR, 6, 1, WriteMode, TIM8EGRBase> ;
    using COMG = TIM8_EGR_COMG_Values<TIM8::EGR, 5, 1, WriteMode, TIM8EGRBase> ;
    using CC4G = TIM8_EGR_CC4G_Values<TIM8::EGR, 4, 1, WriteMode, TIM8EGRBase> ;
    using CC3G = TIM8_EGR_CC3G_Values<TIM8::EGR, 3, 1, WriteMode, TIM8EGRBase> ;
    using CC2G = TIM8_EGR_CC2G_Values<TIM8::EGR, 2, 1, WriteMode, TIM8EGRBase> ;
    using CC1G = TIM8_EGR_CC1G_Values<TIM8::EGR, 1, 1, WriteMode, TIM8EGRBase> ;
    using UG = TIM8_EGR_UG_Values<TIM8::EGR, 0, 1, WriteMode, TIM8EGRBase> ;
    using FieldValues = TIM8_EGR_UG_Values<TIM8::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40010414, 32, WriteMode, TIM8EGRBase, T...> ;

  struct TIM8CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using OC2CE = TIM8_CCMR1_Output_OC2CE_Values<TIM8::CCMR1_Output, 15, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2M = TIM8_CCMR1_Output_OC2M_Values<TIM8::CCMR1_Output, 12, 3, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2PE = TIM8_CCMR1_Output_OC2PE_Values<TIM8::CCMR1_Output, 11, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2FE = TIM8_CCMR1_Output_OC2FE_Values<TIM8::CCMR1_Output, 10, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using CC2S = TIM8_CCMR1_Output_CC2S_Values<TIM8::CCMR1_Output, 8, 2, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1CE = TIM8_CCMR1_Output_OC1CE_Values<TIM8::CCMR1_Output, 7, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1M = TIM8_CCMR1_Output_OC1M_Values<TIM8::CCMR1_Output, 4, 3, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1PE = TIM8_CCMR1_Output_OC1PE_Values<TIM8::CCMR1_Output, 3, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1FE = TIM8_CCMR1_Output_OC1FE_Values<TIM8::CCMR1_Output, 2, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using CC1S = TIM8_CCMR1_Output_CC1S_Values<TIM8::CCMR1_Output, 0, 2, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using FieldValues = TIM8_CCMR1_Output_CC1S_Values<TIM8::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40010418, 32, ReadWriteMode, TIM8CCMR1_OutputBase, T...> ;

  struct TIM8CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using IC2F = TIM8_CCMR1_Input_IC2F_Values<TIM8::CCMR1_Input, 12, 4, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using IC2PCS = TIM8_CCMR1_Input_IC2PCS_Values<TIM8::CCMR1_Input, 10, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using CC2S = TIM8_CCMR1_Input_CC2S_Values<TIM8::CCMR1_Input, 8, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using IC1F = TIM8_CCMR1_Input_IC1F_Values<TIM8::CCMR1_Input, 4, 4, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using ICPCS = TIM8_CCMR1_Input_ICPCS_Values<TIM8::CCMR1_Input, 2, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using CC1S = TIM8_CCMR1_Input_CC1S_Values<TIM8::CCMR1_Input, 0, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using FieldValues = TIM8_CCMR1_Input_CC1S_Values<TIM8::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40010418, 32, ReadWriteMode, TIM8CCMR1_InputBase, T...> ;

  struct TIM8CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4001041C, 32, ReadWriteMode>
  {
    using OC4CE = TIM8_CCMR2_Output_OC4CE_Values<TIM8::CCMR2_Output, 15, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4M = TIM8_CCMR2_Output_OC4M_Values<TIM8::CCMR2_Output, 12, 3, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4PE = TIM8_CCMR2_Output_OC4PE_Values<TIM8::CCMR2_Output, 11, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4FE = TIM8_CCMR2_Output_OC4FE_Values<TIM8::CCMR2_Output, 10, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using CC4S = TIM8_CCMR2_Output_CC4S_Values<TIM8::CCMR2_Output, 8, 2, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3CE = TIM8_CCMR2_Output_OC3CE_Values<TIM8::CCMR2_Output, 7, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3M = TIM8_CCMR2_Output_OC3M_Values<TIM8::CCMR2_Output, 4, 3, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3PE = TIM8_CCMR2_Output_OC3PE_Values<TIM8::CCMR2_Output, 3, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3FE = TIM8_CCMR2_Output_OC3FE_Values<TIM8::CCMR2_Output, 2, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using CC3S = TIM8_CCMR2_Output_CC3S_Values<TIM8::CCMR2_Output, 0, 2, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using FieldValues = TIM8_CCMR2_Output_CC3S_Values<TIM8::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4001041C, 32, ReadWriteMode, TIM8CCMR2_OutputBase, T...> ;

  struct TIM8CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4001041C, 32, ReadWriteMode>
  {
    using IC4F = TIM8_CCMR2_Input_IC4F_Values<TIM8::CCMR2_Input, 12, 4, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC4PSC = TIM8_CCMR2_Input_IC4PSC_Values<TIM8::CCMR2_Input, 10, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using CC4S = TIM8_CCMR2_Input_CC4S_Values<TIM8::CCMR2_Input, 8, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC3F = TIM8_CCMR2_Input_IC3F_Values<TIM8::CCMR2_Input, 4, 4, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC3PSC = TIM8_CCMR2_Input_IC3PSC_Values<TIM8::CCMR2_Input, 2, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using CC3S = TIM8_CCMR2_Input_CC3S_Values<TIM8::CCMR2_Input, 0, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using FieldValues = TIM8_CCMR2_Input_CC3S_Values<TIM8::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4001041C, 32, ReadWriteMode, TIM8CCMR2_InputBase, T...> ;

  struct TIM8CCERBase {} ;

  struct CCER : public RegisterBase<0x40010420, 32, ReadWriteMode>
  {
    using CC4P = TIM8_CCER_CC4P_Values<TIM8::CCER, 13, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC4E = TIM8_CCER_CC4E_Values<TIM8::CCER, 12, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3NP = TIM8_CCER_CC3NP_Values<TIM8::CCER, 11, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3NE = TIM8_CCER_CC3NE_Values<TIM8::CCER, 10, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3P = TIM8_CCER_CC3P_Values<TIM8::CCER, 9, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3E = TIM8_CCER_CC3E_Values<TIM8::CCER, 8, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2NP = TIM8_CCER_CC2NP_Values<TIM8::CCER, 7, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2NE = TIM8_CCER_CC2NE_Values<TIM8::CCER, 6, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2P = TIM8_CCER_CC2P_Values<TIM8::CCER, 5, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2E = TIM8_CCER_CC2E_Values<TIM8::CCER, 4, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1NP = TIM8_CCER_CC1NP_Values<TIM8::CCER, 3, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1NE = TIM8_CCER_CC1NE_Values<TIM8::CCER, 2, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1P = TIM8_CCER_CC1P_Values<TIM8::CCER, 1, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1E = TIM8_CCER_CC1E_Values<TIM8::CCER, 0, 1, ReadWriteMode, TIM8CCERBase> ;
    using FieldValues = TIM8_CCER_CC1E_Values<TIM8::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40010420, 32, ReadWriteMode, TIM8CCERBase, T...> ;

  struct TIM8CNTBase {} ;

  struct CNT : public RegisterBase<0x40010424, 32, ReadWriteMode>
  {
    using CNTField = TIM8_CNT_CNT_Values<TIM8::CNT, 0, 16, ReadWriteMode, TIM8CNTBase> ;
    using FieldValues = TIM8_CNT_CNT_Values<TIM8::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40010424, 32, ReadWriteMode, TIM8CNTBase, T...> ;

  struct TIM8PSCBase {} ;

  struct PSC : public RegisterBase<0x40010428, 32, ReadWriteMode>
  {
    using PSCField = TIM8_PSC_PSC_Values<TIM8::PSC, 0, 16, ReadWriteMode, TIM8PSCBase> ;
    using FieldValues = TIM8_PSC_PSC_Values<TIM8::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40010428, 32, ReadWriteMode, TIM8PSCBase, T...> ;

  struct TIM8ARRBase {} ;

  struct ARR : public RegisterBase<0x4001042C, 32, ReadWriteMode>
  {
    using ARRField = TIM8_ARR_ARR_Values<TIM8::ARR, 0, 16, ReadWriteMode, TIM8ARRBase> ;
    using FieldValues = TIM8_ARR_ARR_Values<TIM8::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001042C, 32, ReadWriteMode, TIM8ARRBase, T...> ;

  struct TIM8CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40010434, 32, ReadWriteMode>
  {
    using CCR1Field = TIM8_CCR1_CCR1_Values<TIM8::CCR1, 0, 16, ReadWriteMode, TIM8CCR1Base> ;
    using FieldValues = TIM8_CCR1_CCR1_Values<TIM8::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40010434, 32, ReadWriteMode, TIM8CCR1Base, T...> ;

  struct TIM8CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40010438, 32, ReadWriteMode>
  {
    using CCR2Field = TIM8_CCR2_CCR2_Values<TIM8::CCR2, 0, 16, ReadWriteMode, TIM8CCR2Base> ;
    using FieldValues = TIM8_CCR2_CCR2_Values<TIM8::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40010438, 32, ReadWriteMode, TIM8CCR2Base, T...> ;

  struct TIM8CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4001043C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM8_CCR3_CCR3_Values<TIM8::CCR3, 0, 16, ReadWriteMode, TIM8CCR3Base> ;
    using FieldValues = TIM8_CCR3_CCR3_Values<TIM8::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4001043C, 32, ReadWriteMode, TIM8CCR3Base, T...> ;

  struct TIM8CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40010440, 32, ReadWriteMode>
  {
    using CCR4Field = TIM8_CCR4_CCR4_Values<TIM8::CCR4, 0, 16, ReadWriteMode, TIM8CCR4Base> ;
    using FieldValues = TIM8_CCR4_CCR4_Values<TIM8::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40010440, 32, ReadWriteMode, TIM8CCR4Base, T...> ;

  struct TIM8DCRBase {} ;

  struct DCR : public RegisterBase<0x40010448, 32, ReadWriteMode>
  {
    using DBL = TIM8_DCR_DBL_Values<TIM8::DCR, 8, 5, ReadWriteMode, TIM8DCRBase> ;
    using DBA = TIM8_DCR_DBA_Values<TIM8::DCR, 0, 5, ReadWriteMode, TIM8DCRBase> ;
    using FieldValues = TIM8_DCR_DBA_Values<TIM8::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40010448, 32, ReadWriteMode, TIM8DCRBase, T...> ;

  struct TIM8DMARBase {} ;

  struct DMAR : public RegisterBase<0x4001044C, 32, ReadWriteMode>
  {
    using DMAB = TIM8_DMAR_DMAB_Values<TIM8::DMAR, 0, 16, ReadWriteMode, TIM8DMARBase> ;
    using FieldValues = TIM8_DMAR_DMAB_Values<TIM8::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4001044C, 32, ReadWriteMode, TIM8DMARBase, T...> ;

  struct TIM8RCRBase {} ;

  struct RCR : public RegisterBase<0x40010430, 32, ReadWriteMode>
  {
    using REP = TIM8_RCR_REP_Values<TIM8::RCR, 0, 8, ReadWriteMode, TIM8RCRBase> ;
    using FieldValues = TIM8_RCR_REP_Values<TIM8::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40010430, 32, ReadWriteMode, TIM8RCRBase, T...> ;

  struct TIM8BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40010444, 32, ReadWriteMode>
  {
    using MOE = TIM8_BDTR_MOE_Values<TIM8::BDTR, 15, 1, ReadWriteMode, TIM8BDTRBase> ;
    using AOE = TIM8_BDTR_AOE_Values<TIM8::BDTR, 14, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKP = TIM8_BDTR_BKP_Values<TIM8::BDTR, 13, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKE = TIM8_BDTR_BKE_Values<TIM8::BDTR, 12, 1, ReadWriteMode, TIM8BDTRBase> ;
    using OSSR = TIM8_BDTR_OSSR_Values<TIM8::BDTR, 11, 1, ReadWriteMode, TIM8BDTRBase> ;
    using OSSI = TIM8_BDTR_OSSI_Values<TIM8::BDTR, 10, 1, ReadWriteMode, TIM8BDTRBase> ;
    using LOCK = TIM8_BDTR_LOCK_Values<TIM8::BDTR, 8, 2, ReadWriteMode, TIM8BDTRBase> ;
    using DTG = TIM8_BDTR_DTG_Values<TIM8::BDTR, 0, 8, ReadWriteMode, TIM8BDTRBase> ;
    using FieldValues = TIM8_BDTR_DTG_Values<TIM8::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40010444, 32, ReadWriteMode, TIM8BDTRBase, T...> ;

} ;

#endif //#if !defined(TIM8REGISTERS_HPP)
