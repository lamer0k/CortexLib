/*******************************************************************************
* Filename      : crypfieldvalues.hpp
*
* Details       : Enumerations related with CRYP peripheral. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(CRYPENUMS_HPP)
#define CRYPENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_ALGODIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_ALGODIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_ALGODIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_ALGOMODE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CRYP_CR_ALGOMODE0_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_DATATYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_DATATYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_DATATYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRYP_CR_DATATYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRYP_CR_DATATYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_KEYSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_KEYSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_KEYSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRYP_CR_KEYSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRYP_CR_KEYSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_FFLUSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_FFLUSH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_FFLUSH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_CRYPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_CRYPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_CRYPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_GCM_CCMPH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_GCM_CCMPH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_GCM_CCMPH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRYP_CR_GCM_CCMPH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRYP_CR_GCM_CCMPH_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CR_ALGOMODE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_CR_ALGOMODE3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_CR_ALGOMODE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_SR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_SR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_SR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_SR_OFFU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_SR_OFFU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_SR_OFFU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_SR_OFNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_SR_OFNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_SR_OFNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_SR_IFNF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_SR_IFNF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_SR_IFNF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_SR_IFEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_SR_IFEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_SR_IFEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_DIN_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_DOUT_DATAOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_DMACR_DOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_DMACR_DOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_DMACR_DOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_DMACR_DIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_DMACR_DIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_DMACR_DIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IMSCR_OUTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IMSCR_OUTIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IMSCR_OUTIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IMSCR_INIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IMSCR_INIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IMSCR_INIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_RISR_OUTRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_RISR_OUTRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_RISR_OUTRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_RISR_INRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_RISR_INRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_RISR_INRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_MISR_OUTMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_MISR_OUTMIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_MISR_OUTMIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_MISR_INMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_MISR_INMIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_MISR_INMIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b224_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b224_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b224_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b225_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b225_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b225_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b226_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b226_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b226_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b227_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b227_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b227_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b228_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b228_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b228_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b229_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b229_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b229_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b230_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b230_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b230_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b231_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b231_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b231_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b232_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b232_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b232_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b233_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b233_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b233_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b234_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b234_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b234_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b235_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b235_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b235_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b236_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b236_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b236_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b237_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b237_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b237_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b238_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b238_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b238_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b239_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b239_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b239_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b240_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b240_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b240_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b241_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b241_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b241_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b242_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b242_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b242_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b243_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b243_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b243_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b244_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b244_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b244_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b245_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b245_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b245_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b246_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b246_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b246_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b247_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b247_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b247_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b248_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b248_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b248_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b249_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b249_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b249_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b250_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b250_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b250_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b251_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b251_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b251_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b252_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b252_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b252_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b253_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b253_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b253_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b254_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b254_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b254_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0LR_b255_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0LR_b255_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0LR_b255_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b192_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b192_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b192_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b193_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b193_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b193_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b194_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b194_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b194_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b195_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b195_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b195_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b196_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b196_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b196_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b197_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b197_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b197_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b198_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b198_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b198_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b199_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b199_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b199_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b200_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b200_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b200_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b201_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b201_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b201_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b202_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b202_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b202_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b203_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b203_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b203_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b204_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b204_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b204_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b205_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b205_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b205_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b206_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b206_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b206_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b207_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b207_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b207_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b208_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b208_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b208_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b209_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b209_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b209_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b210_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b210_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b210_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b211_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b211_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b211_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b212_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b212_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b212_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b213_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b213_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b213_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b214_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b214_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b214_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b215_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b215_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b215_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b216_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b216_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b216_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b217_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b217_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b217_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b218_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b218_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b218_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b219_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b219_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b219_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b220_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b220_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b220_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b221_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b221_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b221_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b222_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b222_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b222_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K0RR_b223_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K0RR_b223_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K0RR_b223_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b160_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b160_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b160_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b161_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b161_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b161_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b162_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b162_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b162_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b163_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b163_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b163_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b164_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b164_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b164_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b165_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b165_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b165_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b166_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b166_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b166_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b167_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b167_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b167_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b168_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b168_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b168_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b169_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b169_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b169_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b170_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b170_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b170_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b171_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b171_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b171_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b172_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b172_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b172_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b173_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b173_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b173_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b174_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b174_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b174_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b175_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b175_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b175_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b176_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b176_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b176_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b177_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b177_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b177_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b178_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b178_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b178_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b179_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b179_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b179_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b180_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b180_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b180_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b181_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b181_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b181_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b182_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b182_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b182_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b183_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b183_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b183_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b184_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b184_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b184_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b185_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b185_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b185_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b186_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b186_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b186_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b187_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b187_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b187_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b188_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b188_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b188_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b189_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b189_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b189_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b190_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b190_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b190_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1LR_b191_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1LR_b191_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1LR_b191_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b128_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b128_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b128_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b129_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b129_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b129_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b130_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b130_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b130_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b131_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b131_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b131_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b132_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b132_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b132_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b133_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b133_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b133_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b134_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b134_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b134_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b135_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b135_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b135_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b136_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b136_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b136_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b137_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b137_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b137_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b138_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b138_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b138_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b139_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b139_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b139_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b140_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b140_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b140_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b141_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b141_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b141_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b142_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b142_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b142_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b143_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b143_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b143_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b144_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b144_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b144_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b145_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b145_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b145_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b146_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b146_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b146_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b147_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b147_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b147_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b148_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b148_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b148_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b149_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b149_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b149_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b150_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b150_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b150_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b151_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b151_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b151_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b152_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b152_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b152_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b153_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b153_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b153_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b154_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b154_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b154_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b155_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b155_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b155_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b156_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b156_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b156_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b157_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b157_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b157_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b158_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b158_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b158_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K1RR_b159_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K1RR_b159_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K1RR_b159_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b96_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b96_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b96_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b97_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b97_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b97_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b98_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b98_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b98_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b99_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b99_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b99_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b100_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b100_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b100_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b101_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b101_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b101_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b102_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b102_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b102_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b103_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b103_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b103_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b104_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b104_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b104_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b105_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b105_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b105_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b106_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b106_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b106_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b107_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b107_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b107_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b108_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b108_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b108_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b109_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b109_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b109_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b110_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b110_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b110_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b111_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b111_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b111_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b112_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b112_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b112_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b113_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b113_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b113_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b114_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b114_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b114_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b115_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b115_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b115_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b116_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b116_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b116_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b117_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b117_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b117_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b118_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b118_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b118_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b119_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b119_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b119_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b120_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b120_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b120_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b121_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b121_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b121_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b122_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b122_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b122_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b123_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b123_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b123_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b124_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b124_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b124_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b125_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b125_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b125_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b126_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b126_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b126_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2LR_b127_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2LR_b127_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2LR_b127_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b64_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b64_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b64_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b65_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b65_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b65_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b66_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b66_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b66_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b67_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b67_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b67_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b68_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b68_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b68_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b69_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b69_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b69_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b70_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b70_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b70_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b71_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b71_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b71_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b72_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b72_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b72_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b73_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b73_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b73_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b74_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b74_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b74_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b75_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b75_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b75_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b76_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b76_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b76_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b77_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b77_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b77_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b78_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b78_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b78_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b79_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b79_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b79_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b80_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b80_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b80_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b81_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b81_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b81_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b82_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b82_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b82_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b83_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b83_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b83_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b84_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b84_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b84_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b85_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b85_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b85_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b86_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b86_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b86_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b87_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b87_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b87_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b88_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b88_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b88_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b89_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b89_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b89_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b90_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b90_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b90_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b91_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b91_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b91_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b92_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b92_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b92_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b93_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b93_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b93_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b94_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b94_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b94_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K2RR_b95_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K2RR_b95_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K2RR_b95_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b32_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b32_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b34_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b34_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b34_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b35_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b35_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b36_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b36_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b36_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b37_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b37_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b37_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b38_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b38_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b38_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b39_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b39_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b39_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b40_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b40_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b40_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b41_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b42_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b42_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b42_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b43_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b43_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b43_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b44_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b44_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b44_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b45_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b45_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b46_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b46_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b46_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b47_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b47_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b47_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b48_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b48_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b48_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b49_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b49_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b49_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b50_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b50_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b50_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b51_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b51_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b51_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b52_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b52_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b52_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b53_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b53_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b53_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b54_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b54_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b54_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b55_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b55_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b55_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b56_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b56_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b56_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b57_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b57_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b57_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b58_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b58_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b58_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b59_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b59_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b59_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b60_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b60_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b60_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b61_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b61_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b61_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b62_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b62_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b62_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3LR_b63_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3LR_b63_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3LR_b63_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_K3RR_b31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_K3RR_b31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_K3RR_b31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0LR_IV0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0LR_IV0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0LR_IV0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV63_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV63_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV63_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV62_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV62_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV62_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV61_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV61_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV61_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV60_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV60_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV60_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV59_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV59_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV59_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV58_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV58_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV58_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV57_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV57_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV57_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV56_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV56_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV56_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV55_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV55_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV55_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV54_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV54_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV54_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV53_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV53_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV53_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV52_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV52_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV52_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV51_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV51_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV51_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV50_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV50_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV50_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV49_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV49_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV49_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV48_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV48_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV48_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV47_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV47_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV47_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV46_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV46_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV46_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV45_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV45_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV44_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV44_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV44_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV43_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV43_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV43_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV42_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV42_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV42_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV41_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV40_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV40_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV40_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV39_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV39_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV39_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV38_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV38_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV38_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV37_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV37_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV37_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV36_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV36_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV36_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV35_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV35_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV34_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV34_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV34_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV0RR_IV32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV0RR_IV32_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV0RR_IV32_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV95_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV95_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV95_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV94_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV94_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV94_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV93_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV93_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV93_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV92_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV92_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV92_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV91_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV91_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV91_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV90_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV90_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV90_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV89_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV89_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV89_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV88_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV88_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV88_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV87_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV87_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV87_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV86_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV86_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV86_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV85_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV85_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV85_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV84_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV84_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV84_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV83_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV83_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV83_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV82_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV82_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV82_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV81_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV81_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV81_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV80_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV80_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV80_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV79_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV79_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV79_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV78_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV78_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV78_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV77_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV77_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV77_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV76_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV76_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV76_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV75_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV75_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV75_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV74_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV74_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV74_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV73_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV73_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV73_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV72_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV72_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV72_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV71_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV71_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV71_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV70_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV70_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV70_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV69_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV69_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV69_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV68_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV68_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV68_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV67_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV67_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV67_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV66_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV66_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV66_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV65_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV65_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV65_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1LR_IV64_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1LR_IV64_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1LR_IV64_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV127_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV127_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV127_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV126_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV126_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV126_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV125_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV125_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV125_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV124_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV124_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV124_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV123_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV123_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV123_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV122_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV122_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV122_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV121_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV121_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV121_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV120_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV120_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV120_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV119_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV119_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV119_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV118_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV118_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV118_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV117_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV117_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV117_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV116_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV116_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV116_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV115_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV115_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV115_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV114_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV114_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV114_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV113_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV113_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV113_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV112_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV112_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV112_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV111_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV111_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV111_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV110_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV110_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV110_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV109_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV109_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV109_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV108_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV108_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV108_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV107_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV107_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV107_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV106_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV106_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV106_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV105_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV105_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV105_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV104_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV104_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV104_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV103_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV103_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV103_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV102_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV102_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV102_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV101_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV101_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV101_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV100_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV100_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV100_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV99_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV99_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV99_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV98_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV98_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV98_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV97_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV97_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV97_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_IV1RR_IV96_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRYP_IV1RR_IV96_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRYP_IV1RR_IV96_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM0R_CSGCMCCM0R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM1R_CSGCMCCM1R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM2R_CSGCMCCM2R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM3R_CSGCMCCM3R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM4R_CSGCMCCM4R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM5R_CSGCMCCM5R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM6R_CSGCMCCM6R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCMCCM7R_CSGCMCCM7R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM0R_CSGCM0R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM1R_CSGCM1R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM2R_CSGCM2R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM3R_CSGCM3R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM4R_CSGCM4R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM5R_CSGCM5R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM6R_CSGCM6R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRYP_CSGCM7R_CSGCM7R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(CRYPENUMS_HPP)
