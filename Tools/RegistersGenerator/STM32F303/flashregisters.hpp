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

struct Flash
{
  struct FlashACRBase {} ;

  struct ACR : public RegisterBase<0x40022000, 32, ReadWriteMode>
  {
    using LATENCY = Flash_ACR_LATENCY_Values<Flash::ACR, 0, 3, ReadWriteMode, FlashACRBase> ;
    using PRFTBE = Flash_ACR_PRFTBE_Values<Flash::ACR, 4, 1, ReadWriteMode, FlashACRBase> ;
    using PRFTBS = Flash_ACR_PRFTBS_Values<Flash::ACR, 5, 1, ReadMode, FlashACRBase> ;
    using FieldValues = Flash_ACR_PRFTBS_Values<Flash::ACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACRPack  = Register<0x40022000, 32, ReadWriteMode, FlashACRBase, T...> ;

  struct FlashKEYRBase {} ;

  struct KEYR : public RegisterBase<0x40022004, 32, WriteMode>
  {
    using FKEYR = Flash_KEYR_FKEYR_Values<Flash::KEYR, 0, 32, WriteMode, FlashKEYRBase> ;
    using FieldValues = Flash_KEYR_FKEYR_Values<Flash::KEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYRPack  = Register<0x40022004, 32, WriteMode, FlashKEYRBase, T...> ;

  struct FlashOPTKEYRBase {} ;

  struct OPTKEYR : public RegisterBase<0x40022008, 32, WriteMode>
  {
    using OPTKEYRField = Flash_OPTKEYR_OPTKEYR_Values<Flash::OPTKEYR, 0, 32, WriteMode, FlashOPTKEYRBase> ;
    using FieldValues = Flash_OPTKEYR_OPTKEYR_Values<Flash::OPTKEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTKEYRPack  = Register<0x40022008, 32, WriteMode, FlashOPTKEYRBase, T...> ;

  struct FlashSRBase {} ;

  struct SR : public RegisterBase<0x4002200C, 32, ReadWriteMode>
  {
    using EOP = Flash_SR_EOP_Values<Flash::SR, 5, 1, ReadWriteMode, FlashSRBase> ;
    using WRPRT = Flash_SR_WRPRT_Values<Flash::SR, 4, 1, ReadWriteMode, FlashSRBase> ;
    using PGERR = Flash_SR_PGERR_Values<Flash::SR, 2, 1, ReadWriteMode, FlashSRBase> ;
    using BSY = Flash_SR_BSY_Values<Flash::SR, 0, 1, ReadMode, FlashSRBase> ;
    using FieldValues = Flash_SR_BSY_Values<Flash::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x4002200C, 32, ReadWriteMode, FlashSRBase, T...> ;

  struct FlashCRBase {} ;

  struct CR : public RegisterBase<0x40022010, 32, ReadWriteMode>
  {
    using FORCE_OPTLOAD = Flash_CR_FORCE_OPTLOAD_Values<Flash::CR, 13, 1, ReadWriteMode, FlashCRBase> ;
    using EOPIE = Flash_CR_EOPIE_Values<Flash::CR, 12, 1, ReadWriteMode, FlashCRBase> ;
    using ERRIE = Flash_CR_ERRIE_Values<Flash::CR, 10, 1, ReadWriteMode, FlashCRBase> ;
    using OPTWRE = Flash_CR_OPTWRE_Values<Flash::CR, 9, 1, ReadWriteMode, FlashCRBase> ;
    using LOCK = Flash_CR_LOCK_Values<Flash::CR, 7, 1, ReadWriteMode, FlashCRBase> ;
    using STRT = Flash_CR_STRT_Values<Flash::CR, 6, 1, ReadWriteMode, FlashCRBase> ;
    using OPTER = Flash_CR_OPTER_Values<Flash::CR, 5, 1, ReadWriteMode, FlashCRBase> ;
    using OPTPG = Flash_CR_OPTPG_Values<Flash::CR, 4, 1, ReadWriteMode, FlashCRBase> ;
    using MER = Flash_CR_MER_Values<Flash::CR, 2, 1, ReadWriteMode, FlashCRBase> ;
    using PER = Flash_CR_PER_Values<Flash::CR, 1, 1, ReadWriteMode, FlashCRBase> ;
    using PG = Flash_CR_PG_Values<Flash::CR, 0, 1, ReadWriteMode, FlashCRBase> ;
    using FieldValues = Flash_CR_PG_Values<Flash::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40022010, 32, ReadWriteMode, FlashCRBase, T...> ;

  struct FlashARBase {} ;

  struct AR : public RegisterBase<0x40022014, 32, WriteMode>
  {
    using FAR = Flash_AR_FAR_Values<Flash::AR, 0, 32, WriteMode, FlashARBase> ;
    using FieldValues = Flash_AR_FAR_Values<Flash::AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARPack  = Register<0x40022014, 32, WriteMode, FlashARBase, T...> ;

  struct FlashOBRBase {} ;

  struct OBR : public RegisterBase<0x4002201C, 32, ReadMode>
  {
    using OPTERR = Flash_OBR_OPTERR_Values<Flash::OBR, 0, 1, ReadMode, FlashOBRBase> ;
    using LEVEL1_PROT = Flash_OBR_LEVEL1_PROT_Values<Flash::OBR, 1, 1, ReadMode, FlashOBRBase> ;
    using LEVEL2_PROT = Flash_OBR_LEVEL2_PROT_Values<Flash::OBR, 2, 1, ReadMode, FlashOBRBase> ;
    using WDG_SW = Flash_OBR_WDG_SW_Values<Flash::OBR, 8, 1, ReadMode, FlashOBRBase> ;
    using nRST_STOP = Flash_OBR_nRST_STOP_Values<Flash::OBR, 9, 1, ReadMode, FlashOBRBase> ;
    using nRST_STDBY = Flash_OBR_nRST_STDBY_Values<Flash::OBR, 10, 1, ReadMode, FlashOBRBase> ;
    using BOOT1 = Flash_OBR_BOOT1_Values<Flash::OBR, 12, 1, ReadMode, FlashOBRBase> ;
    using VDDA_MONITOR = Flash_OBR_VDDA_MONITOR_Values<Flash::OBR, 13, 1, ReadMode, FlashOBRBase> ;
    using SRAM_PARITY_CHECK = Flash_OBR_SRAM_PARITY_CHECK_Values<Flash::OBR, 14, 1, ReadMode, FlashOBRBase> ;
    using Data0 = Flash_OBR_Data0_Values<Flash::OBR, 16, 8, ReadMode, FlashOBRBase> ;
    using Data1 = Flash_OBR_Data1_Values<Flash::OBR, 24, 8, ReadMode, FlashOBRBase> ;
    using FieldValues = Flash_OBR_Data1_Values<Flash::OBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OBRPack  = Register<0x4002201C, 32, ReadMode, FlashOBRBase, T...> ;

  struct FlashWRPRBase {} ;

  struct WRPR : public RegisterBase<0x40022020, 32, ReadMode>
  {
    using WRP = Flash_WRPR_WRP_Values<Flash::WRPR, 0, 32, ReadMode, FlashWRPRBase> ;
    using FieldValues = Flash_WRPR_WRP_Values<Flash::WRPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRPRPack  = Register<0x40022020, 32, ReadMode, FlashWRPRBase, T...> ;

} ;

#endif //#if !defined(FLASHREGISTERS_HPP)
