/*******************************************************************************
* Filename      : usbregisters.hpp
*
* Details       : Universal serial bus full-speed device interface. This header
*                 file is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "usbfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USB
{
  struct USBUSB_EP0Base {} ;

  struct USB_EP0 : public RegisterBase<0x40005C00, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP0_EPADDR_Values<USB::USB_EP0, 0, 4, ReadWriteMode, USBUSB_EP0Base> ;
    using STS_TX = USB_USB_EP0_STS_TX_Values<USB::USB_EP0, 4, 2, ReadWriteMode, USBUSB_EP0Base> ;
    using DATTOG_TX = USB_USB_EP0_DATTOG_TX_Values<USB::USB_EP0, 6, 1, ReadWriteMode, USBUSB_EP0Base> ;
    using CTRS_TX = USB_USB_EP0_CTRS_TX_Values<USB::USB_EP0, 7, 1, ReadWriteMode, USBUSB_EP0Base> ;
    using EP_KIND = USB_USB_EP0_EP_KIND_Values<USB::USB_EP0, 8, 1, ReadWriteMode, USBUSB_EP0Base> ;
    using EP_TYPE = USB_USB_EP0_EP_TYPE_Values<USB::USB_EP0, 9, 2, ReadWriteMode, USBUSB_EP0Base> ;
    using SETUP = USB_USB_EP0_SETUP_Values<USB::USB_EP0, 11, 1, ReadWriteMode, USBUSB_EP0Base> ;
    using STS_RX = USB_USB_EP0_STS_RX_Values<USB::USB_EP0, 12, 2, ReadWriteMode, USBUSB_EP0Base> ;
    using DATTOG_RX = USB_USB_EP0_DATTOG_RX_Values<USB::USB_EP0, 14, 1, ReadWriteMode, USBUSB_EP0Base> ;
    using CTRS_RX = USB_USB_EP0_CTRS_RX_Values<USB::USB_EP0, 15, 1, ReadWriteMode, USBUSB_EP0Base> ;
    using FieldValues = USB_USB_EP0_CTRS_RX_Values<USB::USB_EP0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP0Pack  = Register<0x40005C00, 32, ReadWriteMode, USBUSB_EP0Base, T...> ;

  struct USBUSB_EP1Base {} ;

  struct USB_EP1 : public RegisterBase<0x40005C04, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP1_EPADDR_Values<USB::USB_EP1, 0, 4, ReadWriteMode, USBUSB_EP1Base> ;
    using STS_TX = USB_USB_EP1_STS_TX_Values<USB::USB_EP1, 4, 2, ReadWriteMode, USBUSB_EP1Base> ;
    using DATTOG_TX = USB_USB_EP1_DATTOG_TX_Values<USB::USB_EP1, 6, 1, ReadWriteMode, USBUSB_EP1Base> ;
    using CTRS_TX = USB_USB_EP1_CTRS_TX_Values<USB::USB_EP1, 7, 1, ReadWriteMode, USBUSB_EP1Base> ;
    using EP_KIND = USB_USB_EP1_EP_KIND_Values<USB::USB_EP1, 8, 1, ReadWriteMode, USBUSB_EP1Base> ;
    using EP_TYPE = USB_USB_EP1_EP_TYPE_Values<USB::USB_EP1, 9, 2, ReadWriteMode, USBUSB_EP1Base> ;
    using SETUP = USB_USB_EP1_SETUP_Values<USB::USB_EP1, 11, 1, ReadWriteMode, USBUSB_EP1Base> ;
    using STS_RX = USB_USB_EP1_STS_RX_Values<USB::USB_EP1, 12, 2, ReadWriteMode, USBUSB_EP1Base> ;
    using DATTOG_RX = USB_USB_EP1_DATTOG_RX_Values<USB::USB_EP1, 14, 1, ReadWriteMode, USBUSB_EP1Base> ;
    using CTRS_RX = USB_USB_EP1_CTRS_RX_Values<USB::USB_EP1, 15, 1, ReadWriteMode, USBUSB_EP1Base> ;
    using FieldValues = USB_USB_EP1_CTRS_RX_Values<USB::USB_EP1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP1Pack  = Register<0x40005C04, 32, ReadWriteMode, USBUSB_EP1Base, T...> ;

  struct USBUSB_EP2Base {} ;

  struct USB_EP2 : public RegisterBase<0x40005C08, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP2_EPADDR_Values<USB::USB_EP2, 0, 4, ReadWriteMode, USBUSB_EP2Base> ;
    using STS_TX = USB_USB_EP2_STS_TX_Values<USB::USB_EP2, 4, 2, ReadWriteMode, USBUSB_EP2Base> ;
    using DATTOG_TX = USB_USB_EP2_DATTOG_TX_Values<USB::USB_EP2, 6, 1, ReadWriteMode, USBUSB_EP2Base> ;
    using CTRS_TX = USB_USB_EP2_CTRS_TX_Values<USB::USB_EP2, 7, 1, ReadWriteMode, USBUSB_EP2Base> ;
    using EP_KIND = USB_USB_EP2_EP_KIND_Values<USB::USB_EP2, 8, 1, ReadWriteMode, USBUSB_EP2Base> ;
    using EP_TYPE = USB_USB_EP2_EP_TYPE_Values<USB::USB_EP2, 9, 2, ReadWriteMode, USBUSB_EP2Base> ;
    using SETUP = USB_USB_EP2_SETUP_Values<USB::USB_EP2, 11, 1, ReadWriteMode, USBUSB_EP2Base> ;
    using STS_RX = USB_USB_EP2_STS_RX_Values<USB::USB_EP2, 12, 2, ReadWriteMode, USBUSB_EP2Base> ;
    using DATTOG_RX = USB_USB_EP2_DATTOG_RX_Values<USB::USB_EP2, 14, 1, ReadWriteMode, USBUSB_EP2Base> ;
    using CTRS_RX = USB_USB_EP2_CTRS_RX_Values<USB::USB_EP2, 15, 1, ReadWriteMode, USBUSB_EP2Base> ;
    using FieldValues = USB_USB_EP2_CTRS_RX_Values<USB::USB_EP2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP2Pack  = Register<0x40005C08, 32, ReadWriteMode, USBUSB_EP2Base, T...> ;

  struct USBUSB_EP3Base {} ;

  struct USB_EP3 : public RegisterBase<0x40005C0C, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP3_EPADDR_Values<USB::USB_EP3, 0, 4, ReadWriteMode, USBUSB_EP3Base> ;
    using STS_TX = USB_USB_EP3_STS_TX_Values<USB::USB_EP3, 4, 2, ReadWriteMode, USBUSB_EP3Base> ;
    using DATTOG_TX = USB_USB_EP3_DATTOG_TX_Values<USB::USB_EP3, 6, 1, ReadWriteMode, USBUSB_EP3Base> ;
    using CTRS_TX = USB_USB_EP3_CTRS_TX_Values<USB::USB_EP3, 7, 1, ReadWriteMode, USBUSB_EP3Base> ;
    using EP_KIND = USB_USB_EP3_EP_KIND_Values<USB::USB_EP3, 8, 1, ReadWriteMode, USBUSB_EP3Base> ;
    using EP_TYPE = USB_USB_EP3_EP_TYPE_Values<USB::USB_EP3, 9, 2, ReadWriteMode, USBUSB_EP3Base> ;
    using SETUP = USB_USB_EP3_SETUP_Values<USB::USB_EP3, 11, 1, ReadWriteMode, USBUSB_EP3Base> ;
    using STS_RX = USB_USB_EP3_STS_RX_Values<USB::USB_EP3, 12, 2, ReadWriteMode, USBUSB_EP3Base> ;
    using DATTOG_RX = USB_USB_EP3_DATTOG_RX_Values<USB::USB_EP3, 14, 1, ReadWriteMode, USBUSB_EP3Base> ;
    using CTRS_RX = USB_USB_EP3_CTRS_RX_Values<USB::USB_EP3, 15, 1, ReadWriteMode, USBUSB_EP3Base> ;
    using FieldValues = USB_USB_EP3_CTRS_RX_Values<USB::USB_EP3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP3Pack  = Register<0x40005C0C, 32, ReadWriteMode, USBUSB_EP3Base, T...> ;

  struct USBUSB_EP4Base {} ;

  struct USB_EP4 : public RegisterBase<0x40005C10, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP4_EPADDR_Values<USB::USB_EP4, 0, 4, ReadWriteMode, USBUSB_EP4Base> ;
    using STS_TX = USB_USB_EP4_STS_TX_Values<USB::USB_EP4, 4, 2, ReadWriteMode, USBUSB_EP4Base> ;
    using DATTOG_TX = USB_USB_EP4_DATTOG_TX_Values<USB::USB_EP4, 6, 1, ReadWriteMode, USBUSB_EP4Base> ;
    using CTRS_TX = USB_USB_EP4_CTRS_TX_Values<USB::USB_EP4, 7, 1, ReadWriteMode, USBUSB_EP4Base> ;
    using EP_KIND = USB_USB_EP4_EP_KIND_Values<USB::USB_EP4, 8, 1, ReadWriteMode, USBUSB_EP4Base> ;
    using EP_TYPE = USB_USB_EP4_EP_TYPE_Values<USB::USB_EP4, 9, 2, ReadWriteMode, USBUSB_EP4Base> ;
    using SETUP = USB_USB_EP4_SETUP_Values<USB::USB_EP4, 11, 1, ReadWriteMode, USBUSB_EP4Base> ;
    using STS_RX = USB_USB_EP4_STS_RX_Values<USB::USB_EP4, 12, 2, ReadWriteMode, USBUSB_EP4Base> ;
    using DATTOG_RX = USB_USB_EP4_DATTOG_RX_Values<USB::USB_EP4, 14, 1, ReadWriteMode, USBUSB_EP4Base> ;
    using CTRS_RX = USB_USB_EP4_CTRS_RX_Values<USB::USB_EP4, 15, 1, ReadWriteMode, USBUSB_EP4Base> ;
    using FieldValues = USB_USB_EP4_CTRS_RX_Values<USB::USB_EP4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP4Pack  = Register<0x40005C10, 32, ReadWriteMode, USBUSB_EP4Base, T...> ;

  struct USBUSB_EP5Base {} ;

  struct USB_EP5 : public RegisterBase<0x40005C14, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP5_EPADDR_Values<USB::USB_EP5, 0, 4, ReadWriteMode, USBUSB_EP5Base> ;
    using STS_TX = USB_USB_EP5_STS_TX_Values<USB::USB_EP5, 4, 2, ReadWriteMode, USBUSB_EP5Base> ;
    using DATTOG_TX = USB_USB_EP5_DATTOG_TX_Values<USB::USB_EP5, 6, 1, ReadWriteMode, USBUSB_EP5Base> ;
    using CTRS_TX = USB_USB_EP5_CTRS_TX_Values<USB::USB_EP5, 7, 1, ReadWriteMode, USBUSB_EP5Base> ;
    using EP_KIND = USB_USB_EP5_EP_KIND_Values<USB::USB_EP5, 8, 1, ReadWriteMode, USBUSB_EP5Base> ;
    using EP_TYPE = USB_USB_EP5_EP_TYPE_Values<USB::USB_EP5, 9, 2, ReadWriteMode, USBUSB_EP5Base> ;
    using SETUP = USB_USB_EP5_SETUP_Values<USB::USB_EP5, 11, 1, ReadWriteMode, USBUSB_EP5Base> ;
    using STS_RX = USB_USB_EP5_STS_RX_Values<USB::USB_EP5, 12, 2, ReadWriteMode, USBUSB_EP5Base> ;
    using DATTOG_RX = USB_USB_EP5_DATTOG_RX_Values<USB::USB_EP5, 14, 1, ReadWriteMode, USBUSB_EP5Base> ;
    using CTRS_RX = USB_USB_EP5_CTRS_RX_Values<USB::USB_EP5, 15, 1, ReadWriteMode, USBUSB_EP5Base> ;
    using FieldValues = USB_USB_EP5_CTRS_RX_Values<USB::USB_EP5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP5Pack  = Register<0x40005C14, 32, ReadWriteMode, USBUSB_EP5Base, T...> ;

  struct USBUSB_EP6Base {} ;

  struct USB_EP6 : public RegisterBase<0x40005C18, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP6_EPADDR_Values<USB::USB_EP6, 0, 4, ReadWriteMode, USBUSB_EP6Base> ;
    using STS_TX = USB_USB_EP6_STS_TX_Values<USB::USB_EP6, 4, 2, ReadWriteMode, USBUSB_EP6Base> ;
    using DATTOG_TX = USB_USB_EP6_DATTOG_TX_Values<USB::USB_EP6, 6, 1, ReadWriteMode, USBUSB_EP6Base> ;
    using CTRS_TX = USB_USB_EP6_CTRS_TX_Values<USB::USB_EP6, 7, 1, ReadWriteMode, USBUSB_EP6Base> ;
    using EP_KIND = USB_USB_EP6_EP_KIND_Values<USB::USB_EP6, 8, 1, ReadWriteMode, USBUSB_EP6Base> ;
    using EP_TYPE = USB_USB_EP6_EP_TYPE_Values<USB::USB_EP6, 9, 2, ReadWriteMode, USBUSB_EP6Base> ;
    using SETUP = USB_USB_EP6_SETUP_Values<USB::USB_EP6, 11, 1, ReadWriteMode, USBUSB_EP6Base> ;
    using STS_RX = USB_USB_EP6_STS_RX_Values<USB::USB_EP6, 12, 2, ReadWriteMode, USBUSB_EP6Base> ;
    using DATTOG_RX = USB_USB_EP6_DATTOG_RX_Values<USB::USB_EP6, 14, 1, ReadWriteMode, USBUSB_EP6Base> ;
    using CTRS_RX = USB_USB_EP6_CTRS_RX_Values<USB::USB_EP6, 15, 1, ReadWriteMode, USBUSB_EP6Base> ;
    using FieldValues = USB_USB_EP6_CTRS_RX_Values<USB::USB_EP6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP6Pack  = Register<0x40005C18, 32, ReadWriteMode, USBUSB_EP6Base, T...> ;

  struct USBUSB_EP7Base {} ;

  struct USB_EP7 : public RegisterBase<0x40005C1C, 32, ReadWriteMode>
  {
    using EPADDR = USB_USB_EP7_EPADDR_Values<USB::USB_EP7, 0, 4, ReadWriteMode, USBUSB_EP7Base> ;
    using STS_TX = USB_USB_EP7_STS_TX_Values<USB::USB_EP7, 4, 2, ReadWriteMode, USBUSB_EP7Base> ;
    using DATTOG_TX = USB_USB_EP7_DATTOG_TX_Values<USB::USB_EP7, 6, 1, ReadWriteMode, USBUSB_EP7Base> ;
    using CTRS_TX = USB_USB_EP7_CTRS_TX_Values<USB::USB_EP7, 7, 1, ReadWriteMode, USBUSB_EP7Base> ;
    using EP_KIND = USB_USB_EP7_EP_KIND_Values<USB::USB_EP7, 8, 1, ReadWriteMode, USBUSB_EP7Base> ;
    using EP_TYPE = USB_USB_EP7_EP_TYPE_Values<USB::USB_EP7, 9, 2, ReadWriteMode, USBUSB_EP7Base> ;
    using SETUP = USB_USB_EP7_SETUP_Values<USB::USB_EP7, 11, 1, ReadWriteMode, USBUSB_EP7Base> ;
    using STS_RX = USB_USB_EP7_STS_RX_Values<USB::USB_EP7, 12, 2, ReadWriteMode, USBUSB_EP7Base> ;
    using DATTOG_RX = USB_USB_EP7_DATTOG_RX_Values<USB::USB_EP7, 14, 1, ReadWriteMode, USBUSB_EP7Base> ;
    using CTRS_RX = USB_USB_EP7_CTRS_RX_Values<USB::USB_EP7, 15, 1, ReadWriteMode, USBUSB_EP7Base> ;
    using FieldValues = USB_USB_EP7_CTRS_RX_Values<USB::USB_EP7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_EP7Pack  = Register<0x40005C1C, 32, ReadWriteMode, USBUSB_EP7Base, T...> ;

  struct USBUSB_CTRLBase {} ;

  struct USB_CTRL : public RegisterBase<0x40005C40, 32, ReadWriteMode>
  {
    using FRST = USB_USB_CTRL_FRST_Values<USB::USB_CTRL, 0, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using PD = USB_USB_CTRL_PD_Values<USB::USB_CTRL, 1, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using LP_MODE = USB_USB_CTRL_LP_MODE_Values<USB::USB_CTRL, 2, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using FSUSPD = USB_USB_CTRL_FSUSPD_Values<USB::USB_CTRL, 3, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using RESUM = USB_USB_CTRL_RESUM_Values<USB::USB_CTRL, 4, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using ESOFM = USB_USB_CTRL_ESOFM_Values<USB::USB_CTRL, 8, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using SOFM = USB_USB_CTRL_SOFM_Values<USB::USB_CTRL, 9, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using RSTM = USB_USB_CTRL_RSTM_Values<USB::USB_CTRL, 10, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using SUSPDM = USB_USB_CTRL_SUSPDM_Values<USB::USB_CTRL, 11, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using WKUPM = USB_USB_CTRL_WKUPM_Values<USB::USB_CTRL, 12, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using ERRORM = USB_USB_CTRL_ERRORM_Values<USB::USB_CTRL, 13, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using PMAOM = USB_USB_CTRL_PMAOM_Values<USB::USB_CTRL, 14, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using CTRSM = USB_USB_CTRL_CTRSM_Values<USB::USB_CTRL, 15, 1, ReadWriteMode, USBUSB_CTRLBase> ;
    using FieldValues = USB_USB_CTRL_CTRSM_Values<USB::USB_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_CTRLPack  = Register<0x40005C40, 32, ReadWriteMode, USBUSB_CTRLBase, T...> ;

  struct USBUSB_STSBase {} ;

  struct USB_STS : public RegisterBase<0x40005C44, 32, ReadWriteMode>
  {
    using EP_ID = USB_USB_STS_EP_ID_Values<USB::USB_STS, 0, 4, ReadWriteMode, USBUSB_STSBase> ;
    using DIR = USB_USB_STS_DIR_Values<USB::USB_STS, 4, 1, ReadWriteMode, USBUSB_STSBase> ;
    using ESOF = USB_USB_STS_ESOF_Values<USB::USB_STS, 8, 1, ReadWriteMode, USBUSB_STSBase> ;
    using SOF = USB_USB_STS_SOF_Values<USB::USB_STS, 9, 1, ReadWriteMode, USBUSB_STSBase> ;
    using RST = USB_USB_STS_RST_Values<USB::USB_STS, 10, 1, ReadWriteMode, USBUSB_STSBase> ;
    using SUSPD = USB_USB_STS_SUSPD_Values<USB::USB_STS, 11, 1, ReadWriteMode, USBUSB_STSBase> ;
    using WKUP = USB_USB_STS_WKUP_Values<USB::USB_STS, 12, 1, ReadWriteMode, USBUSB_STSBase> ;
    using ERROR = USB_USB_STS_ERROR_Values<USB::USB_STS, 13, 1, ReadWriteMode, USBUSB_STSBase> ;
    using PMAO = USB_USB_STS_PMAO_Values<USB::USB_STS, 14, 1, ReadWriteMode, USBUSB_STSBase> ;
    using CTRS = USB_USB_STS_CTRS_Values<USB::USB_STS, 15, 1, ReadWriteMode, USBUSB_STSBase> ;
    using FieldValues = USB_USB_STS_CTRS_Values<USB::USB_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_STSPack  = Register<0x40005C44, 32, ReadWriteMode, USBUSB_STSBase, T...> ;

  struct USBUSB_FNBase {} ;

  struct USB_FN : public RegisterBase<0x40005C48, 32, ReadWriteMode>
  {
    using FN = USB_USB_FN_FN_Values<USB::USB_FN, 0, 11, ReadWriteMode, USBUSB_FNBase> ;
    using LSTSOF = USB_USB_FN_LSTSOF_Values<USB::USB_FN, 11, 2, ReadWriteMode, USBUSB_FNBase> ;
    using LOCK = USB_USB_FN_LOCK_Values<USB::USB_FN, 13, 1, ReadWriteMode, USBUSB_FNBase> ;
    using RXDM_STS = USB_USB_FN_RXDM_STS_Values<USB::USB_FN, 14, 1, ReadWriteMode, USBUSB_FNBase> ;
    using RXDP_STS = USB_USB_FN_RXDP_STS_Values<USB::USB_FN, 15, 1, ReadWriteMode, USBUSB_FNBase> ;
    using FieldValues = USB_USB_FN_RXDP_STS_Values<USB::USB_FN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_FNPack  = Register<0x40005C48, 32, ReadWriteMode, USBUSB_FNBase, T...> ;

  struct USBUSB_ADDRBase {} ;

  struct USB_ADDR : public RegisterBase<0x40005C4C, 32, ReadWriteMode>
  {
    using ADDR = USB_USB_ADDR_ADDR_Values<USB::USB_ADDR, 0, 7, ReadWriteMode, USBUSB_ADDRBase> ;
    using EFUC = USB_USB_ADDR_EFUC_Values<USB::USB_ADDR, 7, 1, ReadWriteMode, USBUSB_ADDRBase> ;
    using FieldValues = USB_USB_ADDR_EFUC_Values<USB::USB_ADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_ADDRPack  = Register<0x40005C4C, 32, ReadWriteMode, USBUSB_ADDRBase, T...> ;

  struct USBUSB_BUFTABBase {} ;

  struct USB_BUFTAB : public RegisterBase<0x40005C50, 32, ReadWriteMode>
  {
    using BUFTAB = USB_USB_BUFTAB_BUFTAB_Values<USB::USB_BUFTAB, 3, 13, ReadWriteMode, USBUSB_BUFTABBase> ;
    using FieldValues = USB_USB_BUFTAB_BUFTAB_Values<USB::USB_BUFTAB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USB_BUFTABPack  = Register<0x40005C50, 32, ReadWriteMode, USBUSB_BUFTABBase, T...> ;

} ;

