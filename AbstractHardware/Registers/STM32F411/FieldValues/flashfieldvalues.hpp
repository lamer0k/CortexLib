/*******************************************************************************
* Filename      : flashfieldvalues.hpp
*
* Details       : Enumerations related with FLASH peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(FLASHENUMS_HPP)
#define FLASHENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Zero = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 0U> ;
  using One = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 1U> ;
  using Two = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 2U> ;
  using Three = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 3U> ;
  using Four = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 4U> ;
  using Five = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 5U> ;
  using Six = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 6U> ;
  using Seven = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_PRFTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<FLASH_ACR_PRFTEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<FLASH_ACR_PRFTEN_Values, BaseType, 1U> ;
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
struct FLASH_KEYR_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTKEYR_OPTKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_EOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotComplete = FieldValue<FLASH_SR_EOP_Values, BaseType, 0U> ;
  using Complete = FieldValue<FLASH_SR_EOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_OPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_OPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_OPERR_Values, BaseType, 1U> ;
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
struct FLASH_SR_PGPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_PGPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_PGPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_PGSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_PGSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_PGSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotBusy = FieldValue<FLASH_SR_BSY_Values, BaseType, 0U> ;
  using Busy = FieldValue<FLASH_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Clear = FieldValue<FLASH_CR_PG_Values, BaseType, 0U> ;
  using StartProgram = FieldValue<FLASH_CR_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_SER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Clear = FieldValue<FLASH_CR_SER_Values, BaseType, 0U> ;
  using Activate = FieldValue<FLASH_CR_SER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_SNB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_SNB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_SNB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_CR_SNB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_CR_SNB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_CR_SNB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_CR_SNB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_CR_SNB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_CR_SNB_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLASH_CR_SNB_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLASH_CR_SNB_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLASH_CR_SNB_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLASH_CR_SNB_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLASH_CR_SNB_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLASH_CR_SNB_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLASH_CR_SNB_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLASH_CR_SNB_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Size8bits = FieldValue<FLASH_CR_PSIZE_Values, BaseType, 0U> ;
  using Size16bits = FieldValue<FLASH_CR_PSIZE_Values, BaseType, 1U> ;
  using Size32bits = FieldValue<FLASH_CR_PSIZE_Values, BaseType, 2U> ;
  using Size64bits = FieldValue<FLASH_CR_PSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Clear = FieldValue<FLASH_CR_STRT_Values, BaseType, 0U> ;
  using Start = FieldValue<FLASH_CR_STRT_Values, BaseType, 1U> ;
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
struct FLASH_CR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<FLASH_CR_LOCK_Values, BaseType, 0U> ;
  using Enable = FieldValue<FLASH_CR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_OPTLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTCR_OPTLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTCR_OPTLOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_OPTSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTCR_OPTSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTCR_OPTSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTCR_BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTCR_BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_OPTCR_BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_OPTCR_BOR_LEV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_WDG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTCR_WDG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTCR_WDG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_nRST_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTCR_nRST_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTCR_nRST_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_nRST_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OPTCR_nRST_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OPTCR_nRST_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTCR_nWRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(FLASHENUMS_HPP)
