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

#include "sdiofieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SDIO
{
  struct SDIOPOWERBase {} ;

  struct POWER : public RegisterBase<0x40012C00, 32, ReadWriteMode>
  {
    using PWRCTRL = SDIO_POWER_PWRCTRL_Values<SDIO::POWER, 0, 2, ReadWriteMode, SDIOPOWERBase> ;
    using FieldValues = SDIO_POWER_PWRCTRL_Values<SDIO::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x40012C00, 32, ReadWriteMode, SDIOPOWERBase, T...> ;

  struct SDIOCLKCRBase {} ;

  struct CLKCR : public RegisterBase<0x40012C04, 32, ReadWriteMode>
  {
    using HWFC_EN = SDIO_CLKCR_HWFC_EN_Values<SDIO::CLKCR, 14, 1, ReadWriteMode, SDIOCLKCRBase> ;
    using NEGEDGE = SDIO_CLKCR_NEGEDGE_Values<SDIO::CLKCR, 13, 1, ReadWriteMode, SDIOCLKCRBase> ;
    using WIDBUS = SDIO_CLKCR_WIDBUS_Values<SDIO::CLKCR, 11, 2, ReadWriteMode, SDIOCLKCRBase> ;
    using BYPASS = SDIO_CLKCR_BYPASS_Values<SDIO::CLKCR, 10, 1, ReadWriteMode, SDIOCLKCRBase> ;
    using PWRSAV = SDIO_CLKCR_PWRSAV_Values<SDIO::CLKCR, 9, 1, ReadWriteMode, SDIOCLKCRBase> ;
    using CLKEN = SDIO_CLKCR_CLKEN_Values<SDIO::CLKCR, 8, 1, ReadWriteMode, SDIOCLKCRBase> ;
    using CLKDIV = SDIO_CLKCR_CLKDIV_Values<SDIO::CLKCR, 0, 8, ReadWriteMode, SDIOCLKCRBase> ;
    using FieldValues = SDIO_CLKCR_CLKDIV_Values<SDIO::CLKCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLKCRPack  = Register<0x40012C04, 32, ReadWriteMode, SDIOCLKCRBase, T...> ;

  struct SDIOARGBase {} ;

  struct ARG : public RegisterBase<0x40012C08, 32, ReadWriteMode>
  {
    using CMDARG = SDIO_ARG_CMDARG_Values<SDIO::ARG, 0, 32, ReadWriteMode, SDIOARGBase> ;
    using FieldValues = SDIO_ARG_CMDARG_Values<SDIO::ARG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARGPack  = Register<0x40012C08, 32, ReadWriteMode, SDIOARGBase, T...> ;

  struct SDIOCMDBase {} ;

  struct CMD : public RegisterBase<0x40012C0C, 32, ReadWriteMode>
  {
    using CE_ATACMD = SDIO_CMD_CE_ATACMD_Values<SDIO::CMD, 14, 1, ReadWriteMode, SDIOCMDBase> ;
    using nIEN = SDIO_CMD_nIEN_Values<SDIO::CMD, 13, 1, ReadWriteMode, SDIOCMDBase> ;
    using ENCMDcompl = SDIO_CMD_ENCMDcompl_Values<SDIO::CMD, 12, 1, ReadWriteMode, SDIOCMDBase> ;
    using SDIOSuspend = SDIO_CMD_SDIOSuspend_Values<SDIO::CMD, 11, 1, ReadWriteMode, SDIOCMDBase> ;
    using CPSMEN = SDIO_CMD_CPSMEN_Values<SDIO::CMD, 10, 1, ReadWriteMode, SDIOCMDBase> ;
    using WAITPEND = SDIO_CMD_WAITPEND_Values<SDIO::CMD, 9, 1, ReadWriteMode, SDIOCMDBase> ;
    using WAITINT = SDIO_CMD_WAITINT_Values<SDIO::CMD, 8, 1, ReadWriteMode, SDIOCMDBase> ;
    using WAITRESP = SDIO_CMD_WAITRESP_Values<SDIO::CMD, 6, 2, ReadWriteMode, SDIOCMDBase> ;
    using CMDINDEX = SDIO_CMD_CMDINDEX_Values<SDIO::CMD, 0, 6, ReadWriteMode, SDIOCMDBase> ;
    using FieldValues = SDIO_CMD_CMDINDEX_Values<SDIO::CMD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMDPack  = Register<0x40012C0C, 32, ReadWriteMode, SDIOCMDBase, T...> ;

  struct SDIORESPCMDBase {} ;

  struct RESPCMD : public RegisterBase<0x40012C10, 32, ReadMode>
  {
    using RESPCMDField = SDIO_RESPCMD_RESPCMD_Values<SDIO::RESPCMD, 0, 6, ReadMode, SDIORESPCMDBase> ;
    using FieldValues = SDIO_RESPCMD_RESPCMD_Values<SDIO::RESPCMD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESPCMDPack  = Register<0x40012C10, 32, ReadMode, SDIORESPCMDBase, T...> ;

  struct SDIORESP1Base {} ;

  struct RESP1 : public RegisterBase<0x40012C14, 32, ReadMode>
  {
    using CARDSTATUS1 = SDIO_RESP1_CARDSTATUS1_Values<SDIO::RESP1, 0, 32, ReadMode, SDIORESP1Base> ;
    using FieldValues = SDIO_RESP1_CARDSTATUS1_Values<SDIO::RESP1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP1Pack  = Register<0x40012C14, 32, ReadMode, SDIORESP1Base, T...> ;

  struct SDIORESP2Base {} ;

  struct RESP2 : public RegisterBase<0x40012C18, 32, ReadMode>
  {
    using CARDSTATUS2 = SDIO_RESP2_CARDSTATUS2_Values<SDIO::RESP2, 0, 32, ReadMode, SDIORESP2Base> ;
    using FieldValues = SDIO_RESP2_CARDSTATUS2_Values<SDIO::RESP2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP2Pack  = Register<0x40012C18, 32, ReadMode, SDIORESP2Base, T...> ;

  struct SDIORESP3Base {} ;

  struct RESP3 : public RegisterBase<0x40012C1C, 32, ReadMode>
  {
    using CARDSTATUS3 = SDIO_RESP3_CARDSTATUS3_Values<SDIO::RESP3, 0, 32, ReadMode, SDIORESP3Base> ;
    using FieldValues = SDIO_RESP3_CARDSTATUS3_Values<SDIO::RESP3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP3Pack  = Register<0x40012C1C, 32, ReadMode, SDIORESP3Base, T...> ;

  struct SDIORESP4Base {} ;

  struct RESP4 : public RegisterBase<0x40012C20, 32, ReadMode>
  {
    using CARDSTATUS4 = SDIO_RESP4_CARDSTATUS4_Values<SDIO::RESP4, 0, 32, ReadMode, SDIORESP4Base> ;
    using FieldValues = SDIO_RESP4_CARDSTATUS4_Values<SDIO::RESP4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP4Pack  = Register<0x40012C20, 32, ReadMode, SDIORESP4Base, T...> ;

  struct SDIODTIMERBase {} ;

  struct DTIMER : public RegisterBase<0x40012C24, 32, ReadWriteMode>
  {
    using DATATIME = SDIO_DTIMER_DATATIME_Values<SDIO::DTIMER, 0, 32, ReadWriteMode, SDIODTIMERBase> ;
    using FieldValues = SDIO_DTIMER_DATATIME_Values<SDIO::DTIMER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTIMERPack  = Register<0x40012C24, 32, ReadWriteMode, SDIODTIMERBase, T...> ;

  struct SDIODLENBase {} ;

  struct DLEN : public RegisterBase<0x40012C28, 32, ReadWriteMode>
  {
    using DATALENGTH = SDIO_DLEN_DATALENGTH_Values<SDIO::DLEN, 0, 25, ReadWriteMode, SDIODLENBase> ;
    using FieldValues = SDIO_DLEN_DATALENGTH_Values<SDIO::DLEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DLENPack  = Register<0x40012C28, 32, ReadWriteMode, SDIODLENBase, T...> ;

  struct SDIODCTRLBase {} ;

  struct DCTRL : public RegisterBase<0x40012C2C, 32, ReadWriteMode>
  {
    using SDIOEN = SDIO_DCTRL_SDIOEN_Values<SDIO::DCTRL, 11, 1, ReadWriteMode, SDIODCTRLBase> ;
    using RWMOD = SDIO_DCTRL_RWMOD_Values<SDIO::DCTRL, 10, 1, ReadWriteMode, SDIODCTRLBase> ;
    using RWSTOP = SDIO_DCTRL_RWSTOP_Values<SDIO::DCTRL, 9, 1, ReadWriteMode, SDIODCTRLBase> ;
    using RWSTART = SDIO_DCTRL_RWSTART_Values<SDIO::DCTRL, 8, 1, ReadWriteMode, SDIODCTRLBase> ;
    using DBLOCKSIZE = SDIO_DCTRL_DBLOCKSIZE_Values<SDIO::DCTRL, 4, 4, ReadWriteMode, SDIODCTRLBase> ;
    using DMAEN = SDIO_DCTRL_DMAEN_Values<SDIO::DCTRL, 3, 1, ReadWriteMode, SDIODCTRLBase> ;
    using DTMODE = SDIO_DCTRL_DTMODE_Values<SDIO::DCTRL, 2, 1, ReadWriteMode, SDIODCTRLBase> ;
    using DTDIR = SDIO_DCTRL_DTDIR_Values<SDIO::DCTRL, 1, 1, ReadWriteMode, SDIODCTRLBase> ;
    using DTEN = SDIO_DCTRL_DTEN_Values<SDIO::DCTRL, 0, 1, ReadWriteMode, SDIODCTRLBase> ;
    using FieldValues = SDIO_DCTRL_DTEN_Values<SDIO::DCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCTRLPack  = Register<0x40012C2C, 32, ReadWriteMode, SDIODCTRLBase, T...> ;

  struct SDIODCOUNTBase {} ;

  struct DCOUNT : public RegisterBase<0x40012C30, 32, ReadMode>
  {
    using DATACOUNT = SDIO_DCOUNT_DATACOUNT_Values<SDIO::DCOUNT, 0, 25, ReadMode, SDIODCOUNTBase> ;
    using FieldValues = SDIO_DCOUNT_DATACOUNT_Values<SDIO::DCOUNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCOUNTPack  = Register<0x40012C30, 32, ReadMode, SDIODCOUNTBase, T...> ;

  struct SDIOSTABase {} ;

  struct STA : public RegisterBase<0x40012C34, 32, ReadMode>
  {
    using CEATAEND = SDIO_STA_CEATAEND_Values<SDIO::STA, 23, 1, ReadMode, SDIOSTABase> ;
    using SDIOIT = SDIO_STA_SDIOIT_Values<SDIO::STA, 22, 1, ReadMode, SDIOSTABase> ;
    using RXDAVL = SDIO_STA_RXDAVL_Values<SDIO::STA, 21, 1, ReadMode, SDIOSTABase> ;
    using TXDAVL = SDIO_STA_TXDAVL_Values<SDIO::STA, 20, 1, ReadMode, SDIOSTABase> ;
    using RXFIFOE = SDIO_STA_RXFIFOE_Values<SDIO::STA, 19, 1, ReadMode, SDIOSTABase> ;
    using TXFIFOE = SDIO_STA_TXFIFOE_Values<SDIO::STA, 18, 1, ReadMode, SDIOSTABase> ;
    using RXFIFOF = SDIO_STA_RXFIFOF_Values<SDIO::STA, 17, 1, ReadMode, SDIOSTABase> ;
    using TXFIFOF = SDIO_STA_TXFIFOF_Values<SDIO::STA, 16, 1, ReadMode, SDIOSTABase> ;
    using RXFIFOHF = SDIO_STA_RXFIFOHF_Values<SDIO::STA, 15, 1, ReadMode, SDIOSTABase> ;
    using TXFIFOHE = SDIO_STA_TXFIFOHE_Values<SDIO::STA, 14, 1, ReadMode, SDIOSTABase> ;
    using RXACT = SDIO_STA_RXACT_Values<SDIO::STA, 13, 1, ReadMode, SDIOSTABase> ;
    using TXACT = SDIO_STA_TXACT_Values<SDIO::STA, 12, 1, ReadMode, SDIOSTABase> ;
    using CMDACT = SDIO_STA_CMDACT_Values<SDIO::STA, 11, 1, ReadMode, SDIOSTABase> ;
    using DBCKEND = SDIO_STA_DBCKEND_Values<SDIO::STA, 10, 1, ReadMode, SDIOSTABase> ;
    using STBITERR = SDIO_STA_STBITERR_Values<SDIO::STA, 9, 1, ReadMode, SDIOSTABase> ;
    using DATAEND = SDIO_STA_DATAEND_Values<SDIO::STA, 8, 1, ReadMode, SDIOSTABase> ;
    using CMDSENT = SDIO_STA_CMDSENT_Values<SDIO::STA, 7, 1, ReadMode, SDIOSTABase> ;
    using CMDREND = SDIO_STA_CMDREND_Values<SDIO::STA, 6, 1, ReadMode, SDIOSTABase> ;
    using RXOVERR = SDIO_STA_RXOVERR_Values<SDIO::STA, 5, 1, ReadMode, SDIOSTABase> ;
    using TXUNDERR = SDIO_STA_TXUNDERR_Values<SDIO::STA, 4, 1, ReadMode, SDIOSTABase> ;
    using DTIMEOUT = SDIO_STA_DTIMEOUT_Values<SDIO::STA, 3, 1, ReadMode, SDIOSTABase> ;
    using CTIMEOUT = SDIO_STA_CTIMEOUT_Values<SDIO::STA, 2, 1, ReadMode, SDIOSTABase> ;
    using DCRCFAIL = SDIO_STA_DCRCFAIL_Values<SDIO::STA, 1, 1, ReadMode, SDIOSTABase> ;
    using CCRCFAIL = SDIO_STA_CCRCFAIL_Values<SDIO::STA, 0, 1, ReadMode, SDIOSTABase> ;
    using FieldValues = SDIO_STA_CCRCFAIL_Values<SDIO::STA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAPack  = Register<0x40012C34, 32, ReadMode, SDIOSTABase, T...> ;

  struct SDIOICRBase {} ;

  struct ICR : public RegisterBase<0x40012C38, 32, ReadWriteMode>
  {
    using CEATAENDC = SDIO_ICR_CEATAENDC_Values<SDIO::ICR, 23, 1, ReadWriteMode, SDIOICRBase> ;
    using SDIOITC = SDIO_ICR_SDIOITC_Values<SDIO::ICR, 22, 1, ReadWriteMode, SDIOICRBase> ;
    using DBCKENDC = SDIO_ICR_DBCKENDC_Values<SDIO::ICR, 10, 1, ReadWriteMode, SDIOICRBase> ;
    using STBITERRC = SDIO_ICR_STBITERRC_Values<SDIO::ICR, 9, 1, ReadWriteMode, SDIOICRBase> ;
    using DATAENDC = SDIO_ICR_DATAENDC_Values<SDIO::ICR, 8, 1, ReadWriteMode, SDIOICRBase> ;
    using CMDSENTC = SDIO_ICR_CMDSENTC_Values<SDIO::ICR, 7, 1, ReadWriteMode, SDIOICRBase> ;
    using CMDRENDC = SDIO_ICR_CMDRENDC_Values<SDIO::ICR, 6, 1, ReadWriteMode, SDIOICRBase> ;
    using RXOVERRC = SDIO_ICR_RXOVERRC_Values<SDIO::ICR, 5, 1, ReadWriteMode, SDIOICRBase> ;
    using TXUNDERRC = SDIO_ICR_TXUNDERRC_Values<SDIO::ICR, 4, 1, ReadWriteMode, SDIOICRBase> ;
    using DTIMEOUTC = SDIO_ICR_DTIMEOUTC_Values<SDIO::ICR, 3, 1, ReadWriteMode, SDIOICRBase> ;
    using CTIMEOUTC = SDIO_ICR_CTIMEOUTC_Values<SDIO::ICR, 2, 1, ReadWriteMode, SDIOICRBase> ;
    using DCRCFAILC = SDIO_ICR_DCRCFAILC_Values<SDIO::ICR, 1, 1, ReadWriteMode, SDIOICRBase> ;
    using CCRCFAILC = SDIO_ICR_CCRCFAILC_Values<SDIO::ICR, 0, 1, ReadWriteMode, SDIOICRBase> ;
    using FieldValues = SDIO_ICR_CCRCFAILC_Values<SDIO::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40012C38, 32, ReadWriteMode, SDIOICRBase, T...> ;

  struct SDIOMASKBase {} ;

  struct MASK : public RegisterBase<0x40012C3C, 32, ReadWriteMode>
  {
    using CEATAENDIE = SDIO_MASK_CEATAENDIE_Values<SDIO::MASK, 23, 1, ReadWriteMode, SDIOMASKBase> ;
    using SDIOITIE = SDIO_MASK_SDIOITIE_Values<SDIO::MASK, 22, 1, ReadWriteMode, SDIOMASKBase> ;
    using RXDAVLIE = SDIO_MASK_RXDAVLIE_Values<SDIO::MASK, 21, 1, ReadWriteMode, SDIOMASKBase> ;
    using TXDAVLIE = SDIO_MASK_TXDAVLIE_Values<SDIO::MASK, 20, 1, ReadWriteMode, SDIOMASKBase> ;
    using RXFIFOEIE = SDIO_MASK_RXFIFOEIE_Values<SDIO::MASK, 19, 1, ReadWriteMode, SDIOMASKBase> ;
    using TXFIFOEIE = SDIO_MASK_TXFIFOEIE_Values<SDIO::MASK, 18, 1, ReadWriteMode, SDIOMASKBase> ;
    using RXFIFOFIE = SDIO_MASK_RXFIFOFIE_Values<SDIO::MASK, 17, 1, ReadWriteMode, SDIOMASKBase> ;
    using TXFIFOFIE = SDIO_MASK_TXFIFOFIE_Values<SDIO::MASK, 16, 1, ReadWriteMode, SDIOMASKBase> ;
    using RXFIFOHFIE = SDIO_MASK_RXFIFOHFIE_Values<SDIO::MASK, 15, 1, ReadWriteMode, SDIOMASKBase> ;
    using TXFIFOHEIE = SDIO_MASK_TXFIFOHEIE_Values<SDIO::MASK, 14, 1, ReadWriteMode, SDIOMASKBase> ;
    using RXACTIE = SDIO_MASK_RXACTIE_Values<SDIO::MASK, 13, 1, ReadWriteMode, SDIOMASKBase> ;
    using TXACTIE = SDIO_MASK_TXACTIE_Values<SDIO::MASK, 12, 1, ReadWriteMode, SDIOMASKBase> ;
    using CMDACTIE = SDIO_MASK_CMDACTIE_Values<SDIO::MASK, 11, 1, ReadWriteMode, SDIOMASKBase> ;
    using DBCKENDIE = SDIO_MASK_DBCKENDIE_Values<SDIO::MASK, 10, 1, ReadWriteMode, SDIOMASKBase> ;
    using STBITERRIE = SDIO_MASK_STBITERRIE_Values<SDIO::MASK, 9, 1, ReadWriteMode, SDIOMASKBase> ;
    using DATAENDIE = SDIO_MASK_DATAENDIE_Values<SDIO::MASK, 8, 1, ReadWriteMode, SDIOMASKBase> ;
    using CMDSENTIE = SDIO_MASK_CMDSENTIE_Values<SDIO::MASK, 7, 1, ReadWriteMode, SDIOMASKBase> ;
    using CMDRENDIE = SDIO_MASK_CMDRENDIE_Values<SDIO::MASK, 6, 1, ReadWriteMode, SDIOMASKBase> ;
    using RXOVERRIE = SDIO_MASK_RXOVERRIE_Values<SDIO::MASK, 5, 1, ReadWriteMode, SDIOMASKBase> ;
    using TXUNDERRIE = SDIO_MASK_TXUNDERRIE_Values<SDIO::MASK, 4, 1, ReadWriteMode, SDIOMASKBase> ;
    using DTIMEOUTIE = SDIO_MASK_DTIMEOUTIE_Values<SDIO::MASK, 3, 1, ReadWriteMode, SDIOMASKBase> ;
    using CTIMEOUTIE = SDIO_MASK_CTIMEOUTIE_Values<SDIO::MASK, 2, 1, ReadWriteMode, SDIOMASKBase> ;
    using DCRCFAILIE = SDIO_MASK_DCRCFAILIE_Values<SDIO::MASK, 1, 1, ReadWriteMode, SDIOMASKBase> ;
    using CCRCFAILIE = SDIO_MASK_CCRCFAILIE_Values<SDIO::MASK, 0, 1, ReadWriteMode, SDIOMASKBase> ;
    using FieldValues = SDIO_MASK_CCRCFAILIE_Values<SDIO::MASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MASKPack  = Register<0x40012C3C, 32, ReadWriteMode, SDIOMASKBase, T...> ;

  struct SDIOFIFOCNTBase {} ;

  struct FIFOCNT : public RegisterBase<0x40012C48, 32, ReadMode>
  {
    using FIFOCOUNT = SDIO_FIFOCNT_FIFOCOUNT_Values<SDIO::FIFOCNT, 0, 24, ReadMode, SDIOFIFOCNTBase> ;
    using FieldValues = SDIO_FIFOCNT_FIFOCOUNT_Values<SDIO::FIFOCNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FIFOCNTPack  = Register<0x40012C48, 32, ReadMode, SDIOFIFOCNTBase, T...> ;

  struct SDIOFIFOBase {} ;

  struct FIFO : public RegisterBase<0x40012C80, 32, ReadWriteMode>
  {
    using FIFOData = SDIO_FIFO_FIFOData_Values<SDIO::FIFO, 0, 32, ReadWriteMode, SDIOFIFOBase> ;
    using FieldValues = SDIO_FIFO_FIFOData_Values<SDIO::FIFO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FIFOPack  = Register<0x40012C80, 32, ReadWriteMode, SDIOFIFOBase, T...> ;

} ;

#endif //#if !defined(SDIOREGISTERS_HPP)
