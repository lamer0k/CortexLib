/*******************************************************************************
* Filename      : uart5registers.hpp
*
* Details       : Universal asynchronous receiver transmitter. This header file
*                 is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "uart5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART5
{
  struct UART5USART_STSBase {} ;

  struct USART_STS : public RegisterBase<0x40015400, 32, ReadWriteMode>
  {
    using PEF = UART5_USART_STS_PEF_Values<UART5::USART_STS, 0, 1, ReadWriteMode, UART5USART_STSBase> ;
    using FEF = UART5_USART_STS_FEF_Values<UART5::USART_STS, 1, 1, ReadWriteMode, UART5USART_STSBase> ;
    using NEF = UART5_USART_STS_NEF_Values<UART5::USART_STS, 2, 1, ReadWriteMode, UART5USART_STSBase> ;
    using OREF = UART5_USART_STS_OREF_Values<UART5::USART_STS, 3, 1, ReadWriteMode, UART5USART_STSBase> ;
    using IDLEF = UART5_USART_STS_IDLEF_Values<UART5::USART_STS, 4, 1, ReadWriteMode, UART5USART_STSBase> ;
    using RXDNE = UART5_USART_STS_RXDNE_Values<UART5::USART_STS, 5, 1, ReadWriteMode, UART5USART_STSBase> ;
    using TXC = UART5_USART_STS_TXC_Values<UART5::USART_STS, 6, 1, ReadWriteMode, UART5USART_STSBase> ;
    using TXDE = UART5_USART_STS_TXDE_Values<UART5::USART_STS, 7, 1, ReadWriteMode, UART5USART_STSBase> ;
    using LINBDF = UART5_USART_STS_LINBDF_Values<UART5::USART_STS, 8, 1, ReadWriteMode, UART5USART_STSBase> ;
    using CTSF = UART5_USART_STS_CTSF_Values<UART5::USART_STS, 9, 1, ReadWriteMode, UART5USART_STSBase> ;
    using FieldValues = UART5_USART_STS_CTSF_Values<UART5::USART_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_STSPack  = Register<0x40015400, 32, ReadWriteMode, UART5USART_STSBase, T...> ;

  struct UART5USART_DATBase {} ;

  struct USART_DAT : public RegisterBase<0x40015404, 32, ReadWriteMode>
  {
    using DATV = UART5_USART_DAT_DATV_Values<UART5::USART_DAT, 0, 9, ReadWriteMode, UART5USART_DATBase> ;
    using FieldValues = UART5_USART_DAT_DATV_Values<UART5::USART_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_DATPack  = Register<0x40015404, 32, ReadWriteMode, UART5USART_DATBase, T...> ;

  struct UART5USART_BRCFBase {} ;

  struct USART_BRCF : public RegisterBase<0x40015408, 32, ReadWriteMode>
  {
    using DIV_Decimal = UART5_USART_BRCF_DIV_Decimal_Values<UART5::USART_BRCF, 0, 4, ReadWriteMode, UART5USART_BRCFBase> ;
    using DIV_Integer = UART5_USART_BRCF_DIV_Integer_Values<UART5::USART_BRCF, 4, 12, ReadWriteMode, UART5USART_BRCFBase> ;
    using FieldValues = UART5_USART_BRCF_DIV_Integer_Values<UART5::USART_BRCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_BRCFPack  = Register<0x40015408, 32, ReadWriteMode, UART5USART_BRCFBase, T...> ;

  struct UART5USART_CTRL1Base {} ;

  struct USART_CTRL1 : public RegisterBase<0x4001540C, 32, ReadWriteMode>
  {
    using SDBRK = UART5_USART_CTRL1_SDBRK_Values<UART5::USART_CTRL1, 0, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using RCVWU = UART5_USART_CTRL1_RCVWU_Values<UART5::USART_CTRL1, 1, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using RXEN = UART5_USART_CTRL1_RXEN_Values<UART5::USART_CTRL1, 2, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using TXEN = UART5_USART_CTRL1_TXEN_Values<UART5::USART_CTRL1, 3, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using IDLEIEN = UART5_USART_CTRL1_IDLEIEN_Values<UART5::USART_CTRL1, 4, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using RXDNEIEN = UART5_USART_CTRL1_RXDNEIEN_Values<UART5::USART_CTRL1, 5, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using TXCIEN = UART5_USART_CTRL1_TXCIEN_Values<UART5::USART_CTRL1, 6, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using TXDEIEN = UART5_USART_CTRL1_TXDEIEN_Values<UART5::USART_CTRL1, 7, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using PEIEN = UART5_USART_CTRL1_PEIEN_Values<UART5::USART_CTRL1, 8, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using PSEL = UART5_USART_CTRL1_PSEL_Values<UART5::USART_CTRL1, 9, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using PCEN = UART5_USART_CTRL1_PCEN_Values<UART5::USART_CTRL1, 10, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using WUM = UART5_USART_CTRL1_WUM_Values<UART5::USART_CTRL1, 11, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using WL = UART5_USART_CTRL1_WL_Values<UART5::USART_CTRL1, 12, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using UEN = UART5_USART_CTRL1_UEN_Values<UART5::USART_CTRL1, 13, 1, ReadWriteMode, UART5USART_CTRL1Base> ;
    using FieldValues = UART5_USART_CTRL1_UEN_Values<UART5::USART_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL1Pack  = Register<0x4001540C, 32, ReadWriteMode, UART5USART_CTRL1Base, T...> ;

  struct UART5USART_CTRL2Base {} ;

  struct USART_CTRL2 : public RegisterBase<0x40015410, 32, ReadWriteMode>
  {
    using ADDR = UART5_USART_CTRL2_ADDR_Values<UART5::USART_CTRL2, 0, 4, ReadWriteMode, UART5USART_CTRL2Base> ;
    using LINBDL = UART5_USART_CTRL2_LINBDL_Values<UART5::USART_CTRL2, 5, 1, ReadWriteMode, UART5USART_CTRL2Base> ;
    using LINBDIEN = UART5_USART_CTRL2_LINBDIEN_Values<UART5::USART_CTRL2, 6, 1, ReadWriteMode, UART5USART_CTRL2Base> ;
    using LBCLK = UART5_USART_CTRL2_LBCLK_Values<UART5::USART_CTRL2, 8, 1, ReadWriteMode, UART5USART_CTRL2Base> ;
    using CLKPHA = UART5_USART_CTRL2_CLKPHA_Values<UART5::USART_CTRL2, 9, 1, ReadWriteMode, UART5USART_CTRL2Base> ;
    using CLKPOL = UART5_USART_CTRL2_CLKPOL_Values<UART5::USART_CTRL2, 10, 1, ReadWriteMode, UART5USART_CTRL2Base> ;
    using CLKEN = UART5_USART_CTRL2_CLKEN_Values<UART5::USART_CTRL2, 11, 1, ReadWriteMode, UART5USART_CTRL2Base> ;
    using STPB = UART5_USART_CTRL2_STPB_Values<UART5::USART_CTRL2, 12, 2, ReadWriteMode, UART5USART_CTRL2Base> ;
    using LINMEN = UART5_USART_CTRL2_LINMEN_Values<UART5::USART_CTRL2, 14, 1, ReadWriteMode, UART5USART_CTRL2Base> ;
    using FieldValues = UART5_USART_CTRL2_LINMEN_Values<UART5::USART_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL2Pack  = Register<0x40015410, 32, ReadWriteMode, UART5USART_CTRL2Base, T...> ;

  struct UART5USART_CTRL3Base {} ;

  struct USART_CTRL3 : public RegisterBase<0x40015414, 32, ReadWriteMode>
  {
    using ERRIEN = UART5_USART_CTRL3_ERRIEN_Values<UART5::USART_CTRL3, 0, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using IRDAMEN = UART5_USART_CTRL3_IRDAMEN_Values<UART5::USART_CTRL3, 1, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using IRDALP = UART5_USART_CTRL3_IRDALP_Values<UART5::USART_CTRL3, 2, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using HDMEN = UART5_USART_CTRL3_HDMEN_Values<UART5::USART_CTRL3, 3, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using SCNACK = UART5_USART_CTRL3_SCNACK_Values<UART5::USART_CTRL3, 4, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using SCMEN = UART5_USART_CTRL3_SCMEN_Values<UART5::USART_CTRL3, 5, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using DMARXEN = UART5_USART_CTRL3_DMARXEN_Values<UART5::USART_CTRL3, 6, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using DMATXEN = UART5_USART_CTRL3_DMATXEN_Values<UART5::USART_CTRL3, 7, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using RTSEN = UART5_USART_CTRL3_RTSEN_Values<UART5::USART_CTRL3, 8, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using CTSEN = UART5_USART_CTRL3_CTSEN_Values<UART5::USART_CTRL3, 9, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using CTSIEN = UART5_USART_CTRL3_CTSIEN_Values<UART5::USART_CTRL3, 10, 1, ReadWriteMode, UART5USART_CTRL3Base> ;
    using FieldValues = UART5_USART_CTRL3_CTSIEN_Values<UART5::USART_CTRL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL3Pack  = Register<0x40015414, 32, ReadWriteMode, UART5USART_CTRL3Base, T...> ;

  struct UART5USART_GTPBase {} ;

  struct USART_GTP : public RegisterBase<0x40015418, 32, ReadWriteMode>
  {
    using PSCV = UART5_USART_GTP_PSCV_Values<UART5::USART_GTP, 0, 8, ReadWriteMode, UART5USART_GTPBase> ;
    using GTV = UART5_USART_GTP_GTV_Values<UART5::USART_GTP, 8, 8, ReadWriteMode, UART5USART_GTPBase> ;
    using FieldValues = UART5_USART_GTP_GTV_Values<UART5::USART_GTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_GTPPack  = Register<0x40015418, 32, ReadWriteMode, UART5USART_GTPBase, T...> ;

} ;

