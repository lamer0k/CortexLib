/*******************************************************************************
* Filename      : pwrregisters.hpp
*
* Details       : Power control. This header file is auto-generated for N32L403
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "pwrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PWR
{
  struct PWRPWR_CTRL1Base {} ;

  struct PWR_CTRL1 : public RegisterBase<0x40007000, 32, ReadWriteMode>
  {
    using LPMSEL = PWR_PWR_CTRL1_LPMSEL_Values<PWR::PWR_CTRL1, 0, 3, ReadWriteMode, PWRPWR_CTRL1Base> ;
    using DRBP = PWR_PWR_CTRL1_DRBP_Values<PWR::PWR_CTRL1, 8, 1, ReadWriteMode, PWRPWR_CTRL1Base> ;
    using MRSEL = PWR_PWR_CTRL1_MRSEL_Values<PWR::PWR_CTRL1, 9, 2, ReadWriteMode, PWRPWR_CTRL1Base> ;
    using LPREN = PWR_PWR_CTRL1_LPREN_Values<PWR::PWR_CTRL1, 14, 1, ReadWriteMode, PWRPWR_CTRL1Base> ;
    using FieldValues = PWR_PWR_CTRL1_LPREN_Values<PWR::PWR_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CTRL1Pack  = Register<0x40007000, 32, ReadWriteMode, PWRPWR_CTRL1Base, T...> ;

  struct PWRPWR_CTRL2Base {} ;

  struct PWR_CTRL2 : public RegisterBase<0x40007004, 32, ReadWriteMode>
  {
    using PVDEN = PWR_PWR_CTRL2_PVDEN_Values<PWR::PWR_CTRL2, 0, 1, ReadWriteMode, PWRPWR_CTRL2Base> ;
    using PLS = PWR_PWR_CTRL2_PLS_Values<PWR::PWR_CTRL2, 1, 3, ReadWriteMode, PWRPWR_CTRL2Base> ;
    using PVDFLTENL = PWR_PWR_CTRL2_PVDFLTENL_Values<PWR::PWR_CTRL2, 4, 1, ReadWriteMode, PWRPWR_CTRL2Base> ;
    using FieldValues = PWR_PWR_CTRL2_PVDFLTENL_Values<PWR::PWR_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CTRL2Pack  = Register<0x40007004, 32, ReadWriteMode, PWRPWR_CTRL2Base, T...> ;

  struct PWRPWR_CTRL3Base {} ;

  struct PWR_CTRL3 : public RegisterBase<0x40007008, 32, ReadWriteMode>
  {
    using WKUP1EN = PWR_PWR_CTRL3_WKUP1EN_Values<PWR::PWR_CTRL3, 0, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using WKUP2EN = PWR_PWR_CTRL3_WKUP2EN_Values<PWR::PWR_CTRL3, 1, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using WKUP3EN = PWR_PWR_CTRL3_WKUP3EN_Values<PWR::PWR_CTRL3, 2, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using WKUP1PS = PWR_PWR_CTRL3_WKUP1PS_Values<PWR::PWR_CTRL3, 4, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using WKUP2PS = PWR_PWR_CTRL3_WKUP2PS_Values<PWR::PWR_CTRL3, 5, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using WKUP3PS = PWR_PWR_CTRL3_WKUP3PS_Values<PWR::PWR_CTRL3, 6, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using BGDTLPR = PWR_PWR_CTRL3_BGDTLPR_Values<PWR::PWR_CTRL3, 8, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using BGDTSTP2 = PWR_PWR_CTRL3_BGDTSTP2_Values<PWR::PWR_CTRL3, 9, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using BGDTSTBY = PWR_PWR_CTRL3_BGDTSTBY_Values<PWR::PWR_CTRL3, 10, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using RAM1RET = PWR_PWR_CTRL3_RAM1RET_Values<PWR::PWR_CTRL3, 12, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using RAM2RET = PWR_PWR_CTRL3_RAM2RET_Values<PWR::PWR_CTRL3, 13, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using WKUPLEN = PWR_PWR_CTRL3_WKUPLEN_Values<PWR::PWR_CTRL3, 14, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using PBDTLPR = PWR_PWR_CTRL3_PBDTLPR_Values<PWR::PWR_CTRL3, 16, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using PBDTSTP2 = PWR_PWR_CTRL3_PBDTSTP2_Values<PWR::PWR_CTRL3, 17, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using PBDTSTBY = PWR_PWR_CTRL3_PBDTSTBY_Values<PWR::PWR_CTRL3, 18, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using PSTSTBY = PWR_PWR_CTRL3_PSTSTBY_Values<PWR::PWR_CTRL3, 20, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using PSTSTP2 = PWR_PWR_CTRL3_PSTSTP2_Values<PWR::PWR_CTRL3, 21, 1, ReadWriteMode, PWRPWR_CTRL3Base> ;
    using FieldValues = PWR_PWR_CTRL3_PSTSTP2_Values<PWR::PWR_CTRL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CTRL3Pack  = Register<0x40007008, 32, ReadWriteMode, PWRPWR_CTRL3Base, T...> ;

  struct PWRPWR_STS1Base {} ;

  struct PWR_STS1 : public RegisterBase<0x4000700C, 32, ReadMode>
  {
    using WKUPF1 = PWR_PWR_STS1_WKUPF1_Values<PWR::PWR_STS1, 0, 1, ReadMode, PWRPWR_STS1Base> ;
    using WKUPF2 = PWR_PWR_STS1_WKUPF2_Values<PWR::PWR_STS1, 1, 1, ReadMode, PWRPWR_STS1Base> ;
    using WKUPF3 = PWR_PWR_STS1_WKUPF3_Values<PWR::PWR_STS1, 2, 1, ReadMode, PWRPWR_STS1Base> ;
    using STBYF = PWR_PWR_STS1_STBYF_Values<PWR::PWR_STS1, 8, 1, ReadMode, PWRPWR_STS1Base> ;
    using IWKUPF = PWR_PWR_STS1_IWKUPF_Values<PWR::PWR_STS1, 15, 1, ReadMode, PWRPWR_STS1Base> ;
    using FieldValues = PWR_PWR_STS1_IWKUPF_Values<PWR::PWR_STS1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_STS1Pack  = Register<0x4000700C, 32, ReadMode, PWRPWR_STS1Base, T...> ;

  struct PWRPWR_STS2Base {} ;

  struct PWR_STS2 : public RegisterBase<0x40007010, 32, ReadMode>
  {
    using LPRUNF = PWR_PWR_STS2_LPRUNF_Values<PWR::PWR_STS2, 0, 1, ReadMode, PWRPWR_STS2Base> ;
    using MRF = PWR_PWR_STS2_MRF_Values<PWR::PWR_STS2, 1, 1, ReadMode, PWRPWR_STS2Base> ;
    using PVDO = PWR_PWR_STS2_PVDO_Values<PWR::PWR_STS2, 2, 1, ReadMode, PWRPWR_STS2Base> ;
    using FieldValues = PWR_PWR_STS2_PVDO_Values<PWR::PWR_STS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_STS2Pack  = Register<0x40007010, 32, ReadMode, PWRPWR_STS2Base, T...> ;

  struct PWRPWR_STSCLRBase {} ;

  struct PWR_STSCLR : public RegisterBase<0x40007014, 32, WriteMode>
  {
    using CLRWKUP1 = PWR_PWR_STSCLR_CLRWKUP1_Values<PWR::PWR_STSCLR, 0, 1, WriteMode, PWRPWR_STSCLRBase> ;
    using CLRWKUP2 = PWR_PWR_STSCLR_CLRWKUP2_Values<PWR::PWR_STSCLR, 1, 1, WriteMode, PWRPWR_STSCLRBase> ;
    using CLRWKUP3 = PWR_PWR_STSCLR_CLRWKUP3_Values<PWR::PWR_STSCLR, 2, 1, WriteMode, PWRPWR_STSCLRBase> ;
    using CLRSTBY = PWR_PWR_STSCLR_CLRSTBY_Values<PWR::PWR_STSCLR, 8, 1, WriteMode, PWRPWR_STSCLRBase> ;
    using FieldValues = PWR_PWR_STSCLR_CLRSTBY_Values<PWR::PWR_STSCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_STSCLRPack  = Register<0x40007014, 32, WriteMode, PWRPWR_STSCLRBase, T...> ;

} ;

