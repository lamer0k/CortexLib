/*******************************************************************************
* Filename      : flashfieldvalues.hpp
*
* Details       : Enumerations related with Flash peripheral. This header file
*                 is auto-generated for STM32F303 device.
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
struct FLASH_ACR_PRFTBE_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_ACR_PRFTBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_PRFTBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_PRFTBS_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_ACR_PRFTBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_PRFTBS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_KEYR_FKEYR_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTKEYR_OPTKEYR_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_EOP_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using NotComplete = FieldValue<FLASH_SR_EOP_Values, BaseType, 0U> ;
  using Complete = FieldValue<FLASH_SR_EOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_WRPRT_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_SR_WRPRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_WRPRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_PGERR_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_SR_PGERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_PGERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using NotBusy = FieldValue<FLASH_SR_BSY_Values, BaseType, 0U> ;
  using Busy = FieldValue<FLASH_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_FORCE_OPTLOAD_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_CR_FORCE_OPTLOAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_FORCE_OPTLOAD_Values, BaseType, 1U> ;
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
struct FLASH_CR_OPTWRE_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_CR_OPTWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Disable = FieldValue<FLASH_CR_LOCK_Values, BaseType, 0U> ;
  using Enable = FieldValue<FLASH_CR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using NoStart = FieldValue<FLASH_CR_STRT_Values, BaseType, 0U> ;
  using Start = FieldValue<FLASH_CR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OPTER_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_CR_OPTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OPTPG_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_CR_OPTPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_MER_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_CR_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PER_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Clear = FieldValue<FLASH_CR_PER_Values, BaseType, 0U> ;
  using PageErase = FieldValue<FLASH_CR_PER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PG_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Clear = FieldValue<FLASH_CR_PG_Values, BaseType, 0U> ;
  using StartProgram = FieldValue<FLASH_CR_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_AR_FAR_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_OPTERR_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_OPTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_OPTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_LEVEL1_PROT_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_LEVEL1_PROT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_LEVEL1_PROT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_LEVEL2_PROT_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_LEVEL2_PROT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_LEVEL2_PROT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_WDG_SW_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_WDG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_WDG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_nRST_STOP_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_nRST_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_nRST_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_nRST_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_nRST_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_nRST_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_BOOT1_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_BOOT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_BOOT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_VDDA_MONITOR_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_VDDA_MONITOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_VDDA_MONITOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_SRAM_PARITY_CHECK_Values: public RegisterField<Reg, offset, size, AccessMode>
{
  using Value0 = FieldValue<FLASH_OBR_SRAM_PARITY_CHECK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_SRAM_PARITY_CHECK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_Data0_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_Data1_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRPR_WRP_Values: public RegisterField<Reg, offset, size, AccessMode>
{
} ;

#endif //#if !defined(FLASHENUMS_HPP)
