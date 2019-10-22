/*******************************************************************************
* Filename      : i2c3fieldvalues.hpp
*
* Details       : Enumerations related with I2C3 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2C3ENUMS_HPP)
#define I2C3ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_SWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_SWRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_SWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ALERT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ALERT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ALERT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_PEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_PEC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_PEC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_POS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_POS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_POS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_NOSTRETCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_NOSTRETCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_NOSTRETCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ENGC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ENGC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ENGC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ENPEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ENPEC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ENPEC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ENARP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ENARP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ENARP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_SMBTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_SMBTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_SMBTYPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_SMBUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_SMBUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_SMBUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_LAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_LAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_LAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ITBUFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ITBUFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ITBUFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ITEVTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ITEVTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ITEVTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_ITERREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CR_ITERREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CR_ITERREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CR_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_OAR_ADDMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_OAR_ADDMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_OAR_ADDMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_OAR_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_OAR_ADD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_OAR_ADD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<IC_OAR_ADD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<IC_OAR_ADD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_OAR_ENDUAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_OAR_ENDUAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_OAR_ENDUAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_SMBALERT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_SMBALERT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_SMBALERT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_PECERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_PECERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_PECERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_AF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_AF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_AF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_ARLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_ARLO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_ARLO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_TxE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_TxE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_TxE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_RxNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_RxNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_RxNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_STOPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_STOPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_STOPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_ADD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_ADD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_BTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_BTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_BTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_ADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_ADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_SB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_SB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_SB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_PEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_DUALF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_DUALF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_DUALF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_SMBHOST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_SMBHOST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_SMBHOST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_SMBDEFAULT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_SMBDEFAULT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_SMBDEFAULT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_GENCALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_GENCALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_GENCALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_TRA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_TRA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_TRA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_SR_MSL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_SR_MSL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_SR_MSL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CCR_F_S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CCR_F_S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CCR_F_S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CCR_DUTY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IC_CCR_DUTY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IC_CCR_DUTY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_CCR_CCR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IC_TRISE_TRISE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(I2C3ENUMS_HPP)
