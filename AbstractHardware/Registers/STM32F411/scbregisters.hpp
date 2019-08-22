/*******************************************************************************
* Filename      : scbregisters.hpp
*
* Details       : System control block. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SCBREGISTERS_HPP)
#define SCBREGISTERS_HPP

#include "scbbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Scb
{
  struct Cpuid : public RegisterBase<0xE000ED00, 32, ReadMode>
  {
    using Revision = ScbCpuidRevisionValues<Scb::Cpuid, 0, 4, ReadMode, ScbCpuidRevisionValuesBase> ;
    using Partno = ReadMode<Scb::Cpuid, 4, 12> ;
    using Constant = ScbCpuidConstantValues<Scb::Cpuid, 16, 4, ReadMode, ScbCpuidConstantValuesBase> ;
    using Variant = ScbCpuidVariantValues<Scb::Cpuid, 20, 4, ReadMode, ScbCpuidVariantValuesBase> ;
    using Implementer = ReadMode<Scb::Cpuid, 24, 8> ;
  } ;

  template<typename... T> 
  using CpuidPack  = Register<0xE000ED00, 32, ReadMode, ScbCpuidRevisionValuesBase, T...> ;

  struct Icsr : public RegisterBase<0xE000ED04, 32, ReadWriteMode>
  {
    using Vectactive = ReadWriteMode<Scb::Icsr, 0, 9> ;
    using Rettobase = ScbIcsrRettobaseValues<Scb::Icsr, 11, 1, ReadWriteMode, ScbIcsrRettobaseValuesBase> ;
    using Vectpending = ReadWriteMode<Scb::Icsr, 12, 7> ;
    using Isrpending = ScbIcsrIsrpendingValues<Scb::Icsr, 22, 1, ReadWriteMode, ScbIcsrIsrpendingValuesBase> ;
    using Pendstclr = ScbIcsrPendstclrValues<Scb::Icsr, 25, 1, ReadWriteMode, ScbIcsrPendstclrValuesBase> ;
    using Pendstset = ScbIcsrPendstsetValues<Scb::Icsr, 26, 1, ReadWriteMode, ScbIcsrPendstsetValuesBase> ;
    using Pendsvclr = ScbIcsrPendsvclrValues<Scb::Icsr, 27, 1, ReadWriteMode, ScbIcsrPendsvclrValuesBase> ;
    using Pendsvset = ScbIcsrPendsvsetValues<Scb::Icsr, 28, 1, ReadWriteMode, ScbIcsrPendsvsetValuesBase> ;
    using Nmipendset = ScbIcsrNmipendsetValues<Scb::Icsr, 31, 1, ReadWriteMode, ScbIcsrNmipendsetValuesBase> ;
  } ;

  template<typename... T> 
  using IcsrPack  = Register<0xE000ED04, 32, ReadWriteMode, ScbIcsrVectactiveValuesBase, T...> ;

  struct Vtor : public RegisterBase<0xE000ED08, 32, ReadWriteMode>
  {
    using Tbloff = ReadWriteMode<Scb::Vtor, 9, 21> ;
  } ;

  template<typename... T> 
  using VtorPack  = Register<0xE000ED08, 32, ReadWriteMode, ScbVtorTbloffValuesBase, T...> ;

  struct Aircr : public RegisterBase<0xE000ED0C, 32, ReadWriteMode>
  {
    using Vectreset = ScbAircrVectresetValues<Scb::Aircr, 0, 1, ReadWriteMode, ScbAircrVectresetValuesBase> ;
    using Vectclractive = ScbAircrVectclractiveValues<Scb::Aircr, 1, 1, ReadWriteMode, ScbAircrVectclractiveValuesBase> ;
    using Sysresetreq = ScbAircrSysresetreqValues<Scb::Aircr, 2, 1, ReadWriteMode, ScbAircrSysresetreqValuesBase> ;
    using Prigroup = ScbAircrPrigroupValues<Scb::Aircr, 8, 3, ReadWriteMode, ScbAircrPrigroupValuesBase> ;
    using Endianess = ScbAircrEndianessValues<Scb::Aircr, 15, 1, ReadWriteMode, ScbAircrEndianessValuesBase> ;
    using Vectkeystat = ReadWriteMode<Scb::Aircr, 16, 16> ;
  } ;

  template<typename... T> 
  using AircrPack  = Register<0xE000ED0C, 32, ReadWriteMode, ScbAircrVectresetValuesBase, T...> ;

  struct Scr : public RegisterBase<0xE000ED10, 32, ReadWriteMode>
  {
    using Sleeponexit = ScbScrSleeponexitValues<Scb::Scr, 1, 1, ReadWriteMode, ScbScrSleeponexitValuesBase> ;
    using Sleepdeep = ScbScrSleepdeepValues<Scb::Scr, 2, 1, ReadWriteMode, ScbScrSleepdeepValuesBase> ;
    using Seveonpend = ScbScrSeveonpendValues<Scb::Scr, 4, 1, ReadWriteMode, ScbScrSeveonpendValuesBase> ;
  } ;

  template<typename... T> 
  using ScrPack  = Register<0xE000ED10, 32, ReadWriteMode, ScbScrSleeponexitValuesBase, T...> ;

  struct Ccr : public RegisterBase<0xE000ED14, 32, ReadWriteMode>
  {
    using Nonbasethrdena = ScbCcrNonbasethrdenaValues<Scb::Ccr, 0, 1, ReadWriteMode, ScbCcrNonbasethrdenaValuesBase> ;
    using Usersetmpend = ScbCcrUsersetmpendValues<Scb::Ccr, 1, 1, ReadWriteMode, ScbCcrUsersetmpendValuesBase> ;
    using UnalignTrp = ScbCcrUnalignTrpValues<Scb::Ccr, 3, 1, ReadWriteMode, ScbCcrUnalignTrpValuesBase> ;
    using Div0Trp = ScbCcrDivTrpValues<Scb::Ccr, 4, 1, ReadWriteMode, ScbCcrDivTrpValuesBase> ;
    using Bfhfnmign = ScbCcrBfhfnmignValues<Scb::Ccr, 8, 1, ReadWriteMode, ScbCcrBfhfnmignValuesBase> ;
    using Stkalign = ScbCcrStkalignValues<Scb::Ccr, 9, 1, ReadWriteMode, ScbCcrStkalignValuesBase> ;
  } ;

  template<typename... T> 
  using CcrPack  = Register<0xE000ED14, 32, ReadWriteMode, ScbCcrNonbasethrdenaValuesBase, T...> ;

  struct Shpr1 : public RegisterBase<0xE000ED18, 32, ReadWriteMode>
  {
    using Pri4 = ReadWriteMode<Scb::Shpr1, 0, 8> ;
    using Pri5 = ReadWriteMode<Scb::Shpr1, 8, 8> ;
    using Pri6 = ReadWriteMode<Scb::Shpr1, 16, 8> ;
  } ;

  template<typename... T> 
  using Shpr1Pack  = Register<0xE000ED18, 32, ReadWriteMode, ScbShprPriValuesBase, T...> ;

  struct Shpr2 : public RegisterBase<0xE000ED1C, 32, ReadWriteMode>
  {
    using Pri11 = ReadWriteMode<Scb::Shpr2, 24, 8> ;
  } ;

  template<typename... T> 
  using Shpr2Pack  = Register<0xE000ED1C, 32, ReadWriteMode, ScbShprPriValuesBase, T...> ;

  struct Shpr3 : public RegisterBase<0xE000ED20, 32, ReadWriteMode>
  {
    using Pri14 = ReadWriteMode<Scb::Shpr3, 16, 8> ;
    using Pri15 = ReadWriteMode<Scb::Shpr3, 24, 8> ;
  } ;

  template<typename... T> 
  using Shpr3Pack  = Register<0xE000ED20, 32, ReadWriteMode, ScbShprPriValuesBase, T...> ;

  struct Shcrs : public RegisterBase<0xE000ED24, 32, ReadWriteMode>
  {
    using Memfaultact = ScbShcrsMemfaultactValues<Scb::Shcrs, 0, 1, ReadWriteMode, ScbShcrsMemfaultactValuesBase> ;
    using Busfaultact = ScbShcrsBusfaultactValues<Scb::Shcrs, 1, 1, ReadWriteMode, ScbShcrsBusfaultactValuesBase> ;
    using Usgfaultact = ScbShcrsUsgfaultactValues<Scb::Shcrs, 3, 1, ReadWriteMode, ScbShcrsUsgfaultactValuesBase> ;
    using Svcallact = ScbShcrsSvcallactValues<Scb::Shcrs, 7, 1, ReadWriteMode, ScbShcrsSvcallactValuesBase> ;
    using Monitoract = ScbShcrsMonitoractValues<Scb::Shcrs, 8, 1, ReadWriteMode, ScbShcrsMonitoractValuesBase> ;
    using Pendsvact = ScbShcrsPendsvactValues<Scb::Shcrs, 10, 1, ReadWriteMode, ScbShcrsPendsvactValuesBase> ;
    using Systickact = ScbShcrsSystickactValues<Scb::Shcrs, 11, 1, ReadWriteMode, ScbShcrsSystickactValuesBase> ;
    using Usgfaultpended = ScbShcrsUsgfaultpendedValues<Scb::Shcrs, 12, 1, ReadWriteMode, ScbShcrsUsgfaultpendedValuesBase> ;
    using Memfaultpended = ScbShcrsMemfaultpendedValues<Scb::Shcrs, 13, 1, ReadWriteMode, ScbShcrsMemfaultpendedValuesBase> ;
    using Busfaultpended = ScbShcrsBusfaultpendedValues<Scb::Shcrs, 14, 1, ReadWriteMode, ScbShcrsBusfaultpendedValuesBase> ;
    using Svcallpended = ScbShcrsSvcallpendedValues<Scb::Shcrs, 15, 1, ReadWriteMode, ScbShcrsSvcallpendedValuesBase> ;
    using Memfaultena = ScbShcrsMemfaultenaValues<Scb::Shcrs, 16, 1, ReadWriteMode, ScbShcrsMemfaultenaValuesBase> ;
    using Busfaultena = ScbShcrsBusfaultenaValues<Scb::Shcrs, 17, 1, ReadWriteMode, ScbShcrsBusfaultenaValuesBase> ;
    using Usgfaultena = ScbShcrsUsgfaultenaValues<Scb::Shcrs, 18, 1, ReadWriteMode, ScbShcrsUsgfaultenaValuesBase> ;
  } ;

  template<typename... T> 
  using ShcrsPack  = Register<0xE000ED24, 32, ReadWriteMode, ScbShcrsMemfaultactValuesBase, T...> ;

  struct CfsrUfsrBfsrMmfsr : public RegisterBase<0xE000ED28, 32, ReadWriteMode>
  {
    using Iaccviol = ScbCfsrUfsrBfsrMmfsrIaccviolValues<Scb::CfsrUfsrBfsrMmfsr, 1, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrIaccviolValuesBase> ;
    using Munstkerr = ScbCfsrUfsrBfsrMmfsrMunstkerrValues<Scb::CfsrUfsrBfsrMmfsr, 3, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrMunstkerrValuesBase> ;
    using Mstkerr = ScbCfsrUfsrBfsrMmfsrMstkerrValues<Scb::CfsrUfsrBfsrMmfsr, 4, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrMstkerrValuesBase> ;
    using Mlsperr = ScbCfsrUfsrBfsrMmfsrMlsperrValues<Scb::CfsrUfsrBfsrMmfsr, 5, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrMlsperrValuesBase> ;
    using Mmarvalid = ScbCfsrUfsrBfsrMmfsrMmarvalidValues<Scb::CfsrUfsrBfsrMmfsr, 7, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrMmarvalidValuesBase> ;
    using Ibuserr = ScbCfsrUfsrBfsrMmfsrIbuserrValues<Scb::CfsrUfsrBfsrMmfsr, 8, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrIbuserrValuesBase> ;
    using Preciserr = ScbCfsrUfsrBfsrMmfsrPreciserrValues<Scb::CfsrUfsrBfsrMmfsr, 9, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrPreciserrValuesBase> ;
    using Impreciserr = ScbCfsrUfsrBfsrMmfsrImpreciserrValues<Scb::CfsrUfsrBfsrMmfsr, 10, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrImpreciserrValuesBase> ;
    using Unstkerr = ScbCfsrUfsrBfsrMmfsrUnstkerrValues<Scb::CfsrUfsrBfsrMmfsr, 11, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrUnstkerrValuesBase> ;
    using Stkerr = ScbCfsrUfsrBfsrMmfsrStkerrValues<Scb::CfsrUfsrBfsrMmfsr, 12, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrStkerrValuesBase> ;
    using Lsperr = ScbCfsrUfsrBfsrMmfsrLsperrValues<Scb::CfsrUfsrBfsrMmfsr, 13, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrLsperrValuesBase> ;
    using Bfarvalid = ScbCfsrUfsrBfsrMmfsrBfarvalidValues<Scb::CfsrUfsrBfsrMmfsr, 15, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrBfarvalidValuesBase> ;
    using Undefinstr = ScbCfsrUfsrBfsrMmfsrUndefinstrValues<Scb::CfsrUfsrBfsrMmfsr, 16, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrUndefinstrValuesBase> ;
    using Invstate = ScbCfsrUfsrBfsrMmfsrInvstateValues<Scb::CfsrUfsrBfsrMmfsr, 17, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrInvstateValuesBase> ;
    using Invpc = ScbCfsrUfsrBfsrMmfsrInvpcValues<Scb::CfsrUfsrBfsrMmfsr, 18, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrInvpcValuesBase> ;
    using Nocp = ScbCfsrUfsrBfsrMmfsrNocpValues<Scb::CfsrUfsrBfsrMmfsr, 19, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrNocpValuesBase> ;
    using Unaligned = ScbCfsrUfsrBfsrMmfsrUnalignedValues<Scb::CfsrUfsrBfsrMmfsr, 24, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrUnalignedValuesBase> ;
    using Divbyzero = ScbCfsrUfsrBfsrMmfsrDivbyzeroValues<Scb::CfsrUfsrBfsrMmfsr, 25, 1, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrDivbyzeroValuesBase> ;
  } ;

  template<typename... T> 
  using CfsrUfsrBfsrMmfsrPack  = Register<0xE000ED28, 32, ReadWriteMode, ScbCfsrUfsrBfsrMmfsrIaccviolValuesBase, T...> ;

  struct Hfsr : public RegisterBase<0xE000ED2C, 32, ReadWriteMode>
  {
    using Vecttbl = ScbHfsrVecttblValues<Scb::Hfsr, 1, 1, ReadWriteMode, ScbHfsrVecttblValuesBase> ;
    using Forced = ScbHfsrForcedValues<Scb::Hfsr, 30, 1, ReadWriteMode, ScbHfsrForcedValuesBase> ;
    using DebugVt = ScbHfsrDebugVtValues<Scb::Hfsr, 31, 1, ReadWriteMode, ScbHfsrDebugVtValuesBase> ;
  } ;

  template<typename... T> 
  using HfsrPack  = Register<0xE000ED2C, 32, ReadWriteMode, ScbHfsrVecttblValuesBase, T...> ;

  struct Mmfar : public RegisterBase<0xE000ED34, 32, ReadWriteMode>
  {
    using MmfarField = ReadWriteMode<Scb::Mmfar, 0, 32> ;
  } ;

  template<typename... T> 
  using MmfarPack  = Register<0xE000ED34, 32, ReadWriteMode, ScbMmfarMmfarValuesBase, T...> ;

  struct Bfar : public RegisterBase<0xE000ED38, 32, ReadWriteMode>
  {
    using BfarField = ReadWriteMode<Scb::Bfar, 0, 32> ;
  } ;

  template<typename... T> 
  using BfarPack  = Register<0xE000ED38, 32, ReadWriteMode, ScbBfarBfarValuesBase, T...> ;

  struct Afsr : public RegisterBase<0xE000ED3C, 32, ReadWriteMode>
  {
    using Impdef = ReadWriteMode<Scb::Afsr, 0, 32> ;
  } ;

  template<typename... T> 
  using AfsrPack  = Register<0xE000ED3C, 32, ReadWriteMode, ScbAfsrImpdefValuesBase, T...> ;

} ;

#endif //#if !defined(SCBREGISTERS_HPP)
