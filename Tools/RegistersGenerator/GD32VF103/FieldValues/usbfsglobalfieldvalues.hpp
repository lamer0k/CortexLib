/*******************************************************************************
* Filename      : usbfsglobalfieldvalues.hpp
*
* Details       : Enumerations related with USBFS_GLOBAL peripheral. This header
*                 file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USBFSGLOBALENUMS_HPP)
#define USBFSGLOBALENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_SRPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_SRPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_SRPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_SRPREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_SRPREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_SRPREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_HNPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_HNPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_HNPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_HNPREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_HNPREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_HNPREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_HHNPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_HHNPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_HHNPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_DHNPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_DHNPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_DHNPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_IDPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_IDPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_IDPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_DI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_DI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_DI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_ASV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_ASV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_ASV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGCS_BSV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGCS_BSV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGCS_BSV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGINTF_SESEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGINTF_SESEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGINTF_SESEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGINTF_SRPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGINTF_SRPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGINTF_SRPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGINTF_HNPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGINTF_HNPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGINTF_HNPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGINTF_HNPDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGINTF_HNPDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGINTF_HNPDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGINTF_ADTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGINTF_ADTO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGINTF_ADTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GOTGINTF_DF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GOTGINTF_DF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GOTGINTF_DF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GAHBCS_GINTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GAHBCS_GINTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GAHBCS_GINTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GAHBCS_TXFTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GAHBCS_TXFTH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GAHBCS_TXFTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GAHBCS_PTXFTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GAHBCS_PTXFTH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GAHBCS_PTXFTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GUSBCS_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GUSBCS_TOC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GUSBCS_SRPCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GUSBCS_SRPCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GUSBCS_SRPCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GUSBCS_HNPCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GUSBCS_HNPCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GUSBCS_HNPCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GUSBCS_UTT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GUSBCS_UTT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GUSBCS_FHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GUSBCS_FHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GUSBCS_FHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GUSBCS_FDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GUSBCS_FDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GUSBCS_FDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTCTL_CSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTCTL_CSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTCTL_CSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTCTL_HCSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTCTL_HCSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTCTL_HCSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTCTL_HFCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTCTL_HFCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTCTL_HFCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTCTL_RXFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTCTL_RXFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTCTL_RXFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTCTL_TXFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTCTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USBFS_GLOBAL_GRSTCTL_TXFNUM_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_COPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_COPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_COPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_MFIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_MFIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_MFIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_OTGIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_OTGIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_OTGIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_SOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_SOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_SOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_RXFNEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_RXFNEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_RXFNEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_NPTXFEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_NPTXFEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_NPTXFEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_GNPINAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_GNPINAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_GNPINAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_GONAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_GONAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_GONAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_ESP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_ESP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_ESP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_SP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_SP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_SP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_ENUMF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_ENUMF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_ENUMF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_ISOOPDIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_ISOOPDIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_ISOOPDIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_EOPFIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_EOPFIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_EOPFIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_IEPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_IEPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_IEPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_OEPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_OEPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_OEPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_ISOINCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_ISOINCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_ISOINCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_PXNCIF_ISOONCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_PXNCIF_ISOONCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_PXNCIF_ISOONCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_HPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_HPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_HPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_HCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_HCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_HCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_PTXFEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_PTXFEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_PTXFEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_IDPSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_IDPSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_IDPSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_DISCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_DISCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_DISCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_SESIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_SESIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_SESIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTF_WKUPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTF_WKUPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTF_WKUPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_MFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_MFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_MFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_OTGIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_OTGIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_OTGIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_SOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_SOFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_SOFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_RXFNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_RXFNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_RXFNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_NPTXFEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_NPTXFEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_NPTXFEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_GNPINAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_GNPINAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_GNPINAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_GONAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_GONAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_GONAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_ESPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_ESPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_ESPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_SPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_SPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_SPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_RSTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_RSTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_RSTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_ENUMFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_ENUMFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_ENUMFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_ISOOPDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_ISOOPDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_ISOOPDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_EOPFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_EOPFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_EOPFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_IEPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_IEPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_IEPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_OEPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_OEPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_OEPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_ISOINCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_ISOINCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_ISOINCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_PXNCIE_ISOONCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_PXNCIE_ISOONCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_PXNCIE_ISOONCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_HPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_HPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_HPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_HCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_HCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_HCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_PTXFEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_PTXFEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_PTXFEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_IDPSCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_IDPSCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_IDPSCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_DISCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_DISCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_DISCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_SESIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_SESIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_SESIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GINTEN_WKUPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GINTEN_WKUPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GINTEN_WKUPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Device_BCOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Device_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Host_CNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_CNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Host_BCOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Host_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Device_BCOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Device_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Host_CNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_CNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Host_BCOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Host_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GRFLEN_RXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_HNPTFLEN_HNPTXRSAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_HNPTFLEN_HNPTXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP0TFLEN_IEP0TXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP0TFLEN_IEP0TXRSAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_HNPTFQSTAT_NPTXFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_HNPTFQSTAT_NPTXRQS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_HNPTFQSTAT_NPTXRQTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GCCFG_PWRON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GCCFG_PWRON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GCCFG_PWRON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GCCFG_VBUSACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GCCFG_VBUSACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GCCFG_VBUSACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GCCFG_VBUSBCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GCCFG_VBUSBCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GCCFG_VBUSBCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GCCFG_SOFOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GCCFG_SOFOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GCCFG_SOFOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_GCCFG_VBUSIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_GLOBAL_GCCFG_VBUSIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_GLOBAL_GCCFG_VBUSIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_CID_CID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_HPTFLEN_HPTXFSAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_HPTFLEN_HPTXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP1TFLEN_IEPTXRSAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP1TFLEN_IEPTXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP2TFLEN_IEPTXRSAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP2TFLEN_IEPTXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP3TFLEN_IEPTXRSAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_GLOBAL_DIEP3TFLEN_IEPTXFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(USBFSGLOBALENUMS_HPP)
