/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : Flash. This header file is auto-generated for STM32F303
*                 device.
*
*
*******************************************************************************/

#if !defined(FLASHREGISTERS_HPP)
#define FLASHREGISTERS_HPP

#include "flashfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FLASH
{
  struct FLASHACRBase {} ;

  struct ACR : public RegisterBase<0x40022000, 32, ReadWriteMode>
  {
    using LATENCY = FLASH_ACR_LATENCY_Values<FLASH::ACR, 0, 3, ReadWriteMode, FLASHACRBase> ;
    using PRFTBE = FLASH_ACR_PRFTBE_Values<FLASH::ACR, 4, 1, ReadWriteMode, FLASHACRBase> ;
    using PRFTBS = FLASH_ACR_PRFTBS_Values<FLASH::ACR, 5, 1, ReadMode, FLASHACRBase> ;
    using FieldValues = FLASH_ACR_PRFTBS_Values<FLASH::ACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACRPack  = Register<0x40022000, 32, ReadWriteMode, FLASHACRBase, T...> ;

  struct FLASHKEYRBase {} ;

  struct KEYR : public RegisterBase<0x40022004, 32, WriteMode>
  {
    using FKEYR = FLASH_KEYR_FKEYR_Values<FLASH::KEYR, 0, 32, WriteMode, FLASHKEYRBase> ;
    using FieldValues = FLASH_KEYR_FKEYR_Values<FLASH::KEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYRPack  = Register<0x40022004, 32, WriteMode, FLASHKEYRBase, T...> ;

  struct FLASHOPTKEYRBase {} ;

  struct OPTKEYR : public RegisterBase<0x40022008, 32, WriteMode>
  {
    using OPTKEYRField = FLASH_OPTKEYR_OPTKEYR_Values<FLASH::OPTKEYR, 0, 32, WriteMode, FLASHOPTKEYRBase> ;
    using FieldValues = FLASH_OPTKEYR_OPTKEYR_Values<FLASH::OPTKEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTKEYRPack  = Register<0x40022008, 32, WriteMode, FLASHOPTKEYRBase, T...> ;

  struct FLASHSRBase {} ;

  struct SR : public RegisterBase<0x4002200C, 32, ReadWriteMode>
  {
    using EOP = FLASH_SR_EOP_Values<FLASH::SR, 5, 1, ReadWriteMode, FLASHSRBase> ;
    using WRPRT = FLASH_SR_WRPRT_Values<FLASH::SR, 4, 1, ReadWriteMode, FLASHSRBase> ;
    using PGERR = FLASH_SR_PGERR_Values<FLASH::SR, 2, 1, ReadWriteMode, FLASHSRBase> ;
    using BSY = FLASH_SR_BSY_Values<FLASH::SR, 0, 1, ReadMode, FLASHSRBase> ;
    using FieldValues = FLASH_SR_BSY_Values<FLASH::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x4002200C, 32, ReadWriteMode, FLASHSRBase, T...> ;

  struct FLASHCRBase {} ;

  struct CR : public RegisterBase<0x40022010, 32, ReadWriteMode>
  {
    using FORCE_OPTLOAD = FLASH_CR_FORCE_OPTLOAD_Values<FLASH::CR, 13, 1, ReadWriteMode, FLASHCRBase> ;
    using EOPIE = FLASH_CR_EOPIE_Values<FLASH::CR, 12, 1, ReadWriteMode, FLASHCRBase> ;
    using ERRIE = FLASH_CR_ERRIE_Values<FLASH::CR, 10, 1, ReadWriteMode, FLASHCRBase> ;
    using OPTWRE = FLASH_CR_OPTWRE_Values<FLASH::CR, 9, 1, ReadWriteMode, FLASHCRBase> ;
    using LOCK = FLASH_CR_LOCK_Values<FLASH::CR, 7, 1, ReadWriteMode, FLASHCRBase> ;
    using STRT = FLASH_CR_STRT_Values<FLASH::CR, 6, 1, ReadWriteMode, FLASHCRBase> ;
    using OPTER = FLASH_CR_OPTER_Values<FLASH::CR, 5, 1, ReadWriteMode, FLASHCRBase> ;
    using OPTPG = FLASH_CR_OPTPG_Values<FLASH::CR, 4, 1, ReadWriteMode, FLASHCRBase> ;
    using MER = FLASH_CR_MER_Values<FLASH::CR, 2, 1, ReadWriteMode, FLASHCRBase> ;
    using PER = FLASH_CR_PER_Values<FLASH::CR, 1, 1, ReadWriteMode, FLASHCRBase> ;
    using PG = FLASH_CR_PG_Values<FLASH::CR, 0, 1, ReadWriteMode, FLASHCRBase> ;
    using FieldValues = FLASH_CR_PG_Values<FLASH::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40022010, 32, ReadWriteMode, FLASHCRBase, T...> ;

  struct FLASHARBase {} ;

  struct AR : public RegisterBase<0x40022014, 32, WriteMode>
  {
    using FAR = FLASH_AR_FAR_Values<FLASH::AR, 0, 32, WriteMode, FLASHARBase> ;
    using FieldValues = FLASH_AR_FAR_Values<FLASH::AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARPack  = Register<0x40022014, 32, WriteMode, FLASHARBase, T...> ;

  struct FLASHOBRBase {} ;

  struct OBR : public RegisterBase<0x4002201C, 32, ReadMode>
  {
    using OPTERR = FLASH_OBR_OPTERR_Values<FLASH::OBR, 0, 1, ReadMode, FLASHOBRBase> ;
    using LEVEL1_PROT = FLASH_OBR_LEVEL1_PROT_Values<FLASH::OBR, 1, 1, ReadMode, FLASHOBRBase> ;
    using LEVEL2_PROT = FLASH_OBR_LEVEL2_PROT_Values<FLASH::OBR, 2, 1, ReadMode, FLASHOBRBase> ;
    using WDG_SW = FLASH_OBR_WDG_SW_Values<FLASH::OBR, 8, 1, ReadMode, FLASHOBRBase> ;
    using nRST_STOP = FLASH_OBR_nRST_STOP_Values<FLASH::OBR, 9, 1, ReadMode, FLASHOBRBase> ;
    using nRST_STDBY = FLASH_OBR_nRST_STDBY_Values<FLASH::OBR, 10, 1, ReadMode, FLASHOBRBase> ;
    using BOOT1 = FLASH_OBR_BOOT1_Values<FLASH::OBR, 12, 1, ReadMode, FLASHOBRBase> ;
    using VDDA_MONITOR = FLASH_OBR_VDDA_MONITOR_Values<FLASH::OBR, 13, 1, ReadMode, FLASHOBRBase> ;
    using SRAM_PARITY_CHECK = FLASH_OBR_SRAM_PARITY_CHECK_Values<FLASH::OBR, 14, 1, ReadMode, FLASHOBRBase> ;
    using Data0 = FLASH_OBR_Data0_Values<FLASH::OBR, 16, 8, ReadMode, FLASHOBRBase> ;
    using Data1 = FLASH_OBR_Data1_Values<FLASH::OBR, 24, 8, ReadMode, FLASHOBRBase> ;
    using FieldValues = FLASH_OBR_Data1_Values<FLASH::OBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OBRPack  = Register<0x4002201C, 32, ReadMode, FLASHOBRBase, T...> ;

  struct FLASHWRPRBase {} ;

  struct WRPR : public RegisterBase<0x40022020, 32, ReadMode>
  {
    using WRP = FLASH_WRPR_WRP_Values<FLASH::WRPR, 0, 32, ReadMode, FLASHWRPRBase> ;
    using FieldValues = FLASH_WRPR_WRP_Values<FLASH::WRPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRPRPack  = Register<0x40022020, 32, ReadMode, FLASHWRPRBase, T...> ;

} ;

#endif //#if !defined(FLASHREGISTERS_HPP)
