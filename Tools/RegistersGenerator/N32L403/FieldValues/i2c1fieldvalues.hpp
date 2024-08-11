/*******************************************************************************
* Filename      : i2c1fieldvalues.hpp
*
* Details       : Enumerations related with I2C1 peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_SMBMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_SMBMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_SMBMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_SMBTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_SMBTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_SMBTYPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_ARPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_ARPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_ARPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_PECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_PECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_PECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_GCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_GCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_GCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_NOEXTEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_NOEXTEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_NOEXTEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_STARTGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_STARTGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_STARTGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_STOPGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_STOPGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_STOPGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_ACKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_ACKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_ACKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_ACKPOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_ACKPOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_ACKPOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_PEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_PEC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_PEC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_SMBALERT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_SMBALERT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_SMBALERT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL1_SWRESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL1_SWRESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL1_SWRESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL2_CLKFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL2_ERRINTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL2_ERRINTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL2_ERRINTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL2_EVTINTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL2_EVTINTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL2_EVTINTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL2_BUFINTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL2_BUFINTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL2_BUFINTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL2_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL2_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL2_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CTRL2_DMALAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CTRL2_DMALAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CTRL2_DMALAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_OADDR1_ADDR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_OADDR1_ADDR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_OADDR1_ADDR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_OADDR1_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_OADDR1_ADDR_H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_OADDR1_ADDR_H_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_OADDR1_ADDR_H_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2C1_I2C_OADDR1_ADDR_H_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2C1_I2C_OADDR1_ADDR_H_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_OADDR1_ADDRMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_OADDR1_ADDRMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_OADDR1_ADDRMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_OADDR2_DUALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_OADDR2_DUALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_OADDR2_DUALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_OADDR2_ADDR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_DAT_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_STARTBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_STARTBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_STARTBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_ADDRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_ADDRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_ADDRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_BSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_BSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_BSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_ADDR10F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_ADDR10F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_ADDR10F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_STOPF__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_STOPF__Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_STOPF__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_RXDATNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_RXDATNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_RXDATNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_TXDATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_TXDATE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_TXDATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_BUSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_BUSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_BUSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_ARLOST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_ARLOST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_ARLOST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_ACKFAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_ACKFAIL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_ACKFAIL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_OVERRUN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_OVERRUN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_OVERRUN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_PECERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_PECERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_PECERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_TIMOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_TIMOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_TIMOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS1_SMBALERT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS1_SMBALERT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS1_SMBALERT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_MSMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS2_MSMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS2_MSMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS2_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS2_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_TRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS2_TRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS2_TRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_GCALLADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS2_GCALLADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS2_GCALLADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_SMBDADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS2_SMBDADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS2_SMBDADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_SMBHADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS2_SMBHADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS2_SMBHADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_DUALFLAG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_STS2_DUALFLAG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_STS2_DUALFLAG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_STS2_PECVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CLKCTRL_CLKCTRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CLKCTRL_DUTY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CLKCTRL_DUTY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CLKCTRL_DUTY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_CLKCTRL_FSMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2C1_I2C_CLKCTRL_FSMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2C1_I2C_CLKCTRL_FSMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2C1_I2C_TMRISE_TMRISE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

