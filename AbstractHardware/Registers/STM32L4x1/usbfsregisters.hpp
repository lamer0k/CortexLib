/*******************************************************************************
* Filename      : usbfsregisters.hpp
*
* Details       : Universal serial bus full-speed device interface. This header
*                 file is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(USBFSREGISTERS_HPP)
#define USBFSREGISTERS_HPP

#include "usbfsfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USB_FS
{
  struct USB_FSEP0RBase {} ;

  struct EP0R : public RegisterBase<0x40006800, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP0R_EA_Values<USB_FS::EP0R, 0, 4, ReadWriteMode, USB_FSEP0RBase> ;
    using STAT_TX = USB_FS_EP0R_STAT_TX_Values<USB_FS::EP0R, 4, 2, ReadWriteMode, USB_FSEP0RBase> ;
    using DTOG_TX = USB_FS_EP0R_DTOG_TX_Values<USB_FS::EP0R, 6, 1, ReadWriteMode, USB_FSEP0RBase> ;
    using CTR_TX = USB_FS_EP0R_CTR_TX_Values<USB_FS::EP0R, 7, 1, ReadWriteMode, USB_FSEP0RBase> ;
    using EP_KIND = USB_FS_EP0R_EP_KIND_Values<USB_FS::EP0R, 8, 1, ReadWriteMode, USB_FSEP0RBase> ;
    using EP_TYPE = USB_FS_EP0R_EP_TYPE_Values<USB_FS::EP0R, 9, 2, ReadWriteMode, USB_FSEP0RBase> ;
    using SETUP = USB_FS_EP0R_SETUP_Values<USB_FS::EP0R, 11, 1, ReadWriteMode, USB_FSEP0RBase> ;
    using STAT_RX = USB_FS_EP0R_STAT_RX_Values<USB_FS::EP0R, 12, 2, ReadWriteMode, USB_FSEP0RBase> ;
    using DTOG_RX = USB_FS_EP0R_DTOG_RX_Values<USB_FS::EP0R, 14, 1, ReadWriteMode, USB_FSEP0RBase> ;
    using CTR_RX = USB_FS_EP0R_CTR_RX_Values<USB_FS::EP0R, 15, 1, ReadWriteMode, USB_FSEP0RBase> ;
    using FieldValues = USB_FS_EP0R_CTR_RX_Values<USB_FS::EP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP0RPack  = Register<0x40006800, 32, ReadWriteMode, USB_FSEP0RBase, T...> ;

  struct USB_FSEP1RBase {} ;

  struct EP1R : public RegisterBase<0x40006804, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP1R_EA_Values<USB_FS::EP1R, 0, 4, ReadWriteMode, USB_FSEP1RBase> ;
    using STAT_TX = USB_FS_EP1R_STAT_TX_Values<USB_FS::EP1R, 4, 2, ReadWriteMode, USB_FSEP1RBase> ;
    using DTOG_TX = USB_FS_EP1R_DTOG_TX_Values<USB_FS::EP1R, 6, 1, ReadWriteMode, USB_FSEP1RBase> ;
    using CTR_TX = USB_FS_EP1R_CTR_TX_Values<USB_FS::EP1R, 7, 1, ReadWriteMode, USB_FSEP1RBase> ;
    using EP_KIND = USB_FS_EP1R_EP_KIND_Values<USB_FS::EP1R, 8, 1, ReadWriteMode, USB_FSEP1RBase> ;
    using EP_TYPE = USB_FS_EP1R_EP_TYPE_Values<USB_FS::EP1R, 9, 2, ReadWriteMode, USB_FSEP1RBase> ;
    using SETUP = USB_FS_EP1R_SETUP_Values<USB_FS::EP1R, 11, 1, ReadWriteMode, USB_FSEP1RBase> ;
    using STAT_RX = USB_FS_EP1R_STAT_RX_Values<USB_FS::EP1R, 12, 2, ReadWriteMode, USB_FSEP1RBase> ;
    using DTOG_RX = USB_FS_EP1R_DTOG_RX_Values<USB_FS::EP1R, 14, 1, ReadWriteMode, USB_FSEP1RBase> ;
    using CTR_RX = USB_FS_EP1R_CTR_RX_Values<USB_FS::EP1R, 15, 1, ReadWriteMode, USB_FSEP1RBase> ;
    using FieldValues = USB_FS_EP1R_CTR_RX_Values<USB_FS::EP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP1RPack  = Register<0x40006804, 32, ReadWriteMode, USB_FSEP1RBase, T...> ;

  struct USB_FSEP2RBase {} ;

  struct EP2R : public RegisterBase<0x40006808, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP2R_EA_Values<USB_FS::EP2R, 0, 4, ReadWriteMode, USB_FSEP2RBase> ;
    using STAT_TX = USB_FS_EP2R_STAT_TX_Values<USB_FS::EP2R, 4, 2, ReadWriteMode, USB_FSEP2RBase> ;
    using DTOG_TX = USB_FS_EP2R_DTOG_TX_Values<USB_FS::EP2R, 6, 1, ReadWriteMode, USB_FSEP2RBase> ;
    using CTR_TX = USB_FS_EP2R_CTR_TX_Values<USB_FS::EP2R, 7, 1, ReadWriteMode, USB_FSEP2RBase> ;
    using EP_KIND = USB_FS_EP2R_EP_KIND_Values<USB_FS::EP2R, 8, 1, ReadWriteMode, USB_FSEP2RBase> ;
    using EP_TYPE = USB_FS_EP2R_EP_TYPE_Values<USB_FS::EP2R, 9, 2, ReadWriteMode, USB_FSEP2RBase> ;
    using SETUP = USB_FS_EP2R_SETUP_Values<USB_FS::EP2R, 11, 1, ReadWriteMode, USB_FSEP2RBase> ;
    using STAT_RX = USB_FS_EP2R_STAT_RX_Values<USB_FS::EP2R, 12, 2, ReadWriteMode, USB_FSEP2RBase> ;
    using DTOG_RX = USB_FS_EP2R_DTOG_RX_Values<USB_FS::EP2R, 14, 1, ReadWriteMode, USB_FSEP2RBase> ;
    using CTR_RX = USB_FS_EP2R_CTR_RX_Values<USB_FS::EP2R, 15, 1, ReadWriteMode, USB_FSEP2RBase> ;
    using FieldValues = USB_FS_EP2R_CTR_RX_Values<USB_FS::EP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP2RPack  = Register<0x40006808, 32, ReadWriteMode, USB_FSEP2RBase, T...> ;

  struct USB_FSEP3RBase {} ;

  struct EP3R : public RegisterBase<0x4000680C, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP3R_EA_Values<USB_FS::EP3R, 0, 4, ReadWriteMode, USB_FSEP3RBase> ;
    using STAT_TX = USB_FS_EP3R_STAT_TX_Values<USB_FS::EP3R, 4, 2, ReadWriteMode, USB_FSEP3RBase> ;
    using DTOG_TX = USB_FS_EP3R_DTOG_TX_Values<USB_FS::EP3R, 6, 1, ReadWriteMode, USB_FSEP3RBase> ;
    using CTR_TX = USB_FS_EP3R_CTR_TX_Values<USB_FS::EP3R, 7, 1, ReadWriteMode, USB_FSEP3RBase> ;
    using EP_KIND = USB_FS_EP3R_EP_KIND_Values<USB_FS::EP3R, 8, 1, ReadWriteMode, USB_FSEP3RBase> ;
    using EP_TYPE = USB_FS_EP3R_EP_TYPE_Values<USB_FS::EP3R, 9, 2, ReadWriteMode, USB_FSEP3RBase> ;
    using SETUP = USB_FS_EP3R_SETUP_Values<USB_FS::EP3R, 11, 1, ReadWriteMode, USB_FSEP3RBase> ;
    using STAT_RX = USB_FS_EP3R_STAT_RX_Values<USB_FS::EP3R, 12, 2, ReadWriteMode, USB_FSEP3RBase> ;
    using DTOG_RX = USB_FS_EP3R_DTOG_RX_Values<USB_FS::EP3R, 14, 1, ReadWriteMode, USB_FSEP3RBase> ;
    using CTR_RX = USB_FS_EP3R_CTR_RX_Values<USB_FS::EP3R, 15, 1, ReadWriteMode, USB_FSEP3RBase> ;
    using FieldValues = USB_FS_EP3R_CTR_RX_Values<USB_FS::EP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP3RPack  = Register<0x4000680C, 32, ReadWriteMode, USB_FSEP3RBase, T...> ;

  struct USB_FSEP4RBase {} ;

  struct EP4R : public RegisterBase<0x40006810, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP4R_EA_Values<USB_FS::EP4R, 0, 4, ReadWriteMode, USB_FSEP4RBase> ;
    using STAT_TX = USB_FS_EP4R_STAT_TX_Values<USB_FS::EP4R, 4, 2, ReadWriteMode, USB_FSEP4RBase> ;
    using DTOG_TX = USB_FS_EP4R_DTOG_TX_Values<USB_FS::EP4R, 6, 1, ReadWriteMode, USB_FSEP4RBase> ;
    using CTR_TX = USB_FS_EP4R_CTR_TX_Values<USB_FS::EP4R, 7, 1, ReadWriteMode, USB_FSEP4RBase> ;
    using EP_KIND = USB_FS_EP4R_EP_KIND_Values<USB_FS::EP4R, 8, 1, ReadWriteMode, USB_FSEP4RBase> ;
    using EP_TYPE = USB_FS_EP4R_EP_TYPE_Values<USB_FS::EP4R, 9, 2, ReadWriteMode, USB_FSEP4RBase> ;
    using SETUP = USB_FS_EP4R_SETUP_Values<USB_FS::EP4R, 11, 1, ReadWriteMode, USB_FSEP4RBase> ;
    using STAT_RX = USB_FS_EP4R_STAT_RX_Values<USB_FS::EP4R, 12, 2, ReadWriteMode, USB_FSEP4RBase> ;
    using DTOG_RX = USB_FS_EP4R_DTOG_RX_Values<USB_FS::EP4R, 14, 1, ReadWriteMode, USB_FSEP4RBase> ;
    using CTR_RX = USB_FS_EP4R_CTR_RX_Values<USB_FS::EP4R, 15, 1, ReadWriteMode, USB_FSEP4RBase> ;
    using FieldValues = USB_FS_EP4R_CTR_RX_Values<USB_FS::EP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP4RPack  = Register<0x40006810, 32, ReadWriteMode, USB_FSEP4RBase, T...> ;

  struct USB_FSEP5RBase {} ;

  struct EP5R : public RegisterBase<0x40006814, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP5R_EA_Values<USB_FS::EP5R, 0, 4, ReadWriteMode, USB_FSEP5RBase> ;
    using STAT_TX = USB_FS_EP5R_STAT_TX_Values<USB_FS::EP5R, 4, 2, ReadWriteMode, USB_FSEP5RBase> ;
    using DTOG_TX = USB_FS_EP5R_DTOG_TX_Values<USB_FS::EP5R, 6, 1, ReadWriteMode, USB_FSEP5RBase> ;
    using CTR_TX = USB_FS_EP5R_CTR_TX_Values<USB_FS::EP5R, 7, 1, ReadWriteMode, USB_FSEP5RBase> ;
    using EP_KIND = USB_FS_EP5R_EP_KIND_Values<USB_FS::EP5R, 8, 1, ReadWriteMode, USB_FSEP5RBase> ;
    using EP_TYPE = USB_FS_EP5R_EP_TYPE_Values<USB_FS::EP5R, 9, 2, ReadWriteMode, USB_FSEP5RBase> ;
    using SETUP = USB_FS_EP5R_SETUP_Values<USB_FS::EP5R, 11, 1, ReadWriteMode, USB_FSEP5RBase> ;
    using STAT_RX = USB_FS_EP5R_STAT_RX_Values<USB_FS::EP5R, 12, 2, ReadWriteMode, USB_FSEP5RBase> ;
    using DTOG_RX = USB_FS_EP5R_DTOG_RX_Values<USB_FS::EP5R, 14, 1, ReadWriteMode, USB_FSEP5RBase> ;
    using CTR_RX = USB_FS_EP5R_CTR_RX_Values<USB_FS::EP5R, 15, 1, ReadWriteMode, USB_FSEP5RBase> ;
    using FieldValues = USB_FS_EP5R_CTR_RX_Values<USB_FS::EP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP5RPack  = Register<0x40006814, 32, ReadWriteMode, USB_FSEP5RBase, T...> ;

  struct USB_FSEP6RBase {} ;

  struct EP6R : public RegisterBase<0x40006818, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP6R_EA_Values<USB_FS::EP6R, 0, 4, ReadWriteMode, USB_FSEP6RBase> ;
    using STAT_TX = USB_FS_EP6R_STAT_TX_Values<USB_FS::EP6R, 4, 2, ReadWriteMode, USB_FSEP6RBase> ;
    using DTOG_TX = USB_FS_EP6R_DTOG_TX_Values<USB_FS::EP6R, 6, 1, ReadWriteMode, USB_FSEP6RBase> ;
    using CTR_TX = USB_FS_EP6R_CTR_TX_Values<USB_FS::EP6R, 7, 1, ReadWriteMode, USB_FSEP6RBase> ;
    using EP_KIND = USB_FS_EP6R_EP_KIND_Values<USB_FS::EP6R, 8, 1, ReadWriteMode, USB_FSEP6RBase> ;
    using EP_TYPE = USB_FS_EP6R_EP_TYPE_Values<USB_FS::EP6R, 9, 2, ReadWriteMode, USB_FSEP6RBase> ;
    using SETUP = USB_FS_EP6R_SETUP_Values<USB_FS::EP6R, 11, 1, ReadWriteMode, USB_FSEP6RBase> ;
    using STAT_RX = USB_FS_EP6R_STAT_RX_Values<USB_FS::EP6R, 12, 2, ReadWriteMode, USB_FSEP6RBase> ;
    using DTOG_RX = USB_FS_EP6R_DTOG_RX_Values<USB_FS::EP6R, 14, 1, ReadWriteMode, USB_FSEP6RBase> ;
    using CTR_RX = USB_FS_EP6R_CTR_RX_Values<USB_FS::EP6R, 15, 1, ReadWriteMode, USB_FSEP6RBase> ;
    using FieldValues = USB_FS_EP6R_CTR_RX_Values<USB_FS::EP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP6RPack  = Register<0x40006818, 32, ReadWriteMode, USB_FSEP6RBase, T...> ;

  struct USB_FSEP7RBase {} ;

  struct EP7R : public RegisterBase<0x4000681C, 32, ReadWriteMode>
  {
    using EA = USB_FS_EP7R_EA_Values<USB_FS::EP7R, 0, 4, ReadWriteMode, USB_FSEP7RBase> ;
    using STAT_TX = USB_FS_EP7R_STAT_TX_Values<USB_FS::EP7R, 4, 2, ReadWriteMode, USB_FSEP7RBase> ;
    using DTOG_TX = USB_FS_EP7R_DTOG_TX_Values<USB_FS::EP7R, 6, 1, ReadWriteMode, USB_FSEP7RBase> ;
    using CTR_TX = USB_FS_EP7R_CTR_TX_Values<USB_FS::EP7R, 7, 1, ReadWriteMode, USB_FSEP7RBase> ;
    using EP_KIND = USB_FS_EP7R_EP_KIND_Values<USB_FS::EP7R, 8, 1, ReadWriteMode, USB_FSEP7RBase> ;
    using EP_TYPE = USB_FS_EP7R_EP_TYPE_Values<USB_FS::EP7R, 9, 2, ReadWriteMode, USB_FSEP7RBase> ;
    using SETUP = USB_FS_EP7R_SETUP_Values<USB_FS::EP7R, 11, 1, ReadWriteMode, USB_FSEP7RBase> ;
    using STAT_RX = USB_FS_EP7R_STAT_RX_Values<USB_FS::EP7R, 12, 2, ReadWriteMode, USB_FSEP7RBase> ;
    using DTOG_RX = USB_FS_EP7R_DTOG_RX_Values<USB_FS::EP7R, 14, 1, ReadWriteMode, USB_FSEP7RBase> ;
    using CTR_RX = USB_FS_EP7R_CTR_RX_Values<USB_FS::EP7R, 15, 1, ReadWriteMode, USB_FSEP7RBase> ;
    using FieldValues = USB_FS_EP7R_CTR_RX_Values<USB_FS::EP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP7RPack  = Register<0x4000681C, 32, ReadWriteMode, USB_FSEP7RBase, T...> ;

  struct USB_FSCNTRBase {} ;

  struct CNTR : public RegisterBase<0x40006840, 32, ReadWriteMode>
  {
    using FRES = USB_FS_CNTR_FRES_Values<USB_FS::CNTR, 0, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using PDWN = USB_FS_CNTR_PDWN_Values<USB_FS::CNTR, 1, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using LPMODE = USB_FS_CNTR_LPMODE_Values<USB_FS::CNTR, 2, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using FSUSP = USB_FS_CNTR_FSUSP_Values<USB_FS::CNTR, 3, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using RESUME = USB_FS_CNTR_RESUME_Values<USB_FS::CNTR, 4, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using L1RESUME = USB_FS_CNTR_L1RESUME_Values<USB_FS::CNTR, 5, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using L1REQM = USB_FS_CNTR_L1REQM_Values<USB_FS::CNTR, 7, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using ESOFM = USB_FS_CNTR_ESOFM_Values<USB_FS::CNTR, 8, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using SOFM = USB_FS_CNTR_SOFM_Values<USB_FS::CNTR, 9, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using RESETM = USB_FS_CNTR_RESETM_Values<USB_FS::CNTR, 10, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using SUSPM = USB_FS_CNTR_SUSPM_Values<USB_FS::CNTR, 11, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using WKUPM = USB_FS_CNTR_WKUPM_Values<USB_FS::CNTR, 12, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using ERRM = USB_FS_CNTR_ERRM_Values<USB_FS::CNTR, 13, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using PMAOVRM = USB_FS_CNTR_PMAOVRM_Values<USB_FS::CNTR, 14, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using CTRM = USB_FS_CNTR_CTRM_Values<USB_FS::CNTR, 15, 1, ReadWriteMode, USB_FSCNTRBase> ;
    using FieldValues = USB_FS_CNTR_CTRM_Values<USB_FS::CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTRPack  = Register<0x40006840, 32, ReadWriteMode, USB_FSCNTRBase, T...> ;

  struct USB_FSISTRBase {} ;

  struct ISTR : public RegisterBase<0x40006844, 32, ReadWriteMode>
  {
    using EP_ID = USB_FS_ISTR_EP_ID_Values<USB_FS::ISTR, 0, 4, ReadMode, USB_FSISTRBase> ;
    using DIR = USB_FS_ISTR_DIR_Values<USB_FS::ISTR, 4, 1, ReadMode, USB_FSISTRBase> ;
    using L1REQ = USB_FS_ISTR_L1REQ_Values<USB_FS::ISTR, 7, 1, ReadWriteMode, USB_FSISTRBase> ;
    using ESOF = USB_FS_ISTR_ESOF_Values<USB_FS::ISTR, 8, 1, ReadWriteMode, USB_FSISTRBase> ;
    using SOF = USB_FS_ISTR_SOF_Values<USB_FS::ISTR, 9, 1, ReadWriteMode, USB_FSISTRBase> ;
    using RESET = USB_FS_ISTR_RESET_Values<USB_FS::ISTR, 10, 1, ReadWriteMode, USB_FSISTRBase> ;
    using SUSP = USB_FS_ISTR_SUSP_Values<USB_FS::ISTR, 11, 1, ReadWriteMode, USB_FSISTRBase> ;
    using WKUP = USB_FS_ISTR_WKUP_Values<USB_FS::ISTR, 12, 1, ReadWriteMode, USB_FSISTRBase> ;
    using ERR = USB_FS_ISTR_ERR_Values<USB_FS::ISTR, 13, 1, ReadWriteMode, USB_FSISTRBase> ;
    using PMAOVR = USB_FS_ISTR_PMAOVR_Values<USB_FS::ISTR, 14, 1, ReadWriteMode, USB_FSISTRBase> ;
    using CTR = USB_FS_ISTR_CTR_Values<USB_FS::ISTR, 15, 1, ReadMode, USB_FSISTRBase> ;
    using FieldValues = USB_FS_ISTR_CTR_Values<USB_FS::ISTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTRPack  = Register<0x40006844, 32, ReadWriteMode, USB_FSISTRBase, T...> ;

  struct USB_FSFNRBase {} ;

  struct FNR : public RegisterBase<0x40006848, 32, ReadMode>
  {
    using FN = USB_FS_FNR_FN_Values<USB_FS::FNR, 0, 11, ReadMode, USB_FSFNRBase> ;
    using LSOF = USB_FS_FNR_LSOF_Values<USB_FS::FNR, 11, 2, ReadMode, USB_FSFNRBase> ;
    using LCK = USB_FS_FNR_LCK_Values<USB_FS::FNR, 13, 1, ReadMode, USB_FSFNRBase> ;
    using RXDM = USB_FS_FNR_RXDM_Values<USB_FS::FNR, 14, 1, ReadMode, USB_FSFNRBase> ;
    using RXDP = USB_FS_FNR_RXDP_Values<USB_FS::FNR, 15, 1, ReadMode, USB_FSFNRBase> ;
    using FieldValues = USB_FS_FNR_RXDP_Values<USB_FS::FNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FNRPack  = Register<0x40006848, 32, ReadMode, USB_FSFNRBase, T...> ;

  struct USB_FSDADDRBase {} ;

  struct DADDR : public RegisterBase<0x4000684C, 32, ReadWriteMode>
  {
    using ADD = USB_FS_DADDR_ADD_Values<USB_FS::DADDR, 0, 7, ReadWriteMode, USB_FSDADDRBase> ;
    using EF = USB_FS_DADDR_EF_Values<USB_FS::DADDR, 7, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using FieldValues = USB_FS_DADDR_EF_Values<USB_FS::DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DADDRPack  = Register<0x4000684C, 32, ReadWriteMode, USB_FSDADDRBase, T...> ;

  struct USB_FSBTABLEBase {} ;

  struct BTABLE : public RegisterBase<0x40006850, 32, ReadWriteMode>
  {
    using BTABLEField = USB_FS_BTABLE_BTABLE_Values<USB_FS::BTABLE, 3, 13, ReadWriteMode, USB_FSBTABLEBase> ;
    using FieldValues = USB_FS_BTABLE_BTABLE_Values<USB_FS::BTABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTABLEPack  = Register<0x40006850, 32, ReadWriteMode, USB_FSBTABLEBase, T...> ;

  struct USB_FSLPMCSRBase {} ;

  struct LPMCSR : public RegisterBase<0x40006854, 32, ReadWriteMode>
  {
    using LPMEN = USB_FS_LPMCSR_LPMEN_Values<USB_FS::LPMCSR, 0, 1, ReadWriteMode, USB_FSLPMCSRBase> ;
    using LPMACK = USB_FS_LPMCSR_LPMACK_Values<USB_FS::LPMCSR, 1, 1, ReadWriteMode, USB_FSLPMCSRBase> ;
    using REMWAKE = USB_FS_LPMCSR_REMWAKE_Values<USB_FS::LPMCSR, 3, 1, ReadMode, USB_FSLPMCSRBase> ;
    using BESL = USB_FS_LPMCSR_BESL_Values<USB_FS::LPMCSR, 4, 4, ReadMode, USB_FSLPMCSRBase> ;
    using FieldValues = USB_FS_LPMCSR_BESL_Values<USB_FS::LPMCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPMCSRPack  = Register<0x40006854, 32, ReadWriteMode, USB_FSLPMCSRBase, T...> ;

  struct USB_FSBCDRBase {} ;

  struct BCDR : public RegisterBase<0x40006858, 32, ReadWriteMode>
  {
    using BCDEN = USB_FS_BCDR_BCDEN_Values<USB_FS::BCDR, 0, 1, ReadWriteMode, USB_FSBCDRBase> ;
    using DCDEN = USB_FS_BCDR_DCDEN_Values<USB_FS::BCDR, 1, 1, ReadWriteMode, USB_FSBCDRBase> ;
    using PDEN = USB_FS_BCDR_PDEN_Values<USB_FS::BCDR, 2, 1, ReadWriteMode, USB_FSBCDRBase> ;
    using SDEN = USB_FS_BCDR_SDEN_Values<USB_FS::BCDR, 3, 1, ReadWriteMode, USB_FSBCDRBase> ;
    using DCDET = USB_FS_BCDR_DCDET_Values<USB_FS::BCDR, 4, 1, ReadMode, USB_FSBCDRBase> ;
    using PDET = USB_FS_BCDR_PDET_Values<USB_FS::BCDR, 5, 1, ReadMode, USB_FSBCDRBase> ;
    using SDET = USB_FS_BCDR_SDET_Values<USB_FS::BCDR, 6, 1, ReadMode, USB_FSBCDRBase> ;
    using PS2DET = USB_FS_BCDR_PS2DET_Values<USB_FS::BCDR, 7, 1, ReadMode, USB_FSBCDRBase> ;
    using DPPU = USB_FS_BCDR_DPPU_Values<USB_FS::BCDR, 15, 1, ReadWriteMode, USB_FSBCDRBase> ;
    using FieldValues = USB_FS_BCDR_DPPU_Values<USB_FS::BCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCDRPack  = Register<0x40006858, 32, ReadWriteMode, USB_FSBCDRBase, T...> ;

} ;

#endif //#if !defined(USBFSREGISTERS_HPP)
