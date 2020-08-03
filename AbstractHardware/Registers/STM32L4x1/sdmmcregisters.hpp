/*******************************************************************************
* Filename      : sdmmcregisters.hpp
*
* Details       : Secure digital input/output interface. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(SDMMCREGISTERS_HPP)
#define SDMMCREGISTERS_HPP

#include "sdmmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SDMMC
{
  struct SDMMCPOWERBase {} ;

  struct POWER : public RegisterBase<0x40012800, 32, ReadWriteMode>
  {
    using PWRCTRL = SDMMC_POWER_PWRCTRL_Values<SDMMC::POWER, 0, 2, ReadWriteMode, SDMMCPOWERBase> ;
    using FieldValues = SDMMC_POWER_PWRCTRL_Values<SDMMC::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40012800, 32, ReadWriteMode, SDMMCPOWERBase, T...> ;

  struct SDMMCCLKCRBase {} ;

  struct CLKCR : public RegisterBase<0x40012804, 32, ReadWriteMode>
  {
    using HWFC_EN = SDMMC_CLKCR_HWFC_EN_Values<SDMMC::CLKCR, 14, 1, ReadWriteMode, SDMMCCLKCRBase> ;
    using NEGEDGE = SDMMC_CLKCR_NEGEDGE_Values<SDMMC::CLKCR, 13, 1, ReadWriteMode, SDMMCCLKCRBase> ;
    using WIDBUS = SDMMC_CLKCR_WIDBUS_Values<SDMMC::CLKCR, 11, 2, ReadWriteMode, SDMMCCLKCRBase> ;
    using BYPASS = SDMMC_CLKCR_BYPASS_Values<SDMMC::CLKCR, 10, 1, ReadWriteMode, SDMMCCLKCRBase> ;
    using PWRSAV = SDMMC_CLKCR_PWRSAV_Values<SDMMC::CLKCR, 9, 1, ReadWriteMode, SDMMCCLKCRBase> ;
    using CLKEN = SDMMC_CLKCR_CLKEN_Values<SDMMC::CLKCR, 8, 1, ReadWriteMode, SDMMCCLKCRBase> ;
    using CLKDIV = SDMMC_CLKCR_CLKDIV_Values<SDMMC::CLKCR, 0, 8, ReadWriteMode, SDMMCCLKCRBase> ;
    using FieldValues = SDMMC_CLKCR_CLKDIV_Values<SDMMC::CLKCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLKCRPack  = Register<0x40012804, 32, ReadWriteMode, SDMMCCLKCRBase, T...> ;

  struct SDMMCARGBase {} ;

  struct ARG : public RegisterBase<0x40012808, 32, ReadWriteMode>
  {
    using CMDARG = SDMMC_ARG_CMDARG_Values<SDMMC::ARG, 0, 32, ReadWriteMode, SDMMCARGBase> ;
    using FieldValues = SDMMC_ARG_CMDARG_Values<SDMMC::ARG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARGPack  = Register<0x40012808, 32, ReadWriteMode, SDMMCARGBase, T...> ;

  struct SDMMCCMDBase {} ;

  struct CMD : public RegisterBase<0x4001280C, 32, ReadWriteMode>
  {
    using CE_ATACMD = SDMMC_CMD_CE_ATACMD_Values<SDMMC::CMD, 14, 1, ReadWriteMode, SDMMCCMDBase> ;
    using nIEN = SDMMC_CMD_nIEN_Values<SDMMC::CMD, 13, 1, ReadWriteMode, SDMMCCMDBase> ;
    using ENCMDcompl = SDMMC_CMD_ENCMDcompl_Values<SDMMC::CMD, 12, 1, ReadWriteMode, SDMMCCMDBase> ;
    using SDIOSuspend = SDMMC_CMD_SDIOSuspend_Values<SDMMC::CMD, 11, 1, ReadWriteMode, SDMMCCMDBase> ;
    using CPSMEN = SDMMC_CMD_CPSMEN_Values<SDMMC::CMD, 10, 1, ReadWriteMode, SDMMCCMDBase> ;
    using WAITPEND = SDMMC_CMD_WAITPEND_Values<SDMMC::CMD, 9, 1, ReadWriteMode, SDMMCCMDBase> ;
    using WAITINT = SDMMC_CMD_WAITINT_Values<SDMMC::CMD, 8, 1, ReadWriteMode, SDMMCCMDBase> ;
    using WAITRESP = SDMMC_CMD_WAITRESP_Values<SDMMC::CMD, 6, 2, ReadWriteMode, SDMMCCMDBase> ;
    using CMDINDEX = SDMMC_CMD_CMDINDEX_Values<SDMMC::CMD, 0, 6, ReadWriteMode, SDMMCCMDBase> ;
    using FieldValues = SDMMC_CMD_CMDINDEX_Values<SDMMC::CMD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMDPack  = Register<0x4001280C, 32, ReadWriteMode, SDMMCCMDBase, T...> ;

  struct SDMMCRESPCMDBase {} ;

  struct RESPCMD : public RegisterBase<0x40012810, 32, ReadMode>
  {
    using RESPCMDField = SDMMC_RESPCMD_RESPCMD_Values<SDMMC::RESPCMD, 0, 6, ReadMode, SDMMCRESPCMDBase> ;
    using FieldValues = SDMMC_RESPCMD_RESPCMD_Values<SDMMC::RESPCMD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESPCMDPack  = Register<0x40012810, 32, ReadMode, SDMMCRESPCMDBase, T...> ;

  struct SDMMCRESP1Base {} ;

  struct RESP1 : public RegisterBase<0x40012814, 32, ReadMode>
  {
    using CARDSTATUS1 = SDMMC_RESP1_CARDSTATUS1_Values<SDMMC::RESP1, 0, 32, ReadMode, SDMMCRESP1Base> ;
    using FieldValues = SDMMC_RESP1_CARDSTATUS1_Values<SDMMC::RESP1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP1Pack  = Register<0x40012814, 32, ReadMode, SDMMCRESP1Base, T...> ;

  struct SDMMCRESP2Base {} ;

  struct RESP2 : public RegisterBase<0x40012818, 32, ReadMode>
  {
    using CARDSTATUS2 = SDMMC_RESP2_CARDSTATUS2_Values<SDMMC::RESP2, 0, 32, ReadMode, SDMMCRESP2Base> ;
    using FieldValues = SDMMC_RESP2_CARDSTATUS2_Values<SDMMC::RESP2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP2Pack  = Register<0x40012818, 32, ReadMode, SDMMCRESP2Base, T...> ;

  struct SDMMCRESP3Base {} ;

  struct RESP3 : public RegisterBase<0x4001281C, 32, ReadMode>
  {
    using CARDSTATUS3 = SDMMC_RESP3_CARDSTATUS3_Values<SDMMC::RESP3, 0, 32, ReadMode, SDMMCRESP3Base> ;
    using FieldValues = SDMMC_RESP3_CARDSTATUS3_Values<SDMMC::RESP3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP3Pack  = Register<0x4001281C, 32, ReadMode, SDMMCRESP3Base, T...> ;

  struct SDMMCRESP4Base {} ;

  struct RESP4 : public RegisterBase<0x40012820, 32, ReadMode>
  {
    using CARDSTATUS4 = SDMMC_RESP4_CARDSTATUS4_Values<SDMMC::RESP4, 0, 32, ReadMode, SDMMCRESP4Base> ;
    using FieldValues = SDMMC_RESP4_CARDSTATUS4_Values<SDMMC::RESP4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP4Pack  = Register<0x40012820, 32, ReadMode, SDMMCRESP4Base, T...> ;

  struct SDMMCDTIMERBase {} ;

  struct DTIMER : public RegisterBase<0x40012824, 32, ReadWriteMode>
  {
    using DATATIME = SDMMC_DTIMER_DATATIME_Values<SDMMC::DTIMER, 0, 32, ReadWriteMode, SDMMCDTIMERBase> ;
    using FieldValues = SDMMC_DTIMER_DATATIME_Values<SDMMC::DTIMER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTIMERPack  = Register<0x40012824, 32, ReadWriteMode, SDMMCDTIMERBase, T...> ;

  struct SDMMCDLENBase {} ;

  struct DLEN : public RegisterBase<0x40012828, 32, ReadWriteMode>
  {
    using DATALENGTH = SDMMC_DLEN_DATALENGTH_Values<SDMMC::DLEN, 0, 25, ReadWriteMode, SDMMCDLENBase> ;
    using FieldValues = SDMMC_DLEN_DATALENGTH_Values<SDMMC::DLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DLENPack  = Register<0x40012828, 32, ReadWriteMode, SDMMCDLENBase, T...> ;

  struct SDMMCDCTRLBase {} ;

  struct DCTRL : public RegisterBase<0x4001282C, 32, ReadWriteMode>
  {
    using SDIOEN = SDMMC_DCTRL_SDIOEN_Values<SDMMC::DCTRL, 11, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using RWMOD = SDMMC_DCTRL_RWMOD_Values<SDMMC::DCTRL, 10, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using RWSTOP = SDMMC_DCTRL_RWSTOP_Values<SDMMC::DCTRL, 9, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using RWSTART = SDMMC_DCTRL_RWSTART_Values<SDMMC::DCTRL, 8, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using DBLOCKSIZE = SDMMC_DCTRL_DBLOCKSIZE_Values<SDMMC::DCTRL, 4, 4, ReadWriteMode, SDMMCDCTRLBase> ;
    using DMAEN = SDMMC_DCTRL_DMAEN_Values<SDMMC::DCTRL, 3, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using DTMODE = SDMMC_DCTRL_DTMODE_Values<SDMMC::DCTRL, 2, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using DTDIR = SDMMC_DCTRL_DTDIR_Values<SDMMC::DCTRL, 1, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using DTEN = SDMMC_DCTRL_DTEN_Values<SDMMC::DCTRL, 0, 1, ReadWriteMode, SDMMCDCTRLBase> ;
    using FieldValues = SDMMC_DCTRL_DTEN_Values<SDMMC::DCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCTRLPack  = Register<0x4001282C, 32, ReadWriteMode, SDMMCDCTRLBase, T...> ;

  struct SDMMCDCOUNTBase {} ;

  struct DCOUNT : public RegisterBase<0x40012830, 32, ReadMode>
  {
    using DATACOUNT = SDMMC_DCOUNT_DATACOUNT_Values<SDMMC::DCOUNT, 0, 25, ReadMode, SDMMCDCOUNTBase> ;
    using FieldValues = SDMMC_DCOUNT_DATACOUNT_Values<SDMMC::DCOUNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCOUNTPack  = Register<0x40012830, 32, ReadMode, SDMMCDCOUNTBase, T...> ;

  struct SDMMCSTABase {} ;

  struct STA : public RegisterBase<0x40012834, 32, ReadMode>
  {
    using CEATAEND = SDMMC_STA_CEATAEND_Values<SDMMC::STA, 23, 1, ReadMode, SDMMCSTABase> ;
    using SDIOIT = SDMMC_STA_SDIOIT_Values<SDMMC::STA, 22, 1, ReadMode, SDMMCSTABase> ;
    using RXDAVL = SDMMC_STA_RXDAVL_Values<SDMMC::STA, 21, 1, ReadMode, SDMMCSTABase> ;
    using TXDAVL = SDMMC_STA_TXDAVL_Values<SDMMC::STA, 20, 1, ReadMode, SDMMCSTABase> ;
    using RXFIFOE = SDMMC_STA_RXFIFOE_Values<SDMMC::STA, 19, 1, ReadMode, SDMMCSTABase> ;
    using TXFIFOE = SDMMC_STA_TXFIFOE_Values<SDMMC::STA, 18, 1, ReadMode, SDMMCSTABase> ;
    using RXFIFOF = SDMMC_STA_RXFIFOF_Values<SDMMC::STA, 17, 1, ReadMode, SDMMCSTABase> ;
    using TXFIFOF = SDMMC_STA_TXFIFOF_Values<SDMMC::STA, 16, 1, ReadMode, SDMMCSTABase> ;
    using RXFIFOHF = SDMMC_STA_RXFIFOHF_Values<SDMMC::STA, 15, 1, ReadMode, SDMMCSTABase> ;
    using TXFIFOHE = SDMMC_STA_TXFIFOHE_Values<SDMMC::STA, 14, 1, ReadMode, SDMMCSTABase> ;
    using RXACT = SDMMC_STA_RXACT_Values<SDMMC::STA, 13, 1, ReadMode, SDMMCSTABase> ;
    using TXACT = SDMMC_STA_TXACT_Values<SDMMC::STA, 12, 1, ReadMode, SDMMCSTABase> ;
    using CMDACT = SDMMC_STA_CMDACT_Values<SDMMC::STA, 11, 1, ReadMode, SDMMCSTABase> ;
    using DBCKEND = SDMMC_STA_DBCKEND_Values<SDMMC::STA, 10, 1, ReadMode, SDMMCSTABase> ;
    using STBITERR = SDMMC_STA_STBITERR_Values<SDMMC::STA, 9, 1, ReadMode, SDMMCSTABase> ;
    using DATAEND = SDMMC_STA_DATAEND_Values<SDMMC::STA, 8, 1, ReadMode, SDMMCSTABase> ;
    using CMDSENT = SDMMC_STA_CMDSENT_Values<SDMMC::STA, 7, 1, ReadMode, SDMMCSTABase> ;
    using CMDREND = SDMMC_STA_CMDREND_Values<SDMMC::STA, 6, 1, ReadMode, SDMMCSTABase> ;
    using RXOVERR = SDMMC_STA_RXOVERR_Values<SDMMC::STA, 5, 1, ReadMode, SDMMCSTABase> ;
    using TXUNDERR = SDMMC_STA_TXUNDERR_Values<SDMMC::STA, 4, 1, ReadMode, SDMMCSTABase> ;
    using DTIMEOUT = SDMMC_STA_DTIMEOUT_Values<SDMMC::STA, 3, 1, ReadMode, SDMMCSTABase> ;
    using CTIMEOUT = SDMMC_STA_CTIMEOUT_Values<SDMMC::STA, 2, 1, ReadMode, SDMMCSTABase> ;
    using DCRCFAIL = SDMMC_STA_DCRCFAIL_Values<SDMMC::STA, 1, 1, ReadMode, SDMMCSTABase> ;
    using CCRCFAIL = SDMMC_STA_CCRCFAIL_Values<SDMMC::STA, 0, 1, ReadMode, SDMMCSTABase> ;
    using FieldValues = SDMMC_STA_CCRCFAIL_Values<SDMMC::STA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAPack  = Register<0x40012834, 32, ReadMode, SDMMCSTABase, T...> ;

  struct SDMMCICRBase {} ;

  struct ICR : public RegisterBase<0x40012838, 32, ReadWriteMode>
  {
    using CEATAENDC = SDMMC_ICR_CEATAENDC_Values<SDMMC::ICR, 23, 1, ReadWriteMode, SDMMCICRBase> ;
    using SDIOITC = SDMMC_ICR_SDIOITC_Values<SDMMC::ICR, 22, 1, ReadWriteMode, SDMMCICRBase> ;
    using DBCKENDC = SDMMC_ICR_DBCKENDC_Values<SDMMC::ICR, 10, 1, ReadWriteMode, SDMMCICRBase> ;
    using STBITERRC = SDMMC_ICR_STBITERRC_Values<SDMMC::ICR, 9, 1, ReadWriteMode, SDMMCICRBase> ;
    using DATAENDC = SDMMC_ICR_DATAENDC_Values<SDMMC::ICR, 8, 1, ReadWriteMode, SDMMCICRBase> ;
    using CMDSENTC = SDMMC_ICR_CMDSENTC_Values<SDMMC::ICR, 7, 1, ReadWriteMode, SDMMCICRBase> ;
    using CMDRENDC = SDMMC_ICR_CMDRENDC_Values<SDMMC::ICR, 6, 1, ReadWriteMode, SDMMCICRBase> ;
    using RXOVERRC = SDMMC_ICR_RXOVERRC_Values<SDMMC::ICR, 5, 1, ReadWriteMode, SDMMCICRBase> ;
    using TXUNDERRC = SDMMC_ICR_TXUNDERRC_Values<SDMMC::ICR, 4, 1, ReadWriteMode, SDMMCICRBase> ;
    using DTIMEOUTC = SDMMC_ICR_DTIMEOUTC_Values<SDMMC::ICR, 3, 1, ReadWriteMode, SDMMCICRBase> ;
    using CTIMEOUTC = SDMMC_ICR_CTIMEOUTC_Values<SDMMC::ICR, 2, 1, ReadWriteMode, SDMMCICRBase> ;
    using DCRCFAILC = SDMMC_ICR_DCRCFAILC_Values<SDMMC::ICR, 1, 1, ReadWriteMode, SDMMCICRBase> ;
    using CCRCFAILC = SDMMC_ICR_CCRCFAILC_Values<SDMMC::ICR, 0, 1, ReadWriteMode, SDMMCICRBase> ;
    using FieldValues = SDMMC_ICR_CCRCFAILC_Values<SDMMC::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40012838, 32, ReadWriteMode, SDMMCICRBase, T...> ;

  struct SDMMCMASKBase {} ;

  struct MASK : public RegisterBase<0x4001283C, 32, ReadWriteMode>
  {
    using CEATAENDIE = SDMMC_MASK_CEATAENDIE_Values<SDMMC::MASK, 23, 1, ReadWriteMode, SDMMCMASKBase> ;
    using SDIOITIE = SDMMC_MASK_SDIOITIE_Values<SDMMC::MASK, 22, 1, ReadWriteMode, SDMMCMASKBase> ;
    using RXDAVLIE = SDMMC_MASK_RXDAVLIE_Values<SDMMC::MASK, 21, 1, ReadWriteMode, SDMMCMASKBase> ;
    using TXDAVLIE = SDMMC_MASK_TXDAVLIE_Values<SDMMC::MASK, 20, 1, ReadWriteMode, SDMMCMASKBase> ;
    using RXFIFOEIE = SDMMC_MASK_RXFIFOEIE_Values<SDMMC::MASK, 19, 1, ReadWriteMode, SDMMCMASKBase> ;
    using TXFIFOEIE = SDMMC_MASK_TXFIFOEIE_Values<SDMMC::MASK, 18, 1, ReadWriteMode, SDMMCMASKBase> ;
    using RXFIFOFIE = SDMMC_MASK_RXFIFOFIE_Values<SDMMC::MASK, 17, 1, ReadWriteMode, SDMMCMASKBase> ;
    using TXFIFOFIE = SDMMC_MASK_TXFIFOFIE_Values<SDMMC::MASK, 16, 1, ReadWriteMode, SDMMCMASKBase> ;
    using RXFIFOHFIE = SDMMC_MASK_RXFIFOHFIE_Values<SDMMC::MASK, 15, 1, ReadWriteMode, SDMMCMASKBase> ;
    using TXFIFOHEIE = SDMMC_MASK_TXFIFOHEIE_Values<SDMMC::MASK, 14, 1, ReadWriteMode, SDMMCMASKBase> ;
    using RXACTIE = SDMMC_MASK_RXACTIE_Values<SDMMC::MASK, 13, 1, ReadWriteMode, SDMMCMASKBase> ;
    using TXACTIE = SDMMC_MASK_TXACTIE_Values<SDMMC::MASK, 12, 1, ReadWriteMode, SDMMCMASKBase> ;
    using CMDACTIE = SDMMC_MASK_CMDACTIE_Values<SDMMC::MASK, 11, 1, ReadWriteMode, SDMMCMASKBase> ;
    using DBCKENDIE = SDMMC_MASK_DBCKENDIE_Values<SDMMC::MASK, 10, 1, ReadWriteMode, SDMMCMASKBase> ;
    using STBITERRIE = SDMMC_MASK_STBITERRIE_Values<SDMMC::MASK, 9, 1, ReadWriteMode, SDMMCMASKBase> ;
    using DATAENDIE = SDMMC_MASK_DATAENDIE_Values<SDMMC::MASK, 8, 1, ReadWriteMode, SDMMCMASKBase> ;
    using CMDSENTIE = SDMMC_MASK_CMDSENTIE_Values<SDMMC::MASK, 7, 1, ReadWriteMode, SDMMCMASKBase> ;
    using CMDRENDIE = SDMMC_MASK_CMDRENDIE_Values<SDMMC::MASK, 6, 1, ReadWriteMode, SDMMCMASKBase> ;
    using RXOVERRIE = SDMMC_MASK_RXOVERRIE_Values<SDMMC::MASK, 5, 1, ReadWriteMode, SDMMCMASKBase> ;
    using TXUNDERRIE = SDMMC_MASK_TXUNDERRIE_Values<SDMMC::MASK, 4, 1, ReadWriteMode, SDMMCMASKBase> ;
    using DTIMEOUTIE = SDMMC_MASK_DTIMEOUTIE_Values<SDMMC::MASK, 3, 1, ReadWriteMode, SDMMCMASKBase> ;
    using CTIMEOUTIE = SDMMC_MASK_CTIMEOUTIE_Values<SDMMC::MASK, 2, 1, ReadWriteMode, SDMMCMASKBase> ;
    using DCRCFAILIE = SDMMC_MASK_DCRCFAILIE_Values<SDMMC::MASK, 1, 1, ReadWriteMode, SDMMCMASKBase> ;
    using CCRCFAILIE = SDMMC_MASK_CCRCFAILIE_Values<SDMMC::MASK, 0, 1, ReadWriteMode, SDMMCMASKBase> ;
    using FieldValues = SDMMC_MASK_CCRCFAILIE_Values<SDMMC::MASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MASKPack  = Register<0x4001283C, 32, ReadWriteMode, SDMMCMASKBase, T...> ;

  struct SDMMCFIFOCNTBase {} ;

  struct FIFOCNT : public RegisterBase<0x40012848, 32, ReadMode>
  {
    using FIFOCOUNT = SDMMC_FIFOCNT_FIFOCOUNT_Values<SDMMC::FIFOCNT, 0, 24, ReadMode, SDMMCFIFOCNTBase> ;
    using FieldValues = SDMMC_FIFOCNT_FIFOCOUNT_Values<SDMMC::FIFOCNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FIFOCNTPack  = Register<0x40012848, 32, ReadMode, SDMMCFIFOCNTBase, T...> ;

  struct SDMMCFIFOBase {} ;

  struct FIFO : public RegisterBase<0x40012880, 32, ReadWriteMode>
  {
    using FIFOData = SDMMC_FIFO_FIFOData_Values<SDMMC::FIFO, 0, 32, ReadWriteMode, SDMMCFIFOBase> ;
    using FieldValues = SDMMC_FIFO_FIFOData_Values<SDMMC::FIFO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FIFOPack  = Register<0x40012880, 32, ReadWriteMode, SDMMCFIFOBase, T...> ;

} ;

#endif //#if !defined(SDMMCREGISTERS_HPP)
