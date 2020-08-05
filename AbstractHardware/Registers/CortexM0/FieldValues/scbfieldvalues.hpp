/*******************************************************************************
* Filename      : scbfieldvalues.hpp
*
* Details       : Enumerations related with SCB peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(SCBENUMS_HPP)
#define SCBENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Revision_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using  CortexM0 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 0xC20U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_PartNo_Values: public RegisterField<Reg, offset, size, AccessMode> 
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Constant_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ARMv6M = FieldValue<SCB_CPUID_Constant_Values, BaseType, 0xCU> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Variant_Values: public RegisterField<Reg, offset, size, AccessMode> 
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Implementer_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Arm = FieldValue<SCB_CPUID_Implementer_Values, BaseType, 65U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_VECTACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ThreadMode = FieldValue<SCB_ICSR_VECTACTIVE_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_VECTPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoPending = FieldValue<SCB_ICSR_VECTPENDING_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_ISRPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPending = FieldValue<SCB_ICSR_ISRPENDING_Values, BaseType, 0U> ;
  using Pending = FieldValue<SCB_ICSR_ISRPENDING_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ClearPendingState = FieldValue<SCB_ICSR_PENDSTCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSTSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPending = FieldValue<SCB_ICSR_PENDSTSET_Values, BaseType, 0U> ;
  using SetPendingState = FieldValue<SCB_ICSR_PENDSTSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSVCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ClearPendingState = FieldValue<SCB_ICSR_PENDSVCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSVSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPending = FieldValue<SCB_ICSR_PENDSVSET_Values, BaseType, 0U> ;
  using SetPendingState = FieldValue<SCB_ICSR_PENDSVSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_NMIPENDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotPending = FieldValue<SCB_ICSR_NMIPENDSET_Values, BaseType, 0U> ;
  using SetPendingState = FieldValue<SCB_ICSR_NMIPENDSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_VECTCLRACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Reserved = FieldValue<SCB_AIRCR_VECTCLRACTIVE_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_SYSRESETREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoSysteReset = FieldValue<SCB_AIRCR_SYSRESETREQ_Values, BaseType, 0U> ;
  using AssertsSignal = FieldValue<SCB_AIRCR_SYSRESETREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_ENDIANESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LittleEndian = FieldValue<SCB_AIRCR_ENDIANESS_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_VECTKEYSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VectKey = FieldValue<SCB_AIRCR_VECTKEYSTAT_Values, BaseType, 0x5FAU> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SCR_SLEEPONEXIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DoNotSleep = FieldValue<SCB_SCR_SLEEPONEXIT_Values, BaseType, 0U> ;
  using EnterToSleep = FieldValue<SCB_SCR_SLEEPONEXIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SCR_SLEEPDEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Sleep = FieldValue<SCB_SCR_SLEEPDEEP_Values, BaseType, 0U> ;
  using DeepSleep = FieldValue<SCB_SCR_SLEEPDEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SCR_SEVEONPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using EnableWakeupInterrupts = FieldValue<SCB_SCR_SEVEONPEND_Values, BaseType, 0U> ;
  using EnableAllInterrupts = FieldValue<SCB_SCR_SEVEONPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_UNALIGN__TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using GenerateHardFault = FieldValue<SCB_CCR_UNALIGN__TRP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_STKALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using EightBytes = FieldValue<SCB_CCR_STKALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHPR2_PRI_11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHPR3_PRI_14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHPR3_PRI_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SCBENUMS_HPP)
