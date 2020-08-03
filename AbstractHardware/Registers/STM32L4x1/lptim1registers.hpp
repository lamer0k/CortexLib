/*******************************************************************************
* Filename      : lptim1registers.hpp
*
* Details       : Low power timer. This header file is auto-generated for
*                 STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(LPTIM1REGISTERS_HPP)
#define LPTIM1REGISTERS_HPP

#include "lptim1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPTIM1
{
  struct LPTIM1ISRBase {} ;

  struct ISR : public RegisterBase<0x40007C00, 32, ReadMode>
  {
    using DOWN = LPTIM1_ISR_DOWN_Values<LPTIM1::ISR, 6, 1, ReadMode, LPTIM1ISRBase> ;
    using UP = LPTIM1_ISR_UP_Values<LPTIM1::ISR, 5, 1, ReadMode, LPTIM1ISRBase> ;
    using ARROK = LPTIM1_ISR_ARROK_Values<LPTIM1::ISR, 4, 1, ReadMode, LPTIM1ISRBase> ;
    using CMPOK = LPTIM1_ISR_CMPOK_Values<LPTIM1::ISR, 3, 1, ReadMode, LPTIM1ISRBase> ;
    using EXTTRIG = LPTIM1_ISR_EXTTRIG_Values<LPTIM1::ISR, 2, 1, ReadMode, LPTIM1ISRBase> ;
    using ARRM = LPTIM1_ISR_ARRM_Values<LPTIM1::ISR, 1, 1, ReadMode, LPTIM1ISRBase> ;
    using CMPM = LPTIM1_ISR_CMPM_Values<LPTIM1::ISR, 0, 1, ReadMode, LPTIM1ISRBase> ;
    using FieldValues = LPTIM1_ISR_CMPM_Values<LPTIM1::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40007C00, 32, ReadMode, LPTIM1ISRBase, T...> ;

  struct LPTIM1ICRBase {} ;

  struct ICR : public RegisterBase<0x40007C04, 32, WriteMode>
  {
    using DOWNCF = LPTIM1_ICR_DOWNCF_Values<LPTIM1::ICR, 6, 1, WriteMode, LPTIM1ICRBase> ;
    using UPCF = LPTIM1_ICR_UPCF_Values<LPTIM1::ICR, 5, 1, WriteMode, LPTIM1ICRBase> ;
    using ARROKCF = LPTIM1_ICR_ARROKCF_Values<LPTIM1::ICR, 4, 1, WriteMode, LPTIM1ICRBase> ;
    using CMPOKCF = LPTIM1_ICR_CMPOKCF_Values<LPTIM1::ICR, 3, 1, WriteMode, LPTIM1ICRBase> ;
    using EXTTRIGCF = LPTIM1_ICR_EXTTRIGCF_Values<LPTIM1::ICR, 2, 1, WriteMode, LPTIM1ICRBase> ;
    using ARRMCF = LPTIM1_ICR_ARRMCF_Values<LPTIM1::ICR, 1, 1, WriteMode, LPTIM1ICRBase> ;
    using CMPMCF = LPTIM1_ICR_CMPMCF_Values<LPTIM1::ICR, 0, 1, WriteMode, LPTIM1ICRBase> ;
    using FieldValues = LPTIM1_ICR_CMPMCF_Values<LPTIM1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40007C04, 32, WriteMode, LPTIM1ICRBase, T...> ;

  struct LPTIM1IERBase {} ;

  struct IER : public RegisterBase<0x40007C08, 32, ReadWriteMode>
  {
    using DOWNIE = LPTIM1_IER_DOWNIE_Values<LPTIM1::IER, 6, 1, ReadWriteMode, LPTIM1IERBase> ;
    using UPIE = LPTIM1_IER_UPIE_Values<LPTIM1::IER, 5, 1, ReadWriteMode, LPTIM1IERBase> ;
    using ARROKIE = LPTIM1_IER_ARROKIE_Values<LPTIM1::IER, 4, 1, ReadWriteMode, LPTIM1IERBase> ;
    using CMPOKIE = LPTIM1_IER_CMPOKIE_Values<LPTIM1::IER, 3, 1, ReadWriteMode, LPTIM1IERBase> ;
    using EXTTRIGIE = LPTIM1_IER_EXTTRIGIE_Values<LPTIM1::IER, 2, 1, ReadWriteMode, LPTIM1IERBase> ;
    using ARRMIE = LPTIM1_IER_ARRMIE_Values<LPTIM1::IER, 1, 1, ReadWriteMode, LPTIM1IERBase> ;
    using CMPMIE = LPTIM1_IER_CMPMIE_Values<LPTIM1::IER, 0, 1, ReadWriteMode, LPTIM1IERBase> ;
    using FieldValues = LPTIM1_IER_CMPMIE_Values<LPTIM1::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40007C08, 32, ReadWriteMode, LPTIM1IERBase, T...> ;

  struct LPTIM1CFGRBase {} ;

  struct CFGR : public RegisterBase<0x40007C0C, 32, ReadWriteMode>
  {
    using ENC = LPTIM1_CFGR_ENC_Values<LPTIM1::CFGR, 24, 1, ReadWriteMode, LPTIM1CFGRBase> ;
    using COUNTMODE = LPTIM1_CFGR_COUNTMODE_Values<LPTIM1::CFGR, 23, 1, ReadWriteMode, LPTIM1CFGRBase> ;
    using PRELOAD = LPTIM1_CFGR_PRELOAD_Values<LPTIM1::CFGR, 22, 1, ReadWriteMode, LPTIM1CFGRBase> ;
    using WAVPOL = LPTIM1_CFGR_WAVPOL_Values<LPTIM1::CFGR, 21, 1, ReadWriteMode, LPTIM1CFGRBase> ;
    using WAVE = LPTIM1_CFGR_WAVE_Values<LPTIM1::CFGR, 20, 1, ReadWriteMode, LPTIM1CFGRBase> ;
    using TIMOUT = LPTIM1_CFGR_TIMOUT_Values<LPTIM1::CFGR, 19, 1, ReadWriteMode, LPTIM1CFGRBase> ;
    using TRIGEN = LPTIM1_CFGR_TRIGEN_Values<LPTIM1::CFGR, 17, 2, ReadWriteMode, LPTIM1CFGRBase> ;
    using TRIGSEL = LPTIM1_CFGR_TRIGSEL_Values<LPTIM1::CFGR, 13, 3, ReadWriteMode, LPTIM1CFGRBase> ;
    using PRESC = LPTIM1_CFGR_PRESC_Values<LPTIM1::CFGR, 9, 3, ReadWriteMode, LPTIM1CFGRBase> ;
    using TRGFLT = LPTIM1_CFGR_TRGFLT_Values<LPTIM1::CFGR, 6, 2, ReadWriteMode, LPTIM1CFGRBase> ;
    using CKFLT = LPTIM1_CFGR_CKFLT_Values<LPTIM1::CFGR, 3, 2, ReadWriteMode, LPTIM1CFGRBase> ;
    using CKPOL = LPTIM1_CFGR_CKPOL_Values<LPTIM1::CFGR, 1, 2, ReadWriteMode, LPTIM1CFGRBase> ;
    using CKSEL = LPTIM1_CFGR_CKSEL_Values<LPTIM1::CFGR, 0, 1, ReadWriteMode, LPTIM1CFGRBase> ;
    using FieldValues = LPTIM1_CFGR_CKSEL_Values<LPTIM1::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x40007C0C, 32, ReadWriteMode, LPTIM1CFGRBase, T...> ;

  struct LPTIM1CRBase {} ;

  struct CR : public RegisterBase<0x40007C10, 32, ReadWriteMode>
  {
    using CNTSTRT = LPTIM1_CR_CNTSTRT_Values<LPTIM1::CR, 2, 1, ReadWriteMode, LPTIM1CRBase> ;
    using SNGSTRT = LPTIM1_CR_SNGSTRT_Values<LPTIM1::CR, 1, 1, ReadWriteMode, LPTIM1CRBase> ;
    using ENABLE = LPTIM1_CR_ENABLE_Values<LPTIM1::CR, 0, 1, ReadWriteMode, LPTIM1CRBase> ;
    using FieldValues = LPTIM1_CR_ENABLE_Values<LPTIM1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40007C10, 32, ReadWriteMode, LPTIM1CRBase, T...> ;

  struct LPTIM1CMPBase {} ;

  struct CMP : public RegisterBase<0x40007C14, 32, ReadWriteMode>
  {
    using CMPField = LPTIM1_CMP_CMP_Values<LPTIM1::CMP, 0, 16, ReadWriteMode, LPTIM1CMPBase> ;
    using FieldValues = LPTIM1_CMP_CMP_Values<LPTIM1::CMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMPPack  = Register<0x40007C14, 32, ReadWriteMode, LPTIM1CMPBase, T...> ;

  struct LPTIM1ARRBase {} ;

  struct ARR : public RegisterBase<0x40007C18, 32, ReadWriteMode>
  {
    using ARRField = LPTIM1_ARR_ARR_Values<LPTIM1::ARR, 0, 16, ReadWriteMode, LPTIM1ARRBase> ;
    using FieldValues = LPTIM1_ARR_ARR_Values<LPTIM1::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40007C18, 32, ReadWriteMode, LPTIM1ARRBase, T...> ;

  struct LPTIM1CNTBase {} ;

  struct CNT : public RegisterBase<0x40007C1C, 32, ReadMode>
  {
    using CNTField = LPTIM1_CNT_CNT_Values<LPTIM1::CNT, 0, 16, ReadMode, LPTIM1CNTBase> ;
    using FieldValues = LPTIM1_CNT_CNT_Values<LPTIM1::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40007C1C, 32, ReadMode, LPTIM1CNTBase, T...> ;

} ;

#endif //#if !defined(LPTIM1REGISTERS_HPP)
