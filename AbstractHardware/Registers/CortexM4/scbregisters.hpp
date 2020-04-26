/*******************************************************************************
* Filename      : scbregisters.hpp
*
* Details       : System control block. This header file is auto-generated for
*                 CortexM4 device.
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
    using VECTACTIVE = SCB_ICSR_VECTACTIVE_Values<SCB::ICSR, 0, 9, ReadWriteMode, SCBICSRBase> ;
    using RETTOBASE = SCB_ICSR_RETTOBASE_Values<SCB::ICSR, 11, 1, ReadWriteMode, SCBICSRBase> ;
    using VECTPENDING = SCB_ICSR_VECTPENDING_Values<SCB::ICSR, 12, 7, ReadWriteMode, SCBICSRBase> ;
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

  struct SCBVTORBase {} ;

  struct VTOR : public RegisterBase<0xE000ED08, 32, ReadWriteMode>
  {
    using TBLOFF = SCB_VTOR_TBLOFF_Values<SCB::VTOR, 9, 21, ReadWriteMode, SCBVTORBase> ;
    using FieldValues = SCB_VTOR_TBLOFF_Values<SCB::VTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VTORPack  = Register<0xE000ED08, 32, ReadWriteMode, SCBVTORBase, T...> ;

  struct SCBAIRCRBase {} ;

  struct AIRCR : public RegisterBase<0xE000ED0C, 32, ReadWriteMode>
  {
    using VECTRESET = SCB_AIRCR_VECTRESET_Values<SCB::AIRCR, 0, 1, ReadWriteMode, SCBAIRCRBase> ;
    using VECTCLRACTIVE = SCB_AIRCR_VECTCLRACTIVE_Values<SCB::AIRCR, 1, 1, ReadWriteMode, SCBAIRCRBase> ;
    using SYSRESETREQ = SCB_AIRCR_SYSRESETREQ_Values<SCB::AIRCR, 2, 1, ReadWriteMode, SCBAIRCRBase> ;
    using PRIGROUP = SCB_AIRCR_PRIGROUP_Values<SCB::AIRCR, 8, 3, ReadWriteMode, SCBAIRCRBase> ;
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
    using NONBASETHRDENA = SCB_CCR_NONBASETHRDENA_Values<SCB::CCR, 0, 1, ReadWriteMode, SCBCCRBase> ;
    using USERSETMPEND = SCB_CCR_USERSETMPEND_Values<SCB::CCR, 1, 1, ReadWriteMode, SCBCCRBase> ;
    using UNALIGN__TRP = SCB_CCR_UNALIGN__TRP_Values<SCB::CCR, 3, 1, ReadWriteMode, SCBCCRBase> ;
    using DIV_0_TRP = SCB_CCR_DIV_0_TRP_Values<SCB::CCR, 4, 1, ReadWriteMode, SCBCCRBase> ;
    using BFHFNMIGN = SCB_CCR_BFHFNMIGN_Values<SCB::CCR, 8, 1, ReadWriteMode, SCBCCRBase> ;
    using STKALIGN = SCB_CCR_STKALIGN_Values<SCB::CCR, 9, 1, ReadWriteMode, SCBCCRBase> ;
    using FieldValues = SCB_CCR_STKALIGN_Values<SCB::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0xE000ED14, 32, ReadWriteMode, SCBCCRBase, T...> ;

  struct SCBSHPR1Base {} ;

  struct SHPR1 : public RegisterBase<0xE000ED18, 32, ReadWriteMode>
  {
    using PRI_4 = SCB_SHPR1_PRI_4_Values<SCB::SHPR1, 0, 8, ReadWriteMode, SCBSHPR1Base> ;
    using PRI_5 = SCB_SHPR1_PRI_5_Values<SCB::SHPR1, 8, 8, ReadWriteMode, SCBSHPR1Base> ;
    using PRI_6 = SCB_SHPR1_PRI_6_Values<SCB::SHPR1, 16, 8, ReadWriteMode, SCBSHPR1Base> ;
    using FieldValues = SCB_SHPR1_PRI_6_Values<SCB::SHPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHPR1Pack  = Register<0xE000ED18, 32, ReadWriteMode, SCBSHPR1Base, T...> ;

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

  struct SCBSHCRSBase {} ;

  struct SHCRS : public RegisterBase<0xE000ED24, 32, ReadWriteMode>
  {
    using MEMFAULTACT = SCB_SHCRS_MEMFAULTACT_Values<SCB::SHCRS, 0, 1, ReadWriteMode, SCBSHCRSBase> ;
    using BUSFAULTACT = SCB_SHCRS_BUSFAULTACT_Values<SCB::SHCRS, 1, 1, ReadWriteMode, SCBSHCRSBase> ;
    using USGFAULTACT = SCB_SHCRS_USGFAULTACT_Values<SCB::SHCRS, 3, 1, ReadWriteMode, SCBSHCRSBase> ;
    using SVCALLACT = SCB_SHCRS_SVCALLACT_Values<SCB::SHCRS, 7, 1, ReadWriteMode, SCBSHCRSBase> ;
    using MONITORACT = SCB_SHCRS_MONITORACT_Values<SCB::SHCRS, 8, 1, ReadWriteMode, SCBSHCRSBase> ;
    using PENDSVACT = SCB_SHCRS_PENDSVACT_Values<SCB::SHCRS, 10, 1, ReadWriteMode, SCBSHCRSBase> ;
    using SYSTICKACT = SCB_SHCRS_SYSTICKACT_Values<SCB::SHCRS, 11, 1, ReadWriteMode, SCBSHCRSBase> ;
    using USGFAULTPENDED = SCB_SHCRS_USGFAULTPENDED_Values<SCB::SHCRS, 12, 1, ReadWriteMode, SCBSHCRSBase> ;
    using MEMFAULTPENDED = SCB_SHCRS_MEMFAULTPENDED_Values<SCB::SHCRS, 13, 1, ReadWriteMode, SCBSHCRSBase> ;
    using BUSFAULTPENDED = SCB_SHCRS_BUSFAULTPENDED_Values<SCB::SHCRS, 14, 1, ReadWriteMode, SCBSHCRSBase> ;
    using SVCALLPENDED = SCB_SHCRS_SVCALLPENDED_Values<SCB::SHCRS, 15, 1, ReadWriteMode, SCBSHCRSBase> ;
    using MEMFAULTENA = SCB_SHCRS_MEMFAULTENA_Values<SCB::SHCRS, 16, 1, ReadWriteMode, SCBSHCRSBase> ;
    using BUSFAULTENA = SCB_SHCRS_BUSFAULTENA_Values<SCB::SHCRS, 17, 1, ReadWriteMode, SCBSHCRSBase> ;
    using USGFAULTENA = SCB_SHCRS_USGFAULTENA_Values<SCB::SHCRS, 18, 1, ReadWriteMode, SCBSHCRSBase> ;
    using FieldValues = SCB_SHCRS_USGFAULTENA_Values<SCB::SHCRS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHCRSPack  = Register<0xE000ED24, 32, ReadWriteMode, SCBSHCRSBase, T...> ;

  struct SCBCFSR_UFSR_BFSR_MMFSRBase {} ;

  struct CFSR_UFSR_BFSR_MMFSR : public RegisterBase<0xE000ED28, 32, ReadWriteMode>
  {
    using IACCVIOL = SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 1, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using MUNSTKERR = SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 3, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using MSTKERR = SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 4, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using MLSPERR = SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 5, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using MMARVALID = SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 7, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using IBUSERR = SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 8, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using PRECISERR = SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 9, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using IMPRECISERR = SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 10, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using UNSTKERR = SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 11, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using STKERR = SCB_CFSR_UFSR_BFSR_MMFSR_STKERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 12, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using LSPERR = SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 13, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using BFARVALID = SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 15, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using UNDEFINSTR = SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 16, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using INVSTATE = SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 17, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using INVPC = SCB_CFSR_UFSR_BFSR_MMFSR_INVPC_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 18, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using NOCP = SCB_CFSR_UFSR_BFSR_MMFSR_NOCP_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 19, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using UNALIGNED = SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 24, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using DIVBYZERO = SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 25, 1, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase> ;
    using FieldValues = SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO_Values<SCB::CFSR_UFSR_BFSR_MMFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFSR_UFSR_BFSR_MMFSRPack  = Register<0xE000ED28, 32, ReadWriteMode, SCBCFSR_UFSR_BFSR_MMFSRBase, T...> ;

  struct SCBHFSRBase {} ;

  struct HFSR : public RegisterBase<0xE000ED2C, 32, ReadWriteMode>
  {
    using VECTTBL = SCB_HFSR_VECTTBL_Values<SCB::HFSR, 1, 1, ReadWriteMode, SCBHFSRBase> ;
    using FORCED = SCB_HFSR_FORCED_Values<SCB::HFSR, 30, 1, ReadWriteMode, SCBHFSRBase> ;
    using DEBUG_VT = SCB_HFSR_DEBUG_VT_Values<SCB::HFSR, 31, 1, ReadWriteMode, SCBHFSRBase> ;
    using FieldValues = SCB_HFSR_DEBUG_VT_Values<SCB::HFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HFSRPack  = Register<0xE000ED2C, 32, ReadWriteMode, SCBHFSRBase, T...> ;

  struct SCBMMFARBase {} ;

  struct MMFAR : public RegisterBase<0xE000ED34, 32, ReadWriteMode>
  {
    using MMFARField = SCB_MMFAR_MMFAR_Values<SCB::MMFAR, 0, 32, ReadWriteMode, SCBMMFARBase> ;
    using FieldValues = SCB_MMFAR_MMFAR_Values<SCB::MMFAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMFARPack  = Register<0xE000ED34, 32, ReadWriteMode, SCBMMFARBase, T...> ;

  struct SCBBFARBase {} ;

  struct BFAR : public RegisterBase<0xE000ED38, 32, ReadWriteMode>
  {
    using BFARField = SCB_BFAR_BFAR_Values<SCB::BFAR, 0, 32, ReadWriteMode, SCBBFARBase> ;
    using FieldValues = SCB_BFAR_BFAR_Values<SCB::BFAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BFARPack  = Register<0xE000ED38, 32, ReadWriteMode, SCBBFARBase, T...> ;

  struct SCBAFSRBase {} ;

  struct AFSR : public RegisterBase<0xE000ED3C, 32, ReadWriteMode>
  {
    using IMPDEF = SCB_AFSR_IMPDEF_Values<SCB::AFSR, 0, 32, ReadWriteMode, SCBAFSRBase> ;
    using FieldValues = SCB_AFSR_IMPDEF_Values<SCB::AFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFSRPack  = Register<0xE000ED3C, 32, ReadWriteMode, SCBAFSRBase, T...> ;

} ;

#endif //#if !defined(SCBREGISTERS_HPP)
