/*******************************************************************************
* Filename      : opampregisters.hpp
*
* Details       : Operational amplifiers. This header file is auto-generated for
*                 STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(OPAMPREGISTERS_HPP)
#define OPAMPREGISTERS_HPP

#include "opampfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OPAMP
{
  struct OPAMPOPAMP1_CSRBase {} ;

  struct OPAMP1_CSR : public RegisterBase<0x40007800, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP1_CSR_OPAEN_Values<OPAMP::OPAMP1_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using OPALPM = OPAMP_OPAMP1_CSR_OPALPM_Values<OPAMP::OPAMP1_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using OPAMODE = OPAMP_OPAMP1_CSR_OPAMODE_Values<OPAMP::OPAMP1_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP1_CSR_PGA_GAIN_Values<OPAMP::OPAMP1_CSR, 4, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP1_CSR_VM_SEL_Values<OPAMP::OPAMP1_CSR, 8, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP1_CSR_VP_SEL_Values<OPAMP::OPAMP1_CSR, 10, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALON = OPAMP_OPAMP1_CSR_CALON_Values<OPAMP::OPAMP1_CSR, 12, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALSEL = OPAMP_OPAMP1_CSR_CALSEL_Values<OPAMP::OPAMP1_CSR, 13, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP1_CSR_USERTRIM_Values<OPAMP::OPAMP1_CSR, 14, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALOUT = OPAMP_OPAMP1_CSR_CALOUT_Values<OPAMP::OPAMP1_CSR, 15, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using OPA_RANGE = OPAMP_OPAMP1_CSR_OPA_RANGE_Values<OPAMP::OPAMP1_CSR, 31, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using FieldValues = OPAMP_OPAMP1_CSR_OPA_RANGE_Values<OPAMP::OPAMP1_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_CSRPack  = Register<0x40007800, 32, ReadWriteMode, OPAMPOPAMP1_CSRBase, T...> ;

  struct OPAMPOPAMP1_OTRBase {} ;

  struct OPAMP1_OTR : public RegisterBase<0x40007804, 32, ReadWriteMode>
  {
    using TRIMOFFSETN = OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values<OPAMP::OPAMP1_OTR, 0, 5, ReadWriteMode, OPAMPOPAMP1_OTRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP1_OTR, 8, 5, ReadWriteMode, OPAMPOPAMP1_OTRBase> ;
    using FieldValues = OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP1_OTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_OTRPack  = Register<0x40007804, 32, ReadWriteMode, OPAMPOPAMP1_OTRBase, T...> ;

  struct OPAMPOPAMP1_LPOTRBase {} ;

  struct OPAMP1_LPOTR : public RegisterBase<0x40007808, 32, ReadWriteMode>
  {
    using TRIMLPOFFSETN = OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_Values<OPAMP::OPAMP1_LPOTR, 0, 5, ReadWriteMode, OPAMPOPAMP1_LPOTRBase> ;
    using TRIMLPOFFSETP = OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP1_LPOTR, 8, 5, ReadWriteMode, OPAMPOPAMP1_LPOTRBase> ;
    using FieldValues = OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP1_LPOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_LPOTRPack  = Register<0x40007808, 32, ReadWriteMode, OPAMPOPAMP1_LPOTRBase, T...> ;

  struct OPAMPOPAMP2_CSRBase {} ;

  struct OPAMP2_CSR : public RegisterBase<0x40007810, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP2_CSR_OPAEN_Values<OPAMP::OPAMP2_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using OPALPM = OPAMP_OPAMP2_CSR_OPALPM_Values<OPAMP::OPAMP2_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using OPAMODE = OPAMP_OPAMP2_CSR_OPAMODE_Values<OPAMP::OPAMP2_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP2_CSR_PGA_GAIN_Values<OPAMP::OPAMP2_CSR, 4, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP2_CSR_VM_SEL_Values<OPAMP::OPAMP2_CSR, 8, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP2_CSR_VP_SEL_Values<OPAMP::OPAMP2_CSR, 10, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALON = OPAMP_OPAMP2_CSR_CALON_Values<OPAMP::OPAMP2_CSR, 12, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALSEL = OPAMP_OPAMP2_CSR_CALSEL_Values<OPAMP::OPAMP2_CSR, 13, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP2_CSR_USERTRIM_Values<OPAMP::OPAMP2_CSR, 14, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALOUT = OPAMP_OPAMP2_CSR_CALOUT_Values<OPAMP::OPAMP2_CSR, 15, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using FieldValues = OPAMP_OPAMP2_CSR_CALOUT_Values<OPAMP::OPAMP2_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_CSRPack  = Register<0x40007810, 32, ReadWriteMode, OPAMPOPAMP2_CSRBase, T...> ;

  struct OPAMPOPAMP2_OTRBase {} ;

  struct OPAMP2_OTR : public RegisterBase<0x40007814, 32, ReadWriteMode>
  {
    using TRIMOFFSETN = OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values<OPAMP::OPAMP2_OTR, 0, 5, ReadWriteMode, OPAMPOPAMP2_OTRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP2_OTR, 8, 5, ReadWriteMode, OPAMPOPAMP2_OTRBase> ;
    using FieldValues = OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP2_OTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_OTRPack  = Register<0x40007814, 32, ReadWriteMode, OPAMPOPAMP2_OTRBase, T...> ;

  struct OPAMPOPAMP2_LPOTRBase {} ;

  struct OPAMP2_LPOTR : public RegisterBase<0x40007818, 32, ReadWriteMode>
  {
    using TRIMLPOFFSETN = OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_Values<OPAMP::OPAMP2_LPOTR, 0, 5, ReadWriteMode, OPAMPOPAMP2_LPOTRBase> ;
    using TRIMLPOFFSETP = OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP2_LPOTR, 8, 5, ReadWriteMode, OPAMPOPAMP2_LPOTRBase> ;
    using FieldValues = OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP2_LPOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_LPOTRPack  = Register<0x40007818, 32, ReadWriteMode, OPAMPOPAMP2_LPOTRBase, T...> ;

} ;

#endif //#if !defined(OPAMPREGISTERS_HPP)
