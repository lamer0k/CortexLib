/*******************************************************************************
* Filename      : tim6registers.hpp
*
* Details       : Basic timer. This header file is auto-generated for N32L403
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "tim6fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM6
{
  struct TIM6TIMx_CTRL1Base {} ;

  struct TIMx_CTRL1 : public RegisterBase<0x40001000, 32, ReadWriteMode>
  {
    using CNTEN = TIM6_TIMx_CTRL1_CNTEN_Values<TIM6::TIMx_CTRL1, 0, 1, ReadWriteMode, TIM6TIMx_CTRL1Base> ;
    using UPDIS = TIM6_TIMx_CTRL1_UPDIS_Values<TIM6::TIMx_CTRL1, 1, 1, ReadWriteMode, TIM6TIMx_CTRL1Base> ;
    using UPRS = TIM6_TIMx_CTRL1_UPRS_Values<TIM6::TIMx_CTRL1, 2, 1, ReadWriteMode, TIM6TIMx_CTRL1Base> ;
    using ONEPM = TIM6_TIMx_CTRL1_ONEPM_Values<TIM6::TIMx_CTRL1, 3, 1, ReadWriteMode, TIM6TIMx_CTRL1Base> ;
    using ARPEN = TIM6_TIMx_CTRL1_ARPEN_Values<TIM6::TIMx_CTRL1, 7, 1, ReadWriteMode, TIM6TIMx_CTRL1Base> ;
    using FieldValues = TIM6_TIMx_CTRL1_ARPEN_Values<TIM6::TIMx_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CTRL1Pack  = Register<0x40001000, 32, ReadWriteMode, TIM6TIMx_CTRL1Base, T...> ;

  struct TIM6TIMx_CTRL2Base {} ;

  struct TIMx_CTRL2 : public RegisterBase<0x40001004, 32, ReadWriteMode>
  {
    using MMSEL = TIM6_TIMx_CTRL2_MMSEL_Values<TIM6::TIMx_CTRL2, 4, 3, ReadWriteMode, TIM6TIMx_CTRL2Base> ;
    using FieldValues = TIM6_TIMx_CTRL2_MMSEL_Values<TIM6::TIMx_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CTRL2Pack  = Register<0x40001004, 32, ReadWriteMode, TIM6TIMx_CTRL2Base, T...> ;

  struct TIM6TIMx_DINTENBase {} ;

  struct TIMx_DINTEN : public RegisterBase<0x4000100C, 32, ReadWriteMode>
  {
    using UIEN = TIM6_TIMx_DINTEN_UIEN_Values<TIM6::TIMx_DINTEN, 0, 1, ReadWriteMode, TIM6TIMx_DINTENBase> ;
    using UDEN = TIM6_TIMx_DINTEN_UDEN_Values<TIM6::TIMx_DINTEN, 8, 1, ReadWriteMode, TIM6TIMx_DINTENBase> ;
    using FieldValues = TIM6_TIMx_DINTEN_UDEN_Values<TIM6::TIMx_DINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_DINTENPack  = Register<0x4000100C, 32, ReadWriteMode, TIM6TIMx_DINTENBase, T...> ;

  struct TIM6TIMx_STSBase {} ;

  struct TIMx_STS : public RegisterBase<0x40001010, 32, ReadWriteMode>
  {
    using UDITF = TIM6_TIMx_STS_UDITF_Values<TIM6::TIMx_STS, 0, 1, ReadWriteMode, TIM6TIMx_STSBase> ;
    using FieldValues = TIM6_TIMx_STS_UDITF_Values<TIM6::TIMx_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_STSPack  = Register<0x40001010, 32, ReadWriteMode, TIM6TIMx_STSBase, T...> ;

  struct TIM6TIMx_EVTGENBase {} ;

  struct TIMx_EVTGEN : public RegisterBase<0x40001014, 32, ReadWriteMode>
  {
    using UDGN = TIM6_TIMx_EVTGEN_UDGN_Values<TIM6::TIMx_EVTGEN, 0, 1, ReadWriteMode, TIM6TIMx_EVTGENBase> ;
    using FieldValues = TIM6_TIMx_EVTGEN_UDGN_Values<TIM6::TIMx_EVTGEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_EVTGENPack  = Register<0x40001014, 32, ReadWriteMode, TIM6TIMx_EVTGENBase, T...> ;

  struct TIM6TIMx_CNTBase {} ;

  struct TIMx_CNT : public RegisterBase<0x40001024, 32, ReadWriteMode>
  {
    using CNT = TIM6_TIMx_CNT_CNT_Values<TIM6::TIMx_CNT, 0, 16, ReadWriteMode, TIM6TIMx_CNTBase> ;
    using FieldValues = TIM6_TIMx_CNT_CNT_Values<TIM6::TIMx_CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CNTPack  = Register<0x40001024, 32, ReadWriteMode, TIM6TIMx_CNTBase, T...> ;

  struct TIM6TIMx_PSCBase {} ;

  struct TIMx_PSC : public RegisterBase<0x40001028, 32, ReadWriteMode>
  {
    using PSC = TIM6_TIMx_PSC_PSC_Values<TIM6::TIMx_PSC, 0, 16, ReadWriteMode, TIM6TIMx_PSCBase> ;
    using FieldValues = TIM6_TIMx_PSC_PSC_Values<TIM6::TIMx_PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_PSCPack  = Register<0x40001028, 32, ReadWriteMode, TIM6TIMx_PSCBase, T...> ;

  struct TIM6TIMx_ARBase {} ;

  struct TIMx_AR : public RegisterBase<0x4000102C, 32, ReadWriteMode>
  {
    using AR = TIM6_TIMx_AR_AR_Values<TIM6::TIMx_AR, 0, 16, ReadWriteMode, TIM6TIMx_ARBase> ;
    using FieldValues = TIM6_TIMx_AR_AR_Values<TIM6::TIMx_AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_ARPack  = Register<0x4000102C, 32, ReadWriteMode, TIM6TIMx_ARBase, T...> ;

} ;

