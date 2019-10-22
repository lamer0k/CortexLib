/*******************************************************************************
* Filename      : mdrssp2fieldvalues.hpp
*
* Details       : Enumerations related with MDR_SSP2 peripheral. This header
*                 file is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRSSP2ENUMS_HPP)
#define MDRSSP2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR0_DSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using bits_4 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 3U> ;
  using bits_5 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 4U> ;
  using bits_6 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 5U> ;
  using bits_7 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 6U> ;
  using bits_8 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 7U> ;
  using bits_9 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 8U> ;
  using bits_10 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 9U> ;
  using bits_11 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 10U> ;
  using bits_12 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 11U> ;
  using bits_13 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 12U> ;
  using bits_14 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 13U> ;
  using bits_15 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 14U> ;
  using bits_16 = FieldValue<MDR_SSP2_CR0_DSS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR0_FRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SPI = FieldValue<MDR_SSP2_CR0_FRF_Values, BaseType, 0U> ;
  using SSI = FieldValue<MDR_SSP2_CR0_FRF_Values, BaseType, 1U> ;
  using Microwire = FieldValue<MDR_SSP2_CR0_FRF_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR0_SPO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Idle_Low = FieldValue<MDR_SSP2_CR0_SPO_Values, BaseType, 0U> ;
  using Idle_High = FieldValue<MDR_SSP2_CR0_SPO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR0_SPH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Leading = FieldValue<MDR_SSP2_CR0_SPH_Values, BaseType, 0U> ;
  using Trailing = FieldValue<MDR_SSP2_CR0_SPH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR0_SCR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR1_LBM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Normal = FieldValue<MDR_SSP2_CR1_LBM_Values, BaseType, 0U> ;
  using LoopBack = FieldValue<MDR_SSP2_CR1_LBM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR1_SSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_SSP2_CR1_SSE_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_SSP2_CR1_SSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR1_MS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Master = FieldValue<MDR_SSP2_CR1_MS_Values, BaseType, 0U> ;
  using Slave = FieldValue<MDR_SSP2_CR1_MS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CR1_SOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SlaveTxEna = FieldValue<MDR_SSP2_CR1_SOD_Values, BaseType, 0U> ;
  using SlaveTxDis = FieldValue<MDR_SSP2_CR1_SOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_DR_Data_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_SR_TFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TX_NotEmpty = FieldValue<MDR_SSP2_SR_TFE_Values, BaseType, 0U> ;
  using TX_Empty = FieldValue<MDR_SSP2_SR_TFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_SR_TNF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TX_Full = FieldValue<MDR_SSP2_SR_TNF_Values, BaseType, 0U> ;
  using TX_NotFull = FieldValue<MDR_SSP2_SR_TNF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_SR_RNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RX_NotEmpty = FieldValue<MDR_SSP2_SR_RNE_Values, BaseType, 0U> ;
  using RX_Empty = FieldValue<MDR_SSP2_SR_RNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_SR_RFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RX_NotFull = FieldValue<MDR_SSP2_SR_RFF_Values, BaseType, 0U> ;
  using RX_Full = FieldValue<MDR_SSP2_SR_RFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Idle = FieldValue<MDR_SSP2_SR_BSY_Values, BaseType, 0U> ;
  using Busy = FieldValue<MDR_SSP2_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_CPSR_CPSDVSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_IMSC_RORIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoEvent = FieldValue<MDR_SSP2_IMSC_RORIM_Values, BaseType, 0U> ;
  using RX_Overrun = FieldValue<MDR_SSP2_IMSC_RORIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_IMSC_RTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoEvent = FieldValue<MDR_SSP2_IMSC_RTIM_Values, BaseType, 0U> ;
  using RX_Timeout = FieldValue<MDR_SSP2_IMSC_RTIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_IMSC_RXIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoEvent = FieldValue<MDR_SSP2_IMSC_RXIM_Values, BaseType, 0U> ;
  using RX_HalfFull = FieldValue<MDR_SSP2_IMSC_RXIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_IMSC_TXIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoEvent = FieldValue<MDR_SSP2_IMSC_TXIM_Values, BaseType, 0U> ;
  using TX_HalfEmpty = FieldValue<MDR_SSP2_IMSC_TXIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_RIS_RORRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_RIS_RORRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_RIS_RORRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_RIS_RTRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_RIS_RTRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_RIS_RTRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_RIS_RXRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_RIS_RXRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_RIS_RXRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_RIS_TXRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_RIS_TXRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_RIS_TXRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_MIS_RORMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_MIS_RORMIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_MIS_RORMIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_MIS_RTMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_MIS_RTMIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_MIS_RTMIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_MIS_RXMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_MIS_RXMIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_MIS_RXMIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_MIS_TXMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_MIS_TXMIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_MIS_TXMIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_ICR_RORIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_SSP2_ICR_RORIC_Values, BaseType, 0U> ;
  using Clear = FieldValue<MDR_SSP2_ICR_RORIC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_ICR_RTIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_ICR_RTIC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_ICR_RTIC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_DMACR_RXDMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_SSP2_DMACR_RXDMAE_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_SSP2_DMACR_RXDMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_SSP2_DMACR_TXDMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_SSP2_DMACR_TXDMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_SSP2_DMACR_TXDMAE_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRSSP2ENUMS_HPP)
