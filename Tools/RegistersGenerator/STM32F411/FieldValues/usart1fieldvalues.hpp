/*******************************************************************************
* Filename      : usart1fieldvalues.hpp
*
* Details       : Enumerations related with USART1 peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(USART1ENUMS_HPP)
#define USART1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_CTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_CTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_CTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_LBD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_LBD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_LBD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_TC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_TC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_TC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_IDLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_IDLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_IDLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_ORE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_ORE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_ORE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_NF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_NF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_NF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_SR_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_SR_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_SR_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_BRR_DIV_Mantissa_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_BRR_DIV_Fraction_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USART_BRR_DIV_Fraction_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_UE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_UE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_UE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_M_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_WAKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_WAKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_WAKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_PCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_PCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_PCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_PS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_PEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_PEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_PEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_TXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_TXEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_TXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_RXNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_RXNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_RXNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_IDLEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_IDLEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_IDLEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_TE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_TE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_TE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_RE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_RE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_RE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_RWU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_RWU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_RWU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_SBK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_SBK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_SBK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_LINEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_LINEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_LINEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_STOP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART_CR_STOP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART_CR_STOP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_CLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_CLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_CLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_CPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_CPHA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_LBCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_LBCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_LBCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_LBDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_LBDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_LBDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_LBDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_LBDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_LBDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_ADD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_ADD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART_CR_ADD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART_CR_ADD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USART_CR_ADD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USART_CR_ADD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USART_CR_ADD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USART_CR_ADD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USART_CR_ADD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USART_CR_ADD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USART_CR_ADD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USART_CR_ADD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USART_CR_ADD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USART_CR_ADD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USART_CR_ADD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USART_CR_ADD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_ONEBIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_ONEBIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_ONEBIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_CTSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_CTSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_CTSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_CTSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_CTSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_CTSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_RTSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_RTSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_RTSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_DMAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_DMAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_DMAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_DMAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_DMAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_DMAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_SCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_SCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_SCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_NACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_NACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_NACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_HDSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_HDSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_HDSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_IRLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_IRLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_IRLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_IREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_IREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_IREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_CR_EIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART_CR_EIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART_CR_EIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_GTPR_GT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART_GTPR_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(USART1ENUMS_HPP)
