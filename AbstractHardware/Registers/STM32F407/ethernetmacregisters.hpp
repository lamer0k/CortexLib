/*******************************************************************************
* Filename      : ethernetmacregisters.hpp
*
* Details       : Ethernet: media access control (MAC). This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETMACREGISTERS_HPP)
#define ETHERNETMACREGISTERS_HPP

#include "ethernetmacfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Ethernet_MAC
{
  struct Ethernet_MACMACCRBase {} ;

  struct MACCR : public RegisterBase<0x40028000, 32, ReadWriteMode>
  {
    using RE = Ethernet_MAC_MACCR_RE_Values<Ethernet_MAC::MACCR, 2, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using TE = Ethernet_MAC_MACCR_TE_Values<Ethernet_MAC::MACCR, 3, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using DC = Ethernet_MAC_MACCR_DC_Values<Ethernet_MAC::MACCR, 4, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using BL = Ethernet_MAC_MACCR_BL_Values<Ethernet_MAC::MACCR, 5, 2, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using APCS = Ethernet_MAC_MACCR_APCS_Values<Ethernet_MAC::MACCR, 7, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using RD = Ethernet_MAC_MACCR_RD_Values<Ethernet_MAC::MACCR, 9, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using IPCO = Ethernet_MAC_MACCR_IPCO_Values<Ethernet_MAC::MACCR, 10, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using DM = Ethernet_MAC_MACCR_DM_Values<Ethernet_MAC::MACCR, 11, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using LM = Ethernet_MAC_MACCR_LM_Values<Ethernet_MAC::MACCR, 12, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using ROD = Ethernet_MAC_MACCR_ROD_Values<Ethernet_MAC::MACCR, 13, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using FES = Ethernet_MAC_MACCR_FES_Values<Ethernet_MAC::MACCR, 14, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using CSD = Ethernet_MAC_MACCR_CSD_Values<Ethernet_MAC::MACCR, 16, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using IFG = Ethernet_MAC_MACCR_IFG_Values<Ethernet_MAC::MACCR, 17, 3, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using JD = Ethernet_MAC_MACCR_JD_Values<Ethernet_MAC::MACCR, 22, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using WD = Ethernet_MAC_MACCR_WD_Values<Ethernet_MAC::MACCR, 23, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using CSTF = Ethernet_MAC_MACCR_CSTF_Values<Ethernet_MAC::MACCR, 25, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using FieldValues = Ethernet_MAC_MACCR_CSTF_Values<Ethernet_MAC::MACCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACCRPack  = Register<0x40028000, 32, ReadWriteMode, Ethernet_MACMACCRBase, T...> ;

  struct Ethernet_MACMACFFRBase {} ;

  struct MACFFR : public RegisterBase<0x40028004, 32, ReadWriteMode>
  {
    using PM = Ethernet_MAC_MACFFR_PM_Values<Ethernet_MAC::MACFFR, 0, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using HU = Ethernet_MAC_MACFFR_HU_Values<Ethernet_MAC::MACFFR, 1, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using HM = Ethernet_MAC_MACFFR_HM_Values<Ethernet_MAC::MACFFR, 2, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using DAIF = Ethernet_MAC_MACFFR_DAIF_Values<Ethernet_MAC::MACFFR, 3, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using RAM = Ethernet_MAC_MACFFR_RAM_Values<Ethernet_MAC::MACFFR, 4, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using BFD = Ethernet_MAC_MACFFR_BFD_Values<Ethernet_MAC::MACFFR, 5, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using PCF = Ethernet_MAC_MACFFR_PCF_Values<Ethernet_MAC::MACFFR, 6, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using SAIF = Ethernet_MAC_MACFFR_SAIF_Values<Ethernet_MAC::MACFFR, 7, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using SAF = Ethernet_MAC_MACFFR_SAF_Values<Ethernet_MAC::MACFFR, 8, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using HPF = Ethernet_MAC_MACFFR_HPF_Values<Ethernet_MAC::MACFFR, 9, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using RA = Ethernet_MAC_MACFFR_RA_Values<Ethernet_MAC::MACFFR, 31, 1, ReadWriteMode, Ethernet_MACMACFFRBase> ;
    using FieldValues = Ethernet_MAC_MACFFR_RA_Values<Ethernet_MAC::MACFFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACFFRPack  = Register<0x40028004, 32, ReadWriteMode, Ethernet_MACMACFFRBase, T...> ;

  struct Ethernet_MACMACHTHRBase {} ;

  struct MACHTHR : public RegisterBase<0x40028008, 32, ReadWriteMode>
  {
    using HTH = Ethernet_MAC_MACHTHR_HTH_Values<Ethernet_MAC::MACHTHR, 0, 32, ReadWriteMode, Ethernet_MACMACHTHRBase> ;
    using FieldValues = Ethernet_MAC_MACHTHR_HTH_Values<Ethernet_MAC::MACHTHR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACHTHRPack  = Register<0x40028008, 32, ReadWriteMode, Ethernet_MACMACHTHRBase, T...> ;

  struct Ethernet_MACMACHTLRBase {} ;

  struct MACHTLR : public RegisterBase<0x4002800C, 32, ReadWriteMode>
  {
    using HTL = Ethernet_MAC_MACHTLR_HTL_Values<Ethernet_MAC::MACHTLR, 0, 32, ReadWriteMode, Ethernet_MACMACHTLRBase> ;
    using FieldValues = Ethernet_MAC_MACHTLR_HTL_Values<Ethernet_MAC::MACHTLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACHTLRPack  = Register<0x4002800C, 32, ReadWriteMode, Ethernet_MACMACHTLRBase, T...> ;

  struct Ethernet_MACMACMIIARBase {} ;

  struct MACMIIAR : public RegisterBase<0x40028010, 32, ReadWriteMode>
  {
    using MB = Ethernet_MAC_MACMIIAR_MB_Values<Ethernet_MAC::MACMIIAR, 0, 1, ReadWriteMode, Ethernet_MACMACMIIARBase> ;
    using MW = Ethernet_MAC_MACMIIAR_MW_Values<Ethernet_MAC::MACMIIAR, 1, 1, ReadWriteMode, Ethernet_MACMACMIIARBase> ;
    using CR = Ethernet_MAC_MACMIIAR_CR_Values<Ethernet_MAC::MACMIIAR, 2, 3, ReadWriteMode, Ethernet_MACMACMIIARBase> ;
    using MR = Ethernet_MAC_MACMIIAR_MR_Values<Ethernet_MAC::MACMIIAR, 6, 5, ReadWriteMode, Ethernet_MACMACMIIARBase> ;
    using PA = Ethernet_MAC_MACMIIAR_PA_Values<Ethernet_MAC::MACMIIAR, 11, 5, ReadWriteMode, Ethernet_MACMACMIIARBase> ;
    using FieldValues = Ethernet_MAC_MACMIIAR_PA_Values<Ethernet_MAC::MACMIIAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACMIIARPack  = Register<0x40028010, 32, ReadWriteMode, Ethernet_MACMACMIIARBase, T...> ;

  struct Ethernet_MACMACMIIDRBase {} ;

  struct MACMIIDR : public RegisterBase<0x40028014, 32, ReadWriteMode>
  {
    using TD = Ethernet_MAC_MACMIIDR_TD_Values<Ethernet_MAC::MACMIIDR, 0, 16, ReadWriteMode, Ethernet_MACMACMIIDRBase> ;
    using FieldValues = Ethernet_MAC_MACMIIDR_TD_Values<Ethernet_MAC::MACMIIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACMIIDRPack  = Register<0x40028014, 32, ReadWriteMode, Ethernet_MACMACMIIDRBase, T...> ;

  struct Ethernet_MACMACFCRBase {} ;

  struct MACFCR : public RegisterBase<0x40028018, 32, ReadWriteMode>
  {
    using FCB = Ethernet_MAC_MACFCR_FCB_Values<Ethernet_MAC::MACFCR, 0, 1, ReadWriteMode, Ethernet_MACMACFCRBase> ;
    using TFCE = Ethernet_MAC_MACFCR_TFCE_Values<Ethernet_MAC::MACFCR, 1, 1, ReadWriteMode, Ethernet_MACMACFCRBase> ;
    using RFCE = Ethernet_MAC_MACFCR_RFCE_Values<Ethernet_MAC::MACFCR, 2, 1, ReadWriteMode, Ethernet_MACMACFCRBase> ;
    using UPFD = Ethernet_MAC_MACFCR_UPFD_Values<Ethernet_MAC::MACFCR, 3, 1, ReadWriteMode, Ethernet_MACMACFCRBase> ;
    using PLT = Ethernet_MAC_MACFCR_PLT_Values<Ethernet_MAC::MACFCR, 4, 2, ReadWriteMode, Ethernet_MACMACFCRBase> ;
    using ZQPD = Ethernet_MAC_MACFCR_ZQPD_Values<Ethernet_MAC::MACFCR, 7, 1, ReadWriteMode, Ethernet_MACMACFCRBase> ;
    using PT = Ethernet_MAC_MACFCR_PT_Values<Ethernet_MAC::MACFCR, 16, 16, ReadWriteMode, Ethernet_MACMACFCRBase> ;
    using FieldValues = Ethernet_MAC_MACFCR_PT_Values<Ethernet_MAC::MACFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACFCRPack  = Register<0x40028018, 32, ReadWriteMode, Ethernet_MACMACFCRBase, T...> ;

  struct Ethernet_MACMACVLANTRBase {} ;

  struct MACVLANTR : public RegisterBase<0x4002801C, 32, ReadWriteMode>
  {
    using VLANTI = Ethernet_MAC_MACVLANTR_VLANTI_Values<Ethernet_MAC::MACVLANTR, 0, 16, ReadWriteMode, Ethernet_MACMACVLANTRBase> ;
    using VLANTC = Ethernet_MAC_MACVLANTR_VLANTC_Values<Ethernet_MAC::MACVLANTR, 16, 1, ReadWriteMode, Ethernet_MACMACVLANTRBase> ;
    using FieldValues = Ethernet_MAC_MACVLANTR_VLANTC_Values<Ethernet_MAC::MACVLANTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACVLANTRPack  = Register<0x4002801C, 32, ReadWriteMode, Ethernet_MACMACVLANTRBase, T...> ;

  struct Ethernet_MACMACPMTCSRBase {} ;

  struct MACPMTCSR : public RegisterBase<0x4002802C, 32, ReadWriteMode>
  {
    using PD = Ethernet_MAC_MACPMTCSR_PD_Values<Ethernet_MAC::MACPMTCSR, 0, 1, ReadWriteMode, Ethernet_MACMACPMTCSRBase> ;
    using MPE = Ethernet_MAC_MACPMTCSR_MPE_Values<Ethernet_MAC::MACPMTCSR, 1, 1, ReadWriteMode, Ethernet_MACMACPMTCSRBase> ;
    using WFE = Ethernet_MAC_MACPMTCSR_WFE_Values<Ethernet_MAC::MACPMTCSR, 2, 1, ReadWriteMode, Ethernet_MACMACPMTCSRBase> ;
    using MPR = Ethernet_MAC_MACPMTCSR_MPR_Values<Ethernet_MAC::MACPMTCSR, 5, 1, ReadWriteMode, Ethernet_MACMACPMTCSRBase> ;
    using WFR = Ethernet_MAC_MACPMTCSR_WFR_Values<Ethernet_MAC::MACPMTCSR, 6, 1, ReadWriteMode, Ethernet_MACMACPMTCSRBase> ;
    using GU = Ethernet_MAC_MACPMTCSR_GU_Values<Ethernet_MAC::MACPMTCSR, 9, 1, ReadWriteMode, Ethernet_MACMACPMTCSRBase> ;
    using WFFRPR = Ethernet_MAC_MACPMTCSR_WFFRPR_Values<Ethernet_MAC::MACPMTCSR, 31, 1, ReadWriteMode, Ethernet_MACMACPMTCSRBase> ;
    using FieldValues = Ethernet_MAC_MACPMTCSR_WFFRPR_Values<Ethernet_MAC::MACPMTCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPMTCSRPack  = Register<0x4002802C, 32, ReadWriteMode, Ethernet_MACMACPMTCSRBase, T...> ;

  struct Ethernet_MACMACDBGRBase {} ;

  struct MACDBGR : public RegisterBase<0x40028034, 32, ReadMode>
  {
    using CR = Ethernet_MAC_MACDBGR_CR_Values<Ethernet_MAC::MACDBGR, 0, 1, ReadMode, Ethernet_MACMACDBGRBase> ;
    using CSR = Ethernet_MAC_MACDBGR_CSR_Values<Ethernet_MAC::MACDBGR, 1, 1, ReadMode, Ethernet_MACMACDBGRBase> ;
    using ROR = Ethernet_MAC_MACDBGR_ROR_Values<Ethernet_MAC::MACDBGR, 2, 1, ReadMode, Ethernet_MACMACDBGRBase> ;
    using MCF = Ethernet_MAC_MACDBGR_MCF_Values<Ethernet_MAC::MACDBGR, 3, 1, ReadMode, Ethernet_MACMACDBGRBase> ;
    using MCP = Ethernet_MAC_MACDBGR_MCP_Values<Ethernet_MAC::MACDBGR, 4, 1, ReadMode, Ethernet_MACMACDBGRBase> ;
    using MCFHP = Ethernet_MAC_MACDBGR_MCFHP_Values<Ethernet_MAC::MACDBGR, 5, 1, ReadMode, Ethernet_MACMACDBGRBase> ;
    using FieldValues = Ethernet_MAC_MACDBGR_MCFHP_Values<Ethernet_MAC::MACDBGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACDBGRPack  = Register<0x40028034, 32, ReadMode, Ethernet_MACMACDBGRBase, T...> ;

  struct Ethernet_MACMACSRBase {} ;

  struct MACSR : public RegisterBase<0x40028038, 32, ReadWriteMode>
  {
    using PMTS = Ethernet_MAC_MACSR_PMTS_Values<Ethernet_MAC::MACSR, 3, 1, ReadMode, Ethernet_MACMACSRBase> ;
    using MMCS = Ethernet_MAC_MACSR_MMCS_Values<Ethernet_MAC::MACSR, 4, 1, ReadMode, Ethernet_MACMACSRBase> ;
    using MMCRS = Ethernet_MAC_MACSR_MMCRS_Values<Ethernet_MAC::MACSR, 5, 1, ReadMode, Ethernet_MACMACSRBase> ;
    using MMCTS = Ethernet_MAC_MACSR_MMCTS_Values<Ethernet_MAC::MACSR, 6, 1, ReadMode, Ethernet_MACMACSRBase> ;
    using TSTS = Ethernet_MAC_MACSR_TSTS_Values<Ethernet_MAC::MACSR, 9, 1, ReadWriteMode, Ethernet_MACMACSRBase> ;
    using FieldValues = Ethernet_MAC_MACSR_TSTS_Values<Ethernet_MAC::MACSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSRPack  = Register<0x40028038, 32, ReadWriteMode, Ethernet_MACMACSRBase, T...> ;

  struct Ethernet_MACMACIMRBase {} ;

  struct MACIMR : public RegisterBase<0x4002803C, 32, ReadWriteMode>
  {
    using PMTIM = Ethernet_MAC_MACIMR_PMTIM_Values<Ethernet_MAC::MACIMR, 3, 1, ReadWriteMode, Ethernet_MACMACIMRBase> ;
    using TSTIM = Ethernet_MAC_MACIMR_TSTIM_Values<Ethernet_MAC::MACIMR, 9, 1, ReadWriteMode, Ethernet_MACMACIMRBase> ;
    using FieldValues = Ethernet_MAC_MACIMR_TSTIM_Values<Ethernet_MAC::MACIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACIMRPack  = Register<0x4002803C, 32, ReadWriteMode, Ethernet_MACMACIMRBase, T...> ;

  struct Ethernet_MACMACA0HRBase {} ;

  struct MACA0HR : public RegisterBase<0x40028040, 32, ReadWriteMode>
  {
    using MACA0H = Ethernet_MAC_MACA0HR_MACA0H_Values<Ethernet_MAC::MACA0HR, 0, 16, ReadWriteMode, Ethernet_MACMACA0HRBase> ;
    using MO = Ethernet_MAC_MACA0HR_MO_Values<Ethernet_MAC::MACA0HR, 31, 1, ReadMode, Ethernet_MACMACA0HRBase> ;
    using FieldValues = Ethernet_MAC_MACA0HR_MO_Values<Ethernet_MAC::MACA0HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA0HRPack  = Register<0x40028040, 32, ReadWriteMode, Ethernet_MACMACA0HRBase, T...> ;

  struct Ethernet_MACMACA0LRBase {} ;

  struct MACA0LR : public RegisterBase<0x40028044, 32, ReadWriteMode>
  {
    using MACA0L = Ethernet_MAC_MACA0LR_MACA0L_Values<Ethernet_MAC::MACA0LR, 0, 32, ReadWriteMode, Ethernet_MACMACA0LRBase> ;
    using FieldValues = Ethernet_MAC_MACA0LR_MACA0L_Values<Ethernet_MAC::MACA0LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA0LRPack  = Register<0x40028044, 32, ReadWriteMode, Ethernet_MACMACA0LRBase, T...> ;

  struct Ethernet_MACMACA1HRBase {} ;

  struct MACA1HR : public RegisterBase<0x40028048, 32, ReadWriteMode>
  {
    using MACA1H = Ethernet_MAC_MACA1HR_MACA1H_Values<Ethernet_MAC::MACA1HR, 0, 16, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using MBC = Ethernet_MAC_MACA1HR_MBC_Values<Ethernet_MAC::MACA1HR, 24, 6, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using SA = Ethernet_MAC_MACA1HR_SA_Values<Ethernet_MAC::MACA1HR, 30, 1, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using AE = Ethernet_MAC_MACA1HR_AE_Values<Ethernet_MAC::MACA1HR, 31, 1, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using FieldValues = Ethernet_MAC_MACA1HR_AE_Values<Ethernet_MAC::MACA1HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA1HRPack  = Register<0x40028048, 32, ReadWriteMode, Ethernet_MACMACA1HRBase, T...> ;

  struct Ethernet_MACMACA1LRBase {} ;

  struct MACA1LR : public RegisterBase<0x4002804C, 32, ReadWriteMode>
  {
    using MACA1LRField = Ethernet_MAC_MACA1LR_MACA1LR_Values<Ethernet_MAC::MACA1LR, 0, 32, ReadWriteMode, Ethernet_MACMACA1LRBase> ;
    using FieldValues = Ethernet_MAC_MACA1LR_MACA1LR_Values<Ethernet_MAC::MACA1LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA1LRPack  = Register<0x4002804C, 32, ReadWriteMode, Ethernet_MACMACA1LRBase, T...> ;

  struct Ethernet_MACMACA2HRBase {} ;

  struct MACA2HR : public RegisterBase<0x40028050, 32, ReadWriteMode>
  {
    using MAC2AH = Ethernet_MAC_MACA2HR_MAC2AH_Values<Ethernet_MAC::MACA2HR, 0, 16, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using MBC = Ethernet_MAC_MACA2HR_MBC_Values<Ethernet_MAC::MACA2HR, 24, 6, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using SA = Ethernet_MAC_MACA2HR_SA_Values<Ethernet_MAC::MACA2HR, 30, 1, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using AE = Ethernet_MAC_MACA2HR_AE_Values<Ethernet_MAC::MACA2HR, 31, 1, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using FieldValues = Ethernet_MAC_MACA2HR_AE_Values<Ethernet_MAC::MACA2HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA2HRPack  = Register<0x40028050, 32, ReadWriteMode, Ethernet_MACMACA2HRBase, T...> ;

  struct Ethernet_MACMACA2LRBase {} ;

  struct MACA2LR : public RegisterBase<0x40028054, 32, ReadWriteMode>
  {
    using MACA2L = Ethernet_MAC_MACA2LR_MACA2L_Values<Ethernet_MAC::MACA2LR, 0, 31, ReadWriteMode, Ethernet_MACMACA2LRBase> ;
    using FieldValues = Ethernet_MAC_MACA2LR_MACA2L_Values<Ethernet_MAC::MACA2LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA2LRPack  = Register<0x40028054, 32, ReadWriteMode, Ethernet_MACMACA2LRBase, T...> ;

  struct Ethernet_MACMACA3HRBase {} ;

  struct MACA3HR : public RegisterBase<0x40028058, 32, ReadWriteMode>
  {
    using MACA3H = Ethernet_MAC_MACA3HR_MACA3H_Values<Ethernet_MAC::MACA3HR, 0, 16, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using MBC = Ethernet_MAC_MACA3HR_MBC_Values<Ethernet_MAC::MACA3HR, 24, 6, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using SA = Ethernet_MAC_MACA3HR_SA_Values<Ethernet_MAC::MACA3HR, 30, 1, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using AE = Ethernet_MAC_MACA3HR_AE_Values<Ethernet_MAC::MACA3HR, 31, 1, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using FieldValues = Ethernet_MAC_MACA3HR_AE_Values<Ethernet_MAC::MACA3HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA3HRPack  = Register<0x40028058, 32, ReadWriteMode, Ethernet_MACMACA3HRBase, T...> ;

  struct Ethernet_MACMACA3LRBase {} ;

  struct MACA3LR : public RegisterBase<0x4002805C, 32, ReadWriteMode>
  {
    using MBCA3L = Ethernet_MAC_MACA3LR_MBCA3L_Values<Ethernet_MAC::MACA3LR, 0, 32, ReadWriteMode, Ethernet_MACMACA3LRBase> ;
    using FieldValues = Ethernet_MAC_MACA3LR_MBCA3L_Values<Ethernet_MAC::MACA3LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA3LRPack  = Register<0x4002805C, 32, ReadWriteMode, Ethernet_MACMACA3LRBase, T...> ;

} ;

#endif //#if !defined(ETHERNETMACREGISTERS_HPP)
