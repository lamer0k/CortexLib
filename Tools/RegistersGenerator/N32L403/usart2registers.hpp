/*******************************************************************************
* Filename      : usart2registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "usart2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART2
{
  struct USART2USART_STSBase {} ;

  struct USART_STS : public RegisterBase<0x40004400, 32, ReadWriteMode>
  {
    using PEF = USART2_USART_STS_PEF_Values<USART2::USART_STS, 0, 1, ReadWriteMode, USART2USART_STSBase> ;
    using FEF = USART2_USART_STS_FEF_Values<USART2::USART_STS, 1, 1, ReadWriteMode, USART2USART_STSBase> ;
    using NEF = USART2_USART_STS_NEF_Values<USART2::USART_STS, 2, 1, ReadWriteMode, USART2USART_STSBase> ;
    using OREF = USART2_USART_STS_OREF_Values<USART2::USART_STS, 3, 1, ReadWriteMode, USART2USART_STSBase> ;
    using IDLEF = USART2_USART_STS_IDLEF_Values<USART2::USART_STS, 4, 1, ReadWriteMode, USART2USART_STSBase> ;
    using RXDNE = USART2_USART_STS_RXDNE_Values<USART2::USART_STS, 5, 1, ReadWriteMode, USART2USART_STSBase> ;
    using TXC = USART2_USART_STS_TXC_Values<USART2::USART_STS, 6, 1, ReadWriteMode, USART2USART_STSBase> ;
    using TXDE = USART2_USART_STS_TXDE_Values<USART2::USART_STS, 7, 1, ReadWriteMode, USART2USART_STSBase> ;
    using LINBDF = USART2_USART_STS_LINBDF_Values<USART2::USART_STS, 8, 1, ReadWriteMode, USART2USART_STSBase> ;
    using CTSF = USART2_USART_STS_CTSF_Values<USART2::USART_STS, 9, 1, ReadWriteMode, USART2USART_STSBase> ;
    using FieldValues = USART2_USART_STS_CTSF_Values<USART2::USART_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_STSPack  = Register<0x40004400, 32, ReadWriteMode, USART2USART_STSBase, T...> ;

  struct USART2USART_DATBase {} ;

  struct USART_DAT : public RegisterBase<0x40004404, 32, ReadWriteMode>
  {
    using DATV = USART2_USART_DAT_DATV_Values<USART2::USART_DAT, 0, 9, ReadWriteMode, USART2USART_DATBase> ;
    using FieldValues = USART2_USART_DAT_DATV_Values<USART2::USART_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_DATPack  = Register<0x40004404, 32, ReadWriteMode, USART2USART_DATBase, T...> ;

  struct USART2USART_BRCFBase {} ;

  struct USART_BRCF : public RegisterBase<0x40004408, 32, ReadWriteMode>
  {
    using DIV_Decimal = USART2_USART_BRCF_DIV_Decimal_Values<USART2::USART_BRCF, 0, 4, ReadWriteMode, USART2USART_BRCFBase> ;
    using DIV_Integer = USART2_USART_BRCF_DIV_Integer_Values<USART2::USART_BRCF, 4, 12, ReadWriteMode, USART2USART_BRCFBase> ;
    using FieldValues = USART2_USART_BRCF_DIV_Integer_Values<USART2::USART_BRCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_BRCFPack  = Register<0x40004408, 32, ReadWriteMode, USART2USART_BRCFBase, T...> ;

  struct USART2USART_CTRL1Base {} ;

  struct USART_CTRL1 : public RegisterBase<0x4000440C, 32, ReadWriteMode>
  {
    using SDBRK = USART2_USART_CTRL1_SDBRK_Values<USART2::USART_CTRL1, 0, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using RCVWU = USART2_USART_CTRL1_RCVWU_Values<USART2::USART_CTRL1, 1, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using RXEN = USART2_USART_CTRL1_RXEN_Values<USART2::USART_CTRL1, 2, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using TXEN = USART2_USART_CTRL1_TXEN_Values<USART2::USART_CTRL1, 3, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using IDLEIEN = USART2_USART_CTRL1_IDLEIEN_Values<USART2::USART_CTRL1, 4, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using RXDNEIEN = USART2_USART_CTRL1_RXDNEIEN_Values<USART2::USART_CTRL1, 5, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using TXCIEN = USART2_USART_CTRL1_TXCIEN_Values<USART2::USART_CTRL1, 6, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using TXDEIEN = USART2_USART_CTRL1_TXDEIEN_Values<USART2::USART_CTRL1, 7, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using PEIEN = USART2_USART_CTRL1_PEIEN_Values<USART2::USART_CTRL1, 8, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using PSEL = USART2_USART_CTRL1_PSEL_Values<USART2::USART_CTRL1, 9, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using PCEN = USART2_USART_CTRL1_PCEN_Values<USART2::USART_CTRL1, 10, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using WUM = USART2_USART_CTRL1_WUM_Values<USART2::USART_CTRL1, 11, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using WL = USART2_USART_CTRL1_WL_Values<USART2::USART_CTRL1, 12, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using UEN = USART2_USART_CTRL1_UEN_Values<USART2::USART_CTRL1, 13, 1, ReadWriteMode, USART2USART_CTRL1Base> ;
    using FieldValues = USART2_USART_CTRL1_UEN_Values<USART2::USART_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL1Pack  = Register<0x4000440C, 32, ReadWriteMode, USART2USART_CTRL1Base, T...> ;

  struct USART2USART_CTRL2Base {} ;

  struct USART_CTRL2 : public RegisterBase<0x40004410, 32, ReadWriteMode>
  {
    using ADDR = USART2_USART_CTRL2_ADDR_Values<USART2::USART_CTRL2, 0, 4, ReadWriteMode, USART2USART_CTRL2Base> ;
    using LINBDL = USART2_USART_CTRL2_LINBDL_Values<USART2::USART_CTRL2, 5, 1, ReadWriteMode, USART2USART_CTRL2Base> ;
    using LINBDIEN = USART2_USART_CTRL2_LINBDIEN_Values<USART2::USART_CTRL2, 6, 1, ReadWriteMode, USART2USART_CTRL2Base> ;
    using LBCLK = USART2_USART_CTRL2_LBCLK_Values<USART2::USART_CTRL2, 8, 1, ReadWriteMode, USART2USART_CTRL2Base> ;
    using CLKPHA = USART2_USART_CTRL2_CLKPHA_Values<USART2::USART_CTRL2, 9, 1, ReadWriteMode, USART2USART_CTRL2Base> ;
    using CLKPOL = USART2_USART_CTRL2_CLKPOL_Values<USART2::USART_CTRL2, 10, 1, ReadWriteMode, USART2USART_CTRL2Base> ;
    using CLKEN = USART2_USART_CTRL2_CLKEN_Values<USART2::USART_CTRL2, 11, 1, ReadWriteMode, USART2USART_CTRL2Base> ;
    using STPB = USART2_USART_CTRL2_STPB_Values<USART2::USART_CTRL2, 12, 2, ReadWriteMode, USART2USART_CTRL2Base> ;
    using LINMEN = USART2_USART_CTRL2_LINMEN_Values<USART2::USART_CTRL2, 14, 1, ReadWriteMode, USART2USART_CTRL2Base> ;
    using FieldValues = USART2_USART_CTRL2_LINMEN_Values<USART2::USART_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL2Pack  = Register<0x40004410, 32, ReadWriteMode, USART2USART_CTRL2Base, T...> ;

  struct USART2USART_CTRL3Base {} ;

  struct USART_CTRL3 : public RegisterBase<0x40004414, 32, ReadWriteMode>
  {
    using ERRIEN = USART2_USART_CTRL3_ERRIEN_Values<USART2::USART_CTRL3, 0, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using IRDAMEN = USART2_USART_CTRL3_IRDAMEN_Values<USART2::USART_CTRL3, 1, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using IRDALP = USART2_USART_CTRL3_IRDALP_Values<USART2::USART_CTRL3, 2, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using HDMEN = USART2_USART_CTRL3_HDMEN_Values<USART2::USART_CTRL3, 3, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using SCNACK = USART2_USART_CTRL3_SCNACK_Values<USART2::USART_CTRL3, 4, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using SCMEN = USART2_USART_CTRL3_SCMEN_Values<USART2::USART_CTRL3, 5, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using DMARXEN = USART2_USART_CTRL3_DMARXEN_Values<USART2::USART_CTRL3, 6, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using DMATXEN = USART2_USART_CTRL3_DMATXEN_Values<USART2::USART_CTRL3, 7, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using RTSEN = USART2_USART_CTRL3_RTSEN_Values<USART2::USART_CTRL3, 8, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using CTSEN = USART2_USART_CTRL3_CTSEN_Values<USART2::USART_CTRL3, 9, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using CTSIEN = USART2_USART_CTRL3_CTSIEN_Values<USART2::USART_CTRL3, 10, 1, ReadWriteMode, USART2USART_CTRL3Base> ;
    using FieldValues = USART2_USART_CTRL3_CTSIEN_Values<USART2::USART_CTRL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL3Pack  = Register<0x40004414, 32, ReadWriteMode, USART2USART_CTRL3Base, T...> ;

  struct USART2USART_GTPBase {} ;

  struct USART_GTP : public RegisterBase<0x40004418, 32, ReadWriteMode>
  {
    using PSCV = USART2_USART_GTP_PSCV_Values<USART2::USART_GTP, 0, 8, ReadWriteMode, USART2USART_GTPBase> ;
    using GTV = USART2_USART_GTP_GTV_Values<USART2::USART_GTP, 8, 8, ReadWriteMode, USART2USART_GTPBase> ;
    using FieldValues = USART2_USART_GTP_GTV_Values<USART2::USART_GTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_GTPPack  = Register<0x40004418, 32, ReadWriteMode, USART2USART_GTPBase, T...> ;

} ;

