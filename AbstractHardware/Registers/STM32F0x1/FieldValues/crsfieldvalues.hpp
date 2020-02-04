/*******************************************************************************
* Filename      : crsfieldvalues.hpp
*
* Details       : Enumerations related with CRS peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(CRSENUMS_HPP)
#define CRSENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_SWSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CR_SWSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CR_SWSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_AUTOTRIMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CR_AUTOTRIMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CR_AUTOTRIMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CR_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CR_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_ESYNCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CR_ESYNCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CR_ESYNCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CR_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CR_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_SYNCWARNIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CR_SYNCWARNIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CR_SYNCWARNIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CR_SYNCOKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CR_SYNCOKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CR_SYNCOKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CFGR_SYNCPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CFGR_SYNCPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CFGR_SYNCPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CFGR_SYNCSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CFGR_SYNCSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CFGR_SYNCSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRS_CFGR_SYNCSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRS_CFGR_SYNCSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CFGR_SYNCDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CRS_CFGR_SYNCDIV_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CFGR_FELIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_CFGR_RELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_FECAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_FEDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_FEDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_FEDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_TRIMOVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_TRIMOVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_TRIMOVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_SYNCMISS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_SYNCMISS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_SYNCMISS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_SYNCERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_SYNCERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_SYNCERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_ESYNCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_ESYNCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_ESYNCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_ERRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_ERRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_ERRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_SYNCWARNF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_SYNCWARNF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_SYNCWARNF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ISR_SYNCOKF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ISR_SYNCOKF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ISR_SYNCOKF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ICR_ESYNCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ICR_ESYNCC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ICR_ESYNCC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ICR_ERRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ICR_ERRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ICR_ERRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ICR_SYNCWARNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ICR_SYNCWARNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ICR_SYNCWARNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRS_ICR_SYNCOKC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRS_ICR_SYNCOKC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRS_ICR_SYNCOKC_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(CRSENUMS_HPP)
