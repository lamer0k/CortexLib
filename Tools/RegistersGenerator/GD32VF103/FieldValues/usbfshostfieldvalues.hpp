/*******************************************************************************
* Filename      : usbfshostfieldvalues.hpp
*
* Details       : Enumerations related with USBFS_HOST peripheral. This header
*                 file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USBFSHOSTENUMS_HPP)
#define USBFSHOSTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCTL_CLKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCTL_CLKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCTL_CLKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCTL_CLKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCTL_CLKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HFT_FRI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HFINFR_FRNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HFINFR_FRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPTFQSTAT_PTXFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPTFQSTAT_PTXREQS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPTFQSTAT_PTXREQT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HACHINT_HACHINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HACHINTEN_CINTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PCST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PCST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PCST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PCD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PEDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PEDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PEDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PREM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PREM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PREM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PLST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PLST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PLST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HPCS_PLST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HPCS_PLST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HPCS_PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HPCS_PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HPCS_PS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HPCS_PS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HPCS_PS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH0CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH0CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH0CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH1CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH1CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH1CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH2CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH2CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH2CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH3CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH3CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH3CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH4CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH4CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH4CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH5CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH5CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH5CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH6CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH6CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH6CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_HOST_HCH7CTL_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7CTL_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7CTL_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_LSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7CTL_LSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7CTL_LSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH7CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH7CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7CTL_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7CTL_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_CDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7CTL_CDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7CTL_CDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7CTL_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7CTL_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7CTL_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_CH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_USBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_USBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_USBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_BBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_BBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_BBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_REQOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_REQOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_REQOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTF_DTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTF_DTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTF_DTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_TFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_TFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_TFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_CHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_CHIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_CHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_STALLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_STALLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_STALLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_NAKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_NAKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_NAKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_ACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_ACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_ACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_USBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_USBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_USBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_BBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_BBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_BBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_REQOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_REQOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_REQOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7INTEN_DTERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7INTEN_DTERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7INTEN_DTERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH0LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH0LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH0LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH0LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH0LEN_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH1LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH1LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH1LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH1LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH1LEN_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH2LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH2LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH2LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH2LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH2LEN_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH3LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH3LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH3LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH3LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH3LEN_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH4LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH4LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH4LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH4LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH4LEN_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH5LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH5LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH5LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH5LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH5LEN_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH6LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH6LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH6LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH6LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH6LEN_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_HOST_HCH7LEN_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_HOST_HCH7LEN_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_HOST_HCH7LEN_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_HOST_HCH7LEN_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_HOST_HCH7LEN_DPID_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(USBFSHOSTENUMS_HPP)
