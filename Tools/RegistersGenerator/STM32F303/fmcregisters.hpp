/*******************************************************************************
* Filename      : fmcregisters.hpp
*
* Details       : Flexible memory controller. This header file is auto-generated
*                 for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(FMCREGISTERS_HPP)
#define FMCREGISTERS_HPP

#include "fmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FMC
{
  struct FMCBCR1Base {} ;

  struct BCR1 : public RegisterBase<0xA0000400, 32, ReadWriteMode>
  {
    using CCLKEN = FMC_BCR1_CCLKEN_Values<FMC::BCR1, 20, 1, ReadWriteMode, FMCBCR1Base> ;
    using CBURSTRW = FMC_BCR1_CBURSTRW_Values<FMC::BCR1, 19, 1, ReadWriteMode, FMCBCR1Base> ;
    using ASYNCWAIT = FMC_BCR1_ASYNCWAIT_Values<FMC::BCR1, 15, 1, ReadWriteMode, FMCBCR1Base> ;
    using EXTMOD = FMC_BCR1_EXTMOD_Values<FMC::BCR1, 14, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITEN = FMC_BCR1_WAITEN_Values<FMC::BCR1, 13, 1, ReadWriteMode, FMCBCR1Base> ;
    using WREN = FMC_BCR1_WREN_Values<FMC::BCR1, 12, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITCFG = FMC_BCR1_WAITCFG_Values<FMC::BCR1, 11, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITPOL = FMC_BCR1_WAITPOL_Values<FMC::BCR1, 9, 1, ReadWriteMode, FMCBCR1Base> ;
    using BURSTEN = FMC_BCR1_BURSTEN_Values<FMC::BCR1, 8, 1, ReadWriteMode, FMCBCR1Base> ;
    using FACCEN = FMC_BCR1_FACCEN_Values<FMC::BCR1, 6, 1, ReadWriteMode, FMCBCR1Base> ;
    using MWID = FMC_BCR1_MWID_Values<FMC::BCR1, 4, 2, ReadWriteMode, FMCBCR1Base> ;
    using MTYP = FMC_BCR1_MTYP_Values<FMC::BCR1, 2, 2, ReadWriteMode, FMCBCR1Base> ;
    using MUXEN = FMC_BCR1_MUXEN_Values<FMC::BCR1, 1, 1, ReadWriteMode, FMCBCR1Base> ;
    using MBKEN = FMC_BCR1_MBKEN_Values<FMC::BCR1, 0, 1, ReadWriteMode, FMCBCR1Base> ;
    using FieldValues = FMC_BCR1_MBKEN_Values<FMC::BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR1Pack  = Register<0xA0000400, 32, ReadWriteMode, FMCBCR1Base, T...> ;

  struct FMCBTR1Base {} ;

  struct BTR1 : public RegisterBase<0xA0000404, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BTR1_ACCMOD_Values<FMC::BTR1, 28, 2, ReadWriteMode, FMCBTR1Base> ;
    using DATLAT = FMC_BTR1_DATLAT_Values<FMC::BTR1, 24, 4, ReadWriteMode, FMCBTR1Base> ;
    using CLKDIV = FMC_BTR1_CLKDIV_Values<FMC::BTR1, 20, 4, ReadWriteMode, FMCBTR1Base> ;
    using BUSTURN = FMC_BTR1_BUSTURN_Values<FMC::BTR1, 16, 4, ReadWriteMode, FMCBTR1Base> ;
    using DATAST = FMC_BTR1_DATAST_Values<FMC::BTR1, 8, 8, ReadWriteMode, FMCBTR1Base> ;
    using ADDHLD = FMC_BTR1_ADDHLD_Values<FMC::BTR1, 4, 4, ReadWriteMode, FMCBTR1Base> ;
    using ADDSET = FMC_BTR1_ADDSET_Values<FMC::BTR1, 0, 4, ReadWriteMode, FMCBTR1Base> ;
    using FieldValues = FMC_BTR1_ADDSET_Values<FMC::BTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR1Pack  = Register<0xA0000404, 32, ReadWriteMode, FMCBTR1Base, T...> ;

  struct FMCBCR2Base {} ;

  struct BCR2 : public RegisterBase<0xA0000408, 32, ReadWriteMode>
  {
    using CBURSTRW = FMC_BCR2_CBURSTRW_Values<FMC::BCR2, 19, 1, ReadWriteMode, FMCBCR2Base> ;
    using ASYNCWAIT = FMC_BCR2_ASYNCWAIT_Values<FMC::BCR2, 15, 1, ReadWriteMode, FMCBCR2Base> ;
    using EXTMOD = FMC_BCR2_EXTMOD_Values<FMC::BCR2, 14, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITEN = FMC_BCR2_WAITEN_Values<FMC::BCR2, 13, 1, ReadWriteMode, FMCBCR2Base> ;
    using WREN = FMC_BCR2_WREN_Values<FMC::BCR2, 12, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITCFG = FMC_BCR2_WAITCFG_Values<FMC::BCR2, 11, 1, ReadWriteMode, FMCBCR2Base> ;
    using WRAPMOD = FMC_BCR2_WRAPMOD_Values<FMC::BCR2, 10, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITPOL = FMC_BCR2_WAITPOL_Values<FMC::BCR2, 9, 1, ReadWriteMode, FMCBCR2Base> ;
    using BURSTEN = FMC_BCR2_BURSTEN_Values<FMC::BCR2, 8, 1, ReadWriteMode, FMCBCR2Base> ;
    using FACCEN = FMC_BCR2_FACCEN_Values<FMC::BCR2, 6, 1, ReadWriteMode, FMCBCR2Base> ;
    using MWID = FMC_BCR2_MWID_Values<FMC::BCR2, 4, 2, ReadWriteMode, FMCBCR2Base> ;
    using MTYP = FMC_BCR2_MTYP_Values<FMC::BCR2, 2, 2, ReadWriteMode, FMCBCR2Base> ;
    using MUXEN = FMC_BCR2_MUXEN_Values<FMC::BCR2, 1, 1, ReadWriteMode, FMCBCR2Base> ;
    using MBKEN = FMC_BCR2_MBKEN_Values<FMC::BCR2, 0, 1, ReadWriteMode, FMCBCR2Base> ;
    using FieldValues = FMC_BCR2_MBKEN_Values<FMC::BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR2Pack  = Register<0xA0000408, 32, ReadWriteMode, FMCBCR2Base, T...> ;

  struct FMCBTR2Base {} ;

  struct BTR2 : public RegisterBase<0xA000040C, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BTR2_ACCMOD_Values<FMC::BTR2, 28, 2, ReadWriteMode, FMCBTR2Base> ;
    using DATLAT = FMC_BTR2_DATLAT_Values<FMC::BTR2, 24, 4, ReadWriteMode, FMCBTR2Base> ;
    using CLKDIV = FMC_BTR2_CLKDIV_Values<FMC::BTR2, 20, 4, ReadWriteMode, FMCBTR2Base> ;
    using BUSTURN = FMC_BTR2_BUSTURN_Values<FMC::BTR2, 16, 4, ReadWriteMode, FMCBTR2Base> ;
    using DATAST = FMC_BTR2_DATAST_Values<FMC::BTR2, 8, 8, ReadWriteMode, FMCBTR2Base> ;
    using ADDHLD = FMC_BTR2_ADDHLD_Values<FMC::BTR2, 4, 4, ReadWriteMode, FMCBTR2Base> ;
    using ADDSET = FMC_BTR2_ADDSET_Values<FMC::BTR2, 0, 4, ReadWriteMode, FMCBTR2Base> ;
    using FieldValues = FMC_BTR2_ADDSET_Values<FMC::BTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR2Pack  = Register<0xA000040C, 32, ReadWriteMode, FMCBTR2Base, T...> ;

  struct FMCBCR3Base {} ;

  struct BCR3 : public RegisterBase<0xA0000410, 32, ReadWriteMode>
  {
    using CBURSTRW = FMC_BCR3_CBURSTRW_Values<FMC::BCR3, 19, 1, ReadWriteMode, FMCBCR3Base> ;
    using ASYNCWAIT = FMC_BCR3_ASYNCWAIT_Values<FMC::BCR3, 15, 1, ReadWriteMode, FMCBCR3Base> ;
    using EXTMOD = FMC_BCR3_EXTMOD_Values<FMC::BCR3, 14, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITEN = FMC_BCR3_WAITEN_Values<FMC::BCR3, 13, 1, ReadWriteMode, FMCBCR3Base> ;
    using WREN = FMC_BCR3_WREN_Values<FMC::BCR3, 12, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITCFG = FMC_BCR3_WAITCFG_Values<FMC::BCR3, 11, 1, ReadWriteMode, FMCBCR3Base> ;
    using WRAPMOD = FMC_BCR3_WRAPMOD_Values<FMC::BCR3, 10, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITPOL = FMC_BCR3_WAITPOL_Values<FMC::BCR3, 9, 1, ReadWriteMode, FMCBCR3Base> ;
    using BURSTEN = FMC_BCR3_BURSTEN_Values<FMC::BCR3, 8, 1, ReadWriteMode, FMCBCR3Base> ;
    using FACCEN = FMC_BCR3_FACCEN_Values<FMC::BCR3, 6, 1, ReadWriteMode, FMCBCR3Base> ;
    using MWID = FMC_BCR3_MWID_Values<FMC::BCR3, 4, 2, ReadWriteMode, FMCBCR3Base> ;
    using MTYP = FMC_BCR3_MTYP_Values<FMC::BCR3, 2, 2, ReadWriteMode, FMCBCR3Base> ;
    using MUXEN = FMC_BCR3_MUXEN_Values<FMC::BCR3, 1, 1, ReadWriteMode, FMCBCR3Base> ;
    using MBKEN = FMC_BCR3_MBKEN_Values<FMC::BCR3, 0, 1, ReadWriteMode, FMCBCR3Base> ;
    using FieldValues = FMC_BCR3_MBKEN_Values<FMC::BCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR3Pack  = Register<0xA0000410, 32, ReadWriteMode, FMCBCR3Base, T...> ;

  struct FMCBTR3Base {} ;

  struct BTR3 : public RegisterBase<0xA0000414, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BTR3_ACCMOD_Values<FMC::BTR3, 28, 2, ReadWriteMode, FMCBTR3Base> ;
    using DATLAT = FMC_BTR3_DATLAT_Values<FMC::BTR3, 24, 4, ReadWriteMode, FMCBTR3Base> ;
    using CLKDIV = FMC_BTR3_CLKDIV_Values<FMC::BTR3, 20, 4, ReadWriteMode, FMCBTR3Base> ;
    using BUSTURN = FMC_BTR3_BUSTURN_Values<FMC::BTR3, 16, 4, ReadWriteMode, FMCBTR3Base> ;
    using DATAST = FMC_BTR3_DATAST_Values<FMC::BTR3, 8, 8, ReadWriteMode, FMCBTR3Base> ;
    using ADDHLD = FMC_BTR3_ADDHLD_Values<FMC::BTR3, 4, 4, ReadWriteMode, FMCBTR3Base> ;
    using ADDSET = FMC_BTR3_ADDSET_Values<FMC::BTR3, 0, 4, ReadWriteMode, FMCBTR3Base> ;
    using FieldValues = FMC_BTR3_ADDSET_Values<FMC::BTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR3Pack  = Register<0xA0000414, 32, ReadWriteMode, FMCBTR3Base, T...> ;

  struct FMCBCR4Base {} ;

  struct BCR4 : public RegisterBase<0xA0000418, 32, ReadWriteMode>
  {
    using CBURSTRW = FMC_BCR4_CBURSTRW_Values<FMC::BCR4, 19, 1, ReadWriteMode, FMCBCR4Base> ;
    using ASYNCWAIT = FMC_BCR4_ASYNCWAIT_Values<FMC::BCR4, 15, 1, ReadWriteMode, FMCBCR4Base> ;
    using EXTMOD = FMC_BCR4_EXTMOD_Values<FMC::BCR4, 14, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITEN = FMC_BCR4_WAITEN_Values<FMC::BCR4, 13, 1, ReadWriteMode, FMCBCR4Base> ;
    using WREN = FMC_BCR4_WREN_Values<FMC::BCR4, 12, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITCFG = FMC_BCR4_WAITCFG_Values<FMC::BCR4, 11, 1, ReadWriteMode, FMCBCR4Base> ;
    using WRAPMOD = FMC_BCR4_WRAPMOD_Values<FMC::BCR4, 10, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITPOL = FMC_BCR4_WAITPOL_Values<FMC::BCR4, 9, 1, ReadWriteMode, FMCBCR4Base> ;
    using BURSTEN = FMC_BCR4_BURSTEN_Values<FMC::BCR4, 8, 1, ReadWriteMode, FMCBCR4Base> ;
    using FACCEN = FMC_BCR4_FACCEN_Values<FMC::BCR4, 6, 1, ReadWriteMode, FMCBCR4Base> ;
    using MWID = FMC_BCR4_MWID_Values<FMC::BCR4, 4, 2, ReadWriteMode, FMCBCR4Base> ;
    using MTYP = FMC_BCR4_MTYP_Values<FMC::BCR4, 2, 2, ReadWriteMode, FMCBCR4Base> ;
    using MUXEN = FMC_BCR4_MUXEN_Values<FMC::BCR4, 1, 1, ReadWriteMode, FMCBCR4Base> ;
    using MBKEN = FMC_BCR4_MBKEN_Values<FMC::BCR4, 0, 1, ReadWriteMode, FMCBCR4Base> ;
    using FieldValues = FMC_BCR4_MBKEN_Values<FMC::BCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR4Pack  = Register<0xA0000418, 32, ReadWriteMode, FMCBCR4Base, T...> ;

  struct FMCBTR4Base {} ;

  struct BTR4 : public RegisterBase<0xA000041C, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BTR4_ACCMOD_Values<FMC::BTR4, 28, 2, ReadWriteMode, FMCBTR4Base> ;
    using DATLAT = FMC_BTR4_DATLAT_Values<FMC::BTR4, 24, 4, ReadWriteMode, FMCBTR4Base> ;
    using CLKDIV = FMC_BTR4_CLKDIV_Values<FMC::BTR4, 20, 4, ReadWriteMode, FMCBTR4Base> ;
    using BUSTURN = FMC_BTR4_BUSTURN_Values<FMC::BTR4, 16, 4, ReadWriteMode, FMCBTR4Base> ;
    using DATAST = FMC_BTR4_DATAST_Values<FMC::BTR4, 8, 8, ReadWriteMode, FMCBTR4Base> ;
    using ADDHLD = FMC_BTR4_ADDHLD_Values<FMC::BTR4, 4, 4, ReadWriteMode, FMCBTR4Base> ;
    using ADDSET = FMC_BTR4_ADDSET_Values<FMC::BTR4, 0, 4, ReadWriteMode, FMCBTR4Base> ;
    using FieldValues = FMC_BTR4_ADDSET_Values<FMC::BTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR4Pack  = Register<0xA000041C, 32, ReadWriteMode, FMCBTR4Base, T...> ;

  struct FMCPCR2Base {} ;

  struct PCR2 : public RegisterBase<0xA0000460, 32, ReadWriteMode>
  {
    using ECCPS = FMC_PCR2_ECCPS_Values<FMC::PCR2, 17, 3, ReadWriteMode, FMCPCR2Base> ;
    using TAR = FMC_PCR2_TAR_Values<FMC::PCR2, 13, 4, ReadWriteMode, FMCPCR2Base> ;
    using TCLR = FMC_PCR2_TCLR_Values<FMC::PCR2, 9, 4, ReadWriteMode, FMCPCR2Base> ;
    using ECCEN = FMC_PCR2_ECCEN_Values<FMC::PCR2, 6, 1, ReadWriteMode, FMCPCR2Base> ;
    using PWID = FMC_PCR2_PWID_Values<FMC::PCR2, 4, 2, ReadWriteMode, FMCPCR2Base> ;
    using PTYP = FMC_PCR2_PTYP_Values<FMC::PCR2, 3, 1, ReadWriteMode, FMCPCR2Base> ;
    using PBKEN = FMC_PCR2_PBKEN_Values<FMC::PCR2, 2, 1, ReadWriteMode, FMCPCR2Base> ;
    using PWAITEN = FMC_PCR2_PWAITEN_Values<FMC::PCR2, 1, 1, ReadWriteMode, FMCPCR2Base> ;
    using FieldValues = FMC_PCR2_PWAITEN_Values<FMC::PCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCR2Pack  = Register<0xA0000460, 32, ReadWriteMode, FMCPCR2Base, T...> ;

  struct FMCSR2Base {} ;

  struct SR2 : public RegisterBase<0xA0000464, 32, ReadWriteMode>
  {
    using FEMPT = FMC_SR2_FEMPT_Values<FMC::SR2, 6, 1, ReadMode, FMCSR2Base> ;
    using IFEN = FMC_SR2_IFEN_Values<FMC::SR2, 5, 1, ReadWriteMode, FMCSR2Base> ;
    using ILEN = FMC_SR2_ILEN_Values<FMC::SR2, 4, 1, ReadWriteMode, FMCSR2Base> ;
    using IREN = FMC_SR2_IREN_Values<FMC::SR2, 3, 1, ReadWriteMode, FMCSR2Base> ;
    using IFS = FMC_SR2_IFS_Values<FMC::SR2, 2, 1, ReadWriteMode, FMCSR2Base> ;
    using ILS = FMC_SR2_ILS_Values<FMC::SR2, 1, 1, ReadWriteMode, FMCSR2Base> ;
    using IRS = FMC_SR2_IRS_Values<FMC::SR2, 0, 1, ReadWriteMode, FMCSR2Base> ;
    using FieldValues = FMC_SR2_IRS_Values<FMC::SR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR2Pack  = Register<0xA0000464, 32, ReadWriteMode, FMCSR2Base, T...> ;

  struct FMCPMEM2Base {} ;

  struct PMEM2 : public RegisterBase<0xA0000468, 32, ReadWriteMode>
  {
    using MEMHIZx = FMC_PMEM2_MEMHIZx_Values<FMC::PMEM2, 24, 8, ReadWriteMode, FMCPMEM2Base> ;
    using MEMHOLDx = FMC_PMEM2_MEMHOLDx_Values<FMC::PMEM2, 16, 8, ReadWriteMode, FMCPMEM2Base> ;
    using MEMWAITx = FMC_PMEM2_MEMWAITx_Values<FMC::PMEM2, 8, 8, ReadWriteMode, FMCPMEM2Base> ;
    using MEMSETx = FMC_PMEM2_MEMSETx_Values<FMC::PMEM2, 0, 8, ReadWriteMode, FMCPMEM2Base> ;
    using FieldValues = FMC_PMEM2_MEMSETx_Values<FMC::PMEM2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEM2Pack  = Register<0xA0000468, 32, ReadWriteMode, FMCPMEM2Base, T...> ;

  struct FMCPATT2Base {} ;

  struct PATT2 : public RegisterBase<0xA000046C, 32, ReadWriteMode>
  {
    using ATTHIZx = FMC_PATT2_ATTHIZx_Values<FMC::PATT2, 24, 8, ReadWriteMode, FMCPATT2Base> ;
    using ATTHOLDx = FMC_PATT2_ATTHOLDx_Values<FMC::PATT2, 16, 8, ReadWriteMode, FMCPATT2Base> ;
    using ATTWAITx = FMC_PATT2_ATTWAITx_Values<FMC::PATT2, 8, 8, ReadWriteMode, FMCPATT2Base> ;
    using ATTSETx = FMC_PATT2_ATTSETx_Values<FMC::PATT2, 0, 8, ReadWriteMode, FMCPATT2Base> ;
    using FieldValues = FMC_PATT2_ATTSETx_Values<FMC::PATT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATT2Pack  = Register<0xA000046C, 32, ReadWriteMode, FMCPATT2Base, T...> ;

  struct FMCECCR2Base {} ;

  struct ECCR2 : public RegisterBase<0xA0000474, 32, ReadMode>
  {
    using ECCx = FMC_ECCR2_ECCx_Values<FMC::ECCR2, 0, 32, ReadMode, FMCECCR2Base> ;
    using FieldValues = FMC_ECCR2_ECCx_Values<FMC::ECCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCR2Pack  = Register<0xA0000474, 32, ReadMode, FMCECCR2Base, T...> ;

  struct FMCPCR3Base {} ;

  struct PCR3 : public RegisterBase<0xA0000480, 32, ReadWriteMode>
  {
    using ECCPS = FMC_PCR3_ECCPS_Values<FMC::PCR3, 17, 3, ReadWriteMode, FMCPCR3Base> ;
    using TAR = FMC_PCR3_TAR_Values<FMC::PCR3, 13, 4, ReadWriteMode, FMCPCR3Base> ;
    using TCLR = FMC_PCR3_TCLR_Values<FMC::PCR3, 9, 4, ReadWriteMode, FMCPCR3Base> ;
    using ECCEN = FMC_PCR3_ECCEN_Values<FMC::PCR3, 6, 1, ReadWriteMode, FMCPCR3Base> ;
    using PWID = FMC_PCR3_PWID_Values<FMC::PCR3, 4, 2, ReadWriteMode, FMCPCR3Base> ;
    using PTYP = FMC_PCR3_PTYP_Values<FMC::PCR3, 3, 1, ReadWriteMode, FMCPCR3Base> ;
    using PBKEN = FMC_PCR3_PBKEN_Values<FMC::PCR3, 2, 1, ReadWriteMode, FMCPCR3Base> ;
    using PWAITEN = FMC_PCR3_PWAITEN_Values<FMC::PCR3, 1, 1, ReadWriteMode, FMCPCR3Base> ;
    using FieldValues = FMC_PCR3_PWAITEN_Values<FMC::PCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCR3Pack  = Register<0xA0000480, 32, ReadWriteMode, FMCPCR3Base, T...> ;

  struct FMCSR3Base {} ;

  struct SR3 : public RegisterBase<0xA0000484, 32, ReadWriteMode>
  {
    using FEMPT = FMC_SR3_FEMPT_Values<FMC::SR3, 6, 1, ReadMode, FMCSR3Base> ;
    using IFEN = FMC_SR3_IFEN_Values<FMC::SR3, 5, 1, ReadWriteMode, FMCSR3Base> ;
    using ILEN = FMC_SR3_ILEN_Values<FMC::SR3, 4, 1, ReadWriteMode, FMCSR3Base> ;
    using IREN = FMC_SR3_IREN_Values<FMC::SR3, 3, 1, ReadWriteMode, FMCSR3Base> ;
    using IFS = FMC_SR3_IFS_Values<FMC::SR3, 2, 1, ReadWriteMode, FMCSR3Base> ;
    using ILS = FMC_SR3_ILS_Values<FMC::SR3, 1, 1, ReadWriteMode, FMCSR3Base> ;
    using IRS = FMC_SR3_IRS_Values<FMC::SR3, 0, 1, ReadWriteMode, FMCSR3Base> ;
    using FieldValues = FMC_SR3_IRS_Values<FMC::SR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR3Pack  = Register<0xA0000484, 32, ReadWriteMode, FMCSR3Base, T...> ;

  struct FMCPMEM3Base {} ;

  struct PMEM3 : public RegisterBase<0xA0000488, 32, ReadWriteMode>
  {
    using MEMHIZx = FMC_PMEM3_MEMHIZx_Values<FMC::PMEM3, 24, 8, ReadWriteMode, FMCPMEM3Base> ;
    using MEMHOLDx = FMC_PMEM3_MEMHOLDx_Values<FMC::PMEM3, 16, 8, ReadWriteMode, FMCPMEM3Base> ;
    using MEMWAITx = FMC_PMEM3_MEMWAITx_Values<FMC::PMEM3, 8, 8, ReadWriteMode, FMCPMEM3Base> ;
    using MEMSETx = FMC_PMEM3_MEMSETx_Values<FMC::PMEM3, 0, 8, ReadWriteMode, FMCPMEM3Base> ;
    using FieldValues = FMC_PMEM3_MEMSETx_Values<FMC::PMEM3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEM3Pack  = Register<0xA0000488, 32, ReadWriteMode, FMCPMEM3Base, T...> ;

  struct FMCPATT3Base {} ;

  struct PATT3 : public RegisterBase<0xA000048C, 32, ReadWriteMode>
  {
    using ATTHIZx = FMC_PATT3_ATTHIZx_Values<FMC::PATT3, 24, 8, ReadWriteMode, FMCPATT3Base> ;
    using ATTHOLDx = FMC_PATT3_ATTHOLDx_Values<FMC::PATT3, 16, 8, ReadWriteMode, FMCPATT3Base> ;
    using ATTWAITx = FMC_PATT3_ATTWAITx_Values<FMC::PATT3, 8, 8, ReadWriteMode, FMCPATT3Base> ;
    using ATTSETx = FMC_PATT3_ATTSETx_Values<FMC::PATT3, 0, 8, ReadWriteMode, FMCPATT3Base> ;
    using FieldValues = FMC_PATT3_ATTSETx_Values<FMC::PATT3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATT3Pack  = Register<0xA000048C, 32, ReadWriteMode, FMCPATT3Base, T...> ;

  struct FMCECCR3Base {} ;

  struct ECCR3 : public RegisterBase<0xA0000494, 32, ReadMode>
  {
    using ECCx = FMC_ECCR3_ECCx_Values<FMC::ECCR3, 0, 32, ReadMode, FMCECCR3Base> ;
    using FieldValues = FMC_ECCR3_ECCx_Values<FMC::ECCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCR3Pack  = Register<0xA0000494, 32, ReadMode, FMCECCR3Base, T...> ;

  struct FMCPCR4Base {} ;

  struct PCR4 : public RegisterBase<0xA00004A0, 32, ReadWriteMode>
  {
    using ECCPS = FMC_PCR4_ECCPS_Values<FMC::PCR4, 17, 3, ReadWriteMode, FMCPCR4Base> ;
    using TAR = FMC_PCR4_TAR_Values<FMC::PCR4, 13, 4, ReadWriteMode, FMCPCR4Base> ;
    using TCLR = FMC_PCR4_TCLR_Values<FMC::PCR4, 9, 4, ReadWriteMode, FMCPCR4Base> ;
    using ECCEN = FMC_PCR4_ECCEN_Values<FMC::PCR4, 6, 1, ReadWriteMode, FMCPCR4Base> ;
    using PWID = FMC_PCR4_PWID_Values<FMC::PCR4, 4, 2, ReadWriteMode, FMCPCR4Base> ;
    using PTYP = FMC_PCR4_PTYP_Values<FMC::PCR4, 3, 1, ReadWriteMode, FMCPCR4Base> ;
    using PBKEN = FMC_PCR4_PBKEN_Values<FMC::PCR4, 2, 1, ReadWriteMode, FMCPCR4Base> ;
    using PWAITEN = FMC_PCR4_PWAITEN_Values<FMC::PCR4, 1, 1, ReadWriteMode, FMCPCR4Base> ;
    using FieldValues = FMC_PCR4_PWAITEN_Values<FMC::PCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCR4Pack  = Register<0xA00004A0, 32, ReadWriteMode, FMCPCR4Base, T...> ;

  struct FMCSR4Base {} ;

  struct SR4 : public RegisterBase<0xA00004A4, 32, ReadWriteMode>
  {
    using FEMPT = FMC_SR4_FEMPT_Values<FMC::SR4, 6, 1, ReadMode, FMCSR4Base> ;
    using IFEN = FMC_SR4_IFEN_Values<FMC::SR4, 5, 1, ReadWriteMode, FMCSR4Base> ;
    using ILEN = FMC_SR4_ILEN_Values<FMC::SR4, 4, 1, ReadWriteMode, FMCSR4Base> ;
    using IREN = FMC_SR4_IREN_Values<FMC::SR4, 3, 1, ReadWriteMode, FMCSR4Base> ;
    using IFS = FMC_SR4_IFS_Values<FMC::SR4, 2, 1, ReadWriteMode, FMCSR4Base> ;
    using ILS = FMC_SR4_ILS_Values<FMC::SR4, 1, 1, ReadWriteMode, FMCSR4Base> ;
    using IRS = FMC_SR4_IRS_Values<FMC::SR4, 0, 1, ReadWriteMode, FMCSR4Base> ;
    using FieldValues = FMC_SR4_IRS_Values<FMC::SR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR4Pack  = Register<0xA00004A4, 32, ReadWriteMode, FMCSR4Base, T...> ;

  struct FMCPMEM4Base {} ;

  struct PMEM4 : public RegisterBase<0xA00004A8, 32, ReadWriteMode>
  {
    using MEMHIZx = FMC_PMEM4_MEMHIZx_Values<FMC::PMEM4, 24, 8, ReadWriteMode, FMCPMEM4Base> ;
    using MEMHOLDx = FMC_PMEM4_MEMHOLDx_Values<FMC::PMEM4, 16, 8, ReadWriteMode, FMCPMEM4Base> ;
    using MEMWAITx = FMC_PMEM4_MEMWAITx_Values<FMC::PMEM4, 8, 8, ReadWriteMode, FMCPMEM4Base> ;
    using MEMSETx = FMC_PMEM4_MEMSETx_Values<FMC::PMEM4, 0, 8, ReadWriteMode, FMCPMEM4Base> ;
    using FieldValues = FMC_PMEM4_MEMSETx_Values<FMC::PMEM4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEM4Pack  = Register<0xA00004A8, 32, ReadWriteMode, FMCPMEM4Base, T...> ;

  struct FMCPATT4Base {} ;

  struct PATT4 : public RegisterBase<0xA00004AC, 32, ReadWriteMode>
  {
    using ATTHIZx = FMC_PATT4_ATTHIZx_Values<FMC::PATT4, 24, 8, ReadWriteMode, FMCPATT4Base> ;
    using ATTHOLDx = FMC_PATT4_ATTHOLDx_Values<FMC::PATT4, 16, 8, ReadWriteMode, FMCPATT4Base> ;
    using ATTWAITx = FMC_PATT4_ATTWAITx_Values<FMC::PATT4, 8, 8, ReadWriteMode, FMCPATT4Base> ;
    using ATTSETx = FMC_PATT4_ATTSETx_Values<FMC::PATT4, 0, 8, ReadWriteMode, FMCPATT4Base> ;
    using FieldValues = FMC_PATT4_ATTSETx_Values<FMC::PATT4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATT4Pack  = Register<0xA00004AC, 32, ReadWriteMode, FMCPATT4Base, T...> ;

  struct FMCPIO4Base {} ;

  struct PIO4 : public RegisterBase<0xA00004B0, 32, ReadWriteMode>
  {
    using IOHIZx = FMC_PIO4_IOHIZx_Values<FMC::PIO4, 24, 8, ReadWriteMode, FMCPIO4Base> ;
    using IOHOLDx = FMC_PIO4_IOHOLDx_Values<FMC::PIO4, 16, 8, ReadWriteMode, FMCPIO4Base> ;
    using IOWAITx = FMC_PIO4_IOWAITx_Values<FMC::PIO4, 8, 8, ReadWriteMode, FMCPIO4Base> ;
    using IOSETx = FMC_PIO4_IOSETx_Values<FMC::PIO4, 0, 8, ReadWriteMode, FMCPIO4Base> ;
    using FieldValues = FMC_PIO4_IOSETx_Values<FMC::PIO4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIO4Pack  = Register<0xA00004B0, 32, ReadWriteMode, FMCPIO4Base, T...> ;

  struct FMCBWTR1Base {} ;

  struct BWTR1 : public RegisterBase<0xA0000504, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BWTR1_ACCMOD_Values<FMC::BWTR1, 28, 2, ReadWriteMode, FMCBWTR1Base> ;
    using DATLAT = FMC_BWTR1_DATLAT_Values<FMC::BWTR1, 24, 4, ReadWriteMode, FMCBWTR1Base> ;
    using CLKDIV = FMC_BWTR1_CLKDIV_Values<FMC::BWTR1, 20, 4, ReadWriteMode, FMCBWTR1Base> ;
    using BUSTURN = FMC_BWTR1_BUSTURN_Values<FMC::BWTR1, 16, 4, ReadWriteMode, FMCBWTR1Base> ;
    using DATAST = FMC_BWTR1_DATAST_Values<FMC::BWTR1, 8, 8, ReadWriteMode, FMCBWTR1Base> ;
    using ADDHLD = FMC_BWTR1_ADDHLD_Values<FMC::BWTR1, 4, 4, ReadWriteMode, FMCBWTR1Base> ;
    using ADDSET = FMC_BWTR1_ADDSET_Values<FMC::BWTR1, 0, 4, ReadWriteMode, FMCBWTR1Base> ;
    using FieldValues = FMC_BWTR1_ADDSET_Values<FMC::BWTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR1Pack  = Register<0xA0000504, 32, ReadWriteMode, FMCBWTR1Base, T...> ;

  struct FMCBWTR2Base {} ;

  struct BWTR2 : public RegisterBase<0xA000050C, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BWTR2_ACCMOD_Values<FMC::BWTR2, 28, 2, ReadWriteMode, FMCBWTR2Base> ;
    using DATLAT = FMC_BWTR2_DATLAT_Values<FMC::BWTR2, 24, 4, ReadWriteMode, FMCBWTR2Base> ;
    using CLKDIV = FMC_BWTR2_CLKDIV_Values<FMC::BWTR2, 20, 4, ReadWriteMode, FMCBWTR2Base> ;
    using BUSTURN = FMC_BWTR2_BUSTURN_Values<FMC::BWTR2, 16, 4, ReadWriteMode, FMCBWTR2Base> ;
    using DATAST = FMC_BWTR2_DATAST_Values<FMC::BWTR2, 8, 8, ReadWriteMode, FMCBWTR2Base> ;
    using ADDHLD = FMC_BWTR2_ADDHLD_Values<FMC::BWTR2, 4, 4, ReadWriteMode, FMCBWTR2Base> ;
    using ADDSET = FMC_BWTR2_ADDSET_Values<FMC::BWTR2, 0, 4, ReadWriteMode, FMCBWTR2Base> ;
    using FieldValues = FMC_BWTR2_ADDSET_Values<FMC::BWTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR2Pack  = Register<0xA000050C, 32, ReadWriteMode, FMCBWTR2Base, T...> ;

  struct FMCBWTR3Base {} ;

  struct BWTR3 : public RegisterBase<0xA0000514, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BWTR3_ACCMOD_Values<FMC::BWTR3, 28, 2, ReadWriteMode, FMCBWTR3Base> ;
    using DATLAT = FMC_BWTR3_DATLAT_Values<FMC::BWTR3, 24, 4, ReadWriteMode, FMCBWTR3Base> ;
    using CLKDIV = FMC_BWTR3_CLKDIV_Values<FMC::BWTR3, 20, 4, ReadWriteMode, FMCBWTR3Base> ;
    using BUSTURN = FMC_BWTR3_BUSTURN_Values<FMC::BWTR3, 16, 4, ReadWriteMode, FMCBWTR3Base> ;
    using DATAST = FMC_BWTR3_DATAST_Values<FMC::BWTR3, 8, 8, ReadWriteMode, FMCBWTR3Base> ;
    using ADDHLD = FMC_BWTR3_ADDHLD_Values<FMC::BWTR3, 4, 4, ReadWriteMode, FMCBWTR3Base> ;
    using ADDSET = FMC_BWTR3_ADDSET_Values<FMC::BWTR3, 0, 4, ReadWriteMode, FMCBWTR3Base> ;
    using FieldValues = FMC_BWTR3_ADDSET_Values<FMC::BWTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR3Pack  = Register<0xA0000514, 32, ReadWriteMode, FMCBWTR3Base, T...> ;

  struct FMCBWTR4Base {} ;

  struct BWTR4 : public RegisterBase<0xA000051C, 32, ReadWriteMode>
  {
    using ACCMOD = FMC_BWTR4_ACCMOD_Values<FMC::BWTR4, 28, 2, ReadWriteMode, FMCBWTR4Base> ;
    using DATLAT = FMC_BWTR4_DATLAT_Values<FMC::BWTR4, 24, 4, ReadWriteMode, FMCBWTR4Base> ;
    using CLKDIV = FMC_BWTR4_CLKDIV_Values<FMC::BWTR4, 20, 4, ReadWriteMode, FMCBWTR4Base> ;
    using BUSTURN = FMC_BWTR4_BUSTURN_Values<FMC::BWTR4, 16, 4, ReadWriteMode, FMCBWTR4Base> ;
    using DATAST = FMC_BWTR4_DATAST_Values<FMC::BWTR4, 8, 8, ReadWriteMode, FMCBWTR4Base> ;
    using ADDHLD = FMC_BWTR4_ADDHLD_Values<FMC::BWTR4, 4, 4, ReadWriteMode, FMCBWTR4Base> ;
    using ADDSET = FMC_BWTR4_ADDSET_Values<FMC::BWTR4, 0, 4, ReadWriteMode, FMCBWTR4Base> ;
    using FieldValues = FMC_BWTR4_ADDSET_Values<FMC::BWTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR4Pack  = Register<0xA000051C, 32, ReadWriteMode, FMCBWTR4Base, T...> ;

} ;

#endif //#if !defined(FMCREGISTERS_HPP)
