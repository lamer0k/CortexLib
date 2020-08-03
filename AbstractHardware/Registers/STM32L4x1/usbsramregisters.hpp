/*******************************************************************************
* Filename      : usbsramregisters.hpp
*
* Details       : Universal serial bus full-speed device interface. This header
*                 file is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(USBSRAMREGISTERS_HPP)
#define USBSRAMREGISTERS_HPP

#include "usbsramfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USB_SRAM
{
  struct USB_SRAMEP0RBase {} ;

  struct EP0R : public RegisterBase<0x40006C00, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP0R_EA_Values<USB_SRAM::EP0R, 0, 4, ReadWriteMode, USB_SRAMEP0RBase> ;
    using STAT_TX = USB_SRAM_EP0R_STAT_TX_Values<USB_SRAM::EP0R, 4, 2, ReadWriteMode, USB_SRAMEP0RBase> ;
    using DTOG_TX = USB_SRAM_EP0R_DTOG_TX_Values<USB_SRAM::EP0R, 6, 1, ReadWriteMode, USB_SRAMEP0RBase> ;
    using CTR_TX = USB_SRAM_EP0R_CTR_TX_Values<USB_SRAM::EP0R, 7, 1, ReadWriteMode, USB_SRAMEP0RBase> ;
    using EP_KIND = USB_SRAM_EP0R_EP_KIND_Values<USB_SRAM::EP0R, 8, 1, ReadWriteMode, USB_SRAMEP0RBase> ;
    using EP_TYPE = USB_SRAM_EP0R_EP_TYPE_Values<USB_SRAM::EP0R, 9, 2, ReadWriteMode, USB_SRAMEP0RBase> ;
    using SETUP = USB_SRAM_EP0R_SETUP_Values<USB_SRAM::EP0R, 11, 1, ReadWriteMode, USB_SRAMEP0RBase> ;
    using STAT_RX = USB_SRAM_EP0R_STAT_RX_Values<USB_SRAM::EP0R, 12, 2, ReadWriteMode, USB_SRAMEP0RBase> ;
    using DTOG_RX = USB_SRAM_EP0R_DTOG_RX_Values<USB_SRAM::EP0R, 14, 1, ReadWriteMode, USB_SRAMEP0RBase> ;
    using CTR_RX = USB_SRAM_EP0R_CTR_RX_Values<USB_SRAM::EP0R, 15, 1, ReadWriteMode, USB_SRAMEP0RBase> ;
    using FieldValues = USB_SRAM_EP0R_CTR_RX_Values<USB_SRAM::EP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP0RPack  = Register<0x40006C00, 32, ReadWriteMode, USB_SRAMEP0RBase, T...> ;

  struct USB_SRAMEP1RBase {} ;

  struct EP1R : public RegisterBase<0x40006C04, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP1R_EA_Values<USB_SRAM::EP1R, 0, 4, ReadWriteMode, USB_SRAMEP1RBase> ;
    using STAT_TX = USB_SRAM_EP1R_STAT_TX_Values<USB_SRAM::EP1R, 4, 2, ReadWriteMode, USB_SRAMEP1RBase> ;
    using DTOG_TX = USB_SRAM_EP1R_DTOG_TX_Values<USB_SRAM::EP1R, 6, 1, ReadWriteMode, USB_SRAMEP1RBase> ;
    using CTR_TX = USB_SRAM_EP1R_CTR_TX_Values<USB_SRAM::EP1R, 7, 1, ReadWriteMode, USB_SRAMEP1RBase> ;
    using EP_KIND = USB_SRAM_EP1R_EP_KIND_Values<USB_SRAM::EP1R, 8, 1, ReadWriteMode, USB_SRAMEP1RBase> ;
    using EP_TYPE = USB_SRAM_EP1R_EP_TYPE_Values<USB_SRAM::EP1R, 9, 2, ReadWriteMode, USB_SRAMEP1RBase> ;
    using SETUP = USB_SRAM_EP1R_SETUP_Values<USB_SRAM::EP1R, 11, 1, ReadWriteMode, USB_SRAMEP1RBase> ;
    using STAT_RX = USB_SRAM_EP1R_STAT_RX_Values<USB_SRAM::EP1R, 12, 2, ReadWriteMode, USB_SRAMEP1RBase> ;
    using DTOG_RX = USB_SRAM_EP1R_DTOG_RX_Values<USB_SRAM::EP1R, 14, 1, ReadWriteMode, USB_SRAMEP1RBase> ;
    using CTR_RX = USB_SRAM_EP1R_CTR_RX_Values<USB_SRAM::EP1R, 15, 1, ReadWriteMode, USB_SRAMEP1RBase> ;
    using FieldValues = USB_SRAM_EP1R_CTR_RX_Values<USB_SRAM::EP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP1RPack  = Register<0x40006C04, 32, ReadWriteMode, USB_SRAMEP1RBase, T...> ;

  struct USB_SRAMEP2RBase {} ;

  struct EP2R : public RegisterBase<0x40006C08, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP2R_EA_Values<USB_SRAM::EP2R, 0, 4, ReadWriteMode, USB_SRAMEP2RBase> ;
    using STAT_TX = USB_SRAM_EP2R_STAT_TX_Values<USB_SRAM::EP2R, 4, 2, ReadWriteMode, USB_SRAMEP2RBase> ;
    using DTOG_TX = USB_SRAM_EP2R_DTOG_TX_Values<USB_SRAM::EP2R, 6, 1, ReadWriteMode, USB_SRAMEP2RBase> ;
    using CTR_TX = USB_SRAM_EP2R_CTR_TX_Values<USB_SRAM::EP2R, 7, 1, ReadWriteMode, USB_SRAMEP2RBase> ;
    using EP_KIND = USB_SRAM_EP2R_EP_KIND_Values<USB_SRAM::EP2R, 8, 1, ReadWriteMode, USB_SRAMEP2RBase> ;
    using EP_TYPE = USB_SRAM_EP2R_EP_TYPE_Values<USB_SRAM::EP2R, 9, 2, ReadWriteMode, USB_SRAMEP2RBase> ;
    using SETUP = USB_SRAM_EP2R_SETUP_Values<USB_SRAM::EP2R, 11, 1, ReadWriteMode, USB_SRAMEP2RBase> ;
    using STAT_RX = USB_SRAM_EP2R_STAT_RX_Values<USB_SRAM::EP2R, 12, 2, ReadWriteMode, USB_SRAMEP2RBase> ;
    using DTOG_RX = USB_SRAM_EP2R_DTOG_RX_Values<USB_SRAM::EP2R, 14, 1, ReadWriteMode, USB_SRAMEP2RBase> ;
    using CTR_RX = USB_SRAM_EP2R_CTR_RX_Values<USB_SRAM::EP2R, 15, 1, ReadWriteMode, USB_SRAMEP2RBase> ;
    using FieldValues = USB_SRAM_EP2R_CTR_RX_Values<USB_SRAM::EP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP2RPack  = Register<0x40006C08, 32, ReadWriteMode, USB_SRAMEP2RBase, T...> ;

  struct USB_SRAMEP3RBase {} ;

  struct EP3R : public RegisterBase<0x40006C0C, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP3R_EA_Values<USB_SRAM::EP3R, 0, 4, ReadWriteMode, USB_SRAMEP3RBase> ;
    using STAT_TX = USB_SRAM_EP3R_STAT_TX_Values<USB_SRAM::EP3R, 4, 2, ReadWriteMode, USB_SRAMEP3RBase> ;
    using DTOG_TX = USB_SRAM_EP3R_DTOG_TX_Values<USB_SRAM::EP3R, 6, 1, ReadWriteMode, USB_SRAMEP3RBase> ;
    using CTR_TX = USB_SRAM_EP3R_CTR_TX_Values<USB_SRAM::EP3R, 7, 1, ReadWriteMode, USB_SRAMEP3RBase> ;
    using EP_KIND = USB_SRAM_EP3R_EP_KIND_Values<USB_SRAM::EP3R, 8, 1, ReadWriteMode, USB_SRAMEP3RBase> ;
    using EP_TYPE = USB_SRAM_EP3R_EP_TYPE_Values<USB_SRAM::EP3R, 9, 2, ReadWriteMode, USB_SRAMEP3RBase> ;
    using SETUP = USB_SRAM_EP3R_SETUP_Values<USB_SRAM::EP3R, 11, 1, ReadWriteMode, USB_SRAMEP3RBase> ;
    using STAT_RX = USB_SRAM_EP3R_STAT_RX_Values<USB_SRAM::EP3R, 12, 2, ReadWriteMode, USB_SRAMEP3RBase> ;
    using DTOG_RX = USB_SRAM_EP3R_DTOG_RX_Values<USB_SRAM::EP3R, 14, 1, ReadWriteMode, USB_SRAMEP3RBase> ;
    using CTR_RX = USB_SRAM_EP3R_CTR_RX_Values<USB_SRAM::EP3R, 15, 1, ReadWriteMode, USB_SRAMEP3RBase> ;
    using FieldValues = USB_SRAM_EP3R_CTR_RX_Values<USB_SRAM::EP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP3RPack  = Register<0x40006C0C, 32, ReadWriteMode, USB_SRAMEP3RBase, T...> ;

  struct USB_SRAMEP4RBase {} ;

  struct EP4R : public RegisterBase<0x40006C10, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP4R_EA_Values<USB_SRAM::EP4R, 0, 4, ReadWriteMode, USB_SRAMEP4RBase> ;
    using STAT_TX = USB_SRAM_EP4R_STAT_TX_Values<USB_SRAM::EP4R, 4, 2, ReadWriteMode, USB_SRAMEP4RBase> ;
    using DTOG_TX = USB_SRAM_EP4R_DTOG_TX_Values<USB_SRAM::EP4R, 6, 1, ReadWriteMode, USB_SRAMEP4RBase> ;
    using CTR_TX = USB_SRAM_EP4R_CTR_TX_Values<USB_SRAM::EP4R, 7, 1, ReadWriteMode, USB_SRAMEP4RBase> ;
    using EP_KIND = USB_SRAM_EP4R_EP_KIND_Values<USB_SRAM::EP4R, 8, 1, ReadWriteMode, USB_SRAMEP4RBase> ;
    using EP_TYPE = USB_SRAM_EP4R_EP_TYPE_Values<USB_SRAM::EP4R, 9, 2, ReadWriteMode, USB_SRAMEP4RBase> ;
    using SETUP = USB_SRAM_EP4R_SETUP_Values<USB_SRAM::EP4R, 11, 1, ReadWriteMode, USB_SRAMEP4RBase> ;
    using STAT_RX = USB_SRAM_EP4R_STAT_RX_Values<USB_SRAM::EP4R, 12, 2, ReadWriteMode, USB_SRAMEP4RBase> ;
    using DTOG_RX = USB_SRAM_EP4R_DTOG_RX_Values<USB_SRAM::EP4R, 14, 1, ReadWriteMode, USB_SRAMEP4RBase> ;
    using CTR_RX = USB_SRAM_EP4R_CTR_RX_Values<USB_SRAM::EP4R, 15, 1, ReadWriteMode, USB_SRAMEP4RBase> ;
    using FieldValues = USB_SRAM_EP4R_CTR_RX_Values<USB_SRAM::EP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP4RPack  = Register<0x40006C10, 32, ReadWriteMode, USB_SRAMEP4RBase, T...> ;

  struct USB_SRAMEP5RBase {} ;

  struct EP5R : public RegisterBase<0x40006C14, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP5R_EA_Values<USB_SRAM::EP5R, 0, 4, ReadWriteMode, USB_SRAMEP5RBase> ;
    using STAT_TX = USB_SRAM_EP5R_STAT_TX_Values<USB_SRAM::EP5R, 4, 2, ReadWriteMode, USB_SRAMEP5RBase> ;
    using DTOG_TX = USB_SRAM_EP5R_DTOG_TX_Values<USB_SRAM::EP5R, 6, 1, ReadWriteMode, USB_SRAMEP5RBase> ;
    using CTR_TX = USB_SRAM_EP5R_CTR_TX_Values<USB_SRAM::EP5R, 7, 1, ReadWriteMode, USB_SRAMEP5RBase> ;
    using EP_KIND = USB_SRAM_EP5R_EP_KIND_Values<USB_SRAM::EP5R, 8, 1, ReadWriteMode, USB_SRAMEP5RBase> ;
    using EP_TYPE = USB_SRAM_EP5R_EP_TYPE_Values<USB_SRAM::EP5R, 9, 2, ReadWriteMode, USB_SRAMEP5RBase> ;
    using SETUP = USB_SRAM_EP5R_SETUP_Values<USB_SRAM::EP5R, 11, 1, ReadWriteMode, USB_SRAMEP5RBase> ;
    using STAT_RX = USB_SRAM_EP5R_STAT_RX_Values<USB_SRAM::EP5R, 12, 2, ReadWriteMode, USB_SRAMEP5RBase> ;
    using DTOG_RX = USB_SRAM_EP5R_DTOG_RX_Values<USB_SRAM::EP5R, 14, 1, ReadWriteMode, USB_SRAMEP5RBase> ;
    using CTR_RX = USB_SRAM_EP5R_CTR_RX_Values<USB_SRAM::EP5R, 15, 1, ReadWriteMode, USB_SRAMEP5RBase> ;
    using FieldValues = USB_SRAM_EP5R_CTR_RX_Values<USB_SRAM::EP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP5RPack  = Register<0x40006C14, 32, ReadWriteMode, USB_SRAMEP5RBase, T...> ;

  struct USB_SRAMEP6RBase {} ;

  struct EP6R : public RegisterBase<0x40006C18, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP6R_EA_Values<USB_SRAM::EP6R, 0, 4, ReadWriteMode, USB_SRAMEP6RBase> ;
    using STAT_TX = USB_SRAM_EP6R_STAT_TX_Values<USB_SRAM::EP6R, 4, 2, ReadWriteMode, USB_SRAMEP6RBase> ;
    using DTOG_TX = USB_SRAM_EP6R_DTOG_TX_Values<USB_SRAM::EP6R, 6, 1, ReadWriteMode, USB_SRAMEP6RBase> ;
    using CTR_TX = USB_SRAM_EP6R_CTR_TX_Values<USB_SRAM::EP6R, 7, 1, ReadWriteMode, USB_SRAMEP6RBase> ;
    using EP_KIND = USB_SRAM_EP6R_EP_KIND_Values<USB_SRAM::EP6R, 8, 1, ReadWriteMode, USB_SRAMEP6RBase> ;
    using EP_TYPE = USB_SRAM_EP6R_EP_TYPE_Values<USB_SRAM::EP6R, 9, 2, ReadWriteMode, USB_SRAMEP6RBase> ;
    using SETUP = USB_SRAM_EP6R_SETUP_Values<USB_SRAM::EP6R, 11, 1, ReadWriteMode, USB_SRAMEP6RBase> ;
    using STAT_RX = USB_SRAM_EP6R_STAT_RX_Values<USB_SRAM::EP6R, 12, 2, ReadWriteMode, USB_SRAMEP6RBase> ;
    using DTOG_RX = USB_SRAM_EP6R_DTOG_RX_Values<USB_SRAM::EP6R, 14, 1, ReadWriteMode, USB_SRAMEP6RBase> ;
    using CTR_RX = USB_SRAM_EP6R_CTR_RX_Values<USB_SRAM::EP6R, 15, 1, ReadWriteMode, USB_SRAMEP6RBase> ;
    using FieldValues = USB_SRAM_EP6R_CTR_RX_Values<USB_SRAM::EP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP6RPack  = Register<0x40006C18, 32, ReadWriteMode, USB_SRAMEP6RBase, T...> ;

  struct USB_SRAMEP7RBase {} ;

  struct EP7R : public RegisterBase<0x40006C1C, 32, ReadWriteMode>
  {
    using EA = USB_SRAM_EP7R_EA_Values<USB_SRAM::EP7R, 0, 4, ReadWriteMode, USB_SRAMEP7RBase> ;
    using STAT_TX = USB_SRAM_EP7R_STAT_TX_Values<USB_SRAM::EP7R, 4, 2, ReadWriteMode, USB_SRAMEP7RBase> ;
    using DTOG_TX = USB_SRAM_EP7R_DTOG_TX_Values<USB_SRAM::EP7R, 6, 1, ReadWriteMode, USB_SRAMEP7RBase> ;
    using CTR_TX = USB_SRAM_EP7R_CTR_TX_Values<USB_SRAM::EP7R, 7, 1, ReadWriteMode, USB_SRAMEP7RBase> ;
    using EP_KIND = USB_SRAM_EP7R_EP_KIND_Values<USB_SRAM::EP7R, 8, 1, ReadWriteMode, USB_SRAMEP7RBase> ;
    using EP_TYPE = USB_SRAM_EP7R_EP_TYPE_Values<USB_SRAM::EP7R, 9, 2, ReadWriteMode, USB_SRAMEP7RBase> ;
    using SETUP = USB_SRAM_EP7R_SETUP_Values<USB_SRAM::EP7R, 11, 1, ReadWriteMode, USB_SRAMEP7RBase> ;
    using STAT_RX = USB_SRAM_EP7R_STAT_RX_Values<USB_SRAM::EP7R, 12, 2, ReadWriteMode, USB_SRAMEP7RBase> ;
    using DTOG_RX = USB_SRAM_EP7R_DTOG_RX_Values<USB_SRAM::EP7R, 14, 1, ReadWriteMode, USB_SRAMEP7RBase> ;
    using CTR_RX = USB_SRAM_EP7R_CTR_RX_Values<USB_SRAM::EP7R, 15, 1, ReadWriteMode, USB_SRAMEP7RBase> ;
    using FieldValues = USB_SRAM_EP7R_CTR_RX_Values<USB_SRAM::EP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP7RPack  = Register<0x40006C1C, 32, ReadWriteMode, USB_SRAMEP7RBase, T...> ;

  struct USB_SRAMCNTRBase {} ;

  struct CNTR : public RegisterBase<0x40006C40, 32, ReadWriteMode>
  {
    using FRES = USB_SRAM_CNTR_FRES_Values<USB_SRAM::CNTR, 0, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using PDWN = USB_SRAM_CNTR_PDWN_Values<USB_SRAM::CNTR, 1, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using LPMODE = USB_SRAM_CNTR_LPMODE_Values<USB_SRAM::CNTR, 2, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using FSUSP = USB_SRAM_CNTR_FSUSP_Values<USB_SRAM::CNTR, 3, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using RESUME = USB_SRAM_CNTR_RESUME_Values<USB_SRAM::CNTR, 4, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using L1RESUME = USB_SRAM_CNTR_L1RESUME_Values<USB_SRAM::CNTR, 5, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using L1REQM = USB_SRAM_CNTR_L1REQM_Values<USB_SRAM::CNTR, 7, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using ESOFM = USB_SRAM_CNTR_ESOFM_Values<USB_SRAM::CNTR, 8, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using SOFM = USB_SRAM_CNTR_SOFM_Values<USB_SRAM::CNTR, 9, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using RESETM = USB_SRAM_CNTR_RESETM_Values<USB_SRAM::CNTR, 10, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using SUSPM = USB_SRAM_CNTR_SUSPM_Values<USB_SRAM::CNTR, 11, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using WKUPM = USB_SRAM_CNTR_WKUPM_Values<USB_SRAM::CNTR, 12, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using ERRM = USB_SRAM_CNTR_ERRM_Values<USB_SRAM::CNTR, 13, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using PMAOVRM = USB_SRAM_CNTR_PMAOVRM_Values<USB_SRAM::CNTR, 14, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using CTRM = USB_SRAM_CNTR_CTRM_Values<USB_SRAM::CNTR, 15, 1, ReadWriteMode, USB_SRAMCNTRBase> ;
    using FieldValues = USB_SRAM_CNTR_CTRM_Values<USB_SRAM::CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTRPack  = Register<0x40006C40, 32, ReadWriteMode, USB_SRAMCNTRBase, T...> ;

  struct USB_SRAMISTRBase {} ;

  struct ISTR : public RegisterBase<0x40006C44, 32, ReadWriteMode>
  {
    using EP_ID = USB_SRAM_ISTR_EP_ID_Values<USB_SRAM::ISTR, 0, 4, ReadMode, USB_SRAMISTRBase> ;
    using DIR = USB_SRAM_ISTR_DIR_Values<USB_SRAM::ISTR, 4, 1, ReadMode, USB_SRAMISTRBase> ;
    using L1REQ = USB_SRAM_ISTR_L1REQ_Values<USB_SRAM::ISTR, 7, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using ESOF = USB_SRAM_ISTR_ESOF_Values<USB_SRAM::ISTR, 8, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using SOF = USB_SRAM_ISTR_SOF_Values<USB_SRAM::ISTR, 9, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using RESET = USB_SRAM_ISTR_RESET_Values<USB_SRAM::ISTR, 10, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using SUSP = USB_SRAM_ISTR_SUSP_Values<USB_SRAM::ISTR, 11, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using WKUP = USB_SRAM_ISTR_WKUP_Values<USB_SRAM::ISTR, 12, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using ERR = USB_SRAM_ISTR_ERR_Values<USB_SRAM::ISTR, 13, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using PMAOVR = USB_SRAM_ISTR_PMAOVR_Values<USB_SRAM::ISTR, 14, 1, ReadWriteMode, USB_SRAMISTRBase> ;
    using CTR = USB_SRAM_ISTR_CTR_Values<USB_SRAM::ISTR, 15, 1, ReadMode, USB_SRAMISTRBase> ;
    using FieldValues = USB_SRAM_ISTR_CTR_Values<USB_SRAM::ISTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTRPack  = Register<0x40006C44, 32, ReadWriteMode, USB_SRAMISTRBase, T...> ;

  struct USB_SRAMFNRBase {} ;

  struct FNR : public RegisterBase<0x40006C48, 32, ReadMode>
  {
    using FN = USB_SRAM_FNR_FN_Values<USB_SRAM::FNR, 0, 11, ReadMode, USB_SRAMFNRBase> ;
    using LSOF = USB_SRAM_FNR_LSOF_Values<USB_SRAM::FNR, 11, 2, ReadMode, USB_SRAMFNRBase> ;
    using LCK = USB_SRAM_FNR_LCK_Values<USB_SRAM::FNR, 13, 1, ReadMode, USB_SRAMFNRBase> ;
    using RXDM = USB_SRAM_FNR_RXDM_Values<USB_SRAM::FNR, 14, 1, ReadMode, USB_SRAMFNRBase> ;
    using RXDP = USB_SRAM_FNR_RXDP_Values<USB_SRAM::FNR, 15, 1, ReadMode, USB_SRAMFNRBase> ;
    using FieldValues = USB_SRAM_FNR_RXDP_Values<USB_SRAM::FNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FNRPack  = Register<0x40006C48, 32, ReadMode, USB_SRAMFNRBase, T...> ;

  struct USB_SRAMDADDRBase {} ;

  struct DADDR : public RegisterBase<0x40006C4C, 32, ReadWriteMode>
  {
    using ADD = USB_SRAM_DADDR_ADD_Values<USB_SRAM::DADDR, 0, 7, ReadWriteMode, USB_SRAMDADDRBase> ;
    using EF = USB_SRAM_DADDR_EF_Values<USB_SRAM::DADDR, 7, 1, ReadWriteMode, USB_SRAMDADDRBase> ;
    using FieldValues = USB_SRAM_DADDR_EF_Values<USB_SRAM::DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DADDRPack  = Register<0x40006C4C, 32, ReadWriteMode, USB_SRAMDADDRBase, T...> ;

  struct USB_SRAMBTABLEBase {} ;

  struct BTABLE : public RegisterBase<0x40006C50, 32, ReadWriteMode>
  {
    using BTABLEField = USB_SRAM_BTABLE_BTABLE_Values<USB_SRAM::BTABLE, 3, 13, ReadWriteMode, USB_SRAMBTABLEBase> ;
    using FieldValues = USB_SRAM_BTABLE_BTABLE_Values<USB_SRAM::BTABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTABLEPack  = Register<0x40006C50, 32, ReadWriteMode, USB_SRAMBTABLEBase, T...> ;

  struct USB_SRAMLPMCSRBase {} ;

  struct LPMCSR : public RegisterBase<0x40006C54, 32, ReadWriteMode>
  {
    using LPMEN = USB_SRAM_LPMCSR_LPMEN_Values<USB_SRAM::LPMCSR, 0, 1, ReadWriteMode, USB_SRAMLPMCSRBase> ;
    using LPMACK = USB_SRAM_LPMCSR_LPMACK_Values<USB_SRAM::LPMCSR, 1, 1, ReadWriteMode, USB_SRAMLPMCSRBase> ;
    using REMWAKE = USB_SRAM_LPMCSR_REMWAKE_Values<USB_SRAM::LPMCSR, 3, 1, ReadMode, USB_SRAMLPMCSRBase> ;
    using BESL = USB_SRAM_LPMCSR_BESL_Values<USB_SRAM::LPMCSR, 4, 4, ReadMode, USB_SRAMLPMCSRBase> ;
    using FieldValues = USB_SRAM_LPMCSR_BESL_Values<USB_SRAM::LPMCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPMCSRPack  = Register<0x40006C54, 32, ReadWriteMode, USB_SRAMLPMCSRBase, T...> ;

  struct USB_SRAMBCDRBase {} ;

  struct BCDR : public RegisterBase<0x40006C58, 32, ReadWriteMode>
  {
    using BCDEN = USB_SRAM_BCDR_BCDEN_Values<USB_SRAM::BCDR, 0, 1, ReadWriteMode, USB_SRAMBCDRBase> ;
    using DCDEN = USB_SRAM_BCDR_DCDEN_Values<USB_SRAM::BCDR, 1, 1, ReadWriteMode, USB_SRAMBCDRBase> ;
    using PDEN = USB_SRAM_BCDR_PDEN_Values<USB_SRAM::BCDR, 2, 1, ReadWriteMode, USB_SRAMBCDRBase> ;
    using SDEN = USB_SRAM_BCDR_SDEN_Values<USB_SRAM::BCDR, 3, 1, ReadWriteMode, USB_SRAMBCDRBase> ;
    using DCDET = USB_SRAM_BCDR_DCDET_Values<USB_SRAM::BCDR, 4, 1, ReadMode, USB_SRAMBCDRBase> ;
    using PDET = USB_SRAM_BCDR_PDET_Values<USB_SRAM::BCDR, 5, 1, ReadMode, USB_SRAMBCDRBase> ;
    using SDET = USB_SRAM_BCDR_SDET_Values<USB_SRAM::BCDR, 6, 1, ReadMode, USB_SRAMBCDRBase> ;
    using PS2DET = USB_SRAM_BCDR_PS2DET_Values<USB_SRAM::BCDR, 7, 1, ReadMode, USB_SRAMBCDRBase> ;
    using DPPU = USB_SRAM_BCDR_DPPU_Values<USB_SRAM::BCDR, 15, 1, ReadWriteMode, USB_SRAMBCDRBase> ;
    using FieldValues = USB_SRAM_BCDR_DPPU_Values<USB_SRAM::BCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCDRPack  = Register<0x40006C58, 32, ReadWriteMode, USB_SRAMBCDRBase, T...> ;

} ;

#endif //#if !defined(USBSRAMREGISTERS_HPP)
