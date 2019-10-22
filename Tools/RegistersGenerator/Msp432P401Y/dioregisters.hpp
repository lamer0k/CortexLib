/*******************************************************************************
* Filename      : dioregisters.hpp
*
* Details       : DIO. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(DIOREGISTERS_HPP)
#define DIOREGISTERS_HPP

#include "diobitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DIO
{
  struct DIOPAINBase {} ;

  struct PAIN : public RegisterBase<0x40004C00, 16, ReadMode>
  {
    using P1IN = DIO_PAIN_PIN_Values<DIO::PAIN, 0, 8, ReadMode, DIOPAINBase> ;
    using P2IN = DIO_PAIN_PIN_Values<DIO::PAIN, 8, 8, ReadMode, DIOPAINBase> ;
  } ;

  template<typename... T> 
  using PAINPack  = Register<0x40004C00, 16, ReadMode, DIOPAINBase, T...> ;

  struct DIOPAOUTBase {} ;

  struct PAOUT : public RegisterBase<0x40004C02, 16, ReadWriteMode>
  {
    using P2OUT = DIO_PAOUT_POUT_Values<DIO::PAOUT, 8, 8, ReadWriteMode, DIOPAOUTBase> ;
    using P1OUT = DIO_PAOUT_POUT_Values<DIO::PAOUT, 0, 8, ReadWriteMode, DIOPAOUTBase> ;
  } ;

  template<typename... T> 
  using PAOUTPack  = Register<0x40004C02, 16, ReadWriteMode, DIOPAOUTBase, T...> ;

  struct DIOPADIRBase {} ;

  struct PADIR : public RegisterBase<0x40004C04, 16, ReadWriteMode>
  {
    using P1DIR = DIO_PADIR_PDIR_Values<DIO::PADIR, 0, 8, ReadWriteMode, DIOPADIRBase> ;
    using P2DIR = DIO_PADIR_PDIR_Values<DIO::PADIR, 8, 8, ReadWriteMode, DIOPADIRBase> ;
  } ;

  template<typename... T> 
  using PADIRPack  = Register<0x40004C04, 16, ReadWriteMode, DIOPADIRBase, T...> ;

  struct DIOPARENBase {} ;

  struct PAREN : public RegisterBase<0x40004C06, 16, ReadWriteMode>
  {
    using P1REN = DIO_PAREN_PREN_Values<DIO::PAREN, 0, 8, ReadWriteMode, DIOPARENBase> ;
    using P2REN = DIO_PAREN_PREN_Values<DIO::PAREN, 8, 8, ReadWriteMode, DIOPARENBase> ;
  } ;

  template<typename... T> 
  using PARENPack  = Register<0x40004C06, 16, ReadWriteMode, DIOPARENBase, T...> ;

  struct DIOPADSBase {} ;

  struct PADS : public RegisterBase<0x40004C08, 16, ReadWriteMode>
  {
    using P1DS = DIO_PADS_PDS_Values<DIO::PADS, 0, 8, ReadWriteMode, DIOPADSBase> ;
    using P2DS = DIO_PADS_PDS_Values<DIO::PADS, 8, 8, ReadWriteMode, DIOPADSBase> ;
  } ;

  template<typename... T> 
  using PADSPack  = Register<0x40004C08, 16, ReadWriteMode, DIOPADSBase, T...> ;

  struct DIOPASEL0Base {} ;

  struct PASEL0 : public RegisterBase<0x40004C0A, 16, ReadWriteMode>
  {
    using P1SEL0 = DIO_PASEL_PSEL_Values<DIO::PASEL0, 0, 8, ReadWriteMode, DIOPASEL0Base> ;
    using P2SEL0 = DIO_PASEL_PSEL_Values<DIO::PASEL0, 8, 8, ReadWriteMode, DIOPASEL0Base> ;
  } ;

  template<typename... T> 
  using PASEL0Pack  = Register<0x40004C0A, 16, ReadWriteMode, DIOPASEL0Base, T...> ;

  struct DIOPASEL1Base {} ;

  struct PASEL1 : public RegisterBase<0x40004C0C, 16, ReadWriteMode>
  {
    using P1SEL1 = DIO_PASEL_PSEL_Values<DIO::PASEL1, 0, 8, ReadWriteMode, DIOPASEL1Base> ;
    using P2SEL1 = DIO_PASEL_PSEL_Values<DIO::PASEL1, 8, 8, ReadWriteMode, DIOPASEL1Base> ;
  } ;

  template<typename... T> 
  using PASEL1Pack  = Register<0x40004C0C, 16, ReadWriteMode, DIOPASEL1Base, T...> ;

  struct DIOP1IVBase {} ;

  struct P1IV : public RegisterBase<0x40004C0E, 16, ReadMode>
  {
    using P1IVField = DIO_PIV_PIV_Values<DIO::P1IV, 0, 5, ReadMode, DIOP1IVBase> ;
  } ;

  template<typename... T> 
  using P1IVPack  = Register<0x40004C0E, 16, ReadMode, DIOP1IVBase, T...> ;

  struct DIOPASELCBase {} ;

  struct PASELC : public RegisterBase<0x40004C16, 16, ReadWriteMode>
  {
    using P1SELC = DIO_PASELC_PSELC_Values<DIO::PASELC, 0, 8, ReadWriteMode, DIOPASELCBase> ;
    using P2SELC = DIO_PASELC_PSELC_Values<DIO::PASELC, 8, 8, ReadWriteMode, DIOPASELCBase> ;
  } ;

  template<typename... T> 
  using PASELCPack  = Register<0x40004C16, 16, ReadWriteMode, DIOPASELCBase, T...> ;

  struct DIOPAIESBase {} ;

  struct PAIES : public RegisterBase<0x40004C18, 16, ReadWriteMode>
  {
    using P1IES = DIO_PAIES_PIES_Values<DIO::PAIES, 0, 8, ReadWriteMode, DIOPAIESBase> ;
    using P2IES = DIO_PAIES_PIES_Values<DIO::PAIES, 8, 8, ReadWriteMode, DIOPAIESBase> ;
  } ;

  template<typename... T> 
  using PAIESPack  = Register<0x40004C18, 16, ReadWriteMode, DIOPAIESBase, T...> ;

  struct DIOPAIEBase {} ;

  struct PAIE : public RegisterBase<0x40004C1A, 16, ReadWriteMode>
  {
    using P1IE = DIO_PAIE_PIE_Values<DIO::PAIE, 0, 8, ReadWriteMode, DIOPAIEBase> ;
    using P2IE = DIO_PAIE_PIE_Values<DIO::PAIE, 8, 8, ReadWriteMode, DIOPAIEBase> ;
  } ;

  template<typename... T> 
  using PAIEPack  = Register<0x40004C1A, 16, ReadWriteMode, DIOPAIEBase, T...> ;

  struct DIOPAIFGBase {} ;

  struct PAIFG : public RegisterBase<0x40004C1C, 16, ReadWriteMode>
  {
    using P1IFG = DIO_PAIFG_PIFG_Values<DIO::PAIFG, 0, 8, ReadWriteMode, DIOPAIFGBase> ;
    using P2IFG = DIO_PAIFG_PIFG_Values<DIO::PAIFG, 8, 8, ReadWriteMode, DIOPAIFGBase> ;
  } ;

  template<typename... T> 
  using PAIFGPack  = Register<0x40004C1C, 16, ReadWriteMode, DIOPAIFGBase, T...> ;

  struct DIOP2IVBase {} ;

  struct P2IV : public RegisterBase<0x40004C1E, 16, ReadMode>
  {
    using P2IVField = DIO_PIV_PIV_Values<DIO::P2IV, 0, 5, ReadMode, DIOP2IVBase> ;
  } ;

  template<typename... T> 
  using P2IVPack  = Register<0x40004C1E, 16, ReadMode, DIOP2IVBase, T...> ;

  struct DIOPBINBase {} ;

  struct PBIN : public RegisterBase<0x40004C20, 16, ReadMode>
  {
    using P3IN = DIO_PBIN_PIN_Values<DIO::PBIN, 0, 8, ReadMode, DIOPBINBase> ;
    using P4IN = DIO_PBIN_PIN_Values<DIO::PBIN, 8, 8, ReadMode, DIOPBINBase> ;
  } ;

  template<typename... T> 
  using PBINPack  = Register<0x40004C20, 16, ReadMode, DIOPBINBase, T...> ;

  struct DIOPBOUTBase {} ;

  struct PBOUT : public RegisterBase<0x40004C22, 16, ReadWriteMode>
  {
    using P3OUT = DIO_PBOUT_POUT_Values<DIO::PBOUT, 0, 8, ReadWriteMode, DIOPBOUTBase> ;
    using P4OUT = DIO_PBOUT_POUT_Values<DIO::PBOUT, 8, 8, ReadWriteMode, DIOPBOUTBase> ;
  } ;

  template<typename... T> 
  using PBOUTPack  = Register<0x40004C22, 16, ReadWriteMode, DIOPBOUTBase, T...> ;

  struct DIOPBDIRBase {} ;

  struct PBDIR : public RegisterBase<0x40004C24, 16, ReadWriteMode>
  {
    using P3DIR = DIO_PBDIR_PDIR_Values<DIO::PBDIR, 0, 8, ReadWriteMode, DIOPBDIRBase> ;
    using P4DIR = DIO_PBDIR_PDIR_Values<DIO::PBDIR, 8, 8, ReadWriteMode, DIOPBDIRBase> ;
  } ;

  template<typename... T> 
  using PBDIRPack  = Register<0x40004C24, 16, ReadWriteMode, DIOPBDIRBase, T...> ;

  struct DIOPBRENBase {} ;

  struct PBREN : public RegisterBase<0x40004C26, 16, ReadWriteMode>
  {
    using P3REN = DIO_PBREN_PREN_Values<DIO::PBREN, 0, 8, ReadWriteMode, DIOPBRENBase> ;
    using P4REN = DIO_PBREN_PREN_Values<DIO::PBREN, 8, 8, ReadWriteMode, DIOPBRENBase> ;
  } ;

  template<typename... T> 
  using PBRENPack  = Register<0x40004C26, 16, ReadWriteMode, DIOPBRENBase, T...> ;

  struct DIOPBDSBase {} ;

  struct PBDS : public RegisterBase<0x40004C28, 16, ReadWriteMode>
  {
    using P3DS = DIO_PBDS_PDS_Values<DIO::PBDS, 0, 8, ReadWriteMode, DIOPBDSBase> ;
    using P4DS = DIO_PBDS_PDS_Values<DIO::PBDS, 8, 8, ReadWriteMode, DIOPBDSBase> ;
  } ;

  template<typename... T> 
  using PBDSPack  = Register<0x40004C28, 16, ReadWriteMode, DIOPBDSBase, T...> ;

  struct DIOPBSEL0Base {} ;

  struct PBSEL0 : public RegisterBase<0x40004C2A, 16, ReadWriteMode>
  {
    using P4SEL0 = DIO_PBSEL_PSEL_Values<DIO::PBSEL0, 8, 8, ReadWriteMode, DIOPBSEL0Base> ;
    using P3SEL0 = DIO_PBSEL_PSEL_Values<DIO::PBSEL0, 0, 8, ReadWriteMode, DIOPBSEL0Base> ;
  } ;

  template<typename... T> 
  using PBSEL0Pack  = Register<0x40004C2A, 16, ReadWriteMode, DIOPBSEL0Base, T...> ;

  struct DIOPBSEL1Base {} ;

  struct PBSEL1 : public RegisterBase<0x40004C2C, 16, ReadWriteMode>
  {
    using P3SEL1 = DIO_PBSEL_PSEL_Values<DIO::PBSEL1, 0, 8, ReadWriteMode, DIOPBSEL1Base> ;
    using P4SEL1 = DIO_PBSEL_PSEL_Values<DIO::PBSEL1, 8, 8, ReadWriteMode, DIOPBSEL1Base> ;
  } ;

  template<typename... T> 
  using PBSEL1Pack  = Register<0x40004C2C, 16, ReadWriteMode, DIOPBSEL1Base, T...> ;

  struct DIOP3IVBase {} ;

  struct P3IV : public RegisterBase<0x40004C2E, 16, ReadMode>
  {
    using P3IVField = DIO_PIV_PIV_Values<DIO::P3IV, 0, 5, ReadMode, DIOP3IVBase> ;
  } ;

  template<typename... T> 
  using P3IVPack  = Register<0x40004C2E, 16, ReadMode, DIOP3IVBase, T...> ;

  struct DIOPBSELCBase {} ;

  struct PBSELC : public RegisterBase<0x40004C36, 16, ReadWriteMode>
  {
    using P3SELC = DIO_PBSELC_PSELC_Values<DIO::PBSELC, 0, 8, ReadWriteMode, DIOPBSELCBase> ;
    using P4SELC = DIO_PBSELC_PSELC_Values<DIO::PBSELC, 8, 8, ReadWriteMode, DIOPBSELCBase> ;
  } ;

  template<typename... T> 
  using PBSELCPack  = Register<0x40004C36, 16, ReadWriteMode, DIOPBSELCBase, T...> ;

  struct DIOPBIESBase {} ;

  struct PBIES : public RegisterBase<0x40004C38, 16, ReadWriteMode>
  {
    using P3IES = DIO_PBIES_PIES_Values<DIO::PBIES, 0, 8, ReadWriteMode, DIOPBIESBase> ;
    using P4IES = DIO_PBIES_PIES_Values<DIO::PBIES, 8, 8, ReadWriteMode, DIOPBIESBase> ;
  } ;

  template<typename... T> 
  using PBIESPack  = Register<0x40004C38, 16, ReadWriteMode, DIOPBIESBase, T...> ;

  struct DIOPBIEBase {} ;

  struct PBIE : public RegisterBase<0x40004C3A, 16, ReadWriteMode>
  {
    using P3IE = DIO_PBIE_PIE_Values<DIO::PBIE, 0, 8, ReadWriteMode, DIOPBIEBase> ;
    using P4IE = DIO_PBIE_PIE_Values<DIO::PBIE, 8, 8, ReadWriteMode, DIOPBIEBase> ;
  } ;

  template<typename... T> 
  using PBIEPack  = Register<0x40004C3A, 16, ReadWriteMode, DIOPBIEBase, T...> ;

  struct DIOPBIFGBase {} ;

  struct PBIFG : public RegisterBase<0x40004C3C, 16, ReadWriteMode>
  {
    using P3IFG = DIO_PBIFG_PIFG_Values<DIO::PBIFG, 0, 8, ReadWriteMode, DIOPBIFGBase> ;
    using P4IFG = DIO_PBIFG_PIFG_Values<DIO::PBIFG, 8, 8, ReadWriteMode, DIOPBIFGBase> ;
  } ;

  template<typename... T> 
  using PBIFGPack  = Register<0x40004C3C, 16, ReadWriteMode, DIOPBIFGBase, T...> ;

  struct DIOP4IVBase {} ;

  struct P4IV : public RegisterBase<0x40004C3E, 16, ReadMode>
  {
    using P4IVField = DIO_PIV_PIV_Values<DIO::P4IV, 0, 5, ReadMode, DIOP4IVBase> ;
  } ;

  template<typename... T> 
  using P4IVPack  = Register<0x40004C3E, 16, ReadMode, DIOP4IVBase, T...> ;

  struct DIOPCINBase {} ;

  struct PCIN : public RegisterBase<0x40004C40, 16, ReadMode>
  {
    using P5IN = DIO_PCIN_PIN_Values<DIO::PCIN, 0, 8, ReadMode, DIOPCINBase> ;
    using P6IN = DIO_PCIN_PIN_Values<DIO::PCIN, 8, 8, ReadMode, DIOPCINBase> ;
  } ;

  template<typename... T> 
  using PCINPack  = Register<0x40004C40, 16, ReadMode, DIOPCINBase, T...> ;

  struct DIOPCOUTBase {} ;

  struct PCOUT : public RegisterBase<0x40004C42, 16, ReadWriteMode>
  {
    using P5OUT = DIO_PCOUT_POUT_Values<DIO::PCOUT, 0, 8, ReadWriteMode, DIOPCOUTBase> ;
    using P6OUT = DIO_PCOUT_POUT_Values<DIO::PCOUT, 8, 8, ReadWriteMode, DIOPCOUTBase> ;
  } ;

  template<typename... T> 
  using PCOUTPack  = Register<0x40004C42, 16, ReadWriteMode, DIOPCOUTBase, T...> ;

  struct DIOPCDIRBase {} ;

  struct PCDIR : public RegisterBase<0x40004C44, 16, ReadWriteMode>
  {
    using P5DIR = DIO_PCDIR_PDIR_Values<DIO::PCDIR, 0, 8, ReadWriteMode, DIOPCDIRBase> ;
    using P6DIR = DIO_PCDIR_PDIR_Values<DIO::PCDIR, 8, 8, ReadWriteMode, DIOPCDIRBase> ;
  } ;

  template<typename... T> 
  using PCDIRPack  = Register<0x40004C44, 16, ReadWriteMode, DIOPCDIRBase, T...> ;

  struct DIOPCRENBase {} ;

  struct PCREN : public RegisterBase<0x40004C46, 16, ReadWriteMode>
  {
    using P5REN = DIO_PCREN_PREN_Values<DIO::PCREN, 0, 8, ReadWriteMode, DIOPCRENBase> ;
    using P6REN = DIO_PCREN_PREN_Values<DIO::PCREN, 8, 8, ReadWriteMode, DIOPCRENBase> ;
  } ;

  template<typename... T> 
  using PCRENPack  = Register<0x40004C46, 16, ReadWriteMode, DIOPCRENBase, T...> ;

  struct DIOPCDSBase {} ;

  struct PCDS : public RegisterBase<0x40004C48, 16, ReadWriteMode>
  {
    using P5DS = DIO_PCDS_PDS_Values<DIO::PCDS, 0, 8, ReadWriteMode, DIOPCDSBase> ;
    using P6DS = DIO_PCDS_PDS_Values<DIO::PCDS, 8, 8, ReadWriteMode, DIOPCDSBase> ;
  } ;

  template<typename... T> 
  using PCDSPack  = Register<0x40004C48, 16, ReadWriteMode, DIOPCDSBase, T...> ;

  struct DIOPCSEL0Base {} ;

  struct PCSEL0 : public RegisterBase<0x40004C4A, 16, ReadWriteMode>
  {
    using P5SEL0 = DIO_PCSEL_PSEL_Values<DIO::PCSEL0, 0, 8, ReadWriteMode, DIOPCSEL0Base> ;
    using P6SEL0 = DIO_PCSEL_PSEL_Values<DIO::PCSEL0, 8, 8, ReadWriteMode, DIOPCSEL0Base> ;
  } ;

  template<typename... T> 
  using PCSEL0Pack  = Register<0x40004C4A, 16, ReadWriteMode, DIOPCSEL0Base, T...> ;

  struct DIOPCSEL1Base {} ;

  struct PCSEL1 : public RegisterBase<0x40004C4C, 16, ReadWriteMode>
  {
    using P5SEL1 = DIO_PCSEL_PSEL_Values<DIO::PCSEL1, 0, 8, ReadWriteMode, DIOPCSEL1Base> ;
    using P6SEL1 = DIO_PCSEL_PSEL_Values<DIO::PCSEL1, 8, 8, ReadWriteMode, DIOPCSEL1Base> ;
  } ;

  template<typename... T> 
  using PCSEL1Pack  = Register<0x40004C4C, 16, ReadWriteMode, DIOPCSEL1Base, T...> ;

  struct DIOP5IVBase {} ;

  struct P5IV : public RegisterBase<0x40004C4E, 16, ReadMode>
  {
    using P5IVField = DIO_PIV_PIV_Values<DIO::P5IV, 0, 5, ReadMode, DIOP5IVBase> ;
  } ;

  template<typename... T> 
  using P5IVPack  = Register<0x40004C4E, 16, ReadMode, DIOP5IVBase, T...> ;

  struct DIOPCSELCBase {} ;

  struct PCSELC : public RegisterBase<0x40004C56, 16, ReadWriteMode>
  {
    using P5SELC = DIO_PCSELC_PSELC_Values<DIO::PCSELC, 0, 8, ReadWriteMode, DIOPCSELCBase> ;
    using P6SELC = DIO_PCSELC_PSELC_Values<DIO::PCSELC, 8, 8, ReadWriteMode, DIOPCSELCBase> ;
  } ;

  template<typename... T> 
  using PCSELCPack  = Register<0x40004C56, 16, ReadWriteMode, DIOPCSELCBase, T...> ;

  struct DIOPCIESBase {} ;

  struct PCIES : public RegisterBase<0x40004C58, 16, ReadWriteMode>
  {
    using P5IES = DIO_PCIES_PIES_Values<DIO::PCIES, 0, 8, ReadWriteMode, DIOPCIESBase> ;
    using P6IES = DIO_PCIES_PIES_Values<DIO::PCIES, 8, 8, ReadWriteMode, DIOPCIESBase> ;
  } ;

  template<typename... T> 
  using PCIESPack  = Register<0x40004C58, 16, ReadWriteMode, DIOPCIESBase, T...> ;

  struct DIOPCIEBase {} ;

  struct PCIE : public RegisterBase<0x40004C5A, 16, ReadWriteMode>
  {
    using P5IE = DIO_PCIE_PIE_Values<DIO::PCIE, 0, 8, ReadWriteMode, DIOPCIEBase> ;
    using P6IE = DIO_PCIE_PIE_Values<DIO::PCIE, 8, 8, ReadWriteMode, DIOPCIEBase> ;
  } ;

  template<typename... T> 
  using PCIEPack  = Register<0x40004C5A, 16, ReadWriteMode, DIOPCIEBase, T...> ;

  struct DIOPCIFGBase {} ;

  struct PCIFG : public RegisterBase<0x40004C5C, 16, ReadWriteMode>
  {
    using P5IFG = DIO_PCIFG_PIFG_Values<DIO::PCIFG, 0, 8, ReadWriteMode, DIOPCIFGBase> ;
    using P6IFG = DIO_PCIFG_PIFG_Values<DIO::PCIFG, 8, 8, ReadWriteMode, DIOPCIFGBase> ;
  } ;

  template<typename... T> 
  using PCIFGPack  = Register<0x40004C5C, 16, ReadWriteMode, DIOPCIFGBase, T...> ;

  struct DIOP6IVBase {} ;

  struct P6IV : public RegisterBase<0x40004C5E, 16, ReadMode>
  {
    using P6IVField = DIO_PIV_PIV_Values<DIO::P6IV, 0, 5, ReadMode, DIOP6IVBase> ;
  } ;

  template<typename... T> 
  using P6IVPack  = Register<0x40004C5E, 16, ReadMode, DIOP6IVBase, T...> ;

  struct DIOPDINBase {} ;

  struct PDIN : public RegisterBase<0x40004C60, 16, ReadMode>
  {
    using P7IN = DIO_PDIN_PIN_Values<DIO::PDIN, 0, 8, ReadMode, DIOPDINBase> ;
    using P8IN = DIO_PDIN_PIN_Values<DIO::PDIN, 8, 8, ReadMode, DIOPDINBase> ;
  } ;

  template<typename... T> 
  using PDINPack  = Register<0x40004C60, 16, ReadMode, DIOPDINBase, T...> ;

  struct DIOPDOUTBase {} ;

  struct PDOUT : public RegisterBase<0x40004C62, 16, ReadWriteMode>
  {
    using P7OUT = DIO_PDOUT_POUT_Values<DIO::PDOUT, 0, 8, ReadWriteMode, DIOPDOUTBase> ;
    using P8OUT = DIO_PDOUT_POUT_Values<DIO::PDOUT, 8, 8, ReadWriteMode, DIOPDOUTBase> ;
  } ;

  template<typename... T> 
  using PDOUTPack  = Register<0x40004C62, 16, ReadWriteMode, DIOPDOUTBase, T...> ;

  struct DIOPDDIRBase {} ;

  struct PDDIR : public RegisterBase<0x40004C64, 16, ReadWriteMode>
  {
    using P7DIR = DIO_PDDIR_PDIR_Values<DIO::PDDIR, 0, 8, ReadWriteMode, DIOPDDIRBase> ;
    using P8DIR = DIO_PDDIR_PDIR_Values<DIO::PDDIR, 8, 8, ReadWriteMode, DIOPDDIRBase> ;
  } ;

  template<typename... T> 
  using PDDIRPack  = Register<0x40004C64, 16, ReadWriteMode, DIOPDDIRBase, T...> ;

  struct DIOPDRENBase {} ;

  struct PDREN : public RegisterBase<0x40004C66, 16, ReadWriteMode>
  {
    using P7REN = DIO_PDREN_PREN_Values<DIO::PDREN, 0, 8, ReadWriteMode, DIOPDRENBase> ;
    using P8REN = DIO_PDREN_PREN_Values<DIO::PDREN, 8, 8, ReadWriteMode, DIOPDRENBase> ;
  } ;

  template<typename... T> 
  using PDRENPack  = Register<0x40004C66, 16, ReadWriteMode, DIOPDRENBase, T...> ;

  struct DIOPDDSBase {} ;

  struct PDDS : public RegisterBase<0x40004C68, 16, ReadWriteMode>
  {
    using P7DS = DIO_PDDS_PDS_Values<DIO::PDDS, 0, 8, ReadWriteMode, DIOPDDSBase> ;
    using P8DS = DIO_PDDS_PDS_Values<DIO::PDDS, 8, 8, ReadWriteMode, DIOPDDSBase> ;
  } ;

  template<typename... T> 
  using PDDSPack  = Register<0x40004C68, 16, ReadWriteMode, DIOPDDSBase, T...> ;

  struct DIOPDSEL0Base {} ;

  struct PDSEL0 : public RegisterBase<0x40004C6A, 16, ReadWriteMode>
  {
    using P7SEL0 = DIO_PDSEL_PSEL_Values<DIO::PDSEL0, 0, 8, ReadWriteMode, DIOPDSEL0Base> ;
    using P8SEL0 = DIO_PDSEL_PSEL_Values<DIO::PDSEL0, 8, 8, ReadWriteMode, DIOPDSEL0Base> ;
  } ;

  template<typename... T> 
  using PDSEL0Pack  = Register<0x40004C6A, 16, ReadWriteMode, DIOPDSEL0Base, T...> ;

  struct DIOPDSEL1Base {} ;

  struct PDSEL1 : public RegisterBase<0x40004C6C, 16, ReadWriteMode>
  {
    using P7SEL1 = DIO_PDSEL_PSEL_Values<DIO::PDSEL1, 0, 8, ReadWriteMode, DIOPDSEL1Base> ;
    using P8SEL1 = DIO_PDSEL_PSEL_Values<DIO::PDSEL1, 8, 8, ReadWriteMode, DIOPDSEL1Base> ;
  } ;

  template<typename... T> 
  using PDSEL1Pack  = Register<0x40004C6C, 16, ReadWriteMode, DIOPDSEL1Base, T...> ;

  struct DIOP7IVBase {} ;

  struct P7IV : public RegisterBase<0x40004C6E, 16, ReadMode>
  {
    using P7IVField = DIO_PIV_PIV_Values<DIO::P7IV, 0, 5, ReadMode, DIOP7IVBase> ;
  } ;

  template<typename... T> 
  using P7IVPack  = Register<0x40004C6E, 16, ReadMode, DIOP7IVBase, T...> ;

  struct DIOPDSELCBase {} ;

  struct PDSELC : public RegisterBase<0x40004C76, 16, ReadWriteMode>
  {
    using P7SELC = DIO_PDSELC_PSELC_Values<DIO::PDSELC, 0, 8, ReadWriteMode, DIOPDSELCBase> ;
    using P8SELC = DIO_PDSELC_PSELC_Values<DIO::PDSELC, 8, 8, ReadWriteMode, DIOPDSELCBase> ;
  } ;

  template<typename... T> 
  using PDSELCPack  = Register<0x40004C76, 16, ReadWriteMode, DIOPDSELCBase, T...> ;

  struct DIOPDIESBase {} ;

  struct PDIES : public RegisterBase<0x40004C78, 16, ReadWriteMode>
  {
    using P7IES = DIO_PDIES_PIES_Values<DIO::PDIES, 0, 8, ReadWriteMode, DIOPDIESBase> ;
    using P8IES = DIO_PDIES_PIES_Values<DIO::PDIES, 8, 8, ReadWriteMode, DIOPDIESBase> ;
  } ;

  template<typename... T> 
  using PDIESPack  = Register<0x40004C78, 16, ReadWriteMode, DIOPDIESBase, T...> ;

  struct DIOPDIEBase {} ;

  struct PDIE : public RegisterBase<0x40004C7A, 16, ReadWriteMode>
  {
    using P7IE = DIO_PDIE_PIE_Values<DIO::PDIE, 0, 8, ReadWriteMode, DIOPDIEBase> ;
    using P8IE = DIO_PDIE_PIE_Values<DIO::PDIE, 8, 8, ReadWriteMode, DIOPDIEBase> ;
  } ;

  template<typename... T> 
  using PDIEPack  = Register<0x40004C7A, 16, ReadWriteMode, DIOPDIEBase, T...> ;

  struct DIOPDIFGBase {} ;

  struct PDIFG : public RegisterBase<0x40004C7C, 16, ReadWriteMode>
  {
    using P7IFG = DIO_PDIFG_PIFG_Values<DIO::PDIFG, 0, 8, ReadWriteMode, DIOPDIFGBase> ;
    using P8IFG = DIO_PDIFG_PIFG_Values<DIO::PDIFG, 8, 8, ReadWriteMode, DIOPDIFGBase> ;
  } ;

  template<typename... T> 
  using PDIFGPack  = Register<0x40004C7C, 16, ReadWriteMode, DIOPDIFGBase, T...> ;

  struct DIOP8IVBase {} ;

  struct P8IV : public RegisterBase<0x40004C7E, 16, ReadMode>
  {
    using P8IVField = DIO_PIV_PIV_Values<DIO::P8IV, 0, 5, ReadMode, DIOP8IVBase> ;
  } ;

  template<typename... T> 
  using P8IVPack  = Register<0x40004C7E, 16, ReadMode, DIOP8IVBase, T...> ;

  struct DIOPEINBase {} ;

  struct PEIN : public RegisterBase<0x40004C80, 16, ReadMode>
  {
    using P9IN = DIO_PEIN_PIN_Values<DIO::PEIN, 0, 8, ReadMode, DIOPEINBase> ;
    using P10IN = DIO_PEIN_PIN_Values<DIO::PEIN, 8, 8, ReadMode, DIOPEINBase> ;
  } ;

  template<typename... T> 
  using PEINPack  = Register<0x40004C80, 16, ReadMode, DIOPEINBase, T...> ;

  struct DIOPEOUTBase {} ;

  struct PEOUT : public RegisterBase<0x40004C82, 16, ReadWriteMode>
  {
    using P9OUT = DIO_PEOUT_POUT_Values<DIO::PEOUT, 0, 8, ReadWriteMode, DIOPEOUTBase> ;
    using P10OUT = DIO_PEOUT_POUT_Values<DIO::PEOUT, 8, 8, ReadWriteMode, DIOPEOUTBase> ;
  } ;

  template<typename... T> 
  using PEOUTPack  = Register<0x40004C82, 16, ReadWriteMode, DIOPEOUTBase, T...> ;

  struct DIOPEDIRBase {} ;

  struct PEDIR : public RegisterBase<0x40004C84, 16, ReadWriteMode>
  {
    using P9DIR = DIO_PEDIR_PDIR_Values<DIO::PEDIR, 0, 8, ReadWriteMode, DIOPEDIRBase> ;
    using P10DIR = DIO_PEDIR_PDIR_Values<DIO::PEDIR, 8, 8, ReadWriteMode, DIOPEDIRBase> ;
  } ;

  template<typename... T> 
  using PEDIRPack  = Register<0x40004C84, 16, ReadWriteMode, DIOPEDIRBase, T...> ;

  struct DIOPERENBase {} ;

  struct PEREN : public RegisterBase<0x40004C86, 16, ReadWriteMode>
  {
    using P9REN = DIO_PEREN_PREN_Values<DIO::PEREN, 0, 8, ReadWriteMode, DIOPERENBase> ;
    using P10REN = DIO_PEREN_PREN_Values<DIO::PEREN, 8, 8, ReadWriteMode, DIOPERENBase> ;
  } ;

  template<typename... T> 
  using PERENPack  = Register<0x40004C86, 16, ReadWriteMode, DIOPERENBase, T...> ;

  struct DIOPEDSBase {} ;

  struct PEDS : public RegisterBase<0x40004C88, 16, ReadWriteMode>
  {
    using P9DS = DIO_PEDS_PDS_Values<DIO::PEDS, 0, 8, ReadWriteMode, DIOPEDSBase> ;
    using P10DS = DIO_PEDS_PDS_Values<DIO::PEDS, 8, 8, ReadWriteMode, DIOPEDSBase> ;
  } ;

  template<typename... T> 
  using PEDSPack  = Register<0x40004C88, 16, ReadWriteMode, DIOPEDSBase, T...> ;

  struct DIOPESEL0Base {} ;

  struct PESEL0 : public RegisterBase<0x40004C8A, 16, ReadWriteMode>
  {
    using P9SEL0 = DIO_PESEL_PSEL_Values<DIO::PESEL0, 0, 8, ReadWriteMode, DIOPESEL0Base> ;
    using P10SEL0 = DIO_PESEL_PSEL_Values<DIO::PESEL0, 8, 8, ReadWriteMode, DIOPESEL0Base> ;
  } ;

  template<typename... T> 
  using PESEL0Pack  = Register<0x40004C8A, 16, ReadWriteMode, DIOPESEL0Base, T...> ;

  struct DIOPESEL1Base {} ;

  struct PESEL1 : public RegisterBase<0x40004C8C, 16, ReadWriteMode>
  {
    using P9SEL1 = DIO_PESEL_PSEL_Values<DIO::PESEL1, 0, 8, ReadWriteMode, DIOPESEL1Base> ;
    using P10SEL1 = DIO_PESEL_PSEL_Values<DIO::PESEL1, 8, 8, ReadWriteMode, DIOPESEL1Base> ;
  } ;

  template<typename... T> 
  using PESEL1Pack  = Register<0x40004C8C, 16, ReadWriteMode, DIOPESEL1Base, T...> ;

  struct DIOP9IVBase {} ;

  struct P9IV : public RegisterBase<0x40004C8E, 16, ReadMode>
  {
    using P9IVField = DIO_PIV_PIV_Values<DIO::P9IV, 0, 5, ReadMode, DIOP9IVBase> ;
  } ;

  template<typename... T> 
  using P9IVPack  = Register<0x40004C8E, 16, ReadMode, DIOP9IVBase, T...> ;

  struct DIOPESELCBase {} ;

  struct PESELC : public RegisterBase<0x40004C96, 16, ReadWriteMode>
  {
    using P9SELC = DIO_PESELC_PSELC_Values<DIO::PESELC, 0, 8, ReadWriteMode, DIOPESELCBase> ;
    using P10SELC = DIO_PESELC_PSELC_Values<DIO::PESELC, 8, 8, ReadWriteMode, DIOPESELCBase> ;
  } ;

  template<typename... T> 
  using PESELCPack  = Register<0x40004C96, 16, ReadWriteMode, DIOPESELCBase, T...> ;

  struct DIOPEIESBase {} ;

  struct PEIES : public RegisterBase<0x40004C98, 16, ReadWriteMode>
  {
    using P9IES = DIO_PEIES_PIES_Values<DIO::PEIES, 0, 8, ReadWriteMode, DIOPEIESBase> ;
    using P10IES = DIO_PEIES_PIES_Values<DIO::PEIES, 8, 8, ReadWriteMode, DIOPEIESBase> ;
  } ;

  template<typename... T> 
  using PEIESPack  = Register<0x40004C98, 16, ReadWriteMode, DIOPEIESBase, T...> ;

  struct DIOPEIEBase {} ;

  struct PEIE : public RegisterBase<0x40004C9A, 16, ReadWriteMode>
  {
    using P9IE = DIO_PEIE_PIE_Values<DIO::PEIE, 0, 8, ReadWriteMode, DIOPEIEBase> ;
    using P10IE = DIO_PEIE_PIE_Values<DIO::PEIE, 8, 8, ReadWriteMode, DIOPEIEBase> ;
  } ;

  template<typename... T> 
  using PEIEPack  = Register<0x40004C9A, 16, ReadWriteMode, DIOPEIEBase, T...> ;

  struct DIOPEIFGBase {} ;

  struct PEIFG : public RegisterBase<0x40004C9C, 16, ReadWriteMode>
  {
    using P9IFG = DIO_PEIFG_PIFG_Values<DIO::PEIFG, 0, 8, ReadWriteMode, DIOPEIFGBase> ;
    using P10IFG = DIO_PEIFG_PIFG_Values<DIO::PEIFG, 8, 8, ReadWriteMode, DIOPEIFGBase> ;
  } ;

  template<typename... T> 
  using PEIFGPack  = Register<0x40004C9C, 16, ReadWriteMode, DIOPEIFGBase, T...> ;

  struct DIOP10IVBase {} ;

  struct P10IV : public RegisterBase<0x40004C9E, 16, ReadMode>
  {
    using P10IVField = DIO_PIV_PIV_Values<DIO::P10IV, 0, 5, ReadMode, DIOP10IVBase> ;
  } ;

  template<typename... T> 
  using P10IVPack  = Register<0x40004C9E, 16, ReadMode, DIOP10IVBase, T...> ;

  struct DIOPJINBase {} ;

  struct PJIN : public RegisterBase<0x40004D20, 16, ReadMode>
  {
    using PJINField = DIO_PJIN_PJIN_Values<DIO::PJIN, 0, 16, ReadMode, DIOPJINBase> ;
  } ;

  template<typename... T> 
  using PJINPack  = Register<0x40004D20, 16, ReadMode, DIOPJINBase, T...> ;

  struct DIOPJOUTBase {} ;

  struct PJOUT : public RegisterBase<0x40004D22, 16, ReadWriteMode>
  {
    using PJOUTField = DIO_PJOUT_PJOUT_Values<DIO::PJOUT, 0, 16, ReadWriteMode, DIOPJOUTBase> ;
  } ;

  template<typename... T> 
  using PJOUTPack  = Register<0x40004D22, 16, ReadWriteMode, DIOPJOUTBase, T...> ;

  struct DIOPJDIRBase {} ;

  struct PJDIR : public RegisterBase<0x40004D24, 16, ReadWriteMode>
  {
    using PJDIRField = DIO_PJDIR_PJDIR_Values<DIO::PJDIR, 0, 16, ReadWriteMode, DIOPJDIRBase> ;
  } ;

  template<typename... T> 
  using PJDIRPack  = Register<0x40004D24, 16, ReadWriteMode, DIOPJDIRBase, T...> ;

  struct DIOPJRENBase {} ;

  struct PJREN : public RegisterBase<0x40004D26, 16, ReadWriteMode>
  {
    using PJRENField = DIO_PJREN_PJREN_Values<DIO::PJREN, 0, 16, ReadWriteMode, DIOPJRENBase> ;
  } ;

  template<typename... T> 
  using PJRENPack  = Register<0x40004D26, 16, ReadWriteMode, DIOPJRENBase, T...> ;

  struct DIOPJDSBase {} ;

  struct PJDS : public RegisterBase<0x40004D28, 16, ReadWriteMode>
  {
    using PJDSField = DIO_PJDS_PJDS_Values<DIO::PJDS, 0, 16, ReadWriteMode, DIOPJDSBase> ;
  } ;

  template<typename... T> 
  using PJDSPack  = Register<0x40004D28, 16, ReadWriteMode, DIOPJDSBase, T...> ;

  struct DIOPJSEL0Base {} ;

  struct PJSEL0 : public RegisterBase<0x40004D2A, 16, ReadWriteMode>
  {
    using PJSEL0Field = DIO_PJSEL_PJSEL_Values<DIO::PJSEL0, 0, 16, ReadWriteMode, DIOPJSEL0Base> ;
  } ;

  template<typename... T> 
  using PJSEL0Pack  = Register<0x40004D2A, 16, ReadWriteMode, DIOPJSEL0Base, T...> ;

  struct DIOPJSEL1Base {} ;

  struct PJSEL1 : public RegisterBase<0x40004D2C, 16, ReadWriteMode>
  {
    using PJSEL1Field = DIO_PJSEL_PJSEL_Values<DIO::PJSEL1, 0, 16, ReadWriteMode, DIOPJSEL1Base> ;
  } ;

  template<typename... T> 
  using PJSEL1Pack  = Register<0x40004D2C, 16, ReadWriteMode, DIOPJSEL1Base, T...> ;

  struct DIOPJSELCBase {} ;

  struct PJSELC : public RegisterBase<0x40004D36, 16, ReadWriteMode>
  {
    using PJSELCField = DIO_PJSELC_PJSELC_Values<DIO::PJSELC, 0, 16, ReadWriteMode, DIOPJSELCBase> ;
  } ;

  template<typename... T> 
  using PJSELCPack  = Register<0x40004D36, 16, ReadWriteMode, DIOPJSELCBase, T...> ;

} ;

#endif //#if !defined(DIOREGISTERS_HPP)
