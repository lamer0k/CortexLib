/*******************************************************************************
* Filename      : i2c1fieldvalues.hpp
*
* Details       : Enumerations related with I2C1 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2C1ENUMS_HPP)
#define I2C1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_SWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotUnderReset = FieldValue<I2C1_CR1_SWRST_Values, BaseType, 0U> ;
  using UnderReset = FieldValue<I2C1_CR1_SWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ALERT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FollowedByNack = FieldValue<I2C1_CR1_ALERT_Values, BaseType, 0U> ;
  using FollowedByAck = FieldValue<I2C1_CR1_ALERT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_PEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoTransfer = FieldValue<I2C1_CR1_PEC_Values, BaseType, 0U> ;
  using Transfer = FieldValue<I2C1_CR1_PEC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_POS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CurrentByte = FieldValue<I2C1_CR1_POS_Values, BaseType, 0U> ;
  using NextByte = FieldValue<I2C1_CR1_POS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoAcknowledge = FieldValue<I2C1_CR1_ACK_Values, BaseType, 0U> ;
  using Acknowledge = FieldValue<I2C1_CR1_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<I2C1_CR1_STOP_Values, BaseType, 0U> ;
  using Enable = FieldValue<I2C1_CR1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<I2C1_CR1_START_Values, BaseType, 0U> ;
  using Enable = FieldValue<I2C1_CR1_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_NOSTRETCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Enable = FieldValue<I2C1_CR1_NOSTRETCH_Values, BaseType, 0U> ;
  using Diable = FieldValue<I2C1_CR1_NOSTRETCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ENGC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<I2C1_CR1_ENGC_Values, BaseType, 0U> ;
  using Enable = FieldValue<I2C1_CR1_ENGC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ENPEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<I2C1_CR1_ENPEC_Values, BaseType, 0U> ;
  using Enable = FieldValue<I2C1_CR1_ENPEC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ENARP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<I2C1_CR1_ENARP_Values, BaseType, 0U> ;
  using Enable = FieldValue<I2C1_CR1_ENARP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_SMBTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Device = FieldValue<I2C1_CR1_SMBTYPE_Values, BaseType, 0U> ;
  using Host = FieldValue<I2C1_CR1_SMBTYPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_SMBUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using I2cMode = FieldValue<I2C1_CR1_SMBUS_Values, BaseType, 0U> ;
  using SmBusMode = FieldValue<I2C1_CR1_SMBUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<I2C1_CR1_PE_Values, BaseType, 0U> ;
  using Enable = FieldValue<I2C1_CR1_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_LAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_LAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_LAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_ITBUFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_ITBUFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_ITBUFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_ITEVTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_ITEVTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_ITEVTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_ITERREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_ITERREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_ITERREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_ADDMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Bits7 = FieldValue<I2C1_OAR1_ADDMODE_Values, BaseType, 0U> ;
  using Bits10 = FieldValue<I2C1_OAR1_ADDMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_ADD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR1_ADD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR1_ADD10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_OAR1_ADD10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_OAR1_ADD10_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_ADD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_ADD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR1_ADD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR1_ADD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR2_ADD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR2_ENDUAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR2_ENDUAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR2_ENDUAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_SMBALERT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_SMBALERT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_SMBALERT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_PECERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_PECERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_PECERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_AF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_AF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_AF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_ARLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_ARLO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_ARLO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_TxE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_TxE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_TxE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_RxNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_RxNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_RxNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_STOPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_STOPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_STOPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_ADD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_ADD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_ADD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_BTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_BTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_BTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_ADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_ADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR1_SB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR1_SB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR1_SB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_PEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_DUALF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR2_DUALF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR2_DUALF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_SMBHOST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR2_SMBHOST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR2_SMBHOST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_SMBDEFAULT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR2_SMBDEFAULT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR2_SMBDEFAULT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_GENCALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR2_GENCALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR2_GENCALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_TRA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR2_TRA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR2_TRA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR2_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR2_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_SR2_MSL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_SR2_MSL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_SR2_MSL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CCR_F_S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using StandartMode = FieldValue<I2C1_CCR_F_S_Values, BaseType, 0U> ;
  using FastMode = FieldValue<I2C1_CCR_F_S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CCR_DUTY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DutyCycles_2 = FieldValue<I2C1_CCR_DUTY_Values, BaseType, 0U> ;
  using DutyCycles_16_9 = FieldValue<I2C1_CCR_DUTY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CCR_CCR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TRISE_TRISE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(I2C1ENUMS_HPP)
