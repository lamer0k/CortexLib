/*******************************************************************************
* Filename      : euscib3registers.hpp
*
* Details       : EUSCI_B3. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(EUSCIB3REGISTERS_HPP)
#define EUSCIB3REGISTERS_HPP

#include "euscib3bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EUSCI_B3
{
  struct EUSCI_B3UCBxCTLW0Base {} ;

  struct UCBxCTLW0 : public RegisterBase<0x40002C00, 16, ReadWriteMode>
  {
    using UCSWRST = EUSCI_B_UCBxCTLW_UCSWRST_Values<EUSCI_B3::UCBxCTLW0, 0, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCTXSTT = EUSCI_B_UCBxCTLW_UCTXSTT_Values<EUSCI_B3::UCBxCTLW0, 1, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCTXSTP = EUSCI_B_UCBxCTLW_UCTXSTP_Values<EUSCI_B3::UCBxCTLW0, 2, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCTXNACK = EUSCI_B_UCBxCTLW_UCTXNACK_Values<EUSCI_B3::UCBxCTLW0, 3, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCTR = EUSCI_B_UCBxCTLW_UCTR_Values<EUSCI_B3::UCBxCTLW0, 4, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCTXACK = EUSCI_B_UCBxCTLW_UCTXACK_Values<EUSCI_B3::UCBxCTLW0, 5, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCSSEL = EUSCI_B_UCBxCTLW_UCSSEL_Values<EUSCI_B3::UCBxCTLW0, 6, 2, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCSYNC = EUSCI_B_UCBxCTLW_UCSYNC_Values<EUSCI_B3::UCBxCTLW0, 8, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCMODE = EUSCI_B_UCBxCTLW_UCMODE_Values<EUSCI_B3::UCBxCTLW0, 9, 2, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCMST = EUSCI_B_UCBxCTLW_UCMST_Values<EUSCI_B3::UCBxCTLW0, 11, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCMM = EUSCI_B_UCBxCTLW_UCMM_Values<EUSCI_B3::UCBxCTLW0, 13, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCSLA10 = EUSCI_B_UCBxCTLW_UCSLA_Values<EUSCI_B3::UCBxCTLW0, 14, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
    using UCA10 = EUSCI_B_UCBxCTLW_UCA_Values<EUSCI_B3::UCBxCTLW0, 15, 1, ReadWriteMode, EUSCI_B3UCBxCTLW0Base> ;
  } ;

  template<typename... T> 
  using UCBxCTLW0Pack  = Register<0x40002C00, 16, ReadWriteMode, EUSCI_B3UCBxCTLW0Base, T...> ;

  struct EUSCI_B3UCBxCTLW1Base {} ;

  struct UCBxCTLW1 : public RegisterBase<0x40002C02, 16, ReadWriteMode>
  {
    using UCGLIT = EUSCI_B_UCBxCTLW_UCGLIT_Values<EUSCI_B3::UCBxCTLW1, 0, 2, ReadWriteMode, EUSCI_B3UCBxCTLW1Base> ;
    using UCASTP = EUSCI_B_UCBxCTLW_UCASTP_Values<EUSCI_B3::UCBxCTLW1, 2, 2, ReadWriteMode, EUSCI_B3UCBxCTLW1Base> ;
    using UCSWACK = EUSCI_B_UCBxCTLW_UCSWACK_Values<EUSCI_B3::UCBxCTLW1, 4, 1, ReadWriteMode, EUSCI_B3UCBxCTLW1Base> ;
    using UCSTPNACK = EUSCI_B_UCBxCTLW_UCSTPNACK_Values<EUSCI_B3::UCBxCTLW1, 5, 1, ReadWriteMode, EUSCI_B3UCBxCTLW1Base> ;
    using UCCLTO = EUSCI_B_UCBxCTLW_UCCLTO_Values<EUSCI_B3::UCBxCTLW1, 6, 2, ReadWriteMode, EUSCI_B3UCBxCTLW1Base> ;
    using UCETXINT = EUSCI_B_UCBxCTLW_UCETXINT_Values<EUSCI_B3::UCBxCTLW1, 8, 1, ReadWriteMode, EUSCI_B3UCBxCTLW1Base> ;
  } ;

  template<typename... T> 
  using UCBxCTLW1Pack  = Register<0x40002C02, 16, ReadWriteMode, EUSCI_B3UCBxCTLW1Base, T...> ;

  struct EUSCI_B3UCBxBRWBase {} ;

  struct UCBxBRW : public RegisterBase<0x40002C06, 16, ReadWriteMode>
  {
    using UCBR = EUSCI_B_UCBxBRW_UCBR_Values<EUSCI_B3::UCBxBRW, 0, 16, ReadWriteMode, EUSCI_B3UCBxBRWBase> ;
  } ;

  template<typename... T> 
  using UCBxBRWPack  = Register<0x40002C06, 16, ReadWriteMode, EUSCI_B3UCBxBRWBase, T...> ;

  struct EUSCI_B3UCBxSTATWBase {} ;

  struct UCBxSTATW : public RegisterBase<0x40002C08, 16, ReadWriteMode>
  {
    using UCBBUSY = EUSCI_B_UCBxSTATW_UCBBUSY_Values<EUSCI_B3::UCBxSTATW, 4, 1, ReadMode, EUSCI_B3UCBxSTATWBase> ;
    using UCGC = EUSCI_B_UCBxSTATW_UCGC_Values<EUSCI_B3::UCBxSTATW, 5, 1, ReadMode, EUSCI_B3UCBxSTATWBase> ;
    using UCSCLLOW = EUSCI_B_UCBxSTATW_UCSCLLOW_Values<EUSCI_B3::UCBxSTATW, 6, 1, ReadMode, EUSCI_B3UCBxSTATWBase> ;
    using UCBCNT = EUSCI_B_UCBxSTATW_UCBCNT_Values<EUSCI_B3::UCBxSTATW, 8, 8, ReadMode, EUSCI_B3UCBxSTATWBase> ;
  } ;

  template<typename... T> 
  using UCBxSTATWPack  = Register<0x40002C08, 16, ReadWriteMode, EUSCI_B3UCBxSTATWBase, T...> ;

  struct EUSCI_B3UCBxTBCNTBase {} ;

  struct UCBxTBCNT : public RegisterBase<0x40002C0A, 16, ReadWriteMode>
  {
    using UCTBCNT = EUSCI_B_UCBxTBCNT_UCTBCNT_Values<EUSCI_B3::UCBxTBCNT, 0, 8, ReadWriteMode, EUSCI_B3UCBxTBCNTBase> ;
  } ;

  template<typename... T> 
  using UCBxTBCNTPack  = Register<0x40002C0A, 16, ReadWriteMode, EUSCI_B3UCBxTBCNTBase, T...> ;

  struct EUSCI_B3UCBxRXBUFBase {} ;

  struct UCBxRXBUF : public RegisterBase<0x40002C0C, 16, ReadMode>
  {
    using UCRXBUF = EUSCI_B_UCBxRXBUF_UCRXBUF_Values<EUSCI_B3::UCBxRXBUF, 0, 8, ReadMode, EUSCI_B3UCBxRXBUFBase> ;
  } ;

  template<typename... T> 
  using UCBxRXBUFPack  = Register<0x40002C0C, 16, ReadMode, EUSCI_B3UCBxRXBUFBase, T...> ;

  struct EUSCI_B3UCBxTXBUFBase {} ;

  struct UCBxTXBUF : public RegisterBase<0x40002C0E, 16, ReadWriteMode>
  {
    using UCTXBUF = EUSCI_B_UCBxTXBUF_UCTXBUF_Values<EUSCI_B3::UCBxTXBUF, 0, 8, ReadWriteMode, EUSCI_B3UCBxTXBUFBase> ;
  } ;

  template<typename... T> 
  using UCBxTXBUFPack  = Register<0x40002C0E, 16, ReadWriteMode, EUSCI_B3UCBxTXBUFBase, T...> ;

  struct EUSCI_B3UCBxI2COA0Base {} ;

  struct UCBxI2COA0 : public RegisterBase<0x40002C14, 16, ReadWriteMode>
  {
    using I2COA0 = EUSCI_B_UCBxICOA_ICOA_Values<EUSCI_B3::UCBxI2COA0, 0, 10, ReadWriteMode, EUSCI_B3UCBxI2COA0Base> ;
    using UCOAEN = EUSCI_B_UCBxICOA_UCOAEN_Values<EUSCI_B3::UCBxI2COA0, 10, 1, ReadWriteMode, EUSCI_B3UCBxI2COA0Base> ;
    using UCGCEN = EUSCI_B_UCBxICOA_UCGCEN_Values<EUSCI_B3::UCBxI2COA0, 15, 1, ReadWriteMode, EUSCI_B3UCBxI2COA0Base> ;
  } ;

  template<typename... T> 
  using UCBxI2COA0Pack  = Register<0x40002C14, 16, ReadWriteMode, EUSCI_B3UCBxI2COA0Base, T...> ;

  struct EUSCI_B3UCBxI2COA1Base {} ;

  struct UCBxI2COA1 : public RegisterBase<0x40002C16, 16, ReadWriteMode>
  {
    using I2COA1 = EUSCI_B_UCBxICOA_ICOA_Values<EUSCI_B3::UCBxI2COA1, 0, 10, ReadWriteMode, EUSCI_B3UCBxI2COA1Base> ;
    using UCOAEN = EUSCI_B_UCBxICOA_UCOAEN_Values<EUSCI_B3::UCBxI2COA1, 10, 1, ReadWriteMode, EUSCI_B3UCBxI2COA1Base> ;
  } ;

  template<typename... T> 
  using UCBxI2COA1Pack  = Register<0x40002C16, 16, ReadWriteMode, EUSCI_B3UCBxI2COA1Base, T...> ;

  struct EUSCI_B3UCBxI2COA2Base {} ;

  struct UCBxI2COA2 : public RegisterBase<0x40002C18, 16, ReadWriteMode>
  {
    using I2COA2 = EUSCI_B_UCBxICOA_ICOA_Values<EUSCI_B3::UCBxI2COA2, 0, 10, ReadWriteMode, EUSCI_B3UCBxI2COA2Base> ;
    using UCOAEN = EUSCI_B_UCBxICOA_UCOAEN_Values<EUSCI_B3::UCBxI2COA2, 10, 1, ReadWriteMode, EUSCI_B3UCBxI2COA2Base> ;
  } ;

  template<typename... T> 
  using UCBxI2COA2Pack  = Register<0x40002C18, 16, ReadWriteMode, EUSCI_B3UCBxI2COA2Base, T...> ;

  struct EUSCI_B3UCBxI2COA3Base {} ;

  struct UCBxI2COA3 : public RegisterBase<0x40002C1A, 16, ReadWriteMode>
  {
    using I2COA3 = EUSCI_B_UCBxICOA_ICOA_Values<EUSCI_B3::UCBxI2COA3, 0, 10, ReadWriteMode, EUSCI_B3UCBxI2COA3Base> ;
    using UCOAEN = EUSCI_B_UCBxICOA_UCOAEN_Values<EUSCI_B3::UCBxI2COA3, 10, 1, ReadWriteMode, EUSCI_B3UCBxI2COA3Base> ;
  } ;

  template<typename... T> 
  using UCBxI2COA3Pack  = Register<0x40002C1A, 16, ReadWriteMode, EUSCI_B3UCBxI2COA3Base, T...> ;

  struct EUSCI_B3UCBxADDRXBase {} ;

  struct UCBxADDRX : public RegisterBase<0x40002C1C, 16, ReadMode>
  {
    using ADDRX = EUSCI_B_UCBxADDRX_ADDRX_Values<EUSCI_B3::UCBxADDRX, 0, 10, ReadMode, EUSCI_B3UCBxADDRXBase> ;
  } ;

  template<typename... T> 
  using UCBxADDRXPack  = Register<0x40002C1C, 16, ReadMode, EUSCI_B3UCBxADDRXBase, T...> ;

  struct EUSCI_B3UCBxADDMASKBase {} ;

  struct UCBxADDMASK : public RegisterBase<0x40002C1E, 16, ReadWriteMode>
  {
    using ADDMASK = EUSCI_B_UCBxADDMASK_ADDMASK_Values<EUSCI_B3::UCBxADDMASK, 0, 10, ReadWriteMode, EUSCI_B3UCBxADDMASKBase> ;
  } ;

  template<typename... T> 
  using UCBxADDMASKPack  = Register<0x40002C1E, 16, ReadWriteMode, EUSCI_B3UCBxADDMASKBase, T...> ;

  struct EUSCI_B3UCBxI2CSABase {} ;

  struct UCBxI2CSA : public RegisterBase<0x40002C20, 16, ReadWriteMode>
  {
    using I2CSA = EUSCI_B_UCBxICSA_ICSA_Values<EUSCI_B3::UCBxI2CSA, 0, 10, ReadWriteMode, EUSCI_B3UCBxI2CSABase> ;
  } ;

  template<typename... T> 
  using UCBxI2CSAPack  = Register<0x40002C20, 16, ReadWriteMode, EUSCI_B3UCBxI2CSABase, T...> ;

  struct EUSCI_B3UCBxIEBase {} ;

  struct UCBxIE : public RegisterBase<0x40002C2A, 16, ReadWriteMode>
  {
    using UCRXIE0 = EUSCI_B_UCBxIE_UCRXIE_Values<EUSCI_B3::UCBxIE, 0, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCTXIE0 = EUSCI_B_UCBxIE_UCTXIE_Values<EUSCI_B3::UCBxIE, 1, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCSTTIE = EUSCI_B_UCBxIE_UCSTTIE_Values<EUSCI_B3::UCBxIE, 2, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCSTPIE = EUSCI_B_UCBxIE_UCSTPIE_Values<EUSCI_B3::UCBxIE, 3, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCALIE = EUSCI_B_UCBxIE_UCALIE_Values<EUSCI_B3::UCBxIE, 4, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCNACKIE = EUSCI_B_UCBxIE_UCNACKIE_Values<EUSCI_B3::UCBxIE, 5, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCBCNTIE = EUSCI_B_UCBxIE_UCBCNTIE_Values<EUSCI_B3::UCBxIE, 6, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCCLTOIE = EUSCI_B_UCBxIE_UCCLTOIE_Values<EUSCI_B3::UCBxIE, 7, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCRXIE1 = EUSCI_B_UCBxIE_UCRXIE_Values<EUSCI_B3::UCBxIE, 8, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCTXIE1 = EUSCI_B_UCBxIE_UCTXIE_Values<EUSCI_B3::UCBxIE, 9, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCRXIE2 = EUSCI_B_UCBxIE_UCRXIE_Values<EUSCI_B3::UCBxIE, 10, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCTXIE2 = EUSCI_B_UCBxIE_UCTXIE_Values<EUSCI_B3::UCBxIE, 11, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCRXIE3 = EUSCI_B_UCBxIE_UCRXIE_Values<EUSCI_B3::UCBxIE, 12, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCTXIE3 = EUSCI_B_UCBxIE_UCTXIE_Values<EUSCI_B3::UCBxIE, 13, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
    using UCBIT9IE = EUSCI_B_UCBxIE_UCBITIE_Values<EUSCI_B3::UCBxIE, 14, 1, ReadWriteMode, EUSCI_B3UCBxIEBase> ;
  } ;

  template<typename... T> 
  using UCBxIEPack  = Register<0x40002C2A, 16, ReadWriteMode, EUSCI_B3UCBxIEBase, T...> ;

  struct EUSCI_B3UCBxIFGBase {} ;

  struct UCBxIFG : public RegisterBase<0x40002C2C, 16, ReadWriteMode>
  {
    using UCRXIFG0 = EUSCI_B_UCBxIFG_UCRXIFG_Values<EUSCI_B3::UCBxIFG, 0, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCTXIFG0 = EUSCI_B_UCBxIFG_UCTXIFG_Values<EUSCI_B3::UCBxIFG, 1, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCSTTIFG = EUSCI_B_UCBxIFG_UCSTTIFG_Values<EUSCI_B3::UCBxIFG, 2, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCSTPIFG = EUSCI_B_UCBxIFG_UCSTPIFG_Values<EUSCI_B3::UCBxIFG, 3, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCALIFG = EUSCI_B_UCBxIFG_UCALIFG_Values<EUSCI_B3::UCBxIFG, 4, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCNACKIFG = EUSCI_B_UCBxIFG_UCNACKIFG_Values<EUSCI_B3::UCBxIFG, 5, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCBCNTIFG = EUSCI_B_UCBxIFG_UCBCNTIFG_Values<EUSCI_B3::UCBxIFG, 6, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCCLTOIFG = EUSCI_B_UCBxIFG_UCCLTOIFG_Values<EUSCI_B3::UCBxIFG, 7, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCRXIFG1 = EUSCI_B_UCBxIFG_UCRXIFG_Values<EUSCI_B3::UCBxIFG, 8, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCTXIFG1 = EUSCI_B_UCBxIFG_UCTXIFG_Values<EUSCI_B3::UCBxIFG, 9, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCRXIFG2 = EUSCI_B_UCBxIFG_UCRXIFG_Values<EUSCI_B3::UCBxIFG, 10, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCTXIFG2 = EUSCI_B_UCBxIFG_UCTXIFG_Values<EUSCI_B3::UCBxIFG, 11, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCRXIFG3 = EUSCI_B_UCBxIFG_UCRXIFG_Values<EUSCI_B3::UCBxIFG, 12, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCTXIFG3 = EUSCI_B_UCBxIFG_UCTXIFG_Values<EUSCI_B3::UCBxIFG, 13, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
    using UCBIT9IFG = EUSCI_B_UCBxIFG_UCBITIFG_Values<EUSCI_B3::UCBxIFG, 14, 1, ReadWriteMode, EUSCI_B3UCBxIFGBase> ;
  } ;

  template<typename... T> 
  using UCBxIFGPack  = Register<0x40002C2C, 16, ReadWriteMode, EUSCI_B3UCBxIFGBase, T...> ;

  struct EUSCI_B3UCBxIVBase {} ;

  struct UCBxIV : public RegisterBase<0x40002C2E, 16, ReadMode>
  {
    using UCIV = EUSCI_B_UCBxIV_UCIV_Values<EUSCI_B3::UCBxIV, 0, 16, ReadMode, EUSCI_B3UCBxIVBase> ;
  } ;

  template<typename... T> 
  using UCBxIVPack  = Register<0x40002C2E, 16, ReadMode, EUSCI_B3UCBxIVBase, T...> ;

} ;

#endif //#if !defined(EUSCIB3REGISTERS_HPP)
