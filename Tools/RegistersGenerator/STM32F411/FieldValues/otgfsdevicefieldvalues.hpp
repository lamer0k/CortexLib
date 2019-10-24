/*******************************************************************************
* Filename      : otgfsdevicefieldvalues.hpp
*
* Details       : Enumerations related with OTG_FS_DEVICE peripheral. This
*                 header file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSDEVICEENUMS_HPP)
#define OTGFSDEVICEENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCFG_DSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCFG_DSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCFG_DSPD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DCFG_DSPD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DCFG_DSPD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCFG_NZLSOHSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCFG_NZLSOHSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCFG_NZLSOHSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCFG_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCFG_PFIVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCFG_PFIVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCFG_PFIVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DCFG_PFIVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DCFG_PFIVL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_RWUSIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_RWUSIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_RWUSIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_SDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_SDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_SDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_GINSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_GINSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_GINSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_GONSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_GONSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_GONSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_TCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_DEVICE_FS_DCTL_TCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_SGINAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_SGINAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_SGINAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_CGINAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_CGINAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_CGINAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_SGONAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_SGONAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_SGONAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_CGONAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_CGONAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_CGONAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DCTL_POPRGDNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DCTL_POPRGDNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DCTL_POPRGDNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DSTS_SUSPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DSTS_SUSPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DSTS_SUSPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DSTS_ENUMSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DSTS_ENUMSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DSTS_ENUMSPD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DSTS_ENUMSPD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DSTS_ENUMSPD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DSTS_EERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DSTS_EERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DSTS_EERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DSTS_FNSOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPMSK_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPMSK_EPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_EPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_EPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPMSK_TOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_TOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_TOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPMSK_ITTXFEMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_ITTXFEMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_ITTXFEMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPMSK_INEPNMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_INEPNMM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_INEPNMM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPMSK_INEPNEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_INEPNEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPMSK_INEPNEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DOEPMSK_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DOEPMSK_EPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_EPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_EPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DOEPMSK_STUPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_STUPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_STUPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DOEPMSK_OTEPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_OTEPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DOEPMSK_OTEPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DAINT_IEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DAINT_OEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DAINTMSK_IEPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DAINTMSK_OEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DVBUSDIS_VBUSDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DVBUSPULSE_DVBUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPEMPMSK_INEPTXFEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_MPSIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_MPSIZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_MPSIZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_MPSIZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL0_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL0_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_SODDFRM_SD1PID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_SODDFRM_SD1PID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_SODDFRM_SD1PID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL1_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL1_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL2_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL2_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL3_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL3_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL0_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_MPSIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_MPSIZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_MPSIZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPCTL0_MPSIZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL1_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL1_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL2_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL2_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL3_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL3_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT0_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT0_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT0_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT0_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT0_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT0_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT0_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT0_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT0_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT0_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT0_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT0_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT0_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT0_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT0_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT0_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT0_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT0_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT1_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT1_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT1_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT1_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT1_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT1_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT1_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT1_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT1_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT1_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT1_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT1_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT1_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT1_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT1_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT1_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT1_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT1_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT2_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT2_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT2_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT2_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT2_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT2_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT2_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT2_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT2_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT2_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT2_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT2_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT2_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT2_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT2_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT2_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT2_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT2_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT3_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT3_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT3_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT3_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT3_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT3_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT3_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT3_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT3_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT3_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT3_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT3_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT3_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT3_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT3_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT3_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT3_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT3_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT0_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT0_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT0_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT0_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT0_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT0_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT0_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT0_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT0_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT0_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT0_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT0_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT0_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT0_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT0_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT1_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT1_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT1_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT1_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT1_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT1_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT1_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT1_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT1_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT1_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT1_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT1_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT1_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT1_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT1_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT2_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT2_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT2_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT2_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT2_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT2_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT2_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT2_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT2_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT2_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT2_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT2_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT2_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT2_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT2_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT3_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT3_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT3_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT3_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT3_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT3_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT3_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT3_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT3_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT3_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT3_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT3_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT3_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT3_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT3_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ0_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ0_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ0_PKTCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ0_PKTCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ0_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ1_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ1_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ1_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ1_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ1_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ1_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ1_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ2_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ2_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ2_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ2_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ2_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ2_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ2_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ3_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ3_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ3_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ3_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ3_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ3_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ3_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DTXFSTS0_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DTXFSTS1_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DTXFSTS2_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DTXFSTS3_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ1_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ1_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ2_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ2_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ3_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ3_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(OTGFSDEVICEENUMS_HPP)
