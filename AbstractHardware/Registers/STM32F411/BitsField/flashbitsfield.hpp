/*******************************************************************************
* Filename      : flashbitsfield.hpp
*
* Details       : Enumerations related with FLASH peripheral. This header file
*                 is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(FLASHENUMS_HPP)
#define FLASHENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

struct FlashAcrLatencyValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashAcrLatencyValues: public RegisterField<Reg, offset, size, AccessMode> 
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

struct FlashAcrPrftenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashAcrPrftenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashAcrIcenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashAcrIcenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashAcrDcenValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashAcrDcenValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashAcrIcrstValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashAcrIcrstValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashAcrDcrstValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashAcrDcrstValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashSrEopValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashSrEopValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashSrOperrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashSrOperrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashSrWrperrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashSrWrperrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashSrPgaerrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashSrPgaerrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashSrPgperrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashSrPgperrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashSrPgserrValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashSrPgserrValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashSrBsyValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashSrBsyValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashCrPgValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrPgValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashCrSerValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrSerValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashCrMerValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrMerValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashCrSnbValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrSnbValues: public RegisterField<Reg, offset, size, AccessMode> 
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

struct FlashCrPsizeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrPsizeValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

struct FlashCrStrtValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrStrtValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashCrEopieValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrEopieValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashCrErrieValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrErrieValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashCrLockValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashCrLockValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashOptcrOptlockValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashOptcrOptlockValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashOptcrOptstrtValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashOptcrOptstrtValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashOptcrBorLevValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashOptcrBorLevValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

struct FlashOptcrWdgSwValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashOptcrWdgSwValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashOptcrNrstStopValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashOptcrNrstStopValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct FlashOptcrNrstStdbyValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FlashOptcrNrstStdbyValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(FLASHENUMS_HPP)
