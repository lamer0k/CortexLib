/*******************************************************************************
* Filename      : flashfieldvalues.hpp
*
* Details       : Enumerations related with FLASH peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(FLASHENUMS_HPP)
#define FLASHENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_PRFTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_PRFTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_PRFTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_ICEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_ICEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_ICEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_DCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_DCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_DCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_ICRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_ICRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_ICRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_DCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_DCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_DCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_RUN_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_RUN_PD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_RUN_PD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_SLEEP_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_SLEEP_PD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_SLEEP_PD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_PDKEYR_PDKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_KEYR_KEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTKEYR_OPTKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_EOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_EOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_EOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_OPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_OPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_OPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_PROGERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_PROGERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_PROGERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_WRPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_WRPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_WRPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_PGAERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_PGAERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_PGAERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_SIZERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_SIZERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_SIZERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_PGSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_PGSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_PGSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_MISERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_MISERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_MISERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_FASTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_FASTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_FASTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_RDERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_RDERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_RDERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_OPTVERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_OPTVERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_OPTVERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_BSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_PG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_PER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_PER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_MER1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_MER1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_MER1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PNB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_BKER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_BKER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_BKER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_MER2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_MER2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_MER2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OPTSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_OPTSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_FSTPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_FSTPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_FSTPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_EOPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_EOPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_EOPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_RDERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_RDERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_RDERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OBL_LAUNCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_OBL_LAUNCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OBL_LAUNCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OPTLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_OPTLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTLOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ECCR_ADDR_ECC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ECCR_BK_ECC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ECCR_BK_ECC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ECCR_BK_ECC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ECCR_SYSF_ECC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ECCR_SYSF_ECC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ECCR_SYSF_ECC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ECCR_ECCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ECCR_ECCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ECCR_ECCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ECCR_ECCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ECCR_ECCC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ECCR_ECCC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ECCR_ECCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ECCR_ECCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ECCR_ECCD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_OPTR_BOR_LEV_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_nRST_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_nRST_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_nRST_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_nRST_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_nRST_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_nRST_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_IDWG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_IDWG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_IDWG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_IWDG_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_IWDG_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_IWDG_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_WWDG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_WWDG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_WWDG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_BFB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_BFB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_BFB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_DUALBANK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_DUALBANK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_DUALBANK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_nBOOT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_nBOOT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_nBOOT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_SRAM2_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_SRAM2_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_SRAM2_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTR_SRAM2_RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTR_SRAM2_RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTR_SRAM2_RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_PCROP1SR_PCROP1_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_PCROP1ER_PCROP1_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_PCROP1ER_PCROP_RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_PCROP1ER_PCROP_RDP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_PCROP1ER_PCROP_RDP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP1AR_WRP1A_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP1AR_WRP1A_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP1BR_WRP1B_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP1BR_WRP1B_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_PCROP2SR_PCROP2_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_PCROP2ER_PCROP2_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP2AR_WRP2A_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP2AR_WRP2A_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP2BR_WRP2B_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRP2BR_WRP2B_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(FLASHENUMS_HPP)
