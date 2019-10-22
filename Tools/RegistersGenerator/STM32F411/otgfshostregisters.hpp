/*******************************************************************************
* Filename      : otgfshostregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSHOSTREGISTERS_HPP)
#define OTGFSHOSTREGISTERS_HPP

#include "otgfshostfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OTG_FS_HOST
{
  struct OTG_FS_HOSTFS_HCFGBase {} ;

  struct FS_HCFG : public RegisterBase<0x50000400, 32, ReadWriteMode>
  {
    using FSLSPCS = OTG_FS_HOST_FS_HCFG_FSLSPCS_Values<OTG_FS_HOST::FS_HCFG, 0, 2, ReadWriteMode, OTG_FS_HOSTFS_HCFGBase> ;
    using FSLSS = OTG_FS_HOST_FS_HCFG_FSLSS_Values<OTG_FS_HOST::FS_HCFG, 2, 1, ReadMode, OTG_FS_HOSTFS_HCFGBase> ;
    using FieldValues = OTG_FS_HOST_FS_HCFG_FSLSS_Values<OTG_FS_HOST::FS_HCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCFGPack  = Register<0x50000400, 32, ReadWriteMode, OTG_FS_HOSTFS_HCFGBase, T...> ;

  struct OTG_FS_HOSTHFIRBase {} ;

  struct HFIR : public RegisterBase<0x50000404, 32, ReadWriteMode>
  {
    using FRIVL = OTG_FS_HOST_HFIR_FRIVL_Values<OTG_FS_HOST::HFIR, 0, 16, ReadWriteMode, OTG_FS_HOSTHFIRBase> ;
    using FieldValues = OTG_FS_HOST_HFIR_FRIVL_Values<OTG_FS_HOST::HFIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HFIRPack  = Register<0x50000404, 32, ReadWriteMode, OTG_FS_HOSTHFIRBase, T...> ;

  struct OTG_FS_HOSTFS_HFNUMBase {} ;

  struct FS_HFNUM : public RegisterBase<0x50000408, 32, ReadMode>
  {
    using FRNUM = OTG_FS_HOST_FS_HFNUM_FRNUM_Values<OTG_FS_HOST::FS_HFNUM, 0, 16, ReadMode, OTG_FS_HOSTFS_HFNUMBase> ;
    using FTREM = OTG_FS_HOST_FS_HFNUM_FTREM_Values<OTG_FS_HOST::FS_HFNUM, 16, 16, ReadMode, OTG_FS_HOSTFS_HFNUMBase> ;
    using FieldValues = OTG_FS_HOST_FS_HFNUM_FTREM_Values<OTG_FS_HOST::FS_HFNUM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HFNUMPack  = Register<0x50000408, 32, ReadMode, OTG_FS_HOSTFS_HFNUMBase, T...> ;

  struct OTG_FS_HOSTFS_HPTXSTSBase {} ;

  struct FS_HPTXSTS : public RegisterBase<0x50000410, 32, ReadWriteMode>
  {
    using PTXFSAVL = OTG_FS_HOST_FS_HPTXSTS_PTXFSAVL_Values<OTG_FS_HOST::FS_HPTXSTS, 0, 16, ReadWriteMode, OTG_FS_HOSTFS_HPTXSTSBase> ;
    using PTXQSAV = OTG_FS_HOST_FS_HPTXSTS_PTXQSAV_Values<OTG_FS_HOST::FS_HPTXSTS, 16, 8, ReadMode, OTG_FS_HOSTFS_HPTXSTSBase> ;
    using PTXQTOP = OTG_FS_HOST_FS_HPTXSTS_PTXQTOP_Values<OTG_FS_HOST::FS_HPTXSTS, 24, 8, ReadMode, OTG_FS_HOSTFS_HPTXSTSBase> ;
    using FieldValues = OTG_FS_HOST_FS_HPTXSTS_PTXQTOP_Values<OTG_FS_HOST::FS_HPTXSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HPTXSTSPack  = Register<0x50000410, 32, ReadWriteMode, OTG_FS_HOSTFS_HPTXSTSBase, T...> ;

  struct OTG_FS_HOSTHAINTBase {} ;

  struct HAINT : public RegisterBase<0x50000414, 32, ReadMode>
  {
    using HAINTField = OTG_FS_HOST_HAINT_HAINT_Values<OTG_FS_HOST::HAINT, 0, 16, ReadMode, OTG_FS_HOSTHAINTBase> ;
    using FieldValues = OTG_FS_HOST_HAINT_HAINT_Values<OTG_FS_HOST::HAINT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HAINTPack  = Register<0x50000414, 32, ReadMode, OTG_FS_HOSTHAINTBase, T...> ;

  struct OTG_FS_HOSTHAINTMSKBase {} ;

  struct HAINTMSK : public RegisterBase<0x50000418, 32, ReadWriteMode>
  {
    using HAINTM = OTG_FS_HOST_HAINTMSK_HAINTM_Values<OTG_FS_HOST::HAINTMSK, 0, 16, ReadWriteMode, OTG_FS_HOSTHAINTMSKBase> ;
    using FieldValues = OTG_FS_HOST_HAINTMSK_HAINTM_Values<OTG_FS_HOST::HAINTMSK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HAINTMSKPack  = Register<0x50000418, 32, ReadWriteMode, OTG_FS_HOSTHAINTMSKBase, T...> ;

  struct OTG_FS_HOSTFS_HPRTBase {} ;

  struct FS_HPRT : public RegisterBase<0x50000440, 32, ReadWriteMode>
  {
    using PCSTS = OTG_FS_HOST_FS_HPRT_PCSTS_Values<OTG_FS_HOST::FS_HPRT, 0, 1, ReadMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PCDET = OTG_FS_HOST_FS_HPRT_PCDET_Values<OTG_FS_HOST::FS_HPRT, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PENA = OTG_FS_HOST_FS_HPRT_PENA_Values<OTG_FS_HOST::FS_HPRT, 2, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PENCHNG = OTG_FS_HOST_FS_HPRT_PENCHNG_Values<OTG_FS_HOST::FS_HPRT, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using POCA = OTG_FS_HOST_FS_HPRT_POCA_Values<OTG_FS_HOST::FS_HPRT, 4, 1, ReadMode, OTG_FS_HOSTFS_HPRTBase> ;
    using POCCHNG = OTG_FS_HOST_FS_HPRT_POCCHNG_Values<OTG_FS_HOST::FS_HPRT, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PRES = OTG_FS_HOST_FS_HPRT_PRES_Values<OTG_FS_HOST::FS_HPRT, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PSUSP = OTG_FS_HOST_FS_HPRT_PSUSP_Values<OTG_FS_HOST::FS_HPRT, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PRST = OTG_FS_HOST_FS_HPRT_PRST_Values<OTG_FS_HOST::FS_HPRT, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PLSTS = OTG_FS_HOST_FS_HPRT_PLSTS_Values<OTG_FS_HOST::FS_HPRT, 10, 2, ReadMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PPWR = OTG_FS_HOST_FS_HPRT_PPWR_Values<OTG_FS_HOST::FS_HPRT, 12, 1, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PTCTL = OTG_FS_HOST_FS_HPRT_PTCTL_Values<OTG_FS_HOST::FS_HPRT, 13, 4, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase> ;
    using PSPD = OTG_FS_HOST_FS_HPRT_PSPD_Values<OTG_FS_HOST::FS_HPRT, 17, 2, ReadMode, OTG_FS_HOSTFS_HPRTBase> ;
    using FieldValues = OTG_FS_HOST_FS_HPRT_PSPD_Values<OTG_FS_HOST::FS_HPRT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HPRTPack  = Register<0x50000440, 32, ReadWriteMode, OTG_FS_HOSTFS_HPRTBase, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR0Base {} ;

  struct FS_HCCHAR0 : public RegisterBase<0x50000500, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR0_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR0, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR0_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR0, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR0_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR0, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR0_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR0, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR0_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR0, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR0_MCNT_Values<OTG_FS_HOST::FS_HCCHAR0, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR0_DAD_Values<OTG_FS_HOST::FS_HCCHAR0, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR0_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR0, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR0_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR0, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR0_CHENA_Values<OTG_FS_HOST::FS_HCCHAR0, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR0_CHENA_Values<OTG_FS_HOST::FS_HCCHAR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR0Pack  = Register<0x50000500, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR0Base, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR1Base {} ;

  struct FS_HCCHAR1 : public RegisterBase<0x50000520, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR1_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR1, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR1_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR1, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR1_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR1, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR1_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR1, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR1_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR1, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR1_MCNT_Values<OTG_FS_HOST::FS_HCCHAR1, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR1_DAD_Values<OTG_FS_HOST::FS_HCCHAR1, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR1_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR1, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR1_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR1, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR1_CHENA_Values<OTG_FS_HOST::FS_HCCHAR1, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR1_CHENA_Values<OTG_FS_HOST::FS_HCCHAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR1Pack  = Register<0x50000520, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR1Base, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR2Base {} ;

  struct FS_HCCHAR2 : public RegisterBase<0x50000540, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR2_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR2, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR2_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR2, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR2_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR2, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR2_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR2, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR2_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR2, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR2_MCNT_Values<OTG_FS_HOST::FS_HCCHAR2, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR2_DAD_Values<OTG_FS_HOST::FS_HCCHAR2, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR2_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR2, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR2_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR2, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR2_CHENA_Values<OTG_FS_HOST::FS_HCCHAR2, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR2_CHENA_Values<OTG_FS_HOST::FS_HCCHAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR2Pack  = Register<0x50000540, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR2Base, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR3Base {} ;

  struct FS_HCCHAR3 : public RegisterBase<0x50000560, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR3_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR3, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR3_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR3, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR3_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR3, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR3_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR3, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR3_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR3, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR3_MCNT_Values<OTG_FS_HOST::FS_HCCHAR3, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR3_DAD_Values<OTG_FS_HOST::FS_HCCHAR3, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR3_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR3, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR3_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR3, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR3_CHENA_Values<OTG_FS_HOST::FS_HCCHAR3, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR3_CHENA_Values<OTG_FS_HOST::FS_HCCHAR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR3Pack  = Register<0x50000560, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR3Base, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR4Base {} ;

  struct FS_HCCHAR4 : public RegisterBase<0x50000580, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR4_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR4, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR4_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR4, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR4_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR4, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR4_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR4, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR4_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR4, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR4_MCNT_Values<OTG_FS_HOST::FS_HCCHAR4, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR4_DAD_Values<OTG_FS_HOST::FS_HCCHAR4, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR4_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR4, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR4_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR4, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR4_CHENA_Values<OTG_FS_HOST::FS_HCCHAR4, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR4_CHENA_Values<OTG_FS_HOST::FS_HCCHAR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR4Pack  = Register<0x50000580, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR4Base, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR5Base {} ;

  struct FS_HCCHAR5 : public RegisterBase<0x500005A0, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR5_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR5, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR5_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR5, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR5_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR5, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR5_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR5, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR5_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR5, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR5_MCNT_Values<OTG_FS_HOST::FS_HCCHAR5, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR5_DAD_Values<OTG_FS_HOST::FS_HCCHAR5, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR5_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR5, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR5_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR5, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR5_CHENA_Values<OTG_FS_HOST::FS_HCCHAR5, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR5_CHENA_Values<OTG_FS_HOST::FS_HCCHAR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR5Pack  = Register<0x500005A0, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR5Base, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR6Base {} ;

  struct FS_HCCHAR6 : public RegisterBase<0x500005C0, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR6_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR6, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR6_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR6, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR6_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR6, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR6_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR6, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR6_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR6, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR6_MCNT_Values<OTG_FS_HOST::FS_HCCHAR6, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR6_DAD_Values<OTG_FS_HOST::FS_HCCHAR6, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR6_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR6, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR6_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR6, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR6_CHENA_Values<OTG_FS_HOST::FS_HCCHAR6, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR6_CHENA_Values<OTG_FS_HOST::FS_HCCHAR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR6Pack  = Register<0x500005C0, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR6Base, T...> ;

  struct OTG_FS_HOSTFS_HCCHAR7Base {} ;

  struct FS_HCCHAR7 : public RegisterBase<0x500005E0, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_HOST_FS_HCCHAR7_MPSIZ_Values<OTG_FS_HOST::FS_HCCHAR7, 0, 11, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using EPNUM = OTG_FS_HOST_FS_HCCHAR7_EPNUM_Values<OTG_FS_HOST::FS_HCCHAR7, 11, 4, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using EPDIR = OTG_FS_HOST_FS_HCCHAR7_EPDIR_Values<OTG_FS_HOST::FS_HCCHAR7, 15, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using LSDEV = OTG_FS_HOST_FS_HCCHAR7_LSDEV_Values<OTG_FS_HOST::FS_HCCHAR7, 17, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using EPTYP = OTG_FS_HOST_FS_HCCHAR7_EPTYP_Values<OTG_FS_HOST::FS_HCCHAR7, 18, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using MCNT = OTG_FS_HOST_FS_HCCHAR7_MCNT_Values<OTG_FS_HOST::FS_HCCHAR7, 20, 2, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using DAD = OTG_FS_HOST_FS_HCCHAR7_DAD_Values<OTG_FS_HOST::FS_HCCHAR7, 22, 7, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using ODDFRM = OTG_FS_HOST_FS_HCCHAR7_ODDFRM_Values<OTG_FS_HOST::FS_HCCHAR7, 29, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using CHDIS = OTG_FS_HOST_FS_HCCHAR7_CHDIS_Values<OTG_FS_HOST::FS_HCCHAR7, 30, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using CHENA = OTG_FS_HOST_FS_HCCHAR7_CHENA_Values<OTG_FS_HOST::FS_HCCHAR7, 31, 1, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCCHAR7_CHENA_Values<OTG_FS_HOST::FS_HCCHAR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCCHAR7Pack  = Register<0x500005E0, 32, ReadWriteMode, OTG_FS_HOSTFS_HCCHAR7Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT0Base {} ;

  struct FS_HCINT0 : public RegisterBase<0x50000508, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT0_XFRC_Values<OTG_FS_HOST::FS_HCINT0, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT0_CHH_Values<OTG_FS_HOST::FS_HCINT0, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT0_STALL_Values<OTG_FS_HOST::FS_HCINT0, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT0_NAK_Values<OTG_FS_HOST::FS_HCINT0, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT0_ACK_Values<OTG_FS_HOST::FS_HCINT0, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT0_TXERR_Values<OTG_FS_HOST::FS_HCINT0, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT0_BBERR_Values<OTG_FS_HOST::FS_HCINT0, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT0_FRMOR_Values<OTG_FS_HOST::FS_HCINT0, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT0_DTERR_Values<OTG_FS_HOST::FS_HCINT0, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT0_DTERR_Values<OTG_FS_HOST::FS_HCINT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT0Pack  = Register<0x50000508, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT0Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT1Base {} ;

  struct FS_HCINT1 : public RegisterBase<0x50000528, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT1_XFRC_Values<OTG_FS_HOST::FS_HCINT1, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT1_CHH_Values<OTG_FS_HOST::FS_HCINT1, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT1_STALL_Values<OTG_FS_HOST::FS_HCINT1, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT1_NAK_Values<OTG_FS_HOST::FS_HCINT1, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT1_ACK_Values<OTG_FS_HOST::FS_HCINT1, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT1_TXERR_Values<OTG_FS_HOST::FS_HCINT1, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT1_BBERR_Values<OTG_FS_HOST::FS_HCINT1, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT1_FRMOR_Values<OTG_FS_HOST::FS_HCINT1, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT1_DTERR_Values<OTG_FS_HOST::FS_HCINT1, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT1_DTERR_Values<OTG_FS_HOST::FS_HCINT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT1Pack  = Register<0x50000528, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT1Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT2Base {} ;

  struct FS_HCINT2 : public RegisterBase<0x50000548, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT2_XFRC_Values<OTG_FS_HOST::FS_HCINT2, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT2_CHH_Values<OTG_FS_HOST::FS_HCINT2, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT2_STALL_Values<OTG_FS_HOST::FS_HCINT2, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT2_NAK_Values<OTG_FS_HOST::FS_HCINT2, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT2_ACK_Values<OTG_FS_HOST::FS_HCINT2, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT2_TXERR_Values<OTG_FS_HOST::FS_HCINT2, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT2_BBERR_Values<OTG_FS_HOST::FS_HCINT2, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT2_FRMOR_Values<OTG_FS_HOST::FS_HCINT2, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT2_DTERR_Values<OTG_FS_HOST::FS_HCINT2, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT2_DTERR_Values<OTG_FS_HOST::FS_HCINT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT2Pack  = Register<0x50000548, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT2Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT3Base {} ;

  struct FS_HCINT3 : public RegisterBase<0x50000568, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT3_XFRC_Values<OTG_FS_HOST::FS_HCINT3, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT3_CHH_Values<OTG_FS_HOST::FS_HCINT3, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT3_STALL_Values<OTG_FS_HOST::FS_HCINT3, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT3_NAK_Values<OTG_FS_HOST::FS_HCINT3, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT3_ACK_Values<OTG_FS_HOST::FS_HCINT3, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT3_TXERR_Values<OTG_FS_HOST::FS_HCINT3, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT3_BBERR_Values<OTG_FS_HOST::FS_HCINT3, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT3_FRMOR_Values<OTG_FS_HOST::FS_HCINT3, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT3_DTERR_Values<OTG_FS_HOST::FS_HCINT3, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT3_DTERR_Values<OTG_FS_HOST::FS_HCINT3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT3Pack  = Register<0x50000568, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT3Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT4Base {} ;

  struct FS_HCINT4 : public RegisterBase<0x50000588, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT4_XFRC_Values<OTG_FS_HOST::FS_HCINT4, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT4_CHH_Values<OTG_FS_HOST::FS_HCINT4, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT4_STALL_Values<OTG_FS_HOST::FS_HCINT4, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT4_NAK_Values<OTG_FS_HOST::FS_HCINT4, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT4_ACK_Values<OTG_FS_HOST::FS_HCINT4, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT4_TXERR_Values<OTG_FS_HOST::FS_HCINT4, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT4_BBERR_Values<OTG_FS_HOST::FS_HCINT4, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT4_FRMOR_Values<OTG_FS_HOST::FS_HCINT4, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT4_DTERR_Values<OTG_FS_HOST::FS_HCINT4, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT4_DTERR_Values<OTG_FS_HOST::FS_HCINT4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT4Pack  = Register<0x50000588, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT4Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT5Base {} ;

  struct FS_HCINT5 : public RegisterBase<0x500005A8, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT5_XFRC_Values<OTG_FS_HOST::FS_HCINT5, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT5_CHH_Values<OTG_FS_HOST::FS_HCINT5, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT5_STALL_Values<OTG_FS_HOST::FS_HCINT5, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT5_NAK_Values<OTG_FS_HOST::FS_HCINT5, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT5_ACK_Values<OTG_FS_HOST::FS_HCINT5, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT5_TXERR_Values<OTG_FS_HOST::FS_HCINT5, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT5_BBERR_Values<OTG_FS_HOST::FS_HCINT5, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT5_FRMOR_Values<OTG_FS_HOST::FS_HCINT5, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT5_DTERR_Values<OTG_FS_HOST::FS_HCINT5, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT5_DTERR_Values<OTG_FS_HOST::FS_HCINT5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT5Pack  = Register<0x500005A8, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT5Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT6Base {} ;

  struct FS_HCINT6 : public RegisterBase<0x500005C8, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT6_XFRC_Values<OTG_FS_HOST::FS_HCINT6, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT6_CHH_Values<OTG_FS_HOST::FS_HCINT6, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT6_STALL_Values<OTG_FS_HOST::FS_HCINT6, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT6_NAK_Values<OTG_FS_HOST::FS_HCINT6, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT6_ACK_Values<OTG_FS_HOST::FS_HCINT6, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT6_TXERR_Values<OTG_FS_HOST::FS_HCINT6, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT6_BBERR_Values<OTG_FS_HOST::FS_HCINT6, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT6_FRMOR_Values<OTG_FS_HOST::FS_HCINT6, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT6_DTERR_Values<OTG_FS_HOST::FS_HCINT6, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT6_DTERR_Values<OTG_FS_HOST::FS_HCINT6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT6Pack  = Register<0x500005C8, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT6Base, T...> ;

  struct OTG_FS_HOSTFS_HCINT7Base {} ;

  struct FS_HCINT7 : public RegisterBase<0x500005E8, 32, ReadWriteMode>
  {
    using XFRC = OTG_FS_HOST_FS_HCINT7_XFRC_Values<OTG_FS_HOST::FS_HCINT7, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using CHH = OTG_FS_HOST_FS_HCINT7_CHH_Values<OTG_FS_HOST::FS_HCINT7, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using STALL = OTG_FS_HOST_FS_HCINT7_STALL_Values<OTG_FS_HOST::FS_HCINT7, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using NAK = OTG_FS_HOST_FS_HCINT7_NAK_Values<OTG_FS_HOST::FS_HCINT7, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using ACK = OTG_FS_HOST_FS_HCINT7_ACK_Values<OTG_FS_HOST::FS_HCINT7, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using TXERR = OTG_FS_HOST_FS_HCINT7_TXERR_Values<OTG_FS_HOST::FS_HCINT7, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using BBERR = OTG_FS_HOST_FS_HCINT7_BBERR_Values<OTG_FS_HOST::FS_HCINT7, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using FRMOR = OTG_FS_HOST_FS_HCINT7_FRMOR_Values<OTG_FS_HOST::FS_HCINT7, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using DTERR = OTG_FS_HOST_FS_HCINT7_DTERR_Values<OTG_FS_HOST::FS_HCINT7, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINT7_DTERR_Values<OTG_FS_HOST::FS_HCINT7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINT7Pack  = Register<0x500005E8, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINT7Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK0Base {} ;

  struct FS_HCINTMSK0 : public RegisterBase<0x5000050C, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK0_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK0, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK0_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK0, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK0_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK0, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK0_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK0, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK0_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK0, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK0_NYET_Values<OTG_FS_HOST::FS_HCINTMSK0, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK0_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK0, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK0_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK0, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK0_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK0, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK0_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK0, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK0_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK0Pack  = Register<0x5000050C, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK0Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK1Base {} ;

  struct FS_HCINTMSK1 : public RegisterBase<0x5000052C, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK1_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK1, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK1_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK1, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK1_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK1, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK1_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK1, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK1_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK1, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK1_NYET_Values<OTG_FS_HOST::FS_HCINTMSK1, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK1_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK1, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK1_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK1, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK1_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK1, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK1_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK1, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK1_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK1Pack  = Register<0x5000052C, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK1Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK2Base {} ;

  struct FS_HCINTMSK2 : public RegisterBase<0x5000054C, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK2_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK2, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK2_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK2, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK2_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK2, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK2_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK2, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK2_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK2, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK2_NYET_Values<OTG_FS_HOST::FS_HCINTMSK2, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK2_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK2, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK2_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK2, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK2_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK2, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK2_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK2, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK2_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK2Pack  = Register<0x5000054C, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK2Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK3Base {} ;

  struct FS_HCINTMSK3 : public RegisterBase<0x5000056C, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK3_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK3, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK3_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK3, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK3_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK3, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK3_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK3, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK3_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK3, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK3_NYET_Values<OTG_FS_HOST::FS_HCINTMSK3, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK3_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK3, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK3_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK3, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK3_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK3, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK3_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK3, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK3_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK3Pack  = Register<0x5000056C, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK3Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK4Base {} ;

  struct FS_HCINTMSK4 : public RegisterBase<0x5000058C, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK4_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK4, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK4_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK4, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK4_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK4, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK4_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK4, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK4_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK4, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK4_NYET_Values<OTG_FS_HOST::FS_HCINTMSK4, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK4_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK4, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK4_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK4, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK4_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK4, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK4_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK4, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK4_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK4Pack  = Register<0x5000058C, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK4Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK5Base {} ;

  struct FS_HCINTMSK5 : public RegisterBase<0x500005AC, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK5_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK5, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK5_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK5, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK5_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK5, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK5_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK5, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK5_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK5, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK5_NYET_Values<OTG_FS_HOST::FS_HCINTMSK5, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK5_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK5, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK5_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK5, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK5_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK5, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK5_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK5, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK5_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK5Pack  = Register<0x500005AC, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK5Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK6Base {} ;

  struct FS_HCINTMSK6 : public RegisterBase<0x500005CC, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK6_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK6, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK6_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK6, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK6_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK6, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK6_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK6, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK6_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK6, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK6_NYET_Values<OTG_FS_HOST::FS_HCINTMSK6, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK6_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK6, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK6_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK6, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK6_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK6, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK6_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK6, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK6_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK6Pack  = Register<0x500005CC, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK6Base, T...> ;

  struct OTG_FS_HOSTFS_HCINTMSK7Base {} ;

  struct FS_HCINTMSK7 : public RegisterBase<0x500005EC, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_HOST_FS_HCINTMSK7_XFRCM_Values<OTG_FS_HOST::FS_HCINTMSK7, 0, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using CHHM = OTG_FS_HOST_FS_HCINTMSK7_CHHM_Values<OTG_FS_HOST::FS_HCINTMSK7, 1, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using STALLM = OTG_FS_HOST_FS_HCINTMSK7_STALLM_Values<OTG_FS_HOST::FS_HCINTMSK7, 3, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using NAKM = OTG_FS_HOST_FS_HCINTMSK7_NAKM_Values<OTG_FS_HOST::FS_HCINTMSK7, 4, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using ACKM = OTG_FS_HOST_FS_HCINTMSK7_ACKM_Values<OTG_FS_HOST::FS_HCINTMSK7, 5, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using NYET = OTG_FS_HOST_FS_HCINTMSK7_NYET_Values<OTG_FS_HOST::FS_HCINTMSK7, 6, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using TXERRM = OTG_FS_HOST_FS_HCINTMSK7_TXERRM_Values<OTG_FS_HOST::FS_HCINTMSK7, 7, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using BBERRM = OTG_FS_HOST_FS_HCINTMSK7_BBERRM_Values<OTG_FS_HOST::FS_HCINTMSK7, 8, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using FRMORM = OTG_FS_HOST_FS_HCINTMSK7_FRMORM_Values<OTG_FS_HOST::FS_HCINTMSK7, 9, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using DTERRM = OTG_FS_HOST_FS_HCINTMSK7_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK7, 10, 1, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCINTMSK7_DTERRM_Values<OTG_FS_HOST::FS_HCINTMSK7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCINTMSK7Pack  = Register<0x500005EC, 32, ReadWriteMode, OTG_FS_HOSTFS_HCINTMSK7Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ0Base {} ;

  struct FS_HCTSIZ0 : public RegisterBase<0x50000510, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ0_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ0, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ0Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ0_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ0, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ0Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ0_DPID_Values<OTG_FS_HOST::FS_HCTSIZ0, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ0Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ0_DPID_Values<OTG_FS_HOST::FS_HCTSIZ0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ0Pack  = Register<0x50000510, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ0Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ1Base {} ;

  struct FS_HCTSIZ1 : public RegisterBase<0x50000530, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ1_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ1, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ1Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ1_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ1, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ1Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ1_DPID_Values<OTG_FS_HOST::FS_HCTSIZ1, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ1Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ1_DPID_Values<OTG_FS_HOST::FS_HCTSIZ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ1Pack  = Register<0x50000530, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ1Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ2Base {} ;

  struct FS_HCTSIZ2 : public RegisterBase<0x50000550, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ2_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ2, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ2Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ2_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ2, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ2Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ2_DPID_Values<OTG_FS_HOST::FS_HCTSIZ2, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ2Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ2_DPID_Values<OTG_FS_HOST::FS_HCTSIZ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ2Pack  = Register<0x50000550, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ2Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ3Base {} ;

  struct FS_HCTSIZ3 : public RegisterBase<0x50000570, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ3_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ3, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ3Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ3_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ3, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ3Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ3_DPID_Values<OTG_FS_HOST::FS_HCTSIZ3, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ3Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ3_DPID_Values<OTG_FS_HOST::FS_HCTSIZ3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ3Pack  = Register<0x50000570, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ3Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ4Base {} ;

  struct FS_HCTSIZ4 : public RegisterBase<0x50000590, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ4_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ4, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ4Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ4_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ4, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ4Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ4_DPID_Values<OTG_FS_HOST::FS_HCTSIZ4, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ4Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ4_DPID_Values<OTG_FS_HOST::FS_HCTSIZ4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ4Pack  = Register<0x50000590, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ4Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ5Base {} ;

  struct FS_HCTSIZ5 : public RegisterBase<0x500005B0, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ5_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ5, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ5Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ5_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ5, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ5Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ5_DPID_Values<OTG_FS_HOST::FS_HCTSIZ5, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ5Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ5_DPID_Values<OTG_FS_HOST::FS_HCTSIZ5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ5Pack  = Register<0x500005B0, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ5Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ6Base {} ;

  struct FS_HCTSIZ6 : public RegisterBase<0x500005D0, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ6_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ6, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ6Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ6_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ6, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ6Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ6_DPID_Values<OTG_FS_HOST::FS_HCTSIZ6, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ6Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ6_DPID_Values<OTG_FS_HOST::FS_HCTSIZ6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ6Pack  = Register<0x500005D0, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ6Base, T...> ;

  struct OTG_FS_HOSTFS_HCTSIZ7Base {} ;

  struct FS_HCTSIZ7 : public RegisterBase<0x500005F0, 32, ReadWriteMode>
  {
    using XFRSIZ = OTG_FS_HOST_FS_HCTSIZ7_XFRSIZ_Values<OTG_FS_HOST::FS_HCTSIZ7, 0, 19, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ7Base> ;
    using PKTCNT = OTG_FS_HOST_FS_HCTSIZ7_PKTCNT_Values<OTG_FS_HOST::FS_HCTSIZ7, 19, 10, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ7Base> ;
    using DPID = OTG_FS_HOST_FS_HCTSIZ7_DPID_Values<OTG_FS_HOST::FS_HCTSIZ7, 29, 2, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ7Base> ;
    using FieldValues = OTG_FS_HOST_FS_HCTSIZ7_DPID_Values<OTG_FS_HOST::FS_HCTSIZ7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS_HCTSIZ7Pack  = Register<0x500005F0, 32, ReadWriteMode, OTG_FS_HOSTFS_HCTSIZ7Base, T...> ;

} ;

#endif //#if !defined(OTGFSHOSTREGISTERS_HPP)
