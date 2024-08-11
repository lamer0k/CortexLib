/*******************************************************************************
* Filename      : uart4registers.hpp
*
* Details       : Universal asynchronous receiver transmitter. This header file
*                 is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "uart4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART4
{
  struct UART4USART_STSBase {} ;

  struct USART_STS : public RegisterBase<0x40015000, 32, ReadWriteMode>
  {
    using PEF = UART4_USART_STS_PEF_Values<UART4::USART_STS, 0, 1, ReadWriteMode, UART4USART_STSBase> ;
    using FEF = UART4_USART_STS_FEF_Values<UART4::USART_STS, 1, 1, ReadWriteMode, UART4USART_STSBase> ;
    using NEF = UART4_USART_STS_NEF_Values<UART4::USART_STS, 2, 1, ReadWriteMode, UART4USART_STSBase> ;
    using OREF = UART4_USART_STS_OREF_Values<UART4::USART_STS, 3, 1, ReadWriteMode, UART4USART_STSBase> ;
    using IDLEF = UART4_USART_STS_IDLEF_Values<UART4::USART_STS, 4, 1, ReadWriteMode, UART4USART_STSBase> ;
    using RXDNE = UART4_USART_STS_RXDNE_Values<UART4::USART_STS, 5, 1, ReadWriteMode, UART4USART_STSBase> ;
    using TXC = UART4_USART_STS_TXC_Values<UART4::USART_STS, 6, 1, ReadWriteMode, UART4USART_STSBase> ;
    using TXDE = UART4_USART_STS_TXDE_Values<UART4::USART_STS, 7, 1, ReadWriteMode, UART4USART_STSBase> ;
    using LINBDF = UART4_USART_STS_LINBDF_Values<UART4::USART_STS, 8, 1, ReadWriteMode, UART4USART_STSBase> ;
    using CTSF = UART4_USART_STS_CTSF_Values<UART4::USART_STS, 9, 1, ReadWriteMode, UART4USART_STSBase> ;
    using FieldValues = UART4_USART_STS_CTSF_Values<UART4::USART_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_STSPack  = Register<0x40015000, 32, ReadWriteMode, UART4USART_STSBase, T...> ;

  struct UART4USART_DATBase {} ;

  struct USART_DAT : public RegisterBase<0x40015004, 32, ReadWriteMode>
  {
    using DATV = UART4_USART_DAT_DATV_Values<UART4::USART_DAT, 0, 9, ReadWriteMode, UART4USART_DATBase> ;
    using FieldValues = UART4_USART_DAT_DATV_Values<UART4::USART_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_DATPack  = Register<0x40015004, 32, ReadWriteMode, UART4USART_DATBase, T...> ;

  struct UART4USART_BRCFBase {} ;

  struct USART_BRCF : public RegisterBase<0x40015008, 32, ReadWriteMode>
  {
    using DIV_Decimal = UART4_USART_BRCF_DIV_Decimal_Values<UART4::USART_BRCF, 0, 4, ReadWriteMode, UART4USART_BRCFBase> ;
    using DIV_Integer = UART4_USART_BRCF_DIV_Integer_Values<UART4::USART_BRCF, 4, 12, ReadWriteMode, UART4USART_BRCFBase> ;
    using FieldValues = UART4_USART_BRCF_DIV_Integer_Values<UART4::USART_BRCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_BRCFPack  = Register<0x40015008, 32, ReadWriteMode, UART4USART_BRCFBase, T...> ;

  struct UART4USART_CTRL1Base {} ;

  struct USART_CTRL1 : public RegisterBase<0x4001500C, 32, ReadWriteMode>
  {
    using SDBRK = UART4_USART_CTRL1_SDBRK_Values<UART4::USART_CTRL1, 0, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using RCVWU = UART4_USART_CTRL1_RCVWU_Values<UART4::USART_CTRL1, 1, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using RXEN = UART4_USART_CTRL1_RXEN_Values<UART4::USART_CTRL1, 2, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using TXEN = UART4_USART_CTRL1_TXEN_Values<UART4::USART_CTRL1, 3, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using IDLEIEN = UART4_USART_CTRL1_IDLEIEN_Values<UART4::USART_CTRL1, 4, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using RXDNEIEN = UART4_USART_CTRL1_RXDNEIEN_Values<UART4::USART_CTRL1, 5, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using TXCIEN = UART4_USART_CTRL1_TXCIEN_Values<UART4::USART_CTRL1, 6, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using TXDEIEN = UART4_USART_CTRL1_TXDEIEN_Values<UART4::USART_CTRL1, 7, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using PEIEN = UART4_USART_CTRL1_PEIEN_Values<UART4::USART_CTRL1, 8, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using PSEL = UART4_USART_CTRL1_PSEL_Values<UART4::USART_CTRL1, 9, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using PCEN = UART4_USART_CTRL1_PCEN_Values<UART4::USART_CTRL1, 10, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using WUM = UART4_USART_CTRL1_WUM_Values<UART4::USART_CTRL1, 11, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using WL = UART4_USART_CTRL1_WL_Values<UART4::USART_CTRL1, 12, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using UEN = UART4_USART_CTRL1_UEN_Values<UART4::USART_CTRL1, 13, 1, ReadWriteMode, UART4USART_CTRL1Base> ;
    using FieldValues = UART4_USART_CTRL1_UEN_Values<UART4::USART_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL1Pack  = Register<0x4001500C, 32, ReadWriteMode, UART4USART_CTRL1Base, T...> ;

  struct UART4USART_CTRL2Base {} ;

  struct USART_CTRL2 : public RegisterBase<0x40015010, 32, ReadWriteMode>
  {
    using ADDR = UART4_USART_CTRL2_ADDR_Values<UART4::USART_CTRL2, 0, 4, ReadWriteMode, UART4USART_CTRL2Base> ;
    using LINBDL = UART4_USART_CTRL2_LINBDL_Values<UART4::USART_CTRL2, 5, 1, ReadWriteMode, UART4USART_CTRL2Base> ;
    using LINBDIEN = UART4_USART_CTRL2_LINBDIEN_Values<UART4::USART_CTRL2, 6, 1, ReadWriteMode, UART4USART_CTRL2Base> ;
    using LBCLK = UART4_USART_CTRL2_LBCLK_Values<UART4::USART_CTRL2, 8, 1, ReadWriteMode, UART4USART_CTRL2Base> ;
    using CLKPHA = UART4_USART_CTRL2_CLKPHA_Values<UART4::USART_CTRL2, 9, 1, ReadWriteMode, UART4USART_CTRL2Base> ;
    using CLKPOL = UART4_USART_CTRL2_CLKPOL_Values<UART4::USART_CTRL2, 10, 1, ReadWriteMode, UART4USART_CTRL2Base> ;
    using CLKEN = UART4_USART_CTRL2_CLKEN_Values<UART4::USART_CTRL2, 11, 1, ReadWriteMode, UART4USART_CTRL2Base> ;
    using STPB = UART4_USART_CTRL2_STPB_Values<UART4::USART_CTRL2, 12, 2, ReadWriteMode, UART4USART_CTRL2Base> ;
    using LINMEN = UART4_USART_CTRL2_LINMEN_Values<UART4::USART_CTRL2, 14, 1, ReadWriteMode, UART4USART_CTRL2Base> ;
    using FieldValues = UART4_USART_CTRL2_LINMEN_Values<UART4::USART_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL2Pack  = Register<0x40015010, 32, ReadWriteMode, UART4USART_CTRL2Base, T...> ;

  struct UART4USART_CTRL3Base {} ;

  struct USART_CTRL3 : public RegisterBase<0x40015014, 32, ReadWriteMode>
  {
    using ERRIEN = UART4_USART_CTRL3_ERRIEN_Values<UART4::USART_CTRL3, 0, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using IRDAMEN = UART4_USART_CTRL3_IRDAMEN_Values<UART4::USART_CTRL3, 1, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using IRDALP = UART4_USART_CTRL3_IRDALP_Values<UART4::USART_CTRL3, 2, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using HDMEN = UART4_USART_CTRL3_HDMEN_Values<UART4::USART_CTRL3, 3, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using SCNACK = UART4_USART_CTRL3_SCNACK_Values<UART4::USART_CTRL3, 4, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using SCMEN = UART4_USART_CTRL3_SCMEN_Values<UART4::USART_CTRL3, 5, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using DMARXEN = UART4_USART_CTRL3_DMARXEN_Values<UART4::USART_CTRL3, 6, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using DMATXEN = UART4_USART_CTRL3_DMATXEN_Values<UART4::USART_CTRL3, 7, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using RTSEN = UART4_USART_CTRL3_RTSEN_Values<UART4::USART_CTRL3, 8, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using CTSEN = UART4_USART_CTRL3_CTSEN_Values<UART4::USART_CTRL3, 9, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using CTSIEN = UART4_USART_CTRL3_CTSIEN_Values<UART4::USART_CTRL3, 10, 1, ReadWriteMode, UART4USART_CTRL3Base> ;
    using FieldValues = UART4_USART_CTRL3_CTSIEN_Values<UART4::USART_CTRL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL3Pack  = Register<0x40015014, 32, ReadWriteMode, UART4USART_CTRL3Base, T...> ;

  struct UART4USART_GTPBase {} ;

  struct USART_GTP : public RegisterBase<0x40015018, 32, ReadWriteMode>
  {
    using PSCV = UART4_USART_GTP_PSCV_Values<UART4::USART_GTP, 0, 8, ReadWriteMode, UART4USART_GTPBase> ;
    using GTV = UART4_USART_GTP_GTV_Values<UART4::USART_GTP, 8, 8, ReadWriteMode, UART4USART_GTPBase> ;
    using FieldValues = UART4_USART_GTP_GTV_Values<UART4::USART_GTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_GTPPack  = Register<0x40015018, 32, ReadWriteMode, UART4USART_GTPBase, T...> ;

} ;

