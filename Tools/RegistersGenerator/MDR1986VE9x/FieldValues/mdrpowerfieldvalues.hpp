/*******************************************************************************
* Filename      : mdrpowerfieldvalues.hpp
*
* Details       : Enumerations related with MDR_Power peripheral. This header
*                 file is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRPOWERENUMS_HPP)
#define MDRPOWERENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_PVDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_Power_PVDCS_PVDEN_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_Power_PVDCS_PVDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_PBLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using 1v8 = FieldValue<MDR_Power_PVDCS_PBLS_Values, BaseType, 0U> ;
  using 2v2 = FieldValue<MDR_Power_PVDCS_PBLS_Values, BaseType, 1U> ;
  using 2v6 = FieldValue<MDR_Power_PVDCS_PBLS_Values, BaseType, 2U> ;
  using 3v0 = FieldValue<MDR_Power_PVDCS_PBLS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_PLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using 2v0 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 0U> ;
  using 2v2 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 1U> ;
  using 2v4 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 2U> ;
  using 2v6 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 3U> ;
  using 2v8 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 4U> ;
  using 3v0 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 5U> ;
  using 3v2 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 6U> ;
  using 3v4 = FieldValue<MDR_Power_PVDCS_PLS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_PVBD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_Power_PVDCS_PVBD_Values, BaseType, 0U> ;
  using Active = FieldValue<MDR_Power_PVDCS_PVBD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_PVD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_Power_PVDCS_PVD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_Power_PVDCS_PVD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_IEPVBD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_Power_PVDCS_IEPVBD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_Power_PVDCS_IEPVBD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_IEPVD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_Power_PVDCS_IEPVD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_Power_PVDCS_IEPVD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_INVB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_Power_PVDCS_INVB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_Power_PVDCS_INVB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_PVDCS_INV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_Power_PVDCS_INV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_Power_PVDCS_INV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_Power_ResReg_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(MDRPOWERENUMS_HPP)
