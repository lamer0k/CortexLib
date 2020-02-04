/*******************************************************************************
* Filename      : tim7registers.hpp
*
* Details       : Basic-timers. This header file is auto-generated for STM32F0x1
*                 device.
*
*
*******************************************************************************/

#if !defined(TIM7REGISTERS_HPP)
#define TIM7REGISTERS_HPP

#include "tim7fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM7
{
  struct TIM7CR1Base {} ;

  struct CR1 : public RegisterBase<0x40001400, 32, ReadWriteMode>
  {
    using ARPE = TIM7_CR1_ARPE_Values<TIM7::CR1, 7, 1, ReadWriteMode, TIM7CR1Base> ;
    using OPM = TIM7_CR1_OPM_Values<TIM7::CR1, 3, 1, ReadWriteMode, TIM7CR1Base> ;
    using URS = TIM7_CR1_URS_Values<TIM7::CR1, 2, 1, ReadWriteMode, TIM7CR1Base> ;
    using UDIS = TIM7_CR1_UDIS_Values<TIM7::CR1, 1, 1, ReadWriteMode, TIM7CR1Base> ;
    using CEN = TIM7_CR1_CEN_Values<TIM7::CR1, 0, 1, ReadWriteMode, TIM7CR1Base> ;
    using FieldValues = TIM7_CR1_CEN_Values<TIM7::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40001400, 32, ReadWriteMode, TIM7CR1Base, T...> ;

  struct TIM7CR2Base {} ;

  struct CR2 : public RegisterBase<0x40001404, 32, ReadWriteMode>
  {
    using MMS = TIM7_CR2_MMS_Values<TIM7::CR2, 4, 3, ReadWriteMode, TIM7CR2Base> ;
    using FieldValues = TIM7_CR2_MMS_Values<TIM7::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40001404, 32, ReadWriteMode, TIM7CR2Base, T...> ;

  struct TIM7DIERBase {} ;

  struct DIER : public RegisterBase<0x4000140C, 32, ReadWriteMode>
  {
    using UDE = TIM7_DIER_UDE_Values<TIM7::DIER, 8, 1, ReadWriteMode, TIM7DIERBase> ;
    using UIE = TIM7_DIER_UIE_Values<TIM7::DIER, 0, 1, ReadWriteMode, TIM7DIERBase> ;
    using FieldValues = TIM7_DIER_UIE_Values<TIM7::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000140C, 32, ReadWriteMode, TIM7DIERBase, T...> ;

  struct TIM7SRBase {} ;

  struct SR : public RegisterBase<0x40001410, 32, ReadWriteMode>
  {
    using UIF = TIM7_SR_UIF_Values<TIM7::SR, 0, 1, ReadWriteMode, TIM7SRBase> ;
    using FieldValues = TIM7_SR_UIF_Values<TIM7::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40001410, 32, ReadWriteMode, TIM7SRBase, T...> ;

  struct TIM7EGRBase {} ;

  struct EGR : public RegisterBase<0x40001414, 32, WriteMode>
  {
    using UG = TIM7_EGR_UG_Values<TIM7::EGR, 0, 1, WriteMode, TIM7EGRBase> ;
    using FieldValues = TIM7_EGR_UG_Values<TIM7::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40001414, 32, WriteMode, TIM7EGRBase, T...> ;

  struct TIM7CNTBase {} ;

  struct CNT : public RegisterBase<0x40001424, 32, ReadWriteMode>
  {
    using CNTField = TIM7_CNT_CNT_Values<TIM7::CNT, 0, 16, ReadWriteMode, TIM7CNTBase> ;
    using FieldValues = TIM7_CNT_CNT_Values<TIM7::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001424, 32, ReadWriteMode, TIM7CNTBase, T...> ;

  struct TIM7PSCBase {} ;

  struct PSC : public RegisterBase<0x40001428, 32, ReadWriteMode>
  {
    using PSCField = TIM7_PSC_PSC_Values<TIM7::PSC, 0, 16, ReadWriteMode, TIM7PSCBase> ;
    using FieldValues = TIM7_PSC_PSC_Values<TIM7::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001428, 32, ReadWriteMode, TIM7PSCBase, T...> ;

  struct TIM7ARRBase {} ;

  struct ARR : public RegisterBase<0x4000142C, 32, ReadWriteMode>
  {
    using ARRField = TIM7_ARR_ARR_Values<TIM7::ARR, 0, 16, ReadWriteMode, TIM7ARRBase> ;
    using FieldValues = TIM7_ARR_ARR_Values<TIM7::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000142C, 32, ReadWriteMode, TIM7ARRBase, T...> ;

} ;

#endif //#if !defined(TIM7REGISTERS_HPP)
