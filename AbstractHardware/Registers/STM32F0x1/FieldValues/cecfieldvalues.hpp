/*******************************************************************************
* Filename      : cecfieldvalues.hpp
*
* Details       : Enumerations related with CEC peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(CECENUMS_HPP)
#define CECENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CR_TXEOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CR_TXEOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CR_TXEOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CR_TXSOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CR_TXSOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CR_TXSOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CR_CECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CR_CECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CR_CECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CFGR_LBPEGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CFGR_LBPEGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CFGR_LBPEGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CFGR_BREGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CFGR_BREGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CFGR_BREGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CFGR_BRESTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CFGR_BRESTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CFGR_BRESTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CFGR_RXTOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CFGR_RXTOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CFGR_RXTOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CFGR_SFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CEC_CFGR_SFT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CFGR_LSTN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CFGR_LSTN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CFGR_LSTN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_CFGR_OAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CEC_CFGR_OAR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_TXDR_TXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_RXDR_RXDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_TXACKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_TXACKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_TXACKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_TXUDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_TXUDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_TXUDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_TXEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_TXEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_TXEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_TXBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_TXBR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_TXBR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_ARBLST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_ARBLST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_ARBLST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_RXACKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_RXACKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_RXACKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_LBPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_LBPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_LBPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_SBPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_SBPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_SBPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_BRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_BRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_BRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_RXOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_RXOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_RXOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_RXEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_RXEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_RXEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_ISR_RXBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_ISR_RXBR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_ISR_RXBR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_TXACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_TXACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_TXACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_TXERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_TXERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_TXERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_TXUDRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_TXUDRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_TXUDRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_TXENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_TXENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_TXENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_TXBRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_TXBRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_TXBRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_ARBLSTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_ARBLSTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_ARBLSTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_RXACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_RXACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_RXACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_LBPEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_LBPEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_LBPEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_SBPEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_SBPEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_SBPEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_BREIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_BREIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_BREIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_RXOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_RXOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_RXOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_RXENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_RXENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_RXENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CEC_IER_RXBRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CEC_IER_RXBRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CEC_IER_RXBRIE_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(CECENUMS_HPP)
