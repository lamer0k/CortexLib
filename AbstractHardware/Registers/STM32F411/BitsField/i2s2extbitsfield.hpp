/*******************************************************************************
* Filename      : i2s2extbitsfield.hpp
*
* Details       : Enumerations related with I2S2ext peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2S2EXTENUMS_HPP)
#define I2S2EXTENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

struct ISExtCrBidimodeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrBidimodeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrBidioeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrBidioeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrCrcenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrCrcenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrCrcnextValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrCrcnextValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrDffValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrDffValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrRxonlyValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrRxonlyValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrSsmValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrSsmValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrSsiValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrSsiValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrLsbfirstValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrLsbfirstValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrSpeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrSpeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrBrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrBrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = BitsField<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = BitsField<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = BitsField<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = BitsField<Reg, offset, size, AccessMode, BaseType, 7U> ;
} ;

struct ISExtCrMstrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrMstrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrCpolValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrCpolValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrCphaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrCphaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrTxeieValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrTxeieValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrRxneieValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrRxneieValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrErrieValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrErrieValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrFrfValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrFrfValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrSsoeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrSsoeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrTxdmaenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrTxdmaenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtCrRxdmaenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtCrRxdmaenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrTifrfeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrTifrfeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrBsyValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrBsyValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrOvrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrOvrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrModfValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrModfValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrCrcerrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrCrcerrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrUdrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrUdrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrChsideValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrChsideValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrTxeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrTxeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtSrRxneValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtSrRxneValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtIScfgrISmodValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrISmodValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtIScfgrISeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrISeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtIScfgrIScfgValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrIScfgValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

struct ISExtIScfgrPcmsyncValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrPcmsyncValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtIScfgrISstdValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrISstdValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

struct ISExtIScfgrCkpolValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrCkpolValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtIScfgrDatlenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrDatlenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

struct ISExtIScfgrChlenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtIScfgrChlenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtISprMckoeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtISprMckoeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ISExtISprOddValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ISExtISprOddValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(I2S2EXTENUMS_HPP)
