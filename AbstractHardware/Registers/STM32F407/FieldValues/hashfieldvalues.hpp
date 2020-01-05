/*******************************************************************************
* Filename      : hashfieldvalues.hpp
*
* Details       : Enumerations related with HASH peripheral. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(HASHENUMS_HPP)
#define HASHENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_INIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_INIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_INIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_DMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_DMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_DMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_DATATYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_DATATYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_DATATYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HASH_CR_DATATYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HASH_CR_DATATYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_ALGO0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_ALGO0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_ALGO0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_NBW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_NBW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_NBW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HASH_CR_NBW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HASH_CR_NBW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<HASH_CR_NBW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<HASH_CR_NBW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<HASH_CR_NBW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<HASH_CR_NBW_Values, BaseType, 7U> ;
  using Value8 = FieldValue<HASH_CR_NBW_Values, BaseType, 8U> ;
  using Value9 = FieldValue<HASH_CR_NBW_Values, BaseType, 9U> ;
  using Value10 = FieldValue<HASH_CR_NBW_Values, BaseType, 10U> ;
  using Value11 = FieldValue<HASH_CR_NBW_Values, BaseType, 11U> ;
  using Value12 = FieldValue<HASH_CR_NBW_Values, BaseType, 12U> ;
  using Value13 = FieldValue<HASH_CR_NBW_Values, BaseType, 13U> ;
  using Value14 = FieldValue<HASH_CR_NBW_Values, BaseType, 14U> ;
  using Value15 = FieldValue<HASH_CR_NBW_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_DINNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_DINNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_DINNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_MDMAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_MDMAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_MDMAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_LKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_LKEY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_LKEY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CR_ALGO1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_CR_ALGO1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_CR_ALGO1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_DIN_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_STR_DCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_STR_DCAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_STR_DCAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_STR_NBLW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_STR_NBLW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_STR_NBLW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HASH_STR_NBLW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HASH_STR_NBLW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<HASH_STR_NBLW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<HASH_STR_NBLW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<HASH_STR_NBLW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<HASH_STR_NBLW_Values, BaseType, 7U> ;
  using Value8 = FieldValue<HASH_STR_NBLW_Values, BaseType, 8U> ;
  using Value9 = FieldValue<HASH_STR_NBLW_Values, BaseType, 9U> ;
  using Value10 = FieldValue<HASH_STR_NBLW_Values, BaseType, 10U> ;
  using Value11 = FieldValue<HASH_STR_NBLW_Values, BaseType, 11U> ;
  using Value12 = FieldValue<HASH_STR_NBLW_Values, BaseType, 12U> ;
  using Value13 = FieldValue<HASH_STR_NBLW_Values, BaseType, 13U> ;
  using Value14 = FieldValue<HASH_STR_NBLW_Values, BaseType, 14U> ;
  using Value15 = FieldValue<HASH_STR_NBLW_Values, BaseType, 15U> ;
  using Value16 = FieldValue<HASH_STR_NBLW_Values, BaseType, 16U> ;
  using Value17 = FieldValue<HASH_STR_NBLW_Values, BaseType, 17U> ;
  using Value18 = FieldValue<HASH_STR_NBLW_Values, BaseType, 18U> ;
  using Value19 = FieldValue<HASH_STR_NBLW_Values, BaseType, 19U> ;
  using Value20 = FieldValue<HASH_STR_NBLW_Values, BaseType, 20U> ;
  using Value21 = FieldValue<HASH_STR_NBLW_Values, BaseType, 21U> ;
  using Value22 = FieldValue<HASH_STR_NBLW_Values, BaseType, 22U> ;
  using Value23 = FieldValue<HASH_STR_NBLW_Values, BaseType, 23U> ;
  using Value24 = FieldValue<HASH_STR_NBLW_Values, BaseType, 24U> ;
  using Value25 = FieldValue<HASH_STR_NBLW_Values, BaseType, 25U> ;
  using Value26 = FieldValue<HASH_STR_NBLW_Values, BaseType, 26U> ;
  using Value27 = FieldValue<HASH_STR_NBLW_Values, BaseType, 27U> ;
  using Value28 = FieldValue<HASH_STR_NBLW_Values, BaseType, 28U> ;
  using Value29 = FieldValue<HASH_STR_NBLW_Values, BaseType, 29U> ;
  using Value30 = FieldValue<HASH_STR_NBLW_Values, BaseType, 30U> ;
  using Value31 = FieldValue<HASH_STR_NBLW_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HR0_H0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HR1_H1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HR2_H2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HR3_H3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HR4_H4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_IMR_DCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_IMR_DCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_IMR_DCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_IMR_DINIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_IMR_DINIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_IMR_DINIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_SR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_SR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_SR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_SR_DMAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_SR_DMAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_SR_DMAS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_SR_DCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_SR_DCIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_SR_DCIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_SR_DINIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HASH_SR_DINIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HASH_SR_DINIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR0_CSR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR1_CSR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR2_CSR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR3_CSR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR4_CSR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR5_CSR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR6_CSR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR7_CSR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR8_CSR8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR9_CSR9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR10_CSR10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR11_CSR11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR12_CSR12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR13_CSR13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR14_CSR14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR15_CSR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR16_CSR16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR17_CSR17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR18_CSR18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR19_CSR19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR20_CSR20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR21_CSR21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR22_CSR22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR23_CSR23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR24_CSR24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR25_CSR25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR26_CSR26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR27_CSR27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR28_CSR28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR29_CSR29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR30_CSR30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR31_CSR31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR32_CSR32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR33_CSR33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR34_CSR34_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR35_CSR35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR36_CSR36_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR37_CSR37_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR38_CSR38_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR39_CSR39_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR40_CSR40_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR41_CSR41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR42_CSR42_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR43_CSR43_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR44_CSR44_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR45_CSR45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR46_CSR46_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR47_CSR47_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR48_CSR48_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR49_CSR49_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR50_CSR50_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR51_CSR51_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR52_CSR52_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_CSR53_CSR53_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR0_H0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR1_H1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR2_H2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR3_H3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR4_H4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR5_H5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR6_H6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HASH_HASH_HR7_H7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(HASHENUMS_HPP)
