/*******************************************************************************
* Filename      : tim6registers.hpp
*
* Details       : Basic timers. This header file is auto-generated for STM32F303
*                 device.
*
*
*******************************************************************************/

#if !defined(TIM6REGISTERS_HPP)
#define TIM6REGISTERS_HPP

#include "tim6fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM6
{
  struct TIM6CR1Base {} ;

  struct CR1 : public RegisterBase<0x40001000, 32, ReadWriteMode>
  {
    using CEN = TIM6_CR1_CEN_Values<TIM6::CR1, 0, 1, ReadWriteMode, TIM6CR1Base> ;
    using UDIS = TIM6_CR1_UDIS_Values<TIM6::CR1, 1, 1, ReadWriteMode, TIM6CR1Base> ;
    using URS = TIM6_CR1_URS_Values<TIM6::CR1, 2, 1, ReadWriteMode, TIM6CR1Base> ;
    using OPM = TIM6_CR1_OPM_Values<TIM6::CR1, 3, 1, ReadWriteMode, TIM6CR1Base> ;
    using ARPE = TIM6_CR1_ARPE_Values<TIM6::CR1, 7, 1, ReadWriteMode, TIM6CR1Base> ;
    using UIFREMAP = TIM6_CR1_UIFREMAP_Values<TIM6::CR1, 11, 1, ReadWriteMode, TIM6CR1Base> ;
    using FieldValues = TIM6_CR1_UIFREMAP_Values<TIM6::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40001000, 32, ReadWriteMode, TIM6CR1Base, T...> ;

  struct TIM6CR2Base {} ;

  struct CR2 : public RegisterBase<0x40001004, 32, ReadWriteMode>
  {
    using MMS = TIM6_CR2_MMS_Values<TIM6::CR2, 4, 3, ReadWriteMode, TIM6CR2Base> ;
    using FieldValues = TIM6_CR2_MMS_Values<TIM6::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40001004, 32, ReadWriteMode, TIM6CR2Base, T...> ;

  struct TIM6DIERBase {} ;

  struct DIER : public RegisterBase<0x4000100C, 32, ReadWriteMode>
  {
    using UDE = TIM6_DIER_UDE_Values<TIM6::DIER, 8, 1, ReadWriteMode, TIM6DIERBase> ;
    using UIE = TIM6_DIER_UIE_Values<TIM6::DIER, 0, 1, ReadWriteMode, TIM6DIERBase> ;
    using FieldValues = TIM6_DIER_UIE_Values<TIM6::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000100C, 32, ReadWriteMode, TIM6DIERBase, T...> ;

  struct TIM6SRBase {} ;

  struct SR : public RegisterBase<0x40001010, 32, ReadWriteMode>
  {
    using UIF = TIM6_SR_UIF_Values<TIM6::SR, 0, 1, ReadWriteMode, TIM6SRBase> ;
    using FieldValues = TIM6_SR_UIF_Values<TIM6::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40001010, 32, ReadWriteMode, TIM6SRBase, T...> ;

  struct TIM6EGRBase {} ;

  struct EGR : public RegisterBase<0x40001014, 32, WriteMode>
  {
    using UG = TIM6_EGR_UG_Values<TIM6::EGR, 0, 1, WriteMode, TIM6EGRBase> ;
    using FieldValues = TIM6_EGR_UG_Values<TIM6::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40001014, 32, WriteMode, TIM6EGRBase, T...> ;

  struct TIM6CNTBase {} ;

  struct CNT : public RegisterBase<0x40001024, 32, ReadWriteMode>
  {
    using CNTField = TIM6_CNT_CNT_Values<TIM6::CNT, 0, 16, ReadWriteMode, TIM6CNTBase> ;
    using UIFCPY = TIM6_CNT_UIFCPY_Values<TIM6::CNT, 31, 1, ReadMode, TIM6CNTBase> ;
    using FieldValues = TIM6_CNT_UIFCPY_Values<TIM6::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001024, 32, ReadWriteMode, TIM6CNTBase, T...> ;

  struct TIM6PSCBase {} ;

  struct PSC : public RegisterBase<0x40001028, 32, ReadWriteMode>
  {
    using PSCField = TIM6_PSC_PSC_Values<TIM6::PSC, 0, 16, ReadWriteMode, TIM6PSCBase> ;
    using FieldValues = TIM6_PSC_PSC_Values<TIM6::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001028, 32, ReadWriteMode, TIM6PSCBase, T...> ;

  struct TIM6ARRBase {} ;

  struct ARR : public RegisterBase<0x4000102C, 32, ReadWriteMode>
  {
    using ARRField = TIM6_ARR_ARR_Values<TIM6::ARR, 0, 16, ReadWriteMode, TIM6ARRBase> ;
    using FieldValues = TIM6_ARR_ARR_Values<TIM6::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000102C, 32, ReadWriteMode, TIM6ARRBase, T...> ;

} ;

#endif //#if !defined(TIM6REGISTERS_HPP)
