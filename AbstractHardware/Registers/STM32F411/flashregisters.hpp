/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : FLASH. This header file is auto-generated for STM32F411
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

  struct ACR : public RegisterBase<0x40023C00, 32, ReadWriteMode>
  {
    using LATENCY = FLASH_ACR_LATENCY_Values<FLASH::ACR, 0, 3, ReadWriteMode, FLASHACRBase> ;
    using PRFTEN = FLASH_ACR_PRFTEN_Values<FLASH::ACR, 8, 1, ReadWriteMode, FLASHACRBase> ;
    using ICEN = FLASH_ACR_ICEN_Values<FLASH::ACR, 9, 1, ReadWriteMode, FLASHACRBase> ;
    using DCEN = FLASH_ACR_DCEN_Values<FLASH::ACR, 10, 1, ReadWriteMode, FLASHACRBase> ;
    using ICRST = FLASH_ACR_ICRST_Values<FLASH::ACR, 11, 1, WriteMode, FLASHACRBase> ;
    using DCRST = FLASH_ACR_DCRST_Values<FLASH::ACR, 12, 1, ReadWriteMode, FLASHACRBase> ;
    using FieldValues = FLASH_ACR_DCRST_Values<FLASH::ACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACRPack  = Register<0x40023C00, 32, ReadWriteMode, FLASHACRBase, T...> ;

  struct FLASHKEYRBase {} ;

  struct KEYR : public RegisterBase<0x40023C04, 32, WriteMode>
  {
    using KEY = FLASH_KEYR_KEY_Values<FLASH::KEYR, 0, 32, WriteMode, FLASHKEYRBase> ;
    using FieldValues = FLASH_KEYR_KEY_Values<FLASH::KEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYRPack  = Register<0x40023C04, 32, WriteMode, FLASHKEYRBase, T...> ;

  struct FLASHOPTKEYRBase {} ;

  struct OPTKEYR : public RegisterBase<0x40023C08, 32, WriteMode>
  {
    using OPTKEY = FLASH_OPTKEYR_OPTKEY_Values<FLASH::OPTKEYR, 0, 32, WriteMode, FLASHOPTKEYRBase> ;
    using FieldValues = FLASH_OPTKEYR_OPTKEY_Values<FLASH::OPTKEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTKEYRPack  = Register<0x40023C08, 32, WriteMode, FLASHOPTKEYRBase, T...> ;

  struct FLASHSRBase {} ;

  struct SR : public RegisterBase<0x40023C0C, 32, ReadWriteMode>
  {
    using EOP = FLASH_SR_EOP_Values<FLASH::SR, 0, 1, ReadWriteMode, FLASHSRBase> ;
    using OPERR = FLASH_SR_OPERR_Values<FLASH::SR, 1, 1, ReadWriteMode, FLASHSRBase> ;
    using WRPERR = FLASH_SR_WRPERR_Values<FLASH::SR, 4, 1, ReadWriteMode, FLASHSRBase> ;
    using PGAERR = FLASH_SR_PGAERR_Values<FLASH::SR, 5, 1, ReadWriteMode, FLASHSRBase> ;
    using PGPERR = FLASH_SR_PGPERR_Values<FLASH::SR, 6, 1, ReadWriteMode, FLASHSRBase> ;
    using PGSERR = FLASH_SR_PGSERR_Values<FLASH::SR, 7, 1, ReadWriteMode, FLASHSRBase> ;
    using BSY = FLASH_SR_BSY_Values<FLASH::SR, 16, 1, ReadMode, FLASHSRBase> ;
    using FieldValues = FLASH_SR_BSY_Values<FLASH::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40023C0C, 32, ReadWriteMode, FLASHSRBase, T...> ;

  struct FLASHCRBase {} ;

  struct CR : public RegisterBase<0x40023C10, 32, ReadWriteMode>
  {
    using PG = FLASH_CR_PG_Values<FLASH::CR, 0, 1, ReadWriteMode, FLASHCRBase> ;
    using SER = FLASH_CR_SER_Values<FLASH::CR, 1, 1, ReadWriteMode, FLASHCRBase> ;
    using MER = FLASH_CR_MER_Values<FLASH::CR, 2, 1, ReadWriteMode, FLASHCRBase> ;
    using SNB = FLASH_CR_SNB_Values<FLASH::CR, 3, 4, ReadWriteMode, FLASHCRBase> ;
    using PSIZE = FLASH_CR_PSIZE_Values<FLASH::CR, 8, 2, ReadWriteMode, FLASHCRBase> ;
    using STRT = FLASH_CR_STRT_Values<FLASH::CR, 16, 1, ReadWriteMode, FLASHCRBase> ;
    using EOPIE = FLASH_CR_EOPIE_Values<FLASH::CR, 24, 1, ReadWriteMode, FLASHCRBase> ;
    using ERRIE = FLASH_CR_ERRIE_Values<FLASH::CR, 25, 1, ReadWriteMode, FLASHCRBase> ;
    using LOCK = FLASH_CR_LOCK_Values<FLASH::CR, 31, 1, ReadWriteMode, FLASHCRBase> ;
    using FieldValues = FLASH_CR_LOCK_Values<FLASH::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40023C10, 32, ReadWriteMode, FLASHCRBase, T...> ;

  struct FLASHOPTCRBase {} ;

  struct OPTCR : public RegisterBase<0x40023C14, 32, ReadWriteMode>
  {
    using OPTLOCK = FLASH_OPTCR_OPTLOCK_Values<FLASH::OPTCR, 0, 1, ReadWriteMode, FLASHOPTCRBase> ;
    using OPTSTRT = FLASH_OPTCR_OPTSTRT_Values<FLASH::OPTCR, 1, 1, ReadWriteMode, FLASHOPTCRBase> ;
    using BOR_LEV = FLASH_OPTCR_BOR_LEV_Values<FLASH::OPTCR, 2, 2, ReadWriteMode, FLASHOPTCRBase> ;
    using WDG_SW = FLASH_OPTCR_WDG_SW_Values<FLASH::OPTCR, 5, 1, ReadWriteMode, FLASHOPTCRBase> ;
    using nRST_STOP = FLASH_OPTCR_nRST_STOP_Values<FLASH::OPTCR, 6, 1, ReadWriteMode, FLASHOPTCRBase> ;
    using nRST_STDBY = FLASH_OPTCR_nRST_STDBY_Values<FLASH::OPTCR, 7, 1, ReadWriteMode, FLASHOPTCRBase> ;
    using RDP = FLASH_OPTCR_RDP_Values<FLASH::OPTCR, 8, 8, ReadWriteMode, FLASHOPTCRBase> ;
    using nWRP = FLASH_OPTCR_nWRP_Values<FLASH::OPTCR, 16, 12, ReadWriteMode, FLASHOPTCRBase> ;
    using FieldValues = FLASH_OPTCR_nWRP_Values<FLASH::OPTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTCRPack  = Register<0x40023C14, 32, ReadWriteMode, FLASHOPTCRBase, T...> ;

} ;

#endif //#if !defined(FLASHREGISTERS_HPP)
