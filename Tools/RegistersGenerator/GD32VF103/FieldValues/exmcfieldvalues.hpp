/*******************************************************************************
* Filename      : exmcfieldvalues.hpp
*
* Details       : Enumerations related with EXMC peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(EXMCENUMS_HPP)
#define EXMCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_NRWTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_NRWTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_NRWTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_NRWTPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_NRWTPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_NRWTPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_NREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_NREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_NREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_NRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_NRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_NRW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXMC_SNCTL0_NRW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXMC_SNCTL0_NRW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_NRTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_NRTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_NRTP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXMC_SNCTL0_NRTP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXMC_SNCTL0_NRTP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_NRMUX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_NRMUX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_NRMUX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL0_NRBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL0_NRBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL0_NRBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNTCFG0_BUSLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXMC_SNTCFG0_BUSLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNTCFG0_DSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNTCFG0_AHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXMC_SNTCFG0_AHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNTCFG0_ASET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXMC_SNTCFG0_ASET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_NRWTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_NRWTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_NRWTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_NRWTPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_NRWTPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_NRWTPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_NREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_NREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_NREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_NRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_NRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_NRW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXMC_SNCTL1_NRW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXMC_SNCTL1_NRW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_NRTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_NRTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_NRTP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXMC_SNCTL1_NRTP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXMC_SNCTL1_NRTP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_NRMUX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_NRMUX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_NRMUX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXMC_SNCTL1_NRBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXMC_SNCTL1_NRBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXMC_SNCTL1_NRBKEN_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(EXMCENUMS_HPP)
