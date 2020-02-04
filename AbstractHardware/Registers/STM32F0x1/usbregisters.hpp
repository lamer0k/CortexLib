/*******************************************************************************
* Filename      : usbregisters.hpp
*
* Details       : Universal serial bus full-speed device interface. This header
*                 file is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(USBREGISTERS_HPP)
#define USBREGISTERS_HPP

#include "usbfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USB
{
  struct USBEP0RBase {} ;

  struct EP0R : public RegisterBase<0x40005C00, 32, ReadWriteMode>
  {
    using EA = USB_EP0R_EA_Values<USB::EP0R, 0, 4, ReadWriteMode, USBEP0RBase> ;
    using STAT_TX = USB_EP0R_STAT_TX_Values<USB::EP0R, 4, 2, ReadWriteMode, USBEP0RBase> ;
    using DTOG_TX = USB_EP0R_DTOG_TX_Values<USB::EP0R, 6, 1, ReadWriteMode, USBEP0RBase> ;
    using CTR_TX = USB_EP0R_CTR_TX_Values<USB::EP0R, 7, 1, ReadWriteMode, USBEP0RBase> ;
    using EP_KIND = USB_EP0R_EP_KIND_Values<USB::EP0R, 8, 1, ReadWriteMode, USBEP0RBase> ;
    using EP_TYPE = USB_EP0R_EP_TYPE_Values<USB::EP0R, 9, 2, ReadWriteMode, USBEP0RBase> ;
    using SETUP = USB_EP0R_SETUP_Values<USB::EP0R, 11, 1, ReadWriteMode, USBEP0RBase> ;
    using STAT_RX = USB_EP0R_STAT_RX_Values<USB::EP0R, 12, 2, ReadWriteMode, USBEP0RBase> ;
    using DTOG_RX = USB_EP0R_DTOG_RX_Values<USB::EP0R, 14, 1, ReadWriteMode, USBEP0RBase> ;
    using CTR_RX = USB_EP0R_CTR_RX_Values<USB::EP0R, 15, 1, ReadWriteMode, USBEP0RBase> ;
    using FieldValues = USB_EP0R_CTR_RX_Values<USB::EP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP0RPack  = Register<0x40005C00, 32, ReadWriteMode, USBEP0RBase, T...> ;

  struct USBEP1RBase {} ;

  struct EP1R : public RegisterBase<0x40005C04, 32, ReadWriteMode>
  {
    using EA = USB_EP1R_EA_Values<USB::EP1R, 0, 4, ReadWriteMode, USBEP1RBase> ;
    using STAT_TX = USB_EP1R_STAT_TX_Values<USB::EP1R, 4, 2, ReadWriteMode, USBEP1RBase> ;
    using DTOG_TX = USB_EP1R_DTOG_TX_Values<USB::EP1R, 6, 1, ReadWriteMode, USBEP1RBase> ;
    using CTR_TX = USB_EP1R_CTR_TX_Values<USB::EP1R, 7, 1, ReadWriteMode, USBEP1RBase> ;
    using EP_KIND = USB_EP1R_EP_KIND_Values<USB::EP1R, 8, 1, ReadWriteMode, USBEP1RBase> ;
    using EP_TYPE = USB_EP1R_EP_TYPE_Values<USB::EP1R, 9, 2, ReadWriteMode, USBEP1RBase> ;
    using SETUP = USB_EP1R_SETUP_Values<USB::EP1R, 11, 1, ReadWriteMode, USBEP1RBase> ;
    using STAT_RX = USB_EP1R_STAT_RX_Values<USB::EP1R, 12, 2, ReadWriteMode, USBEP1RBase> ;
    using DTOG_RX = USB_EP1R_DTOG_RX_Values<USB::EP1R, 14, 1, ReadWriteMode, USBEP1RBase> ;
    using CTR_RX = USB_EP1R_CTR_RX_Values<USB::EP1R, 15, 1, ReadWriteMode, USBEP1RBase> ;
    using FieldValues = USB_EP1R_CTR_RX_Values<USB::EP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP1RPack  = Register<0x40005C04, 32, ReadWriteMode, USBEP1RBase, T...> ;

  struct USBEP2RBase {} ;

  struct EP2R : public RegisterBase<0x40005C08, 32, ReadWriteMode>
  {
    using EA = USB_EP2R_EA_Values<USB::EP2R, 0, 4, ReadWriteMode, USBEP2RBase> ;
    using STAT_TX = USB_EP2R_STAT_TX_Values<USB::EP2R, 4, 2, ReadWriteMode, USBEP2RBase> ;
    using DTOG_TX = USB_EP2R_DTOG_TX_Values<USB::EP2R, 6, 1, ReadWriteMode, USBEP2RBase> ;
    using CTR_TX = USB_EP2R_CTR_TX_Values<USB::EP2R, 7, 1, ReadWriteMode, USBEP2RBase> ;
    using EP_KIND = USB_EP2R_EP_KIND_Values<USB::EP2R, 8, 1, ReadWriteMode, USBEP2RBase> ;
    using EP_TYPE = USB_EP2R_EP_TYPE_Values<USB::EP2R, 9, 2, ReadWriteMode, USBEP2RBase> ;
    using SETUP = USB_EP2R_SETUP_Values<USB::EP2R, 11, 1, ReadWriteMode, USBEP2RBase> ;
    using STAT_RX = USB_EP2R_STAT_RX_Values<USB::EP2R, 12, 2, ReadWriteMode, USBEP2RBase> ;
    using DTOG_RX = USB_EP2R_DTOG_RX_Values<USB::EP2R, 14, 1, ReadWriteMode, USBEP2RBase> ;
    using CTR_RX = USB_EP2R_CTR_RX_Values<USB::EP2R, 15, 1, ReadWriteMode, USBEP2RBase> ;
    using FieldValues = USB_EP2R_CTR_RX_Values<USB::EP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP2RPack  = Register<0x40005C08, 32, ReadWriteMode, USBEP2RBase, T...> ;

  struct USBEP3RBase {} ;

  struct EP3R : public RegisterBase<0x40005C0C, 32, ReadWriteMode>
  {
    using EA = USB_EP3R_EA_Values<USB::EP3R, 0, 4, ReadWriteMode, USBEP3RBase> ;
    using STAT_TX = USB_EP3R_STAT_TX_Values<USB::EP3R, 4, 2, ReadWriteMode, USBEP3RBase> ;
    using DTOG_TX = USB_EP3R_DTOG_TX_Values<USB::EP3R, 6, 1, ReadWriteMode, USBEP3RBase> ;
    using CTR_TX = USB_EP3R_CTR_TX_Values<USB::EP3R, 7, 1, ReadWriteMode, USBEP3RBase> ;
    using EP_KIND = USB_EP3R_EP_KIND_Values<USB::EP3R, 8, 1, ReadWriteMode, USBEP3RBase> ;
    using EP_TYPE = USB_EP3R_EP_TYPE_Values<USB::EP3R, 9, 2, ReadWriteMode, USBEP3RBase> ;
    using SETUP = USB_EP3R_SETUP_Values<USB::EP3R, 11, 1, ReadWriteMode, USBEP3RBase> ;
    using STAT_RX = USB_EP3R_STAT_RX_Values<USB::EP3R, 12, 2, ReadWriteMode, USBEP3RBase> ;
    using DTOG_RX = USB_EP3R_DTOG_RX_Values<USB::EP3R, 14, 1, ReadWriteMode, USBEP3RBase> ;
    using CTR_RX = USB_EP3R_CTR_RX_Values<USB::EP3R, 15, 1, ReadWriteMode, USBEP3RBase> ;
    using FieldValues = USB_EP3R_CTR_RX_Values<USB::EP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP3RPack  = Register<0x40005C0C, 32, ReadWriteMode, USBEP3RBase, T...> ;

  struct USBEP4RBase {} ;

  struct EP4R : public RegisterBase<0x40005C10, 32, ReadWriteMode>
  {
    using EA = USB_EP4R_EA_Values<USB::EP4R, 0, 4, ReadWriteMode, USBEP4RBase> ;
    using STAT_TX = USB_EP4R_STAT_TX_Values<USB::EP4R, 4, 2, ReadWriteMode, USBEP4RBase> ;
    using DTOG_TX = USB_EP4R_DTOG_TX_Values<USB::EP4R, 6, 1, ReadWriteMode, USBEP4RBase> ;
    using CTR_TX = USB_EP4R_CTR_TX_Values<USB::EP4R, 7, 1, ReadWriteMode, USBEP4RBase> ;
    using EP_KIND = USB_EP4R_EP_KIND_Values<USB::EP4R, 8, 1, ReadWriteMode, USBEP4RBase> ;
    using EP_TYPE = USB_EP4R_EP_TYPE_Values<USB::EP4R, 9, 2, ReadWriteMode, USBEP4RBase> ;
    using SETUP = USB_EP4R_SETUP_Values<USB::EP4R, 11, 1, ReadWriteMode, USBEP4RBase> ;
    using STAT_RX = USB_EP4R_STAT_RX_Values<USB::EP4R, 12, 2, ReadWriteMode, USBEP4RBase> ;
    using DTOG_RX = USB_EP4R_DTOG_RX_Values<USB::EP4R, 14, 1, ReadWriteMode, USBEP4RBase> ;
    using CTR_RX = USB_EP4R_CTR_RX_Values<USB::EP4R, 15, 1, ReadWriteMode, USBEP4RBase> ;
    using FieldValues = USB_EP4R_CTR_RX_Values<USB::EP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP4RPack  = Register<0x40005C10, 32, ReadWriteMode, USBEP4RBase, T...> ;

  struct USBEP5RBase {} ;

  struct EP5R : public RegisterBase<0x40005C14, 32, ReadWriteMode>
  {
    using EA = USB_EP5R_EA_Values<USB::EP5R, 0, 4, ReadWriteMode, USBEP5RBase> ;
    using STAT_TX = USB_EP5R_STAT_TX_Values<USB::EP5R, 4, 2, ReadWriteMode, USBEP5RBase> ;
    using DTOG_TX = USB_EP5R_DTOG_TX_Values<USB::EP5R, 6, 1, ReadWriteMode, USBEP5RBase> ;
    using CTR_TX = USB_EP5R_CTR_TX_Values<USB::EP5R, 7, 1, ReadWriteMode, USBEP5RBase> ;
    using EP_KIND = USB_EP5R_EP_KIND_Values<USB::EP5R, 8, 1, ReadWriteMode, USBEP5RBase> ;
    using EP_TYPE = USB_EP5R_EP_TYPE_Values<USB::EP5R, 9, 2, ReadWriteMode, USBEP5RBase> ;
    using SETUP = USB_EP5R_SETUP_Values<USB::EP5R, 11, 1, ReadWriteMode, USBEP5RBase> ;
    using STAT_RX = USB_EP5R_STAT_RX_Values<USB::EP5R, 12, 2, ReadWriteMode, USBEP5RBase> ;
    using DTOG_RX = USB_EP5R_DTOG_RX_Values<USB::EP5R, 14, 1, ReadWriteMode, USBEP5RBase> ;
    using CTR_RX = USB_EP5R_CTR_RX_Values<USB::EP5R, 15, 1, ReadWriteMode, USBEP5RBase> ;
    using FieldValues = USB_EP5R_CTR_RX_Values<USB::EP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP5RPack  = Register<0x40005C14, 32, ReadWriteMode, USBEP5RBase, T...> ;

  struct USBEP6RBase {} ;

  struct EP6R : public RegisterBase<0x40005C18, 32, ReadWriteMode>
  {
    using EA = USB_EP6R_EA_Values<USB::EP6R, 0, 4, ReadWriteMode, USBEP6RBase> ;
    using STAT_TX = USB_EP6R_STAT_TX_Values<USB::EP6R, 4, 2, ReadWriteMode, USBEP6RBase> ;
    using DTOG_TX = USB_EP6R_DTOG_TX_Values<USB::EP6R, 6, 1, ReadWriteMode, USBEP6RBase> ;
    using CTR_TX = USB_EP6R_CTR_TX_Values<USB::EP6R, 7, 1, ReadWriteMode, USBEP6RBase> ;
    using EP_KIND = USB_EP6R_EP_KIND_Values<USB::EP6R, 8, 1, ReadWriteMode, USBEP6RBase> ;
    using EP_TYPE = USB_EP6R_EP_TYPE_Values<USB::EP6R, 9, 2, ReadWriteMode, USBEP6RBase> ;
    using SETUP = USB_EP6R_SETUP_Values<USB::EP6R, 11, 1, ReadWriteMode, USBEP6RBase> ;
    using STAT_RX = USB_EP6R_STAT_RX_Values<USB::EP6R, 12, 2, ReadWriteMode, USBEP6RBase> ;
    using DTOG_RX = USB_EP6R_DTOG_RX_Values<USB::EP6R, 14, 1, ReadWriteMode, USBEP6RBase> ;
    using CTR_RX = USB_EP6R_CTR_RX_Values<USB::EP6R, 15, 1, ReadWriteMode, USBEP6RBase> ;
    using FieldValues = USB_EP6R_CTR_RX_Values<USB::EP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP6RPack  = Register<0x40005C18, 32, ReadWriteMode, USBEP6RBase, T...> ;

  struct USBEP7RBase {} ;

  struct EP7R : public RegisterBase<0x40005C1C, 32, ReadWriteMode>
  {
    using EA = USB_EP7R_EA_Values<USB::EP7R, 0, 4, ReadWriteMode, USBEP7RBase> ;
    using STAT_TX = USB_EP7R_STAT_TX_Values<USB::EP7R, 4, 2, ReadWriteMode, USBEP7RBase> ;
    using DTOG_TX = USB_EP7R_DTOG_TX_Values<USB::EP7R, 6, 1, ReadWriteMode, USBEP7RBase> ;
    using CTR_TX = USB_EP7R_CTR_TX_Values<USB::EP7R, 7, 1, ReadWriteMode, USBEP7RBase> ;
    using EP_KIND = USB_EP7R_EP_KIND_Values<USB::EP7R, 8, 1, ReadWriteMode, USBEP7RBase> ;
    using EP_TYPE = USB_EP7R_EP_TYPE_Values<USB::EP7R, 9, 2, ReadWriteMode, USBEP7RBase> ;
    using SETUP = USB_EP7R_SETUP_Values<USB::EP7R, 11, 1, ReadWriteMode, USBEP7RBase> ;
    using STAT_RX = USB_EP7R_STAT_RX_Values<USB::EP7R, 12, 2, ReadWriteMode, USBEP7RBase> ;
    using DTOG_RX = USB_EP7R_DTOG_RX_Values<USB::EP7R, 14, 1, ReadWriteMode, USBEP7RBase> ;
    using CTR_RX = USB_EP7R_CTR_RX_Values<USB::EP7R, 15, 1, ReadWriteMode, USBEP7RBase> ;
    using FieldValues = USB_EP7R_CTR_RX_Values<USB::EP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP7RPack  = Register<0x40005C1C, 32, ReadWriteMode, USBEP7RBase, T...> ;

  struct USBCNTRBase {} ;

  struct CNTR : public RegisterBase<0x40005C40, 32, ReadWriteMode>
  {
    using FRES = USB_CNTR_FRES_Values<USB::CNTR, 0, 1, ReadWriteMode, USBCNTRBase> ;
    using PDWN = USB_CNTR_PDWN_Values<USB::CNTR, 1, 1, ReadWriteMode, USBCNTRBase> ;
    using LPMODE = USB_CNTR_LPMODE_Values<USB::CNTR, 2, 1, ReadWriteMode, USBCNTRBase> ;
    using FSUSP = USB_CNTR_FSUSP_Values<USB::CNTR, 3, 1, ReadWriteMode, USBCNTRBase> ;
    using RESUME = USB_CNTR_RESUME_Values<USB::CNTR, 4, 1, ReadWriteMode, USBCNTRBase> ;
    using L1RESUME = USB_CNTR_L1RESUME_Values<USB::CNTR, 5, 1, ReadWriteMode, USBCNTRBase> ;
    using L1REQM = USB_CNTR_L1REQM_Values<USB::CNTR, 7, 1, ReadWriteMode, USBCNTRBase> ;
    using ESOFM = USB_CNTR_ESOFM_Values<USB::CNTR, 8, 1, ReadWriteMode, USBCNTRBase> ;
    using SOFM = USB_CNTR_SOFM_Values<USB::CNTR, 9, 1, ReadWriteMode, USBCNTRBase> ;
    using RESETM = USB_CNTR_RESETM_Values<USB::CNTR, 10, 1, ReadWriteMode, USBCNTRBase> ;
    using SUSPM = USB_CNTR_SUSPM_Values<USB::CNTR, 11, 1, ReadWriteMode, USBCNTRBase> ;
    using WKUPM = USB_CNTR_WKUPM_Values<USB::CNTR, 12, 1, ReadWriteMode, USBCNTRBase> ;
    using ERRM = USB_CNTR_ERRM_Values<USB::CNTR, 13, 1, ReadWriteMode, USBCNTRBase> ;
    using PMAOVRM = USB_CNTR_PMAOVRM_Values<USB::CNTR, 14, 1, ReadWriteMode, USBCNTRBase> ;
    using CTRM = USB_CNTR_CTRM_Values<USB::CNTR, 15, 1, ReadWriteMode, USBCNTRBase> ;
    using FieldValues = USB_CNTR_CTRM_Values<USB::CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTRPack  = Register<0x40005C40, 32, ReadWriteMode, USBCNTRBase, T...> ;

  struct USBISTRBase {} ;

  struct ISTR : public RegisterBase<0x40005C44, 32, ReadWriteMode>
  {
    using EP_ID = USB_ISTR_EP_ID_Values<USB::ISTR, 0, 4, ReadMode, USBISTRBase> ;
    using DIR = USB_ISTR_DIR_Values<USB::ISTR, 4, 1, ReadMode, USBISTRBase> ;
    using L1REQ = USB_ISTR_L1REQ_Values<USB::ISTR, 7, 1, ReadWriteMode, USBISTRBase> ;
    using ESOF = USB_ISTR_ESOF_Values<USB::ISTR, 8, 1, ReadWriteMode, USBISTRBase> ;
    using SOF = USB_ISTR_SOF_Values<USB::ISTR, 9, 1, ReadWriteMode, USBISTRBase> ;
    using RESET = USB_ISTR_RESET_Values<USB::ISTR, 10, 1, ReadWriteMode, USBISTRBase> ;
    using SUSP = USB_ISTR_SUSP_Values<USB::ISTR, 11, 1, ReadWriteMode, USBISTRBase> ;
    using WKUP = USB_ISTR_WKUP_Values<USB::ISTR, 12, 1, ReadWriteMode, USBISTRBase> ;
    using ERR = USB_ISTR_ERR_Values<USB::ISTR, 13, 1, ReadWriteMode, USBISTRBase> ;
    using PMAOVR = USB_ISTR_PMAOVR_Values<USB::ISTR, 14, 1, ReadWriteMode, USBISTRBase> ;
    using CTR = USB_ISTR_CTR_Values<USB::ISTR, 15, 1, ReadMode, USBISTRBase> ;
    using FieldValues = USB_ISTR_CTR_Values<USB::ISTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTRPack  = Register<0x40005C44, 32, ReadWriteMode, USBISTRBase, T...> ;

  struct USBFNRBase {} ;

  struct FNR : public RegisterBase<0x40005C48, 32, ReadMode>
  {
    using FN = USB_FNR_FN_Values<USB::FNR, 0, 11, ReadMode, USBFNRBase> ;
    using LSOF = USB_FNR_LSOF_Values<USB::FNR, 11, 2, ReadMode, USBFNRBase> ;
    using LCK = USB_FNR_LCK_Values<USB::FNR, 13, 1, ReadMode, USBFNRBase> ;
    using RXDM = USB_FNR_RXDM_Values<USB::FNR, 14, 1, ReadMode, USBFNRBase> ;
    using RXDP = USB_FNR_RXDP_Values<USB::FNR, 15, 1, ReadMode, USBFNRBase> ;
    using FieldValues = USB_FNR_RXDP_Values<USB::FNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FNRPack  = Register<0x40005C48, 32, ReadMode, USBFNRBase, T...> ;

  struct USBDADDRBase {} ;

  struct DADDR : public RegisterBase<0x40005C4C, 32, ReadWriteMode>
  {
    using ADD = USB_DADDR_ADD_Values<USB::DADDR, 0, 7, ReadWriteMode, USBDADDRBase> ;
    using EF = USB_DADDR_EF_Values<USB::DADDR, 7, 1, ReadWriteMode, USBDADDRBase> ;
    using FieldValues = USB_DADDR_EF_Values<USB::DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DADDRPack  = Register<0x40005C4C, 32, ReadWriteMode, USBDADDRBase, T...> ;

  struct USBBTABLEBase {} ;

  struct BTABLE : public RegisterBase<0x40005C50, 32, ReadWriteMode>
  {
    using BTABLEField = USB_BTABLE_BTABLE_Values<USB::BTABLE, 3, 13, ReadWriteMode, USBBTABLEBase> ;
    using FieldValues = USB_BTABLE_BTABLE_Values<USB::BTABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTABLEPack  = Register<0x40005C50, 32, ReadWriteMode, USBBTABLEBase, T...> ;

  struct USBLPMCSRBase {} ;

  struct LPMCSR : public RegisterBase<0x40005C54, 32, ReadWriteMode>
  {
    using LPMEN = USB_LPMCSR_LPMEN_Values<USB::LPMCSR, 0, 1, ReadWriteMode, USBLPMCSRBase> ;
    using LPMACK = USB_LPMCSR_LPMACK_Values<USB::LPMCSR, 1, 1, ReadWriteMode, USBLPMCSRBase> ;
    using REMWAKE = USB_LPMCSR_REMWAKE_Values<USB::LPMCSR, 3, 1, ReadMode, USBLPMCSRBase> ;
    using BESL = USB_LPMCSR_BESL_Values<USB::LPMCSR, 4, 4, ReadMode, USBLPMCSRBase> ;
    using FieldValues = USB_LPMCSR_BESL_Values<USB::LPMCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPMCSRPack  = Register<0x40005C54, 32, ReadWriteMode, USBLPMCSRBase, T...> ;

  struct USBBCDRBase {} ;

  struct BCDR : public RegisterBase<0x40005C58, 32, ReadWriteMode>
  {
    using BCDEN = USB_BCDR_BCDEN_Values<USB::BCDR, 0, 1, ReadWriteMode, USBBCDRBase> ;
    using DCDEN = USB_BCDR_DCDEN_Values<USB::BCDR, 1, 1, ReadWriteMode, USBBCDRBase> ;
    using PDEN = USB_BCDR_PDEN_Values<USB::BCDR, 2, 1, ReadWriteMode, USBBCDRBase> ;
    using SDEN = USB_BCDR_SDEN_Values<USB::BCDR, 3, 1, ReadWriteMode, USBBCDRBase> ;
    using DCDET = USB_BCDR_DCDET_Values<USB::BCDR, 4, 1, ReadMode, USBBCDRBase> ;
    using PDET = USB_BCDR_PDET_Values<USB::BCDR, 5, 1, ReadMode, USBBCDRBase> ;
    using SDET = USB_BCDR_SDET_Values<USB::BCDR, 6, 1, ReadMode, USBBCDRBase> ;
    using PS2DET = USB_BCDR_PS2DET_Values<USB::BCDR, 7, 1, ReadMode, USBBCDRBase> ;
    using DPPU = USB_BCDR_DPPU_Values<USB::BCDR, 15, 1, ReadWriteMode, USBBCDRBase> ;
    using FieldValues = USB_BCDR_DPPU_Values<USB::BCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCDRPack  = Register<0x40005C58, 32, ReadWriteMode, USBBCDRBase, T...> ;

} ;

#endif //#if !defined(USBREGISTERS_HPP)
