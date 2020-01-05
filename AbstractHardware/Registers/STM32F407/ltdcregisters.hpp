/*******************************************************************************
* Filename      : ltdcregisters.hpp
*
* Details       : LCD-TFT Controller. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(LTDCREGISTERS_HPP)
#define LTDCREGISTERS_HPP

#include "ltdcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LTDC
{
  struct LTDCSSCRBase {} ;

  struct SSCR : public RegisterBase<0x40016808, 32, ReadWriteMode>
  {
    using HSW = LTDC_SSCR_HSW_Values<LTDC::SSCR, 16, 10, ReadWriteMode, LTDCSSCRBase> ;
    using VSH = LTDC_SSCR_VSH_Values<LTDC::SSCR, 0, 11, ReadWriteMode, LTDCSSCRBase> ;
    using FieldValues = LTDC_SSCR_VSH_Values<LTDC::SSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SSCRPack  = Register<0x40016808, 32, ReadWriteMode, LTDCSSCRBase, T...> ;

  struct LTDCBPCRBase {} ;

  struct BPCR : public RegisterBase<0x4001680C, 32, ReadWriteMode>
  {
    using AHBP = LTDC_BPCR_AHBP_Values<LTDC::BPCR, 16, 10, ReadWriteMode, LTDCBPCRBase> ;
    using AVBP = LTDC_BPCR_AVBP_Values<LTDC::BPCR, 0, 11, ReadWriteMode, LTDCBPCRBase> ;
    using FieldValues = LTDC_BPCR_AVBP_Values<LTDC::BPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BPCRPack  = Register<0x4001680C, 32, ReadWriteMode, LTDCBPCRBase, T...> ;

  struct LTDCAWCRBase {} ;

  struct AWCR : public RegisterBase<0x40016810, 32, ReadWriteMode>
  {
    using AAV = LTDC_AWCR_AAV_Values<LTDC::AWCR, 16, 10, ReadWriteMode, LTDCAWCRBase> ;
    using AAH = LTDC_AWCR_AAH_Values<LTDC::AWCR, 0, 11, ReadWriteMode, LTDCAWCRBase> ;
    using FieldValues = LTDC_AWCR_AAH_Values<LTDC::AWCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWCRPack  = Register<0x40016810, 32, ReadWriteMode, LTDCAWCRBase, T...> ;

  struct LTDCTWCRBase {} ;

  struct TWCR : public RegisterBase<0x40016814, 32, ReadWriteMode>
  {
    using TOTALW = LTDC_TWCR_TOTALW_Values<LTDC::TWCR, 16, 10, ReadWriteMode, LTDCTWCRBase> ;
    using TOTALH = LTDC_TWCR_TOTALH_Values<LTDC::TWCR, 0, 11, ReadWriteMode, LTDCTWCRBase> ;
    using FieldValues = LTDC_TWCR_TOTALH_Values<LTDC::TWCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TWCRPack  = Register<0x40016814, 32, ReadWriteMode, LTDCTWCRBase, T...> ;

  struct LTDCGCRBase {} ;

  struct GCR : public RegisterBase<0x40016818, 32, ReadWriteMode>
  {
    using HSPOL = LTDC_GCR_HSPOL_Values<LTDC::GCR, 31, 1, ReadWriteMode, LTDCGCRBase> ;
    using VSPOL = LTDC_GCR_VSPOL_Values<LTDC::GCR, 30, 1, ReadWriteMode, LTDCGCRBase> ;
    using DEPOL = LTDC_GCR_DEPOL_Values<LTDC::GCR, 29, 1, ReadWriteMode, LTDCGCRBase> ;
    using PCPOL = LTDC_GCR_PCPOL_Values<LTDC::GCR, 28, 1, ReadWriteMode, LTDCGCRBase> ;
    using DEN = LTDC_GCR_DEN_Values<LTDC::GCR, 16, 1, ReadWriteMode, LTDCGCRBase> ;
    using DRW = LTDC_GCR_DRW_Values<LTDC::GCR, 12, 3, ReadMode, LTDCGCRBase> ;
    using DGW = LTDC_GCR_DGW_Values<LTDC::GCR, 8, 3, ReadMode, LTDCGCRBase> ;
    using DBW = LTDC_GCR_DBW_Values<LTDC::GCR, 4, 3, ReadMode, LTDCGCRBase> ;
    using LTDCEN = LTDC_GCR_LTDCEN_Values<LTDC::GCR, 0, 1, ReadWriteMode, LTDCGCRBase> ;
    using FieldValues = LTDC_GCR_LTDCEN_Values<LTDC::GCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GCRPack  = Register<0x40016818, 32, ReadWriteMode, LTDCGCRBase, T...> ;

  struct LTDCSRCRBase {} ;

  struct SRCR : public RegisterBase<0x40016824, 32, ReadWriteMode>
  {
    using VBR = LTDC_SRCR_VBR_Values<LTDC::SRCR, 1, 1, ReadWriteMode, LTDCSRCRBase> ;
    using IMR = LTDC_SRCR_IMR_Values<LTDC::SRCR, 0, 1, ReadWriteMode, LTDCSRCRBase> ;
    using FieldValues = LTDC_SRCR_IMR_Values<LTDC::SRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRCRPack  = Register<0x40016824, 32, ReadWriteMode, LTDCSRCRBase, T...> ;

  struct LTDCBCCRBase {} ;

  struct BCCR : public RegisterBase<0x4001682C, 32, ReadWriteMode>
  {
    using BC = LTDC_BCCR_BC_Values<LTDC::BCCR, 0, 24, ReadWriteMode, LTDCBCCRBase> ;
    using FieldValues = LTDC_BCCR_BC_Values<LTDC::BCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCCRPack  = Register<0x4001682C, 32, ReadWriteMode, LTDCBCCRBase, T...> ;

  struct LTDCIERBase {} ;

  struct IER : public RegisterBase<0x40016834, 32, ReadWriteMode>
  {
    using RRIE = LTDC_IER_RRIE_Values<LTDC::IER, 3, 1, ReadWriteMode, LTDCIERBase> ;
    using TERRIE = LTDC_IER_TERRIE_Values<LTDC::IER, 2, 1, ReadWriteMode, LTDCIERBase> ;
    using FUIE = LTDC_IER_FUIE_Values<LTDC::IER, 1, 1, ReadWriteMode, LTDCIERBase> ;
    using LIE = LTDC_IER_LIE_Values<LTDC::IER, 0, 1, ReadWriteMode, LTDCIERBase> ;
    using FieldValues = LTDC_IER_LIE_Values<LTDC::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40016834, 32, ReadWriteMode, LTDCIERBase, T...> ;

  struct LTDCISRBase {} ;

  struct ISR : public RegisterBase<0x40016838, 32, ReadMode>
  {
    using RRIF = LTDC_ISR_RRIF_Values<LTDC::ISR, 3, 1, ReadMode, LTDCISRBase> ;
    using TERRIF = LTDC_ISR_TERRIF_Values<LTDC::ISR, 2, 1, ReadMode, LTDCISRBase> ;
    using FUIF = LTDC_ISR_FUIF_Values<LTDC::ISR, 1, 1, ReadMode, LTDCISRBase> ;
    using LIF = LTDC_ISR_LIF_Values<LTDC::ISR, 0, 1, ReadMode, LTDCISRBase> ;
    using FieldValues = LTDC_ISR_LIF_Values<LTDC::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40016838, 32, ReadMode, LTDCISRBase, T...> ;

  struct LTDCICRBase {} ;

  struct ICR : public RegisterBase<0x4001683C, 32, WriteMode>
  {
    using CRRIF = LTDC_ICR_CRRIF_Values<LTDC::ICR, 3, 1, WriteMode, LTDCICRBase> ;
    using CTERRIF = LTDC_ICR_CTERRIF_Values<LTDC::ICR, 2, 1, WriteMode, LTDCICRBase> ;
    using CFUIF = LTDC_ICR_CFUIF_Values<LTDC::ICR, 1, 1, WriteMode, LTDCICRBase> ;
    using CLIF = LTDC_ICR_CLIF_Values<LTDC::ICR, 0, 1, WriteMode, LTDCICRBase> ;
    using FieldValues = LTDC_ICR_CLIF_Values<LTDC::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x4001683C, 32, WriteMode, LTDCICRBase, T...> ;

  struct LTDCLIPCRBase {} ;

  struct LIPCR : public RegisterBase<0x40016840, 32, ReadWriteMode>
  {
    using LIPOS = LTDC_LIPCR_LIPOS_Values<LTDC::LIPCR, 0, 11, ReadWriteMode, LTDCLIPCRBase> ;
    using FieldValues = LTDC_LIPCR_LIPOS_Values<LTDC::LIPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LIPCRPack  = Register<0x40016840, 32, ReadWriteMode, LTDCLIPCRBase, T...> ;

  struct LTDCCPSRBase {} ;

  struct CPSR : public RegisterBase<0x40016844, 32, ReadMode>
  {
    using CXPOS = LTDC_CPSR_CXPOS_Values<LTDC::CPSR, 16, 16, ReadMode, LTDCCPSRBase> ;
    using CYPOS = LTDC_CPSR_CYPOS_Values<LTDC::CPSR, 0, 16, ReadMode, LTDCCPSRBase> ;
    using FieldValues = LTDC_CPSR_CYPOS_Values<LTDC::CPSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPSRPack  = Register<0x40016844, 32, ReadMode, LTDCCPSRBase, T...> ;

  struct LTDCCDSRBase {} ;

  struct CDSR : public RegisterBase<0x40016848, 32, ReadMode>
  {
    using HSYNCS = LTDC_CDSR_HSYNCS_Values<LTDC::CDSR, 3, 1, ReadMode, LTDCCDSRBase> ;
    using VSYNCS = LTDC_CDSR_VSYNCS_Values<LTDC::CDSR, 2, 1, ReadMode, LTDCCDSRBase> ;
    using HDES = LTDC_CDSR_HDES_Values<LTDC::CDSR, 1, 1, ReadMode, LTDCCDSRBase> ;
    using VDES = LTDC_CDSR_VDES_Values<LTDC::CDSR, 0, 1, ReadMode, LTDCCDSRBase> ;
    using FieldValues = LTDC_CDSR_VDES_Values<LTDC::CDSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDSRPack  = Register<0x40016848, 32, ReadMode, LTDCCDSRBase, T...> ;

  struct LTDCL1CRBase {} ;

  struct L1CR : public RegisterBase<0x40016884, 32, ReadWriteMode>
  {
    using CLUTEN = LTDC_L1CR_CLUTEN_Values<LTDC::L1CR, 4, 1, ReadWriteMode, LTDCL1CRBase> ;
    using COLKEN = LTDC_L1CR_COLKEN_Values<LTDC::L1CR, 1, 1, ReadWriteMode, LTDCL1CRBase> ;
    using LEN = LTDC_L1CR_LEN_Values<LTDC::L1CR, 0, 1, ReadWriteMode, LTDCL1CRBase> ;
    using FieldValues = LTDC_L1CR_LEN_Values<LTDC::L1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1CRPack  = Register<0x40016884, 32, ReadWriteMode, LTDCL1CRBase, T...> ;

  struct LTDCL1WHPCRBase {} ;

  struct L1WHPCR : public RegisterBase<0x40016888, 32, ReadWriteMode>
  {
    using WHSPPOS = LTDC_L1WHPCR_WHSPPOS_Values<LTDC::L1WHPCR, 16, 12, ReadWriteMode, LTDCL1WHPCRBase> ;
    using WHSTPOS = LTDC_L1WHPCR_WHSTPOS_Values<LTDC::L1WHPCR, 0, 12, ReadWriteMode, LTDCL1WHPCRBase> ;
    using FieldValues = LTDC_L1WHPCR_WHSTPOS_Values<LTDC::L1WHPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1WHPCRPack  = Register<0x40016888, 32, ReadWriteMode, LTDCL1WHPCRBase, T...> ;

  struct LTDCL1WVPCRBase {} ;

  struct L1WVPCR : public RegisterBase<0x4001688C, 32, ReadWriteMode>
  {
    using WVSPPOS = LTDC_L1WVPCR_WVSPPOS_Values<LTDC::L1WVPCR, 16, 11, ReadWriteMode, LTDCL1WVPCRBase> ;
    using WVSTPOS = LTDC_L1WVPCR_WVSTPOS_Values<LTDC::L1WVPCR, 0, 11, ReadWriteMode, LTDCL1WVPCRBase> ;
    using FieldValues = LTDC_L1WVPCR_WVSTPOS_Values<LTDC::L1WVPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1WVPCRPack  = Register<0x4001688C, 32, ReadWriteMode, LTDCL1WVPCRBase, T...> ;

  struct LTDCL1CKCRBase {} ;

  struct L1CKCR : public RegisterBase<0x40016890, 32, ReadWriteMode>
  {
    using CKRED = LTDC_L1CKCR_CKRED_Values<LTDC::L1CKCR, 16, 8, ReadWriteMode, LTDCL1CKCRBase> ;
    using CKGREEN = LTDC_L1CKCR_CKGREEN_Values<LTDC::L1CKCR, 8, 8, ReadWriteMode, LTDCL1CKCRBase> ;
    using CKBLUE = LTDC_L1CKCR_CKBLUE_Values<LTDC::L1CKCR, 0, 8, ReadWriteMode, LTDCL1CKCRBase> ;
    using FieldValues = LTDC_L1CKCR_CKBLUE_Values<LTDC::L1CKCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1CKCRPack  = Register<0x40016890, 32, ReadWriteMode, LTDCL1CKCRBase, T...> ;

  struct LTDCL1PFCRBase {} ;

  struct L1PFCR : public RegisterBase<0x40016894, 32, ReadWriteMode>
  {
    using PF = LTDC_L1PFCR_PF_Values<LTDC::L1PFCR, 0, 3, ReadWriteMode, LTDCL1PFCRBase> ;
    using FieldValues = LTDC_L1PFCR_PF_Values<LTDC::L1PFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1PFCRPack  = Register<0x40016894, 32, ReadWriteMode, LTDCL1PFCRBase, T...> ;

  struct LTDCL1CACRBase {} ;

  struct L1CACR : public RegisterBase<0x40016898, 32, ReadWriteMode>
  {
    using CONSTA = LTDC_L1CACR_CONSTA_Values<LTDC::L1CACR, 0, 8, ReadWriteMode, LTDCL1CACRBase> ;
    using FieldValues = LTDC_L1CACR_CONSTA_Values<LTDC::L1CACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1CACRPack  = Register<0x40016898, 32, ReadWriteMode, LTDCL1CACRBase, T...> ;

  struct LTDCL1DCCRBase {} ;

  struct L1DCCR : public RegisterBase<0x4001689C, 32, ReadWriteMode>
  {
    using DCALPHA = LTDC_L1DCCR_DCALPHA_Values<LTDC::L1DCCR, 24, 8, ReadWriteMode, LTDCL1DCCRBase> ;
    using DCRED = LTDC_L1DCCR_DCRED_Values<LTDC::L1DCCR, 16, 8, ReadWriteMode, LTDCL1DCCRBase> ;
    using DCGREEN = LTDC_L1DCCR_DCGREEN_Values<LTDC::L1DCCR, 8, 8, ReadWriteMode, LTDCL1DCCRBase> ;
    using DCBLUE = LTDC_L1DCCR_DCBLUE_Values<LTDC::L1DCCR, 0, 8, ReadWriteMode, LTDCL1DCCRBase> ;
    using FieldValues = LTDC_L1DCCR_DCBLUE_Values<LTDC::L1DCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1DCCRPack  = Register<0x4001689C, 32, ReadWriteMode, LTDCL1DCCRBase, T...> ;

  struct LTDCL1BFCRBase {} ;

  struct L1BFCR : public RegisterBase<0x400168A0, 32, ReadWriteMode>
  {
    using BF1 = LTDC_L1BFCR_BF1_Values<LTDC::L1BFCR, 8, 3, ReadWriteMode, LTDCL1BFCRBase> ;
    using BF2 = LTDC_L1BFCR_BF2_Values<LTDC::L1BFCR, 0, 3, ReadWriteMode, LTDCL1BFCRBase> ;
    using FieldValues = LTDC_L1BFCR_BF2_Values<LTDC::L1BFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1BFCRPack  = Register<0x400168A0, 32, ReadWriteMode, LTDCL1BFCRBase, T...> ;

  struct LTDCL1CFBARBase {} ;

  struct L1CFBAR : public RegisterBase<0x400168AC, 32, ReadWriteMode>
  {
    using CFBADD = LTDC_L1CFBAR_CFBADD_Values<LTDC::L1CFBAR, 0, 32, ReadWriteMode, LTDCL1CFBARBase> ;
    using FieldValues = LTDC_L1CFBAR_CFBADD_Values<LTDC::L1CFBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1CFBARPack  = Register<0x400168AC, 32, ReadWriteMode, LTDCL1CFBARBase, T...> ;

  struct LTDCL1CFBLRBase {} ;

  struct L1CFBLR : public RegisterBase<0x400168B0, 32, ReadWriteMode>
  {
    using CFBP = LTDC_L1CFBLR_CFBP_Values<LTDC::L1CFBLR, 16, 13, ReadWriteMode, LTDCL1CFBLRBase> ;
    using CFBLL = LTDC_L1CFBLR_CFBLL_Values<LTDC::L1CFBLR, 0, 13, ReadWriteMode, LTDCL1CFBLRBase> ;
    using FieldValues = LTDC_L1CFBLR_CFBLL_Values<LTDC::L1CFBLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1CFBLRPack  = Register<0x400168B0, 32, ReadWriteMode, LTDCL1CFBLRBase, T...> ;

  struct LTDCL1CFBLNRBase {} ;

  struct L1CFBLNR : public RegisterBase<0x400168B4, 32, ReadWriteMode>
  {
    using CFBLNBR = LTDC_L1CFBLNR_CFBLNBR_Values<LTDC::L1CFBLNR, 0, 11, ReadWriteMode, LTDCL1CFBLNRBase> ;
    using FieldValues = LTDC_L1CFBLNR_CFBLNBR_Values<LTDC::L1CFBLNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1CFBLNRPack  = Register<0x400168B4, 32, ReadWriteMode, LTDCL1CFBLNRBase, T...> ;

  struct LTDCL1CLUTWRBase {} ;

  struct L1CLUTWR : public RegisterBase<0x400168C4, 32, WriteMode>
  {
    using CLUTADD = LTDC_L1CLUTWR_CLUTADD_Values<LTDC::L1CLUTWR, 24, 8, WriteMode, LTDCL1CLUTWRBase> ;
    using RED = LTDC_L1CLUTWR_RED_Values<LTDC::L1CLUTWR, 16, 8, WriteMode, LTDCL1CLUTWRBase> ;
    using GREEN = LTDC_L1CLUTWR_GREEN_Values<LTDC::L1CLUTWR, 8, 8, WriteMode, LTDCL1CLUTWRBase> ;
    using BLUE = LTDC_L1CLUTWR_BLUE_Values<LTDC::L1CLUTWR, 0, 8, WriteMode, LTDCL1CLUTWRBase> ;
    using FieldValues = LTDC_L1CLUTWR_BLUE_Values<LTDC::L1CLUTWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L1CLUTWRPack  = Register<0x400168C4, 32, WriteMode, LTDCL1CLUTWRBase, T...> ;

  struct LTDCL2CRBase {} ;

  struct L2CR : public RegisterBase<0x40016904, 32, ReadWriteMode>
  {
    using CLUTEN = LTDC_L2CR_CLUTEN_Values<LTDC::L2CR, 4, 1, ReadWriteMode, LTDCL2CRBase> ;
    using COLKEN = LTDC_L2CR_COLKEN_Values<LTDC::L2CR, 1, 1, ReadWriteMode, LTDCL2CRBase> ;
    using LEN = LTDC_L2CR_LEN_Values<LTDC::L2CR, 0, 1, ReadWriteMode, LTDCL2CRBase> ;
    using FieldValues = LTDC_L2CR_LEN_Values<LTDC::L2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2CRPack  = Register<0x40016904, 32, ReadWriteMode, LTDCL2CRBase, T...> ;

  struct LTDCL2WHPCRBase {} ;

  struct L2WHPCR : public RegisterBase<0x40016908, 32, ReadWriteMode>
  {
    using WHSPPOS = LTDC_L2WHPCR_WHSPPOS_Values<LTDC::L2WHPCR, 16, 12, ReadWriteMode, LTDCL2WHPCRBase> ;
    using WHSTPOS = LTDC_L2WHPCR_WHSTPOS_Values<LTDC::L2WHPCR, 0, 12, ReadWriteMode, LTDCL2WHPCRBase> ;
    using FieldValues = LTDC_L2WHPCR_WHSTPOS_Values<LTDC::L2WHPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2WHPCRPack  = Register<0x40016908, 32, ReadWriteMode, LTDCL2WHPCRBase, T...> ;

  struct LTDCL2WVPCRBase {} ;

  struct L2WVPCR : public RegisterBase<0x4001690C, 32, ReadWriteMode>
  {
    using WVSPPOS = LTDC_L2WVPCR_WVSPPOS_Values<LTDC::L2WVPCR, 16, 11, ReadWriteMode, LTDCL2WVPCRBase> ;
    using WVSTPOS = LTDC_L2WVPCR_WVSTPOS_Values<LTDC::L2WVPCR, 0, 11, ReadWriteMode, LTDCL2WVPCRBase> ;
    using FieldValues = LTDC_L2WVPCR_WVSTPOS_Values<LTDC::L2WVPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2WVPCRPack  = Register<0x4001690C, 32, ReadWriteMode, LTDCL2WVPCRBase, T...> ;

  struct LTDCL2CKCRBase {} ;

  struct L2CKCR : public RegisterBase<0x40016910, 32, ReadWriteMode>
  {
    using CKRED = LTDC_L2CKCR_CKRED_Values<LTDC::L2CKCR, 15, 9, ReadWriteMode, LTDCL2CKCRBase> ;
    using CKGREEN = LTDC_L2CKCR_CKGREEN_Values<LTDC::L2CKCR, 8, 7, ReadWriteMode, LTDCL2CKCRBase> ;
    using CKBLUE = LTDC_L2CKCR_CKBLUE_Values<LTDC::L2CKCR, 0, 8, ReadWriteMode, LTDCL2CKCRBase> ;
    using FieldValues = LTDC_L2CKCR_CKBLUE_Values<LTDC::L2CKCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2CKCRPack  = Register<0x40016910, 32, ReadWriteMode, LTDCL2CKCRBase, T...> ;

  struct LTDCL2PFCRBase {} ;

  struct L2PFCR : public RegisterBase<0x40016914, 32, ReadWriteMode>
  {
    using PF = LTDC_L2PFCR_PF_Values<LTDC::L2PFCR, 0, 3, ReadWriteMode, LTDCL2PFCRBase> ;
    using FieldValues = LTDC_L2PFCR_PF_Values<LTDC::L2PFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2PFCRPack  = Register<0x40016914, 32, ReadWriteMode, LTDCL2PFCRBase, T...> ;

  struct LTDCL2CACRBase {} ;

  struct L2CACR : public RegisterBase<0x40016918, 32, ReadWriteMode>
  {
    using CONSTA = LTDC_L2CACR_CONSTA_Values<LTDC::L2CACR, 0, 8, ReadWriteMode, LTDCL2CACRBase> ;
    using FieldValues = LTDC_L2CACR_CONSTA_Values<LTDC::L2CACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2CACRPack  = Register<0x40016918, 32, ReadWriteMode, LTDCL2CACRBase, T...> ;

  struct LTDCL2DCCRBase {} ;

  struct L2DCCR : public RegisterBase<0x4001691C, 32, ReadWriteMode>
  {
    using DCALPHA = LTDC_L2DCCR_DCALPHA_Values<LTDC::L2DCCR, 24, 8, ReadWriteMode, LTDCL2DCCRBase> ;
    using DCRED = LTDC_L2DCCR_DCRED_Values<LTDC::L2DCCR, 16, 8, ReadWriteMode, LTDCL2DCCRBase> ;
    using DCGREEN = LTDC_L2DCCR_DCGREEN_Values<LTDC::L2DCCR, 8, 8, ReadWriteMode, LTDCL2DCCRBase> ;
    using DCBLUE = LTDC_L2DCCR_DCBLUE_Values<LTDC::L2DCCR, 0, 8, ReadWriteMode, LTDCL2DCCRBase> ;
    using FieldValues = LTDC_L2DCCR_DCBLUE_Values<LTDC::L2DCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2DCCRPack  = Register<0x4001691C, 32, ReadWriteMode, LTDCL2DCCRBase, T...> ;

  struct LTDCL2BFCRBase {} ;

  struct L2BFCR : public RegisterBase<0x40016920, 32, ReadWriteMode>
  {
    using BF1 = LTDC_L2BFCR_BF1_Values<LTDC::L2BFCR, 8, 3, ReadWriteMode, LTDCL2BFCRBase> ;
    using BF2 = LTDC_L2BFCR_BF2_Values<LTDC::L2BFCR, 0, 3, ReadWriteMode, LTDCL2BFCRBase> ;
    using FieldValues = LTDC_L2BFCR_BF2_Values<LTDC::L2BFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2BFCRPack  = Register<0x40016920, 32, ReadWriteMode, LTDCL2BFCRBase, T...> ;

  struct LTDCL2CFBARBase {} ;

  struct L2CFBAR : public RegisterBase<0x4001692C, 32, ReadWriteMode>
  {
    using CFBADD = LTDC_L2CFBAR_CFBADD_Values<LTDC::L2CFBAR, 0, 32, ReadWriteMode, LTDCL2CFBARBase> ;
    using FieldValues = LTDC_L2CFBAR_CFBADD_Values<LTDC::L2CFBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2CFBARPack  = Register<0x4001692C, 32, ReadWriteMode, LTDCL2CFBARBase, T...> ;

  struct LTDCL2CFBLRBase {} ;

  struct L2CFBLR : public RegisterBase<0x40016930, 32, ReadWriteMode>
  {
    using CFBP = LTDC_L2CFBLR_CFBP_Values<LTDC::L2CFBLR, 16, 13, ReadWriteMode, LTDCL2CFBLRBase> ;
    using CFBLL = LTDC_L2CFBLR_CFBLL_Values<LTDC::L2CFBLR, 0, 13, ReadWriteMode, LTDCL2CFBLRBase> ;
    using FieldValues = LTDC_L2CFBLR_CFBLL_Values<LTDC::L2CFBLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2CFBLRPack  = Register<0x40016930, 32, ReadWriteMode, LTDCL2CFBLRBase, T...> ;

  struct LTDCL2CFBLNRBase {} ;

  struct L2CFBLNR : public RegisterBase<0x40016934, 32, ReadWriteMode>
  {
    using CFBLNBR = LTDC_L2CFBLNR_CFBLNBR_Values<LTDC::L2CFBLNR, 0, 11, ReadWriteMode, LTDCL2CFBLNRBase> ;
    using FieldValues = LTDC_L2CFBLNR_CFBLNBR_Values<LTDC::L2CFBLNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2CFBLNRPack  = Register<0x40016934, 32, ReadWriteMode, LTDCL2CFBLNRBase, T...> ;

  struct LTDCL2CLUTWRBase {} ;

  struct L2CLUTWR : public RegisterBase<0x40016944, 32, WriteMode>
  {
    using CLUTADD = LTDC_L2CLUTWR_CLUTADD_Values<LTDC::L2CLUTWR, 24, 8, WriteMode, LTDCL2CLUTWRBase> ;
    using RED = LTDC_L2CLUTWR_RED_Values<LTDC::L2CLUTWR, 16, 8, WriteMode, LTDCL2CLUTWRBase> ;
    using GREEN = LTDC_L2CLUTWR_GREEN_Values<LTDC::L2CLUTWR, 8, 8, WriteMode, LTDCL2CLUTWRBase> ;
    using BLUE = LTDC_L2CLUTWR_BLUE_Values<LTDC::L2CLUTWR, 0, 8, WriteMode, LTDCL2CLUTWRBase> ;
    using FieldValues = LTDC_L2CLUTWR_BLUE_Values<LTDC::L2CLUTWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using L2CLUTWRPack  = Register<0x40016944, 32, WriteMode, LTDCL2CLUTWRBase, T...> ;

} ;

#endif //#if !defined(LTDCREGISTERS_HPP)
