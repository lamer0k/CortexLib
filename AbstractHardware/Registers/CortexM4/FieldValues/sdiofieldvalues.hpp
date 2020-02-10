/*******************************************************************************
* Filename      : sdiofieldvalues.hpp
*
* Details       : Enumerations related with SDIO peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SDIOENUMS_HPP)
#define SDIOENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_POWER_PWRCTRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_POWER_PWRCTRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_POWER_PWRCTRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDIO_POWER_PWRCTRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDIO_POWER_PWRCTRL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CLKCR_HWFC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CLKCR_HWFC_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CLKCR_HWFC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CLKCR_NEGEDGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CLKCR_NEGEDGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CLKCR_NEGEDGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CLKCR_WIDBUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CLKCR_WIDBUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CLKCR_WIDBUS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDIO_CLKCR_WIDBUS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDIO_CLKCR_WIDBUS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CLKCR_BYPASS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CLKCR_BYPASS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CLKCR_BYPASS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CLKCR_PWRSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CLKCR_PWRSAV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CLKCR_PWRSAV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CLKCR_CLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CLKCR_CLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CLKCR_CLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CLKCR_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ARG_CMDARG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_CE_ATACMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_CE_ATACMD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_CE_ATACMD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_nIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_nIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_nIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_ENCMDcompl_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_ENCMDcompl_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_ENCMDcompl_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_SDIOSuspend_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_SDIOSuspend_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_SDIOSuspend_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_CPSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_CPSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_CPSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_WAITPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_WAITPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_WAITPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_WAITINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_WAITINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_WAITINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_WAITRESP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_CMD_WAITRESP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_CMD_WAITRESP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDIO_CMD_WAITRESP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDIO_CMD_WAITRESP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_CMD_CMDINDEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_RESPCMD_RESPCMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_RESP1_CARDSTATUS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_RESP2_CARDSTATUS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_RESP3_CARDSTATUS3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_RESP4_CARDSTATUS4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DTIMER_DATATIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DLEN_DATALENGTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_SDIOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_SDIOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_SDIOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_RWMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_RWMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_RWMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_RWSTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_RWSTOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_RWSTOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_RWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_RWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_RWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_DBLOCKSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SDIO_DCTRL_DBLOCKSIZE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_DTMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_DTMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_DTMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_DTDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_DTDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_DTDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCTRL_DTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_DCTRL_DTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_DCTRL_DTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_DCOUNT_DATACOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_CEATAEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_CEATAEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_CEATAEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_SDIOIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_SDIOIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_SDIOIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_RXDAVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_RXDAVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_RXDAVL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_TXDAVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_TXDAVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_TXDAVL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_RXFIFOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_RXFIFOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_RXFIFOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_TXFIFOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_TXFIFOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_TXFIFOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_RXFIFOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_RXFIFOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_RXFIFOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_TXFIFOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_TXFIFOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_TXFIFOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_RXFIFOHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_RXFIFOHF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_RXFIFOHF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_TXFIFOHE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_TXFIFOHE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_TXFIFOHE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_RXACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_RXACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_RXACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_TXACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_TXACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_TXACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_CMDACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_CMDACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_CMDACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_DBCKEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_DBCKEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_DBCKEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_STBITERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_STBITERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_STBITERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_DATAEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_DATAEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_DATAEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_CMDSENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_CMDSENT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_CMDSENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_CMDREND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_CMDREND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_CMDREND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_RXOVERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_RXOVERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_RXOVERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_TXUNDERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_TXUNDERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_TXUNDERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_DTIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_DTIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_DTIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_CTIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_CTIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_CTIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_DCRCFAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_DCRCFAIL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_DCRCFAIL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_STA_CCRCFAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_STA_CCRCFAIL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_STA_CCRCFAIL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_CEATAENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_CEATAENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_CEATAENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_SDIOITC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_SDIOITC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_SDIOITC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_DBCKENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_DBCKENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_DBCKENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_STBITERRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_STBITERRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_STBITERRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_DATAENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_DATAENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_DATAENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_CMDSENTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_CMDSENTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_CMDSENTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_CMDRENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_CMDRENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_CMDRENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_RXOVERRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_RXOVERRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_RXOVERRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_TXUNDERRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_TXUNDERRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_TXUNDERRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_DTIMEOUTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_DTIMEOUTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_DTIMEOUTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_CTIMEOUTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_CTIMEOUTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_CTIMEOUTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_DCRCFAILC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_DCRCFAILC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_DCRCFAILC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_ICR_CCRCFAILC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_ICR_CCRCFAILC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_ICR_CCRCFAILC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_CEATAENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_CEATAENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_CEATAENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_SDIOITIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_SDIOITIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_SDIOITIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_RXDAVLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_RXDAVLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_RXDAVLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_TXDAVLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_TXDAVLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_TXDAVLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_RXFIFOEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_RXFIFOEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_RXFIFOEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_TXFIFOEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_TXFIFOEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_TXFIFOEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_RXFIFOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_RXFIFOFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_RXFIFOFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_TXFIFOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_TXFIFOFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_TXFIFOFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_RXFIFOHFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_RXFIFOHFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_RXFIFOHFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_TXFIFOHEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_TXFIFOHEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_TXFIFOHEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_RXACTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_RXACTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_RXACTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_TXACTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_TXACTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_TXACTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_CMDACTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_CMDACTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_CMDACTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_DBCKENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_DBCKENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_DBCKENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_STBITERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_STBITERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_STBITERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_DATAENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_DATAENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_DATAENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_CMDSENTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_CMDSENTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_CMDSENTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_CMDRENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_CMDRENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_CMDRENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_RXOVERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_RXOVERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_RXOVERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_TXUNDERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_TXUNDERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_TXUNDERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_DTIMEOUTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_DTIMEOUTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_DTIMEOUTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_CTIMEOUTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_CTIMEOUTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_CTIMEOUTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_DCRCFAILIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_DCRCFAILIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_DCRCFAILIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_MASK_CCRCFAILIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDIO_MASK_CCRCFAILIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDIO_MASK_CCRCFAILIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_FIFOCNT_FIFOCOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDIO_FIFO_FIFOData_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SDIOENUMS_HPP)
