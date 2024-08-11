/*******************************************************************************
* Filename      : spi1fieldvalues.hpp
*
* Details       : Enumerations related with SPI1 peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_CLKPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_CLKPHA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_CLKPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_CLKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_CLKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_CLKPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_MSEL__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_MSEL__Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_MSEL__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_SPI_CTRL1_BR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_SPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_SPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_SPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_LSBFF__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_LSBFF__Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_LSBFF__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_SSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_SSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_SSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_SSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_SSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_SSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_RONLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_RONLY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_RONLY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_DATFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_DATFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_DATFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_CRCNEXT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_CRCNEXT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_CRCNEXT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_BIDIROEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_BIDIROEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_BIDIROEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL1_BIDIRMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL1_BIDIRMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL1_BIDIRMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL2_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL2_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL2_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL2_TDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL2_TDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL2_TDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL2_SSOEN__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL2_SSOEN__Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL2_SSOEN__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL2_ERRINTEN___Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL2_ERRINTEN___Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL2_ERRINTEN___Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL2_RNEINTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL2_RNEINTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL2_RNEINTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CTRL2_TEINTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_CTRL2_TEINTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_CTRL2_TEINTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_RNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_RNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_RNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_TE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_TE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_TE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_CHSIDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_CHSIDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_CHSIDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_UNDER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_UNDER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_UNDER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_CRCERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_CRCERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_CRCERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_MODERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_MODERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_MODERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_STS_BUSY__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_STS_BUSY__Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_STS_BUSY__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_DAT_DAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CRCPOLY_CRCPOLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CRCRDAT_CRCRDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_CRCTDAT_CRCTDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_CHBITS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_CHBITS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_CHBITS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_TDATLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_TDATLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_TDATLEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_SPI_I2SCFG_TDATLEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_SPI_I2SCFG_TDATLEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_CLKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_CLKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_CLKPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_STDSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_STDSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_STDSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_SPI_I2SCFG_STDSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_SPI_I2SCFG_STDSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_PCMFSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_PCMFSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_PCMFSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_MODCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_MODCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_MODCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_SPI_I2SCFG_MODCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_SPI_I2SCFG_MODCFG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_I2SEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_I2SEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_I2SEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SCFG_MODSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SCFG_MODSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SCFG_MODSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SPREDIV_LDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SPREDIV_ODD_EVEN__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SPREDIV_ODD_EVEN__Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SPREDIV_ODD_EVEN__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SPI_I2SPREDIV_MCLKOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SPI_I2SPREDIV_MCLKOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SPI_I2SPREDIV_MCLKOEN_Values, BaseType, 1U> ;
} ;

