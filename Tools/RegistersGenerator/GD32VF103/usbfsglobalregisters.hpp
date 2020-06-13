/*******************************************************************************
* Filename      : usbfsglobalregisters.hpp
*
* Details       : USB full speed global registers. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USBFSGLOBALREGISTERS_HPP)
#define USBFSGLOBALREGISTERS_HPP

#include "usbfsglobalfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USBFS_GLOBAL
{
  struct USBFS_GLOBALGOTGCSBase {} ;

  struct GOTGCS : public RegisterBase<0x50000000, 32, ReadWriteMode>
  {
    using SRPS = USBFS_GLOBAL_GOTGCS_SRPS_Values<USBFS_GLOBAL::GOTGCS, 0, 1, ReadMode, USBFS_GLOBALGOTGCSBase> ;
    using SRPREQ = USBFS_GLOBAL_GOTGCS_SRPREQ_Values<USBFS_GLOBAL::GOTGCS, 1, 1, ReadWriteMode, USBFS_GLOBALGOTGCSBase> ;
    using HNPS = USBFS_GLOBAL_GOTGCS_HNPS_Values<USBFS_GLOBAL::GOTGCS, 8, 1, ReadMode, USBFS_GLOBALGOTGCSBase> ;
    using HNPREQ = USBFS_GLOBAL_GOTGCS_HNPREQ_Values<USBFS_GLOBAL::GOTGCS, 9, 1, ReadWriteMode, USBFS_GLOBALGOTGCSBase> ;
    using HHNPEN = USBFS_GLOBAL_GOTGCS_HHNPEN_Values<USBFS_GLOBAL::GOTGCS, 10, 1, ReadWriteMode, USBFS_GLOBALGOTGCSBase> ;
    using DHNPEN = USBFS_GLOBAL_GOTGCS_DHNPEN_Values<USBFS_GLOBAL::GOTGCS, 11, 1, ReadWriteMode, USBFS_GLOBALGOTGCSBase> ;
    using IDPS = USBFS_GLOBAL_GOTGCS_IDPS_Values<USBFS_GLOBAL::GOTGCS, 16, 1, ReadMode, USBFS_GLOBALGOTGCSBase> ;
    using DI = USBFS_GLOBAL_GOTGCS_DI_Values<USBFS_GLOBAL::GOTGCS, 17, 1, ReadMode, USBFS_GLOBALGOTGCSBase> ;
    using ASV = USBFS_GLOBAL_GOTGCS_ASV_Values<USBFS_GLOBAL::GOTGCS, 18, 1, ReadMode, USBFS_GLOBALGOTGCSBase> ;
    using BSV = USBFS_GLOBAL_GOTGCS_BSV_Values<USBFS_GLOBAL::GOTGCS, 19, 1, ReadMode, USBFS_GLOBALGOTGCSBase> ;
    using FieldValues = USBFS_GLOBAL_GOTGCS_BSV_Values<USBFS_GLOBAL::GOTGCS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GOTGCSPack  = Register<0x50000000, 32, ReadWriteMode, USBFS_GLOBALGOTGCSBase, T...> ;

  struct USBFS_GLOBALGOTGINTFBase {} ;

  struct GOTGINTF : public RegisterBase<0x50000004, 32, ReadWriteMode>
  {
    using SESEND = USBFS_GLOBAL_GOTGINTF_SESEND_Values<USBFS_GLOBAL::GOTGINTF, 2, 1, ReadWriteMode, USBFS_GLOBALGOTGINTFBase> ;
    using SRPEND = USBFS_GLOBAL_GOTGINTF_SRPEND_Values<USBFS_GLOBAL::GOTGINTF, 8, 1, ReadWriteMode, USBFS_GLOBALGOTGINTFBase> ;
    using HNPEND = USBFS_GLOBAL_GOTGINTF_HNPEND_Values<USBFS_GLOBAL::GOTGINTF, 9, 1, ReadWriteMode, USBFS_GLOBALGOTGINTFBase> ;
    using HNPDET = USBFS_GLOBAL_GOTGINTF_HNPDET_Values<USBFS_GLOBAL::GOTGINTF, 17, 1, ReadWriteMode, USBFS_GLOBALGOTGINTFBase> ;
    using ADTO = USBFS_GLOBAL_GOTGINTF_ADTO_Values<USBFS_GLOBAL::GOTGINTF, 18, 1, ReadWriteMode, USBFS_GLOBALGOTGINTFBase> ;
    using DF = USBFS_GLOBAL_GOTGINTF_DF_Values<USBFS_GLOBAL::GOTGINTF, 19, 1, ReadWriteMode, USBFS_GLOBALGOTGINTFBase> ;
    using FieldValues = USBFS_GLOBAL_GOTGINTF_DF_Values<USBFS_GLOBAL::GOTGINTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GOTGINTFPack  = Register<0x50000004, 32, ReadWriteMode, USBFS_GLOBALGOTGINTFBase, T...> ;

  struct USBFS_GLOBALGAHBCSBase {} ;

  struct GAHBCS : public RegisterBase<0x50000008, 32, ReadWriteMode>
  {
    using GINTEN = USBFS_GLOBAL_GAHBCS_GINTEN_Values<USBFS_GLOBAL::GAHBCS, 0, 1, ReadWriteMode, USBFS_GLOBALGAHBCSBase> ;
    using TXFTH = USBFS_GLOBAL_GAHBCS_TXFTH_Values<USBFS_GLOBAL::GAHBCS, 7, 1, ReadWriteMode, USBFS_GLOBALGAHBCSBase> ;
    using PTXFTH = USBFS_GLOBAL_GAHBCS_PTXFTH_Values<USBFS_GLOBAL::GAHBCS, 8, 1, ReadWriteMode, USBFS_GLOBALGAHBCSBase> ;
    using FieldValues = USBFS_GLOBAL_GAHBCS_PTXFTH_Values<USBFS_GLOBAL::GAHBCS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GAHBCSPack  = Register<0x50000008, 32, ReadWriteMode, USBFS_GLOBALGAHBCSBase, T...> ;

  struct USBFS_GLOBALGUSBCSBase {} ;

  struct GUSBCS : public RegisterBase<0x5000000C, 32, ReadWriteMode>
  {
    using TOC = USBFS_GLOBAL_GUSBCS_TOC_Values<USBFS_GLOBAL::GUSBCS, 0, 3, ReadWriteMode, USBFS_GLOBALGUSBCSBase> ;
    using SRPCEN = USBFS_GLOBAL_GUSBCS_SRPCEN_Values<USBFS_GLOBAL::GUSBCS, 8, 1, ReadWriteMode, USBFS_GLOBALGUSBCSBase> ;
    using HNPCEN = USBFS_GLOBAL_GUSBCS_HNPCEN_Values<USBFS_GLOBAL::GUSBCS, 9, 1, ReadWriteMode, USBFS_GLOBALGUSBCSBase> ;
    using UTT = USBFS_GLOBAL_GUSBCS_UTT_Values<USBFS_GLOBAL::GUSBCS, 10, 4, ReadWriteMode, USBFS_GLOBALGUSBCSBase> ;
    using FHM = USBFS_GLOBAL_GUSBCS_FHM_Values<USBFS_GLOBAL::GUSBCS, 29, 1, ReadWriteMode, USBFS_GLOBALGUSBCSBase> ;
    using FDM = USBFS_GLOBAL_GUSBCS_FDM_Values<USBFS_GLOBAL::GUSBCS, 30, 1, ReadWriteMode, USBFS_GLOBALGUSBCSBase> ;
    using FieldValues = USBFS_GLOBAL_GUSBCS_FDM_Values<USBFS_GLOBAL::GUSBCS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GUSBCSPack  = Register<0x5000000C, 32, ReadWriteMode, USBFS_GLOBALGUSBCSBase, T...> ;

  struct USBFS_GLOBALGRSTCTLBase {} ;

  struct GRSTCTL : public RegisterBase<0x50000010, 32, ReadWriteMode>
  {
    using CSRST = USBFS_GLOBAL_GRSTCTL_CSRST_Values<USBFS_GLOBAL::GRSTCTL, 0, 1, ReadWriteMode, USBFS_GLOBALGRSTCTLBase> ;
    using HCSRST = USBFS_GLOBAL_GRSTCTL_HCSRST_Values<USBFS_GLOBAL::GRSTCTL, 1, 1, ReadWriteMode, USBFS_GLOBALGRSTCTLBase> ;
    using HFCRST = USBFS_GLOBAL_GRSTCTL_HFCRST_Values<USBFS_GLOBAL::GRSTCTL, 2, 1, ReadWriteMode, USBFS_GLOBALGRSTCTLBase> ;
    using RXFF = USBFS_GLOBAL_GRSTCTL_RXFF_Values<USBFS_GLOBAL::GRSTCTL, 4, 1, ReadWriteMode, USBFS_GLOBALGRSTCTLBase> ;
    using TXFF = USBFS_GLOBAL_GRSTCTL_TXFF_Values<USBFS_GLOBAL::GRSTCTL, 5, 1, ReadWriteMode, USBFS_GLOBALGRSTCTLBase> ;
    using TXFNUM = USBFS_GLOBAL_GRSTCTL_TXFNUM_Values<USBFS_GLOBAL::GRSTCTL, 6, 5, ReadWriteMode, USBFS_GLOBALGRSTCTLBase> ;
    using FieldValues = USBFS_GLOBAL_GRSTCTL_TXFNUM_Values<USBFS_GLOBAL::GRSTCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GRSTCTLPack  = Register<0x50000010, 32, ReadWriteMode, USBFS_GLOBALGRSTCTLBase, T...> ;

  struct USBFS_GLOBALGINTFBase {} ;

  struct GINTF : public RegisterBase<0x50000014, 32, ReadWriteMode>
  {
    using COPM = USBFS_GLOBAL_GINTF_COPM_Values<USBFS_GLOBAL::GINTF, 0, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using MFIF = USBFS_GLOBAL_GINTF_MFIF_Values<USBFS_GLOBAL::GINTF, 1, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using OTGIF = USBFS_GLOBAL_GINTF_OTGIF_Values<USBFS_GLOBAL::GINTF, 2, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using SOF = USBFS_GLOBAL_GINTF_SOF_Values<USBFS_GLOBAL::GINTF, 3, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using RXFNEIF = USBFS_GLOBAL_GINTF_RXFNEIF_Values<USBFS_GLOBAL::GINTF, 4, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using NPTXFEIF = USBFS_GLOBAL_GINTF_NPTXFEIF_Values<USBFS_GLOBAL::GINTF, 5, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using GNPINAK = USBFS_GLOBAL_GINTF_GNPINAK_Values<USBFS_GLOBAL::GINTF, 6, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using GONAK = USBFS_GLOBAL_GINTF_GONAK_Values<USBFS_GLOBAL::GINTF, 7, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using ESP = USBFS_GLOBAL_GINTF_ESP_Values<USBFS_GLOBAL::GINTF, 10, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using SP = USBFS_GLOBAL_GINTF_SP_Values<USBFS_GLOBAL::GINTF, 11, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using RST = USBFS_GLOBAL_GINTF_RST_Values<USBFS_GLOBAL::GINTF, 12, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using ENUMF = USBFS_GLOBAL_GINTF_ENUMF_Values<USBFS_GLOBAL::GINTF, 13, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using ISOOPDIF = USBFS_GLOBAL_GINTF_ISOOPDIF_Values<USBFS_GLOBAL::GINTF, 14, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using EOPFIF = USBFS_GLOBAL_GINTF_EOPFIF_Values<USBFS_GLOBAL::GINTF, 15, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using IEPIF = USBFS_GLOBAL_GINTF_IEPIF_Values<USBFS_GLOBAL::GINTF, 18, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using OEPIF = USBFS_GLOBAL_GINTF_OEPIF_Values<USBFS_GLOBAL::GINTF, 19, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using ISOINCIF = USBFS_GLOBAL_GINTF_ISOINCIF_Values<USBFS_GLOBAL::GINTF, 20, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using PXNCIF_ISOONCIF = USBFS_GLOBAL_GINTF_PXNCIF_ISOONCIF_Values<USBFS_GLOBAL::GINTF, 21, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using HPIF = USBFS_GLOBAL_GINTF_HPIF_Values<USBFS_GLOBAL::GINTF, 24, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using HCIF = USBFS_GLOBAL_GINTF_HCIF_Values<USBFS_GLOBAL::GINTF, 25, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using PTXFEIF = USBFS_GLOBAL_GINTF_PTXFEIF_Values<USBFS_GLOBAL::GINTF, 26, 1, ReadMode, USBFS_GLOBALGINTFBase> ;
    using IDPSC = USBFS_GLOBAL_GINTF_IDPSC_Values<USBFS_GLOBAL::GINTF, 28, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using DISCIF = USBFS_GLOBAL_GINTF_DISCIF_Values<USBFS_GLOBAL::GINTF, 29, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using SESIF = USBFS_GLOBAL_GINTF_SESIF_Values<USBFS_GLOBAL::GINTF, 30, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using WKUPIF = USBFS_GLOBAL_GINTF_WKUPIF_Values<USBFS_GLOBAL::GINTF, 31, 1, ReadWriteMode, USBFS_GLOBALGINTFBase> ;
    using FieldValues = USBFS_GLOBAL_GINTF_WKUPIF_Values<USBFS_GLOBAL::GINTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GINTFPack  = Register<0x50000014, 32, ReadWriteMode, USBFS_GLOBALGINTFBase, T...> ;

  struct USBFS_GLOBALGINTENBase {} ;

  struct GINTEN : public RegisterBase<0x50000018, 32, ReadWriteMode>
  {
    using MFIE = USBFS_GLOBAL_GINTEN_MFIE_Values<USBFS_GLOBAL::GINTEN, 1, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using OTGIE = USBFS_GLOBAL_GINTEN_OTGIE_Values<USBFS_GLOBAL::GINTEN, 2, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using SOFIE = USBFS_GLOBAL_GINTEN_SOFIE_Values<USBFS_GLOBAL::GINTEN, 3, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using RXFNEIE = USBFS_GLOBAL_GINTEN_RXFNEIE_Values<USBFS_GLOBAL::GINTEN, 4, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using NPTXFEIE = USBFS_GLOBAL_GINTEN_NPTXFEIE_Values<USBFS_GLOBAL::GINTEN, 5, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using GNPINAKIE = USBFS_GLOBAL_GINTEN_GNPINAKIE_Values<USBFS_GLOBAL::GINTEN, 6, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using GONAKIE = USBFS_GLOBAL_GINTEN_GONAKIE_Values<USBFS_GLOBAL::GINTEN, 7, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using ESPIE = USBFS_GLOBAL_GINTEN_ESPIE_Values<USBFS_GLOBAL::GINTEN, 10, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using SPIE = USBFS_GLOBAL_GINTEN_SPIE_Values<USBFS_GLOBAL::GINTEN, 11, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using RSTIE = USBFS_GLOBAL_GINTEN_RSTIE_Values<USBFS_GLOBAL::GINTEN, 12, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using ENUMFIE = USBFS_GLOBAL_GINTEN_ENUMFIE_Values<USBFS_GLOBAL::GINTEN, 13, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using ISOOPDIE = USBFS_GLOBAL_GINTEN_ISOOPDIE_Values<USBFS_GLOBAL::GINTEN, 14, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using EOPFIE = USBFS_GLOBAL_GINTEN_EOPFIE_Values<USBFS_GLOBAL::GINTEN, 15, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using IEPIE = USBFS_GLOBAL_GINTEN_IEPIE_Values<USBFS_GLOBAL::GINTEN, 18, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using OEPIE = USBFS_GLOBAL_GINTEN_OEPIE_Values<USBFS_GLOBAL::GINTEN, 19, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using ISOINCIE = USBFS_GLOBAL_GINTEN_ISOINCIE_Values<USBFS_GLOBAL::GINTEN, 20, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using PXNCIE_ISOONCIE = USBFS_GLOBAL_GINTEN_PXNCIE_ISOONCIE_Values<USBFS_GLOBAL::GINTEN, 21, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using HPIE = USBFS_GLOBAL_GINTEN_HPIE_Values<USBFS_GLOBAL::GINTEN, 24, 1, ReadMode, USBFS_GLOBALGINTENBase> ;
    using HCIE = USBFS_GLOBAL_GINTEN_HCIE_Values<USBFS_GLOBAL::GINTEN, 25, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using PTXFEIE = USBFS_GLOBAL_GINTEN_PTXFEIE_Values<USBFS_GLOBAL::GINTEN, 26, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using IDPSCIE = USBFS_GLOBAL_GINTEN_IDPSCIE_Values<USBFS_GLOBAL::GINTEN, 28, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using DISCIE = USBFS_GLOBAL_GINTEN_DISCIE_Values<USBFS_GLOBAL::GINTEN, 29, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using SESIE = USBFS_GLOBAL_GINTEN_SESIE_Values<USBFS_GLOBAL::GINTEN, 30, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using WKUPIE = USBFS_GLOBAL_GINTEN_WKUPIE_Values<USBFS_GLOBAL::GINTEN, 31, 1, ReadWriteMode, USBFS_GLOBALGINTENBase> ;
    using FieldValues = USBFS_GLOBAL_GINTEN_WKUPIE_Values<USBFS_GLOBAL::GINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GINTENPack  = Register<0x50000018, 32, ReadWriteMode, USBFS_GLOBALGINTENBase, T...> ;

  struct USBFS_GLOBALGRSTATR_DeviceBase {} ;

  struct GRSTATR_Device : public RegisterBase<0x5000001C, 32, ReadMode>
  {
    using EPNUM = USBFS_GLOBAL_GRSTATR_Device_EPNUM_Values<USBFS_GLOBAL::GRSTATR_Device, 0, 4, ReadMode, USBFS_GLOBALGRSTATR_DeviceBase> ;
    using BCOUNT = USBFS_GLOBAL_GRSTATR_Device_BCOUNT_Values<USBFS_GLOBAL::GRSTATR_Device, 4, 11, ReadMode, USBFS_GLOBALGRSTATR_DeviceBase> ;
    using DPID = USBFS_GLOBAL_GRSTATR_Device_DPID_Values<USBFS_GLOBAL::GRSTATR_Device, 15, 2, ReadMode, USBFS_GLOBALGRSTATR_DeviceBase> ;
    using RPCKST = USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values<USBFS_GLOBAL::GRSTATR_Device, 17, 4, ReadMode, USBFS_GLOBALGRSTATR_DeviceBase> ;
    using FieldValues = USBFS_GLOBAL_GRSTATR_Device_RPCKST_Values<USBFS_GLOBAL::GRSTATR_Device, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GRSTATR_DevicePack  = Register<0x5000001C, 32, ReadMode, USBFS_GLOBALGRSTATR_DeviceBase, T...> ;

  struct USBFS_GLOBALGRSTATR_HostBase {} ;

  struct GRSTATR_Host : public RegisterBase<0x5000001C, 32, ReadMode>
  {
    using CNUM = USBFS_GLOBAL_GRSTATR_Host_CNUM_Values<USBFS_GLOBAL::GRSTATR_Host, 0, 4, ReadMode, USBFS_GLOBALGRSTATR_HostBase> ;
    using BCOUNT = USBFS_GLOBAL_GRSTATR_Host_BCOUNT_Values<USBFS_GLOBAL::GRSTATR_Host, 4, 11, ReadMode, USBFS_GLOBALGRSTATR_HostBase> ;
    using DPID = USBFS_GLOBAL_GRSTATR_Host_DPID_Values<USBFS_GLOBAL::GRSTATR_Host, 15, 2, ReadMode, USBFS_GLOBALGRSTATR_HostBase> ;
    using RPCKST = USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values<USBFS_GLOBAL::GRSTATR_Host, 17, 4, ReadMode, USBFS_GLOBALGRSTATR_HostBase> ;
    using FieldValues = USBFS_GLOBAL_GRSTATR_Host_RPCKST_Values<USBFS_GLOBAL::GRSTATR_Host, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GRSTATR_HostPack  = Register<0x5000001C, 32, ReadMode, USBFS_GLOBALGRSTATR_HostBase, T...> ;

  struct USBFS_GLOBALGRSTATP_DeviceBase {} ;

  struct GRSTATP_Device : public RegisterBase<0x50000020, 32, ReadMode>
  {
    using EPNUM = USBFS_GLOBAL_GRSTATP_Device_EPNUM_Values<USBFS_GLOBAL::GRSTATP_Device, 0, 4, ReadMode, USBFS_GLOBALGRSTATP_DeviceBase> ;
    using BCOUNT = USBFS_GLOBAL_GRSTATP_Device_BCOUNT_Values<USBFS_GLOBAL::GRSTATP_Device, 4, 11, ReadMode, USBFS_GLOBALGRSTATP_DeviceBase> ;
    using DPID = USBFS_GLOBAL_GRSTATP_Device_DPID_Values<USBFS_GLOBAL::GRSTATP_Device, 15, 2, ReadMode, USBFS_GLOBALGRSTATP_DeviceBase> ;
    using RPCKST = USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values<USBFS_GLOBAL::GRSTATP_Device, 17, 4, ReadMode, USBFS_GLOBALGRSTATP_DeviceBase> ;
    using FieldValues = USBFS_GLOBAL_GRSTATP_Device_RPCKST_Values<USBFS_GLOBAL::GRSTATP_Device, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GRSTATP_DevicePack  = Register<0x50000020, 32, ReadMode, USBFS_GLOBALGRSTATP_DeviceBase, T...> ;

  struct USBFS_GLOBALGRSTATP_HostBase {} ;

  struct GRSTATP_Host : public RegisterBase<0x50000020, 32, ReadMode>
  {
    using CNUM = USBFS_GLOBAL_GRSTATP_Host_CNUM_Values<USBFS_GLOBAL::GRSTATP_Host, 0, 4, ReadMode, USBFS_GLOBALGRSTATP_HostBase> ;
    using BCOUNT = USBFS_GLOBAL_GRSTATP_Host_BCOUNT_Values<USBFS_GLOBAL::GRSTATP_Host, 4, 11, ReadMode, USBFS_GLOBALGRSTATP_HostBase> ;
    using DPID = USBFS_GLOBAL_GRSTATP_Host_DPID_Values<USBFS_GLOBAL::GRSTATP_Host, 15, 2, ReadMode, USBFS_GLOBALGRSTATP_HostBase> ;
    using RPCKST = USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values<USBFS_GLOBAL::GRSTATP_Host, 17, 4, ReadMode, USBFS_GLOBALGRSTATP_HostBase> ;
    using FieldValues = USBFS_GLOBAL_GRSTATP_Host_RPCKST_Values<USBFS_GLOBAL::GRSTATP_Host, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GRSTATP_HostPack  = Register<0x50000020, 32, ReadMode, USBFS_GLOBALGRSTATP_HostBase, T...> ;

  struct USBFS_GLOBALGRFLENBase {} ;

  struct GRFLEN : public RegisterBase<0x50000024, 32, ReadWriteMode>
  {
    using RXFD = USBFS_GLOBAL_GRFLEN_RXFD_Values<USBFS_GLOBAL::GRFLEN, 0, 16, ReadWriteMode, USBFS_GLOBALGRFLENBase> ;
    using FieldValues = USBFS_GLOBAL_GRFLEN_RXFD_Values<USBFS_GLOBAL::GRFLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GRFLENPack  = Register<0x50000024, 32, ReadWriteMode, USBFS_GLOBALGRFLENBase, T...> ;

  struct USBFS_GLOBALHNPTFLENBase {} ;

  struct HNPTFLEN : public RegisterBase<0x50000028, 32, ReadWriteMode>
  {
    using HNPTXRSAR = USBFS_GLOBAL_HNPTFLEN_HNPTXRSAR_Values<USBFS_GLOBAL::HNPTFLEN, 0, 16, ReadWriteMode, USBFS_GLOBALHNPTFLENBase> ;
    using HNPTXFD = USBFS_GLOBAL_HNPTFLEN_HNPTXFD_Values<USBFS_GLOBAL::HNPTFLEN, 16, 16, ReadWriteMode, USBFS_GLOBALHNPTFLENBase> ;
    using FieldValues = USBFS_GLOBAL_HNPTFLEN_HNPTXFD_Values<USBFS_GLOBAL::HNPTFLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HNPTFLENPack  = Register<0x50000028, 32, ReadWriteMode, USBFS_GLOBALHNPTFLENBase, T...> ;

  struct USBFS_GLOBALDIEP0TFLENBase {} ;

  struct DIEP0TFLEN : public RegisterBase<0x50000028, 32, ReadWriteMode>
  {
    using IEP0TXFD = USBFS_GLOBAL_DIEP0TFLEN_IEP0TXFD_Values<USBFS_GLOBAL::DIEP0TFLEN, 16, 16, ReadWriteMode, USBFS_GLOBALDIEP0TFLENBase> ;
    using IEP0TXRSAR = USBFS_GLOBAL_DIEP0TFLEN_IEP0TXRSAR_Values<USBFS_GLOBAL::DIEP0TFLEN, 0, 16, ReadWriteMode, USBFS_GLOBALDIEP0TFLENBase> ;
    using FieldValues = USBFS_GLOBAL_DIEP0TFLEN_IEP0TXRSAR_Values<USBFS_GLOBAL::DIEP0TFLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIEP0TFLENPack  = Register<0x50000028, 32, ReadWriteMode, USBFS_GLOBALDIEP0TFLENBase, T...> ;

  struct USBFS_GLOBALHNPTFQSTATBase {} ;

  struct HNPTFQSTAT : public RegisterBase<0x5000002C, 32, ReadMode>
  {
    using NPTXFS = USBFS_GLOBAL_HNPTFQSTAT_NPTXFS_Values<USBFS_GLOBAL::HNPTFQSTAT, 0, 16, ReadMode, USBFS_GLOBALHNPTFQSTATBase> ;
    using NPTXRQS = USBFS_GLOBAL_HNPTFQSTAT_NPTXRQS_Values<USBFS_GLOBAL::HNPTFQSTAT, 16, 8, ReadMode, USBFS_GLOBALHNPTFQSTATBase> ;
    using NPTXRQTOP = USBFS_GLOBAL_HNPTFQSTAT_NPTXRQTOP_Values<USBFS_GLOBAL::HNPTFQSTAT, 24, 7, ReadMode, USBFS_GLOBALHNPTFQSTATBase> ;
    using FieldValues = USBFS_GLOBAL_HNPTFQSTAT_NPTXRQTOP_Values<USBFS_GLOBAL::HNPTFQSTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HNPTFQSTATPack  = Register<0x5000002C, 32, ReadMode, USBFS_GLOBALHNPTFQSTATBase, T...> ;

  struct USBFS_GLOBALGCCFGBase {} ;

  struct GCCFG : public RegisterBase<0x50000038, 32, ReadWriteMode>
  {
    using PWRON = USBFS_GLOBAL_GCCFG_PWRON_Values<USBFS_GLOBAL::GCCFG, 16, 1, ReadWriteMode, USBFS_GLOBALGCCFGBase> ;
    using VBUSACEN = USBFS_GLOBAL_GCCFG_VBUSACEN_Values<USBFS_GLOBAL::GCCFG, 18, 1, ReadWriteMode, USBFS_GLOBALGCCFGBase> ;
    using VBUSBCEN = USBFS_GLOBAL_GCCFG_VBUSBCEN_Values<USBFS_GLOBAL::GCCFG, 19, 1, ReadWriteMode, USBFS_GLOBALGCCFGBase> ;
    using SOFOEN = USBFS_GLOBAL_GCCFG_SOFOEN_Values<USBFS_GLOBAL::GCCFG, 20, 1, ReadWriteMode, USBFS_GLOBALGCCFGBase> ;
    using VBUSIG = USBFS_GLOBAL_GCCFG_VBUSIG_Values<USBFS_GLOBAL::GCCFG, 21, 1, ReadWriteMode, USBFS_GLOBALGCCFGBase> ;
    using FieldValues = USBFS_GLOBAL_GCCFG_VBUSIG_Values<USBFS_GLOBAL::GCCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GCCFGPack  = Register<0x50000038, 32, ReadWriteMode, USBFS_GLOBALGCCFGBase, T...> ;

  struct USBFS_GLOBALCIDBase {} ;

  struct CID : public RegisterBase<0x5000003C, 32, ReadWriteMode>
  {
    using CIDField = USBFS_GLOBAL_CID_CID_Values<USBFS_GLOBAL::CID, 0, 32, ReadWriteMode, USBFS_GLOBALCIDBase> ;
    using FieldValues = USBFS_GLOBAL_CID_CID_Values<USBFS_GLOBAL::CID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CIDPack  = Register<0x5000003C, 32, ReadWriteMode, USBFS_GLOBALCIDBase, T...> ;

  struct USBFS_GLOBALHPTFLENBase {} ;

  struct HPTFLEN : public RegisterBase<0x50000100, 32, ReadWriteMode>
  {
    using HPTXFSAR = USBFS_GLOBAL_HPTFLEN_HPTXFSAR_Values<USBFS_GLOBAL::HPTFLEN, 0, 16, ReadWriteMode, USBFS_GLOBALHPTFLENBase> ;
    using HPTXFD = USBFS_GLOBAL_HPTFLEN_HPTXFD_Values<USBFS_GLOBAL::HPTFLEN, 16, 16, ReadWriteMode, USBFS_GLOBALHPTFLENBase> ;
    using FieldValues = USBFS_GLOBAL_HPTFLEN_HPTXFD_Values<USBFS_GLOBAL::HPTFLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HPTFLENPack  = Register<0x50000100, 32, ReadWriteMode, USBFS_GLOBALHPTFLENBase, T...> ;

  struct USBFS_GLOBALDIEP1TFLENBase {} ;

  struct DIEP1TFLEN : public RegisterBase<0x50000104, 32, ReadWriteMode>
  {
    using IEPTXRSAR = USBFS_GLOBAL_DIEP1TFLEN_IEPTXRSAR_Values<USBFS_GLOBAL::DIEP1TFLEN, 0, 16, ReadWriteMode, USBFS_GLOBALDIEP1TFLENBase> ;
    using IEPTXFD = USBFS_GLOBAL_DIEP1TFLEN_IEPTXFD_Values<USBFS_GLOBAL::DIEP1TFLEN, 16, 16, ReadWriteMode, USBFS_GLOBALDIEP1TFLENBase> ;
    using FieldValues = USBFS_GLOBAL_DIEP1TFLEN_IEPTXFD_Values<USBFS_GLOBAL::DIEP1TFLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIEP1TFLENPack  = Register<0x50000104, 32, ReadWriteMode, USBFS_GLOBALDIEP1TFLENBase, T...> ;

  struct USBFS_GLOBALDIEP2TFLENBase {} ;

  struct DIEP2TFLEN : public RegisterBase<0x50000108, 32, ReadWriteMode>
  {
    using IEPTXRSAR = USBFS_GLOBAL_DIEP2TFLEN_IEPTXRSAR_Values<USBFS_GLOBAL::DIEP2TFLEN, 0, 16, ReadWriteMode, USBFS_GLOBALDIEP2TFLENBase> ;
    using IEPTXFD = USBFS_GLOBAL_DIEP2TFLEN_IEPTXFD_Values<USBFS_GLOBAL::DIEP2TFLEN, 16, 16, ReadWriteMode, USBFS_GLOBALDIEP2TFLENBase> ;
    using FieldValues = USBFS_GLOBAL_DIEP2TFLEN_IEPTXFD_Values<USBFS_GLOBAL::DIEP2TFLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIEP2TFLENPack  = Register<0x50000108, 32, ReadWriteMode, USBFS_GLOBALDIEP2TFLENBase, T...> ;

  struct USBFS_GLOBALDIEP3TFLENBase {} ;

  struct DIEP3TFLEN : public RegisterBase<0x5000010C, 32, ReadWriteMode>
  {
    using IEPTXRSAR = USBFS_GLOBAL_DIEP3TFLEN_IEPTXRSAR_Values<USBFS_GLOBAL::DIEP3TFLEN, 0, 16, ReadWriteMode, USBFS_GLOBALDIEP3TFLENBase> ;
    using IEPTXFD = USBFS_GLOBAL_DIEP3TFLEN_IEPTXFD_Values<USBFS_GLOBAL::DIEP3TFLEN, 16, 16, ReadWriteMode, USBFS_GLOBALDIEP3TFLENBase> ;
    using FieldValues = USBFS_GLOBAL_DIEP3TFLEN_IEPTXFD_Values<USBFS_GLOBAL::DIEP3TFLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIEP3TFLENPack  = Register<0x5000010C, 32, ReadWriteMode, USBFS_GLOBALDIEP3TFLENBase, T...> ;

} ;

#endif //#if !defined(USBFSGLOBALREGISTERS_HPP)
