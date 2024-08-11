/*******************************************************************************
* Filename      : flashfieldvalues.hpp
*
* Details       : Enumerations related with FLASH peripheral. This header file
*                 is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_FLASH_AC_LATENCY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_PRFTBFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_PRFTBFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_PRFTBFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_PRFTBFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_PRFTBFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_PRFTBFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_ICAHRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_ICAHRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_ICAHRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_ICAHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_ICAHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_ICAHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_LVMF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_LVMF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_LVMF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_LVMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_LVMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_LVMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_SLMF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_SLMF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_SLMF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_AC_SLMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_AC_SLMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_AC_SLMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_KEY_FKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OPTKEY_OPTKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_STS_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_STS_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_STS_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_STS_PGERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_STS_PGERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_STS_PGERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_STS_PVERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_STS_PVERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_STS_PVERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_STS_WRPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_STS_WRPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_STS_WRPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_STS_EOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_STS_EOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_STS_EOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_STS_EVERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_STS_EVERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_STS_EVERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_STS_ECCERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_STS_ECCERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_STS_ECCERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_PG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_PG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_PER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_PER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_PER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_OPTPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_OPTPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_OPTPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_OPTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_OPTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_OPTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_SMPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_SMPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_SMPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_OPTWE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_OPTWE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_OPTWE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_ERRITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_ERRITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_ERRITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_FERRITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_FERRITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_FERRITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_EOPITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_EOPITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_EOPITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CTRL_ECCERRITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CTRL_ECCERRITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CTRL_ECCERRITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_ADD_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB2_BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_FLASH_OB2_BOR_LEV_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB2_nBOOT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB2_nBOOT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB2_nBOOT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB2_nSWBOOT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB2_nSWBOOT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB2_nSWBOOT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB2_nBOOT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB2_nBOOT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB2_nBOOT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_OBERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_OBERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_OBERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_RDPRT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_RDPRT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_RDPRT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_WDG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_WDG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_WDG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_nRST_STOP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_nRST_STOP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_nRST_STOP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_nRST_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_nRST_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_nRST_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_nRST_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_nRST_PD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_nRST_PD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_Not_Used_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLASH_FLASH_OB_Not_Used_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_Data0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_Data1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_OB_RDPRT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_OB_RDPRT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_OB_RDPRT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_WRP_WRPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_ECC_ECCLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_ECC_ECCHW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CAHR_LOCKSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLASH_FLASH_CAHR_LOCKSTRT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_FLASH_CAHR_LOCKSTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLASH_FLASH_CAHR_LOCKSTOP_Values, BaseType, 15U> ;
} ;

