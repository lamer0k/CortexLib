/*******************************************************************************
* Filename      : usbfsfieldvalues.hpp
*
* Details       : Enumerations related with USB_FS peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(USBFSENUMS_HPP)
#define USBFSENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP0R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP0R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP0R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP0R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP0R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP0R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP0R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP0R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP0R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP0R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP1R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP1R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP1R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP1R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP1R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP1R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP1R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP1R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP1R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP1R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP2R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP2R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP2R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP2R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP2R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP2R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP2R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP2R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP2R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP2R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP3R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP3R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP3R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP3R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP3R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP3R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP3R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP3R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP3R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP3R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP4R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP4R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP4R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP4R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP4R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP4R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP4R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP4R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP4R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP4R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP5R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP5R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP5R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP5R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP5R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP5R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP5R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP5R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP5R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP5R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP6R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP6R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP6R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP6R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP6R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP6R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP6R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP6R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP6R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP6R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_EP7R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP7R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP7R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP7R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP7R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_EP7R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_EP7R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_EP7R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_EP7R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_EP7R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_FRES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_FRES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_FRES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_PDWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_PDWN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_PDWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_LPMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_LPMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_LPMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_FSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_FSUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_FSUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_RESUME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_RESUME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_RESUME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_L1RESUME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_L1RESUME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_L1RESUME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_L1REQM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_L1REQM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_L1REQM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_ESOFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_ESOFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_ESOFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_SOFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_SOFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_SOFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_RESETM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_RESETM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_RESETM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_SUSPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_SUSPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_SUSPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_WKUPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_WKUPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_WKUPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_ERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_ERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_ERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_PMAOVRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_PMAOVRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_PMAOVRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_CNTR_CTRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_CNTR_CTRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_CNTR_CTRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_EP_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_ISTR_EP_ID_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_L1REQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_L1REQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_L1REQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_ESOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_ESOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_ESOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_SOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_SOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_SOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_RESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_SUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_SUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_SUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_WKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_WKUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_WKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_PMAOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_PMAOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_PMAOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_ISTR_CTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_ISTR_CTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_ISTR_CTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_FNR_FN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_FNR_LSOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_FNR_LSOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_FNR_LSOF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_FNR_LSOF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_FNR_LSOF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_FNR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_FNR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_FNR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_FNR_RXDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_FNR_RXDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_FNR_RXDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_FNR_RXDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_FNR_RXDP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_FNR_RXDP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_DADDR_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_DADDR_EF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_DADDR_EF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_DADDR_EF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BTABLE_BTABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_LPMCSR_LPMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_LPMCSR_LPMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_LPMCSR_LPMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_LPMCSR_LPMACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_LPMCSR_LPMACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_LPMCSR_LPMACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_LPMCSR_REMWAKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_LPMCSR_REMWAKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_LPMCSR_REMWAKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_LPMCSR_BESL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_FS_LPMCSR_BESL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_BCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_BCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_BCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_DCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_DCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_DCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_PDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_PDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_PDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_SDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_SDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_SDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_DCDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_DCDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_DCDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_PDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_PDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_PDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_SDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_SDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_SDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_PS2DET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_PS2DET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_PS2DET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FS_BCDR_DPPU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FS_BCDR_DPPU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FS_BCDR_DPPU_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(USBFSENUMS_HPP)
