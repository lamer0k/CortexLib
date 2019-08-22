/*******************************************************************************
* Filename      : mpubitsfield.hpp
*
* Details       : Enumerations related with MPU peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(MPUENUMS_HPP)
#define MPUENUMS_HPP

#include "bitsfield.hpp"     //for BitsField 

struct MpuMpuTyperSeparateValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuTyperSeparateValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuCtrlEnableValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuCtrlEnableValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuCtrlHfnmienaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuCtrlHfnmienaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuCtrlPrivdefenaValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuCtrlPrivdefenaValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuRbarRegionValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRbarRegionValues: public RegisterField<Reg, offset, size, AccessMode> 
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

struct MpuMpuRbarValidValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRbarValidValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuRasrEnableValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrEnableValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuRasrSizeValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrSizeValues: public RegisterField<Reg, offset, size, AccessMode> 
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
  using Value16 = BitsField<Reg, offset, size, AccessMode, BaseType, 16U> ;
  using Value17 = BitsField<Reg, offset, size, AccessMode, BaseType, 17U> ;
  using Value18 = BitsField<Reg, offset, size, AccessMode, BaseType, 18U> ;
  using Value19 = BitsField<Reg, offset, size, AccessMode, BaseType, 19U> ;
  using Value20 = BitsField<Reg, offset, size, AccessMode, BaseType, 20U> ;
  using Value21 = BitsField<Reg, offset, size, AccessMode, BaseType, 21U> ;
  using Value22 = BitsField<Reg, offset, size, AccessMode, BaseType, 22U> ;
  using Value23 = BitsField<Reg, offset, size, AccessMode, BaseType, 23U> ;
  using Value24 = BitsField<Reg, offset, size, AccessMode, BaseType, 24U> ;
  using Value25 = BitsField<Reg, offset, size, AccessMode, BaseType, 25U> ;
  using Value26 = BitsField<Reg, offset, size, AccessMode, BaseType, 26U> ;
  using Value27 = BitsField<Reg, offset, size, AccessMode, BaseType, 27U> ;
  using Value28 = BitsField<Reg, offset, size, AccessMode, BaseType, 28U> ;
  using Value29 = BitsField<Reg, offset, size, AccessMode, BaseType, 29U> ;
  using Value30 = BitsField<Reg, offset, size, AccessMode, BaseType, 30U> ;
  using Value31 = BitsField<Reg, offset, size, AccessMode, BaseType, 31U> ;
} ;

struct MpuMpuRasrBValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrBValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuRasrCValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrCValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuRasrSValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrSValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

struct MpuMpuRasrTexValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrTexValues: public RegisterField<Reg, offset, size, AccessMode> 
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

struct MpuMpuRasrApValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrApValues: public RegisterField<Reg, offset, size, AccessMode> 
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

struct MpuMpuRasrXnValuesBase {} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MpuMpuRasrXnValues: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(MPUENUMS_HPP)
