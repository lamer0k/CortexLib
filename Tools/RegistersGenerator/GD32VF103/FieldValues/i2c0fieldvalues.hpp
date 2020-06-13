/*******************************************************************************
* Filename      : i2c0fieldvalues.hpp
*
* Details       : Enumerations related with I2C0 peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(I2C0ENUMS_HPP)
#define I2C0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_SRESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_SRESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_SRESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_SALT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_SALT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_SALT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_PECTRANS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_PECTRANS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_PECTRANS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_POAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_POAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_POAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_ACKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_ACKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_ACKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_SS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_SS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_SS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_GCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_GCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_GCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_PECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_PECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_PECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_ARPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_ARPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_ARPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_SMBSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_SMBSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_SMBSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_SMBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_SMBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_SMBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL0_I2CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL0_I2CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL0_I2CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL1_DMALST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL1_DMALST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL1_DMALST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL1_DMAON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL1_DMAON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL1_DMAON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL1_BUFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL1_BUFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL1_BUFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL1_EVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL1_EVIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL1_EVIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL1_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CTL1_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CTL1_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CTL1_I2CCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_SADDR0_ADDFORMAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_SADDR0_ADDFORMAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_SADDR0_ADDFORMAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_SADDR0_ADDRESS9_8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_SADDR0_ADDRESS9_8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_SADDR0_ADDRESS9_8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C0_SADDR0_ADDRESS9_8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C0_SADDR0_ADDRESS9_8_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_SADDR0_ADDRESS7_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_SADDR0_ADDRESS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_SADDR0_ADDRESS0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_SADDR0_ADDRESS0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_SADDR1_ADDRESS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_SADDR1_DUADEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_SADDR1_DUADEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_SADDR1_DUADEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_DATA_TRB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_SMBALT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_SMBALT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_SMBALT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_SMBTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_SMBTO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_SMBTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_PECERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_PECERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_PECERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_OUERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_OUERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_OUERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_AERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_AERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_AERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_LOSTARB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_LOSTARB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_LOSTARB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_BERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_BERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_BERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_TBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_TBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_TBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_RBNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_RBNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_RBNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_STPDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_STPDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_STPDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_ADD10SEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_ADD10SEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_ADD10SEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_BTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_BTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_BTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_ADDSEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_ADDSEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_ADDSEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT0_SBSEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT0_SBSEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT0_SBSEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_PECV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_DUMODF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT1_DUMODF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT1_DUMODF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_HSTSMB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT1_HSTSMB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT1_HSTSMB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_DEFSMB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT1_DEFSMB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT1_DEFSMB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_RXGC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT1_RXGC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT1_RXGC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_TR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT1_TR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT1_TR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_I2CBSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT1_I2CBSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT1_I2CBSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_STAT1_MASTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_STAT1_MASTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_STAT1_MASTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CKCFG_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CKCFG_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CKCFG_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CKCFG_DTCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C0_CKCFG_DTCY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C0_CKCFG_DTCY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_CKCFG_CLKC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C0_RT_RISETIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(I2C0ENUMS_HPP)
