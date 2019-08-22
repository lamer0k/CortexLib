/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : FLASH. This header file is auto-generated for STM32F411
*                 device.
*
*
*******************************************************************************/

#if !defined(FLASHREGISTERS_HPP)
#define FLASHREGISTERS_HPP

#include "flashbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Flash
{
  struct Acr : public RegisterBase<0x40023C00, 32, ReadWriteMode>
  {
    using Latency = FlashAcrLatencyValues<Flash::Acr, 0, 3, ReadWriteMode, FlashAcrLatencyValuesBase> ;
    using Prften = FlashAcrPrftenValues<Flash::Acr, 8, 1, ReadWriteMode, FlashAcrPrftenValuesBase> ;
    using Icen = FlashAcrIcenValues<Flash::Acr, 9, 1, ReadWriteMode, FlashAcrIcenValuesBase> ;
    using Dcen = FlashAcrDcenValues<Flash::Acr, 10, 1, ReadWriteMode, FlashAcrDcenValuesBase> ;
    using Icrst = FlashAcrIcrstValues<Flash::Acr, 11, 1, WriteMode, FlashAcrIcrstValuesBase> ;
    using Dcrst = FlashAcrDcrstValues<Flash::Acr, 12, 1, ReadWriteMode, FlashAcrDcrstValuesBase> ;
  } ;

  template<typename... T> 
  using AcrPack  = Register<0x40023C00, 32, ReadWriteMode, FlashAcrLatencyValuesBase, T...> ;

  struct Keyr : public RegisterBase<0x40023C04, 32, WriteMode>
  {
    using Key = WriteMode<Flash::Keyr, 0, 32> ;
  } ;

  template<typename... T> 
  using KeyrPack  = Register<0x40023C04, 32, WriteMode, FlashKeyrKeyValuesBase, T...> ;

  struct Optkeyr : public RegisterBase<0x40023C08, 32, WriteMode>
  {
    using Optkey = WriteMode<Flash::Optkeyr, 0, 32> ;
  } ;

  template<typename... T> 
  using OptkeyrPack  = Register<0x40023C08, 32, WriteMode, FlashOptkeyrOptkeyValuesBase, T...> ;

  struct Sr : public RegisterBase<0x40023C0C, 32, ReadWriteMode>
  {
    using Eop = FlashSrEopValues<Flash::Sr, 0, 1, ReadWriteMode, FlashSrEopValuesBase> ;
    using Operr = FlashSrOperrValues<Flash::Sr, 1, 1, ReadWriteMode, FlashSrOperrValuesBase> ;
    using Wrperr = FlashSrWrperrValues<Flash::Sr, 4, 1, ReadWriteMode, FlashSrWrperrValuesBase> ;
    using Pgaerr = FlashSrPgaerrValues<Flash::Sr, 5, 1, ReadWriteMode, FlashSrPgaerrValuesBase> ;
    using Pgperr = FlashSrPgperrValues<Flash::Sr, 6, 1, ReadWriteMode, FlashSrPgperrValuesBase> ;
    using Pgserr = FlashSrPgserrValues<Flash::Sr, 7, 1, ReadWriteMode, FlashSrPgserrValuesBase> ;
    using Bsy = FlashSrBsyValues<Flash::Sr, 16, 1, ReadMode, FlashSrBsyValuesBase> ;
  } ;

  template<typename... T> 
  using SrPack  = Register<0x40023C0C, 32, ReadWriteMode, FlashSrEopValuesBase, T...> ;

  struct Cr : public RegisterBase<0x40023C10, 32, ReadWriteMode>
  {
    using Pg = FlashCrPgValues<Flash::Cr, 0, 1, ReadWriteMode, FlashCrPgValuesBase> ;
    using Ser = FlashCrSerValues<Flash::Cr, 1, 1, ReadWriteMode, FlashCrSerValuesBase> ;
    using Mer = FlashCrMerValues<Flash::Cr, 2, 1, ReadWriteMode, FlashCrMerValuesBase> ;
    using Snb = FlashCrSnbValues<Flash::Cr, 3, 4, ReadWriteMode, FlashCrSnbValuesBase> ;
    using Psize = FlashCrPsizeValues<Flash::Cr, 8, 2, ReadWriteMode, FlashCrPsizeValuesBase> ;
    using Strt = FlashCrStrtValues<Flash::Cr, 16, 1, ReadWriteMode, FlashCrStrtValuesBase> ;
    using Eopie = FlashCrEopieValues<Flash::Cr, 24, 1, ReadWriteMode, FlashCrEopieValuesBase> ;
    using Errie = FlashCrErrieValues<Flash::Cr, 25, 1, ReadWriteMode, FlashCrErrieValuesBase> ;
    using Lock = FlashCrLockValues<Flash::Cr, 31, 1, ReadWriteMode, FlashCrLockValuesBase> ;
  } ;

  template<typename... T> 
  using CrPack  = Register<0x40023C10, 32, ReadWriteMode, FlashCrPgValuesBase, T...> ;

  struct Optcr : public RegisterBase<0x40023C14, 32, ReadWriteMode>
  {
    using Optlock = FlashOptcrOptlockValues<Flash::Optcr, 0, 1, ReadWriteMode, FlashOptcrOptlockValuesBase> ;
    using Optstrt = FlashOptcrOptstrtValues<Flash::Optcr, 1, 1, ReadWriteMode, FlashOptcrOptstrtValuesBase> ;
    using BorLev = FlashOptcrBorLevValues<Flash::Optcr, 2, 2, ReadWriteMode, FlashOptcrBorLevValuesBase> ;
    using WdgSw = FlashOptcrWdgSwValues<Flash::Optcr, 5, 1, ReadWriteMode, FlashOptcrWdgSwValuesBase> ;
    using NrstStop = FlashOptcrNrstStopValues<Flash::Optcr, 6, 1, ReadWriteMode, FlashOptcrNrstStopValuesBase> ;
    using NrstStdby = FlashOptcrNrstStdbyValues<Flash::Optcr, 7, 1, ReadWriteMode, FlashOptcrNrstStdbyValuesBase> ;
    using Rdp = ReadWriteMode<Flash::Optcr, 8, 8> ;
    using Nwrp = ReadWriteMode<Flash::Optcr, 16, 12> ;
  } ;

  template<typename... T> 
  using OptcrPack  = Register<0x40023C14, 32, ReadWriteMode, FlashOptcrOptlockValuesBase, T...> ;

} ;

#endif //#if !defined(FLASHREGISTERS_HPP)
