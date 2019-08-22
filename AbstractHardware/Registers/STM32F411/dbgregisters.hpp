/*******************************************************************************
* Filename      : dbgregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(DBGREGISTERS_HPP)
#define DBGREGISTERS_HPP

#include "dbgbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Dbg
{
  struct DbgmcuIdcode : public RegisterBase<0xE0042000, 32, ReadMode>
  {
    using DevId = ReadMode<Dbg::DbgmcuIdcode, 0, 12> ;
    using RevId = ReadMode<Dbg::DbgmcuIdcode, 16, 16> ;
  } ;

  template<typename... T> 
  using DbgmcuIdcodePack  = Register<0xE0042000, 32, ReadMode, DbgDbgmcuIdcodeDevIdValuesBase, T...> ;

  struct DbgmcuCr : public RegisterBase<0xE0042004, 32, ReadWriteMode>
  {
    using DbgSleep = DbgDbgmcuCrDbgSleepValues<Dbg::DbgmcuCr, 0, 1, ReadWriteMode, DbgDbgmcuCrDbgSleepValuesBase> ;
    using DbgStop = DbgDbgmcuCrDbgStopValues<Dbg::DbgmcuCr, 1, 1, ReadWriteMode, DbgDbgmcuCrDbgStopValuesBase> ;
    using DbgStandby = DbgDbgmcuCrDbgStandbyValues<Dbg::DbgmcuCr, 2, 1, ReadWriteMode, DbgDbgmcuCrDbgStandbyValuesBase> ;
    using TraceIoen = DbgDbgmcuCrTraceIoenValues<Dbg::DbgmcuCr, 5, 1, ReadWriteMode, DbgDbgmcuCrTraceIoenValuesBase> ;
    using TraceMode = DbgDbgmcuCrTraceModeValues<Dbg::DbgmcuCr, 6, 2, ReadWriteMode, DbgDbgmcuCrTraceModeValuesBase> ;
  } ;

  template<typename... T> 
  using DbgmcuCrPack  = Register<0xE0042004, 32, ReadWriteMode, DbgDbgmcuCrDbgSleepValuesBase, T...> ;

  struct DbgmcuApb1Fz : public RegisterBase<0xE0042008, 32, ReadWriteMode>
  {
    using DbgTim2Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb1Fz, 0, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
    using DbgTim3Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb1Fz, 1, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
    using DbgTim4Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb1Fz, 2, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
    using DbgTim5Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb1Fz, 3, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
    using DbgRtcStop = DbgDbgmcuApbFzDbgRtcStopValues<Dbg::DbgmcuApb1Fz, 10, 1, ReadWriteMode, DbgDbgmcuApbFzDbgRtcStopValuesBase> ;
    using DbgWwdgStop = DbgDbgmcuApbFzDbgWwdgStopValues<Dbg::DbgmcuApb1Fz, 11, 1, ReadWriteMode, DbgDbgmcuApbFzDbgWwdgStopValuesBase> ;
    using DbgIwdegStop = DbgDbgmcuApbFzDbgIwdegStopValues<Dbg::DbgmcuApb1Fz, 12, 1, ReadWriteMode, DbgDbgmcuApbFzDbgIwdegStopValuesBase> ;
    using DbgI2C1SmbusTimeout = DbgDbgmcuApbFzDbgICSmbusTimeoutValues<Dbg::DbgmcuApb1Fz, 21, 1, ReadWriteMode, DbgDbgmcuApbFzDbgICSmbusTimeoutValuesBase> ;
    using DbgI2C2SmbusTimeout = DbgDbgmcuApbFzDbgICSmbusTimeoutValues<Dbg::DbgmcuApb1Fz, 22, 1, ReadWriteMode, DbgDbgmcuApbFzDbgICSmbusTimeoutValuesBase> ;
    using DbgI2C3SmbusTimeout = DbgDbgmcuApbFzDbgICSmbusTimeoutValues<Dbg::DbgmcuApb1Fz, 23, 1, ReadWriteMode, DbgDbgmcuApbFzDbgICSmbusTimeoutValuesBase> ;
  } ;

  template<typename... T> 
  using DbgmcuApb1FzPack  = Register<0xE0042008, 32, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase, T...> ;

  struct DbgmcuApb2Fz : public RegisterBase<0xE004200C, 32, ReadWriteMode>
  {
    using DbgTim1Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb2Fz, 0, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
    using DbgTim9Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb2Fz, 16, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
    using DbgTim10Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb2Fz, 17, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
    using DbgTim11Stop = DbgDbgmcuApbFzDbgTimStopValues<Dbg::DbgmcuApb2Fz, 18, 1, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase> ;
  } ;

  template<typename... T> 
  using DbgmcuApb2FzPack  = Register<0xE004200C, 32, ReadWriteMode, DbgDbgmcuApbFzDbgTimStopValuesBase, T...> ;

} ;

#endif //#if !defined(DBGREGISTERS_HPP)
