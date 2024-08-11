/*******************************************************************************
* Filename      : lptimregisters.hpp
*
* Details       : Low power timer control. This header file is auto-generated
*                 for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "lptimfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPTIM
{
  struct LPTIMLPTIM_INTSTSBase {} ;

  struct LPTIM_INTSTS : public RegisterBase<0x40004C00, 32, ReadMode>
  {
    using CMPM = LPTIM_LPTIM_INTSTS_CMPM_Values<LPTIM::LPTIM_INTSTS, 0, 1, ReadMode, LPTIMLPTIM_INTSTSBase> ;
    using ARRM = LPTIM_LPTIM_INTSTS_ARRM_Values<LPTIM::LPTIM_INTSTS, 1, 1, ReadMode, LPTIMLPTIM_INTSTSBase> ;
    using EXTRIG = LPTIM_LPTIM_INTSTS_EXTRIG_Values<LPTIM::LPTIM_INTSTS, 2, 1, ReadMode, LPTIMLPTIM_INTSTSBase> ;
    using CMPUPD = LPTIM_LPTIM_INTSTS_CMPUPD_Values<LPTIM::LPTIM_INTSTS, 3, 1, ReadMode, LPTIMLPTIM_INTSTSBase> ;
    using ARRUPD = LPTIM_LPTIM_INTSTS_ARRUPD_Values<LPTIM::LPTIM_INTSTS, 4, 1, ReadMode, LPTIMLPTIM_INTSTSBase> ;
    using UP = LPTIM_LPTIM_INTSTS_UP_Values<LPTIM::LPTIM_INTSTS, 5, 1, ReadMode, LPTIMLPTIM_INTSTSBase> ;
    using DOWN = LPTIM_LPTIM_INTSTS_DOWN_Values<LPTIM::LPTIM_INTSTS, 6, 1, ReadMode, LPTIMLPTIM_INTSTSBase> ;
    using FieldValues = LPTIM_LPTIM_INTSTS_DOWN_Values<LPTIM::LPTIM_INTSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_INTSTSPack  = Register<0x40004C00, 32, ReadMode, LPTIMLPTIM_INTSTSBase, T...> ;

  struct LPTIMLPTIM_INTCLRBase {} ;

  struct LPTIM_INTCLR : public RegisterBase<0x40004C04, 32, WriteMode>
  {
    using CMPMCF = LPTIM_LPTIM_INTCLR_CMPMCF_Values<LPTIM::LPTIM_INTCLR, 0, 1, WriteMode, LPTIMLPTIM_INTCLRBase> ;
    using ARRMCF = LPTIM_LPTIM_INTCLR_ARRMCF_Values<LPTIM::LPTIM_INTCLR, 1, 1, WriteMode, LPTIMLPTIM_INTCLRBase> ;
    using EXTRIGCF = LPTIM_LPTIM_INTCLR_EXTRIGCF_Values<LPTIM::LPTIM_INTCLR, 2, 1, WriteMode, LPTIMLPTIM_INTCLRBase> ;
    using CMPUPDCF = LPTIM_LPTIM_INTCLR_CMPUPDCF_Values<LPTIM::LPTIM_INTCLR, 3, 1, WriteMode, LPTIMLPTIM_INTCLRBase> ;
    using ARRUPDCF = LPTIM_LPTIM_INTCLR_ARRUPDCF_Values<LPTIM::LPTIM_INTCLR, 4, 1, WriteMode, LPTIMLPTIM_INTCLRBase> ;
    using UPCF = LPTIM_LPTIM_INTCLR_UPCF_Values<LPTIM::LPTIM_INTCLR, 5, 1, WriteMode, LPTIMLPTIM_INTCLRBase> ;
    using DOWNCF = LPTIM_LPTIM_INTCLR_DOWNCF_Values<LPTIM::LPTIM_INTCLR, 6, 1, WriteMode, LPTIMLPTIM_INTCLRBase> ;
    using FieldValues = LPTIM_LPTIM_INTCLR_DOWNCF_Values<LPTIM::LPTIM_INTCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_INTCLRPack  = Register<0x40004C04, 32, WriteMode, LPTIMLPTIM_INTCLRBase, T...> ;

  struct LPTIMLPTIM_INTENBase {} ;

  struct LPTIM_INTEN : public RegisterBase<0x40004C08, 32, ReadWriteMode>
  {
    using CMPMIE = LPTIM_LPTIM_INTEN_CMPMIE_Values<LPTIM::LPTIM_INTEN, 0, 1, ReadWriteMode, LPTIMLPTIM_INTENBase> ;
    using ARRMIE = LPTIM_LPTIM_INTEN_ARRMIE_Values<LPTIM::LPTIM_INTEN, 1, 1, ReadWriteMode, LPTIMLPTIM_INTENBase> ;
    using EXTRIGIE = LPTIM_LPTIM_INTEN_EXTRIGIE_Values<LPTIM::LPTIM_INTEN, 2, 1, ReadWriteMode, LPTIMLPTIM_INTENBase> ;
    using CMPUPDIE = LPTIM_LPTIM_INTEN_CMPUPDIE_Values<LPTIM::LPTIM_INTEN, 3, 1, ReadWriteMode, LPTIMLPTIM_INTENBase> ;
    using ARRUPDIE = LPTIM_LPTIM_INTEN_ARRUPDIE_Values<LPTIM::LPTIM_INTEN, 4, 1, ReadWriteMode, LPTIMLPTIM_INTENBase> ;
    using UPIE = LPTIM_LPTIM_INTEN_UPIE_Values<LPTIM::LPTIM_INTEN, 5, 1, ReadWriteMode, LPTIMLPTIM_INTENBase> ;
    using DOWNIE = LPTIM_LPTIM_INTEN_DOWNIE_Values<LPTIM::LPTIM_INTEN, 6, 1, ReadWriteMode, LPTIMLPTIM_INTENBase> ;
    using FieldValues = LPTIM_LPTIM_INTEN_DOWNIE_Values<LPTIM::LPTIM_INTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_INTENPack  = Register<0x40004C08, 32, ReadWriteMode, LPTIMLPTIM_INTENBase, T...> ;

  struct LPTIMLPTIM_CFGBase {} ;

  struct LPTIM_CFG : public RegisterBase<0x40004C0C, 32, ReadWriteMode>
  {
    using CLKSEL = LPTIM_LPTIM_CFG_CLKSEL_Values<LPTIM::LPTIM_CFG, 0, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using CLKPOL = LPTIM_LPTIM_CFG_CLKPOL_Values<LPTIM::LPTIM_CFG, 1, 2, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using CLKFLT = LPTIM_LPTIM_CFG_CLKFLT_Values<LPTIM::LPTIM_CFG, 3, 2, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using TRIGFLT = LPTIM_LPTIM_CFG_TRIGFLT_Values<LPTIM::LPTIM_CFG, 6, 2, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using CLKPRE = LPTIM_LPTIM_CFG_CLKPRE_Values<LPTIM::LPTIM_CFG, 9, 3, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using TRGSEL = LPTIM_LPTIM_CFG_TRGSEL_Values<LPTIM::LPTIM_CFG, 13, 3, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using TRGEN = LPTIM_LPTIM_CFG_TRGEN_Values<LPTIM::LPTIM_CFG, 17, 2, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using TIMOUTEN = LPTIM_LPTIM_CFG_TIMOUTEN_Values<LPTIM::LPTIM_CFG, 19, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using WAVE = LPTIM_LPTIM_CFG_WAVE_Values<LPTIM::LPTIM_CFG, 20, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using WAVEPOL = LPTIM_LPTIM_CFG_WAVEPOL_Values<LPTIM::LPTIM_CFG, 21, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using RELOAD = LPTIM_LPTIM_CFG_RELOAD_Values<LPTIM::LPTIM_CFG, 22, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using CNTMEN = LPTIM_LPTIM_CFG_CNTMEN_Values<LPTIM::LPTIM_CFG, 23, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using ENC = LPTIM_LPTIM_CFG_ENC_Values<LPTIM::LPTIM_CFG, 24, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using NENC = LPTIM_LPTIM_CFG_NENC_Values<LPTIM::LPTIM_CFG, 25, 1, ReadWriteMode, LPTIMLPTIM_CFGBase> ;
    using FieldValues = LPTIM_LPTIM_CFG_NENC_Values<LPTIM::LPTIM_CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_CFGPack  = Register<0x40004C0C, 32, ReadWriteMode, LPTIMLPTIM_CFGBase, T...> ;

  struct LPTIMLPTIM_CTRLBase {} ;

  struct LPTIM_CTRL : public RegisterBase<0x40004C10, 32, ReadWriteMode>
  {
    using LPTIMEN = LPTIM_LPTIM_CTRL_LPTIMEN_Values<LPTIM::LPTIM_CTRL, 0, 1, ReadWriteMode, LPTIMLPTIM_CTRLBase> ;
    using SNGMST = LPTIM_LPTIM_CTRL_SNGMST_Values<LPTIM::LPTIM_CTRL, 1, 1, ReadWriteMode, LPTIMLPTIM_CTRLBase> ;
    using TSTCM = LPTIM_LPTIM_CTRL_TSTCM_Values<LPTIM::LPTIM_CTRL, 2, 1, ReadWriteMode, LPTIMLPTIM_CTRLBase> ;
    using FieldValues = LPTIM_LPTIM_CTRL_TSTCM_Values<LPTIM::LPTIM_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_CTRLPack  = Register<0x40004C10, 32, ReadWriteMode, LPTIMLPTIM_CTRLBase, T...> ;

  struct LPTIMLPTIM_CMPBase {} ;

  struct LPTIM_CMP : public RegisterBase<0x40004C14, 32, ReadWriteMode>
  {
    using CMPVAL = LPTIM_LPTIM_CMP_CMPVAL_Values<LPTIM::LPTIM_CMP, 0, 16, ReadWriteMode, LPTIMLPTIM_CMPBase> ;
    using FieldValues = LPTIM_LPTIM_CMP_CMPVAL_Values<LPTIM::LPTIM_CMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_CMPPack  = Register<0x40004C14, 32, ReadWriteMode, LPTIMLPTIM_CMPBase, T...> ;

  struct LPTIMLPTIM_ARRBase {} ;

  struct LPTIM_ARR : public RegisterBase<0x40004C18, 32, ReadWriteMode>
  {
    using ARRVAL = LPTIM_LPTIM_ARR_ARRVAL_Values<LPTIM::LPTIM_ARR, 0, 16, ReadWriteMode, LPTIMLPTIM_ARRBase> ;
    using FieldValues = LPTIM_LPTIM_ARR_ARRVAL_Values<LPTIM::LPTIM_ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_ARRPack  = Register<0x40004C18, 32, ReadWriteMode, LPTIMLPTIM_ARRBase, T...> ;

  struct LPTIMLPTIM_CNTBase {} ;

  struct LPTIM_CNT : public RegisterBase<0x40004C1C, 32, ReadWriteMode>
  {
    using CNTVAL = LPTIM_LPTIM_CNT_CNTVAL_Values<LPTIM::LPTIM_CNT, 0, 16, ReadWriteMode, LPTIMLPTIM_CNTBase> ;
    using FieldValues = LPTIM_LPTIM_CNT_CNTVAL_Values<LPTIM::LPTIM_CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTIM_CNTPack  = Register<0x40004C1C, 32, ReadWriteMode, LPTIMLPTIM_CNTBase, T...> ;

} ;

