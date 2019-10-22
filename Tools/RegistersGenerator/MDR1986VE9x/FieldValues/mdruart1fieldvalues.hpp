/*******************************************************************************
* Filename      : mdruart1fieldvalues.hpp
*
* Details       : Enumerations related with MDR_UART1 peripheral. This header
*                 file is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRUART1ENUMS_HPP)
#define MDRUART1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DR_FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ok = FieldValue<MDR_UART1_DR_FE_Values, BaseType, 0U> ;
  using ERROR = FieldValue<MDR_UART1_DR_FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DR_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_DR_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_DR_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DR_BE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_DR_BE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_DR_BE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DR_OE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_DR_OE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_DR_OE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RSR_ECR_FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ok = FieldValue<MDR_UART1_RSR_ECR_FE_Values, BaseType, 0U> ;
  using ERROR = FieldValue<MDR_UART1_RSR_ECR_FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RSR_ECR_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RSR_ECR_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RSR_ECR_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RSR_ECR_BE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RSR_ECR_BE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RSR_ECR_BE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RSR_ECR_OE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RSR_ECR_OE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RSR_ECR_OE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_CTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_UART1_FR_CTS_Values, BaseType, 0U> ;
  using Active = FieldValue<MDR_UART1_FR_CTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_DSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_FR_DSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_FR_DSR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_DCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_FR_DCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_FR_DCD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_UART1_FR_BUSY_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_UART1_FR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_RXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_UART1_FR_RXFE_Values, BaseType, 0U> ;
  using Empty = FieldValue<MDR_UART1_FR_RXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_TXFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_UART1_FR_TXFF_Values, BaseType, 0U> ;
  using Full = FieldValue<MDR_UART1_FR_TXFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_RXFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_FR_RXFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_FR_RXFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_FR_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_FR_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FR_RI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_FR_RI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_FR_RI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ILPR_DVSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IBRD_Baud_DivInt_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_FBRD_Baud_DivFrac_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_LCR_H_BRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_UART1_LCR_H_BRK_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_UART1_LCR_H_BRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_LCR_H_PEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_LCR_H_PEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_LCR_H_PEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_LCR_H_EPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Odd = FieldValue<MDR_UART1_LCR_H_EPS_Values, BaseType, 0U> ;
  using Even = FieldValue<MDR_UART1_LCR_H_EPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_LCR_H_STP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_LCR_H_STP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_LCR_H_STP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_LCR_H_FEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_LCR_H_FEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_LCR_H_FEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_LCR_H_WLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using bit_5 = FieldValue<MDR_UART1_LCR_H_WLEN_Values, BaseType, 0U> ;
  using bit_6 = FieldValue<MDR_UART1_LCR_H_WLEN_Values, BaseType, 1U> ;
  using bit_7 = FieldValue<MDR_UART1_LCR_H_WLEN_Values, BaseType, 2U> ;
  using bit_8 = FieldValue<MDR_UART1_LCR_H_WLEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_LCR_H_SPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_LCR_H_SPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_LCR_H_SPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_UART1_CR_EN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_UART1_CR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_SIREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_SIREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_SIREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_SIRLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_SIRLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_SIRLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_LBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_LBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_LBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_RXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_RXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_RXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_DTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_UART1_CR_DTR_Values, BaseType, 0U> ;
  using Active = FieldValue<MDR_UART1_CR_DTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_RTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_RTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_RTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_Out1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_Out1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_Out1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_Out2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_Out2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_Out2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_RTSEn_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_RTSEn_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_RTSEn_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_CR_CTSEn_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_CR_CTSEn_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_CR_CTSEn_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IFLS_TXIFLSES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Words_le4 = FieldValue<MDR_UART1_IFLS_TXIFLSES_Values, BaseType, 0U> ;
  using Words_le8 = FieldValue<MDR_UART1_IFLS_TXIFLSES_Values, BaseType, 1U> ;
  using Words_le16 = FieldValue<MDR_UART1_IFLS_TXIFLSES_Values, BaseType, 2U> ;
  using Words_le24 = FieldValue<MDR_UART1_IFLS_TXIFLSES_Values, BaseType, 3U> ;
  using Words_le32 = FieldValue<MDR_UART1_IFLS_TXIFLSES_Values, BaseType, 4U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IFLS_RXIFLSES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Words_ge4 = FieldValue<MDR_UART1_IFLS_RXIFLSES_Values, BaseType, 0U> ;
  using Words_ge8 = FieldValue<MDR_UART1_IFLS_RXIFLSES_Values, BaseType, 1U> ;
  using Words_ge16 = FieldValue<MDR_UART1_IFLS_RXIFLSES_Values, BaseType, 2U> ;
  using Words_ge24 = FieldValue<MDR_UART1_IFLS_RXIFLSES_Values, BaseType, 3U> ;
  using Words_ge32 = FieldValue<MDR_UART1_IFLS_RXIFLSES_Values, BaseType, 4U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_RIM_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_UART1_IMSC_RIM_IM_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_UART1_IMSC_RIM_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_STCM_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_STCM_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_STCM_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_DCDM_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_DCDM_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_DCDM_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_DSRM_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_DSRM_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_DSRM_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_RX_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_RX_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_RX_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_TX_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_TX_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_TX_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_RT_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_RT_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_RT_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_FE_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_FE_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_FE_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_PE_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_PE_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_PE_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_BE_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_BE_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_BE_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_IMSC_OE_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_IMSC_OE_IM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_IMSC_OE_IM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_RIM_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_UART1_RIS_RIM_RIS_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_UART1_RIS_RIM_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_STCM_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_STCM_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_STCM_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_DCDM_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_DCDM_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_DCDM_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_DSRM_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_DSRM_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_DSRM_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_RX_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_RX_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_RX_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_TX_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_TX_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_TX_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_RT_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_RT_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_RT_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_FE_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_FE_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_FE_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_PE_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_PE_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_PE_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_BE_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_BE_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_BE_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_RIS_OE_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_RIS_OE_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_RIS_OE_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_RIM_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_UART1_MIS_RIM_MIS_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_UART1_MIS_RIM_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_STCM_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_STCM_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_STCM_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_DCDM_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_DCDM_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_DCDM_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_DSRM_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_DSRM_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_DSRM_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_RX_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_RX_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_RX_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_TX_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_TX_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_TX_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_RT_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_RT_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_RT_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_FE_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_FE_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_FE_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_PE_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_PE_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_PE_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_BE_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_BE_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_BE_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_MIS_OE_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_MIS_OE_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_MIS_OE_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_RIM_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_UART1_ICR_RIM_IC_Values, BaseType, 0U> ;
  using Clear = FieldValue<MDR_UART1_ICR_RIM_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_STCM_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_STCM_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_STCM_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_DCDM_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_DCDM_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_DCDM_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_DSRM_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_DSRM_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_DSRM_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_RX_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_RX_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_RX_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_TX_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_TX_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_TX_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_RT_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_RT_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_RT_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_FE_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_FE_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_FE_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_PE_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_PE_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_PE_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_BE_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_BE_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_BE_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_ICR_OE_IC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_ICR_OE_IC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_ICR_OE_IC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DMACR_RXDMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MDR_UART1_DMACR_RXDMAE_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MDR_UART1_DMACR_RXDMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DMACR_TXDMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_DMACR_TXDMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_DMACR_TXDMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_DMACR_DMAonErr_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IgnoreError = FieldValue<MDR_UART1_DMACR_DMAonErr_Values, BaseType, 0U> ;
  using StopOnError = FieldValue<MDR_UART1_DMACR_DMAonErr_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_TCR_ITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MDR_UART1_TCR_ITEN_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MDR_UART1_TCR_ITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_TCR_TestFIFO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_TCR_TestFIFO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_TCR_TestFIFO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_UART1_TCR_SIRTest_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_UART1_TCR_SIRTest_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_UART1_TCR_SIRTest_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRUART1ENUMS_HPP)
