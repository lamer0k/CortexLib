/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : Flash. This header file is auto-generated for STM32L4x1
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
    using PRFTEN = FLASH_ACR_PRFTEN_Values<FLASH::ACR, 8, 1, ReadWriteMode, FLASHACRBase> ;
    using ICEN = FLASH_ACR_ICEN_Values<FLASH::ACR, 9, 1, ReadWriteMode, FLASHACRBase> ;
    using DCEN = FLASH_ACR_DCEN_Values<FLASH::ACR, 10, 1, ReadWriteMode, FLASHACRBase> ;
    using ICRST = FLASH_ACR_ICRST_Values<FLASH::ACR, 11, 1, ReadWriteMode, FLASHACRBase> ;
    using DCRST = FLASH_ACR_DCRST_Values<FLASH::ACR, 12, 1, ReadWriteMode, FLASHACRBase> ;
    using RUN_PD = FLASH_ACR_RUN_PD_Values<FLASH::ACR, 13, 1, ReadWriteMode, FLASHACRBase> ;
    using SLEEP_PD = FLASH_ACR_SLEEP_PD_Values<FLASH::ACR, 14, 1, ReadWriteMode, FLASHACRBase> ;
    using FieldValues = FLASH_ACR_SLEEP_PD_Values<FLASH::ACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACRPack  = Register<0x40022000, 32, ReadWriteMode, FLASHACRBase, T...> ;

  struct FLASHPDKEYRBase {} ;

  struct PDKEYR : public RegisterBase<0x40022004, 32, WriteMode>
  {
    using PDKEYRField = FLASH_PDKEYR_PDKEYR_Values<FLASH::PDKEYR, 0, 32, WriteMode, FLASHPDKEYRBase> ;
    using FieldValues = FLASH_PDKEYR_PDKEYR_Values<FLASH::PDKEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDKEYRPack  = Register<0x40022004, 32, WriteMode, FLASHPDKEYRBase, T...> ;

  struct FLASHKEYRBase {} ;

  struct KEYR : public RegisterBase<0x40022008, 32, WriteMode>
  {
    using KEYRField = FLASH_KEYR_KEYR_Values<FLASH::KEYR, 0, 32, WriteMode, FLASHKEYRBase> ;
    using FieldValues = FLASH_KEYR_KEYR_Values<FLASH::KEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYRPack  = Register<0x40022008, 32, WriteMode, FLASHKEYRBase, T...> ;

  struct FLASHOPTKEYRBase {} ;

  struct OPTKEYR : public RegisterBase<0x4002200C, 32, WriteMode>
  {
    using OPTKEYRField = FLASH_OPTKEYR_OPTKEYR_Values<FLASH::OPTKEYR, 0, 32, WriteMode, FLASHOPTKEYRBase> ;
    using FieldValues = FLASH_OPTKEYR_OPTKEYR_Values<FLASH::OPTKEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTKEYRPack  = Register<0x4002200C, 32, WriteMode, FLASHOPTKEYRBase, T...> ;

  struct FLASHSRBase {} ;

  struct SR : public RegisterBase<0x40022010, 32, ReadWriteMode>
  {
    using EOP = FLASH_SR_EOP_Values<FLASH::SR, 0, 1, ReadWriteMode, FLASHSRBase> ;
    using OPERR = FLASH_SR_OPERR_Values<FLASH::SR, 1, 1, ReadWriteMode, FLASHSRBase> ;
    using PROGERR = FLASH_SR_PROGERR_Values<FLASH::SR, 3, 1, ReadWriteMode, FLASHSRBase> ;
    using WRPERR = FLASH_SR_WRPERR_Values<FLASH::SR, 4, 1, ReadWriteMode, FLASHSRBase> ;
    using PGAERR = FLASH_SR_PGAERR_Values<FLASH::SR, 5, 1, ReadWriteMode, FLASHSRBase> ;
    using SIZERR = FLASH_SR_SIZERR_Values<FLASH::SR, 6, 1, ReadWriteMode, FLASHSRBase> ;
    using PGSERR = FLASH_SR_PGSERR_Values<FLASH::SR, 7, 1, ReadWriteMode, FLASHSRBase> ;
    using MISERR = FLASH_SR_MISERR_Values<FLASH::SR, 8, 1, ReadWriteMode, FLASHSRBase> ;
    using FASTERR = FLASH_SR_FASTERR_Values<FLASH::SR, 9, 1, ReadWriteMode, FLASHSRBase> ;
    using RDERR = FLASH_SR_RDERR_Values<FLASH::SR, 14, 1, ReadWriteMode, FLASHSRBase> ;
    using OPTVERR = FLASH_SR_OPTVERR_Values<FLASH::SR, 15, 1, ReadWriteMode, FLASHSRBase> ;
    using BSY = FLASH_SR_BSY_Values<FLASH::SR, 16, 1, ReadMode, FLASHSRBase> ;
    using FieldValues = FLASH_SR_BSY_Values<FLASH::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40022010, 32, ReadWriteMode, FLASHSRBase, T...> ;

  struct FLASHCRBase {} ;

  struct CR : public RegisterBase<0x40022014, 32, ReadWriteMode>
  {
    using PG = FLASH_CR_PG_Values<FLASH::CR, 0, 1, ReadWriteMode, FLASHCRBase> ;
    using PER = FLASH_CR_PER_Values<FLASH::CR, 1, 1, ReadWriteMode, FLASHCRBase> ;
    using MER1 = FLASH_CR_MER1_Values<FLASH::CR, 2, 1, ReadWriteMode, FLASHCRBase> ;
    using PNB = FLASH_CR_PNB_Values<FLASH::CR, 3, 8, ReadWriteMode, FLASHCRBase> ;
    using BKER = FLASH_CR_BKER_Values<FLASH::CR, 11, 1, ReadWriteMode, FLASHCRBase> ;
    using MER2 = FLASH_CR_MER2_Values<FLASH::CR, 15, 1, ReadWriteMode, FLASHCRBase> ;
    using START = FLASH_CR_START_Values<FLASH::CR, 16, 1, ReadWriteMode, FLASHCRBase> ;
    using OPTSTRT = FLASH_CR_OPTSTRT_Values<FLASH::CR, 17, 1, ReadWriteMode, FLASHCRBase> ;
    using FSTPG = FLASH_CR_FSTPG_Values<FLASH::CR, 18, 1, ReadWriteMode, FLASHCRBase> ;
    using EOPIE = FLASH_CR_EOPIE_Values<FLASH::CR, 24, 1, ReadWriteMode, FLASHCRBase> ;
    using ERRIE = FLASH_CR_ERRIE_Values<FLASH::CR, 25, 1, ReadWriteMode, FLASHCRBase> ;
    using RDERRIE = FLASH_CR_RDERRIE_Values<FLASH::CR, 26, 1, ReadWriteMode, FLASHCRBase> ;
    using OBL_LAUNCH = FLASH_CR_OBL_LAUNCH_Values<FLASH::CR, 27, 1, ReadWriteMode, FLASHCRBase> ;
    using OPTLOCK = FLASH_CR_OPTLOCK_Values<FLASH::CR, 30, 1, ReadWriteMode, FLASHCRBase> ;
    using LOCK = FLASH_CR_LOCK_Values<FLASH::CR, 31, 1, ReadWriteMode, FLASHCRBase> ;
    using FieldValues = FLASH_CR_LOCK_Values<FLASH::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40022014, 32, ReadWriteMode, FLASHCRBase, T...> ;

  struct FLASHECCRBase {} ;

  struct ECCR : public RegisterBase<0x40022018, 32, ReadWriteMode>
  {
    using ADDR_ECC = FLASH_ECCR_ADDR_ECC_Values<FLASH::ECCR, 0, 19, ReadMode, FLASHECCRBase> ;
    using BK_ECC = FLASH_ECCR_BK_ECC_Values<FLASH::ECCR, 19, 1, ReadMode, FLASHECCRBase> ;
    using SYSF_ECC = FLASH_ECCR_SYSF_ECC_Values<FLASH::ECCR, 20, 1, ReadMode, FLASHECCRBase> ;
    using ECCIE = FLASH_ECCR_ECCIE_Values<FLASH::ECCR, 24, 1, ReadWriteMode, FLASHECCRBase> ;
    using ECCC = FLASH_ECCR_ECCC_Values<FLASH::ECCR, 30, 1, ReadWriteMode, FLASHECCRBase> ;
    using ECCD = FLASH_ECCR_ECCD_Values<FLASH::ECCR, 31, 1, ReadWriteMode, FLASHECCRBase> ;
    using FieldValues = FLASH_ECCR_ECCD_Values<FLASH::ECCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCRPack  = Register<0x40022018, 32, ReadWriteMode, FLASHECCRBase, T...> ;

  struct FLASHOPTRBase {} ;

  struct OPTR : public RegisterBase<0x40022020, 32, ReadWriteMode>
  {
    using RDP = FLASH_OPTR_RDP_Values<FLASH::OPTR, 0, 8, ReadWriteMode, FLASHOPTRBase> ;
    using BOR_LEV = FLASH_OPTR_BOR_LEV_Values<FLASH::OPTR, 8, 3, ReadWriteMode, FLASHOPTRBase> ;
    using nRST_STOP = FLASH_OPTR_nRST_STOP_Values<FLASH::OPTR, 12, 1, ReadWriteMode, FLASHOPTRBase> ;
    using nRST_STDBY = FLASH_OPTR_nRST_STDBY_Values<FLASH::OPTR, 13, 1, ReadWriteMode, FLASHOPTRBase> ;
    using IDWG_SW = FLASH_OPTR_IDWG_SW_Values<FLASH::OPTR, 16, 1, ReadWriteMode, FLASHOPTRBase> ;
    using IWDG_STOP = FLASH_OPTR_IWDG_STOP_Values<FLASH::OPTR, 17, 1, ReadWriteMode, FLASHOPTRBase> ;
    using IWDG_STDBY = FLASH_OPTR_IWDG_STDBY_Values<FLASH::OPTR, 18, 1, ReadWriteMode, FLASHOPTRBase> ;
    using WWDG_SW = FLASH_OPTR_WWDG_SW_Values<FLASH::OPTR, 19, 1, ReadWriteMode, FLASHOPTRBase> ;
    using BFB2 = FLASH_OPTR_BFB2_Values<FLASH::OPTR, 20, 1, ReadWriteMode, FLASHOPTRBase> ;
    using DUALBANK = FLASH_OPTR_DUALBANK_Values<FLASH::OPTR, 21, 1, ReadWriteMode, FLASHOPTRBase> ;
    using nBOOT1 = FLASH_OPTR_nBOOT1_Values<FLASH::OPTR, 23, 1, ReadWriteMode, FLASHOPTRBase> ;
    using SRAM2_PE = FLASH_OPTR_SRAM2_PE_Values<FLASH::OPTR, 24, 1, ReadWriteMode, FLASHOPTRBase> ;
    using SRAM2_RST = FLASH_OPTR_SRAM2_RST_Values<FLASH::OPTR, 25, 1, ReadWriteMode, FLASHOPTRBase> ;
    using FieldValues = FLASH_OPTR_SRAM2_RST_Values<FLASH::OPTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTRPack  = Register<0x40022020, 32, ReadWriteMode, FLASHOPTRBase, T...> ;

  struct FLASHPCROP1SRBase {} ;

  struct PCROP1SR : public RegisterBase<0x40022024, 32, ReadWriteMode>
  {
    using PCROP1_STRT = FLASH_PCROP1SR_PCROP1_STRT_Values<FLASH::PCROP1SR, 0, 16, ReadWriteMode, FLASHPCROP1SRBase> ;
    using FieldValues = FLASH_PCROP1SR_PCROP1_STRT_Values<FLASH::PCROP1SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP1SRPack  = Register<0x40022024, 32, ReadWriteMode, FLASHPCROP1SRBase, T...> ;

  struct FLASHPCROP1ERBase {} ;

  struct PCROP1ER : public RegisterBase<0x40022028, 32, ReadWriteMode>
  {
    using PCROP1_END = FLASH_PCROP1ER_PCROP1_END_Values<FLASH::PCROP1ER, 0, 16, ReadWriteMode, FLASHPCROP1ERBase> ;
    using PCROP_RDP = FLASH_PCROP1ER_PCROP_RDP_Values<FLASH::PCROP1ER, 31, 1, ReadWriteMode, FLASHPCROP1ERBase> ;
    using FieldValues = FLASH_PCROP1ER_PCROP_RDP_Values<FLASH::PCROP1ER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP1ERPack  = Register<0x40022028, 32, ReadWriteMode, FLASHPCROP1ERBase, T...> ;

  struct FLASHWRP1ARBase {} ;

  struct WRP1AR : public RegisterBase<0x4002202C, 32, ReadWriteMode>
  {
    using WRP1A_STRT = FLASH_WRP1AR_WRP1A_STRT_Values<FLASH::WRP1AR, 0, 8, ReadWriteMode, FLASHWRP1ARBase> ;
    using WRP1A_END = FLASH_WRP1AR_WRP1A_END_Values<FLASH::WRP1AR, 16, 8, ReadWriteMode, FLASHWRP1ARBase> ;
    using FieldValues = FLASH_WRP1AR_WRP1A_END_Values<FLASH::WRP1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRP1ARPack  = Register<0x4002202C, 32, ReadWriteMode, FLASHWRP1ARBase, T...> ;

  struct FLASHWRP1BRBase {} ;

  struct WRP1BR : public RegisterBase<0x40022030, 32, ReadWriteMode>
  {
    using WRP1B_STRT = FLASH_WRP1BR_WRP1B_STRT_Values<FLASH::WRP1BR, 16, 8, ReadWriteMode, FLASHWRP1BRBase> ;
    using WRP1B_END = FLASH_WRP1BR_WRP1B_END_Values<FLASH::WRP1BR, 0, 8, ReadWriteMode, FLASHWRP1BRBase> ;
    using FieldValues = FLASH_WRP1BR_WRP1B_END_Values<FLASH::WRP1BR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRP1BRPack  = Register<0x40022030, 32, ReadWriteMode, FLASHWRP1BRBase, T...> ;

  struct FLASHPCROP2SRBase {} ;

  struct PCROP2SR : public RegisterBase<0x40022044, 32, ReadWriteMode>
  {
    using PCROP2_STRT = FLASH_PCROP2SR_PCROP2_STRT_Values<FLASH::PCROP2SR, 0, 16, ReadWriteMode, FLASHPCROP2SRBase> ;
    using FieldValues = FLASH_PCROP2SR_PCROP2_STRT_Values<FLASH::PCROP2SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP2SRPack  = Register<0x40022044, 32, ReadWriteMode, FLASHPCROP2SRBase, T...> ;

  struct FLASHPCROP2ERBase {} ;

  struct PCROP2ER : public RegisterBase<0x40022048, 32, ReadWriteMode>
  {
    using PCROP2_END = FLASH_PCROP2ER_PCROP2_END_Values<FLASH::PCROP2ER, 0, 16, ReadWriteMode, FLASHPCROP2ERBase> ;
    using FieldValues = FLASH_PCROP2ER_PCROP2_END_Values<FLASH::PCROP2ER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP2ERPack  = Register<0x40022048, 32, ReadWriteMode, FLASHPCROP2ERBase, T...> ;

  struct FLASHWRP2ARBase {} ;

  struct WRP2AR : public RegisterBase<0x4002204C, 32, ReadWriteMode>
  {
    using WRP2A_STRT = FLASH_WRP2AR_WRP2A_STRT_Values<FLASH::WRP2AR, 0, 8, ReadWriteMode, FLASHWRP2ARBase> ;
    using WRP2A_END = FLASH_WRP2AR_WRP2A_END_Values<FLASH::WRP2AR, 16, 8, ReadWriteMode, FLASHWRP2ARBase> ;
    using FieldValues = FLASH_WRP2AR_WRP2A_END_Values<FLASH::WRP2AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRP2ARPack  = Register<0x4002204C, 32, ReadWriteMode, FLASHWRP2ARBase, T...> ;

  struct FLASHWRP2BRBase {} ;

  struct WRP2BR : public RegisterBase<0x40022050, 32, ReadWriteMode>
  {
    using WRP2B_STRT = FLASH_WRP2BR_WRP2B_STRT_Values<FLASH::WRP2BR, 0, 8, ReadWriteMode, FLASHWRP2BRBase> ;
    using WRP2B_END = FLASH_WRP2BR_WRP2B_END_Values<FLASH::WRP2BR, 16, 8, ReadWriteMode, FLASHWRP2BRBase> ;
    using FieldValues = FLASH_WRP2BR_WRP2B_END_Values<FLASH::WRP2BR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRP2BRPack  = Register<0x40022050, 32, ReadWriteMode, FLASHWRP2BRBase, T...> ;

} ;

#endif //#if !defined(FLASHREGISTERS_HPP)
