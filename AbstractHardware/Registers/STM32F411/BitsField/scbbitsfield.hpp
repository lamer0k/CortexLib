/*******************************************************************************
* Filename      : scbbitsfield.hpp
*
* Details       : Enumerations related with SCB peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SCBENUMS_HPP)
#define SCBENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

struct ScbCpuidRevisionValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCpuidRevisionValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = BitsField<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = BitsField<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = BitsField<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = BitsField<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = BitsField<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = BitsField<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = BitsField<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = BitsField<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = BitsField<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = BitsField<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = BitsField<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = BitsField<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

struct ScbCpuidConstantValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCpuidConstantValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = BitsField<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = BitsField<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = BitsField<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = BitsField<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = BitsField<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = BitsField<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = BitsField<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = BitsField<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = BitsField<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = BitsField<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = BitsField<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = BitsField<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

struct ScbCpuidVariantValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCpuidVariantValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
  using Value4 = BitsField<Reg, offset, size, AccessMode, BaseType, 4U> ;
  using Value5 = BitsField<Reg, offset, size, AccessMode, BaseType, 5U> ;
  using Value6 = BitsField<Reg, offset, size, AccessMode, BaseType, 6U> ;
  using Value7 = BitsField<Reg, offset, size, AccessMode, BaseType, 7U> ;
  using Value8 = BitsField<Reg, offset, size, AccessMode, BaseType, 8U> ;
  using Value9 = BitsField<Reg, offset, size, AccessMode, BaseType, 9U> ;
  using Value10 = BitsField<Reg, offset, size, AccessMode, BaseType, 10U> ;
  using Value11 = BitsField<Reg, offset, size, AccessMode, BaseType, 11U> ;
  using Value12 = BitsField<Reg, offset, size, AccessMode, BaseType, 12U> ;
  using Value13 = BitsField<Reg, offset, size, AccessMode, BaseType, 13U> ;
  using Value14 = BitsField<Reg, offset, size, AccessMode, BaseType, 14U> ;
  using Value15 = BitsField<Reg, offset, size, AccessMode, BaseType, 15U> ;
} ;

struct ScbIcsrRettobaseValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbIcsrRettobaseValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbIcsrIsrpendingValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbIcsrIsrpendingValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbIcsrPendstclrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbIcsrPendstclrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbIcsrPendstsetValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbIcsrPendstsetValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbIcsrPendsvclrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbIcsrPendsvclrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbIcsrPendsvsetValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbIcsrPendsvsetValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbIcsrNmipendsetValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbIcsrNmipendsetValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbAircrVectresetValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbAircrVectresetValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbAircrVectclractiveValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbAircrVectclractiveValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbAircrSysresetreqValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbAircrSysresetreqValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbAircrPrigroupValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbAircrPrigroupValues: public RegisterField<Reg, offset, size, AccessMode> 
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

struct ScbAircrEndianessValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbAircrEndianessValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbScrSleeponexitValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbScrSleeponexitValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbScrSleepdeepValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbScrSleepdeepValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbScrSeveonpendValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbScrSeveonpendValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCcrNonbasethrdenaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCcrNonbasethrdenaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCcrUsersetmpendValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCcrUsersetmpendValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCcrUnalignTrpValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCcrUnalignTrpValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCcrDivTrpValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCcrDivTrpValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCcrBfhfnmignValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCcrBfhfnmignValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCcrStkalignValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCcrStkalignValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsMemfaultactValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsMemfaultactValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsBusfaultactValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsBusfaultactValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsUsgfaultactValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsUsgfaultactValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsSvcallactValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsSvcallactValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsMonitoractValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsMonitoractValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsPendsvactValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsPendsvactValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsSystickactValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsSystickactValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsUsgfaultpendedValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsUsgfaultpendedValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsMemfaultpendedValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsMemfaultpendedValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsBusfaultpendedValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsBusfaultpendedValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsSvcallpendedValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsSvcallpendedValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsMemfaultenaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsMemfaultenaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsBusfaultenaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsBusfaultenaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbShcrsUsgfaultenaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbShcrsUsgfaultenaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrIaccviolValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrIaccviolValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrMunstkerrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrMunstkerrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrMstkerrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrMstkerrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrMlsperrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrMlsperrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrMmarvalidValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrMmarvalidValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrIbuserrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrIbuserrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrPreciserrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrPreciserrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrImpreciserrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrImpreciserrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrUnstkerrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrUnstkerrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrStkerrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrStkerrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrLsperrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrLsperrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrBfarvalidValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrBfarvalidValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrUndefinstrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrUndefinstrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrInvstateValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrInvstateValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrInvpcValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrInvpcValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrNocpValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrNocpValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrUnalignedValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrUnalignedValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbCfsrUfsrBfsrMmfsrDivbyzeroValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbCfsrUfsrBfsrMmfsrDivbyzeroValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbHfsrVecttblValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbHfsrVecttblValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbHfsrForcedValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbHfsrForcedValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct ScbHfsrDebugVtValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ScbHfsrDebugVtValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(SCBENUMS_HPP)
