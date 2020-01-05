/*******************************************************************************
* Filename      : tim14registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(TIM14REGISTERS_HPP)
#define TIM14REGISTERS_HPP

#include "tim14fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM14
{
  struct TIM14CR1Base {} ;

  struct CR1 : public RegisterBase<0x40002000, 32, ReadWriteMode>
  {
    using CKD = TIM14_CR1_CKD_Values<TIM14::CR1, 8, 2, ReadWriteMode, TIM14CR1Base> ;
    using ARPE = TIM14_CR1_ARPE_Values<TIM14::CR1, 7, 1, ReadWriteMode, TIM14CR1Base> ;
    using URS = TIM14_CR1_URS_Values<TIM14::CR1, 2, 1, ReadWriteMode, TIM14CR1Base> ;
    using UDIS = TIM14_CR1_UDIS_Values<TIM14::CR1, 1, 1, ReadWriteMode, TIM14CR1Base> ;
    using CEN = TIM14_CR1_CEN_Values<TIM14::CR1, 0, 1, ReadWriteMode, TIM14CR1Base> ;
    using FieldValues = TIM14_CR1_CEN_Values<TIM14::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40002000, 32, ReadWriteMode, TIM14CR1Base, T...> ;

  struct TIM14DIERBase {} ;

  struct DIER : public RegisterBase<0x4000200C, 32, ReadWriteMode>
  {
    using CC1IE = TIM14_DIER_CC1IE_Values<TIM14::DIER, 1, 1, ReadWriteMode, TIM14DIERBase> ;
    using UIE = TIM14_DIER_UIE_Values<TIM14::DIER, 0, 1, ReadWriteMode, TIM14DIERBase> ;
    using FieldValues = TIM14_DIER_UIE_Values<TIM14::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000200C, 32, ReadWriteMode, TIM14DIERBase, T...> ;

  struct TIM14SRBase {} ;

  struct SR : public RegisterBase<0x40002010, 32, ReadWriteMode>
  {
    using CC1OF = TIM14_SR_CC1OF_Values<TIM14::SR, 9, 1, ReadWriteMode, TIM14SRBase> ;
    using CC1IF = TIM14_SR_CC1IF_Values<TIM14::SR, 1, 1, ReadWriteMode, TIM14SRBase> ;
    using UIF = TIM14_SR_UIF_Values<TIM14::SR, 0, 1, ReadWriteMode, TIM14SRBase> ;
    using FieldValues = TIM14_SR_UIF_Values<TIM14::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40002010, 32, ReadWriteMode, TIM14SRBase, T...> ;

  struct TIM14EGRBase {} ;

  struct EGR : public RegisterBase<0x40002014, 32, WriteMode>
  {
    using CC1G = TIM14_EGR_CC1G_Values<TIM14::EGR, 1, 1, WriteMode, TIM14EGRBase> ;
    using UG = TIM14_EGR_UG_Values<TIM14::EGR, 0, 1, WriteMode, TIM14EGRBase> ;
    using FieldValues = TIM14_EGR_UG_Values<TIM14::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40002014, 32, WriteMode, TIM14EGRBase, T...> ;

  struct TIM14CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40002018, 32, ReadWriteMode>
  {
    using OC1M = TIM14_CCMR1_Output_OC1M_Values<TIM14::CCMR1_Output, 4, 3, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC1PE = TIM14_CCMR1_Output_OC1PE_Values<TIM14::CCMR1_Output, 3, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC1FE = TIM14_CCMR1_Output_OC1FE_Values<TIM14::CCMR1_Output, 2, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using CC1S = TIM14_CCMR1_Output_CC1S_Values<TIM14::CCMR1_Output, 0, 2, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using FieldValues = TIM14_CCMR1_Output_CC1S_Values<TIM14::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40002018, 32, ReadWriteMode, TIM14CCMR1_OutputBase, T...> ;

  struct TIM14CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40002018, 32, ReadWriteMode>
  {
    using IC1F = TIM14_CCMR1_Input_IC1F_Values<TIM14::CCMR1_Input, 4, 4, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using ICPCS = TIM14_CCMR1_Input_ICPCS_Values<TIM14::CCMR1_Input, 2, 2, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using CC1S = TIM14_CCMR1_Input_CC1S_Values<TIM14::CCMR1_Input, 0, 2, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using FieldValues = TIM14_CCMR1_Input_CC1S_Values<TIM14::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40002018, 32, ReadWriteMode, TIM14CCMR1_InputBase, T...> ;

  struct TIM14CCERBase {} ;

  struct CCER : public RegisterBase<0x40002020, 32, ReadWriteMode>
  {
    using CC1NP = TIM14_CCER_CC1NP_Values<TIM14::CCER, 3, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC1P = TIM14_CCER_CC1P_Values<TIM14::CCER, 1, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC1E = TIM14_CCER_CC1E_Values<TIM14::CCER, 0, 1, ReadWriteMode, TIM14CCERBase> ;
    using FieldValues = TIM14_CCER_CC1E_Values<TIM14::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40002020, 32, ReadWriteMode, TIM14CCERBase, T...> ;

  struct TIM14CNTBase {} ;

  struct CNT : public RegisterBase<0x40002024, 32, ReadWriteMode>
  {
    using CNTField = TIM14_CNT_CNT_Values<TIM14::CNT, 0, 16, ReadWriteMode, TIM14CNTBase> ;
    using FieldValues = TIM14_CNT_CNT_Values<TIM14::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40002024, 32, ReadWriteMode, TIM14CNTBase, T...> ;

  struct TIM14PSCBase {} ;

  struct PSC : public RegisterBase<0x40002028, 32, ReadWriteMode>
  {
    using PSCField = TIM14_PSC_PSC_Values<TIM14::PSC, 0, 16, ReadWriteMode, TIM14PSCBase> ;
    using FieldValues = TIM14_PSC_PSC_Values<TIM14::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40002028, 32, ReadWriteMode, TIM14PSCBase, T...> ;

  struct TIM14ARRBase {} ;

  struct ARR : public RegisterBase<0x4000202C, 32, ReadWriteMode>
  {
    using ARRField = TIM14_ARR_ARR_Values<TIM14::ARR, 0, 16, ReadWriteMode, TIM14ARRBase> ;
    using FieldValues = TIM14_ARR_ARR_Values<TIM14::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000202C, 32, ReadWriteMode, TIM14ARRBase, T...> ;

  struct TIM14CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40002034, 32, ReadWriteMode>
  {
    using CCR1Field = TIM14_CCR1_CCR1_Values<TIM14::CCR1, 0, 16, ReadWriteMode, TIM14CCR1Base> ;
    using FieldValues = TIM14_CCR1_CCR1_Values<TIM14::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40002034, 32, ReadWriteMode, TIM14CCR1Base, T...> ;

} ;

#endif //#if !defined(TIM14REGISTERS_HPP)
