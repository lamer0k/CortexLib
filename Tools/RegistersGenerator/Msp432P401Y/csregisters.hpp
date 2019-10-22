/*******************************************************************************
* Filename      : csregisters.hpp
*
* Details       : CS. This header file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(CSREGISTERS_HPP)
#define CSREGISTERS_HPP

#include "csbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CS
{
  struct CSCSKEYBase {} ;

  struct CSKEY : public RegisterBase<0x40010400, 32, ReadWriteMode>
  {
    using CSKEYField = CS_CSKEY_CSKEY_Values<CS::CSKEY, 0, 16, ReadWriteMode, CSCSKEYBase> ;
  } ;

  template<typename... T> 
  using CSKEYPack  = Register<0x40010400, 32, ReadWriteMode, CSCSKEYBase, T...> ;

  struct CSCSCTL0Base {} ;

  struct CSCTL0 : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using DCOTUNE = CS_CSCTL_DCOTUNE_Values<CS::CSCTL0, 0, 10, ReadWriteMode, CSCSCTL0Base> ;
    using DCORSEL = CS_CSCTL_DCORSEL_Values<CS::CSCTL0, 16, 3, ReadWriteMode, CSCSCTL0Base> ;
    using DCORES = CS_CSCTL_DCORES_Values<CS::CSCTL0, 22, 1, ReadWriteMode, CSCSCTL0Base> ;
    using DCOEN = CS_CSCTL_DCOEN_Values<CS::CSCTL0, 23, 1, ReadWriteMode, CSCSCTL0Base> ;
  } ;

  template<typename... T> 
  using CSCTL0Pack  = Register<0x40010404, 32, ReadWriteMode, CSCSCTL0Base, T...> ;

  struct CSCSCTL1Base {} ;

  struct CSCTL1 : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using SELM = CS_CSCTL_SELM_Values<CS::CSCTL1, 0, 3, ReadWriteMode, CSCSCTL1Base> ;
    using SELS = CS_CSCTL_SELS_Values<CS::CSCTL1, 4, 3, ReadWriteMode, CSCSCTL1Base> ;
    using SELA = CS_CSCTL_SELA_Values<CS::CSCTL1, 8, 3, ReadWriteMode, CSCSCTL1Base> ;
    using SELB = CS_CSCTL_SELB_Values<CS::CSCTL1, 12, 1, ReadWriteMode, CSCSCTL1Base> ;
    using DIVM = CS_CSCTL_DIVM_Values<CS::CSCTL1, 16, 3, ReadWriteMode, CSCSCTL1Base> ;
    using DIVHS = CS_CSCTL_DIVHS_Values<CS::CSCTL1, 20, 3, ReadWriteMode, CSCSCTL1Base> ;
    using DIVA = CS_CSCTL_DIVA_Values<CS::CSCTL1, 24, 3, ReadWriteMode, CSCSCTL1Base> ;
    using DIVS = CS_CSCTL_DIVS_Values<CS::CSCTL1, 28, 3, ReadWriteMode, CSCSCTL1Base> ;
  } ;

  template<typename... T> 
  using CSCTL1Pack  = Register<0x40010408, 32, ReadWriteMode, CSCSCTL1Base, T...> ;

  struct CSCSCTL2Base {} ;

  struct CSCTL2 : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using LFXTDRIVE = CS_CSCTL_LFXTDRIVE_Values<CS::CSCTL2, 0, 2, ReadWriteMode, CSCSCTL2Base> ;
    using LFXTAGCOFF = CS_CSCTL_LFXTAGCOFF_Values<CS::CSCTL2, 7, 1, ReadWriteMode, CSCSCTL2Base> ;
    using LFXT_EN = CS_CSCTL_LFXT_EN_Values<CS::CSCTL2, 8, 1, ReadWriteMode, CSCSCTL2Base> ;
    using LFXTBYPASS = CS_CSCTL_LFXTBYPASS_Values<CS::CSCTL2, 9, 1, ReadWriteMode, CSCSCTL2Base> ;
    using HFXTDRIVE = CS_CSCTL_HFXTDRIVE_Values<CS::CSCTL2, 16, 1, ReadWriteMode, CSCSCTL2Base> ;
    using HFXTFREQ = CS_CSCTL_HFXTFREQ_Values<CS::CSCTL2, 20, 3, ReadWriteMode, CSCSCTL2Base> ;
    using HFXT_EN = CS_CSCTL_HFXT_EN_Values<CS::CSCTL2, 24, 1, ReadWriteMode, CSCSCTL2Base> ;
    using HFXTBYPASS = CS_CSCTL_HFXTBYPASS_Values<CS::CSCTL2, 25, 1, ReadWriteMode, CSCSCTL2Base> ;
  } ;

  template<typename... T> 
  using CSCTL2Pack  = Register<0x4001040C, 32, ReadWriteMode, CSCSCTL2Base, T...> ;

  struct CSCSCTL3Base {} ;

  struct CSCTL3 : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using FCNTLF = CS_CSCTL_FCNTLF_Values<CS::CSCTL3, 0, 2, ReadWriteMode, CSCSCTL3Base> ;
    using RFCNTLF = CS_CSCTL_RFCNTLF_Values<CS::CSCTL3, 2, 1, WriteMode, CSCSCTL3Base> ;
    using FCNTLF_EN = CS_CSCTL_FCNTLF_EN_Values<CS::CSCTL3, 3, 1, ReadWriteMode, CSCSCTL3Base> ;
    using FCNTHF = CS_CSCTL_FCNTHF_Values<CS::CSCTL3, 4, 2, ReadWriteMode, CSCSCTL3Base> ;
    using RFCNTHF = CS_CSCTL_RFCNTHF_Values<CS::CSCTL3, 6, 1, WriteMode, CSCSCTL3Base> ;
    using FCNTHF_EN = CS_CSCTL_FCNTHF_EN_Values<CS::CSCTL3, 7, 1, ReadWriteMode, CSCSCTL3Base> ;
    using FCNTHF2 = CS_CSCTL_FCNTHF_Values<CS::CSCTL3, 8, 2, ReadWriteMode, CSCSCTL3Base> ;
    using RFCNTHF2 = CS_CSCTL_RFCNTHF_Values<CS::CSCTL3, 10, 1, WriteMode, CSCSCTL3Base> ;
    using FCNTHF2_EN = CS_CSCTL_FCNTHF_EN_Values<CS::CSCTL3, 11, 1, ReadWriteMode, CSCSCTL3Base> ;
  } ;

  template<typename... T> 
  using CSCTL3Pack  = Register<0x40010410, 32, ReadWriteMode, CSCSCTL3Base, T...> ;

  struct CSCSCLKENBase {} ;

  struct CSCLKEN : public RegisterBase<0x40010430, 32, ReadWriteMode>
  {
    using ACLK_EN = CS_CSCLKEN_ACLK_EN_Values<CS::CSCLKEN, 0, 1, ReadWriteMode, CSCSCLKENBase> ;
    using MCLK_EN = CS_CSCLKEN_MCLK_EN_Values<CS::CSCLKEN, 1, 1, ReadWriteMode, CSCSCLKENBase> ;
    using HSMCLK_EN = CS_CSCLKEN_HSMCLK_EN_Values<CS::CSCLKEN, 2, 1, ReadWriteMode, CSCSCLKENBase> ;
    using SMCLK_EN = CS_CSCLKEN_SMCLK_EN_Values<CS::CSCLKEN, 3, 1, ReadWriteMode, CSCSCLKENBase> ;
    using VLO_EN = CS_CSCLKEN_VLO_EN_Values<CS::CSCLKEN, 8, 1, ReadWriteMode, CSCSCLKENBase> ;
    using REFO_EN = CS_CSCLKEN_REFO_EN_Values<CS::CSCLKEN, 9, 1, ReadWriteMode, CSCSCLKENBase> ;
    using MODOSC_EN = CS_CSCLKEN_MODOSC_EN_Values<CS::CSCLKEN, 10, 1, ReadWriteMode, CSCSCLKENBase> ;
    using REFOFSEL = CS_CSCLKEN_REFOFSEL_Values<CS::CSCLKEN, 15, 1, ReadWriteMode, CSCSCLKENBase> ;
  } ;

  template<typename... T> 
  using CSCLKENPack  = Register<0x40010430, 32, ReadWriteMode, CSCSCLKENBase, T...> ;

  struct CSCSSTATBase {} ;

  struct CSSTAT : public RegisterBase<0x40010434, 32, ReadMode>
  {
    using DCO_ON = CS_CSSTAT_DCO_ON_Values<CS::CSSTAT, 0, 1, ReadMode, CSCSSTATBase> ;
    using DCOBIAS_ON = CS_CSSTAT_DCOBIAS_ON_Values<CS::CSSTAT, 1, 1, ReadMode, CSCSSTATBase> ;
    using HFXT_ON = CS_CSSTAT_HFXT_ON_Values<CS::CSSTAT, 2, 1, ReadMode, CSCSSTATBase> ;
    using HFXT2_ON = CS_CSSTAT_HFXT_ON_Values<CS::CSSTAT, 3, 1, ReadMode, CSCSSTATBase> ;
    using MODOSC_ON = CS_CSSTAT_MODOSC_ON_Values<CS::CSSTAT, 4, 1, ReadMode, CSCSSTATBase> ;
    using VLO_ON = CS_CSSTAT_VLO_ON_Values<CS::CSSTAT, 5, 1, ReadMode, CSCSSTATBase> ;
    using LFXT_ON = CS_CSSTAT_LFXT_ON_Values<CS::CSSTAT, 6, 1, ReadMode, CSCSSTATBase> ;
    using REFO_ON = CS_CSSTAT_REFO_ON_Values<CS::CSSTAT, 7, 1, ReadMode, CSCSSTATBase> ;
    using ACLK_ON = CS_CSSTAT_ACLK_ON_Values<CS::CSSTAT, 16, 1, ReadMode, CSCSSTATBase> ;
    using MCLK_ON = CS_CSSTAT_MCLK_ON_Values<CS::CSSTAT, 17, 1, ReadMode, CSCSSTATBase> ;
    using HSMCLK_ON = CS_CSSTAT_HSMCLK_ON_Values<CS::CSSTAT, 18, 1, ReadMode, CSCSSTATBase> ;
    using SMCLK_ON = CS_CSSTAT_SMCLK_ON_Values<CS::CSSTAT, 19, 1, ReadMode, CSCSSTATBase> ;
    using MODCLK_ON = CS_CSSTAT_MODCLK_ON_Values<CS::CSSTAT, 20, 1, ReadMode, CSCSSTATBase> ;
    using VLOCLK_ON = CS_CSSTAT_VLOCLK_ON_Values<CS::CSSTAT, 21, 1, ReadMode, CSCSSTATBase> ;
    using LFXTCLK_ON = CS_CSSTAT_LFXTCLK_ON_Values<CS::CSSTAT, 22, 1, ReadMode, CSCSSTATBase> ;
    using REFOCLK_ON = CS_CSSTAT_REFOCLK_ON_Values<CS::CSSTAT, 23, 1, ReadMode, CSCSSTATBase> ;
    using ACLK_READY = CS_CSSTAT_ACLK_READY_Values<CS::CSSTAT, 24, 1, ReadMode, CSCSSTATBase> ;
    using MCLK_READY = CS_CSSTAT_MCLK_READY_Values<CS::CSSTAT, 25, 1, ReadMode, CSCSSTATBase> ;
    using HSMCLK_READY = CS_CSSTAT_HSMCLK_READY_Values<CS::CSSTAT, 26, 1, ReadMode, CSCSSTATBase> ;
    using SMCLK_READY = CS_CSSTAT_SMCLK_READY_Values<CS::CSSTAT, 27, 1, ReadMode, CSCSSTATBase> ;
    using BCLK_READY = CS_CSSTAT_BCLK_READY_Values<CS::CSSTAT, 28, 1, ReadMode, CSCSSTATBase> ;
  } ;

  template<typename... T> 
  using CSSTATPack  = Register<0x40010434, 32, ReadMode, CSCSSTATBase, T...> ;

  struct CSCSIEBase {} ;

  struct CSIE : public RegisterBase<0x40010440, 32, ReadWriteMode>
  {
    using LFXTIE = CS_CSIE_LFXTIE_Values<CS::CSIE, 0, 1, ReadWriteMode, CSCSIEBase> ;
    using HFXTIE = CS_CSIE_HFXTIE_Values<CS::CSIE, 1, 1, ReadWriteMode, CSCSIEBase> ;
    using HFXT2IE = CS_CSIE_HFXTIE_Values<CS::CSIE, 2, 1, ReadWriteMode, CSCSIEBase> ;
    using DCOR_OPNIE = CS_CSIE_DCOR_OPNIE_Values<CS::CSIE, 6, 1, ReadWriteMode, CSCSIEBase> ;
    using FCNTLFIE = CS_CSIE_FCNTLFIE_Values<CS::CSIE, 8, 1, ReadWriteMode, CSCSIEBase> ;
    using FCNTHFIE = CS_CSIE_FCNTHFIE_Values<CS::CSIE, 9, 1, ReadWriteMode, CSCSIEBase> ;
    using FCNTHF2IE = CS_CSIE_FCNTHFIE_Values<CS::CSIE, 10, 1, ReadWriteMode, CSCSIEBase> ;
    using PLLOOLIE = CS_CSIE_PLLOOLIE_Values<CS::CSIE, 12, 1, ReadWriteMode, CSCSIEBase> ;
    using PLLLOSIE = CS_CSIE_PLLLOSIE_Values<CS::CSIE, 13, 1, ReadWriteMode, CSCSIEBase> ;
    using PLLOORIE = CS_CSIE_PLLOORIE_Values<CS::CSIE, 14, 1, ReadWriteMode, CSCSIEBase> ;
    using CALIE = CS_CSIE_CALIE_Values<CS::CSIE, 15, 1, ReadWriteMode, CSCSIEBase> ;
  } ;

  template<typename... T> 
  using CSIEPack  = Register<0x40010440, 32, ReadWriteMode, CSCSIEBase, T...> ;

  struct CSCSIFGBase {} ;

  struct CSIFG : public RegisterBase<0x40010448, 32, ReadMode>
  {
    using LFXTIFG = CS_CSIFG_LFXTIFG_Values<CS::CSIFG, 0, 1, ReadMode, CSCSIFGBase> ;
    using HFXTIFG = CS_CSIFG_HFXTIFG_Values<CS::CSIFG, 1, 1, ReadMode, CSCSIFGBase> ;
    using HFXT2IFG = CS_CSIFG_HFXTIFG_Values<CS::CSIFG, 2, 1, ReadMode, CSCSIFGBase> ;
    using DCOR_SHTIFG = CS_CSIFG_DCOR_SHTIFG_Values<CS::CSIFG, 5, 1, ReadMode, CSCSIFGBase> ;
    using DCOR_OPNIFG = CS_CSIFG_DCOR_OPNIFG_Values<CS::CSIFG, 6, 1, ReadMode, CSCSIFGBase> ;
    using FCNTLFIFG = CS_CSIFG_FCNTLFIFG_Values<CS::CSIFG, 8, 1, ReadMode, CSCSIFGBase> ;
    using FCNTHFIFG = CS_CSIFG_FCNTHFIFG_Values<CS::CSIFG, 9, 1, ReadMode, CSCSIFGBase> ;
    using FCNTHF2IFG = CS_CSIFG_FCNTHFIFG_Values<CS::CSIFG, 11, 1, ReadMode, CSCSIFGBase> ;
    using PLLOOLIFG = CS_CSIFG_PLLOOLIFG_Values<CS::CSIFG, 12, 1, ReadMode, CSCSIFGBase> ;
    using PLLLOSIFG = CS_CSIFG_PLLLOSIFG_Values<CS::CSIFG, 13, 1, ReadMode, CSCSIFGBase> ;
    using PLLOORIFG = CS_CSIFG_PLLOORIFG_Values<CS::CSIFG, 14, 1, ReadMode, CSCSIFGBase> ;
    using CALIFG = CS_CSIFG_CALIFG_Values<CS::CSIFG, 15, 1, ReadMode, CSCSIFGBase> ;
  } ;

  template<typename... T> 
  using CSIFGPack  = Register<0x40010448, 32, ReadMode, CSCSIFGBase, T...> ;

  struct CSCSCLRIFGBase {} ;

  struct CSCLRIFG : public RegisterBase<0x40010450, 32, WriteMode>
  {
    using CLR_LFXTIFG = CS_CSCLRIFG_CLR_LFXTIFG_Values<CS::CSCLRIFG, 0, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_HFXTIFG = CS_CSCLRIFG_CLR_HFXTIFG_Values<CS::CSCLRIFG, 1, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_HFXT2IFG = CS_CSCLRIFG_CLR_HFXTIFG_Values<CS::CSCLRIFG, 2, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_DCOR_OPNIFG = CS_CSCLRIFG_CLR_DCOR_OPNIFG_Values<CS::CSCLRIFG, 6, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_CALIFG = CS_CSCLRIFG_CLR_CALIFG_Values<CS::CSCLRIFG, 15, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_FCNTLFIFG = CS_CSCLRIFG_CLR_FCNTLFIFG_Values<CS::CSCLRIFG, 8, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_FCNTHFIFG = CS_CSCLRIFG_CLR_FCNTHFIFG_Values<CS::CSCLRIFG, 9, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_FCNTHF2IFG = CS_CSCLRIFG_CLR_FCNTHFIFG_Values<CS::CSCLRIFG, 10, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_PLLOOLIFG = CS_CSCLRIFG_CLR_PLLOOLIFG_Values<CS::CSCLRIFG, 12, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_PLLLOSIFG = CS_CSCLRIFG_CLR_PLLLOSIFG_Values<CS::CSCLRIFG, 13, 1, WriteMode, CSCSCLRIFGBase> ;
    using CLR_PLLOORIFG = CS_CSCLRIFG_CLR_PLLOORIFG_Values<CS::CSCLRIFG, 14, 1, WriteMode, CSCSCLRIFGBase> ;
  } ;

  template<typename... T> 
  using CSCLRIFGPack  = Register<0x40010450, 32, WriteMode, CSCSCLRIFGBase, T...> ;

  struct CSCSSETIFGBase {} ;

  struct CSSETIFG : public RegisterBase<0x40010458, 32, WriteMode>
  {
    using SET_LFXTIFG = CS_CSSETIFG_SET_LFXTIFG_Values<CS::CSSETIFG, 0, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_HFXTIFG = CS_CSSETIFG_SET_HFXTIFG_Values<CS::CSSETIFG, 1, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_HFXT2IFG = CS_CSSETIFG_SET_HFXTIFG_Values<CS::CSSETIFG, 2, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_DCOR_OPNIFG = CS_CSSETIFG_SET_DCOR_OPNIFG_Values<CS::CSSETIFG, 6, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_CALIFG = CS_CSSETIFG_SET_CALIFG_Values<CS::CSSETIFG, 15, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_FCNTHFIFG = CS_CSSETIFG_SET_FCNTHFIFG_Values<CS::CSSETIFG, 9, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_FCNTHF2IFG = CS_CSSETIFG_SET_FCNTHFIFG_Values<CS::CSSETIFG, 10, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_FCNTLFIFG = CS_CSSETIFG_SET_FCNTLFIFG_Values<CS::CSSETIFG, 8, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_PLLOOLIFG = CS_CSSETIFG_SET_PLLOOLIFG_Values<CS::CSSETIFG, 12, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_PLLLOSIFG = CS_CSSETIFG_SET_PLLLOSIFG_Values<CS::CSSETIFG, 13, 1, WriteMode, CSCSSETIFGBase> ;
    using SET_PLLOORIFG = CS_CSSETIFG_SET_PLLOORIFG_Values<CS::CSSETIFG, 14, 1, WriteMode, CSCSSETIFGBase> ;
  } ;

  template<typename... T> 
  using CSSETIFGPack  = Register<0x40010458, 32, WriteMode, CSCSSETIFGBase, T...> ;

  struct CSCSDCOERCAL0Base {} ;

  struct CSDCOERCAL0 : public RegisterBase<0x40010460, 32, ReadWriteMode>
  {
    using DCO_TCCAL = CS_CSDCOERCAL_DCO_TCCAL_Values<CS::CSDCOERCAL0, 0, 2, ReadWriteMode, CSCSDCOERCAL0Base> ;
    using DCO_FCAL_RSEL04 = CS_CSDCOERCAL_DCO_FCAL_RSEL_Values<CS::CSDCOERCAL0, 16, 10, ReadWriteMode, CSCSDCOERCAL0Base> ;
  } ;

  template<typename... T> 
  using CSDCOERCAL0Pack  = Register<0x40010460, 32, ReadWriteMode, CSCSDCOERCAL0Base, T...> ;

  struct CSCSDCOERCAL1Base {} ;

  struct CSDCOERCAL1 : public RegisterBase<0x40010464, 32, ReadWriteMode>
  {
    using DCO_FCAL_RSEL5 = CS_CSDCOERCAL_DCO_FCAL_RSEL_Values<CS::CSDCOERCAL1, 0, 10, ReadWriteMode, CSCSDCOERCAL1Base> ;
  } ;

  template<typename... T> 
  using CSDCOERCAL1Pack  = Register<0x40010464, 32, ReadWriteMode, CSCSDCOERCAL1Base, T...> ;

} ;

#endif //#if !defined(CSREGISTERS_HPP)
