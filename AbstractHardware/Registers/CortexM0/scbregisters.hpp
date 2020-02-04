/*******************************************************************************
* Filename      : scbregisters.hpp
*
* Details       : System control block. This header file is auto-generated for
*                 STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(SCBREGISTERS_HPP)
#define SCBREGISTERS_HPP

#include "scbfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SCB
{
  struct SCBCPUIDBase {} ;

  struct CPUID : public RegisterBase<0xE000ED00, 32, ReadMode>
  {
    using Revision = SCB_CPUID_Revision_Values<SCB::CPUID, 0, 4, ReadMode, SCBCPUIDBase> ;
    using PartNo = SCB_CPUID_PartNo_Values<SCB::CPUID, 4, 12, ReadMode, SCBCPUIDBase> ;
    using Constant = SCB_CPUID_Constant_Values<SCB::CPUID, 16, 4, ReadMode, SCBCPUIDBase> ;
    using Variant = SCB_CPUID_Variant_Values<SCB::CPUID, 20, 4, ReadMode, SCBCPUIDBase> ;
    using Implementer = SCB_CPUID_Implementer_Values<SCB::CPUID, 24, 8, ReadMode, SCBCPUIDBase> ;
    using FieldValues = SCB_CPUID_Implementer_Values<SCB::CPUID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUIDPack  = Register<0xE000ED00, 32, ReadMode, SCBCPUIDBase, T...> ;

  struct SCBICSRBase {} ;

  struct ICSR : public RegisterBase<0xE000ED04, 32, ReadWriteMode>
  {
    using VECTACTIVE = SCB_ICSR_VECTACTIVE_Values<SCB::ICSR, 0, 6, ReadWriteMode, SCBICSRBase> ;
    using VECTPENDING = SCB_ICSR_VECTPENDING_Values<SCB::ICSR, 12, 6, ReadWriteMode, SCBICSRBase> ;
    using ISRPENDING = SCB_ICSR_ISRPENDING_Values<SCB::ICSR, 22, 1, ReadWriteMode, SCBICSRBase> ;
    using PENDSTCLR = SCB_ICSR_PENDSTCLR_Values<SCB::ICSR, 25, 1, ReadWriteMode, SCBICSRBase> ;
    using PENDSTSET = SCB_ICSR_PENDSTSET_Values<SCB::ICSR, 26, 1, ReadWriteMode, SCBICSRBase> ;
    using PENDSVCLR = SCB_ICSR_PENDSVCLR_Values<SCB::ICSR, 27, 1, ReadWriteMode, SCBICSRBase> ;
    using PENDSVSET = SCB_ICSR_PENDSVSET_Values<SCB::ICSR, 28, 1, ReadWriteMode, SCBICSRBase> ;
    using NMIPENDSET = SCB_ICSR_NMIPENDSET_Values<SCB::ICSR, 31, 1, ReadWriteMode, SCBICSRBase> ;
    using FieldValues = SCB_ICSR_NMIPENDSET_Values<SCB::ICSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICSRPack  = Register<0xE000ED04, 32, ReadWriteMode, SCBICSRBase, T...> ;

  struct SCBAIRCRBase {} ;

  struct AIRCR : public RegisterBase<0xE000ED0C, 32, ReadWriteMode>
  {
    using VECTCLRACTIVE = SCB_AIRCR_VECTCLRACTIVE_Values<SCB::AIRCR, 1, 1, ReadWriteMode, SCBAIRCRBase> ;
    using SYSRESETREQ = SCB_AIRCR_SYSRESETREQ_Values<SCB::AIRCR, 2, 1, ReadWriteMode, SCBAIRCRBase> ;
    using ENDIANESS = SCB_AIRCR_ENDIANESS_Values<SCB::AIRCR, 15, 1, ReadWriteMode, SCBAIRCRBase> ;
    using VECTKEYSTAT = SCB_AIRCR_VECTKEYSTAT_Values<SCB::AIRCR, 16, 16, ReadWriteMode, SCBAIRCRBase> ;
    using FieldValues = SCB_AIRCR_VECTKEYSTAT_Values<SCB::AIRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AIRCRPack  = Register<0xE000ED0C, 32, ReadWriteMode, SCBAIRCRBase, T...> ;

  struct SCBSCRBase {} ;

  struct SCR : public RegisterBase<0xE000ED10, 32, ReadWriteMode>
  {
    using SLEEPONEXIT = SCB_SCR_SLEEPONEXIT_Values<SCB::SCR, 1, 1, ReadWriteMode, SCBSCRBase> ;
    using SLEEPDEEP = SCB_SCR_SLEEPDEEP_Values<SCB::SCR, 2, 1, ReadWriteMode, SCBSCRBase> ;
    using SEVEONPEND = SCB_SCR_SEVEONPEND_Values<SCB::SCR, 4, 1, ReadWriteMode, SCBSCRBase> ;
    using FieldValues = SCB_SCR_SEVEONPEND_Values<SCB::SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCRPack  = Register<0xE000ED10, 32, ReadWriteMode, SCBSCRBase, T...> ;

  struct SCBCCRBase {} ;

  struct CCR : public RegisterBase<0xE000ED14, 32, ReadWriteMode>
  {
    using UNALIGN__TRP = SCB_CCR_UNALIGN__TRP_Values<SCB::CCR, 3, 1, ReadWriteMode, SCBCCRBase> ;
    using STKALIGN = SCB_CCR_STKALIGN_Values<SCB::CCR, 9, 1, ReadWriteMode, SCBCCRBase> ;
    using FieldValues = SCB_CCR_STKALIGN_Values<SCB::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0xE000ED14, 32, ReadWriteMode, SCBCCRBase, T...> ;

  struct SCBSHPR2Base {} ;

  struct SHPR2 : public RegisterBase<0xE000ED1C, 32, ReadWriteMode>
  {
    using PRI_11 = SCB_SHPR2_PRI_11_Values<SCB::SHPR2, 24, 8, ReadWriteMode, SCBSHPR2Base> ;
    using FieldValues = SCB_SHPR2_PRI_11_Values<SCB::SHPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHPR2Pack  = Register<0xE000ED1C, 32, ReadWriteMode, SCBSHPR2Base, T...> ;

  struct SCBSHPR3Base {} ;

  struct SHPR3 : public RegisterBase<0xE000ED20, 32, ReadWriteMode>
  {
    using PRI_14 = SCB_SHPR3_PRI_14_Values<SCB::SHPR3, 16, 8, ReadWriteMode, SCBSHPR3Base> ;
    using PRI_15 = SCB_SHPR3_PRI_15_Values<SCB::SHPR3, 24, 8, ReadWriteMode, SCBSHPR3Base> ;
    using FieldValues = SCB_SHPR3_PRI_15_Values<SCB::SHPR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHPR3Pack  = Register<0xE000ED20, 32, ReadWriteMode, SCBSHPR3Base, T...> ;

} ;

#endif //#if !defined(SCBREGISTERS_HPP)
