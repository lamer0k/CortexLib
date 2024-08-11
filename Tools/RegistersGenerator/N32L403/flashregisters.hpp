/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : interal FLASH controller. This header file is auto-generated
*                 for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "flashfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FLASH
{
  struct FLASHFLASH_ACBase {} ;

  struct FLASH_AC : public RegisterBase<0x40022000, 32, ReadWriteMode>
  {
    using LATENCY = FLASH_FLASH_AC_LATENCY_Values<FLASH::FLASH_AC, 0, 3, ReadWriteMode, FLASHFLASH_ACBase> ;
    using PRFTBFE = FLASH_FLASH_AC_PRFTBFE_Values<FLASH::FLASH_AC, 4, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using PRFTBFS = FLASH_FLASH_AC_PRFTBFS_Values<FLASH::FLASH_AC, 5, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using ICAHRST = FLASH_FLASH_AC_ICAHRST_Values<FLASH::FLASH_AC, 6, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using ICAHEN = FLASH_FLASH_AC_ICAHEN_Values<FLASH::FLASH_AC, 7, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using LVMF = FLASH_FLASH_AC_LVMF_Values<FLASH::FLASH_AC, 8, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using LVMEN = FLASH_FLASH_AC_LVMEN_Values<FLASH::FLASH_AC, 9, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using SLMF = FLASH_FLASH_AC_SLMF_Values<FLASH::FLASH_AC, 10, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using SLMEN = FLASH_FLASH_AC_SLMEN_Values<FLASH::FLASH_AC, 11, 1, ReadWriteMode, FLASHFLASH_ACBase> ;
    using FieldValues = FLASH_FLASH_AC_SLMEN_Values<FLASH::FLASH_AC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_ACPack  = Register<0x40022000, 32, ReadWriteMode, FLASHFLASH_ACBase, T...> ;

  struct FLASHFLASH_KEYBase {} ;

  struct FLASH_KEY : public RegisterBase<0x40022004, 32, ReadWriteMode>
  {
    using FKEY = FLASH_FLASH_KEY_FKEY_Values<FLASH::FLASH_KEY, 0, 32, ReadWriteMode, FLASHFLASH_KEYBase> ;
    using FieldValues = FLASH_FLASH_KEY_FKEY_Values<FLASH::FLASH_KEY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_KEYPack  = Register<0x40022004, 32, ReadWriteMode, FLASHFLASH_KEYBase, T...> ;

  struct FLASHFLASH_OPTKEYBase {} ;

  struct FLASH_OPTKEY : public RegisterBase<0x40022008, 32, ReadWriteMode>
  {
    using OPTKEY = FLASH_FLASH_OPTKEY_OPTKEY_Values<FLASH::FLASH_OPTKEY, 0, 32, ReadWriteMode, FLASHFLASH_OPTKEYBase> ;
    using FieldValues = FLASH_FLASH_OPTKEY_OPTKEY_Values<FLASH::FLASH_OPTKEY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_OPTKEYPack  = Register<0x40022008, 32, ReadWriteMode, FLASHFLASH_OPTKEYBase, T...> ;

  struct FLASHFLASH_STSBase {} ;

  struct FLASH_STS : public RegisterBase<0x4002200C, 32, ReadWriteMode>
  {
    using BUSY = FLASH_FLASH_STS_BUSY_Values<FLASH::FLASH_STS, 0, 1, ReadWriteMode, FLASHFLASH_STSBase> ;
    using PGERR = FLASH_FLASH_STS_PGERR_Values<FLASH::FLASH_STS, 2, 1, ReadWriteMode, FLASHFLASH_STSBase> ;
    using PVERR = FLASH_FLASH_STS_PVERR_Values<FLASH::FLASH_STS, 3, 1, ReadWriteMode, FLASHFLASH_STSBase> ;
    using WRPERR = FLASH_FLASH_STS_WRPERR_Values<FLASH::FLASH_STS, 4, 1, ReadWriteMode, FLASHFLASH_STSBase> ;
    using EOP = FLASH_FLASH_STS_EOP_Values<FLASH::FLASH_STS, 5, 1, ReadWriteMode, FLASHFLASH_STSBase> ;
    using EVERR = FLASH_FLASH_STS_EVERR_Values<FLASH::FLASH_STS, 6, 1, ReadWriteMode, FLASHFLASH_STSBase> ;
    using ECCERR = FLASH_FLASH_STS_ECCERR_Values<FLASH::FLASH_STS, 7, 1, ReadWriteMode, FLASHFLASH_STSBase> ;
    using FieldValues = FLASH_FLASH_STS_ECCERR_Values<FLASH::FLASH_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_STSPack  = Register<0x4002200C, 32, ReadWriteMode, FLASHFLASH_STSBase, T...> ;

  struct FLASHFLASH_CTRLBase {} ;

  struct FLASH_CTRL : public RegisterBase<0x40022010, 32, ReadWriteMode>
  {
    using PG = FLASH_FLASH_CTRL_PG_Values<FLASH::FLASH_CTRL, 0, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using PER = FLASH_FLASH_CTRL_PER_Values<FLASH::FLASH_CTRL, 1, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using MER = FLASH_FLASH_CTRL_MER_Values<FLASH::FLASH_CTRL, 2, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using OPTPG = FLASH_FLASH_CTRL_OPTPG_Values<FLASH::FLASH_CTRL, 4, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using OPTER = FLASH_FLASH_CTRL_OPTER_Values<FLASH::FLASH_CTRL, 5, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using START = FLASH_FLASH_CTRL_START_Values<FLASH::FLASH_CTRL, 6, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using LOCK = FLASH_FLASH_CTRL_LOCK_Values<FLASH::FLASH_CTRL, 7, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using SMPSEL = FLASH_FLASH_CTRL_SMPSEL_Values<FLASH::FLASH_CTRL, 8, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using OPTWE = FLASH_FLASH_CTRL_OPTWE_Values<FLASH::FLASH_CTRL, 9, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using ERRITE = FLASH_FLASH_CTRL_ERRITE_Values<FLASH::FLASH_CTRL, 10, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using FERRITE = FLASH_FLASH_CTRL_FERRITE_Values<FLASH::FLASH_CTRL, 11, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using EOPITE = FLASH_FLASH_CTRL_EOPITE_Values<FLASH::FLASH_CTRL, 12, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using ECCERRITE = FLASH_FLASH_CTRL_ECCERRITE_Values<FLASH::FLASH_CTRL, 13, 1, ReadWriteMode, FLASHFLASH_CTRLBase> ;
    using FieldValues = FLASH_FLASH_CTRL_ECCERRITE_Values<FLASH::FLASH_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_CTRLPack  = Register<0x40022010, 32, ReadWriteMode, FLASHFLASH_CTRLBase, T...> ;

  struct FLASHFLASH_ADDBase {} ;

  struct FLASH_ADD : public RegisterBase<0x40022014, 32, ReadWriteMode>
  {
    using FADD = FLASH_FLASH_ADD_FADD_Values<FLASH::FLASH_ADD, 0, 32, ReadWriteMode, FLASHFLASH_ADDBase> ;
    using FieldValues = FLASH_FLASH_ADD_FADD_Values<FLASH::FLASH_ADD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_ADDPack  = Register<0x40022014, 32, ReadWriteMode, FLASHFLASH_ADDBase, T...> ;

  struct FLASHFLASH_OB2Base {} ;

  struct FLASH_OB2 : public RegisterBase<0x40022018, 32, ReadWriteMode>
  {
    using BOR_LEV = FLASH_FLASH_OB2_BOR_LEV_Values<FLASH::FLASH_OB2, 8, 3, ReadWriteMode, FLASHFLASH_OB2Base> ;
    using nBOOT1 = FLASH_FLASH_OB2_nBOOT1_Values<FLASH::FLASH_OB2, 23, 1, ReadWriteMode, FLASHFLASH_OB2Base> ;
    using nSWBOOT0 = FLASH_FLASH_OB2_nSWBOOT0_Values<FLASH::FLASH_OB2, 26, 1, ReadWriteMode, FLASHFLASH_OB2Base> ;
    using nBOOT0 = FLASH_FLASH_OB2_nBOOT0_Values<FLASH::FLASH_OB2, 27, 1, ReadWriteMode, FLASHFLASH_OB2Base> ;
    using FieldValues = FLASH_FLASH_OB2_nBOOT0_Values<FLASH::FLASH_OB2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_OB2Pack  = Register<0x40022018, 32, ReadWriteMode, FLASHFLASH_OB2Base, T...> ;

  struct FLASHFLASH_OBBase {} ;

  struct FLASH_OB : public RegisterBase<0x4002201C, 32, ReadWriteMode>
  {
    using OBERR = FLASH_FLASH_OB_OBERR_Values<FLASH::FLASH_OB, 0, 1, ReadWriteMode, FLASHFLASH_OBBase> ;
    using RDPRT1 = FLASH_FLASH_OB_RDPRT1_Values<FLASH::FLASH_OB, 1, 1, ReadWriteMode, FLASHFLASH_OBBase> ;
    using WDG_SW = FLASH_FLASH_OB_WDG_SW_Values<FLASH::FLASH_OB, 2, 1, ReadWriteMode, FLASHFLASH_OBBase> ;
    using nRST_STOP2 = FLASH_FLASH_OB_nRST_STOP2_Values<FLASH::FLASH_OB, 3, 1, ReadWriteMode, FLASHFLASH_OBBase> ;
    using nRST_STDBY = FLASH_FLASH_OB_nRST_STDBY_Values<FLASH::FLASH_OB, 4, 1, ReadWriteMode, FLASHFLASH_OBBase> ;
    using nRST_PD = FLASH_FLASH_OB_nRST_PD_Values<FLASH::FLASH_OB, 5, 1, ReadWriteMode, FLASHFLASH_OBBase> ;
    using Not_Used = FLASH_FLASH_OB_Not_Used_Values<FLASH::FLASH_OB, 6, 4, ReadWriteMode, FLASHFLASH_OBBase> ;
    using Data0 = FLASH_FLASH_OB_Data0_Values<FLASH::FLASH_OB, 10, 8, ReadWriteMode, FLASHFLASH_OBBase> ;
    using Data1 = FLASH_FLASH_OB_Data1_Values<FLASH::FLASH_OB, 18, 8, ReadWriteMode, FLASHFLASH_OBBase> ;
    using RDPRT2 = FLASH_FLASH_OB_RDPRT2_Values<FLASH::FLASH_OB, 31, 1, ReadWriteMode, FLASHFLASH_OBBase> ;
    using FieldValues = FLASH_FLASH_OB_RDPRT2_Values<FLASH::FLASH_OB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_OBPack  = Register<0x4002201C, 32, ReadWriteMode, FLASHFLASH_OBBase, T...> ;

  struct FLASHFLASH_WRPBase {} ;

  struct FLASH_WRP : public RegisterBase<0x40022020, 32, ReadWriteMode>
  {
    using WRPT = FLASH_FLASH_WRP_WRPT_Values<FLASH::FLASH_WRP, 0, 32, ReadWriteMode, FLASHFLASH_WRPBase> ;
    using FieldValues = FLASH_FLASH_WRP_WRPT_Values<FLASH::FLASH_WRP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_WRPPack  = Register<0x40022020, 32, ReadWriteMode, FLASHFLASH_WRPBase, T...> ;

  struct FLASHFLASH_ECCBase {} ;

  struct FLASH_ECC : public RegisterBase<0x40022024, 32, ReadWriteMode>
  {
    using ECCLW = FLASH_FLASH_ECC_ECCLW_Values<FLASH::FLASH_ECC, 0, 6, ReadWriteMode, FLASHFLASH_ECCBase> ;
    using ECCHW = FLASH_FLASH_ECC_ECCHW_Values<FLASH::FLASH_ECC, 8, 6, ReadWriteMode, FLASHFLASH_ECCBase> ;
    using FieldValues = FLASH_FLASH_ECC_ECCHW_Values<FLASH::FLASH_ECC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_ECCPack  = Register<0x40022024, 32, ReadWriteMode, FLASHFLASH_ECCBase, T...> ;

  struct FLASHFLASH_CAHRBase {} ;

  struct FLASH_CAHR : public RegisterBase<0x40022030, 32, ReadWriteMode>
  {
    using LOCKSTRT = FLASH_FLASH_CAHR_LOCKSTRT_Values<FLASH::FLASH_CAHR, 0, 4, ReadWriteMode, FLASHFLASH_CAHRBase> ;
    using LOCKSTOP = FLASH_FLASH_CAHR_LOCKSTOP_Values<FLASH::FLASH_CAHR, 4, 4, ReadWriteMode, FLASHFLASH_CAHRBase> ;
    using FieldValues = FLASH_FLASH_CAHR_LOCKSTOP_Values<FLASH::FLASH_CAHR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLASH_CAHRPack  = Register<0x40022030, 32, ReadWriteMode, FLASHFLASH_CAHRBase, T...> ;

} ;

