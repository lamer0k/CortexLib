/*******************************************************************************
* Filename      : lptim2registers.hpp
*
* Details       : Low power timer. This header file is auto-generated for
*                 STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(LPTIM2REGISTERS_HPP)
#define LPTIM2REGISTERS_HPP

#include "lptim2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPTIM2
{
  struct LPTIM2ISRBase {} ;

  struct ISR : public RegisterBase<0x40009400, 32, ReadMode>
  {
    using DOWN = LPTIM2_ISR_DOWN_Values<LPTIM2::ISR, 6, 1, ReadMode, LPTIM2ISRBase> ;
    using UP = LPTIM2_ISR_UP_Values<LPTIM2::ISR, 5, 1, ReadMode, LPTIM2ISRBase> ;
    using ARROK = LPTIM2_ISR_ARROK_Values<LPTIM2::ISR, 4, 1, ReadMode, LPTIM2ISRBase> ;
    using CMPOK = LPTIM2_ISR_CMPOK_Values<LPTIM2::ISR, 3, 1, ReadMode, LPTIM2ISRBase> ;
    using EXTTRIG = LPTIM2_ISR_EXTTRIG_Values<LPTIM2::ISR, 2, 1, ReadMode, LPTIM2ISRBase> ;
    using ARRM = LPTIM2_ISR_ARRM_Values<LPTIM2::ISR, 1, 1, ReadMode, LPTIM2ISRBase> ;
    using CMPM = LPTIM2_ISR_CMPM_Values<LPTIM2::ISR, 0, 1, ReadMode, LPTIM2ISRBase> ;
    using FieldValues = LPTIM2_ISR_CMPM_Values<LPTIM2::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40009400, 32, ReadMode, LPTIM2ISRBase, T...> ;

  struct LPTIM2ICRBase {} ;

  struct ICR : public RegisterBase<0x40009404, 32, WriteMode>
  {
    using DOWNCF = LPTIM2_ICR_DOWNCF_Values<LPTIM2::ICR, 6, 1, WriteMode, LPTIM2ICRBase> ;
    using UPCF = LPTIM2_ICR_UPCF_Values<LPTIM2::ICR, 5, 1, WriteMode, LPTIM2ICRBase> ;
    using ARROKCF = LPTIM2_ICR_ARROKCF_Values<LPTIM2::ICR, 4, 1, WriteMode, LPTIM2ICRBase> ;
    using CMPOKCF = LPTIM2_ICR_CMPOKCF_Values<LPTIM2::ICR, 3, 1, WriteMode, LPTIM2ICRBase> ;
    using EXTTRIGCF = LPTIM2_ICR_EXTTRIGCF_Values<LPTIM2::ICR, 2, 1, WriteMode, LPTIM2ICRBase> ;
    using ARRMCF = LPTIM2_ICR_ARRMCF_Values<LPTIM2::ICR, 1, 1, WriteMode, LPTIM2ICRBase> ;
    using CMPMCF = LPTIM2_ICR_CMPMCF_Values<LPTIM2::ICR, 0, 1, WriteMode, LPTIM2ICRBase> ;
    using FieldValues = LPTIM2_ICR_CMPMCF_Values<LPTIM2::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40009404, 32, WriteMode, LPTIM2ICRBase, T...> ;

  struct LPTIM2IERBase {} ;

  struct IER : public RegisterBase<0x40009408, 32, ReadWriteMode>
  {
    using DOWNIE = LPTIM2_IER_DOWNIE_Values<LPTIM2::IER, 6, 1, ReadWriteMode, LPTIM2IERBase> ;
    using UPIE = LPTIM2_IER_UPIE_Values<LPTIM2::IER, 5, 1, ReadWriteMode, LPTIM2IERBase> ;
    using ARROKIE = LPTIM2_IER_ARROKIE_Values<LPTIM2::IER, 4, 1, ReadWriteMode, LPTIM2IERBase> ;
    using CMPOKIE = LPTIM2_IER_CMPOKIE_Values<LPTIM2::IER, 3, 1, ReadWriteMode, LPTIM2IERBase> ;
    using EXTTRIGIE = LPTIM2_IER_EXTTRIGIE_Values<LPTIM2::IER, 2, 1, ReadWriteMode, LPTIM2IERBase> ;
    using ARRMIE = LPTIM2_IER_ARRMIE_Values<LPTIM2::IER, 1, 1, ReadWriteMode, LPTIM2IERBase> ;
    using CMPMIE = LPTIM2_IER_CMPMIE_Values<LPTIM2::IER, 0, 1, ReadWriteMode, LPTIM2IERBase> ;
    using FieldValues = LPTIM2_IER_CMPMIE_Values<LPTIM2::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40009408, 32, ReadWriteMode, LPTIM2IERBase, T...> ;

  struct LPTIM2CFGRBase {} ;

  struct CFGR : public RegisterBase<0x4000940C, 32, ReadWriteMode>
  {
    using ENC = LPTIM2_CFGR_ENC_Values<LPTIM2::CFGR, 24, 1, ReadWriteMode, LPTIM2CFGRBase> ;
    using COUNTMODE = LPTIM2_CFGR_COUNTMODE_Values<LPTIM2::CFGR, 23, 1, ReadWriteMode, LPTIM2CFGRBase> ;
    using PRELOAD = LPTIM2_CFGR_PRELOAD_Values<LPTIM2::CFGR, 22, 1, ReadWriteMode, LPTIM2CFGRBase> ;
    using WAVPOL = LPTIM2_CFGR_WAVPOL_Values<LPTIM2::CFGR, 21, 1, ReadWriteMode, LPTIM2CFGRBase> ;
    using WAVE = LPTIM2_CFGR_WAVE_Values<LPTIM2::CFGR, 20, 1, ReadWriteMode, LPTIM2CFGRBase> ;
    using TIMOUT = LPTIM2_CFGR_TIMOUT_Values<LPTIM2::CFGR, 19, 1, ReadWriteMode, LPTIM2CFGRBase> ;
    using TRIGEN = LPTIM2_CFGR_TRIGEN_Values<LPTIM2::CFGR, 17, 2, ReadWriteMode, LPTIM2CFGRBase> ;
    using TRIGSEL = LPTIM2_CFGR_TRIGSEL_Values<LPTIM2::CFGR, 13, 3, ReadWriteMode, LPTIM2CFGRBase> ;
    using PRESC = LPTIM2_CFGR_PRESC_Values<LPTIM2::CFGR, 9, 3, ReadWriteMode, LPTIM2CFGRBase> ;
    using TRGFLT = LPTIM2_CFGR_TRGFLT_Values<LPTIM2::CFGR, 6, 2, ReadWriteMode, LPTIM2CFGRBase> ;
    using CKFLT = LPTIM2_CFGR_CKFLT_Values<LPTIM2::CFGR, 3, 2, ReadWriteMode, LPTIM2CFGRBase> ;
    using CKPOL = LPTIM2_CFGR_CKPOL_Values<LPTIM2::CFGR, 1, 2, ReadWriteMode, LPTIM2CFGRBase> ;
    using CKSEL = LPTIM2_CFGR_CKSEL_Values<LPTIM2::CFGR, 0, 1, ReadWriteMode, LPTIM2CFGRBase> ;
    using FieldValues = LPTIM2_CFGR_CKSEL_Values<LPTIM2::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x4000940C, 32, ReadWriteMode, LPTIM2CFGRBase, T...> ;

  struct LPTIM2CRBase {} ;

  struct CR : public RegisterBase<0x40009410, 32, ReadWriteMode>
  {
    using CNTSTRT = LPTIM2_CR_CNTSTRT_Values<LPTIM2::CR, 2, 1, ReadWriteMode, LPTIM2CRBase> ;
    using SNGSTRT = LPTIM2_CR_SNGSTRT_Values<LPTIM2::CR, 1, 1, ReadWriteMode, LPTIM2CRBase> ;
    using ENABLE = LPTIM2_CR_ENABLE_Values<LPTIM2::CR, 0, 1, ReadWriteMode, LPTIM2CRBase> ;
    using FieldValues = LPTIM2_CR_ENABLE_Values<LPTIM2::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40009410, 32, ReadWriteMode, LPTIM2CRBase, T...> ;

  struct LPTIM2CMPBase {} ;

  struct CMP : public RegisterBase<0x40009414, 32, ReadWriteMode>
  {
    using CMPField = LPTIM2_CMP_CMP_Values<LPTIM2::CMP, 0, 16, ReadWriteMode, LPTIM2CMPBase> ;
    using FieldValues = LPTIM2_CMP_CMP_Values<LPTIM2::CMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMPPack  = Register<0x40009414, 32, ReadWriteMode, LPTIM2CMPBase, T...> ;

  struct LPTIM2ARRBase {} ;

  struct ARR : public RegisterBase<0x40009418, 32, ReadWriteMode>
  {
    using ARRField = LPTIM2_ARR_ARR_Values<LPTIM2::ARR, 0, 16, ReadWriteMode, LPTIM2ARRBase> ;
    using FieldValues = LPTIM2_ARR_ARR_Values<LPTIM2::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40009418, 32, ReadWriteMode, LPTIM2ARRBase, T...> ;

  struct LPTIM2CNTBase {} ;

  struct CNT : public RegisterBase<0x4000941C, 32, ReadMode>
  {
    using CNTField = LPTIM2_CNT_CNT_Values<LPTIM2::CNT, 0, 16, ReadMode, LPTIM2CNTBase> ;
    using FieldValues = LPTIM2_CNT_CNT_Values<LPTIM2::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x4000941C, 32, ReadMode, LPTIM2CNTBase, T...> ;

} ;

#endif //#if !defined(LPTIM2REGISTERS_HPP)
