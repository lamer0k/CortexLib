/*******************************************************************************
* Filename      : fmcfieldvalues.hpp
*
* Details       : Enumerations related with FMC peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(FMCENUMS_HPP)
#define FMCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_WS_WSCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_WS_WSCNT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_KEY0_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_OBKEY_OBKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_STAT0_ENDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_STAT0_ENDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_STAT0_ENDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_STAT0_WPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_STAT0_WPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_STAT0_WPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_STAT0_PGERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_STAT0_PGERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_STAT0_PGERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_STAT0_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_STAT0_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_STAT0_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_ENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_ENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_ENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_OBWEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_OBWEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_OBWEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_LK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_LK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_LK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_OBER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_OBER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_OBER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_OBPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_OBPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_OBPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_PER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_PER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_PER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_CTL0_PG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_CTL0_PG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_CTL0_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_ADDR0_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_OBSTAT_OBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_OBSTAT_OBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_OBSTAT_OBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_OBSTAT_SPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_OBSTAT_SPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_OBSTAT_SPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_OBSTAT_USER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_OBSTAT_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_WP_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PID_PID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(FMCENUMS_HPP)
