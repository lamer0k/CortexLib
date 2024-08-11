/*******************************************************************************
* Filename      : compregisters.hpp
*
* Details       : comparator. This header file is auto-generated for N32L403
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "compfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct COMP
{
  struct COMPCOMP_INTENBase {} ;

  struct COMP_INTEN : public RegisterBase<0x40002400, 32, ReadWriteMode>
  {
    using CMP1IEN = COMP_COMP_INTEN_CMP1IEN_Values<COMP::COMP_INTEN, 0, 1, ReadWriteMode, COMPCOMP_INTENBase> ;
    using CMP2IEN = COMP_COMP_INTEN_CMP2IEN_Values<COMP::COMP_INTEN, 1, 1, ReadWriteMode, COMPCOMP_INTENBase> ;
    using FieldValues = COMP_COMP_INTEN_CMP2IEN_Values<COMP::COMP_INTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_INTENPack  = Register<0x40002400, 32, ReadWriteMode, COMPCOMP_INTENBase, T...> ;

  struct COMPCOMP_LPCKSELBase {} ;

  struct COMP_LPCKSEL : public RegisterBase<0x40002404, 32, ReadWriteMode>
  {
    using LPCKSEL = COMP_COMP_LPCKSEL_LPCKSEL_Values<COMP::COMP_LPCKSEL, 0, 1, ReadWriteMode, COMPCOMP_LPCKSELBase> ;
    using FieldValues = COMP_COMP_LPCKSEL_LPCKSEL_Values<COMP::COMP_LPCKSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_LPCKSELPack  = Register<0x40002404, 32, ReadWriteMode, COMPCOMP_LPCKSELBase, T...> ;

  struct COMPCOMP_WINMODEBase {} ;

  struct COMP_WINMODE : public RegisterBase<0x40002408, 32, ReadWriteMode>
  {
    using CMP12MD = COMP_COMP_WINMODE_CMP12MD_Values<COMP::COMP_WINMODE, 0, 1, ReadWriteMode, COMPCOMP_WINMODEBase> ;
    using FieldValues = COMP_COMP_WINMODE_CMP12MD_Values<COMP::COMP_WINMODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_WINMODEPack  = Register<0x40002408, 32, ReadWriteMode, COMPCOMP_WINMODEBase, T...> ;

  struct COMPCOMP_LOCKBase {} ;

  struct COMP_LOCK : public RegisterBase<0x4000240C, 32, ReadWriteMode>
  {
    using CMP1LK = COMP_COMP_LOCK_CMP1LK_Values<COMP::COMP_LOCK, 0, 1, ReadWriteMode, COMPCOMP_LOCKBase> ;
    using CMP2LK = COMP_COMP_LOCK_CMP2LK_Values<COMP::COMP_LOCK, 1, 1, ReadWriteMode, COMPCOMP_LOCKBase> ;
    using FieldValues = COMP_COMP_LOCK_CMP2LK_Values<COMP::COMP_LOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_LOCKPack  = Register<0x4000240C, 32, ReadWriteMode, COMPCOMP_LOCKBase, T...> ;

  struct COMPCOMP1_CTRLBase {} ;

  struct COMP1_CTRL : public RegisterBase<0x40002410, 32, ReadWriteMode>
  {
    using EN = COMP_COMP1_CTRL_EN_Values<COMP::COMP1_CTRL, 0, 1, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using INMSEL = COMP_COMP1_CTRL_INMSEL_Values<COMP::COMP1_CTRL, 1, 3, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using INPSEL = COMP_COMP1_CTRL_INPSEL_Values<COMP::COMP1_CTRL, 5, 4, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using OUTTRG = COMP_COMP1_CTRL_OUTTRG_Values<COMP::COMP1_CTRL, 9, 4, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using POL = COMP_COMP1_CTRL_POL_Values<COMP::COMP1_CTRL, 13, 1, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using HYST = COMP_COMP1_CTRL_HYST_Values<COMP::COMP1_CTRL, 14, 2, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using BLKING = COMP_COMP1_CTRL_BLKING_Values<COMP::COMP1_CTRL, 16, 3, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using OUT = COMP_COMP1_CTRL_OUT_Values<COMP::COMP1_CTRL, 19, 1, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using INPDAC = COMP_COMP1_CTRL_INPDAC_Values<COMP::COMP1_CTRL, 20, 1, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using PWRMODE = COMP_COMP1_CTRL_PWRMODE_Values<COMP::COMP1_CTRL, 21, 1, ReadWriteMode, COMPCOMP1_CTRLBase> ;
    using FieldValues = COMP_COMP1_CTRL_PWRMODE_Values<COMP::COMP1_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP1_CTRLPack  = Register<0x40002410, 32, ReadWriteMode, COMPCOMP1_CTRLBase, T...> ;

  struct COMPCOMP1_FILCBase {} ;

  struct COMP1_FILC : public RegisterBase<0x40002414, 32, ReadWriteMode>
  {
    using FILEN = COMP_COMP1_FILC_FILEN_Values<COMP::COMP1_FILC, 0, 1, ReadWriteMode, COMPCOMP1_FILCBase> ;
    using THRESH = COMP_COMP1_FILC_THRESH_Values<COMP::COMP1_FILC, 1, 5, ReadWriteMode, COMPCOMP1_FILCBase> ;
    using SAMPW = COMP_COMP1_FILC_SAMPW_Values<COMP::COMP1_FILC, 6, 5, ReadWriteMode, COMPCOMP1_FILCBase> ;
    using FieldValues = COMP_COMP1_FILC_SAMPW_Values<COMP::COMP1_FILC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP1_FILCPack  = Register<0x40002414, 32, ReadWriteMode, COMPCOMP1_FILCBase, T...> ;

  struct COMPCOMP1_FILPBase {} ;

  struct COMP1_FILP : public RegisterBase<0x40002418, 32, ReadWriteMode>
  {
    using CLKPSC = COMP_COMP1_FILP_CLKPSC_Values<COMP::COMP1_FILP, 0, 16, ReadWriteMode, COMPCOMP1_FILPBase> ;
    using FieldValues = COMP_COMP1_FILP_CLKPSC_Values<COMP::COMP1_FILP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP1_FILPPack  = Register<0x40002418, 32, ReadWriteMode, COMPCOMP1_FILPBase, T...> ;

  struct COMPCOMP2_CTRLBase {} ;

  struct COMP2_CTRL : public RegisterBase<0x40002420, 32, ReadWriteMode>
  {
    using EN = COMP_COMP2_CTRL_EN_Values<COMP::COMP2_CTRL, 0, 1, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using INMSEL = COMP_COMP2_CTRL_INMSEL_Values<COMP::COMP2_CTRL, 1, 3, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using INPSEL = COMP_COMP2_CTRL_INPSEL_Values<COMP::COMP2_CTRL, 5, 4, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using OUTTRG = COMP_COMP2_CTRL_OUTTRG_Values<COMP::COMP2_CTRL, 9, 4, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using POL = COMP_COMP2_CTRL_POL_Values<COMP::COMP2_CTRL, 13, 1, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using HYST = COMP_COMP2_CTRL_HYST_Values<COMP::COMP2_CTRL, 14, 2, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using BLKING = COMP_COMP2_CTRL_BLKING_Values<COMP::COMP2_CTRL, 16, 3, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using OUT = COMP_COMP2_CTRL_OUT_Values<COMP::COMP2_CTRL, 19, 1, ReadWriteMode, COMPCOMP2_CTRLBase> ;
    using FieldValues = COMP_COMP2_CTRL_OUT_Values<COMP::COMP2_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP2_CTRLPack  = Register<0x40002420, 32, ReadWriteMode, COMPCOMP2_CTRLBase, T...> ;

  struct COMPCOMP2_FILCBase {} ;

  struct COMP2_FILC : public RegisterBase<0x40002424, 32, ReadWriteMode>
  {
    using FILEN = COMP_COMP2_FILC_FILEN_Values<COMP::COMP2_FILC, 0, 1, ReadWriteMode, COMPCOMP2_FILCBase> ;
    using THRESH = COMP_COMP2_FILC_THRESH_Values<COMP::COMP2_FILC, 1, 5, ReadWriteMode, COMPCOMP2_FILCBase> ;
    using SAMPW = COMP_COMP2_FILC_SAMPW_Values<COMP::COMP2_FILC, 6, 5, ReadWriteMode, COMPCOMP2_FILCBase> ;
    using FieldValues = COMP_COMP2_FILC_SAMPW_Values<COMP::COMP2_FILC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP2_FILCPack  = Register<0x40002424, 32, ReadWriteMode, COMPCOMP2_FILCBase, T...> ;

  struct COMPCOMP2_FILPBase {} ;

  struct COMP2_FILP : public RegisterBase<0x40002428, 32, ReadWriteMode>
  {
    using CLKPSC = COMP_COMP2_FILP_CLKPSC_Values<COMP::COMP2_FILP, 0, 16, ReadWriteMode, COMPCOMP2_FILPBase> ;
    using FieldValues = COMP_COMP2_FILP_CLKPSC_Values<COMP::COMP2_FILP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP2_FILPPack  = Register<0x40002428, 32, ReadWriteMode, COMPCOMP2_FILPBase, T...> ;

  struct COMPCOMP2_OSELBase {} ;

  struct COMP2_OSEL : public RegisterBase<0x4000242C, 32, ReadWriteMode>
  {
    using CMP2XO = COMP_COMP2_OSEL_CMP2XO_Values<COMP::COMP2_OSEL, 0, 1, ReadWriteMode, COMPCOMP2_OSELBase> ;
    using FieldValues = COMP_COMP2_OSEL_CMP2XO_Values<COMP::COMP2_OSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP2_OSELPack  = Register<0x4000242C, 32, ReadWriteMode, COMPCOMP2_OSELBase, T...> ;

  struct COMPCOMP_VREFSCLBase {} ;

  struct COMP_VREFSCL : public RegisterBase<0x40002430, 32, ReadWriteMode>
  {
    using VV1EN = COMP_COMP_VREFSCL_VV1EN_Values<COMP::COMP_VREFSCL, 0, 1, ReadWriteMode, COMPCOMP_VREFSCLBase> ;
    using VV1TRM = COMP_COMP_VREFSCL_VV1TRM_Values<COMP::COMP_VREFSCL, 1, 6, ReadWriteMode, COMPCOMP_VREFSCLBase> ;
    using VV2EN = COMP_COMP_VREFSCL_VV2EN_Values<COMP::COMP_VREFSCL, 7, 1, ReadWriteMode, COMPCOMP_VREFSCLBase> ;
    using VV2TRM = COMP_COMP_VREFSCL_VV2TRM_Values<COMP::COMP_VREFSCL, 8, 6, ReadWriteMode, COMPCOMP_VREFSCLBase> ;
    using FieldValues = COMP_COMP_VREFSCL_VV2TRM_Values<COMP::COMP_VREFSCL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_VREFSCLPack  = Register<0x40002430, 32, ReadWriteMode, COMPCOMP_VREFSCLBase, T...> ;

  struct COMPCOMP_TESTBase {} ;

  struct COMP_TEST : public RegisterBase<0x40002434, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_TEST_EN_Values<COMP::COMP_TEST, 0, 1, ReadWriteMode, COMPCOMP_TESTBase> ;
    using FieldValues = COMP_COMP_TEST_EN_Values<COMP::COMP_TEST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_TESTPack  = Register<0x40002434, 32, ReadWriteMode, COMPCOMP_TESTBase, T...> ;

  struct COMPCOMP_INTSTSBase {} ;

  struct COMP_INTSTS : public RegisterBase<0x40002438, 32, ReadWriteMode>
  {
    using CMP1IS = COMP_COMP_INTSTS_CMP1IS_Values<COMP::COMP_INTSTS, 0, 1, ReadWriteMode, COMPCOMP_INTSTSBase> ;
    using CMP2IS = COMP_COMP_INTSTS_CMP2IS_Values<COMP::COMP_INTSTS, 1, 1, ReadWriteMode, COMPCOMP_INTSTSBase> ;
    using FieldValues = COMP_COMP_INTSTS_CMP2IS_Values<COMP::COMP_INTSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_INTSTSPack  = Register<0x40002438, 32, ReadWriteMode, COMPCOMP_INTSTSBase, T...> ;

} ;

