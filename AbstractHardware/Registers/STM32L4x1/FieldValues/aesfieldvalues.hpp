/*******************************************************************************
* Filename      : aesfieldvalues.hpp
*
* Details       : Enumerations related with AES peripheral. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(AESENUMS_HPP)
#define AESENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_DMAOUTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_DMAOUTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_DMAOUTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_DMAINEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_DMAINEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_DMAINEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_CCFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_CCFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_CCFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_ERRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_ERRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_ERRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_CCFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_CCFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_CCFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_CHMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_CHMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_CHMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AES_CR_CHMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AES_CR_CHMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AES_CR_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AES_CR_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_DATATYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_DATATYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_DATATYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AES_CR_DATATYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AES_CR_DATATYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_CR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_CR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_CR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_SR_WRERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_SR_WRERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_SR_WRERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_SR_RDERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_SR_RDERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_SR_RDERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_SR_CCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES_SR_CCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES_SR_CCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_DINR_AES_DINR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_DOUTR_AES_DOUTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_KEYR0_AES_KEYR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_KEYR1_AES_KEYR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_KEYR2_AES_KEYR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_KEYR3_AES_KEYR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_IVR0_AES_IVR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_IVR1_AES_IVR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_IVR2_AES_IVR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_IVR3_AES_IVR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(AESENUMS_HPP)
