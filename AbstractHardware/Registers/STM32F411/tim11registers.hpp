/*******************************************************************************
* Filename      : tim11registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM11REGISTERS_HPP)
#define TIM11REGISTERS_HPP

#include "tim11fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM11
{
  struct TIM11CR1Base {} ;

  struct CR1 : public RegisterBase<0x40014800, 32, ReadWriteMode>
  {
    using CKD = TIM11_CR1_CKD_Values<TIM11::CR1, 8, 2, ReadWriteMode, TIM11CR1Base> ;
    using ARPE = TIM11_CR1_ARPE_Values<TIM11::CR1, 7, 1, ReadWriteMode, TIM11CR1Base> ;
    using URS = TIM11_CR1_URS_Values<TIM11::CR1, 2, 1, ReadWriteMode, TIM11CR1Base> ;
    using UDIS = TIM11_CR1_UDIS_Values<TIM11::CR1, 1, 1, ReadWriteMode, TIM11CR1Base> ;
    using CEN = TIM11_CR1_CEN_Values<TIM11::CR1, 0, 1, ReadWriteMode, TIM11CR1Base> ;
    using FieldValues = TIM11_CR1_CEN_Values<TIM11::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40014800, 32, ReadWriteMode, TIM11CR1Base, T...> ;

  struct TIM11DIERBase {} ;

  struct DIER : public RegisterBase<0x4001480C, 32, ReadWriteMode>
  {
    using CC1IE = TIM11_DIER_CC1IE_Values<TIM11::DIER, 1, 1, ReadWriteMode, TIM11DIERBase> ;
    using UIE = TIM11_DIER_UIE_Values<TIM11::DIER, 0, 1, ReadWriteMode, TIM11DIERBase> ;
    using FieldValues = TIM11_DIER_UIE_Values<TIM11::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001480C, 32, ReadWriteMode, TIM11DIERBase, T...> ;

  struct TIM11SRBase {} ;

  struct SR : public RegisterBase<0x40014810, 32, ReadWriteMode>
  {
    using CC1OF = TIM11_SR_CC1OF_Values<TIM11::SR, 9, 1, ReadWriteMode, TIM11SRBase> ;
    using CC1IF = TIM11_SR_CC1IF_Values<TIM11::SR, 1, 1, ReadWriteMode, TIM11SRBase> ;
    using UIF = TIM11_SR_UIF_Values<TIM11::SR, 0, 1, ReadWriteMode, TIM11SRBase> ;
    using FieldValues = TIM11_SR_UIF_Values<TIM11::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40014810, 32, ReadWriteMode, TIM11SRBase, T...> ;

  struct TIM11EGRBase {} ;

  struct EGR : public RegisterBase<0x40014814, 32, WriteMode>
  {
    using CC1G = TIM11_EGR_CC1G_Values<TIM11::EGR, 1, 1, WriteMode, TIM11EGRBase> ;
    using UG = TIM11_EGR_UG_Values<TIM11::EGR, 0, 1, WriteMode, TIM11EGRBase> ;
    using FieldValues = TIM11_EGR_UG_Values<TIM11::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40014814, 32, WriteMode, TIM11EGRBase, T...> ;

  struct TIM11CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40014818, 32, ReadWriteMode>
  {
    using OC1M = TIM11_CCMR1_Output_OC1M_Values<TIM11::CCMR1_Output, 4, 3, ReadWriteMode, TIM11CCMR1_OutputBase> ;
    using OC1PE = TIM11_CCMR1_Output_OC1PE_Values<TIM11::CCMR1_Output, 3, 1, ReadWriteMode, TIM11CCMR1_OutputBase> ;
    using OC1FE = TIM11_CCMR1_Output_OC1FE_Values<TIM11::CCMR1_Output, 2, 1, ReadWriteMode, TIM11CCMR1_OutputBase> ;
    using CC1S = TIM11_CCMR1_Output_CC1S_Values<TIM11::CCMR1_Output, 0, 2, ReadWriteMode, TIM11CCMR1_OutputBase> ;
    using FieldValues = TIM11_CCMR1_Output_CC1S_Values<TIM11::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40014818, 32, ReadWriteMode, TIM11CCMR1_OutputBase, T...> ;

  struct TIM11CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40014818, 32, ReadWriteMode>
  {
    using IC1F = TIM11_CCMR1_Input_IC1F_Values<TIM11::CCMR1_Input, 4, 4, ReadWriteMode, TIM11CCMR1_InputBase> ;
    using ICPCS = TIM11_CCMR1_Input_ICPCS_Values<TIM11::CCMR1_Input, 2, 2, ReadWriteMode, TIM11CCMR1_InputBase> ;
    using CC1S = TIM11_CCMR1_Input_CC1S_Values<TIM11::CCMR1_Input, 0, 2, ReadWriteMode, TIM11CCMR1_InputBase> ;
    using FieldValues = TIM11_CCMR1_Input_CC1S_Values<TIM11::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40014818, 32, ReadWriteMode, TIM11CCMR1_InputBase, T...> ;

  struct TIM11CCERBase {} ;

  struct CCER : public RegisterBase<0x40014820, 32, ReadWriteMode>
  {
    using CC1NP = TIM11_CCER_CC1NP_Values<TIM11::CCER, 3, 1, ReadWriteMode, TIM11CCERBase> ;
    using CC1P = TIM11_CCER_CC1P_Values<TIM11::CCER, 1, 1, ReadWriteMode, TIM11CCERBase> ;
    using CC1E = TIM11_CCER_CC1E_Values<TIM11::CCER, 0, 1, ReadWriteMode, TIM11CCERBase> ;
    using FieldValues = TIM11_CCER_CC1E_Values<TIM11::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40014820, 32, ReadWriteMode, TIM11CCERBase, T...> ;

  struct TIM11CNTBase {} ;

  struct CNT : public RegisterBase<0x40014824, 32, ReadWriteMode>
  {
    using CNTField = TIM11_CNT_CNT_Values<TIM11::CNT, 0, 16, ReadWriteMode, TIM11CNTBase> ;
    using FieldValues = TIM11_CNT_CNT_Values<TIM11::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40014824, 32, ReadWriteMode, TIM11CNTBase, T...> ;

  struct TIM11PSCBase {} ;

  struct PSC : public RegisterBase<0x40014828, 32, ReadWriteMode>
  {
    using PSCField = TIM11_PSC_PSC_Values<TIM11::PSC, 0, 16, ReadWriteMode, TIM11PSCBase> ;
    using FieldValues = TIM11_PSC_PSC_Values<TIM11::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40014828, 32, ReadWriteMode, TIM11PSCBase, T...> ;

  struct TIM11ARRBase {} ;

  struct ARR : public RegisterBase<0x4001482C, 32, ReadWriteMode>
  {
    using ARRField = TIM11_ARR_ARR_Values<TIM11::ARR, 0, 16, ReadWriteMode, TIM11ARRBase> ;
    using FieldValues = TIM11_ARR_ARR_Values<TIM11::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001482C, 32, ReadWriteMode, TIM11ARRBase, T...> ;

  struct TIM11CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40014834, 32, ReadWriteMode>
  {
    using CCR1Field = TIM11_CCR1_CCR1_Values<TIM11::CCR1, 0, 16, ReadWriteMode, TIM11CCR1Base> ;
    using FieldValues = TIM11_CCR1_CCR1_Values<TIM11::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40014834, 32, ReadWriteMode, TIM11CCR1Base, T...> ;

  struct TIM11ORBase {} ;

  struct OR : public RegisterBase<0x40014850, 32, ReadWriteMode>
  {
    using RMP = TIM11_OR_RMP_Values<TIM11::OR, 0, 2, ReadWriteMode, TIM11ORBase> ;
    using FieldValues = TIM11_OR_RMP_Values<TIM11::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40014850, 32, ReadWriteMode, TIM11ORBase, T...> ;

} ;

#endif //#if !defined(TIM11REGISTERS_HPP)
