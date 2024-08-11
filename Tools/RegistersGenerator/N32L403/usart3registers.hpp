/*******************************************************************************
* Filename      : usart3registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "usart3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART3
{
  struct USART3USART_STSBase {} ;

  struct USART_STS : public RegisterBase<0x40004800, 32, ReadWriteMode>
  {
    using PEF = USART3_USART_STS_PEF_Values<USART3::USART_STS, 0, 1, ReadWriteMode, USART3USART_STSBase> ;
    using FEF = USART3_USART_STS_FEF_Values<USART3::USART_STS, 1, 1, ReadWriteMode, USART3USART_STSBase> ;
    using NEF = USART3_USART_STS_NEF_Values<USART3::USART_STS, 2, 1, ReadWriteMode, USART3USART_STSBase> ;
    using OREF = USART3_USART_STS_OREF_Values<USART3::USART_STS, 3, 1, ReadWriteMode, USART3USART_STSBase> ;
    using IDLEF = USART3_USART_STS_IDLEF_Values<USART3::USART_STS, 4, 1, ReadWriteMode, USART3USART_STSBase> ;
    using RXDNE = USART3_USART_STS_RXDNE_Values<USART3::USART_STS, 5, 1, ReadWriteMode, USART3USART_STSBase> ;
    using TXC = USART3_USART_STS_TXC_Values<USART3::USART_STS, 6, 1, ReadWriteMode, USART3USART_STSBase> ;
    using TXDE = USART3_USART_STS_TXDE_Values<USART3::USART_STS, 7, 1, ReadWriteMode, USART3USART_STSBase> ;
    using LINBDF = USART3_USART_STS_LINBDF_Values<USART3::USART_STS, 8, 1, ReadWriteMode, USART3USART_STSBase> ;
    using CTSF = USART3_USART_STS_CTSF_Values<USART3::USART_STS, 9, 1, ReadWriteMode, USART3USART_STSBase> ;
    using FieldValues = USART3_USART_STS_CTSF_Values<USART3::USART_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_STSPack  = Register<0x40004800, 32, ReadWriteMode, USART3USART_STSBase, T...> ;

  struct USART3USART_DATBase {} ;

  struct USART_DAT : public RegisterBase<0x40004804, 32, ReadWriteMode>
  {
    using DATV = USART3_USART_DAT_DATV_Values<USART3::USART_DAT, 0, 9, ReadWriteMode, USART3USART_DATBase> ;
    using FieldValues = USART3_USART_DAT_DATV_Values<USART3::USART_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_DATPack  = Register<0x40004804, 32, ReadWriteMode, USART3USART_DATBase, T...> ;

  struct USART3USART_BRCFBase {} ;

  struct USART_BRCF : public RegisterBase<0x40004808, 32, ReadWriteMode>
  {
    using DIV_Decimal = USART3_USART_BRCF_DIV_Decimal_Values<USART3::USART_BRCF, 0, 4, ReadWriteMode, USART3USART_BRCFBase> ;
    using DIV_Integer = USART3_USART_BRCF_DIV_Integer_Values<USART3::USART_BRCF, 4, 12, ReadWriteMode, USART3USART_BRCFBase> ;
    using FieldValues = USART3_USART_BRCF_DIV_Integer_Values<USART3::USART_BRCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_BRCFPack  = Register<0x40004808, 32, ReadWriteMode, USART3USART_BRCFBase, T...> ;

  struct USART3USART_CTRL1Base {} ;

  struct USART_CTRL1 : public RegisterBase<0x4000480C, 32, ReadWriteMode>
  {
    using SDBRK = USART3_USART_CTRL1_SDBRK_Values<USART3::USART_CTRL1, 0, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using RCVWU = USART3_USART_CTRL1_RCVWU_Values<USART3::USART_CTRL1, 1, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using RXEN = USART3_USART_CTRL1_RXEN_Values<USART3::USART_CTRL1, 2, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using TXEN = USART3_USART_CTRL1_TXEN_Values<USART3::USART_CTRL1, 3, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using IDLEIEN = USART3_USART_CTRL1_IDLEIEN_Values<USART3::USART_CTRL1, 4, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using RXDNEIEN = USART3_USART_CTRL1_RXDNEIEN_Values<USART3::USART_CTRL1, 5, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using TXCIEN = USART3_USART_CTRL1_TXCIEN_Values<USART3::USART_CTRL1, 6, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using TXDEIEN = USART3_USART_CTRL1_TXDEIEN_Values<USART3::USART_CTRL1, 7, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using PEIEN = USART3_USART_CTRL1_PEIEN_Values<USART3::USART_CTRL1, 8, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using PSEL = USART3_USART_CTRL1_PSEL_Values<USART3::USART_CTRL1, 9, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using PCEN = USART3_USART_CTRL1_PCEN_Values<USART3::USART_CTRL1, 10, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using WUM = USART3_USART_CTRL1_WUM_Values<USART3::USART_CTRL1, 11, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using WL = USART3_USART_CTRL1_WL_Values<USART3::USART_CTRL1, 12, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using UEN = USART3_USART_CTRL1_UEN_Values<USART3::USART_CTRL1, 13, 1, ReadWriteMode, USART3USART_CTRL1Base> ;
    using FieldValues = USART3_USART_CTRL1_UEN_Values<USART3::USART_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL1Pack  = Register<0x4000480C, 32, ReadWriteMode, USART3USART_CTRL1Base, T...> ;

  struct USART3USART_CTRL2Base {} ;

  struct USART_CTRL2 : public RegisterBase<0x40004810, 32, ReadWriteMode>
  {
    using ADDR = USART3_USART_CTRL2_ADDR_Values<USART3::USART_CTRL2, 0, 4, ReadWriteMode, USART3USART_CTRL2Base> ;
    using LINBDL = USART3_USART_CTRL2_LINBDL_Values<USART3::USART_CTRL2, 5, 1, ReadWriteMode, USART3USART_CTRL2Base> ;
    using LINBDIEN = USART3_USART_CTRL2_LINBDIEN_Values<USART3::USART_CTRL2, 6, 1, ReadWriteMode, USART3USART_CTRL2Base> ;
    using LBCLK = USART3_USART_CTRL2_LBCLK_Values<USART3::USART_CTRL2, 8, 1, ReadWriteMode, USART3USART_CTRL2Base> ;
    using CLKPHA = USART3_USART_CTRL2_CLKPHA_Values<USART3::USART_CTRL2, 9, 1, ReadWriteMode, USART3USART_CTRL2Base> ;
    using CLKPOL = USART3_USART_CTRL2_CLKPOL_Values<USART3::USART_CTRL2, 10, 1, ReadWriteMode, USART3USART_CTRL2Base> ;
    using CLKEN = USART3_USART_CTRL2_CLKEN_Values<USART3::USART_CTRL2, 11, 1, ReadWriteMode, USART3USART_CTRL2Base> ;
    using STPB = USART3_USART_CTRL2_STPB_Values<USART3::USART_CTRL2, 12, 2, ReadWriteMode, USART3USART_CTRL2Base> ;
    using LINMEN = USART3_USART_CTRL2_LINMEN_Values<USART3::USART_CTRL2, 14, 1, ReadWriteMode, USART3USART_CTRL2Base> ;
    using FieldValues = USART3_USART_CTRL2_LINMEN_Values<USART3::USART_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL2Pack  = Register<0x40004810, 32, ReadWriteMode, USART3USART_CTRL2Base, T...> ;

  struct USART3USART_CTRL3Base {} ;

  struct USART_CTRL3 : public RegisterBase<0x40004814, 32, ReadWriteMode>
  {
    using ERRIEN = USART3_USART_CTRL3_ERRIEN_Values<USART3::USART_CTRL3, 0, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using IRDAMEN = USART3_USART_CTRL3_IRDAMEN_Values<USART3::USART_CTRL3, 1, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using IRDALP = USART3_USART_CTRL3_IRDALP_Values<USART3::USART_CTRL3, 2, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using HDMEN = USART3_USART_CTRL3_HDMEN_Values<USART3::USART_CTRL3, 3, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using SCNACK = USART3_USART_CTRL3_SCNACK_Values<USART3::USART_CTRL3, 4, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using SCMEN = USART3_USART_CTRL3_SCMEN_Values<USART3::USART_CTRL3, 5, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using DMARXEN = USART3_USART_CTRL3_DMARXEN_Values<USART3::USART_CTRL3, 6, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using DMATXEN = USART3_USART_CTRL3_DMATXEN_Values<USART3::USART_CTRL3, 7, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using RTSEN = USART3_USART_CTRL3_RTSEN_Values<USART3::USART_CTRL3, 8, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using CTSEN = USART3_USART_CTRL3_CTSEN_Values<USART3::USART_CTRL3, 9, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using CTSIEN = USART3_USART_CTRL3_CTSIEN_Values<USART3::USART_CTRL3, 10, 1, ReadWriteMode, USART3USART_CTRL3Base> ;
    using FieldValues = USART3_USART_CTRL3_CTSIEN_Values<USART3::USART_CTRL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_CTRL3Pack  = Register<0x40004814, 32, ReadWriteMode, USART3USART_CTRL3Base, T...> ;

  struct USART3USART_GTPBase {} ;

  struct USART_GTP : public RegisterBase<0x40004818, 32, ReadWriteMode>
  {
    using PSCV = USART3_USART_GTP_PSCV_Values<USART3::USART_GTP, 0, 8, ReadWriteMode, USART3USART_GTPBase> ;
    using GTV = USART3_USART_GTP_GTV_Values<USART3::USART_GTP, 8, 8, ReadWriteMode, USART3USART_GTPBase> ;
    using FieldValues = USART3_USART_GTP_GTV_Values<USART3::USART_GTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using USART_GTPPack  = Register<0x40004818, 32, ReadWriteMode, USART3USART_GTPBase, T...> ;

} ;

