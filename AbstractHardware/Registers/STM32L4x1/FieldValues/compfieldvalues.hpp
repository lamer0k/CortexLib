/*******************************************************************************
* Filename      : compfieldvalues.hpp
*
* Details       : Enumerations related with COMP peripheral. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(COMPENUMS_HPP)
#define COMPENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_PWRMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_PWRMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_PWRMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CSR_COMP1_PWRMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CSR_COMP1_PWRMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_CSR_COMP1_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_INPSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CSR_COMP1_INPSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CSR_COMP1_INPSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_POLARITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_POLARITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CSR_COMP1_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CSR_COMP1_HYST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_BLANKING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP1_CSR_COMP1_BLANKING_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_INMESEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_INMESEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_INMESEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP1_CSR_COMP1_INMESEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP1_CSR_COMP1_INMESEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP1_CSR_COMP1_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP1_CSR_COMP1_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP1_CSR_COMP1_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_PWRMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_PWRMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_PWRMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CSR_COMP2_PWRMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CSR_COMP2_PWRMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_CSR_COMP2_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_INPSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CSR_COMP2_INPSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CSR_COMP2_INPSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_WINMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_WINMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_WINMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_POLARITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_POLARITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CSR_COMP2_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CSR_COMP2_HYST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_BLANKING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP2_CSR_COMP2_BLANKING_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_INMESEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_INMESEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_INMESEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP2_CSR_COMP2_INMESEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP2_CSR_COMP2_INMESEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP2_CSR_COMP2_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP2_CSR_COMP2_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP2_CSR_COMP2_LOCK_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(COMPENUMS_HPP)
