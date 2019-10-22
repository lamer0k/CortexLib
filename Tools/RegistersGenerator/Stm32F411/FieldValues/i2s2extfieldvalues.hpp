/*******************************************************************************
* Filename      : i2s2extfieldvalues.hpp
*
* Details       : Enumerations related with I2S2ext peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2S2EXTENUMS_HPP)
#define I2S2EXTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_BIDIMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_BIDIMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_BIDIMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_BIDIOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_BIDIOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_BIDIOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_CRCNEXT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_CRCNEXT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_CRCNEXT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_DFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_DFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_DFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_RXONLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_RXONLY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_RXONLY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_SSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_SSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_SSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_SSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_SSI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_SSI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_LSBFIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_LSBFIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_LSBFIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_SPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_SPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_SPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_BR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_BR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ISext_CR_BR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ISext_CR_BR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ISext_CR_BR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ISext_CR_BR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ISext_CR_BR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ISext_CR_BR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_MSTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_MSTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_MSTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_CPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_CPHA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_TXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_TXEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_TXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_RXNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_RXNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_RXNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_FRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_FRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_FRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_SSOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_SSOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_SSOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_TXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_TXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_TXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CR_RXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_CR_RXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_CR_RXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_TIFRFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_TIFRFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_TIFRFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_BSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_MODF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_MODF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_MODF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_CRCERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_CRCERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_CRCERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_UDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_UDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_UDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_CHSIDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_CHSIDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_CHSIDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_SR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_SR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_SR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_CRCPR_CRCPOLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_RXCRCR_RxCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_TXCRCR_TxCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_ISMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_ISMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_ISMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_ISE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_ISE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_ISE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_ISCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_ISCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_ISCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ISext_ISCFGR_ISCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ISext_ISCFGR_ISCFG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_PCMSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_PCMSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_PCMSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_ISSTD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_ISSTD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_ISSTD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ISext_ISCFGR_ISSTD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ISext_ISCFGR_ISSTD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_CKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_CKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_CKPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_DATLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_DATLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_DATLEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ISext_ISCFGR_DATLEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ISext_ISCFGR_DATLEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISCFGR_CHLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISCFGR_CHLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISCFGR_CHLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISPR_MCKOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISPR_MCKOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISPR_MCKOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISPR_ODD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ISext_ISPR_ODD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ISext_ISPR_ODD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISext_ISPR_ISDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(I2S2EXTENUMS_HPP)
