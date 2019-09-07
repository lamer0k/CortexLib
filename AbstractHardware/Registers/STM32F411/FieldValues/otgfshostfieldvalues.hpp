/*******************************************************************************
* Filename      : otgfshostfieldvalues.hpp
*
* Details       : Enumerations related with OTG_FS_HOST peripheral. This header
*                 file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSHOSTENUMS_HPP)
#define OTGFSHOSTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCFG_FSLSPCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCFG_FSLSPCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCFG_FSLSPCS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HCFG_FSLSPCS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HCFG_FSLSPCS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCFG_FSLSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCFG_FSLSS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCFG_FSLSS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_HFIR_FRIVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HFNUM_FRNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HFNUM_FTREM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPTXSTS_PTXFSAVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPTXSTS_PTXQSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPTXSTS_PTXQTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_HAINT_HAINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_HAINTMSK_HAINTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PCSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PCDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PCDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PCDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PENCHNG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PENCHNG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PENCHNG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_POCA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_POCA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_POCA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_POCCHNG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_POCCHNG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_POCCHNG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PRES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PRES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PRES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PSUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PSUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PLSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PLSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PLSTS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HPRT_PLSTS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HPRT_PLSTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PPWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PPWR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PPWR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PTCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_HOST_FS_HPRT_PTCTL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HPRT_PSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HPRT_PSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HPRT_PSPD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HPRT_PSPD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HPRT_PSPD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HCCHAR_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HCCHAR_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HCCHAR_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCCHAR_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCCHAR_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCCHAR_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINT_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINT_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINT_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCINTMSK_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCINTMSK_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCTSIZ_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCTSIZ_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_HOST_FS_HCTSIZ_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_HOST_FS_HCTSIZ_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_HOST_FS_HCTSIZ_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_HOST_FS_HCTSIZ_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_HOST_FS_HCTSIZ_DPID_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(OTGFSHOSTENUMS_HPP)
