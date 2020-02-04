/*******************************************************************************
* Filename      : i2c1fieldvalues.hpp
*
* Details       : Enumerations related with I2C1 peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(I2C1ENUMS_HPP)
#define I2C1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_TXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_TXIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_TXIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_RXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_RXIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_RXIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ADDRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_ADDRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_ADDRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_NACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_NACKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_NACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_STOPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_STOPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_STOPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_DNF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<I2C1_CR1_DNF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ANFOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_ANFOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_ANFOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_SWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_SWRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_SWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_TXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_TXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_TXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_RXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_RXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_RXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_SBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_SBC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_SBC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_NOSTRETCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_NOSTRETCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_NOSTRETCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_WUPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_WUPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_WUPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_GCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_GCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_GCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_SMBHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_SMBHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_SMBHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_SMBDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_SMBDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_SMBDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_ALERTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_ALERTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_ALERTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR1_PECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR1_PECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR1_PECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_PECBYTE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_PECBYTE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_PECBYTE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_AUTOEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_AUTOEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_AUTOEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_RELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_RELOAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_RELOAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_NBYTES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_NACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_NACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_NACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_HEAD10R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_HEAD10R_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_HEAD10R_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_ADD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_ADD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_ADD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_RD_WRN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_RD_WRN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_RD_WRN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_SADD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_SADD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_SADD8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_CR2_SADD8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_CR2_SADD8_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_SADD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_CR2_SADD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_CR2_SADD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_CR2_SADD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_OA1_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR1_OA1_0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR1_OA1_0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_OA1_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_OA1_8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR1_OA1_8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR1_OA1_8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_OAR1_OA1_8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_OAR1_OA1_8_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_OA1MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR1_OA1MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR1_OA1MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR1_OA1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR1_OA1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR1_OA1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR2_OA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR2_OA2MSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<I2C1_OAR2_OA2MSK_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_OAR2_OA2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_OAR2_OA2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_OAR2_OA2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMINGR_SCLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMINGR_SCLH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMINGR_SDADEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<I2C1_TIMINGR_SDADEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMINGR_SCLDEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<I2C1_TIMINGR_SCLDEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMINGR_PRESC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<I2C1_TIMINGR_PRESC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMEOUTR_TIMEOUTA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMEOUTR_TIDLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_TIMEOUTR_TIDLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_TIMEOUTR_TIDLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMEOUTR_TIMOUTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_TIMEOUTR_TIMOUTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_TIMEOUTR_TIMOUTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMEOUTR_TIMEOUTB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TIMEOUTR_TEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_TIMEOUTR_TEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_TIMEOUTR_TEXTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_ADDCODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_ALERT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_ALERT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_ALERT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_TIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_PECERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_PECERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_PECERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_ARLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_ARLO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_ARLO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_TCR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_TCR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_TCR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_TC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_TC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_TC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_STOPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_STOPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_STOPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_NACKF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_NACKF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_NACKF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_ADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_ADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_TXIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_TXIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_TXIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ISR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ISR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ISR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_ALERTCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_ALERTCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_ALERTCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_TIMOUTCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_TIMOUTCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_TIMOUTCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_PECCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_PECCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_PECCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_OVRCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_OVRCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_OVRCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_ARLOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_ARLOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_ARLOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_BERRCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_BERRCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_BERRCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_STOPCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_STOPCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_STOPCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_NACKCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_NACKCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_NACKCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_ICR_ADDRCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_ICR_ADDRCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_ICR_ADDRCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_PECR_PEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_RXDR_RXDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_TXDR_TXDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(I2C1ENUMS_HPP)
