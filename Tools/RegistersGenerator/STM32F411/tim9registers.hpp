/*******************************************************************************
* Filename      : tim9registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM9REGISTERS_HPP)
#define TIM9REGISTERS_HPP

#include "tim9fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM9
{
  struct TIM9CR1Base {} ;

  struct CR1 : public RegisterBase<0x40014000, 32, ReadWriteMode>
  {
    using CKD = TIM9_CR1_CKD_Values<TIM9::CR1, 8, 2, ReadWriteMode, TIM9CR1Base> ;
    using ARPE = TIM9_CR1_ARPE_Values<TIM9::CR1, 7, 1, ReadWriteMode, TIM9CR1Base> ;
    using OPM = TIM9_CR1_OPM_Values<TIM9::CR1, 3, 1, ReadWriteMode, TIM9CR1Base> ;
    using URS = TIM9_CR1_URS_Values<TIM9::CR1, 2, 1, ReadWriteMode, TIM9CR1Base> ;
    using UDIS = TIM9_CR1_UDIS_Values<TIM9::CR1, 1, 1, ReadWriteMode, TIM9CR1Base> ;
    using CEN = TIM9_CR1_CEN_Values<TIM9::CR1, 0, 1, ReadWriteMode, TIM9CR1Base> ;
    using FieldValues = TIM9_CR1_CEN_Values<TIM9::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40014000, 32, ReadWriteMode, TIM9CR1Base, T...> ;

  struct TIM9CR2Base {} ;

  struct CR2 : public RegisterBase<0x40014004, 32, ReadWriteMode>
  {
    using MMS = TIM9_CR2_MMS_Values<TIM9::CR2, 4, 3, ReadWriteMode, TIM9CR2Base> ;
    using FieldValues = TIM9_CR2_MMS_Values<TIM9::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40014004, 32, ReadWriteMode, TIM9CR2Base, T...> ;

  struct TIM9SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40014008, 32, ReadWriteMode>
  {
    using MSM = TIM9_SMCR_MSM_Values<TIM9::SMCR, 7, 1, ReadWriteMode, TIM9SMCRBase> ;
    using TS = TIM9_SMCR_TS_Values<TIM9::SMCR, 4, 3, ReadWriteMode, TIM9SMCRBase> ;
    using SMS = TIM9_SMCR_SMS_Values<TIM9::SMCR, 0, 3, ReadWriteMode, TIM9SMCRBase> ;
    using FieldValues = TIM9_SMCR_SMS_Values<TIM9::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40014008, 32, ReadWriteMode, TIM9SMCRBase, T...> ;

  struct TIM9DIERBase {} ;

  struct DIER : public RegisterBase<0x4001400C, 32, ReadWriteMode>
  {
    using TIE = TIM9_DIER_TIE_Values<TIM9::DIER, 6, 1, ReadWriteMode, TIM9DIERBase> ;
    using CC2IE = TIM9_DIER_CC2IE_Values<TIM9::DIER, 2, 1, ReadWriteMode, TIM9DIERBase> ;
    using CC1IE = TIM9_DIER_CC1IE_Values<TIM9::DIER, 1, 1, ReadWriteMode, TIM9DIERBase> ;
    using UIE = TIM9_DIER_UIE_Values<TIM9::DIER, 0, 1, ReadWriteMode, TIM9DIERBase> ;
    using FieldValues = TIM9_DIER_UIE_Values<TIM9::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001400C, 32, ReadWriteMode, TIM9DIERBase, T...> ;

  struct TIM9SRBase {} ;

  struct SR : public RegisterBase<0x40014010, 32, ReadWriteMode>
  {
    using CC2OF = TIM9_SR_CC2OF_Values<TIM9::SR, 10, 1, ReadWriteMode, TIM9SRBase> ;
    using CC1OF = TIM9_SR_CC1OF_Values<TIM9::SR, 9, 1, ReadWriteMode, TIM9SRBase> ;
    using TIF = TIM9_SR_TIF_Values<TIM9::SR, 6, 1, ReadWriteMode, TIM9SRBase> ;
    using CC2IF = TIM9_SR_CC2IF_Values<TIM9::SR, 2, 1, ReadWriteMode, TIM9SRBase> ;
    using CC1IF = TIM9_SR_CC1IF_Values<TIM9::SR, 1, 1, ReadWriteMode, TIM9SRBase> ;
    using UIF = TIM9_SR_UIF_Values<TIM9::SR, 0, 1, ReadWriteMode, TIM9SRBase> ;
    using FieldValues = TIM9_SR_UIF_Values<TIM9::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40014010, 32, ReadWriteMode, TIM9SRBase, T...> ;

  struct TIM9EGRBase {} ;

  struct EGR : public RegisterBase<0x40014014, 32, WriteMode>
  {
    using TG = TIM9_EGR_TG_Values<TIM9::EGR, 6, 1, WriteMode, TIM9EGRBase> ;
    using CC2G = TIM9_EGR_CC2G_Values<TIM9::EGR, 2, 1, WriteMode, TIM9EGRBase> ;
    using CC1G = TIM9_EGR_CC1G_Values<TIM9::EGR, 1, 1, WriteMode, TIM9EGRBase> ;
    using UG = TIM9_EGR_UG_Values<TIM9::EGR, 0, 1, WriteMode, TIM9EGRBase> ;
    using FieldValues = TIM9_EGR_UG_Values<TIM9::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40014014, 32, WriteMode, TIM9EGRBase, T...> ;

  struct TIM9CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40014018, 32, ReadWriteMode>
  {
    using OC2M = TIM9_CCMR1_Output_OC2M_Values<TIM9::CCMR1_Output, 12, 3, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using OC2PE = TIM9_CCMR1_Output_OC2PE_Values<TIM9::CCMR1_Output, 11, 1, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using OC2FE = TIM9_CCMR1_Output_OC2FE_Values<TIM9::CCMR1_Output, 10, 1, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using CC2S = TIM9_CCMR1_Output_CC2S_Values<TIM9::CCMR1_Output, 8, 2, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using OC1M = TIM9_CCMR1_Output_OC1M_Values<TIM9::CCMR1_Output, 4, 3, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using OC1PE = TIM9_CCMR1_Output_OC1PE_Values<TIM9::CCMR1_Output, 3, 1, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using OC1FE = TIM9_CCMR1_Output_OC1FE_Values<TIM9::CCMR1_Output, 2, 1, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using CC1S = TIM9_CCMR1_Output_CC1S_Values<TIM9::CCMR1_Output, 0, 2, ReadWriteMode, TIM9CCMR1_OutputBase> ;
    using FieldValues = TIM9_CCMR1_Output_CC1S_Values<TIM9::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40014018, 32, ReadWriteMode, TIM9CCMR1_OutputBase, T...> ;

  struct TIM9CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40014018, 32, ReadWriteMode>
  {
    using IC2F = TIM9_CCMR1_Input_IC2F_Values<TIM9::CCMR1_Input, 12, 3, ReadWriteMode, TIM9CCMR1_InputBase> ;
    using IC2PCS = TIM9_CCMR1_Input_IC2PCS_Values<TIM9::CCMR1_Input, 10, 2, ReadWriteMode, TIM9CCMR1_InputBase> ;
    using CC2S = TIM9_CCMR1_Input_CC2S_Values<TIM9::CCMR1_Input, 8, 2, ReadWriteMode, TIM9CCMR1_InputBase> ;
    using IC1F = TIM9_CCMR1_Input_IC1F_Values<TIM9::CCMR1_Input, 4, 3, ReadWriteMode, TIM9CCMR1_InputBase> ;
    using ICPCS = TIM9_CCMR1_Input_ICPCS_Values<TIM9::CCMR1_Input, 2, 2, ReadWriteMode, TIM9CCMR1_InputBase> ;
    using CC1S = TIM9_CCMR1_Input_CC1S_Values<TIM9::CCMR1_Input, 0, 2, ReadWriteMode, TIM9CCMR1_InputBase> ;
    using FieldValues = TIM9_CCMR1_Input_CC1S_Values<TIM9::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40014018, 32, ReadWriteMode, TIM9CCMR1_InputBase, T...> ;

  struct TIM9CCERBase {} ;

  struct CCER : public RegisterBase<0x40014020, 32, ReadWriteMode>
  {
    using CC2NP = TIM9_CCER_CC2NP_Values<TIM9::CCER, 7, 1, ReadWriteMode, TIM9CCERBase> ;
    using CC2P = TIM9_CCER_CC2P_Values<TIM9::CCER, 5, 1, ReadWriteMode, TIM9CCERBase> ;
    using CC2E = TIM9_CCER_CC2E_Values<TIM9::CCER, 4, 1, ReadWriteMode, TIM9CCERBase> ;
    using CC1NP = TIM9_CCER_CC1NP_Values<TIM9::CCER, 3, 1, ReadWriteMode, TIM9CCERBase> ;
    using CC1P = TIM9_CCER_CC1P_Values<TIM9::CCER, 1, 1, ReadWriteMode, TIM9CCERBase> ;
    using CC1E = TIM9_CCER_CC1E_Values<TIM9::CCER, 0, 1, ReadWriteMode, TIM9CCERBase> ;
    using FieldValues = TIM9_CCER_CC1E_Values<TIM9::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40014020, 32, ReadWriteMode, TIM9CCERBase, T...> ;

  struct TIM9CNTBase {} ;

  struct CNT : public RegisterBase<0x40014024, 32, ReadWriteMode>
  {
    using CNTField = TIM9_CNT_CNT_Values<TIM9::CNT, 0, 16, ReadWriteMode, TIM9CNTBase> ;
    using FieldValues = TIM9_CNT_CNT_Values<TIM9::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40014024, 32, ReadWriteMode, TIM9CNTBase, T...> ;

  struct TIM9PSCBase {} ;

  struct PSC : public RegisterBase<0x40014028, 32, ReadWriteMode>
  {
    using PSCField = TIM9_PSC_PSC_Values<TIM9::PSC, 0, 16, ReadWriteMode, TIM9PSCBase> ;
    using FieldValues = TIM9_PSC_PSC_Values<TIM9::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40014028, 32, ReadWriteMode, TIM9PSCBase, T...> ;

  struct TIM9ARRBase {} ;

  struct ARR : public RegisterBase<0x4001402C, 32, ReadWriteMode>
  {
    using ARRField = TIM9_ARR_ARR_Values<TIM9::ARR, 0, 16, ReadWriteMode, TIM9ARRBase> ;
    using FieldValues = TIM9_ARR_ARR_Values<TIM9::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001402C, 32, ReadWriteMode, TIM9ARRBase, T...> ;

  struct TIM9CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40014034, 32, ReadWriteMode>
  {
    using CCR1Field = TIM9_CCR1_CCR1_Values<TIM9::CCR1, 0, 16, ReadWriteMode, TIM9CCR1Base> ;
    using FieldValues = TIM9_CCR1_CCR1_Values<TIM9::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40014034, 32, ReadWriteMode, TIM9CCR1Base, T...> ;

  struct TIM9CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40014038, 32, ReadWriteMode>
  {
    using CCR2Field = TIM9_CCR2_CCR2_Values<TIM9::CCR2, 0, 16, ReadWriteMode, TIM9CCR2Base> ;
    using FieldValues = TIM9_CCR2_CCR2_Values<TIM9::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40014038, 32, ReadWriteMode, TIM9CCR2Base, T...> ;

} ;

#endif //#if !defined(TIM9REGISTERS_HPP)
