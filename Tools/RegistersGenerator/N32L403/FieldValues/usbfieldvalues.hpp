/*******************************************************************************
* Filename      : usbfieldvalues.hpp
*
* Details       : Enumerations related with USB peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP0_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP0_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP0_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP0_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP0_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP0_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP0_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP0_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP0_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP0_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP1_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP1_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP1_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP1_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP1_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP1_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP1_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP1_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP1_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP1_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP2_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP2_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP2_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP2_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP2_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP2_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP2_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP2_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP2_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP2_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP3_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP3_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP3_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP3_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP3_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP3_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP3_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP3_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP3_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP3_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP4_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP4_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP4_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP4_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP4_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP4_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP4_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP4_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP4_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP4_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP5_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP5_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP5_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP5_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP5_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP5_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP5_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP5_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP5_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP5_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP6_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP6_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP6_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP6_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP6_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP6_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP6_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP6_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP6_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP6_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_EPADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_EP7_EPADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_STS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_STS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_STS_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP7_STS_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP7_STS_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_DATTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_DATTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_DATTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_CTRS_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_CTRS_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_CTRS_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP7_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP7_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_STS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_STS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_STS_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_EP7_STS_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_EP7_STS_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_DATTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_DATTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_DATTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_EP7_CTRS_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_EP7_CTRS_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_EP7_CTRS_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_FRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_FRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_FRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_PD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_PD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_LP_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_LP_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_LP_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_FSUSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_FSUSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_FSUSPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_RESUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_RESUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_RESUM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_ESOFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_ESOFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_ESOFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_SOFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_SOFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_SOFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_RSTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_RSTM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_RSTM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_SUSPDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_SUSPDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_SUSPDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_WKUPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_WKUPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_WKUPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_ERRORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_ERRORM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_ERRORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_PMAOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_PMAOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_PMAOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_CTRL_CTRSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_CTRL_CTRSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_CTRL_CTRSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_EP_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_USB_STS_EP_ID_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_ESOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_ESOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_ESOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_SOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_SOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_SOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_SUSPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_SUSPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_SUSPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_WKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_WKUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_WKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_ERROR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_ERROR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_ERROR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_PMAO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_PMAO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_PMAO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_STS_CTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_STS_CTRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_STS_CTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_FN_FN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_FN_LSTSOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_FN_LSTSOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_FN_LSTSOF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_USB_FN_LSTSOF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_USB_FN_LSTSOF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_FN_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_FN_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_FN_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_FN_RXDM_STS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_FN_RXDM_STS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_FN_RXDM_STS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_FN_RXDP_STS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_FN_RXDP_STS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_FN_RXDP_STS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_ADDR_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_ADDR_EFUC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_USB_ADDR_EFUC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_USB_ADDR_EFUC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_USB_BUFTAB_BUFTAB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

