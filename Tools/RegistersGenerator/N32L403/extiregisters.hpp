/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : external interrupt/event controller. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "extifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EXTI
{
  struct EXTIEXTI_IMASKBase {} ;

  struct EXTI_IMASK : public RegisterBase<0x40010400, 32, ReadWriteMode>
  {
    using IMASK = EXTI_EXTI_IMASK_IMASK_Values<EXTI::EXTI_IMASK, 0, 28, ReadWriteMode, EXTIEXTI_IMASKBase> ;
    using FieldValues = EXTI_EXTI_IMASK_IMASK_Values<EXTI::EXTI_IMASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTI_IMASKPack  = Register<0x40010400, 32, ReadWriteMode, EXTIEXTI_IMASKBase, T...> ;

  struct EXTIEXTI_EMASKBase {} ;

  struct EXTI_EMASK : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using EMASK = EXTI_EXTI_EMASK_EMASK_Values<EXTI::EXTI_EMASK, 0, 28, ReadWriteMode, EXTIEXTI_EMASKBase> ;
    using FieldValues = EXTI_EXTI_EMASK_EMASK_Values<EXTI::EXTI_EMASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTI_EMASKPack  = Register<0x40010404, 32, ReadWriteMode, EXTIEXTI_EMASKBase, T...> ;

  struct EXTIEXTI_RT_CFGBase {} ;

  struct EXTI_RT_CFG : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using RT_CFG = EXTI_EXTI_RT_CFG_RT_CFG_Values<EXTI::EXTI_RT_CFG, 0, 28, ReadWriteMode, EXTIEXTI_RT_CFGBase> ;
    using FieldValues = EXTI_EXTI_RT_CFG_RT_CFG_Values<EXTI::EXTI_RT_CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTI_RT_CFGPack  = Register<0x40010408, 32, ReadWriteMode, EXTIEXTI_RT_CFGBase, T...> ;

  struct EXTIEXTI_FT_CFGBase {} ;

  struct EXTI_FT_CFG : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using FT_CFG = EXTI_EXTI_FT_CFG_FT_CFG_Values<EXTI::EXTI_FT_CFG, 0, 28, ReadWriteMode, EXTIEXTI_FT_CFGBase> ;
    using FieldValues = EXTI_EXTI_FT_CFG_FT_CFG_Values<EXTI::EXTI_FT_CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTI_FT_CFGPack  = Register<0x4001040C, 32, ReadWriteMode, EXTIEXTI_FT_CFGBase, T...> ;

  struct EXTIEXTI_SWIEBase {} ;

  struct EXTI_SWIE : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using SWIE = EXTI_EXTI_SWIE_SWIE_Values<EXTI::EXTI_SWIE, 0, 28, ReadWriteMode, EXTIEXTI_SWIEBase> ;
    using FieldValues = EXTI_EXTI_SWIE_SWIE_Values<EXTI::EXTI_SWIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTI_SWIEPack  = Register<0x40010410, 32, ReadWriteMode, EXTIEXTI_SWIEBase, T...> ;

  struct EXTIEXTI_PENDBase {} ;

  struct EXTI_PEND : public RegisterBase<0x40010414, 32, ReadWriteMode>
  {
    using PEND0 = EXTI_EXTI_PEND_PEND0_Values<EXTI::EXTI_PEND, 0, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND1 = EXTI_EXTI_PEND_PEND1_Values<EXTI::EXTI_PEND, 1, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND2 = EXTI_EXTI_PEND_PEND2_Values<EXTI::EXTI_PEND, 2, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND3 = EXTI_EXTI_PEND_PEND3_Values<EXTI::EXTI_PEND, 3, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND4 = EXTI_EXTI_PEND_PEND4_Values<EXTI::EXTI_PEND, 4, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND5 = EXTI_EXTI_PEND_PEND5_Values<EXTI::EXTI_PEND, 5, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND6 = EXTI_EXTI_PEND_PEND6_Values<EXTI::EXTI_PEND, 6, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND7 = EXTI_EXTI_PEND_PEND7_Values<EXTI::EXTI_PEND, 7, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND8 = EXTI_EXTI_PEND_PEND8_Values<EXTI::EXTI_PEND, 8, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND9 = EXTI_EXTI_PEND_PEND9_Values<EXTI::EXTI_PEND, 9, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND10 = EXTI_EXTI_PEND_PEND10_Values<EXTI::EXTI_PEND, 10, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND11 = EXTI_EXTI_PEND_PEND11_Values<EXTI::EXTI_PEND, 11, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND12 = EXTI_EXTI_PEND_PEND12_Values<EXTI::EXTI_PEND, 12, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND13 = EXTI_EXTI_PEND_PEND13_Values<EXTI::EXTI_PEND, 13, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND14 = EXTI_EXTI_PEND_PEND14_Values<EXTI::EXTI_PEND, 14, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND15 = EXTI_EXTI_PEND_PEND15_Values<EXTI::EXTI_PEND, 15, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND16 = EXTI_EXTI_PEND_PEND16_Values<EXTI::EXTI_PEND, 16, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND17 = EXTI_EXTI_PEND_PEND17_Values<EXTI::EXTI_PEND, 17, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND18 = EXTI_EXTI_PEND_PEND18_Values<EXTI::EXTI_PEND, 18, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND19 = EXTI_EXTI_PEND_PEND19_Values<EXTI::EXTI_PEND, 19, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND20 = EXTI_EXTI_PEND_PEND20_Values<EXTI::EXTI_PEND, 20, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND21 = EXTI_EXTI_PEND_PEND21_Values<EXTI::EXTI_PEND, 21, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND22 = EXTI_EXTI_PEND_PEND22_Values<EXTI::EXTI_PEND, 22, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND23 = EXTI_EXTI_PEND_PEND23_Values<EXTI::EXTI_PEND, 23, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND24 = EXTI_EXTI_PEND_PEND24_Values<EXTI::EXTI_PEND, 24, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND25 = EXTI_EXTI_PEND_PEND25_Values<EXTI::EXTI_PEND, 25, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND26 = EXTI_EXTI_PEND_PEND26_Values<EXTI::EXTI_PEND, 26, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using PEND27 = EXTI_EXTI_PEND_PEND27_Values<EXTI::EXTI_PEND, 27, 1, ReadWriteMode, EXTIEXTI_PENDBase> ;
    using FieldValues = EXTI_EXTI_PEND_PEND27_Values<EXTI::EXTI_PEND, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTI_PENDPack  = Register<0x40010414, 32, ReadWriteMode, EXTIEXTI_PENDBase, T...> ;

  struct EXTIEXTI_TS_SELBase {} ;

  struct EXTI_TS_SEL : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using TSSEL = EXTI_EXTI_TS_SEL_TSSEL_Values<EXTI::EXTI_TS_SEL, 0, 4, ReadWriteMode, EXTIEXTI_TS_SELBase> ;
    using FieldValues = EXTI_EXTI_TS_SEL_TSSEL_Values<EXTI::EXTI_TS_SEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTI_TS_SELPack  = Register<0x40010418, 32, ReadWriteMode, EXTIEXTI_TS_SELBase, T...> ;

} ;

