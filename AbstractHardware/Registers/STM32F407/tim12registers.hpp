/*******************************************************************************
* Filename      : tim12registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(TIM12REGISTERS_HPP)
#define TIM12REGISTERS_HPP

#include "tim12fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM12
{
  struct TIM12CR1Base {} ;

  struct CR1 : public RegisterBase<0x40001800, 32, ReadWriteMode>
  {
    using CKD = TIM12_CR1_CKD_Values<TIM12::CR1, 8, 2, ReadWriteMode, TIM12CR1Base> ;
    using ARPE = TIM12_CR1_ARPE_Values<TIM12::CR1, 7, 1, ReadWriteMode, TIM12CR1Base> ;
    using OPM = TIM12_CR1_OPM_Values<TIM12::CR1, 3, 1, ReadWriteMode, TIM12CR1Base> ;
    using URS = TIM12_CR1_URS_Values<TIM12::CR1, 2, 1, ReadWriteMode, TIM12CR1Base> ;
    using UDIS = TIM12_CR1_UDIS_Values<TIM12::CR1, 1, 1, ReadWriteMode, TIM12CR1Base> ;
    using CEN = TIM12_CR1_CEN_Values<TIM12::CR1, 0, 1, ReadWriteMode, TIM12CR1Base> ;
    using FieldValues = TIM12_CR1_CEN_Values<TIM12::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40001800, 32, ReadWriteMode, TIM12CR1Base, T...> ;

  struct TIM12CR2Base {} ;

  struct CR2 : public RegisterBase<0x40001804, 32, ReadWriteMode>
  {
    using MMS = TIM12_CR2_MMS_Values<TIM12::CR2, 4, 3, ReadWriteMode, TIM12CR2Base> ;
    using FieldValues = TIM12_CR2_MMS_Values<TIM12::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40001804, 32, ReadWriteMode, TIM12CR2Base, T...> ;

  struct TIM12SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40001808, 32, ReadWriteMode>
  {
    using MSM = TIM12_SMCR_MSM_Values<TIM12::SMCR, 7, 1, ReadWriteMode, TIM12SMCRBase> ;
    using TS = TIM12_SMCR_TS_Values<TIM12::SMCR, 4, 3, ReadWriteMode, TIM12SMCRBase> ;
    using SMS = TIM12_SMCR_SMS_Values<TIM12::SMCR, 0, 3, ReadWriteMode, TIM12SMCRBase> ;
    using FieldValues = TIM12_SMCR_SMS_Values<TIM12::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40001808, 32, ReadWriteMode, TIM12SMCRBase, T...> ;

  struct TIM12DIERBase {} ;

  struct DIER : public RegisterBase<0x4000180C, 32, ReadWriteMode>
  {
    using TIE = TIM12_DIER_TIE_Values<TIM12::DIER, 6, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC2IE = TIM12_DIER_CC2IE_Values<TIM12::DIER, 2, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC1IE = TIM12_DIER_CC1IE_Values<TIM12::DIER, 1, 1, ReadWriteMode, TIM12DIERBase> ;
    using UIE = TIM12_DIER_UIE_Values<TIM12::DIER, 0, 1, ReadWriteMode, TIM12DIERBase> ;
    using FieldValues = TIM12_DIER_UIE_Values<TIM12::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000180C, 32, ReadWriteMode, TIM12DIERBase, T...> ;

  struct TIM12SRBase {} ;

  struct SR : public RegisterBase<0x40001810, 32, ReadWriteMode>
  {
    using CC2OF = TIM12_SR_CC2OF_Values<TIM12::SR, 10, 1, ReadWriteMode, TIM12SRBase> ;
    using CC1OF = TIM12_SR_CC1OF_Values<TIM12::SR, 9, 1, ReadWriteMode, TIM12SRBase> ;
    using TIF = TIM12_SR_TIF_Values<TIM12::SR, 6, 1, ReadWriteMode, TIM12SRBase> ;
    using CC2IF = TIM12_SR_CC2IF_Values<TIM12::SR, 2, 1, ReadWriteMode, TIM12SRBase> ;
    using CC1IF = TIM12_SR_CC1IF_Values<TIM12::SR, 1, 1, ReadWriteMode, TIM12SRBase> ;
    using UIF = TIM12_SR_UIF_Values<TIM12::SR, 0, 1, ReadWriteMode, TIM12SRBase> ;
    using FieldValues = TIM12_SR_UIF_Values<TIM12::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40001810, 32, ReadWriteMode, TIM12SRBase, T...> ;

  struct TIM12EGRBase {} ;

  struct EGR : public RegisterBase<0x40001814, 32, WriteMode>
  {
    using TG = TIM12_EGR_TG_Values<TIM12::EGR, 6, 1, WriteMode, TIM12EGRBase> ;
    using CC2G = TIM12_EGR_CC2G_Values<TIM12::EGR, 2, 1, WriteMode, TIM12EGRBase> ;
    using CC1G = TIM12_EGR_CC1G_Values<TIM12::EGR, 1, 1, WriteMode, TIM12EGRBase> ;
    using UG = TIM12_EGR_UG_Values<TIM12::EGR, 0, 1, WriteMode, TIM12EGRBase> ;
    using FieldValues = TIM12_EGR_UG_Values<TIM12::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40001814, 32, WriteMode, TIM12EGRBase, T...> ;

  struct TIM12CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40001818, 32, ReadWriteMode>
  {
    using OC2M = TIM12_CCMR1_Output_OC2M_Values<TIM12::CCMR1_Output, 12, 3, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC2PE = TIM12_CCMR1_Output_OC2PE_Values<TIM12::CCMR1_Output, 11, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC2FE = TIM12_CCMR1_Output_OC2FE_Values<TIM12::CCMR1_Output, 10, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using CC2S = TIM12_CCMR1_Output_CC2S_Values<TIM12::CCMR1_Output, 8, 2, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1M = TIM12_CCMR1_Output_OC1M_Values<TIM12::CCMR1_Output, 4, 3, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1PE = TIM12_CCMR1_Output_OC1PE_Values<TIM12::CCMR1_Output, 3, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1FE = TIM12_CCMR1_Output_OC1FE_Values<TIM12::CCMR1_Output, 2, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using CC1S = TIM12_CCMR1_Output_CC1S_Values<TIM12::CCMR1_Output, 0, 2, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using FieldValues = TIM12_CCMR1_Output_CC1S_Values<TIM12::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40001818, 32, ReadWriteMode, TIM12CCMR1_OutputBase, T...> ;

  struct TIM12CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40001818, 32, ReadWriteMode>
  {
    using IC2F = TIM12_CCMR1_Input_IC2F_Values<TIM12::CCMR1_Input, 12, 3, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using IC2PCS = TIM12_CCMR1_Input_IC2PCS_Values<TIM12::CCMR1_Input, 10, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using CC2S = TIM12_CCMR1_Input_CC2S_Values<TIM12::CCMR1_Input, 8, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using IC1F = TIM12_CCMR1_Input_IC1F_Values<TIM12::CCMR1_Input, 4, 3, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using ICPCS = TIM12_CCMR1_Input_ICPCS_Values<TIM12::CCMR1_Input, 2, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using CC1S = TIM12_CCMR1_Input_CC1S_Values<TIM12::CCMR1_Input, 0, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using FieldValues = TIM12_CCMR1_Input_CC1S_Values<TIM12::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40001818, 32, ReadWriteMode, TIM12CCMR1_InputBase, T...> ;

  struct TIM12CCERBase {} ;

  struct CCER : public RegisterBase<0x40001820, 32, ReadWriteMode>
  {
    using CC2NP = TIM12_CCER_CC2NP_Values<TIM12::CCER, 7, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC2P = TIM12_CCER_CC2P_Values<TIM12::CCER, 5, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC2E = TIM12_CCER_CC2E_Values<TIM12::CCER, 4, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC1NP = TIM12_CCER_CC1NP_Values<TIM12::CCER, 3, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC1P = TIM12_CCER_CC1P_Values<TIM12::CCER, 1, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC1E = TIM12_CCER_CC1E_Values<TIM12::CCER, 0, 1, ReadWriteMode, TIM12CCERBase> ;
    using FieldValues = TIM12_CCER_CC1E_Values<TIM12::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40001820, 32, ReadWriteMode, TIM12CCERBase, T...> ;

  struct TIM12CNTBase {} ;

  struct CNT : public RegisterBase<0x40001824, 32, ReadWriteMode>
  {
    using CNTField = TIM12_CNT_CNT_Values<TIM12::CNT, 0, 16, ReadWriteMode, TIM12CNTBase> ;
    using FieldValues = TIM12_CNT_CNT_Values<TIM12::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001824, 32, ReadWriteMode, TIM12CNTBase, T...> ;

  struct TIM12PSCBase {} ;

  struct PSC : public RegisterBase<0x40001828, 32, ReadWriteMode>
  {
    using PSCField = TIM12_PSC_PSC_Values<TIM12::PSC, 0, 16, ReadWriteMode, TIM12PSCBase> ;
    using FieldValues = TIM12_PSC_PSC_Values<TIM12::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001828, 32, ReadWriteMode, TIM12PSCBase, T...> ;

  struct TIM12ARRBase {} ;

  struct ARR : public RegisterBase<0x4000182C, 32, ReadWriteMode>
  {
    using ARRField = TIM12_ARR_ARR_Values<TIM12::ARR, 0, 16, ReadWriteMode, TIM12ARRBase> ;
    using FieldValues = TIM12_ARR_ARR_Values<TIM12::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000182C, 32, ReadWriteMode, TIM12ARRBase, T...> ;

  struct TIM12CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40001834, 32, ReadWriteMode>
  {
    using CCR1Field = TIM12_CCR1_CCR1_Values<TIM12::CCR1, 0, 16, ReadWriteMode, TIM12CCR1Base> ;
    using FieldValues = TIM12_CCR1_CCR1_Values<TIM12::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40001834, 32, ReadWriteMode, TIM12CCR1Base, T...> ;

  struct TIM12CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40001838, 32, ReadWriteMode>
  {
    using CCR2Field = TIM12_CCR2_CCR2_Values<TIM12::CCR2, 0, 16, ReadWriteMode, TIM12CCR2Base> ;
    using FieldValues = TIM12_CCR2_CCR2_Values<TIM12::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40001838, 32, ReadWriteMode, TIM12CCR2Base, T...> ;

} ;

#endif //#if !defined(TIM12REGISTERS_HPP)
