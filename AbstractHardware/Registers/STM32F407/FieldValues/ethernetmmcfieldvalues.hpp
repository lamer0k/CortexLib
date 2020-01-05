/*******************************************************************************
* Filename      : ethernetmmcfieldvalues.hpp
*
* Details       : Enumerations related with Ethernet_MMC peripheral. This header
*                 file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETMMCENUMS_HPP)
#define ETHERNETMMCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCCR_CR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCCR_CR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCCR_CR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCCR_CSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCCR_CSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCCR_CSR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCCR_ROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCCR_ROR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCCR_ROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCCR_MCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCCR_MCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCCR_MCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCCR_MCP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCCR_MCP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCCR_MCP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCCR_MCFHP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCCR_MCFHP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCCR_MCFHP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRIR_RFCES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCRIR_RFCES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCRIR_RFCES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRIR_RFAES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCRIR_RFAES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCRIR_RFAES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRIR_RGUFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCRIR_RGUFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCRIR_RGUFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTIR_TGFSCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCTIR_TGFSCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCTIR_TGFSCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTIR_TGFMSCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCTIR_TGFMSCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCTIR_TGFMSCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTIR_TGFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCTIR_TGFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCTIR_TGFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRIMR_RFCEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCRIMR_RFCEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCRIMR_RFCEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRIMR_RFAEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCRIMR_RFAEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCRIMR_RFAEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRIMR_RGUFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCRIMR_RGUFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCRIMR_RGUFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTIMR_TGFSCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCTIMR_TGFSCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCTIMR_TGFSCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTIMR_TGFMSCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCTIMR_TGFMSCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCTIMR_TGFMSCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTIMR_TGFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MMC_MMCTIMR_TGFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MMC_MMCTIMR_TGFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTGFSCCR_TGFSCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCTGFCR_TGFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRFCECR_RFCFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRFAECR_RFAEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MMC_MMCRGUFCR_RGUFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ETHERNETMMCENUMS_HPP)
