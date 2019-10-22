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
struct OTG_FS_DEVICE_FS_DIEPCTL_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_MPSIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_MPSIZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_MPSIZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_MPSIZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_FS_DIEPCTL_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_FS_DIEPCTL_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_SODDFRM_SDPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SODDFRM_SDPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SODDFRM_SDPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_SDPID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SDPID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SDPID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPCTL_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPCTL_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_SDPID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SDPID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_SDPID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPCTL_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPCTL_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPINT_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPINT_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPINT_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT_BBSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT_BBSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT_BBSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPINT_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPINT_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPINT_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_PKTCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_PKTCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DTXFSTS_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(OTGFSDEVICEENUMS_HPP)
