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
    using CKD = TIM2_CR1_CKD_Values<TIM2::CR1, 8, 2, ReadWriteMode, TIM2CR1Base> ;
    using ARPE = TIM2_CR1_ARPE_Values<TIM2::CR1, 7, 1, ReadWriteMode, TIM2CR1Base> ;
    using CMS = TIM2_CR1_CMS_Values<TIM2::CR1, 5, 2, ReadWriteMode, TIM2CR1Base> ;
    using DIR = TIM2_CR1_DIR_Values<TIM2::CR1, 4, 1, ReadWriteMode, TIM2CR1Base> ;
    using OPM = TIM2_CR1_OPM_Values<TIM2::CR1, 3, 1, ReadWriteMode, TIM2CR1Base> ;
    using URS = TIM2_CR1_URS_Values<TIM2::CR1, 2, 1, ReadWriteMode, TIM2CR1Base> ;
    using UDIS = TIM2_CR1_UDIS_Values<TIM2::CR1, 1, 1, ReadWriteMode, TIM2CR1Base> ;
    using CEN = TIM2_CR1_CEN_Values<TIM2::CR1, 0, 1, ReadWriteMode, TIM2CR1Base> ;
    using FieldValues = TIM2_CR1_CEN_Values<TIM2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000000, 32, ReadWriteMode, TIM2CR1Base, T...> ;

  struct TIM2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000004, 32, ReadWriteMode>
  {
    using TI1S = TIM2_CR2_TI1S_Values<TIM2::CR2, 7, 1, ReadWriteMode, TIM2CR2Base> ;
    using MMS = TIM2_CR2_MMS_Values<TIM2::CR2, 4, 3, ReadWriteMode, TIM2CR2Base> ;
    using CCDS = TIM2_CR2_CCDS_Values<TIM2::CR2, 3, 1, ReadWriteMode, TIM2CR2Base> ;
    using FieldValues = TIM2_CR2_CCDS_Values<TIM2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000004, 32, ReadWriteMode, TIM2CR2Base, T...> ;

  struct TIM2SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000008, 32, ReadWriteMode>
  {
    using ETP = TIM2_SMCR_ETP_Values<TIM2::SMCR, 15, 1, ReadWriteMode, TIM2SMCRBase> ;
    using ECE = TIM2_SMCR_ECE_Values<TIM2::SMCR, 14, 1, ReadWriteMode, TIM2SMCRBase> ;
    using ETPS = TIM2_SMCR_ETPS_Values<TIM2::SMCR, 12, 2, ReadWriteMode, TIM2SMCRBase> ;
    using ETF = TIM2_SMCR_ETF_Values<TIM2::SMCR, 8, 4, ReadWriteMode, TIM2SMCRBase> ;
    using MSM = TIM2_SMCR_MSM_Values<TIM2::SMCR, 7, 1, ReadWriteMode, TIM2SMCRBase> ;
    using TS = TIM2_SMCR_TS_Values<TIM2::SMCR, 4, 3, ReadWriteMode, TIM2SMCRBase> ;
    using SMS = TIM2_SMCR_SMS_Values<TIM2::SMCR, 0, 3, ReadWriteMode, TIM2SMCRBase> ;
    using FieldValues = TIM2_SMCR_SMS_Values<TIM2::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000008, 32, ReadWriteMode, TIM2SMCRBase, T...> ;

  struct TIM2DIERBase {} ;

  struct DIER : public RegisterBase<0x4000000C, 32, ReadWriteMode>
  {
    using TDE = TIM2_DIER_TDE_Values<TIM2::DIER, 14, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC4DE = TIM2_DIER_CC4DE_Values<TIM2::DIER, 12, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC3DE = TIM2_DIER_CC3DE_Values<TIM2::DIER, 11, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC2DE = TIM2_DIER_CC2DE_Values<TIM2::DIER, 10, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC1DE = TIM2_DIER_CC1DE_Values<TIM2::DIER, 9, 1, ReadWriteMode, TIM2DIERBase> ;
    using UDE = TIM2_DIER_UDE_Values<TIM2::DIER, 8, 1, ReadWriteMode, TIM2DIERBase> ;
    using TIE = TIM2_DIER_TIE_Values<TIM2::DIER, 6, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC4IE = TIM2_DIER_CC4IE_Values<TIM2::DIER, 4, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC3IE = TIM2_DIER_CC3IE_Values<TIM2::DIER, 3, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC2IE = TIM2_DIER_CC2IE_Values<TIM2::DIER, 2, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC1IE = TIM2_DIER_CC1IE_Values<TIM2::DIER, 1, 1, ReadWriteMode, TIM2DIERBase> ;
    using UIE = TIM2_DIER_UIE_Values<TIM2::DIER, 0, 1, ReadWriteMode, TIM2DIERBase> ;
    using FieldValues = TIM2_DIER_UIE_Values<TIM2::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000000C, 32, ReadWriteMode, TIM2DIERBase, T...> ;

  struct TIM2SRBase {} ;

  struct SR : public RegisterBase<0x40000010, 32, ReadWriteMode>
  {
    using CC4OF = TIM2_SR_CC4OF_Values<TIM2::SR, 12, 1, ReadWriteMode, TIM2SRBase> ;
    using CC3OF = TIM2_SR_CC3OF_Values<TIM2::SR, 11, 1, ReadWriteMode, TIM2SRBase> ;
    using CC2OF = TIM2_SR_CC2OF_Values<TIM2::SR, 10, 1, ReadWriteMode, TIM2SRBase> ;
    using CC1OF = TIM2_SR_CC1OF_Values<TIM2::SR, 9, 1, ReadWriteMode, TIM2SRBase> ;
    using TIF = TIM2_SR_TIF_Values<TIM2::SR, 6, 1, ReadWriteMode, TIM2SRBase> ;
    using CC4IF = TIM2_SR_CC4IF_Values<TIM2::SR, 4, 1, ReadWriteMode, TIM2SRBase> ;
    using CC3IF = TIM2_SR_CC3IF_Values<TIM2::SR, 3, 1, ReadWriteMode, TIM2SRBase> ;
    using CC2IF = TIM2_SR_CC2IF_Values<TIM2::SR, 2, 1, ReadWriteMode, TIM2SRBase> ;
    using CC1IF = TIM2_SR_CC1IF_Values<TIM2::SR, 1, 1, ReadWriteMode, TIM2SRBase> ;
    using UIF = TIM2_SR_UIF_Values<TIM2::SR, 0, 1, ReadWriteMode, TIM2SRBase> ;
    using FieldValues = TIM2_SR_UIF_Values<TIM2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000010, 32, ReadWriteMode, TIM2SRBase, T...> ;

  struct TIM2EGRBase {} ;

  struct EGR : public RegisterBase<0x40000014, 32, WriteMode>
  {
    using TG = TIM2_EGR_TG_Values<TIM2::EGR, 6, 1, WriteMode, TIM2EGRBase> ;
    using CC4G = TIM2_EGR_CC4G_Values<TIM2::EGR, 4, 1, WriteMode, TIM2EGRBase> ;
    using CC3G = TIM2_EGR_CC3G_Values<TIM2::EGR, 3, 1, WriteMode, TIM2EGRBase> ;
    using CC2G = TIM2_EGR_CC2G_Values<TIM2::EGR, 2, 1, WriteMode, TIM2EGRBase> ;
    using CC1G = TIM2_EGR_CC1G_Values<TIM2::EGR, 1, 1, WriteMode, TIM2EGRBase> ;
    using UG = TIM2_EGR_UG_Values<TIM2::EGR, 0, 1, WriteMode, TIM2EGRBase> ;
    using FieldValues = TIM2_EGR_UG_Values<TIM2::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000014, 32, WriteMode, TIM2EGRBase, T...> ;

  struct TIM2CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using OC2CE = TIM2_CCMR1_Output_OC2CE_Values<TIM2::CCMR1_Output, 15, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2M = TIM2_CCMR1_Output_OC2M_Values<TIM2::CCMR1_Output, 12, 3, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2PE = TIM2_CCMR1_Output_OC2PE_Values<TIM2::CCMR1_Output, 11, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2FE = TIM2_CCMR1_Output_OC2FE_Values<TIM2::CCMR1_Output, 10, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using CC2S = TIM2_CCMR1_Output_CC2S_Values<TIM2::CCMR1_Output, 8, 2, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1CE = TIM2_CCMR1_Output_OC1CE_Values<TIM2::CCMR1_Output, 7, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1M = TIM2_CCMR1_Output_OC1M_Values<TIM2::CCMR1_Output, 4, 3, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1PE = TIM2_CCMR1_Output_OC1PE_Values<TIM2::CCMR1_Output, 3, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1FE = TIM2_CCMR1_Output_OC1FE_Values<TIM2::CCMR1_Output, 2, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using CC1S = TIM2_CCMR1_Output_CC1S_Values<TIM2::CCMR1_Output, 0, 2, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using FieldValues = TIM2_CCMR1_Output_CC1S_Values<TIM2::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000018, 32, ReadWriteMode, TIM2CCMR1_OutputBase, T...> ;

  struct TIM2CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using IC2F = TIM2_CCMR1_Input_IC2F_Values<TIM2::CCMR1_Input, 12, 4, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using IC2PCS = TIM2_CCMR1_Input_IC2PCS_Values<TIM2::CCMR1_Input, 10, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using CC2S = TIM2_CCMR1_Input_CC2S_Values<TIM2::CCMR1_Input, 8, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using IC1F = TIM2_CCMR1_Input_IC1F_Values<TIM2::CCMR1_Input, 4, 4, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using ICPCS = TIM2_CCMR1_Input_ICPCS_Values<TIM2::CCMR1_Input, 2, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using CC1S = TIM2_CCMR1_Input_CC1S_Values<TIM2::CCMR1_Input, 0, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using FieldValues = TIM2_CCMR1_Input_CC1S_Values<TIM2::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000018, 32, ReadWriteMode, TIM2CCMR1_InputBase, T...> ;

  struct TIM2CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using O24CE = TIM2_CCMR2_Output_O24CE_Values<TIM2::CCMR2_Output, 15, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4M = TIM2_CCMR2_Output_OC4M_Values<TIM2::CCMR2_Output, 12, 3, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4PE = TIM2_CCMR2_Output_OC4PE_Values<TIM2::CCMR2_Output, 11, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4FE = TIM2_CCMR2_Output_OC4FE_Values<TIM2::CCMR2_Output, 10, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using CC4S = TIM2_CCMR2_Output_CC4S_Values<TIM2::CCMR2_Output, 8, 2, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3CE = TIM2_CCMR2_Output_OC3CE_Values<TIM2::CCMR2_Output, 7, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3M = TIM2_CCMR2_Output_OC3M_Values<TIM2::CCMR2_Output, 4, 3, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3PE = TIM2_CCMR2_Output_OC3PE_Values<TIM2::CCMR2_Output, 3, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3FE = TIM2_CCMR2_Output_OC3FE_Values<TIM2::CCMR2_Output, 2, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using CC3S = TIM2_CCMR2_Output_CC3S_Values<TIM2::CCMR2_Output, 0, 2, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using FieldValues = TIM2_CCMR2_Output_CC3S_Values<TIM2::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000001C, 32, ReadWriteMode, TIM2CCMR2_OutputBase, T...> ;

  struct TIM2CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using IC4F = TIM2_CCMR2_Input_IC4F_Values<TIM2::CCMR2_Input, 12, 4, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC4PSC = TIM2_CCMR2_Input_IC4PSC_Values<TIM2::CCMR2_Input, 10, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using CC4S = TIM2_CCMR2_Input_CC4S_Values<TIM2::CCMR2_Input, 8, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC3F = TIM2_CCMR2_Input_IC3F_Values<TIM2::CCMR2_Input, 4, 4, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC3PSC = TIM2_CCMR2_Input_IC3PSC_Values<TIM2::CCMR2_Input, 2, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using CC3S = TIM2_CCMR2_Input_CC3S_Values<TIM2::CCMR2_Input, 0, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using FieldValues = TIM2_CCMR2_Input_CC3S_Values<TIM2::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000001C, 32, ReadWriteMode, TIM2CCMR2_InputBase, T...> ;

  struct TIM2CCERBase {} ;

  struct CCER : public RegisterBase<0x40000020, 32, ReadWriteMode>
  {
    using CC4NP = TIM2_CCER_CC4NP_Values<TIM2::CCER, 15, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4P = TIM2_CCER_CC4P_Values<TIM2::CCER, 13, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4E = TIM2_CCER_CC4E_Values<TIM2::CCER, 12, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3NP = TIM2_CCER_CC3NP_Values<TIM2::CCER, 11, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3P = TIM2_CCER_CC3P_Values<TIM2::CCER, 9, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3E = TIM2_CCER_CC3E_Values<TIM2::CCER, 8, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2NP = TIM2_CCER_CC2NP_Values<TIM2::CCER, 7, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2P = TIM2_CCER_CC2P_Values<TIM2::CCER, 5, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2E = TIM2_CCER_CC2E_Values<TIM2::CCER, 4, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1NP = TIM2_CCER_CC1NP_Values<TIM2::CCER, 3, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1P = TIM2_CCER_CC1P_Values<TIM2::CCER, 1, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1E = TIM2_CCER_CC1E_Values<TIM2::CCER, 0, 1, ReadWriteMode, TIM2CCERBase> ;
    using FieldValues = TIM2_CCER_CC1E_Values<TIM2::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000020, 32, ReadWriteMode, TIM2CCERBase, T...> ;

  struct TIM2CNTBase {} ;

  struct CNT : public RegisterBase<0x40000024, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000024, 32, ReadWriteMode, TIM2CNTBase, T...> ;

  struct TIM2PSCBase {} ;

  struct PSC : public RegisterBase<0x40000028, 32, ReadWriteMode>
  {
    using PSCField = TIM2_PSC_PSC_Values<TIM2::PSC, 0, 16, ReadWriteMode, TIM2PSCBase> ;
    using FieldValues = TIM2_PSC_PSC_Values<TIM2::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000028, 32, ReadWriteMode, TIM2PSCBase, T...> ;

  struct TIM2ARRBase {} ;

  struct ARR : public RegisterBase<0x4000002C, 32, ReadWriteMode>
  {

  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000002C, 32, ReadWriteMode, TIM2ARRBase, T...> ;

  struct TIM2CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000034, 32, ReadWriteMode>
  {
    
    using CCR1Field = TIM2_CCR1_CCR1_Values<TIM2::CCR1, 0, 32, ReadWriteMode, TIM2CCR1Base> ;
    using FieldValues = TIM2_CCR1_CCR1_Values<TIM2::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000034, 32, ReadWriteMode, TIM2CCR1Base, T...> ;

  struct TIM2CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000038, 32, ReadWriteMode>
  {
    
    using CCR2Field = TIM2_CCR2_CCR2_Values<TIM2::CCR2, 0, 32, ReadWriteMode, TIM2CCR2Base> ;
    using FieldValues = TIM2_CCR2_CCR2_Values<TIM2::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000038, 32, ReadWriteMode, TIM2CCR2Base, T...> ;

  struct TIM2CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000003C, 32, ReadWriteMode>
  {
    
    using CCR3Field = TIM2_CCR3_CCR3_Values<TIM2::CCR3, 0, 32, ReadWriteMode, TIM2CCR3Base> ;
    using FieldValues = TIM2_CCR3_CCR3_Values<TIM2::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000003C, 32, ReadWriteMode, TIM2CCR3Base, T...> ;

  struct TIM2CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000040, 32, ReadWriteMode>
  {
    
    using CCR4Field = TIM2_CCR4_CCR4_Values<TIM2::CCR4, 0, 32, ReadWriteMode, TIM2CCR4Base> ;
    using FieldValues = TIM2_CCR4_CCR4_Values<TIM2::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000040, 32, ReadWriteMode, TIM2CCR4Base, T...> ;

  struct TIM2DCRBase {} ;

  struct DCR : public RegisterBase<0x40000048, 32, ReadWriteMode>
  {
    using DBL = TIM2_DCR_DBL_Values<TIM2::DCR, 8, 5, ReadWriteMode, TIM2DCRBase> ;
    using DBA = TIM2_DCR_DBA_Values<TIM2::DCR, 0, 5, ReadWriteMode, TIM2DCRBase> ;
    using FieldValues = TIM2_DCR_DBA_Values<TIM2::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40000048, 32, ReadWriteMode, TIM2DCRBase, T...> ;

  struct TIM2DMARBase {} ;

  struct DMAR : public RegisterBase<0x4000004C, 32, ReadWriteMode>
  {
    using DMAB = TIM2_DMAR_DMAB_Values<TIM2::DMAR, 0, 16, ReadWriteMode, TIM2DMARBase> ;
    using FieldValues = TIM2_DMAR_DMAB_Values<TIM2::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4000004C, 32, ReadWriteMode, TIM2DMARBase, T...> ;

  struct TIM2ORBase {} ;

  struct OR : public RegisterBase<0x40000050, 32, ReadWriteMode>
  {
    using ITR1_RMP = TIM2_OR_ITR1_RMP_Values<TIM2::OR, 10, 2, ReadWriteMode, TIM2ORBase> ;
    using FieldValues = TIM2_OR_ITR1_RMP_Values<TIM2::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40000050, 32, ReadWriteMode, TIM2ORBase, T...> ;

} ;

#endif //#if !defined(TIM2REGISTERS_HPP)
