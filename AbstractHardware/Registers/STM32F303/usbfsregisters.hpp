/*******************************************************************************
* Filename      : usbfsregisters.hpp
*
* Details       : Universal serial bus full-speed device interface. This header
*                 file is auto-generated for STM32F303 device.
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
  struct USB_FSUSB_EP0RBase {} ;

  struct USB_EP0R : public RegisterBase<0x40005C00, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP0R_EA_Values<USB_FS::USB_EP0R, 0, 4, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using STAT_TX = USB_FS_USB_EP0R_STAT_TX_Values<USB_FS::USB_EP0R, 4, 2, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using DTOG_TX = USB_FS_USB_EP0R_DTOG_TX_Values<USB_FS::USB_EP0R, 6, 1, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using CTR_TX = USB_FS_USB_EP0R_CTR_TX_Values<USB_FS::USB_EP0R, 7, 1, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using EP_KIND = USB_FS_USB_EP0R_EP_KIND_Values<USB_FS::USB_EP0R, 8, 1, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using EP_TYPE = USB_FS_USB_EP0R_EP_TYPE_Values<USB_FS::USB_EP0R, 9, 2, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using SETUP = USB_FS_USB_EP0R_SETUP_Values<USB_FS::USB_EP0R, 11, 1, ReadMode, USB_FSUSB_EP0RBase> ;
    using STAT_RX = USB_FS_USB_EP0R_STAT_RX_Values<USB_FS::USB_EP0R, 12, 2, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using DTOG_RX = USB_FS_USB_EP0R_DTOG_RX_Values<USB_FS::USB_EP0R, 14, 1, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using CTR_RX = USB_FS_USB_EP0R_CTR_RX_Values<USB_FS::USB_EP0R, 15, 1, ReadWriteMode, USB_FSUSB_EP0RBase> ;
    using FieldValues = USB_FS_USB_EP0R_CTR_RX_Values<USB_FS::USB_EP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP0RPack  = Register<0x40005C00, 32, ReadWriteMode, USB_FSUSB_EP0RBase, T...> ;

  struct USB_FSUSB_EP1RBase {} ;

  struct USB_EP1R : public RegisterBase<0x40005C04, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP1R_EA_Values<USB_FS::USB_EP1R, 0, 4, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using STAT_TX = USB_FS_USB_EP1R_STAT_TX_Values<USB_FS::USB_EP1R, 4, 2, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using DTOG_TX = USB_FS_USB_EP1R_DTOG_TX_Values<USB_FS::USB_EP1R, 6, 1, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using CTR_TX = USB_FS_USB_EP1R_CTR_TX_Values<USB_FS::USB_EP1R, 7, 1, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using EP_KIND = USB_FS_USB_EP1R_EP_KIND_Values<USB_FS::USB_EP1R, 8, 1, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using EP_TYPE = USB_FS_USB_EP1R_EP_TYPE_Values<USB_FS::USB_EP1R, 9, 2, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using SETUP = USB_FS_USB_EP1R_SETUP_Values<USB_FS::USB_EP1R, 11, 1, ReadMode, USB_FSUSB_EP1RBase> ;
    using STAT_RX = USB_FS_USB_EP1R_STAT_RX_Values<USB_FS::USB_EP1R, 12, 2, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using DTOG_RX = USB_FS_USB_EP1R_DTOG_RX_Values<USB_FS::USB_EP1R, 14, 1, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using CTR_RX = USB_FS_USB_EP1R_CTR_RX_Values<USB_FS::USB_EP1R, 15, 1, ReadWriteMode, USB_FSUSB_EP1RBase> ;
    using FieldValues = USB_FS_USB_EP1R_CTR_RX_Values<USB_FS::USB_EP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP1RPack  = Register<0x40005C04, 32, ReadWriteMode, USB_FSUSB_EP1RBase, T...> ;

  struct USB_FSUSB_EP2RBase {} ;

  struct USB_EP2R : public RegisterBase<0x40005C08, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP2R_EA_Values<USB_FS::USB_EP2R, 0, 4, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using STAT_TX = USB_FS_USB_EP2R_STAT_TX_Values<USB_FS::USB_EP2R, 4, 2, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using DTOG_TX = USB_FS_USB_EP2R_DTOG_TX_Values<USB_FS::USB_EP2R, 6, 1, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using CTR_TX = USB_FS_USB_EP2R_CTR_TX_Values<USB_FS::USB_EP2R, 7, 1, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using EP_KIND = USB_FS_USB_EP2R_EP_KIND_Values<USB_FS::USB_EP2R, 8, 1, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using EP_TYPE = USB_FS_USB_EP2R_EP_TYPE_Values<USB_FS::USB_EP2R, 9, 2, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using SETUP = USB_FS_USB_EP2R_SETUP_Values<USB_FS::USB_EP2R, 11, 1, ReadMode, USB_FSUSB_EP2RBase> ;
    using STAT_RX = USB_FS_USB_EP2R_STAT_RX_Values<USB_FS::USB_EP2R, 12, 2, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using DTOG_RX = USB_FS_USB_EP2R_DTOG_RX_Values<USB_FS::USB_EP2R, 14, 1, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using CTR_RX = USB_FS_USB_EP2R_CTR_RX_Values<USB_FS::USB_EP2R, 15, 1, ReadWriteMode, USB_FSUSB_EP2RBase> ;
    using FieldValues = USB_FS_USB_EP2R_CTR_RX_Values<USB_FS::USB_EP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP2RPack  = Register<0x40005C08, 32, ReadWriteMode, USB_FSUSB_EP2RBase, T...> ;

  struct USB_FSUSB_EP3RBase {} ;

  struct USB_EP3R : public RegisterBase<0x40005C0C, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP3R_EA_Values<USB_FS::USB_EP3R, 0, 4, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using STAT_TX = USB_FS_USB_EP3R_STAT_TX_Values<USB_FS::USB_EP3R, 4, 2, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using DTOG_TX = USB_FS_USB_EP3R_DTOG_TX_Values<USB_FS::USB_EP3R, 6, 1, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using CTR_TX = USB_FS_USB_EP3R_CTR_TX_Values<USB_FS::USB_EP3R, 7, 1, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using EP_KIND = USB_FS_USB_EP3R_EP_KIND_Values<USB_FS::USB_EP3R, 8, 1, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using EP_TYPE = USB_FS_USB_EP3R_EP_TYPE_Values<USB_FS::USB_EP3R, 9, 2, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using SETUP = USB_FS_USB_EP3R_SETUP_Values<USB_FS::USB_EP3R, 11, 1, ReadMode, USB_FSUSB_EP3RBase> ;
    using STAT_RX = USB_FS_USB_EP3R_STAT_RX_Values<USB_FS::USB_EP3R, 12, 2, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using DTOG_RX = USB_FS_USB_EP3R_DTOG_RX_Values<USB_FS::USB_EP3R, 14, 1, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using CTR_RX = USB_FS_USB_EP3R_CTR_RX_Values<USB_FS::USB_EP3R, 15, 1, ReadWriteMode, USB_FSUSB_EP3RBase> ;
    using FieldValues = USB_FS_USB_EP3R_CTR_RX_Values<USB_FS::USB_EP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP3RPack  = Register<0x40005C0C, 32, ReadWriteMode, USB_FSUSB_EP3RBase, T...> ;

  struct USB_FSUSB_EP4RBase {} ;

  struct USB_EP4R : public RegisterBase<0x40005C10, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP4R_EA_Values<USB_FS::USB_EP4R, 0, 4, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using STAT_TX = USB_FS_USB_EP4R_STAT_TX_Values<USB_FS::USB_EP4R, 4, 2, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using DTOG_TX = USB_FS_USB_EP4R_DTOG_TX_Values<USB_FS::USB_EP4R, 6, 1, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using CTR_TX = USB_FS_USB_EP4R_CTR_TX_Values<USB_FS::USB_EP4R, 7, 1, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using EP_KIND = USB_FS_USB_EP4R_EP_KIND_Values<USB_FS::USB_EP4R, 8, 1, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using EP_TYPE = USB_FS_USB_EP4R_EP_TYPE_Values<USB_FS::USB_EP4R, 9, 2, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using SETUP = USB_FS_USB_EP4R_SETUP_Values<USB_FS::USB_EP4R, 11, 1, ReadMode, USB_FSUSB_EP4RBase> ;
    using STAT_RX = USB_FS_USB_EP4R_STAT_RX_Values<USB_FS::USB_EP4R, 12, 2, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using DTOG_RX = USB_FS_USB_EP4R_DTOG_RX_Values<USB_FS::USB_EP4R, 14, 1, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using CTR_RX = USB_FS_USB_EP4R_CTR_RX_Values<USB_FS::USB_EP4R, 15, 1, ReadWriteMode, USB_FSUSB_EP4RBase> ;
    using FieldValues = USB_FS_USB_EP4R_CTR_RX_Values<USB_FS::USB_EP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP4RPack  = Register<0x40005C10, 32, ReadWriteMode, USB_FSUSB_EP4RBase, T...> ;

  struct USB_FSUSB_EP5RBase {} ;

  struct USB_EP5R : public RegisterBase<0x40005C14, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP5R_EA_Values<USB_FS::USB_EP5R, 0, 4, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using STAT_TX = USB_FS_USB_EP5R_STAT_TX_Values<USB_FS::USB_EP5R, 4, 2, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using DTOG_TX = USB_FS_USB_EP5R_DTOG_TX_Values<USB_FS::USB_EP5R, 6, 1, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using CTR_TX = USB_FS_USB_EP5R_CTR_TX_Values<USB_FS::USB_EP5R, 7, 1, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using EP_KIND = USB_FS_USB_EP5R_EP_KIND_Values<USB_FS::USB_EP5R, 8, 1, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using EP_TYPE = USB_FS_USB_EP5R_EP_TYPE_Values<USB_FS::USB_EP5R, 9, 2, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using SETUP = USB_FS_USB_EP5R_SETUP_Values<USB_FS::USB_EP5R, 11, 1, ReadMode, USB_FSUSB_EP5RBase> ;
    using STAT_RX = USB_FS_USB_EP5R_STAT_RX_Values<USB_FS::USB_EP5R, 12, 2, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using DTOG_RX = USB_FS_USB_EP5R_DTOG_RX_Values<USB_FS::USB_EP5R, 14, 1, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using CTR_RX = USB_FS_USB_EP5R_CTR_RX_Values<USB_FS::USB_EP5R, 15, 1, ReadWriteMode, USB_FSUSB_EP5RBase> ;
    using FieldValues = USB_FS_USB_EP5R_CTR_RX_Values<USB_FS::USB_EP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP5RPack  = Register<0x40005C14, 32, ReadWriteMode, USB_FSUSB_EP5RBase, T...> ;

  struct USB_FSUSB_EP6RBase {} ;

  struct USB_EP6R : public RegisterBase<0x40005C18, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP6R_EA_Values<USB_FS::USB_EP6R, 0, 4, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using STAT_TX = USB_FS_USB_EP6R_STAT_TX_Values<USB_FS::USB_EP6R, 4, 2, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using DTOG_TX = USB_FS_USB_EP6R_DTOG_TX_Values<USB_FS::USB_EP6R, 6, 1, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using CTR_TX = USB_FS_USB_EP6R_CTR_TX_Values<USB_FS::USB_EP6R, 7, 1, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using EP_KIND = USB_FS_USB_EP6R_EP_KIND_Values<USB_FS::USB_EP6R, 8, 1, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using EP_TYPE = USB_FS_USB_EP6R_EP_TYPE_Values<USB_FS::USB_EP6R, 9, 2, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using SETUP = USB_FS_USB_EP6R_SETUP_Values<USB_FS::USB_EP6R, 11, 1, ReadMode, USB_FSUSB_EP6RBase> ;
    using STAT_RX = USB_FS_USB_EP6R_STAT_RX_Values<USB_FS::USB_EP6R, 12, 2, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using DTOG_RX = USB_FS_USB_EP6R_DTOG_RX_Values<USB_FS::USB_EP6R, 14, 1, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using CTR_RX = USB_FS_USB_EP6R_CTR_RX_Values<USB_FS::USB_EP6R, 15, 1, ReadWriteMode, USB_FSUSB_EP6RBase> ;
    using FieldValues = USB_FS_USB_EP6R_CTR_RX_Values<USB_FS::USB_EP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP6RPack  = Register<0x40005C18, 32, ReadWriteMode, USB_FSUSB_EP6RBase, T...> ;

  struct USB_FSUSB_EP7RBase {} ;

  struct USB_EP7R : public RegisterBase<0x40005C1C, 32, ReadWriteMode>
  {
    using EA = USB_FS_USB_EP7R_EA_Values<USB_FS::USB_EP7R, 0, 4, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using STAT_TX = USB_FS_USB_EP7R_STAT_TX_Values<USB_FS::USB_EP7R, 4, 2, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using DTOG_TX = USB_FS_USB_EP7R_DTOG_TX_Values<USB_FS::USB_EP7R, 6, 1, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using CTR_TX = USB_FS_USB_EP7R_CTR_TX_Values<USB_FS::USB_EP7R, 7, 1, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using EP_KIND = USB_FS_USB_EP7R_EP_KIND_Values<USB_FS::USB_EP7R, 8, 1, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using EP_TYPE = USB_FS_USB_EP7R_EP_TYPE_Values<USB_FS::USB_EP7R, 9, 2, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using SETUP = USB_FS_USB_EP7R_SETUP_Values<USB_FS::USB_EP7R, 11, 1, ReadMode, USB_FSUSB_EP7RBase> ;
    using STAT_RX = USB_FS_USB_EP7R_STAT_RX_Values<USB_FS::USB_EP7R, 12, 2, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using DTOG_RX = USB_FS_USB_EP7R_DTOG_RX_Values<USB_FS::USB_EP7R, 14, 1, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using CTR_RX = USB_FS_USB_EP7R_CTR_RX_Values<USB_FS::USB_EP7R, 15, 1, ReadWriteMode, USB_FSUSB_EP7RBase> ;
    using FieldValues = USB_FS_USB_EP7R_CTR_RX_Values<USB_FS::USB_EP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP7RPack  = Register<0x40005C1C, 32, ReadWriteMode, USB_FSUSB_EP7RBase, T...> ;

  struct USB_FSUSB_CNTRBase {} ;

  struct USB_CNTR : public RegisterBase<0x40005C40, 32, ReadWriteMode>
  {
    using FRES = USB_FS_USB_CNTR_FRES_Values<USB_FS::USB_CNTR, 0, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using PDWN = USB_FS_USB_CNTR_PDWN_Values<USB_FS::USB_CNTR, 1, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using LPMODE = USB_FS_USB_CNTR_LPMODE_Values<USB_FS::USB_CNTR, 2, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using FSUSP = USB_FS_USB_CNTR_FSUSP_Values<USB_FS::USB_CNTR, 3, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using RESUME = USB_FS_USB_CNTR_RESUME_Values<USB_FS::USB_CNTR, 4, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using ESOFM = USB_FS_USB_CNTR_ESOFM_Values<USB_FS::USB_CNTR, 8, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using SOFM = USB_FS_USB_CNTR_SOFM_Values<USB_FS::USB_CNTR, 9, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using RESETM = USB_FS_USB_CNTR_RESETM_Values<USB_FS::USB_CNTR, 10, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using SUSPM = USB_FS_USB_CNTR_SUSPM_Values<USB_FS::USB_CNTR, 11, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using WKUPM = USB_FS_USB_CNTR_WKUPM_Values<USB_FS::USB_CNTR, 12, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using ERRM = USB_FS_USB_CNTR_ERRM_Values<USB_FS::USB_CNTR, 13, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using PMAOVRM = USB_FS_USB_CNTR_PMAOVRM_Values<USB_FS::USB_CNTR, 14, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using CTRM = USB_FS_USB_CNTR_CTRM_Values<USB_FS::USB_CNTR, 15, 1, ReadWriteMode, USB_FSUSB_CNTRBase> ;
    using FieldValues = USB_FS_USB_CNTR_CTRM_Values<USB_FS::USB_CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_CNTRPack  = Register<0x40005C40, 32, ReadWriteMode, USB_FSUSB_CNTRBase, T...> ;

  struct USB_FSISTRBase {} ;

  struct ISTR : public RegisterBase<0x40005C44, 32, ReadWriteMode>
  {
    using EP_ID = USB_FS_ISTR_EP_ID_Values<USB_FS::ISTR, 0, 4, ReadMode, USB_FSISTRBase> ;
    using DIR = USB_FS_ISTR_DIR_Values<USB_FS::ISTR, 4, 1, ReadMode, USB_FSISTRBase> ;
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
  using ISTRPack  = Register<0x40005C44, 32, ReadWriteMode, USB_FSISTRBase, T...> ;

  struct USB_FSFNRBase {} ;

  struct FNR : public RegisterBase<0x40005C48, 32, ReadMode>
  {
    using FN = USB_FS_FNR_FN_Values<USB_FS::FNR, 0, 11, ReadMode, USB_FSFNRBase> ;
    using LSOF = USB_FS_FNR_LSOF_Values<USB_FS::FNR, 11, 2, ReadMode, USB_FSFNRBase> ;
    using LCK = USB_FS_FNR_LCK_Values<USB_FS::FNR, 13, 1, ReadMode, USB_FSFNRBase> ;
    using RXDM = USB_FS_FNR_RXDM_Values<USB_FS::FNR, 14, 1, ReadMode, USB_FSFNRBase> ;
    using RXDP = USB_FS_FNR_RXDP_Values<USB_FS::FNR, 15, 1, ReadMode, USB_FSFNRBase> ;
    using FieldValues = USB_FS_FNR_RXDP_Values<USB_FS::FNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FNRPack  = Register<0x40005C48, 32, ReadMode, USB_FSFNRBase, T...> ;

  struct USB_FSDADDRBase {} ;

  struct DADDR : public RegisterBase<0x40005C4C, 32, ReadWriteMode>
  {
    using ADD = USB_FS_DADDR_ADD_Values<USB_FS::DADDR, 0, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using ADD1 = USB_FS_DADDR_ADD1_Values<USB_FS::DADDR, 1, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using ADD2 = USB_FS_DADDR_ADD2_Values<USB_FS::DADDR, 2, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using ADD3 = USB_FS_DADDR_ADD3_Values<USB_FS::DADDR, 3, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using ADD4 = USB_FS_DADDR_ADD4_Values<USB_FS::DADDR, 4, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using ADD5 = USB_FS_DADDR_ADD5_Values<USB_FS::DADDR, 5, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using ADD6 = USB_FS_DADDR_ADD6_Values<USB_FS::DADDR, 6, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using EF = USB_FS_DADDR_EF_Values<USB_FS::DADDR, 7, 1, ReadWriteMode, USB_FSDADDRBase> ;
    using FieldValues = USB_FS_DADDR_EF_Values<USB_FS::DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DADDRPack  = Register<0x40005C4C, 32, ReadWriteMode, USB_FSDADDRBase, T...> ;

  struct USB_FSBTABLEBase {} ;

  struct BTABLE : public RegisterBase<0x40005C50, 32, ReadWriteMode>
  {
    using BTABLEField = USB_FS_BTABLE_BTABLE_Values<USB_FS::BTABLE, 3, 13, ReadWriteMode, USB_FSBTABLEBase> ;
    using FieldValues = USB_FS_BTABLE_BTABLE_Values<USB_FS::BTABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTABLEPack  = Register<0x40005C50, 32, ReadWriteMode, USB_FSBTABLEBase, T...> ;

} ;

#endif //#if !defined(USBFSREGISTERS_HPP)
