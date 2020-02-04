/*******************************************************************************
* Filename      : cecregisters.hpp
*
* Details       : HDMI-CEC controller. This header file is auto-generated for
*                 STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(CECREGISTERS_HPP)
#define CECREGISTERS_HPP

#include "cecfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CEC
{
  struct CECCRBase {} ;

  struct CR : public RegisterBase<0x40007800, 32, ReadWriteMode>
  {
    using TXEOM = CEC_CR_TXEOM_Values<CEC::CR, 2, 1, ReadWriteMode, CECCRBase> ;
    using TXSOM = CEC_CR_TXSOM_Values<CEC::CR, 1, 1, ReadWriteMode, CECCRBase> ;
    using CECEN = CEC_CR_CECEN_Values<CEC::CR, 0, 1, ReadWriteMode, CECCRBase> ;
    using FieldValues = CEC_CR_CECEN_Values<CEC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40007800, 32, ReadWriteMode, CECCRBase, T...> ;

  struct CECCFGRBase {} ;

  struct CFGR : public RegisterBase<0x40007804, 32, ReadWriteMode>
  {
    using LBPEGEN = CEC_CFGR_LBPEGEN_Values<CEC::CFGR, 11, 1, ReadWriteMode, CECCFGRBase> ;
    using BREGEN = CEC_CFGR_BREGEN_Values<CEC::CFGR, 10, 1, ReadWriteMode, CECCFGRBase> ;
    using BRESTP = CEC_CFGR_BRESTP_Values<CEC::CFGR, 9, 1, ReadWriteMode, CECCFGRBase> ;
    using RXTOL = CEC_CFGR_RXTOL_Values<CEC::CFGR, 8, 1, ReadWriteMode, CECCFGRBase> ;
    using SFT = CEC_CFGR_SFT_Values<CEC::CFGR, 5, 3, ReadWriteMode, CECCFGRBase> ;
    using LSTN = CEC_CFGR_LSTN_Values<CEC::CFGR, 4, 1, ReadWriteMode, CECCFGRBase> ;
    using OAR = CEC_CFGR_OAR_Values<CEC::CFGR, 0, 4, ReadWriteMode, CECCFGRBase> ;
    using FieldValues = CEC_CFGR_OAR_Values<CEC::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x40007804, 32, ReadWriteMode, CECCFGRBase, T...> ;

  struct CECTXDRBase {} ;

  struct TXDR : public RegisterBase<0x40007808, 32, WriteMode>
  {
    using TXD = CEC_TXDR_TXD_Values<CEC::TXDR, 0, 8, WriteMode, CECTXDRBase> ;
    using FieldValues = CEC_TXDR_TXD_Values<CEC::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40007808, 32, WriteMode, CECTXDRBase, T...> ;

  struct CECRXDRBase {} ;

  struct RXDR : public RegisterBase<0x4000780C, 32, ReadMode>
  {
    using RXDRField = CEC_RXDR_RXDR_Values<CEC::RXDR, 0, 8, ReadMode, CECRXDRBase> ;
    using FieldValues = CEC_RXDR_RXDR_Values<CEC::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x4000780C, 32, ReadMode, CECRXDRBase, T...> ;

  struct CECISRBase {} ;

  struct ISR : public RegisterBase<0x40007810, 32, ReadWriteMode>
  {
    using TXACKE = CEC_ISR_TXACKE_Values<CEC::ISR, 12, 1, ReadWriteMode, CECISRBase> ;
    using TXERR = CEC_ISR_TXERR_Values<CEC::ISR, 11, 1, ReadWriteMode, CECISRBase> ;
    using TXUDR = CEC_ISR_TXUDR_Values<CEC::ISR, 10, 1, ReadWriteMode, CECISRBase> ;
    using TXEND = CEC_ISR_TXEND_Values<CEC::ISR, 9, 1, ReadWriteMode, CECISRBase> ;
    using TXBR = CEC_ISR_TXBR_Values<CEC::ISR, 8, 1, ReadWriteMode, CECISRBase> ;
    using ARBLST = CEC_ISR_ARBLST_Values<CEC::ISR, 7, 1, ReadWriteMode, CECISRBase> ;
    using RXACKE = CEC_ISR_RXACKE_Values<CEC::ISR, 6, 1, ReadWriteMode, CECISRBase> ;
    using LBPE = CEC_ISR_LBPE_Values<CEC::ISR, 5, 1, ReadWriteMode, CECISRBase> ;
    using SBPE = CEC_ISR_SBPE_Values<CEC::ISR, 4, 1, ReadWriteMode, CECISRBase> ;
    using BRE = CEC_ISR_BRE_Values<CEC::ISR, 3, 1, ReadWriteMode, CECISRBase> ;
    using RXOVR = CEC_ISR_RXOVR_Values<CEC::ISR, 2, 1, ReadWriteMode, CECISRBase> ;
    using RXEND = CEC_ISR_RXEND_Values<CEC::ISR, 1, 1, ReadWriteMode, CECISRBase> ;
    using RXBR = CEC_ISR_RXBR_Values<CEC::ISR, 0, 1, ReadWriteMode, CECISRBase> ;
    using FieldValues = CEC_ISR_RXBR_Values<CEC::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40007810, 32, ReadWriteMode, CECISRBase, T...> ;

  struct CECIERBase {} ;

  struct IER : public RegisterBase<0x40007814, 32, ReadWriteMode>
  {
    using TXACKIE = CEC_IER_TXACKIE_Values<CEC::IER, 12, 1, ReadWriteMode, CECIERBase> ;
    using TXERRIE = CEC_IER_TXERRIE_Values<CEC::IER, 11, 1, ReadWriteMode, CECIERBase> ;
    using TXUDRIE = CEC_IER_TXUDRIE_Values<CEC::IER, 10, 1, ReadWriteMode, CECIERBase> ;
    using TXENDIE = CEC_IER_TXENDIE_Values<CEC::IER, 9, 1, ReadWriteMode, CECIERBase> ;
    using TXBRIE = CEC_IER_TXBRIE_Values<CEC::IER, 8, 1, ReadWriteMode, CECIERBase> ;
    using ARBLSTIE = CEC_IER_ARBLSTIE_Values<CEC::IER, 7, 1, ReadWriteMode, CECIERBase> ;
    using RXACKIE = CEC_IER_RXACKIE_Values<CEC::IER, 6, 1, ReadWriteMode, CECIERBase> ;
    using LBPEIE = CEC_IER_LBPEIE_Values<CEC::IER, 5, 1, ReadWriteMode, CECIERBase> ;
    using SBPEIE = CEC_IER_SBPEIE_Values<CEC::IER, 4, 1, ReadWriteMode, CECIERBase> ;
    using BREIE = CEC_IER_BREIE_Values<CEC::IER, 3, 1, ReadWriteMode, CECIERBase> ;
    using RXOVRIE = CEC_IER_RXOVRIE_Values<CEC::IER, 2, 1, ReadWriteMode, CECIERBase> ;
    using RXENDIE = CEC_IER_RXENDIE_Values<CEC::IER, 1, 1, ReadWriteMode, CECIERBase> ;
    using RXBRIE = CEC_IER_RXBRIE_Values<CEC::IER, 0, 1, ReadWriteMode, CECIERBase> ;
    using FieldValues = CEC_IER_RXBRIE_Values<CEC::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40007814, 32, ReadWriteMode, CECIERBase, T...> ;

} ;

#endif //#if !defined(CECREGISTERS_HPP)
