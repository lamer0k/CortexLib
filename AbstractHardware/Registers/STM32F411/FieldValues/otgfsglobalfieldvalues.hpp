/*******************************************************************************
* Filename      : otgfsglobalfieldvalues.hpp
*
* Details       : Enumerations related with OTG_FS_GLOBAL peripheral. This
*                 header file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSGLOBALENUMS_HPP)
#define OTGFSGLOBALENUMS_HPP

#include "fieldvalues.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_SRQSCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_SRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_HNGSCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_HNPRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_HSHNPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_DHNPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_CIDSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_DBCT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_ASVLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGCTL_BSVLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGINT_SEDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGINT_SRSSCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGINT_HNSSCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGINT_HNGDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGINT_ADTOCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GOTGINT_DBCDNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GAHBCFG_GINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GAHBCFG_TXFELVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GAHBCFG_PTXFELVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_TOCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_PHYSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_SRPCAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_HNPCAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_TRDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_FHMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_FDMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GUSBCFG_CTXPKT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRSTCTL_CSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRSTCTL_HSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRSTCTL_FCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRSTCTL_RXFFLSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRSTCTL_TXFFLSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRSTCTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
  using Value16 = FieldValue<Reg, offset, size, AccessMode, BaseType, 16U> ;
  using Value17 = FieldValue<Reg, offset, size, AccessMode, BaseType, 17U> ;
  using Value18 = FieldValue<Reg, offset, size, AccessMode, BaseType, 18U> ;
  using Value19 = FieldValue<Reg, offset, size, AccessMode, BaseType, 19U> ;
  using Value20 = FieldValue<Reg, offset, size, AccessMode, BaseType, 20U> ;
  using Value21 = FieldValue<Reg, offset, size, AccessMode, BaseType, 21U> ;
  using Value22 = FieldValue<Reg, offset, size, AccessMode, BaseType, 22U> ;
  using Value23 = FieldValue<Reg, offset, size, AccessMode, BaseType, 23U> ;
  using Value24 = FieldValue<Reg, offset, size, AccessMode, BaseType, 24U> ;
  using Value25 = FieldValue<Reg, offset, size, AccessMode, BaseType, 25U> ;
  using Value26 = FieldValue<Reg, offset, size, AccessMode, BaseType, 26U> ;
  using Value27 = FieldValue<Reg, offset, size, AccessMode, BaseType, 27U> ;
  using Value28 = FieldValue<Reg, offset, size, AccessMode, BaseType, 28U> ;
  using Value29 = FieldValue<Reg, offset, size, AccessMode, BaseType, 29U> ;
  using Value30 = FieldValue<Reg, offset, size, AccessMode, BaseType, 30U> ;
  using Value31 = FieldValue<Reg, offset, size, AccessMode, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRSTCTL_AHBIDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_CMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_MMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_OTGINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_SOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_RXFLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_NPTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_GINAKEFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_GOUTNAKEFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_ESUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_USBSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_USBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_ENUMDNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_ISOODRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_EOPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_IEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_OEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_IISOIXFR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_IPXFR_INCOMPISOOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_HPRTINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_HCINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_PTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_CIDSCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_DISCINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_SRQINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTSTS_WKUPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_MMISM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_OTGINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_SOFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_RXFLVLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_NPTXFEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_GINAKEFFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_GONAKEFFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_ESUSPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_USBSUSPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_USBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_ENUMDNEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_ISOODRPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_EOPFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_EPMISM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_IEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_OEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_IISOIXFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_IPXFRM_IISOOXFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_PRTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_HCIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_PTXFEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_CIDSCHGM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_DISCINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_SRQIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GINTMSK_WUIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Device_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Device_BCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Device_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Device_PKTSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Device_FRMNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Host_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Host_BCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Host_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Host_PKTSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXSTSR_Host_FRMNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = FieldValue<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = FieldValue<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = FieldValue<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = FieldValue<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = FieldValue<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = FieldValue<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = FieldValue<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = FieldValue<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = FieldValue<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = FieldValue<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = FieldValue<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = FieldValue<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = FieldValue<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = FieldValue<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GRXFSIZ_RXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_TXFSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_TXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_NPTXFSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_NPTXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GNPTXSTS_NPTXFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GNPTXSTS_NPTQXSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GNPTXSTS_NPTXQTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GCCFG_PWRDWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GCCFG_VBUSASEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GCCFG_VBUSBSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_GCCFG_SOFOUTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = FieldValue<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_CID_PRODUCT_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_HPTXFSIZ_PTXSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_HPTXFSIZ_PTXFSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(OTGFSGLOBALENUMS_HPP)
