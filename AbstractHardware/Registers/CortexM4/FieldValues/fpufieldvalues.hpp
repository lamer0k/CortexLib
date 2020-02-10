/*******************************************************************************
* Filename      : fpufieldvalues.hpp
*
* Details       : Enumerations related with FPU peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(FPUENUMS_HPP)
#define FPUENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_LSPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_LSPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_LSPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_USER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_USER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_USER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_THREAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_THREAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_THREAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_HFRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_HFRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_HFRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_MMRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_MMRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_MMRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_BFRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_BFRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_BFRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_MONRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_MONRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_MONRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_LSPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_LSPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_LSPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCCR_ASPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPCCR_ASPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPCCR_ASPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPCAR_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_IOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_IOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_IOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_DZC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_DZC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_DZC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_OFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_OFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_OFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_UFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_UFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_UFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_IXC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_IXC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_IXC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_IDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_IDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_IDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_RMode_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_RMode_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_RMode_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FPU_FPSCR_RMode_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FPU_FPSCR_RMode_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_FZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_FZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_FZ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_DN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_DN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_DN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_AHP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_AHP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_AHP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_V_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_V_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_V_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_Z_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_Z_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_Z_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPU_FPSCR_N_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPU_FPSCR_N_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPU_FPSCR_N_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(FPUENUMS_HPP)
