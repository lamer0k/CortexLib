/*******************************************************************************
* Filename      : ethernetdmaregisters.hpp
*
* Details       : Ethernet: DMA controller operation. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETDMAREGISTERS_HPP)
#define ETHERNETDMAREGISTERS_HPP

#include "ethernetdmafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Ethernet_DMA
{
  struct Ethernet_DMADMABMRBase {} ;

  struct DMABMR : public RegisterBase<0x40029000, 32, ReadWriteMode>
  {
    using SR = Ethernet_DMA_DMABMR_SR_Values<Ethernet_DMA::DMABMR, 0, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using DA = Ethernet_DMA_DMABMR_DA_Values<Ethernet_DMA::DMABMR, 1, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using DSL = Ethernet_DMA_DMABMR_DSL_Values<Ethernet_DMA::DMABMR, 2, 5, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using EDFE = Ethernet_DMA_DMABMR_EDFE_Values<Ethernet_DMA::DMABMR, 7, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using PBL = Ethernet_DMA_DMABMR_PBL_Values<Ethernet_DMA::DMABMR, 8, 6, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using RTPR = Ethernet_DMA_DMABMR_RTPR_Values<Ethernet_DMA::DMABMR, 14, 2, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using FB = Ethernet_DMA_DMABMR_FB_Values<Ethernet_DMA::DMABMR, 16, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using RDP = Ethernet_DMA_DMABMR_RDP_Values<Ethernet_DMA::DMABMR, 17, 6, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using USP = Ethernet_DMA_DMABMR_USP_Values<Ethernet_DMA::DMABMR, 23, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using FPM = Ethernet_DMA_DMABMR_FPM_Values<Ethernet_DMA::DMABMR, 24, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using AAB = Ethernet_DMA_DMABMR_AAB_Values<Ethernet_DMA::DMABMR, 25, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using MB = Ethernet_DMA_DMABMR_MB_Values<Ethernet_DMA::DMABMR, 26, 1, ReadWriteMode, Ethernet_DMADMABMRBase> ;
    using FieldValues = Ethernet_DMA_DMABMR_MB_Values<Ethernet_DMA::DMABMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMABMRPack  = Register<0x40029000, 32, ReadWriteMode, Ethernet_DMADMABMRBase, T...> ;

  struct Ethernet_DMADMATPDRBase {} ;

  struct DMATPDR : public RegisterBase<0x40029004, 32, ReadWriteMode>
  {
    using TPD = Ethernet_DMA_DMATPDR_TPD_Values<Ethernet_DMA::DMATPDR, 0, 32, ReadWriteMode, Ethernet_DMADMATPDRBase> ;
    using FieldValues = Ethernet_DMA_DMATPDR_TPD_Values<Ethernet_DMA::DMATPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMATPDRPack  = Register<0x40029004, 32, ReadWriteMode, Ethernet_DMADMATPDRBase, T...> ;

  struct Ethernet_DMADMARPDRBase {} ;

  struct DMARPDR : public RegisterBase<0x40029008, 32, ReadWriteMode>
  {
    using RPD = Ethernet_DMA_DMARPDR_RPD_Values<Ethernet_DMA::DMARPDR, 0, 32, ReadWriteMode, Ethernet_DMADMARPDRBase> ;
    using FieldValues = Ethernet_DMA_DMARPDR_RPD_Values<Ethernet_DMA::DMARPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPDRPack  = Register<0x40029008, 32, ReadWriteMode, Ethernet_DMADMARPDRBase, T...> ;

  struct Ethernet_DMADMARDLARBase {} ;

  struct DMARDLAR : public RegisterBase<0x4002900C, 32, ReadWriteMode>
  {
    using SRL = Ethernet_DMA_DMARDLAR_SRL_Values<Ethernet_DMA::DMARDLAR, 0, 32, ReadWriteMode, Ethernet_DMADMARDLARBase> ;
    using FieldValues = Ethernet_DMA_DMARDLAR_SRL_Values<Ethernet_DMA::DMARDLAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARDLARPack  = Register<0x4002900C, 32, ReadWriteMode, Ethernet_DMADMARDLARBase, T...> ;

  struct Ethernet_DMADMATDLARBase {} ;

  struct DMATDLAR : public RegisterBase<0x40029010, 32, ReadWriteMode>
  {
    using STL = Ethernet_DMA_DMATDLAR_STL_Values<Ethernet_DMA::DMATDLAR, 0, 32, ReadWriteMode, Ethernet_DMADMATDLARBase> ;
    using FieldValues = Ethernet_DMA_DMATDLAR_STL_Values<Ethernet_DMA::DMATDLAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMATDLARPack  = Register<0x40029010, 32, ReadWriteMode, Ethernet_DMADMATDLARBase, T...> ;

  struct Ethernet_DMADMASRBase {} ;

  struct DMASR : public RegisterBase<0x40029014, 32, ReadWriteMode>
  {
    using TS = Ethernet_DMA_DMASR_TS_Values<Ethernet_DMA::DMASR, 0, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using TPSS = Ethernet_DMA_DMASR_TPSS_Values<Ethernet_DMA::DMASR, 1, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using TBUS = Ethernet_DMA_DMASR_TBUS_Values<Ethernet_DMA::DMASR, 2, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using TJTS = Ethernet_DMA_DMASR_TJTS_Values<Ethernet_DMA::DMASR, 3, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using ROS = Ethernet_DMA_DMASR_ROS_Values<Ethernet_DMA::DMASR, 4, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using TUS = Ethernet_DMA_DMASR_TUS_Values<Ethernet_DMA::DMASR, 5, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using RS = Ethernet_DMA_DMASR_RS_Values<Ethernet_DMA::DMASR, 6, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using RBUS = Ethernet_DMA_DMASR_RBUS_Values<Ethernet_DMA::DMASR, 7, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using RPSS = Ethernet_DMA_DMASR_RPSS_Values<Ethernet_DMA::DMASR, 8, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using PWTS = Ethernet_DMA_DMASR_PWTS_Values<Ethernet_DMA::DMASR, 9, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using ETS = Ethernet_DMA_DMASR_ETS_Values<Ethernet_DMA::DMASR, 10, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using FBES = Ethernet_DMA_DMASR_FBES_Values<Ethernet_DMA::DMASR, 13, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using ERS = Ethernet_DMA_DMASR_ERS_Values<Ethernet_DMA::DMASR, 14, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using AIS = Ethernet_DMA_DMASR_AIS_Values<Ethernet_DMA::DMASR, 15, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using NIS = Ethernet_DMA_DMASR_NIS_Values<Ethernet_DMA::DMASR, 16, 1, ReadWriteMode, Ethernet_DMADMASRBase> ;
    using RPS = Ethernet_DMA_DMASR_RPS_Values<Ethernet_DMA::DMASR, 17, 3, ReadMode, Ethernet_DMADMASRBase> ;
    using TPS = Ethernet_DMA_DMASR_TPS_Values<Ethernet_DMA::DMASR, 20, 3, ReadMode, Ethernet_DMADMASRBase> ;
    using EBS = Ethernet_DMA_DMASR_EBS_Values<Ethernet_DMA::DMASR, 23, 3, ReadMode, Ethernet_DMADMASRBase> ;
    using MMCS = Ethernet_DMA_DMASR_MMCS_Values<Ethernet_DMA::DMASR, 27, 1, ReadMode, Ethernet_DMADMASRBase> ;
    using PMTS = Ethernet_DMA_DMASR_PMTS_Values<Ethernet_DMA::DMASR, 28, 1, ReadMode, Ethernet_DMADMASRBase> ;
    using TSTS = Ethernet_DMA_DMASR_TSTS_Values<Ethernet_DMA::DMASR, 29, 1, ReadMode, Ethernet_DMADMASRBase> ;
    using FieldValues = Ethernet_DMA_DMASR_TSTS_Values<Ethernet_DMA::DMASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMASRPack  = Register<0x40029014, 32, ReadWriteMode, Ethernet_DMADMASRBase, T...> ;

  struct Ethernet_DMADMAOMRBase {} ;

  struct DMAOMR : public RegisterBase<0x40029018, 32, ReadWriteMode>
  {
    using SR = Ethernet_DMA_DMAOMR_SR_Values<Ethernet_DMA::DMAOMR, 1, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using OSF = Ethernet_DMA_DMAOMR_OSF_Values<Ethernet_DMA::DMAOMR, 2, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using RTC = Ethernet_DMA_DMAOMR_RTC_Values<Ethernet_DMA::DMAOMR, 3, 2, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using FUGF = Ethernet_DMA_DMAOMR_FUGF_Values<Ethernet_DMA::DMAOMR, 6, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using FEF = Ethernet_DMA_DMAOMR_FEF_Values<Ethernet_DMA::DMAOMR, 7, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using ST = Ethernet_DMA_DMAOMR_ST_Values<Ethernet_DMA::DMAOMR, 13, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using TTC = Ethernet_DMA_DMAOMR_TTC_Values<Ethernet_DMA::DMAOMR, 14, 3, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using FTF = Ethernet_DMA_DMAOMR_FTF_Values<Ethernet_DMA::DMAOMR, 20, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using TSF = Ethernet_DMA_DMAOMR_TSF_Values<Ethernet_DMA::DMAOMR, 21, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using DFRF = Ethernet_DMA_DMAOMR_DFRF_Values<Ethernet_DMA::DMAOMR, 24, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using RSF = Ethernet_DMA_DMAOMR_RSF_Values<Ethernet_DMA::DMAOMR, 25, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using DTCEFD = Ethernet_DMA_DMAOMR_DTCEFD_Values<Ethernet_DMA::DMAOMR, 26, 1, ReadWriteMode, Ethernet_DMADMAOMRBase> ;
    using FieldValues = Ethernet_DMA_DMAOMR_DTCEFD_Values<Ethernet_DMA::DMAOMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAOMRPack  = Register<0x40029018, 32, ReadWriteMode, Ethernet_DMADMAOMRBase, T...> ;

  struct Ethernet_DMADMAIERBase {} ;

  struct DMAIER : public RegisterBase<0x4002901C, 32, ReadWriteMode>
  {
    using TIE = Ethernet_DMA_DMAIER_TIE_Values<Ethernet_DMA::DMAIER, 0, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using TPSIE = Ethernet_DMA_DMAIER_TPSIE_Values<Ethernet_DMA::DMAIER, 1, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using TBUIE = Ethernet_DMA_DMAIER_TBUIE_Values<Ethernet_DMA::DMAIER, 2, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using TJTIE = Ethernet_DMA_DMAIER_TJTIE_Values<Ethernet_DMA::DMAIER, 3, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using ROIE = Ethernet_DMA_DMAIER_ROIE_Values<Ethernet_DMA::DMAIER, 4, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using TUIE = Ethernet_DMA_DMAIER_TUIE_Values<Ethernet_DMA::DMAIER, 5, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using RIE = Ethernet_DMA_DMAIER_RIE_Values<Ethernet_DMA::DMAIER, 6, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using RBUIE = Ethernet_DMA_DMAIER_RBUIE_Values<Ethernet_DMA::DMAIER, 7, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using RPSIE = Ethernet_DMA_DMAIER_RPSIE_Values<Ethernet_DMA::DMAIER, 8, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using RWTIE = Ethernet_DMA_DMAIER_RWTIE_Values<Ethernet_DMA::DMAIER, 9, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using ETIE = Ethernet_DMA_DMAIER_ETIE_Values<Ethernet_DMA::DMAIER, 10, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using FBEIE = Ethernet_DMA_DMAIER_FBEIE_Values<Ethernet_DMA::DMAIER, 13, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using ERIE = Ethernet_DMA_DMAIER_ERIE_Values<Ethernet_DMA::DMAIER, 14, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using AISE = Ethernet_DMA_DMAIER_AISE_Values<Ethernet_DMA::DMAIER, 15, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using NISE = Ethernet_DMA_DMAIER_NISE_Values<Ethernet_DMA::DMAIER, 16, 1, ReadWriteMode, Ethernet_DMADMAIERBase> ;
    using FieldValues = Ethernet_DMA_DMAIER_NISE_Values<Ethernet_DMA::DMAIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAIERPack  = Register<0x4002901C, 32, ReadWriteMode, Ethernet_DMADMAIERBase, T...> ;

  struct Ethernet_DMADMAMFBOCRBase {} ;

  struct DMAMFBOCR : public RegisterBase<0x40029020, 32, ReadWriteMode>
  {
    using MFC = Ethernet_DMA_DMAMFBOCR_MFC_Values<Ethernet_DMA::DMAMFBOCR, 0, 16, ReadWriteMode, Ethernet_DMADMAMFBOCRBase> ;
    using OMFC = Ethernet_DMA_DMAMFBOCR_OMFC_Values<Ethernet_DMA::DMAMFBOCR, 16, 1, ReadWriteMode, Ethernet_DMADMAMFBOCRBase> ;
    using MFA = Ethernet_DMA_DMAMFBOCR_MFA_Values<Ethernet_DMA::DMAMFBOCR, 17, 11, ReadWriteMode, Ethernet_DMADMAMFBOCRBase> ;
    using OFOC = Ethernet_DMA_DMAMFBOCR_OFOC_Values<Ethernet_DMA::DMAMFBOCR, 28, 1, ReadWriteMode, Ethernet_DMADMAMFBOCRBase> ;
    using FieldValues = Ethernet_DMA_DMAMFBOCR_OFOC_Values<Ethernet_DMA::DMAMFBOCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAMFBOCRPack  = Register<0x40029020, 32, ReadWriteMode, Ethernet_DMADMAMFBOCRBase, T...> ;

  struct Ethernet_DMADMARSWTRBase {} ;

  struct DMARSWTR : public RegisterBase<0x40029024, 32, ReadWriteMode>
  {
    using RSWTC = Ethernet_DMA_DMARSWTR_RSWTC_Values<Ethernet_DMA::DMARSWTR, 0, 8, ReadWriteMode, Ethernet_DMADMARSWTRBase> ;
    using FieldValues = Ethernet_DMA_DMARSWTR_RSWTC_Values<Ethernet_DMA::DMARSWTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARSWTRPack  = Register<0x40029024, 32, ReadWriteMode, Ethernet_DMADMARSWTRBase, T...> ;

  struct Ethernet_DMADMACHTDRBase {} ;

  struct DMACHTDR : public RegisterBase<0x40029048, 32, ReadMode>
  {
    using HTDAP = Ethernet_DMA_DMACHTDR_HTDAP_Values<Ethernet_DMA::DMACHTDR, 0, 32, ReadMode, Ethernet_DMADMACHTDRBase> ;
    using FieldValues = Ethernet_DMA_DMACHTDR_HTDAP_Values<Ethernet_DMA::DMACHTDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACHTDRPack  = Register<0x40029048, 32, ReadMode, Ethernet_DMADMACHTDRBase, T...> ;

  struct Ethernet_DMADMACHRDRBase {} ;

  struct DMACHRDR : public RegisterBase<0x4002904C, 32, ReadMode>
  {
    using HRDAP = Ethernet_DMA_DMACHRDR_HRDAP_Values<Ethernet_DMA::DMACHRDR, 0, 32, ReadMode, Ethernet_DMADMACHRDRBase> ;
    using FieldValues = Ethernet_DMA_DMACHRDR_HRDAP_Values<Ethernet_DMA::DMACHRDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACHRDRPack  = Register<0x4002904C, 32, ReadMode, Ethernet_DMADMACHRDRBase, T...> ;

  struct Ethernet_DMADMACHTBARBase {} ;

  struct DMACHTBAR : public RegisterBase<0x40029050, 32, ReadMode>
  {
    using HTBAP = Ethernet_DMA_DMACHTBAR_HTBAP_Values<Ethernet_DMA::DMACHTBAR, 0, 32, ReadMode, Ethernet_DMADMACHTBARBase> ;
    using FieldValues = Ethernet_DMA_DMACHTBAR_HTBAP_Values<Ethernet_DMA::DMACHTBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACHTBARPack  = Register<0x40029050, 32, ReadMode, Ethernet_DMADMACHTBARBase, T...> ;

  struct Ethernet_DMADMACHRBARBase {} ;

  struct DMACHRBAR : public RegisterBase<0x40029054, 32, ReadMode>
  {
    using HRBAP = Ethernet_DMA_DMACHRBAR_HRBAP_Values<Ethernet_DMA::DMACHRBAR, 0, 32, ReadMode, Ethernet_DMADMACHRBARBase> ;
    using FieldValues = Ethernet_DMA_DMACHRBAR_HRBAP_Values<Ethernet_DMA::DMACHRBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACHRBARPack  = Register<0x40029054, 32, ReadMode, Ethernet_DMADMACHRBARBase, T...> ;

} ;

#endif //#if !defined(ETHERNETDMAREGISTERS_HPP)
