/*******************************************************************************
* Filename      : sdioregisters.hpp
*
* Details       : Secure digital input/output interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SDIOREGISTERS_HPP)
#define SDIOREGISTERS_HPP

#include "sdiobitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Sdio
{
  struct Power : public RegisterBase<0x40012C00, 32, ReadWriteMode>
  {
    using Pwrctrl = SdioPowerPwrctrlValues<Sdio::Power, 0, 2, ReadWriteMode, SdioPowerPwrctrlValuesBase> ;
  } ;

  template<typename... T> 
  using PowerPack  = Register<0x40012C00, 32, ReadWriteMode, SdioPowerPwrctrlValuesBase, T...> ;

  struct Clkcr : public RegisterBase<0x40012C04, 32, ReadWriteMode>
  {
    using HwfcEn = SdioClkcrHwfcEnValues<Sdio::Clkcr, 14, 1, ReadWriteMode, SdioClkcrHwfcEnValuesBase> ;
    using Negedge = SdioClkcrNegedgeValues<Sdio::Clkcr, 13, 1, ReadWriteMode, SdioClkcrNegedgeValuesBase> ;
    using Widbus = SdioClkcrWidbusValues<Sdio::Clkcr, 11, 2, ReadWriteMode, SdioClkcrWidbusValuesBase> ;
    using Bypass = SdioClkcrBypassValues<Sdio::Clkcr, 10, 1, ReadWriteMode, SdioClkcrBypassValuesBase> ;
    using Pwrsav = SdioClkcrPwrsavValues<Sdio::Clkcr, 9, 1, ReadWriteMode, SdioClkcrPwrsavValuesBase> ;
    using Clken = SdioClkcrClkenValues<Sdio::Clkcr, 8, 1, ReadWriteMode, SdioClkcrClkenValuesBase> ;
    using Clkdiv = ReadWriteMode<Sdio::Clkcr, 0, 8> ;
  } ;

  template<typename... T> 
  using ClkcrPack  = Register<0x40012C04, 32, ReadWriteMode, SdioClkcrHwfcEnValuesBase, T...> ;

  struct Arg : public RegisterBase<0x40012C08, 32, ReadWriteMode>
  {
    using Cmdarg = ReadWriteMode<Sdio::Arg, 0, 32> ;
  } ;

  template<typename... T> 
  using ArgPack  = Register<0x40012C08, 32, ReadWriteMode, SdioArgCmdargValuesBase, T...> ;

  struct Cmd : public RegisterBase<0x40012C0C, 32, ReadWriteMode>
  {
    using CeAtacmd = SdioCmdCeAtacmdValues<Sdio::Cmd, 14, 1, ReadWriteMode, SdioCmdCeAtacmdValuesBase> ;
    using Nien = SdioCmdNienValues<Sdio::Cmd, 13, 1, ReadWriteMode, SdioCmdNienValuesBase> ;
    using Encmdcompl = SdioCmdEncmdcomplValues<Sdio::Cmd, 12, 1, ReadWriteMode, SdioCmdEncmdcomplValuesBase> ;
    using Sdiosuspend = SdioCmdSdiosuspendValues<Sdio::Cmd, 11, 1, ReadWriteMode, SdioCmdSdiosuspendValuesBase> ;
    using Cpsmen = SdioCmdCpsmenValues<Sdio::Cmd, 10, 1, ReadWriteMode, SdioCmdCpsmenValuesBase> ;
    using Waitpend = SdioCmdWaitpendValues<Sdio::Cmd, 9, 1, ReadWriteMode, SdioCmdWaitpendValuesBase> ;
    using Waitint = SdioCmdWaitintValues<Sdio::Cmd, 8, 1, ReadWriteMode, SdioCmdWaitintValuesBase> ;
    using Waitresp = SdioCmdWaitrespValues<Sdio::Cmd, 6, 2, ReadWriteMode, SdioCmdWaitrespValuesBase> ;
    using Cmdindex = ReadWriteMode<Sdio::Cmd, 0, 6> ;
  } ;

  template<typename... T> 
  using CmdPack  = Register<0x40012C0C, 32, ReadWriteMode, SdioCmdCeAtacmdValuesBase, T...> ;

  struct Respcmd : public RegisterBase<0x40012C10, 32, ReadMode>
  {
    using RespcmdField = ReadMode<Sdio::Respcmd, 0, 6> ;
  } ;

  template<typename... T> 
  using RespcmdPack  = Register<0x40012C10, 32, ReadMode, SdioRespcmdRespcmdValuesBase, T...> ;

  struct Resp1 : public RegisterBase<0x40012C14, 32, ReadMode>
  {
    using Cardstatus1 = ReadMode<Sdio::Resp1, 0, 32> ;
  } ;

  template<typename... T> 
  using Resp1Pack  = Register<0x40012C14, 32, ReadMode, SdioRespCardstatusValuesBase, T...> ;

  struct Resp2 : public RegisterBase<0x40012C18, 32, ReadMode>
  {
    using Cardstatus2 = ReadMode<Sdio::Resp2, 0, 32> ;
  } ;

  template<typename... T> 
  using Resp2Pack  = Register<0x40012C18, 32, ReadMode, SdioRespCardstatusValuesBase, T...> ;

  struct Resp3 : public RegisterBase<0x40012C1C, 32, ReadMode>
  {
    using Cardstatus3 = ReadMode<Sdio::Resp3, 0, 32> ;
  } ;

  template<typename... T> 
  using Resp3Pack  = Register<0x40012C1C, 32, ReadMode, SdioRespCardstatusValuesBase, T...> ;

  struct Resp4 : public RegisterBase<0x40012C20, 32, ReadMode>
  {
    using Cardstatus4 = ReadMode<Sdio::Resp4, 0, 32> ;
  } ;

  template<typename... T> 
  using Resp4Pack  = Register<0x40012C20, 32, ReadMode, SdioRespCardstatusValuesBase, T...> ;

  struct Dtimer : public RegisterBase<0x40012C24, 32, ReadWriteMode>
  {
    using Datatime = ReadWriteMode<Sdio::Dtimer, 0, 32> ;
  } ;

  template<typename... T> 
  using DtimerPack  = Register<0x40012C24, 32, ReadWriteMode, SdioDtimerDatatimeValuesBase, T...> ;

  struct Dlen : public RegisterBase<0x40012C28, 32, ReadWriteMode>
  {
    using Datalength = ReadWriteMode<Sdio::Dlen, 0, 25> ;
  } ;

  template<typename... T> 
  using DlenPack  = Register<0x40012C28, 32, ReadWriteMode, SdioDlenDatalengthValuesBase, T...> ;

  struct Dctrl : public RegisterBase<0x40012C2C, 32, ReadWriteMode>
  {
    using Sdioen = SdioDctrlSdioenValues<Sdio::Dctrl, 11, 1, ReadWriteMode, SdioDctrlSdioenValuesBase> ;
    using Rwmod = SdioDctrlRwmodValues<Sdio::Dctrl, 10, 1, ReadWriteMode, SdioDctrlRwmodValuesBase> ;
    using Rwstop = SdioDctrlRwstopValues<Sdio::Dctrl, 9, 1, ReadWriteMode, SdioDctrlRwstopValuesBase> ;
    using Rwstart = SdioDctrlRwstartValues<Sdio::Dctrl, 8, 1, ReadWriteMode, SdioDctrlRwstartValuesBase> ;
    using Dblocksize = SdioDctrlDblocksizeValues<Sdio::Dctrl, 4, 4, ReadWriteMode, SdioDctrlDblocksizeValuesBase> ;
    using Dmaen = SdioDctrlDmaenValues<Sdio::Dctrl, 3, 1, ReadWriteMode, SdioDctrlDmaenValuesBase> ;
    using Dtmode = SdioDctrlDtmodeValues<Sdio::Dctrl, 2, 1, ReadWriteMode, SdioDctrlDtmodeValuesBase> ;
    using Dtdir = SdioDctrlDtdirValues<Sdio::Dctrl, 1, 1, ReadWriteMode, SdioDctrlDtdirValuesBase> ;
    using Dten = SdioDctrlDtenValues<Sdio::Dctrl, 0, 1, ReadWriteMode, SdioDctrlDtenValuesBase> ;
  } ;

  template<typename... T> 
  using DctrlPack  = Register<0x40012C2C, 32, ReadWriteMode, SdioDctrlSdioenValuesBase, T...> ;

  struct Dcount : public RegisterBase<0x40012C30, 32, ReadMode>
  {
    using Datacount = ReadMode<Sdio::Dcount, 0, 25> ;
  } ;

  template<typename... T> 
  using DcountPack  = Register<0x40012C30, 32, ReadMode, SdioDcountDatacountValuesBase, T...> ;

  struct Sta : public RegisterBase<0x40012C34, 32, ReadMode>
  {
    using Ceataend = SdioStaCeataendValues<Sdio::Sta, 23, 1, ReadMode, SdioStaCeataendValuesBase> ;
    using Sdioit = SdioStaSdioitValues<Sdio::Sta, 22, 1, ReadMode, SdioStaSdioitValuesBase> ;
    using Rxdavl = SdioStaRxdavlValues<Sdio::Sta, 21, 1, ReadMode, SdioStaRxdavlValuesBase> ;
    using Txdavl = SdioStaTxdavlValues<Sdio::Sta, 20, 1, ReadMode, SdioStaTxdavlValuesBase> ;
    using Rxfifoe = SdioStaRxfifoeValues<Sdio::Sta, 19, 1, ReadMode, SdioStaRxfifoeValuesBase> ;
    using Txfifoe = SdioStaTxfifoeValues<Sdio::Sta, 18, 1, ReadMode, SdioStaTxfifoeValuesBase> ;
    using Rxfifof = SdioStaRxfifofValues<Sdio::Sta, 17, 1, ReadMode, SdioStaRxfifofValuesBase> ;
    using Txfifof = SdioStaTxfifofValues<Sdio::Sta, 16, 1, ReadMode, SdioStaTxfifofValuesBase> ;
    using Rxfifohf = SdioStaRxfifohfValues<Sdio::Sta, 15, 1, ReadMode, SdioStaRxfifohfValuesBase> ;
    using Txfifohe = SdioStaTxfifoheValues<Sdio::Sta, 14, 1, ReadMode, SdioStaTxfifoheValuesBase> ;
    using Rxact = SdioStaRxactValues<Sdio::Sta, 13, 1, ReadMode, SdioStaRxactValuesBase> ;
    using Txact = SdioStaTxactValues<Sdio::Sta, 12, 1, ReadMode, SdioStaTxactValuesBase> ;
    using Cmdact = SdioStaCmdactValues<Sdio::Sta, 11, 1, ReadMode, SdioStaCmdactValuesBase> ;
    using Dbckend = SdioStaDbckendValues<Sdio::Sta, 10, 1, ReadMode, SdioStaDbckendValuesBase> ;
    using Stbiterr = SdioStaStbiterrValues<Sdio::Sta, 9, 1, ReadMode, SdioStaStbiterrValuesBase> ;
    using Dataend = SdioStaDataendValues<Sdio::Sta, 8, 1, ReadMode, SdioStaDataendValuesBase> ;
    using Cmdsent = SdioStaCmdsentValues<Sdio::Sta, 7, 1, ReadMode, SdioStaCmdsentValuesBase> ;
    using Cmdrend = SdioStaCmdrendValues<Sdio::Sta, 6, 1, ReadMode, SdioStaCmdrendValuesBase> ;
    using Rxoverr = SdioStaRxoverrValues<Sdio::Sta, 5, 1, ReadMode, SdioStaRxoverrValuesBase> ;
    using Txunderr = SdioStaTxunderrValues<Sdio::Sta, 4, 1, ReadMode, SdioStaTxunderrValuesBase> ;
    using Dtimeout = SdioStaDtimeoutValues<Sdio::Sta, 3, 1, ReadMode, SdioStaDtimeoutValuesBase> ;
    using Ctimeout = SdioStaCtimeoutValues<Sdio::Sta, 2, 1, ReadMode, SdioStaCtimeoutValuesBase> ;
    using Dcrcfail = SdioStaDcrcfailValues<Sdio::Sta, 1, 1, ReadMode, SdioStaDcrcfailValuesBase> ;
    using Ccrcfail = SdioStaCcrcfailValues<Sdio::Sta, 0, 1, ReadMode, SdioStaCcrcfailValuesBase> ;
  } ;

  template<typename... T> 
  using StaPack  = Register<0x40012C34, 32, ReadMode, SdioStaCeataendValuesBase, T...> ;

  struct Icr : public RegisterBase<0x40012C38, 32, ReadWriteMode>
  {
    using Ceataendc = SdioIcrCeataendcValues<Sdio::Icr, 23, 1, ReadWriteMode, SdioIcrCeataendcValuesBase> ;
    using Sdioitc = SdioIcrSdioitcValues<Sdio::Icr, 22, 1, ReadWriteMode, SdioIcrSdioitcValuesBase> ;
    using Dbckendc = SdioIcrDbckendcValues<Sdio::Icr, 10, 1, ReadWriteMode, SdioIcrDbckendcValuesBase> ;
    using Stbiterrc = SdioIcrStbiterrcValues<Sdio::Icr, 9, 1, ReadWriteMode, SdioIcrStbiterrcValuesBase> ;
    using Dataendc = SdioIcrDataendcValues<Sdio::Icr, 8, 1, ReadWriteMode, SdioIcrDataendcValuesBase> ;
    using Cmdsentc = SdioIcrCmdsentcValues<Sdio::Icr, 7, 1, ReadWriteMode, SdioIcrCmdsentcValuesBase> ;
    using Cmdrendc = SdioIcrCmdrendcValues<Sdio::Icr, 6, 1, ReadWriteMode, SdioIcrCmdrendcValuesBase> ;
    using Rxoverrc = SdioIcrRxoverrcValues<Sdio::Icr, 5, 1, ReadWriteMode, SdioIcrRxoverrcValuesBase> ;
    using Txunderrc = SdioIcrTxunderrcValues<Sdio::Icr, 4, 1, ReadWriteMode, SdioIcrTxunderrcValuesBase> ;
    using Dtimeoutc = SdioIcrDtimeoutcValues<Sdio::Icr, 3, 1, ReadWriteMode, SdioIcrDtimeoutcValuesBase> ;
    using Ctimeoutc = SdioIcrCtimeoutcValues<Sdio::Icr, 2, 1, ReadWriteMode, SdioIcrCtimeoutcValuesBase> ;
    using Dcrcfailc = SdioIcrDcrcfailcValues<Sdio::Icr, 1, 1, ReadWriteMode, SdioIcrDcrcfailcValuesBase> ;
    using Ccrcfailc = SdioIcrCcrcfailcValues<Sdio::Icr, 0, 1, ReadWriteMode, SdioIcrCcrcfailcValuesBase> ;
  } ;

  template<typename... T> 
  using IcrPack  = Register<0x40012C38, 32, ReadWriteMode, SdioIcrCeataendcValuesBase, T...> ;

  struct Mask : public RegisterBase<0x40012C3C, 32, ReadWriteMode>
  {
    using Ceataendie = SdioMaskCeataendieValues<Sdio::Mask, 23, 1, ReadWriteMode, SdioMaskCeataendieValuesBase> ;
    using Sdioitie = SdioMaskSdioitieValues<Sdio::Mask, 22, 1, ReadWriteMode, SdioMaskSdioitieValuesBase> ;
    using Rxdavlie = SdioMaskRxdavlieValues<Sdio::Mask, 21, 1, ReadWriteMode, SdioMaskRxdavlieValuesBase> ;
    using Txdavlie = SdioMaskTxdavlieValues<Sdio::Mask, 20, 1, ReadWriteMode, SdioMaskTxdavlieValuesBase> ;
    using Rxfifoeie = SdioMaskRxfifoeieValues<Sdio::Mask, 19, 1, ReadWriteMode, SdioMaskRxfifoeieValuesBase> ;
    using Txfifoeie = SdioMaskTxfifoeieValues<Sdio::Mask, 18, 1, ReadWriteMode, SdioMaskTxfifoeieValuesBase> ;
    using Rxfifofie = SdioMaskRxfifofieValues<Sdio::Mask, 17, 1, ReadWriteMode, SdioMaskRxfifofieValuesBase> ;
    using Txfifofie = SdioMaskTxfifofieValues<Sdio::Mask, 16, 1, ReadWriteMode, SdioMaskTxfifofieValuesBase> ;
    using Rxfifohfie = SdioMaskRxfifohfieValues<Sdio::Mask, 15, 1, ReadWriteMode, SdioMaskRxfifohfieValuesBase> ;
    using Txfifoheie = SdioMaskTxfifoheieValues<Sdio::Mask, 14, 1, ReadWriteMode, SdioMaskTxfifoheieValuesBase> ;
    using Rxactie = SdioMaskRxactieValues<Sdio::Mask, 13, 1, ReadWriteMode, SdioMaskRxactieValuesBase> ;
    using Txactie = SdioMaskTxactieValues<Sdio::Mask, 12, 1, ReadWriteMode, SdioMaskTxactieValuesBase> ;
    using Cmdactie = SdioMaskCmdactieValues<Sdio::Mask, 11, 1, ReadWriteMode, SdioMaskCmdactieValuesBase> ;
    using Dbckendie = SdioMaskDbckendieValues<Sdio::Mask, 10, 1, ReadWriteMode, SdioMaskDbckendieValuesBase> ;
    using Stbiterrie = SdioMaskStbiterrieValues<Sdio::Mask, 9, 1, ReadWriteMode, SdioMaskStbiterrieValuesBase> ;
    using Dataendie = SdioMaskDataendieValues<Sdio::Mask, 8, 1, ReadWriteMode, SdioMaskDataendieValuesBase> ;
    using Cmdsentie = SdioMaskCmdsentieValues<Sdio::Mask, 7, 1, ReadWriteMode, SdioMaskCmdsentieValuesBase> ;
    using Cmdrendie = SdioMaskCmdrendieValues<Sdio::Mask, 6, 1, ReadWriteMode, SdioMaskCmdrendieValuesBase> ;
    using Rxoverrie = SdioMaskRxoverrieValues<Sdio::Mask, 5, 1, ReadWriteMode, SdioMaskRxoverrieValuesBase> ;
    using Txunderrie = SdioMaskTxunderrieValues<Sdio::Mask, 4, 1, ReadWriteMode, SdioMaskTxunderrieValuesBase> ;
    using Dtimeoutie = SdioMaskDtimeoutieValues<Sdio::Mask, 3, 1, ReadWriteMode, SdioMaskDtimeoutieValuesBase> ;
    using Ctimeoutie = SdioMaskCtimeoutieValues<Sdio::Mask, 2, 1, ReadWriteMode, SdioMaskCtimeoutieValuesBase> ;
    using Dcrcfailie = SdioMaskDcrcfailieValues<Sdio::Mask, 1, 1, ReadWriteMode, SdioMaskDcrcfailieValuesBase> ;
    using Ccrcfailie = SdioMaskCcrcfailieValues<Sdio::Mask, 0, 1, ReadWriteMode, SdioMaskCcrcfailieValuesBase> ;
  } ;

  template<typename... T> 
  using MaskPack  = Register<0x40012C3C, 32, ReadWriteMode, SdioMaskCeataendieValuesBase, T...> ;

  struct Fifocnt : public RegisterBase<0x40012C48, 32, ReadMode>
  {
    using Fifocount = ReadMode<Sdio::Fifocnt, 0, 24> ;
  } ;

  template<typename... T> 
  using FifocntPack  = Register<0x40012C48, 32, ReadMode, SdioFifocntFifocountValuesBase, T...> ;

  struct Fifo : public RegisterBase<0x40012C80, 32, ReadWriteMode>
  {
    using Fifodata = ReadWriteMode<Sdio::Fifo, 0, 32> ;
  } ;

  template<typename... T> 
  using FifoPack  = Register<0x40012C80, 32, ReadWriteMode, SdioFifoFifodataValuesBase, T...> ;

} ;

#endif //#if !defined(SDIOREGISTERS_HPP)
