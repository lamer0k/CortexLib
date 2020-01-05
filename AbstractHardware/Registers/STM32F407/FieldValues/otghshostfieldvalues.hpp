/*******************************************************************************
* Filename      : otghshostfieldvalues.hpp
*
* Details       : Enumerations related with OTG_HS_HOST peripheral. This header
*                 file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(OTGHSHOSTENUMS_HPP)
#define OTGHSHOSTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCFG_FSLSPCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCFG_FSLSPCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCFG_FSLSPCS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCFG_FSLSPCS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCFG_FSLSPCS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCFG_FSLSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCFG_FSLSS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCFG_FSLSS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HFIR_FRIVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HFNUM_FRNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HFNUM_FTREM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPTXSTS_PTXFSAVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPTXSTS_PTXQSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPTXSTS_PTXQTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HAINT_HAINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HAINTMSK_HAINTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PCSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PCDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PCDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PCDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PENCHNG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PENCHNG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PENCHNG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_POCA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_POCA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_POCA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_POCCHNG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_POCCHNG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_POCCHNG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PRES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PRES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PRES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PSUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PSUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PLSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PLSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PLSTS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PLSTS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PLSTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PPWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PPWR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PPWR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PTCTL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HPRT_PSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PSPD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PSPD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HPRT_PSPD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR0_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR0_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR1_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR1_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR2_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR2_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR3_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR3_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR4_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR4_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR5_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR5_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR6_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR6_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR7_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR7_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR8_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR8_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR9_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR9_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR10_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR10_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_MPSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_EPDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_LSDEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_LSDEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_LSDEV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_EPTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_EPTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_MC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_MC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_MC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_DAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_ODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_ODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_ODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_CHDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_CHDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_CHDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCCHAR11_CHENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_CHENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCCHAR11_CHENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT0_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT0_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT0_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT0_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT0_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT0_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT1_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT1_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT1_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT1_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT1_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT1_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT2_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT2_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT2_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT2_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT2_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT2_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT3_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT3_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT3_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT3_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT3_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT3_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT4_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT4_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT4_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT4_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT4_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT4_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT5_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT5_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT5_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT5_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT5_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT5_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT6_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT6_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT6_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT6_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT6_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT6_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT7_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT7_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT7_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT7_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT7_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT7_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT8_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT8_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT8_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT8_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT8_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT8_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT9_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT9_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT9_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT9_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT9_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT9_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT10_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT10_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT10_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT10_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT10_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT10_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT11_PRTADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT11_HUBADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT11_XACTPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_XACTPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_XACTPOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_XACTPOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_XACTPOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT11_COMPLSPLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_COMPLSPLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_COMPLSPLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCSPLT11_SPLITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_SPLITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCSPLT11_SPLITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT0_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT0_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT1_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT1_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT2_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT2_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT3_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT3_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT4_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT4_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT5_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT5_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT6_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT6_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT7_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT7_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT8_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT8_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT9_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT9_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT10_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT10_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_XFRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_XFRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_XFRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_CHH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_CHH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_CHH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_NAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_NAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_NAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_TXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_TXERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_TXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_BBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_BBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_BBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_FRMOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_FRMOR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_FRMOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINT11_DTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_DTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINT11_DTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK0_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK0_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK1_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK1_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK2_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK2_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK3_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK3_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK4_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK4_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK5_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK5_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK6_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK6_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK7_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK7_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK8_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK8_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK9_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK9_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK10_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK10_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_XFRCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_XFRCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_XFRCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_CHHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_CHHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_CHHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_AHBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_AHBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_AHBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_STALLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_STALLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_STALLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_NAKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_NAKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_NAKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_ACKM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_ACKM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_ACKM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_NYET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_NYET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_NYET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_TXERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_TXERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_TXERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_BBERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_BBERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_BBERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_FRMORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_FRMORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_FRMORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCINTMSK11_DTERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_DTERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCINTMSK11_DTERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ0_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ0_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ0_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ0_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ0_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ0_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ0_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ1_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ1_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ1_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ1_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ1_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ1_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ1_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ2_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ2_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ2_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ2_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ2_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ2_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ2_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ3_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ3_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ3_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ3_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ3_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ3_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ3_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ4_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ4_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ4_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ4_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ4_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ4_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ4_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ5_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ5_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ5_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ5_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ5_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ5_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ5_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ6_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ6_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ6_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ6_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ6_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ6_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ6_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ7_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ7_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ7_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ7_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ7_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ7_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ7_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ8_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ8_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ8_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ8_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ8_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ8_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ8_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ9_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ9_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ9_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ9_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ9_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ9_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ9_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ10_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ10_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ10_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ10_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ10_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ10_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ10_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ11_XFRSIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ11_PKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCTSIZ11_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ11_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ11_DPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ11_DPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<OTG_HS_HOST_OTG_HS_HCTSIZ11_DPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA0_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA1_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA2_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA3_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA4_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA5_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA6_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA7_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA8_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA9_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA10_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_HOST_OTG_HS_HCDMA11_DMAADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(OTGHSHOSTENUMS_HPP)
