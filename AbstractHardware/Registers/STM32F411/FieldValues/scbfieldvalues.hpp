/*******************************************************************************
* Filename      : scbfieldvalues.hpp
*
* Details       : Enumerations related with SCB peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SCBENUMS_HPP)
#define SCBENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Revision_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SCB_CPUID_Revision_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_PartNo_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Constant_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SCB_CPUID_Constant_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Variant_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SCB_CPUID_Variant_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CPUID_Implementer_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_VECTACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_RETTOBASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ActiveExceptionExist = FieldValue<SCB_ICSR_RETTOBASE_Values, BaseType, 0U> ;
  using NoActiveException = FieldValue<SCB_ICSR_RETTOBASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_VECTPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_ISRPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PendingState = FieldValue<SCB_ICSR_ISRPENDING_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PendingStateRemove = FieldValue<SCB_ICSR_PENDSTCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSTSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PendingState = FieldValue<SCB_ICSR_PENDSTSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSVCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
   using PendingStateRemove = FieldValue<SCB_ICSR_PENDSVCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSVSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
   using PendingState = FieldValue<SCB_ICSR_PENDSVSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_NMIPENDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PendingState = FieldValue<SCB_ICSR_NMIPENDSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_VTOR_TBLOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_VECTRESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_AIRCR_VECTRESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_AIRCR_VECTRESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_VECTCLRACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_AIRCR_VECTCLRACTIVE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_AIRCR_VECTCLRACTIVE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_SYSRESETREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_AIRCR_SYSRESETREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_AIRCR_SYSRESETREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_PRIGROUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SCB_AIRCR_PRIGROUP_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_ENDIANESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_AIRCR_ENDIANESS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_AIRCR_ENDIANESS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AIRCR_VECTKEYSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SCR_SLEEPONEXIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SCR_SLEEPONEXIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SCR_SLEEPONEXIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SCR_SLEEPDEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SCR_SLEEPDEEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SCR_SLEEPDEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SCR_SEVEONPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SCR_SEVEONPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SCR_SEVEONPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_NONBASETHRDENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_NONBASETHRDENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_NONBASETHRDENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_USERSETMPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_USERSETMPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_USERSETMPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_UNALIGN__TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_UNALIGN__TRP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_UNALIGN__TRP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_DIV_0_TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_DIV_0_TRP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_DIV_0_TRP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_BFHFNMIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_BFHFNMIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_BFHFNMIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_STKALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_STKALIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_STKALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHPR1_PRI_4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHPR1_PRI_5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHPR1_PRI_6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
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

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_MEMFAULTACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_MEMFAULTACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_MEMFAULTACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_BUSFAULTACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_BUSFAULTACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_BUSFAULTACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_USGFAULTACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_USGFAULTACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_USGFAULTACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_SVCALLACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_SVCALLACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_SVCALLACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_MONITORACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_MONITORACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_MONITORACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_PENDSVACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_PENDSVACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_PENDSVACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_SYSTICKACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_SYSTICKACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_SYSTICKACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_USGFAULTPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_USGFAULTPENDED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_USGFAULTPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_MEMFAULTPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_MEMFAULTPENDED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_MEMFAULTPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_BUSFAULTPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_BUSFAULTPENDED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_BUSFAULTPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_SVCALLPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_SVCALLPENDED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_SVCALLPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_MEMFAULTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_MEMFAULTENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_MEMFAULTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_BUSFAULTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_BUSFAULTENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_BUSFAULTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_SHCRS_USGFAULTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_SHCRS_USGFAULTENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_SHCRS_USGFAULTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_STKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_STKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_STKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_INVPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_INVPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_INVPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_NOCP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_NOCP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_NOCP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_HFSR_VECTTBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_HFSR_VECTTBL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_HFSR_VECTTBL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_HFSR_FORCED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_HFSR_FORCED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_HFSR_FORCED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_HFSR_DEBUG_VT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_HFSR_DEBUG_VT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_HFSR_DEBUG_VT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_MMFAR_MMFAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_BFAR_BFAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_AFSR_IMPDEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SCBENUMS_HPP)
