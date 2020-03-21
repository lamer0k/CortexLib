/*******************************************************************************
* Filename      : fmcfieldvalues.hpp
*
* Details       : Enumerations related with FMC peripheral. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(FMCENUMS_HPP)
#define FMCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_CCLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_CCLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_CCLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WRAPMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WRAPMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WRAPMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WRAPMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WRAPMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WRAPMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WRAPMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WRAPMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WRAPMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_ECCPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR2_ECCPS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_TAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR2_TAR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_TCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR2_TCLR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_ECCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_ECCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_ECCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_PWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_PWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_PWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR2_PWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR2_PWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_PTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_PTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_PTYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_PBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_PBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_PBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR2_PWAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR2_PWAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR2_PWAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR2_FEMPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR2_FEMPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR2_FEMPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR2_IFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR2_IFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR2_IFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR2_ILEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR2_ILEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR2_ILEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR2_IREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR2_IREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR2_IREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR2_IFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR2_IFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR2_IFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR2_ILS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR2_ILS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR2_ILS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR2_IRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR2_IRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR2_IRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM2_MEMHIZx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM2_MEMHOLDx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM2_MEMWAITx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM2_MEMSETx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT2_ATTHIZx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT2_ATTHOLDx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT2_ATTWAITx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT2_ATTSETx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_ECCR2_ECCx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_ECCPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR3_ECCPS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_TAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR3_TAR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_TCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR3_TCLR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_ECCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_ECCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_ECCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_PWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_PWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_PWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR3_PWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR3_PWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_PTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_PTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_PTYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_PBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_PBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_PBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR3_PWAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR3_PWAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR3_PWAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR3_FEMPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR3_FEMPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR3_FEMPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR3_IFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR3_IFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR3_IFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR3_ILEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR3_ILEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR3_ILEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR3_IREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR3_IREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR3_IREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR3_IFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR3_IFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR3_IFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR3_ILS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR3_ILS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR3_ILS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR3_IRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR3_IRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR3_IRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM3_MEMHIZx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM3_MEMHOLDx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM3_MEMWAITx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM3_MEMSETx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT3_ATTHIZx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT3_ATTHOLDx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT3_ATTWAITx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT3_ATTSETx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_ECCR3_ECCx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_ECCPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR4_ECCPS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_TAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR4_TAR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_TCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR4_TCLR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_ECCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_ECCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_ECCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_PWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_PWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_PWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR4_PWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR4_PWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_PTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_PTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_PTYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_PBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_PBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_PBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR4_PWAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR4_PWAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR4_PWAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR4_FEMPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR4_FEMPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR4_FEMPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR4_IFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR4_IFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR4_IFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR4_ILEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR4_ILEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR4_ILEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR4_IREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR4_IREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR4_IREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR4_IFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR4_IFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR4_IFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR4_ILS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR4_ILS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR4_ILS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR4_IRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR4_IRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR4_IRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM4_MEMHIZx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM4_MEMHOLDx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM4_MEMWAITx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM4_MEMSETx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT4_ATTHIZx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT4_ATTHOLDx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT4_ATTWAITx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT4_ATTSETx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PIO4_IOHIZx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PIO4_IOHOLDx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PIO4_IOWAITx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PIO4_IOSETx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(FMCENUMS_HPP)
