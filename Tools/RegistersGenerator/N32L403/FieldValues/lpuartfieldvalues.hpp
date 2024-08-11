/*******************************************************************************
* Filename      : lpuartfieldvalues.hpp
*
* Details       : Enumerations related with LPUART peripheral. This header file
*                 is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_PEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_PEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_PEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_TXC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_TXC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_TXC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_FIFO_OV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_FIFO_OV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_FIFO_OV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_FIFO_FU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_FIFO_FU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_FIFO_FU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_FIFO_HF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_FIFO_HF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_FIFO_HF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_FIFO_NE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_FIFO_NE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_FIFO_NE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_CTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_CTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_CTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_WUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_WUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_WUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_STS_NF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_STS_NF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_STS_NF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_INTEN_PEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_INTEN_PEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_INTEN_PEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_INTEN_TXCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_INTEN_TXCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_INTEN_TXCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_INTEN_FIFO_OVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_INTEN_FIFO_OVIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_INTEN_FIFO_OVIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_INTEN_FIFO_FUIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_INTEN_FIFO_FUIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_INTEN_FIFO_FUIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_INTEN_FIFO_HFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_INTEN_FIFO_HFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_INTEN_FIFO_HFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_INTEN_FIFO_NEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_INTEN_FIFO_NEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_INTEN_FIFO_NEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_INTEN_WUFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_INTEN_WUFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_INTEN_WUFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_PSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_PSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_PSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_TXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_TXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_TXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_FLUSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_FLUSH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_FLUSH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_PCDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_PCDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_PCDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_LOOKBACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_LOOKBACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_LOOKBACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_DMA_TXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_DMA_TXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_DMA_TXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_DMA_RXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_DMA_RXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_DMA_RXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_WUSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_WUSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_WUSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_RTS_THSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_RTS_THSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_RTS_THSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART_LPUART_CTRL_RTS_THSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART_LPUART_CTRL_RTS_THSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_RTSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_RTSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_RTSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_CTSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_CTSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_CTSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_WESEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_WESEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_WESEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART_LPUART_CTRL_WESEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART_LPUART_CTRL_WESEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_CTRL_SMPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART_LPUART_CTRL_SMPCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART_LPUART_CTRL_SMPCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_BRCFG1_INTEGER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_DAT_DAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_BRCFG2_DECIMAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART_LPUART_WUDAT_WUDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

