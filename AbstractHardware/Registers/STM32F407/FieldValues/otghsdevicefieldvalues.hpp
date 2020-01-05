/*******************************************************************************
* Filename      : otghsdevicefieldvalues.hpp
*
* Details       : Enumerations related with OTG_HS_DEVICE peripheral. This
*                 header file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(OTGHSDEVICEENUMS_HPP)
#define OTGHSDEVICEENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCFG_DSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_DSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_DSPD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_DSPD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_DSPD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCFG_NZLSOHSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_NZLSOHSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_NZLSOHSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCFG_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCFG_PFIVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PFIVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PFIVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PFIVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PFIVL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCFG_PERSCHIVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PERSCHIVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PERSCHIVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PERSCHIVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCFG_PERSCHIVL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_RWUSIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_RWUSIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_RWUSIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_SDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_SDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_SDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_GINSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_GINSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_GINSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_GONSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_GONSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_GONSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_SGINAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_SGINAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_SGINAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_CGINAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_CGINAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_CGINAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_SGONAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_SGONAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_SGONAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_CGONAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_CGONAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_CGONAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DCTL_POPRGDNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_POPRGDNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DCTL_POPRGDNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DSTS_SUSPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_SUSPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_SUSPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DSTS_ENUMSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_ENUMSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_ENUMSPD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_ENUMSPD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_ENUMSPD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DSTS_EERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_EERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DSTS_EERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DSTS_FNSOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_EPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_EPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_EPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_TOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_TOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_TOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_ITTXFEMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_ITTXFEMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_ITTXFEMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNMM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNMM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_TXFURM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_TXFURM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_TXFURM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPMSK_BIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_BIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPMSK_BIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPMSK_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPMSK_EPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_EPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_EPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPMSK_STUPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_STUPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_STUPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPMSK_OTEPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_OTEPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_OTEPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPMSK_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPMSK_OPEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_OPEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_OPEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPMSK_BOIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_BOIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPMSK_BOIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DAINT_IEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DAINT_OEPINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DAINTMSK_IEPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DAINTMSK_OEPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DVBUSDIS_VBUSDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DVBUSPULSE_DVBUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTHRCTL_NONISOTHREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_NONISOTHREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_NONISOTHREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTHRCTL_ISOTHREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_ISOTHREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_ISOTHREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTHRCTL_TXTHRLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHRLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTHRCTL_ARPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_ARPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DTHRCTL_ARPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEMPMSK_INEPTXFEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DEACHINT_IEP1INT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINT_IEP1INT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINT_IEP1INT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DEACHINT_OEP1INT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINT_OEP1INT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINT_OEP1INT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_IEP1INTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_IEP1INTM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_IEP1INTM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_OEP1INTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_OEP1INTM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_OEP1INTM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_EPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_EPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_EPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_TOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_TOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_TOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_ITTXFEMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_ITTXFEMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_ITTXFEMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_INEPNMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_INEPNMM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_INEPNMM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_INEPNEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_INEPNEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_INEPNEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_TXFURM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_TXFURM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_TXFURM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_BIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_BIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_BIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPEACHMSK1_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_EPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_EPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_EPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_TOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_TOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_TOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_ITTXFEMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_ITTXFEMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_ITTXFEMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_INEPNMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_INEPNMM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_INEPNMM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_INEPNEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_INEPNEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_INEPNEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_TXFURM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_TXFURM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_TXFURM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_BIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_BIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_BIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_BERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_BERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_BERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_NYETM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_NYETM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPEACHMSK1_NYETM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT0_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT0_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT1_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT1_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT2_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT2_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT3_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT3_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT4_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT4_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT5_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT5_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT6_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT6_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_TOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_TOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_TOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_ITTXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_ITTXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_ITTXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_INEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_INEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_INEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFIFOUDRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFIFOUDRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFIFOUDRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_BNA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_BNA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_BNA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_PKTDRPSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_PKTDRPSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_PKTDRPSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPINT7_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPINT7_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_PKTCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_PKTCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_PKTCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_PKTCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPDMA1_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPDMA2_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPDMA3_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPDMA4_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPDMA5_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTXFSTS0_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTXFSTS1_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTXFSTS2_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTXFSTS3_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTXFSTS4_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DTXFSTS5_INEPTFSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_MCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_MCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_MCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_MCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_MPSIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_MPSIZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_MPSIZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_MPSIZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_USBAEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_USBAEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_USBAEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EONUM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EONUM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EONUM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_NAKSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_NAKSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_NAKSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_Stall_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_Stall_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_Stall_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SD0PID_SEVNFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SD0PID_SEVNFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT0_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT0_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT0_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT0_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT0_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT0_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT0_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT1_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT1_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT1_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT1_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT1_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT1_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT1_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT2_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT2_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT2_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT2_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT2_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT2_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT2_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT3_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT3_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT3_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT3_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT3_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT3_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT3_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT4_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT4_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT4_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT4_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT4_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT4_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT4_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT5_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT5_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT5_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT5_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT5_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT5_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT5_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT6_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT6_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT6_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT6_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT6_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT6_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT6_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT7_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT7_EPDISD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_EPDISD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_EPDISD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT7_STUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_STUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_STUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT7_OTEPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_OTEPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_OTEPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT7_B2BSTUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_B2BSTUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_B2BSTUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPINT7_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPINT7_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_PKTCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_PKTCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(OTGHSDEVICEENUMS_HPP)
