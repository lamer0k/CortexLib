/*******************************************************************************
* Filename      : spi0fieldvalues.hpp
*
* Details       : Enumerations related with SPI0 peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(SPI0ENUMS_HPP)
#define SPI0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_BDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_BDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_BDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_BDOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_BDOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_BDOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_CRCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_CRCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_CRCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_FF16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_FF16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_FF16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_RO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_RO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_RO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_SWNSSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_SWNSSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_SWNSSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_SWNSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_SWNSS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_SWNSS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_LF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_LF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_LF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_SPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_SPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_SPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI0_CTL0_PSC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_MSTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_MSTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_MSTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_CKPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_CKPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_CKPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL0_CKPH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL0_CKPH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL0_CKPH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_TBEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_TBEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_TBEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_RBNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_RBNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_RBNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_TMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_TMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_TMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_NSSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_NSSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_NSSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_NSSDRV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_NSSDRV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_NSSDRV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_DMATEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_DMATEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_DMATEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CTL1_DMAREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_CTL1_DMAREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_CTL1_DMAREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_FERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_FERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_FERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_TRANS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_TRANS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_TRANS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_RXORERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_RXORERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_RXORERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_CONFERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_CONFERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_CONFERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_CRCERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_CRCERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_CRCERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_TXURERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_TXURERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_TXURERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_I2SCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_I2SCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_I2SCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_TBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_TBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_TBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_STAT_RBNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_STAT_RBNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_STAT_RBNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_DATA_SPI_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_CRCPOLY_CRCPOLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_RCRC_RCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_TCRC_TCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_I2SSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_I2SSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_I2SSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_I2SEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_I2SEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_I2SEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_I2SOPMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_I2SOPMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_I2SOPMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI0_I2SCTL_I2SOPMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI0_I2SCTL_I2SOPMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_PCMSMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_PCMSMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_PCMSMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_I2SSTD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_I2SSTD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_I2SSTD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI0_I2SCTL_I2SSTD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI0_I2SCTL_I2SSTD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_CKPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_CKPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_CKPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_DTLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_DTLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_DTLEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI0_I2SCTL_DTLEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI0_I2SCTL_DTLEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SCTL_CHLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SCTL_CHLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SCTL_CHLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SPSC_MCKOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SPSC_MCKOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SPSC_MCKOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SPSC_OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI0_I2SPSC_OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI0_I2SPSC_OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI0_I2SPSC_DIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SPI0ENUMS_HPP)
