/*******************************************************************************
* Filename      : fmcregisters.hpp
*
* Details       : FMC. This header file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(FMCREGISTERS_HPP)
#define FMCREGISTERS_HPP

#include "fmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FMC
{
  struct FMCWSBase {} ;

  struct WS : public RegisterBase<0x40022000, 32, ReadWriteMode>
  {
    using WSCNT = FMC_WS_WSCNT_Values<FMC::WS, 0, 3, ReadWriteMode, FMCWSBase> ;
    using FieldValues = FMC_WS_WSCNT_Values<FMC::WS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WSPack  = Register<0x40022000, 32, ReadWriteMode, FMCWSBase, T...> ;

  struct FMCKEY0Base {} ;

  struct KEY0 : public RegisterBase<0x40022004, 32, WriteMode>
  {
    using KEY = FMC_KEY0_KEY_Values<FMC::KEY0, 0, 32, WriteMode, FMCKEY0Base> ;
    using FieldValues = FMC_KEY0_KEY_Values<FMC::KEY0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEY0Pack  = Register<0x40022004, 32, WriteMode, FMCKEY0Base, T...> ;

  struct FMCOBKEYBase {} ;

  struct OBKEY : public RegisterBase<0x40022008, 32, WriteMode>
  {
    using OBKEYField = FMC_OBKEY_OBKEY_Values<FMC::OBKEY, 0, 32, WriteMode, FMCOBKEYBase> ;
    using FieldValues = FMC_OBKEY_OBKEY_Values<FMC::OBKEY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OBKEYPack  = Register<0x40022008, 32, WriteMode, FMCOBKEYBase, T...> ;

  struct FMCSTAT0Base {} ;

  struct STAT0 : public RegisterBase<0x4002200C, 32, ReadWriteMode>
  {
    using ENDF = FMC_STAT0_ENDF_Values<FMC::STAT0, 5, 1, ReadWriteMode, FMCSTAT0Base> ;
    using WPERR = FMC_STAT0_WPERR_Values<FMC::STAT0, 4, 1, ReadWriteMode, FMCSTAT0Base> ;
    using PGERR = FMC_STAT0_PGERR_Values<FMC::STAT0, 2, 1, ReadWriteMode, FMCSTAT0Base> ;
    using BUSY = FMC_STAT0_BUSY_Values<FMC::STAT0, 0, 1, ReadMode, FMCSTAT0Base> ;
    using FieldValues = FMC_STAT0_BUSY_Values<FMC::STAT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAT0Pack  = Register<0x4002200C, 32, ReadWriteMode, FMCSTAT0Base, T...> ;

  struct FMCCTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40022010, 32, ReadWriteMode>
  {
    using ENDIE = FMC_CTL0_ENDIE_Values<FMC::CTL0, 12, 1, ReadWriteMode, FMCCTL0Base> ;
    using ERRIE = FMC_CTL0_ERRIE_Values<FMC::CTL0, 10, 1, ReadWriteMode, FMCCTL0Base> ;
    using OBWEN = FMC_CTL0_OBWEN_Values<FMC::CTL0, 9, 1, ReadWriteMode, FMCCTL0Base> ;
    using LK = FMC_CTL0_LK_Values<FMC::CTL0, 7, 1, ReadWriteMode, FMCCTL0Base> ;
    using START = FMC_CTL0_START_Values<FMC::CTL0, 6, 1, ReadWriteMode, FMCCTL0Base> ;
    using OBER = FMC_CTL0_OBER_Values<FMC::CTL0, 5, 1, ReadWriteMode, FMCCTL0Base> ;
    using OBPG = FMC_CTL0_OBPG_Values<FMC::CTL0, 4, 1, ReadWriteMode, FMCCTL0Base> ;
    using MER = FMC_CTL0_MER_Values<FMC::CTL0, 2, 1, ReadWriteMode, FMCCTL0Base> ;
    using PER = FMC_CTL0_PER_Values<FMC::CTL0, 1, 1, ReadWriteMode, FMCCTL0Base> ;
    using PG = FMC_CTL0_PG_Values<FMC::CTL0, 0, 1, ReadWriteMode, FMCCTL0Base> ;
    using FieldValues = FMC_CTL0_PG_Values<FMC::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40022010, 32, ReadWriteMode, FMCCTL0Base, T...> ;

  struct FMCADDR0Base {} ;

  struct ADDR0 : public RegisterBase<0x40022014, 32, WriteMode>
  {
    using ADDR = FMC_ADDR0_ADDR_Values<FMC::ADDR0, 0, 32, WriteMode, FMCADDR0Base> ;
    using FieldValues = FMC_ADDR0_ADDR_Values<FMC::ADDR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR0Pack  = Register<0x40022014, 32, WriteMode, FMCADDR0Base, T...> ;

  struct FMCOBSTATBase {} ;

  struct OBSTAT : public RegisterBase<0x4002201C, 32, ReadMode>
  {
    using OBERR = FMC_OBSTAT_OBERR_Values<FMC::OBSTAT, 0, 1, ReadMode, FMCOBSTATBase> ;
    using SPC = FMC_OBSTAT_SPC_Values<FMC::OBSTAT, 1, 1, ReadMode, FMCOBSTATBase> ;
    using USER = FMC_OBSTAT_USER_Values<FMC::OBSTAT, 2, 8, ReadMode, FMCOBSTATBase> ;
    using DATA = FMC_OBSTAT_DATA_Values<FMC::OBSTAT, 10, 16, ReadMode, FMCOBSTATBase> ;
    using FieldValues = FMC_OBSTAT_DATA_Values<FMC::OBSTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OBSTATPack  = Register<0x4002201C, 32, ReadMode, FMCOBSTATBase, T...> ;

  struct FMCWPBase {} ;

  struct WP : public RegisterBase<0x40022020, 32, ReadMode>
  {
    using WPField = FMC_WP_WP_Values<FMC::WP, 0, 32, ReadMode, FMCWPBase> ;
    using FieldValues = FMC_WP_WP_Values<FMC::WP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WPPack  = Register<0x40022020, 32, ReadMode, FMCWPBase, T...> ;

  struct FMCPIDBase {} ;

  struct PID : public RegisterBase<0x40022100, 32, ReadMode>
  {
    using PIDField = FMC_PID_PID_Values<FMC::PID, 0, 32, ReadMode, FMCPIDBase> ;
    using FieldValues = FMC_PID_PID_Values<FMC::PID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIDPack  = Register<0x40022100, 32, ReadMode, FMCPIDBase, T...> ;

} ;

#endif //#if !defined(FMCREGISTERS_HPP)
