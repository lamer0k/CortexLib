/*******************************************************************************
* Filename      : usbfsdevicefieldvalues.hpp
*
* Details       : Enumerations related with USBFS_DEVICE peripheral. This header
*                 file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USBFSDEVICEENUMS_HPP)
#define USBFSDEVICEENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCFG_DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCFG_DS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCFG_DS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DCFG_DS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DCFG_DS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCFG_NZLSOH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCFG_NZLSOH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCFG_NZLSOH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCFG_DAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCFG_EOPFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCFG_EOPFT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCFG_EOPFT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DCFG_EOPFT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DCFG_EOPFT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_RWKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_RWKUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_RWKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_SD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_SD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_SD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_GINS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_GINS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_GINS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_GONS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_GONS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_GONS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_SGINAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_SGINAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_SGINAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_CGINAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_CGINAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_CGINAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_SGONAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_SGONAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_SGONAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_CGONAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_CGONAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_CGONAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DCTL_POIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DCTL_POIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DCTL_POIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DSTAT_SPST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DSTAT_SPST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DSTAT_SPST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DSTAT_ES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DSTAT_ES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DSTAT_ES_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DSTAT_ES_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DSTAT_ES_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DSTAT_FNRSOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEPINTEN_TFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEPINTEN_TFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEPINTEN_TFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEPINTEN_EPDISEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEPINTEN_EPDISEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEPINTEN_EPDISEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEPINTEN_CITOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEPINTEN_CITOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEPINTEN_CITOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEPINTEN_EPTXFUDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEPINTEN_EPTXFUDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEPINTEN_EPTXFUDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEPINTEN_IEPNEEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEPINTEN_IEPNEEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEPINTEN_IEPNEEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEPINTEN_TFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEPINTEN_TFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEPINTEN_TFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEPINTEN_EPDISEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEPINTEN_EPDISEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEPINTEN_EPDISEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEPINTEN_STPFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEPINTEN_STPFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEPINTEN_STPFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEPINTEN_EPRXFOVREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEPINTEN_EPRXFOVREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEPINTEN_EPRXFOVREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEPINTEN_BTBSTPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEPINTEN_BTBSTPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEPINTEN_BTBSTPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DAEPINT_IEPITB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DAEPINT_IEPITB_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DAEPINT_OEPITB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DAEPINT_OEPITB_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DAEPINTEN_IEPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DAEPINTEN_IEPIE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DAEPINTEN_OEPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DAEPINTEN_OEPIE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DVBUSDT_DVBUSDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DVBUSPT_DVBUSPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_MPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_MPL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP0CTL_MPL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP0CTL_MPL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DIEP0CTL_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_SD1PID_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_SD1PID_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_SD1PID_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_SD0PID_SEVENFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_SD0PID_SEVENFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_SD0PID_SEVENFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DIEP1CTL_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_EOFRM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_EOFRM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_EOFRM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_SD1PID_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_SD1PID_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_SD1PID_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_SD0PID_SEVENFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_SD0PID_SEVENFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_SD0PID_SEVENFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DIEP2CTL_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_EOFRM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_EOFRM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_EOFRM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_SD1PID_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_SD1PID_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_SD1PID_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_SD0PID_SEVENFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_SD0PID_SEVENFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_SD0PID_SEVENFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_TXFNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USBFS_DEVICE_DIEP3CTL_TXFNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_EOFRM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_EOFRM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_EOFRM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_SNOOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_SNOOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_SNOOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0CTL_MPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0CTL_MPL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP0CTL_MPL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP0CTL_MPL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_SD1PID_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_SD1PID_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_SD1PID_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_SD0PID_SEVENFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_SD0PID_SEVENFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_SD0PID_SEVENFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_SNOOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_SNOOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_SNOOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_EOFRM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_EOFRM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_EOFRM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_SD1PID_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_SD1PID_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_SD1PID_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_SD0PID_SEVENFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_SD0PID_SEVENFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_SD0PID_SEVENFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_SNOOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_SNOOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_SNOOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_EOFRM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_EOFRM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_EOFRM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_EPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_EPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_SD1PID_SODDFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_SD1PID_SODDFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_SD1PID_SODDFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_SD0PID_SEVENFRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_SD0PID_SEVENFRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_SD0PID_SEVENFRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_SNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_SNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_SNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_CNAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_CNAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_CNAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_STALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_STALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_STALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_SNOOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_SNOOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_SNOOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_EPTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPTYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_NAKS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_NAKS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_NAKS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_EOFRM_DPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_EOFRM_DPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_EOFRM_DPID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_EPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3CTL_EPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3CTL_MPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0INTF_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0INTF_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0INTF_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0INTF_IEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0INTF_IEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0INTF_IEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0INTF_EPTXFUD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0INTF_EPTXFUD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0INTF_EPTXFUD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0INTF_CITO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0INTF_CITO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0INTF_CITO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1INTF_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1INTF_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1INTF_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1INTF_IEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1INTF_IEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1INTF_IEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1INTF_EPTXFUD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1INTF_EPTXFUD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1INTF_EPTXFUD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1INTF_CITO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1INTF_CITO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1INTF_CITO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2INTF_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2INTF_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2INTF_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2INTF_IEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2INTF_IEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2INTF_IEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2INTF_EPTXFUD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2INTF_EPTXFUD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2INTF_EPTXFUD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2INTF_CITO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2INTF_CITO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2INTF_CITO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3INTF_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3INTF_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3INTF_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3INTF_IEPNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3INTF_IEPNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3INTF_IEPNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3INTF_EPTXFUD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3INTF_EPTXFUD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3INTF_EPTXFUD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3INTF_CITO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3INTF_CITO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3INTF_CITO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0INTF_BTBSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0INTF_BTBSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0INTF_BTBSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0INTF_EPRXFOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0INTF_EPRXFOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0INTF_EPRXFOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0INTF_STPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0INTF_STPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0INTF_STPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1INTF_BTBSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1INTF_BTBSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1INTF_BTBSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1INTF_EPRXFOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1INTF_EPRXFOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1INTF_EPRXFOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1INTF_STPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1INTF_STPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1INTF_STPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2INTF_BTBSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2INTF_BTBSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2INTF_BTBSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2INTF_EPRXFOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2INTF_EPRXFOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2INTF_EPRXFOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2INTF_STPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2INTF_STPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2INTF_STPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3INTF_BTBSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3INTF_BTBSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3INTF_BTBSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3INTF_EPRXFOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3INTF_EPRXFOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3INTF_EPRXFOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3INTF_STPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3INTF_STPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3INTF_STPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3INTF_EPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3INTF_EPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3INTF_EPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3INTF_TF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3INTF_TF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3INTF_TF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP0LEN_PCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP0LEN_PCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP0LEN_PCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP0LEN_PCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0LEN_STPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0LEN_STPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0LEN_STPCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP0LEN_STPCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP0LEN_STPCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP0LEN_PCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP0LEN_PCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP0LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1LEN_MCPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP1LEN_MCPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP1LEN_MCPF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP1LEN_MCPF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP1LEN_MCPF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2LEN_MCPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP2LEN_MCPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP2LEN_MCPF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP2LEN_MCPF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP2LEN_MCPF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3LEN_MCPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DIEP3LEN_MCPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DIEP3LEN_MCPF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DIEP3LEN_MCPF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DIEP3LEN_MCPF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1LEN_STPCNT_RXDPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP1LEN_STPCNT_RXDPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP1LEN_STPCNT_RXDPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP1LEN_STPCNT_RXDPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP1LEN_STPCNT_RXDPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP1LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2LEN_STPCNT_RXDPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP2LEN_STPCNT_RXDPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP2LEN_STPCNT_RXDPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP2LEN_STPCNT_RXDPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP2LEN_STPCNT_RXDPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP2LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3LEN_STPCNT_RXDPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USBFS_DEVICE_DOEP3LEN_STPCNT_RXDPID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USBFS_DEVICE_DOEP3LEN_STPCNT_RXDPID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USBFS_DEVICE_DOEP3LEN_STPCNT_RXDPID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USBFS_DEVICE_DOEP3LEN_STPCNT_RXDPID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3LEN_PCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DOEP3LEN_TLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP0TFSTAT_IEPTFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP1TFSTAT_IEPTFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP2TFSTAT_IEPTFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USBFS_DEVICE_DIEP3TFSTAT_IEPTFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(USBFSDEVICEENUMS_HPP)
