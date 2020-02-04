/*******************************************************************************
* Filename      : pwrfieldvalues.hpp
*
* Details       : Enumerations related with PWR peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(PWRENUMS_HPP)
#define PWRENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR_DBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR_DBP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR_DBP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR_PLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR_PLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR_PLS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR_PLS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR_PLS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_CR_PLS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_CR_PLS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_CR_PLS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_CR_PLS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR_PVDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR_PVDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR_PVDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR_CSBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR_CSBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR_CSBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR_CWUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR_CWUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR_CWUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR_PDDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR_PDDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR_PDDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR_LPDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR_LPDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR_LPDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_WUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_WUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_WUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_SBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_SBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_SBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_PVDO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_PVDO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_PVDO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_VREFINTRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_VREFINTRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_VREFINTRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR_EWUP8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR_EWUP8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR_EWUP8_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(PWRENUMS_HPP)
