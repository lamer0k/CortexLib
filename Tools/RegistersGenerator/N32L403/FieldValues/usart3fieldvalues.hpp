/*******************************************************************************
* Filename      : usart3fieldvalues.hpp
*
* Details       : Enumerations related with USART3 peripheral. This header file
*                 is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_PEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_PEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_PEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_FEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_FEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_FEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_NEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_NEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_NEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_OREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_OREF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_OREF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_IDLEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_IDLEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_IDLEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_RXDNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_RXDNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_RXDNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_TXC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_TXC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_TXC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_TXDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_TXDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_TXDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_LINBDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_LINBDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_LINBDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_STS_CTSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_STS_CTSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_STS_CTSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_DAT_DATV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_BRCF_DIV_Decimal_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USART3_USART_BRCF_DIV_Decimal_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_BRCF_DIV_Integer_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_SDBRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_SDBRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_SDBRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_RCVWU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_RCVWU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_RCVWU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_RXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_RXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_RXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_TXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_TXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_TXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_IDLEIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_IDLEIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_IDLEIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_RXDNEIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_RXDNEIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_RXDNEIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_TXCIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_TXCIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_TXCIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_TXDEIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_TXDEIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_TXDEIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_PEIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_PEIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_PEIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_PSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_PSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_PCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_PCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_PCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_WUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_WUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_WUM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_WL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_WL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_WL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL1_UEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL1_UEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL1_UEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USART3_USART_CTRL2_ADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_LINBDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_LINBDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_LINBDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_LINBDIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_LINBDIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_LINBDIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_LBCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_LBCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_LBCLK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_CLKPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_CLKPHA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_CLKPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_CLKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_CLKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_CLKPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_CLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_CLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_CLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_STPB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_STPB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_STPB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART3_USART_CTRL2_STPB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART3_USART_CTRL2_STPB_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL2_LINMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL2_LINMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL2_LINMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_ERRIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_ERRIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_ERRIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_IRDAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_IRDAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_IRDAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_IRDALP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_IRDALP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_IRDALP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_HDMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_HDMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_HDMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_SCNACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_SCNACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_SCNACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_SCMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_SCMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_SCMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_DMARXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_DMARXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_DMARXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_DMATXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_DMATXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_DMATXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_RTSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_RTSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_RTSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_CTSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_CTSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_CTSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_CTRL3_CTSIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART3_USART_CTRL3_CTSIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART3_USART_CTRL3_CTSIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_GTP_PSCV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART3_USART_GTP_GTV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

