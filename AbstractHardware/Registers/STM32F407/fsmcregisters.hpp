/*******************************************************************************
* Filename      : fsmcregisters.hpp
*
* Details       : Flexible static memory controller. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(FSMCREGISTERS_HPP)
#define FSMCREGISTERS_HPP

#include "fsmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FSMC
{
  struct FSMCBCR1Base {} ;

  struct BCR1 : public RegisterBase<0xA0000000, 32, ReadWriteMode>
  {
    using CBURSTRW = FSMC_BCR1_CBURSTRW_Values<FSMC::BCR1, 19, 1, ReadWriteMode, FSMCBCR1Base> ;
    using ASYNCWAIT = FSMC_BCR1_ASYNCWAIT_Values<FSMC::BCR1, 15, 1, ReadWriteMode, FSMCBCR1Base> ;
    using EXTMOD = FSMC_BCR1_EXTMOD_Values<FSMC::BCR1, 14, 1, ReadWriteMode, FSMCBCR1Base> ;
    using WAITEN = FSMC_BCR1_WAITEN_Values<FSMC::BCR1, 13, 1, ReadWriteMode, FSMCBCR1Base> ;
    using WREN = FSMC_BCR1_WREN_Values<FSMC::BCR1, 12, 1, ReadWriteMode, FSMCBCR1Base> ;
    using WAITCFG = FSMC_BCR1_WAITCFG_Values<FSMC::BCR1, 11, 1, ReadWriteMode, FSMCBCR1Base> ;
    using WAITPOL = FSMC_BCR1_WAITPOL_Values<FSMC::BCR1, 9, 1, ReadWriteMode, FSMCBCR1Base> ;
    using BURSTEN = FSMC_BCR1_BURSTEN_Values<FSMC::BCR1, 8, 1, ReadWriteMode, FSMCBCR1Base> ;
    using FACCEN = FSMC_BCR1_FACCEN_Values<FSMC::BCR1, 6, 1, ReadWriteMode, FSMCBCR1Base> ;
    using MWID = FSMC_BCR1_MWID_Values<FSMC::BCR1, 4, 2, ReadWriteMode, FSMCBCR1Base> ;
    using MTYP = FSMC_BCR1_MTYP_Values<FSMC::BCR1, 2, 2, ReadWriteMode, FSMCBCR1Base> ;
    using MUXEN = FSMC_BCR1_MUXEN_Values<FSMC::BCR1, 1, 1, ReadWriteMode, FSMCBCR1Base> ;
    using MBKEN = FSMC_BCR1_MBKEN_Values<FSMC::BCR1, 0, 1, ReadWriteMode, FSMCBCR1Base> ;
    using FieldValues = FSMC_BCR1_MBKEN_Values<FSMC::BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR1Pack  = Register<0xA0000000, 32, ReadWriteMode, FSMCBCR1Base, T...> ;

  struct FSMCBTR1Base {} ;

  struct BTR1 : public RegisterBase<0xA0000004, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BTR1_ACCMOD_Values<FSMC::BTR1, 28, 2, ReadWriteMode, FSMCBTR1Base> ;
    using DATLAT = FSMC_BTR1_DATLAT_Values<FSMC::BTR1, 24, 4, ReadWriteMode, FSMCBTR1Base> ;
    using CLKDIV = FSMC_BTR1_CLKDIV_Values<FSMC::BTR1, 20, 4, ReadWriteMode, FSMCBTR1Base> ;
    using BUSTURN = FSMC_BTR1_BUSTURN_Values<FSMC::BTR1, 16, 4, ReadWriteMode, FSMCBTR1Base> ;
    using DATAST = FSMC_BTR1_DATAST_Values<FSMC::BTR1, 8, 8, ReadWriteMode, FSMCBTR1Base> ;
    using ADDHLD = FSMC_BTR1_ADDHLD_Values<FSMC::BTR1, 4, 4, ReadWriteMode, FSMCBTR1Base> ;
    using ADDSET = FSMC_BTR1_ADDSET_Values<FSMC::BTR1, 0, 4, ReadWriteMode, FSMCBTR1Base> ;
    using FieldValues = FSMC_BTR1_ADDSET_Values<FSMC::BTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR1Pack  = Register<0xA0000004, 32, ReadWriteMode, FSMCBTR1Base, T...> ;

  struct FSMCBCR2Base {} ;

  struct BCR2 : public RegisterBase<0xA0000008, 32, ReadWriteMode>
  {
    using CBURSTRW = FSMC_BCR2_CBURSTRW_Values<FSMC::BCR2, 19, 1, ReadWriteMode, FSMCBCR2Base> ;
    using ASYNCWAIT = FSMC_BCR2_ASYNCWAIT_Values<FSMC::BCR2, 15, 1, ReadWriteMode, FSMCBCR2Base> ;
    using EXTMOD = FSMC_BCR2_EXTMOD_Values<FSMC::BCR2, 14, 1, ReadWriteMode, FSMCBCR2Base> ;
    using WAITEN = FSMC_BCR2_WAITEN_Values<FSMC::BCR2, 13, 1, ReadWriteMode, FSMCBCR2Base> ;
    using WREN = FSMC_BCR2_WREN_Values<FSMC::BCR2, 12, 1, ReadWriteMode, FSMCBCR2Base> ;
    using WAITCFG = FSMC_BCR2_WAITCFG_Values<FSMC::BCR2, 11, 1, ReadWriteMode, FSMCBCR2Base> ;
    using WRAPMOD = FSMC_BCR2_WRAPMOD_Values<FSMC::BCR2, 10, 1, ReadWriteMode, FSMCBCR2Base> ;
    using WAITPOL = FSMC_BCR2_WAITPOL_Values<FSMC::BCR2, 9, 1, ReadWriteMode, FSMCBCR2Base> ;
    using BURSTEN = FSMC_BCR2_BURSTEN_Values<FSMC::BCR2, 8, 1, ReadWriteMode, FSMCBCR2Base> ;
    using FACCEN = FSMC_BCR2_FACCEN_Values<FSMC::BCR2, 6, 1, ReadWriteMode, FSMCBCR2Base> ;
    using MWID = FSMC_BCR2_MWID_Values<FSMC::BCR2, 4, 2, ReadWriteMode, FSMCBCR2Base> ;
    using MTYP = FSMC_BCR2_MTYP_Values<FSMC::BCR2, 2, 2, ReadWriteMode, FSMCBCR2Base> ;
    using MUXEN = FSMC_BCR2_MUXEN_Values<FSMC::BCR2, 1, 1, ReadWriteMode, FSMCBCR2Base> ;
    using MBKEN = FSMC_BCR2_MBKEN_Values<FSMC::BCR2, 0, 1, ReadWriteMode, FSMCBCR2Base> ;
    using FieldValues = FSMC_BCR2_MBKEN_Values<FSMC::BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR2Pack  = Register<0xA0000008, 32, ReadWriteMode, FSMCBCR2Base, T...> ;

  struct FSMCBTR2Base {} ;

  struct BTR2 : public RegisterBase<0xA000000C, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BTR2_ACCMOD_Values<FSMC::BTR2, 28, 2, ReadWriteMode, FSMCBTR2Base> ;
    using DATLAT = FSMC_BTR2_DATLAT_Values<FSMC::BTR2, 24, 4, ReadWriteMode, FSMCBTR2Base> ;
    using CLKDIV = FSMC_BTR2_CLKDIV_Values<FSMC::BTR2, 20, 4, ReadWriteMode, FSMCBTR2Base> ;
    using BUSTURN = FSMC_BTR2_BUSTURN_Values<FSMC::BTR2, 16, 4, ReadWriteMode, FSMCBTR2Base> ;
    using DATAST = FSMC_BTR2_DATAST_Values<FSMC::BTR2, 8, 8, ReadWriteMode, FSMCBTR2Base> ;
    using ADDHLD = FSMC_BTR2_ADDHLD_Values<FSMC::BTR2, 4, 4, ReadWriteMode, FSMCBTR2Base> ;
    using ADDSET = FSMC_BTR2_ADDSET_Values<FSMC::BTR2, 0, 4, ReadWriteMode, FSMCBTR2Base> ;
    using FieldValues = FSMC_BTR2_ADDSET_Values<FSMC::BTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR2Pack  = Register<0xA000000C, 32, ReadWriteMode, FSMCBTR2Base, T...> ;

  struct FSMCBCR3Base {} ;

  struct BCR3 : public RegisterBase<0xA0000010, 32, ReadWriteMode>
  {
    using CBURSTRW = FSMC_BCR3_CBURSTRW_Values<FSMC::BCR3, 19, 1, ReadWriteMode, FSMCBCR3Base> ;
    using ASYNCWAIT = FSMC_BCR3_ASYNCWAIT_Values<FSMC::BCR3, 15, 1, ReadWriteMode, FSMCBCR3Base> ;
    using EXTMOD = FSMC_BCR3_EXTMOD_Values<FSMC::BCR3, 14, 1, ReadWriteMode, FSMCBCR3Base> ;
    using WAITEN = FSMC_BCR3_WAITEN_Values<FSMC::BCR3, 13, 1, ReadWriteMode, FSMCBCR3Base> ;
    using WREN = FSMC_BCR3_WREN_Values<FSMC::BCR3, 12, 1, ReadWriteMode, FSMCBCR3Base> ;
    using WAITCFG = FSMC_BCR3_WAITCFG_Values<FSMC::BCR3, 11, 1, ReadWriteMode, FSMCBCR3Base> ;
    using WRAPMOD = FSMC_BCR3_WRAPMOD_Values<FSMC::BCR3, 10, 1, ReadWriteMode, FSMCBCR3Base> ;
    using WAITPOL = FSMC_BCR3_WAITPOL_Values<FSMC::BCR3, 9, 1, ReadWriteMode, FSMCBCR3Base> ;
    using BURSTEN = FSMC_BCR3_BURSTEN_Values<FSMC::BCR3, 8, 1, ReadWriteMode, FSMCBCR3Base> ;
    using FACCEN = FSMC_BCR3_FACCEN_Values<FSMC::BCR3, 6, 1, ReadWriteMode, FSMCBCR3Base> ;
    using MWID = FSMC_BCR3_MWID_Values<FSMC::BCR3, 4, 2, ReadWriteMode, FSMCBCR3Base> ;
    using MTYP = FSMC_BCR3_MTYP_Values<FSMC::BCR3, 2, 2, ReadWriteMode, FSMCBCR3Base> ;
    using MUXEN = FSMC_BCR3_MUXEN_Values<FSMC::BCR3, 1, 1, ReadWriteMode, FSMCBCR3Base> ;
    using MBKEN = FSMC_BCR3_MBKEN_Values<FSMC::BCR3, 0, 1, ReadWriteMode, FSMCBCR3Base> ;
    using FieldValues = FSMC_BCR3_MBKEN_Values<FSMC::BCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR3Pack  = Register<0xA0000010, 32, ReadWriteMode, FSMCBCR3Base, T...> ;

  struct FSMCBTR3Base {} ;

  struct BTR3 : public RegisterBase<0xA0000014, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BTR3_ACCMOD_Values<FSMC::BTR3, 28, 2, ReadWriteMode, FSMCBTR3Base> ;
    using DATLAT = FSMC_BTR3_DATLAT_Values<FSMC::BTR3, 24, 4, ReadWriteMode, FSMCBTR3Base> ;
    using CLKDIV = FSMC_BTR3_CLKDIV_Values<FSMC::BTR3, 20, 4, ReadWriteMode, FSMCBTR3Base> ;
    using BUSTURN = FSMC_BTR3_BUSTURN_Values<FSMC::BTR3, 16, 4, ReadWriteMode, FSMCBTR3Base> ;
    using DATAST = FSMC_BTR3_DATAST_Values<FSMC::BTR3, 8, 8, ReadWriteMode, FSMCBTR3Base> ;
    using ADDHLD = FSMC_BTR3_ADDHLD_Values<FSMC::BTR3, 4, 4, ReadWriteMode, FSMCBTR3Base> ;
    using ADDSET = FSMC_BTR3_ADDSET_Values<FSMC::BTR3, 0, 4, ReadWriteMode, FSMCBTR3Base> ;
    using FieldValues = FSMC_BTR3_ADDSET_Values<FSMC::BTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR3Pack  = Register<0xA0000014, 32, ReadWriteMode, FSMCBTR3Base, T...> ;

  struct FSMCBCR4Base {} ;

  struct BCR4 : public RegisterBase<0xA0000018, 32, ReadWriteMode>
  {
    using CBURSTRW = FSMC_BCR4_CBURSTRW_Values<FSMC::BCR4, 19, 1, ReadWriteMode, FSMCBCR4Base> ;
    using ASYNCWAIT = FSMC_BCR4_ASYNCWAIT_Values<FSMC::BCR4, 15, 1, ReadWriteMode, FSMCBCR4Base> ;
    using EXTMOD = FSMC_BCR4_EXTMOD_Values<FSMC::BCR4, 14, 1, ReadWriteMode, FSMCBCR4Base> ;
    using WAITEN = FSMC_BCR4_WAITEN_Values<FSMC::BCR4, 13, 1, ReadWriteMode, FSMCBCR4Base> ;
    using WREN = FSMC_BCR4_WREN_Values<FSMC::BCR4, 12, 1, ReadWriteMode, FSMCBCR4Base> ;
    using WAITCFG = FSMC_BCR4_WAITCFG_Values<FSMC::BCR4, 11, 1, ReadWriteMode, FSMCBCR4Base> ;
    using WRAPMOD = FSMC_BCR4_WRAPMOD_Values<FSMC::BCR4, 10, 1, ReadWriteMode, FSMCBCR4Base> ;
    using WAITPOL = FSMC_BCR4_WAITPOL_Values<FSMC::BCR4, 9, 1, ReadWriteMode, FSMCBCR4Base> ;
    using BURSTEN = FSMC_BCR4_BURSTEN_Values<FSMC::BCR4, 8, 1, ReadWriteMode, FSMCBCR4Base> ;
    using FACCEN = FSMC_BCR4_FACCEN_Values<FSMC::BCR4, 6, 1, ReadWriteMode, FSMCBCR4Base> ;
    using MWID = FSMC_BCR4_MWID_Values<FSMC::BCR4, 4, 2, ReadWriteMode, FSMCBCR4Base> ;
    using MTYP = FSMC_BCR4_MTYP_Values<FSMC::BCR4, 2, 2, ReadWriteMode, FSMCBCR4Base> ;
    using MUXEN = FSMC_BCR4_MUXEN_Values<FSMC::BCR4, 1, 1, ReadWriteMode, FSMCBCR4Base> ;
    using MBKEN = FSMC_BCR4_MBKEN_Values<FSMC::BCR4, 0, 1, ReadWriteMode, FSMCBCR4Base> ;
    using FieldValues = FSMC_BCR4_MBKEN_Values<FSMC::BCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR4Pack  = Register<0xA0000018, 32, ReadWriteMode, FSMCBCR4Base, T...> ;

  struct FSMCBTR4Base {} ;

  struct BTR4 : public RegisterBase<0xA000001C, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BTR4_ACCMOD_Values<FSMC::BTR4, 28, 2, ReadWriteMode, FSMCBTR4Base> ;
    using DATLAT = FSMC_BTR4_DATLAT_Values<FSMC::BTR4, 24, 4, ReadWriteMode, FSMCBTR4Base> ;
    using CLKDIV = FSMC_BTR4_CLKDIV_Values<FSMC::BTR4, 20, 4, ReadWriteMode, FSMCBTR4Base> ;
    using BUSTURN = FSMC_BTR4_BUSTURN_Values<FSMC::BTR4, 16, 4, ReadWriteMode, FSMCBTR4Base> ;
    using DATAST = FSMC_BTR4_DATAST_Values<FSMC::BTR4, 8, 8, ReadWriteMode, FSMCBTR4Base> ;
    using ADDHLD = FSMC_BTR4_ADDHLD_Values<FSMC::BTR4, 4, 4, ReadWriteMode, FSMCBTR4Base> ;
    using ADDSET = FSMC_BTR4_ADDSET_Values<FSMC::BTR4, 0, 4, ReadWriteMode, FSMCBTR4Base> ;
    using FieldValues = FSMC_BTR4_ADDSET_Values<FSMC::BTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR4Pack  = Register<0xA000001C, 32, ReadWriteMode, FSMCBTR4Base, T...> ;

  struct FSMCPCR2Base {} ;

  struct PCR2 : public RegisterBase<0xA0000060, 32, ReadWriteMode>
  {
    using ECCPS = FSMC_PCR2_ECCPS_Values<FSMC::PCR2, 17, 3, ReadWriteMode, FSMCPCR2Base> ;
    using TAR = FSMC_PCR2_TAR_Values<FSMC::PCR2, 13, 4, ReadWriteMode, FSMCPCR2Base> ;
    using TCLR = FSMC_PCR2_TCLR_Values<FSMC::PCR2, 9, 4, ReadWriteMode, FSMCPCR2Base> ;
    using ECCEN = FSMC_PCR2_ECCEN_Values<FSMC::PCR2, 6, 1, ReadWriteMode, FSMCPCR2Base> ;
    using PWID = FSMC_PCR2_PWID_Values<FSMC::PCR2, 4, 2, ReadWriteMode, FSMCPCR2Base> ;
    using PTYP = FSMC_PCR2_PTYP_Values<FSMC::PCR2, 3, 1, ReadWriteMode, FSMCPCR2Base> ;
    using PBKEN = FSMC_PCR2_PBKEN_Values<FSMC::PCR2, 2, 1, ReadWriteMode, FSMCPCR2Base> ;
    using PWAITEN = FSMC_PCR2_PWAITEN_Values<FSMC::PCR2, 1, 1, ReadWriteMode, FSMCPCR2Base> ;
    using FieldValues = FSMC_PCR2_PWAITEN_Values<FSMC::PCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCR2Pack  = Register<0xA0000060, 32, ReadWriteMode, FSMCPCR2Base, T...> ;

  struct FSMCSR2Base {} ;

  struct SR2 : public RegisterBase<0xA0000064, 32, ReadWriteMode>
  {
    using FEMPT = FSMC_SR2_FEMPT_Values<FSMC::SR2, 6, 1, ReadMode, FSMCSR2Base> ;
    using IFEN = FSMC_SR2_IFEN_Values<FSMC::SR2, 5, 1, ReadWriteMode, FSMCSR2Base> ;
    using ILEN = FSMC_SR2_ILEN_Values<FSMC::SR2, 4, 1, ReadWriteMode, FSMCSR2Base> ;
    using IREN = FSMC_SR2_IREN_Values<FSMC::SR2, 3, 1, ReadWriteMode, FSMCSR2Base> ;
    using IFS = FSMC_SR2_IFS_Values<FSMC::SR2, 2, 1, ReadWriteMode, FSMCSR2Base> ;
    using ILS = FSMC_SR2_ILS_Values<FSMC::SR2, 1, 1, ReadWriteMode, FSMCSR2Base> ;
    using IRS = FSMC_SR2_IRS_Values<FSMC::SR2, 0, 1, ReadWriteMode, FSMCSR2Base> ;
    using FieldValues = FSMC_SR2_IRS_Values<FSMC::SR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR2Pack  = Register<0xA0000064, 32, ReadWriteMode, FSMCSR2Base, T...> ;

  struct FSMCPMEM2Base {} ;

  struct PMEM2 : public RegisterBase<0xA0000068, 32, ReadWriteMode>
  {
    using MEMHIZx = FSMC_PMEM2_MEMHIZx_Values<FSMC::PMEM2, 24, 8, ReadWriteMode, FSMCPMEM2Base> ;
    using MEMHOLDx = FSMC_PMEM2_MEMHOLDx_Values<FSMC::PMEM2, 16, 8, ReadWriteMode, FSMCPMEM2Base> ;
    using MEMWAITx = FSMC_PMEM2_MEMWAITx_Values<FSMC::PMEM2, 8, 8, ReadWriteMode, FSMCPMEM2Base> ;
    using MEMSETx = FSMC_PMEM2_MEMSETx_Values<FSMC::PMEM2, 0, 8, ReadWriteMode, FSMCPMEM2Base> ;
    using FieldValues = FSMC_PMEM2_MEMSETx_Values<FSMC::PMEM2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEM2Pack  = Register<0xA0000068, 32, ReadWriteMode, FSMCPMEM2Base, T...> ;

  struct FSMCPATT2Base {} ;

  struct PATT2 : public RegisterBase<0xA000006C, 32, ReadWriteMode>
  {
    using ATTHIZx = FSMC_PATT2_ATTHIZx_Values<FSMC::PATT2, 24, 8, ReadWriteMode, FSMCPATT2Base> ;
    using ATTHOLDx = FSMC_PATT2_ATTHOLDx_Values<FSMC::PATT2, 16, 8, ReadWriteMode, FSMCPATT2Base> ;
    using ATTWAITx = FSMC_PATT2_ATTWAITx_Values<FSMC::PATT2, 8, 8, ReadWriteMode, FSMCPATT2Base> ;
    using ATTSETx = FSMC_PATT2_ATTSETx_Values<FSMC::PATT2, 0, 8, ReadWriteMode, FSMCPATT2Base> ;
    using FieldValues = FSMC_PATT2_ATTSETx_Values<FSMC::PATT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATT2Pack  = Register<0xA000006C, 32, ReadWriteMode, FSMCPATT2Base, T...> ;

  struct FSMCECCR2Base {} ;

  struct ECCR2 : public RegisterBase<0xA0000074, 32, ReadMode>
  {
    using ECCx = FSMC_ECCR2_ECCx_Values<FSMC::ECCR2, 0, 32, ReadMode, FSMCECCR2Base> ;
    using FieldValues = FSMC_ECCR2_ECCx_Values<FSMC::ECCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCR2Pack  = Register<0xA0000074, 32, ReadMode, FSMCECCR2Base, T...> ;

  struct FSMCPCR3Base {} ;

  struct PCR3 : public RegisterBase<0xA0000080, 32, ReadWriteMode>
  {
    using ECCPS = FSMC_PCR3_ECCPS_Values<FSMC::PCR3, 17, 3, ReadWriteMode, FSMCPCR3Base> ;
    using TAR = FSMC_PCR3_TAR_Values<FSMC::PCR3, 13, 4, ReadWriteMode, FSMCPCR3Base> ;
    using TCLR = FSMC_PCR3_TCLR_Values<FSMC::PCR3, 9, 4, ReadWriteMode, FSMCPCR3Base> ;
    using ECCEN = FSMC_PCR3_ECCEN_Values<FSMC::PCR3, 6, 1, ReadWriteMode, FSMCPCR3Base> ;
    using PWID = FSMC_PCR3_PWID_Values<FSMC::PCR3, 4, 2, ReadWriteMode, FSMCPCR3Base> ;
    using PTYP = FSMC_PCR3_PTYP_Values<FSMC::PCR3, 3, 1, ReadWriteMode, FSMCPCR3Base> ;
    using PBKEN = FSMC_PCR3_PBKEN_Values<FSMC::PCR3, 2, 1, ReadWriteMode, FSMCPCR3Base> ;
    using PWAITEN = FSMC_PCR3_PWAITEN_Values<FSMC::PCR3, 1, 1, ReadWriteMode, FSMCPCR3Base> ;
    using FieldValues = FSMC_PCR3_PWAITEN_Values<FSMC::PCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCR3Pack  = Register<0xA0000080, 32, ReadWriteMode, FSMCPCR3Base, T...> ;

  struct FSMCSR3Base {} ;

  struct SR3 : public RegisterBase<0xA0000084, 32, ReadWriteMode>
  {
    using FEMPT = FSMC_SR3_FEMPT_Values<FSMC::SR3, 6, 1, ReadMode, FSMCSR3Base> ;
    using IFEN = FSMC_SR3_IFEN_Values<FSMC::SR3, 5, 1, ReadWriteMode, FSMCSR3Base> ;
    using ILEN = FSMC_SR3_ILEN_Values<FSMC::SR3, 4, 1, ReadWriteMode, FSMCSR3Base> ;
    using IREN = FSMC_SR3_IREN_Values<FSMC::SR3, 3, 1, ReadWriteMode, FSMCSR3Base> ;
    using IFS = FSMC_SR3_IFS_Values<FSMC::SR3, 2, 1, ReadWriteMode, FSMCSR3Base> ;
    using ILS = FSMC_SR3_ILS_Values<FSMC::SR3, 1, 1, ReadWriteMode, FSMCSR3Base> ;
    using IRS = FSMC_SR3_IRS_Values<FSMC::SR3, 0, 1, ReadWriteMode, FSMCSR3Base> ;
    using FieldValues = FSMC_SR3_IRS_Values<FSMC::SR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR3Pack  = Register<0xA0000084, 32, ReadWriteMode, FSMCSR3Base, T...> ;

  struct FSMCPMEM3Base {} ;

  struct PMEM3 : public RegisterBase<0xA0000088, 32, ReadWriteMode>
  {
    using MEMHIZx = FSMC_PMEM3_MEMHIZx_Values<FSMC::PMEM3, 24, 8, ReadWriteMode, FSMCPMEM3Base> ;
    using MEMHOLDx = FSMC_PMEM3_MEMHOLDx_Values<FSMC::PMEM3, 16, 8, ReadWriteMode, FSMCPMEM3Base> ;
    using MEMWAITx = FSMC_PMEM3_MEMWAITx_Values<FSMC::PMEM3, 8, 8, ReadWriteMode, FSMCPMEM3Base> ;
    using MEMSETx = FSMC_PMEM3_MEMSETx_Values<FSMC::PMEM3, 0, 8, ReadWriteMode, FSMCPMEM3Base> ;
    using FieldValues = FSMC_PMEM3_MEMSETx_Values<FSMC::PMEM3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEM3Pack  = Register<0xA0000088, 32, ReadWriteMode, FSMCPMEM3Base, T...> ;

  struct FSMCPATT3Base {} ;

  struct PATT3 : public RegisterBase<0xA000008C, 32, ReadWriteMode>
  {
    using ATTHIZx = FSMC_PATT3_ATTHIZx_Values<FSMC::PATT3, 24, 8, ReadWriteMode, FSMCPATT3Base> ;
    using ATTHOLDx = FSMC_PATT3_ATTHOLDx_Values<FSMC::PATT3, 16, 8, ReadWriteMode, FSMCPATT3Base> ;
    using ATTWAITx = FSMC_PATT3_ATTWAITx_Values<FSMC::PATT3, 8, 8, ReadWriteMode, FSMCPATT3Base> ;
    using ATTSETx = FSMC_PATT3_ATTSETx_Values<FSMC::PATT3, 0, 8, ReadWriteMode, FSMCPATT3Base> ;
    using FieldValues = FSMC_PATT3_ATTSETx_Values<FSMC::PATT3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATT3Pack  = Register<0xA000008C, 32, ReadWriteMode, FSMCPATT3Base, T...> ;

  struct FSMCECCR3Base {} ;

  struct ECCR3 : public RegisterBase<0xA0000094, 32, ReadMode>
  {
    using ECCx = FSMC_ECCR3_ECCx_Values<FSMC::ECCR3, 0, 32, ReadMode, FSMCECCR3Base> ;
    using FieldValues = FSMC_ECCR3_ECCx_Values<FSMC::ECCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCR3Pack  = Register<0xA0000094, 32, ReadMode, FSMCECCR3Base, T...> ;

  struct FSMCPCR4Base {} ;

  struct PCR4 : public RegisterBase<0xA00000A0, 32, ReadWriteMode>
  {
    using ECCPS = FSMC_PCR4_ECCPS_Values<FSMC::PCR4, 17, 3, ReadWriteMode, FSMCPCR4Base> ;
    using TAR = FSMC_PCR4_TAR_Values<FSMC::PCR4, 13, 4, ReadWriteMode, FSMCPCR4Base> ;
    using TCLR = FSMC_PCR4_TCLR_Values<FSMC::PCR4, 9, 4, ReadWriteMode, FSMCPCR4Base> ;
    using ECCEN = FSMC_PCR4_ECCEN_Values<FSMC::PCR4, 6, 1, ReadWriteMode, FSMCPCR4Base> ;
    using PWID = FSMC_PCR4_PWID_Values<FSMC::PCR4, 4, 2, ReadWriteMode, FSMCPCR4Base> ;
    using PTYP = FSMC_PCR4_PTYP_Values<FSMC::PCR4, 3, 1, ReadWriteMode, FSMCPCR4Base> ;
    using PBKEN = FSMC_PCR4_PBKEN_Values<FSMC::PCR4, 2, 1, ReadWriteMode, FSMCPCR4Base> ;
    using PWAITEN = FSMC_PCR4_PWAITEN_Values<FSMC::PCR4, 1, 1, ReadWriteMode, FSMCPCR4Base> ;
    using FieldValues = FSMC_PCR4_PWAITEN_Values<FSMC::PCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCR4Pack  = Register<0xA00000A0, 32, ReadWriteMode, FSMCPCR4Base, T...> ;

  struct FSMCSR4Base {} ;

  struct SR4 : public RegisterBase<0xA00000A4, 32, ReadWriteMode>
  {
    using FEMPT = FSMC_SR4_FEMPT_Values<FSMC::SR4, 6, 1, ReadMode, FSMCSR4Base> ;
    using IFEN = FSMC_SR4_IFEN_Values<FSMC::SR4, 5, 1, ReadWriteMode, FSMCSR4Base> ;
    using ILEN = FSMC_SR4_ILEN_Values<FSMC::SR4, 4, 1, ReadWriteMode, FSMCSR4Base> ;
    using IREN = FSMC_SR4_IREN_Values<FSMC::SR4, 3, 1, ReadWriteMode, FSMCSR4Base> ;
    using IFS = FSMC_SR4_IFS_Values<FSMC::SR4, 2, 1, ReadWriteMode, FSMCSR4Base> ;
    using ILS = FSMC_SR4_ILS_Values<FSMC::SR4, 1, 1, ReadWriteMode, FSMCSR4Base> ;
    using IRS = FSMC_SR4_IRS_Values<FSMC::SR4, 0, 1, ReadWriteMode, FSMCSR4Base> ;
    using FieldValues = FSMC_SR4_IRS_Values<FSMC::SR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR4Pack  = Register<0xA00000A4, 32, ReadWriteMode, FSMCSR4Base, T...> ;

  struct FSMCPMEM4Base {} ;

  struct PMEM4 : public RegisterBase<0xA00000A8, 32, ReadWriteMode>
  {
    using MEMHIZx = FSMC_PMEM4_MEMHIZx_Values<FSMC::PMEM4, 24, 8, ReadWriteMode, FSMCPMEM4Base> ;
    using MEMHOLDx = FSMC_PMEM4_MEMHOLDx_Values<FSMC::PMEM4, 16, 8, ReadWriteMode, FSMCPMEM4Base> ;
    using MEMWAITx = FSMC_PMEM4_MEMWAITx_Values<FSMC::PMEM4, 8, 8, ReadWriteMode, FSMCPMEM4Base> ;
    using MEMSETx = FSMC_PMEM4_MEMSETx_Values<FSMC::PMEM4, 0, 8, ReadWriteMode, FSMCPMEM4Base> ;
    using FieldValues = FSMC_PMEM4_MEMSETx_Values<FSMC::PMEM4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEM4Pack  = Register<0xA00000A8, 32, ReadWriteMode, FSMCPMEM4Base, T...> ;

  struct FSMCPATT4Base {} ;

  struct PATT4 : public RegisterBase<0xA00000AC, 32, ReadWriteMode>
  {
    using ATTHIZx = FSMC_PATT4_ATTHIZx_Values<FSMC::PATT4, 24, 8, ReadWriteMode, FSMCPATT4Base> ;
    using ATTHOLDx = FSMC_PATT4_ATTHOLDx_Values<FSMC::PATT4, 16, 8, ReadWriteMode, FSMCPATT4Base> ;
    using ATTWAITx = FSMC_PATT4_ATTWAITx_Values<FSMC::PATT4, 8, 8, ReadWriteMode, FSMCPATT4Base> ;
    using ATTSETx = FSMC_PATT4_ATTSETx_Values<FSMC::PATT4, 0, 8, ReadWriteMode, FSMCPATT4Base> ;
    using FieldValues = FSMC_PATT4_ATTSETx_Values<FSMC::PATT4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATT4Pack  = Register<0xA00000AC, 32, ReadWriteMode, FSMCPATT4Base, T...> ;

  struct FSMCPIO4Base {} ;

  struct PIO4 : public RegisterBase<0xA00000B0, 32, ReadWriteMode>
  {
    using IOHIZx = FSMC_PIO4_IOHIZx_Values<FSMC::PIO4, 24, 8, ReadWriteMode, FSMCPIO4Base> ;
    using IOHOLDx = FSMC_PIO4_IOHOLDx_Values<FSMC::PIO4, 16, 8, ReadWriteMode, FSMCPIO4Base> ;
    using IOWAITx = FSMC_PIO4_IOWAITx_Values<FSMC::PIO4, 8, 8, ReadWriteMode, FSMCPIO4Base> ;
    using IOSETx = FSMC_PIO4_IOSETx_Values<FSMC::PIO4, 0, 8, ReadWriteMode, FSMCPIO4Base> ;
    using FieldValues = FSMC_PIO4_IOSETx_Values<FSMC::PIO4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIO4Pack  = Register<0xA00000B0, 32, ReadWriteMode, FSMCPIO4Base, T...> ;

  struct FSMCBWTR1Base {} ;

  struct BWTR1 : public RegisterBase<0xA0000104, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BWTR1_ACCMOD_Values<FSMC::BWTR1, 28, 2, ReadWriteMode, FSMCBWTR1Base> ;
    using DATLAT = FSMC_BWTR1_DATLAT_Values<FSMC::BWTR1, 24, 4, ReadWriteMode, FSMCBWTR1Base> ;
    using CLKDIV = FSMC_BWTR1_CLKDIV_Values<FSMC::BWTR1, 20, 4, ReadWriteMode, FSMCBWTR1Base> ;
    using DATAST = FSMC_BWTR1_DATAST_Values<FSMC::BWTR1, 8, 8, ReadWriteMode, FSMCBWTR1Base> ;
    using ADDHLD = FSMC_BWTR1_ADDHLD_Values<FSMC::BWTR1, 4, 4, ReadWriteMode, FSMCBWTR1Base> ;
    using ADDSET = FSMC_BWTR1_ADDSET_Values<FSMC::BWTR1, 0, 4, ReadWriteMode, FSMCBWTR1Base> ;
    using FieldValues = FSMC_BWTR1_ADDSET_Values<FSMC::BWTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR1Pack  = Register<0xA0000104, 32, ReadWriteMode, FSMCBWTR1Base, T...> ;

  struct FSMCBWTR2Base {} ;

  struct BWTR2 : public RegisterBase<0xA000010C, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BWTR2_ACCMOD_Values<FSMC::BWTR2, 28, 2, ReadWriteMode, FSMCBWTR2Base> ;
    using DATLAT = FSMC_BWTR2_DATLAT_Values<FSMC::BWTR2, 24, 4, ReadWriteMode, FSMCBWTR2Base> ;
    using CLKDIV = FSMC_BWTR2_CLKDIV_Values<FSMC::BWTR2, 20, 4, ReadWriteMode, FSMCBWTR2Base> ;
    using DATAST = FSMC_BWTR2_DATAST_Values<FSMC::BWTR2, 8, 8, ReadWriteMode, FSMCBWTR2Base> ;
    using ADDHLD = FSMC_BWTR2_ADDHLD_Values<FSMC::BWTR2, 4, 4, ReadWriteMode, FSMCBWTR2Base> ;
    using ADDSET = FSMC_BWTR2_ADDSET_Values<FSMC::BWTR2, 0, 4, ReadWriteMode, FSMCBWTR2Base> ;
    using FieldValues = FSMC_BWTR2_ADDSET_Values<FSMC::BWTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR2Pack  = Register<0xA000010C, 32, ReadWriteMode, FSMCBWTR2Base, T...> ;

  struct FSMCBWTR3Base {} ;

  struct BWTR3 : public RegisterBase<0xA0000114, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BWTR3_ACCMOD_Values<FSMC::BWTR3, 28, 2, ReadWriteMode, FSMCBWTR3Base> ;
    using DATLAT = FSMC_BWTR3_DATLAT_Values<FSMC::BWTR3, 24, 4, ReadWriteMode, FSMCBWTR3Base> ;
    using CLKDIV = FSMC_BWTR3_CLKDIV_Values<FSMC::BWTR3, 20, 4, ReadWriteMode, FSMCBWTR3Base> ;
    using DATAST = FSMC_BWTR3_DATAST_Values<FSMC::BWTR3, 8, 8, ReadWriteMode, FSMCBWTR3Base> ;
    using ADDHLD = FSMC_BWTR3_ADDHLD_Values<FSMC::BWTR3, 4, 4, ReadWriteMode, FSMCBWTR3Base> ;
    using ADDSET = FSMC_BWTR3_ADDSET_Values<FSMC::BWTR3, 0, 4, ReadWriteMode, FSMCBWTR3Base> ;
    using FieldValues = FSMC_BWTR3_ADDSET_Values<FSMC::BWTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR3Pack  = Register<0xA0000114, 32, ReadWriteMode, FSMCBWTR3Base, T...> ;

  struct FSMCBWTR4Base {} ;

  struct BWTR4 : public RegisterBase<0xA000011C, 32, ReadWriteMode>
  {
    using ACCMOD = FSMC_BWTR4_ACCMOD_Values<FSMC::BWTR4, 28, 2, ReadWriteMode, FSMCBWTR4Base> ;
    using DATLAT = FSMC_BWTR4_DATLAT_Values<FSMC::BWTR4, 24, 4, ReadWriteMode, FSMCBWTR4Base> ;
    using CLKDIV = FSMC_BWTR4_CLKDIV_Values<FSMC::BWTR4, 20, 4, ReadWriteMode, FSMCBWTR4Base> ;
    using DATAST = FSMC_BWTR4_DATAST_Values<FSMC::BWTR4, 8, 8, ReadWriteMode, FSMCBWTR4Base> ;
    using ADDHLD = FSMC_BWTR4_ADDHLD_Values<FSMC::BWTR4, 4, 4, ReadWriteMode, FSMCBWTR4Base> ;
    using ADDSET = FSMC_BWTR4_ADDSET_Values<FSMC::BWTR4, 0, 4, ReadWriteMode, FSMCBWTR4Base> ;
    using FieldValues = FSMC_BWTR4_ADDSET_Values<FSMC::BWTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR4Pack  = Register<0xA000011C, 32, ReadWriteMode, FSMCBWTR4Base, T...> ;

} ;

#endif //#if !defined(FSMCREGISTERS_HPP)
