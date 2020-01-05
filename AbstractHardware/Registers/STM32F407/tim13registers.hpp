/*******************************************************************************
* Filename      : tim13registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(TIM13REGISTERS_HPP)
#define TIM13REGISTERS_HPP

#include "tim13fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM13
{
  struct TIM13CR1Base {} ;

  struct CR1 : public RegisterBase<0x40001C00, 32, ReadWriteMode>
  {
    using CKD = TIM13_CR1_CKD_Values<TIM13::CR1, 8, 2, ReadWriteMode, TIM13CR1Base> ;
    using ARPE = TIM13_CR1_ARPE_Values<TIM13::CR1, 7, 1, ReadWriteMode, TIM13CR1Base> ;
    using URS = TIM13_CR1_URS_Values<TIM13::CR1, 2, 1, ReadWriteMode, TIM13CR1Base> ;
    using UDIS = TIM13_CR1_UDIS_Values<TIM13::CR1, 1, 1, ReadWriteMode, TIM13CR1Base> ;
    using CEN = TIM13_CR1_CEN_Values<TIM13::CR1, 0, 1, ReadWriteMode, TIM13CR1Base> ;
    using FieldValues = TIM13_CR1_CEN_Values<TIM13::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40001C00, 32, ReadWriteMode, TIM13CR1Base, T...> ;

  struct TIM13DIERBase {} ;

  struct DIER : public RegisterBase<0x40001C0C, 32, ReadWriteMode>
  {
    using CC1IE = TIM13_DIER_CC1IE_Values<TIM13::DIER, 1, 1, ReadWriteMode, TIM13DIERBase> ;
    using UIE = TIM13_DIER_UIE_Values<TIM13::DIER, 0, 1, ReadWriteMode, TIM13DIERBase> ;
    using FieldValues = TIM13_DIER_UIE_Values<TIM13::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x40001C0C, 32, ReadWriteMode, TIM13DIERBase, T...> ;

  struct TIM13SRBase {} ;

  struct SR : public RegisterBase<0x40001C10, 32, ReadWriteMode>
  {
    using CC1OF = TIM13_SR_CC1OF_Values<TIM13::SR, 9, 1, ReadWriteMode, TIM13SRBase> ;
    using CC1IF = TIM13_SR_CC1IF_Values<TIM13::SR, 1, 1, ReadWriteMode, TIM13SRBase> ;
    using UIF = TIM13_SR_UIF_Values<TIM13::SR, 0, 1, ReadWriteMode, TIM13SRBase> ;
    using FieldValues = TIM13_SR_UIF_Values<TIM13::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40001C10, 32, ReadWriteMode, TIM13SRBase, T...> ;

  struct TIM13EGRBase {} ;

  struct EGR : public RegisterBase<0x40001C14, 32, WriteMode>
  {
    using CC1G = TIM13_EGR_CC1G_Values<TIM13::EGR, 1, 1, WriteMode, TIM13EGRBase> ;
    using UG = TIM13_EGR_UG_Values<TIM13::EGR, 0, 1, WriteMode, TIM13EGRBase> ;
    using FieldValues = TIM13_EGR_UG_Values<TIM13::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40001C14, 32, WriteMode, TIM13EGRBase, T...> ;

  struct TIM13CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40001C18, 32, ReadWriteMode>
  {
    using OC1M = TIM13_CCMR1_Output_OC1M_Values<TIM13::CCMR1_Output, 4, 3, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC1PE = TIM13_CCMR1_Output_OC1PE_Values<TIM13::CCMR1_Output, 3, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC1FE = TIM13_CCMR1_Output_OC1FE_Values<TIM13::CCMR1_Output, 2, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using CC1S = TIM13_CCMR1_Output_CC1S_Values<TIM13::CCMR1_Output, 0, 2, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using FieldValues = TIM13_CCMR1_Output_CC1S_Values<TIM13::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40001C18, 32, ReadWriteMode, TIM13CCMR1_OutputBase, T...> ;

  struct TIM13CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40001C18, 32, ReadWriteMode>
  {
    using IC1F = TIM13_CCMR1_Input_IC1F_Values<TIM13::CCMR1_Input, 4, 4, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using ICPCS = TIM13_CCMR1_Input_ICPCS_Values<TIM13::CCMR1_Input, 2, 2, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using CC1S = TIM13_CCMR1_Input_CC1S_Values<TIM13::CCMR1_Input, 0, 2, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using FieldValues = TIM13_CCMR1_Input_CC1S_Values<TIM13::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40001C18, 32, ReadWriteMode, TIM13CCMR1_InputBase, T...> ;

  struct TIM13CCERBase {} ;

  struct CCER : public RegisterBase<0x40001C20, 32, ReadWriteMode>
  {
    using CC1NP = TIM13_CCER_CC1NP_Values<TIM13::CCER, 3, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC1P = TIM13_CCER_CC1P_Values<TIM13::CCER, 1, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC1E = TIM13_CCER_CC1E_Values<TIM13::CCER, 0, 1, ReadWriteMode, TIM13CCERBase> ;
    using FieldValues = TIM13_CCER_CC1E_Values<TIM13::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40001C20, 32, ReadWriteMode, TIM13CCERBase, T...> ;

  struct TIM13CNTBase {} ;

  struct CNT : public RegisterBase<0x40001C24, 32, ReadWriteMode>
  {
    using CNTField = TIM13_CNT_CNT_Values<TIM13::CNT, 0, 16, ReadWriteMode, TIM13CNTBase> ;
    using FieldValues = TIM13_CNT_CNT_Values<TIM13::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001C24, 32, ReadWriteMode, TIM13CNTBase, T...> ;

  struct TIM13PSCBase {} ;

  struct PSC : public RegisterBase<0x40001C28, 32, ReadWriteMode>
  {
    using PSCField = TIM13_PSC_PSC_Values<TIM13::PSC, 0, 16, ReadWriteMode, TIM13PSCBase> ;
    using FieldValues = TIM13_PSC_PSC_Values<TIM13::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001C28, 32, ReadWriteMode, TIM13PSCBase, T...> ;

  struct TIM13ARRBase {} ;

  struct ARR : public RegisterBase<0x40001C2C, 32, ReadWriteMode>
  {
    using ARRField = TIM13_ARR_ARR_Values<TIM13::ARR, 0, 16, ReadWriteMode, TIM13ARRBase> ;
    using FieldValues = TIM13_ARR_ARR_Values<TIM13::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40001C2C, 32, ReadWriteMode, TIM13ARRBase, T...> ;

  struct TIM13CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40001C34, 32, ReadWriteMode>
  {
    using CCR1Field = TIM13_CCR1_CCR1_Values<TIM13::CCR1, 0, 16, ReadWriteMode, TIM13CCR1Base> ;
    using FieldValues = TIM13_CCR1_CCR1_Values<TIM13::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40001C34, 32, ReadWriteMode, TIM13CCR1Base, T...> ;

} ;

#endif //#if !defined(TIM13REGISTERS_HPP)
