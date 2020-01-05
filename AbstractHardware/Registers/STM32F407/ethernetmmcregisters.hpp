/*******************************************************************************
* Filename      : ethernetmmcregisters.hpp
*
* Details       : Ethernet: MAC management counters. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETMMCREGISTERS_HPP)
#define ETHERNETMMCREGISTERS_HPP

#include "ethernetmmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Ethernet_MMC
{
  struct Ethernet_MMCMMCCRBase {} ;

  struct MMCCR : public RegisterBase<0x40028100, 32, ReadWriteMode>
  {
    using CR = Ethernet_MMC_MMCCR_CR_Values<Ethernet_MMC::MMCCR, 0, 1, ReadWriteMode, Ethernet_MMCMMCCRBase> ;
    using CSR = Ethernet_MMC_MMCCR_CSR_Values<Ethernet_MMC::MMCCR, 1, 1, ReadWriteMode, Ethernet_MMCMMCCRBase> ;
    using ROR = Ethernet_MMC_MMCCR_ROR_Values<Ethernet_MMC::MMCCR, 2, 1, ReadWriteMode, Ethernet_MMCMMCCRBase> ;
    using MCF = Ethernet_MMC_MMCCR_MCF_Values<Ethernet_MMC::MMCCR, 3, 1, ReadWriteMode, Ethernet_MMCMMCCRBase> ;
    using MCP = Ethernet_MMC_MMCCR_MCP_Values<Ethernet_MMC::MMCCR, 4, 1, ReadWriteMode, Ethernet_MMCMMCCRBase> ;
    using MCFHP = Ethernet_MMC_MMCCR_MCFHP_Values<Ethernet_MMC::MMCCR, 5, 1, ReadWriteMode, Ethernet_MMCMMCCRBase> ;
    using FieldValues = Ethernet_MMC_MMCCR_MCFHP_Values<Ethernet_MMC::MMCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCCRPack  = Register<0x40028100, 32, ReadWriteMode, Ethernet_MMCMMCCRBase, T...> ;

  struct Ethernet_MMCMMCRIRBase {} ;

  struct MMCRIR : public RegisterBase<0x40028104, 32, ReadWriteMode>
  {
    using RFCES = Ethernet_MMC_MMCRIR_RFCES_Values<Ethernet_MMC::MMCRIR, 5, 1, ReadWriteMode, Ethernet_MMCMMCRIRBase> ;
    using RFAES = Ethernet_MMC_MMCRIR_RFAES_Values<Ethernet_MMC::MMCRIR, 6, 1, ReadWriteMode, Ethernet_MMCMMCRIRBase> ;
    using RGUFS = Ethernet_MMC_MMCRIR_RGUFS_Values<Ethernet_MMC::MMCRIR, 17, 1, ReadWriteMode, Ethernet_MMCMMCRIRBase> ;
    using FieldValues = Ethernet_MMC_MMCRIR_RGUFS_Values<Ethernet_MMC::MMCRIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCRIRPack  = Register<0x40028104, 32, ReadWriteMode, Ethernet_MMCMMCRIRBase, T...> ;

  struct Ethernet_MMCMMCTIRBase {} ;

  struct MMCTIR : public RegisterBase<0x40028108, 32, ReadMode>
  {
    using TGFSCS = Ethernet_MMC_MMCTIR_TGFSCS_Values<Ethernet_MMC::MMCTIR, 14, 1, ReadMode, Ethernet_MMCMMCTIRBase> ;
    using TGFMSCS = Ethernet_MMC_MMCTIR_TGFMSCS_Values<Ethernet_MMC::MMCTIR, 15, 1, ReadMode, Ethernet_MMCMMCTIRBase> ;
    using TGFS = Ethernet_MMC_MMCTIR_TGFS_Values<Ethernet_MMC::MMCTIR, 21, 1, ReadMode, Ethernet_MMCMMCTIRBase> ;
    using FieldValues = Ethernet_MMC_MMCTIR_TGFS_Values<Ethernet_MMC::MMCTIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCTIRPack  = Register<0x40028108, 32, ReadMode, Ethernet_MMCMMCTIRBase, T...> ;

  struct Ethernet_MMCMMCRIMRBase {} ;

  struct MMCRIMR : public RegisterBase<0x4002810C, 32, ReadWriteMode>
  {
    using RFCEM = Ethernet_MMC_MMCRIMR_RFCEM_Values<Ethernet_MMC::MMCRIMR, 5, 1, ReadWriteMode, Ethernet_MMCMMCRIMRBase> ;
    using RFAEM = Ethernet_MMC_MMCRIMR_RFAEM_Values<Ethernet_MMC::MMCRIMR, 6, 1, ReadWriteMode, Ethernet_MMCMMCRIMRBase> ;
    using RGUFM = Ethernet_MMC_MMCRIMR_RGUFM_Values<Ethernet_MMC::MMCRIMR, 17, 1, ReadWriteMode, Ethernet_MMCMMCRIMRBase> ;
    using FieldValues = Ethernet_MMC_MMCRIMR_RGUFM_Values<Ethernet_MMC::MMCRIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCRIMRPack  = Register<0x4002810C, 32, ReadWriteMode, Ethernet_MMCMMCRIMRBase, T...> ;

  struct Ethernet_MMCMMCTIMRBase {} ;

  struct MMCTIMR : public RegisterBase<0x40028110, 32, ReadWriteMode>
  {
    using TGFSCM = Ethernet_MMC_MMCTIMR_TGFSCM_Values<Ethernet_MMC::MMCTIMR, 14, 1, ReadWriteMode, Ethernet_MMCMMCTIMRBase> ;
    using TGFMSCM = Ethernet_MMC_MMCTIMR_TGFMSCM_Values<Ethernet_MMC::MMCTIMR, 15, 1, ReadWriteMode, Ethernet_MMCMMCTIMRBase> ;
    using TGFM = Ethernet_MMC_MMCTIMR_TGFM_Values<Ethernet_MMC::MMCTIMR, 16, 1, ReadWriteMode, Ethernet_MMCMMCTIMRBase> ;
    using FieldValues = Ethernet_MMC_MMCTIMR_TGFM_Values<Ethernet_MMC::MMCTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCTIMRPack  = Register<0x40028110, 32, ReadWriteMode, Ethernet_MMCMMCTIMRBase, T...> ;

  struct Ethernet_MMCMMCTGFSCCRBase {} ;

  struct MMCTGFSCCR : public RegisterBase<0x4002814C, 32, ReadMode>
  {
    using TGFSCC = Ethernet_MMC_MMCTGFSCCR_TGFSCC_Values<Ethernet_MMC::MMCTGFSCCR, 0, 32, ReadMode, Ethernet_MMCMMCTGFSCCRBase> ;
    using FieldValues = Ethernet_MMC_MMCTGFSCCR_TGFSCC_Values<Ethernet_MMC::MMCTGFSCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCTGFSCCRPack  = Register<0x4002814C, 32, ReadMode, Ethernet_MMCMMCTGFSCCRBase, T...> ;

  struct Ethernet_MMCMMCTGFMSCCRBase {} ;

  struct MMCTGFMSCCR : public RegisterBase<0x40028150, 32, ReadMode>
  {
    using TGFMSCC = Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_Values<Ethernet_MMC::MMCTGFMSCCR, 0, 32, ReadMode, Ethernet_MMCMMCTGFMSCCRBase> ;
    using FieldValues = Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_Values<Ethernet_MMC::MMCTGFMSCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCTGFMSCCRPack  = Register<0x40028150, 32, ReadMode, Ethernet_MMCMMCTGFMSCCRBase, T...> ;

  struct Ethernet_MMCMMCTGFCRBase {} ;

  struct MMCTGFCR : public RegisterBase<0x40028168, 32, ReadMode>
  {
    using TGFC = Ethernet_MMC_MMCTGFCR_TGFC_Values<Ethernet_MMC::MMCTGFCR, 0, 32, ReadMode, Ethernet_MMCMMCTGFCRBase> ;
    using FieldValues = Ethernet_MMC_MMCTGFCR_TGFC_Values<Ethernet_MMC::MMCTGFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCTGFCRPack  = Register<0x40028168, 32, ReadMode, Ethernet_MMCMMCTGFCRBase, T...> ;

  struct Ethernet_MMCMMCRFCECRBase {} ;

  struct MMCRFCECR : public RegisterBase<0x40028194, 32, ReadMode>
  {
    using RFCFC = Ethernet_MMC_MMCRFCECR_RFCFC_Values<Ethernet_MMC::MMCRFCECR, 0, 32, ReadMode, Ethernet_MMCMMCRFCECRBase> ;
    using FieldValues = Ethernet_MMC_MMCRFCECR_RFCFC_Values<Ethernet_MMC::MMCRFCECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCRFCECRPack  = Register<0x40028194, 32, ReadMode, Ethernet_MMCMMCRFCECRBase, T...> ;

  struct Ethernet_MMCMMCRFAECRBase {} ;

  struct MMCRFAECR : public RegisterBase<0x40028198, 32, ReadMode>
  {
    using RFAEC = Ethernet_MMC_MMCRFAECR_RFAEC_Values<Ethernet_MMC::MMCRFAECR, 0, 32, ReadMode, Ethernet_MMCMMCRFAECRBase> ;
    using FieldValues = Ethernet_MMC_MMCRFAECR_RFAEC_Values<Ethernet_MMC::MMCRFAECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCRFAECRPack  = Register<0x40028198, 32, ReadMode, Ethernet_MMCMMCRFAECRBase, T...> ;

  struct Ethernet_MMCMMCRGUFCRBase {} ;

  struct MMCRGUFCR : public RegisterBase<0x400281C4, 32, ReadMode>
  {
    using RGUFC = Ethernet_MMC_MMCRGUFCR_RGUFC_Values<Ethernet_MMC::MMCRGUFCR, 0, 32, ReadMode, Ethernet_MMCMMCRGUFCRBase> ;
    using FieldValues = Ethernet_MMC_MMCRGUFCR_RGUFC_Values<Ethernet_MMC::MMCRGUFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMCRGUFCRPack  = Register<0x400281C4, 32, ReadMode, Ethernet_MMCMMCRGUFCRBase, T...> ;

} ;

#endif //#if !defined(ETHERNETMMCREGISTERS_HPP)
