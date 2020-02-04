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
struct SCB_ICSR_VECTPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_ISRPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ICSR_ISRPENDING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ICSR_ISRPENDING_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ICSR_PENDSTCLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ICSR_PENDSTCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSTSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ICSR_PENDSTSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ICSR_PENDSTSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSVCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ICSR_PENDSVCLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ICSR_PENDSVCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_PENDSVSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ICSR_PENDSVSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ICSR_PENDSVSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ICSR_NMIPENDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ICSR_NMIPENDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ICSR_NMIPENDSET_Values, BaseType, 1U> ;
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
struct SCB_CCR_UNALIGN__TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_UNALIGN__TRP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_UNALIGN__TRP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_CCR_STKALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_CCR_STKALIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_CCR_STKALIGN_Values, BaseType, 1U> ;
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
