/*******************************************************************************
* Filename      : i2c2registers.hpp
*
* Details       : Inter integrated circuit. This header file is auto-generated
*                 for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "i2c2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2C2
{
  struct I2C2I2C_CTRL1Base {} ;

  struct I2C_CTRL1 : public RegisterBase<0x40005800, 32, ReadWriteMode>
  {
    using EN = I2C2_I2C_CTRL1_EN_Values<I2C2::I2C_CTRL1, 0, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using SMBMODE = I2C2_I2C_CTRL1_SMBMODE_Values<I2C2::I2C_CTRL1, 1, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using SMBTYPE = I2C2_I2C_CTRL1_SMBTYPE_Values<I2C2::I2C_CTRL1, 3, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using ARPEN = I2C2_I2C_CTRL1_ARPEN_Values<I2C2::I2C_CTRL1, 4, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using PECEN = I2C2_I2C_CTRL1_PECEN_Values<I2C2::I2C_CTRL1, 5, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using GCEN = I2C2_I2C_CTRL1_GCEN_Values<I2C2::I2C_CTRL1, 6, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using NOEXTEND = I2C2_I2C_CTRL1_NOEXTEND_Values<I2C2::I2C_CTRL1, 7, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using STARTGEN = I2C2_I2C_CTRL1_STARTGEN_Values<I2C2::I2C_CTRL1, 8, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using STOPGEN = I2C2_I2C_CTRL1_STOPGEN_Values<I2C2::I2C_CTRL1, 9, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using ACKEN = I2C2_I2C_CTRL1_ACKEN_Values<I2C2::I2C_CTRL1, 10, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using ACKPOS = I2C2_I2C_CTRL1_ACKPOS_Values<I2C2::I2C_CTRL1, 11, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using PEC = I2C2_I2C_CTRL1_PEC_Values<I2C2::I2C_CTRL1, 12, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using SMBALERT = I2C2_I2C_CTRL1_SMBALERT_Values<I2C2::I2C_CTRL1, 13, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using SWRESET = I2C2_I2C_CTRL1_SWRESET_Values<I2C2::I2C_CTRL1, 15, 1, ReadWriteMode, I2C2I2C_CTRL1Base> ;
    using FieldValues = I2C2_I2C_CTRL1_SWRESET_Values<I2C2::I2C_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_CTRL1Pack  = Register<0x40005800, 32, ReadWriteMode, I2C2I2C_CTRL1Base, T...> ;

  struct I2C2I2C_CTRL2Base {} ;

  struct I2C_CTRL2 : public RegisterBase<0x40005804, 32, ReadWriteMode>
  {
    using CLKFREQ = I2C2_I2C_CTRL2_CLKFREQ_Values<I2C2::I2C_CTRL2, 0, 6, ReadWriteMode, I2C2I2C_CTRL2Base> ;
    using ERRINTEN = I2C2_I2C_CTRL2_ERRINTEN_Values<I2C2::I2C_CTRL2, 8, 1, ReadWriteMode, I2C2I2C_CTRL2Base> ;
    using EVTINTEN = I2C2_I2C_CTRL2_EVTINTEN_Values<I2C2::I2C_CTRL2, 9, 1, ReadWriteMode, I2C2I2C_CTRL2Base> ;
    using BUFINTEN = I2C2_I2C_CTRL2_BUFINTEN_Values<I2C2::I2C_CTRL2, 10, 1, ReadWriteMode, I2C2I2C_CTRL2Base> ;
    using DMAEN = I2C2_I2C_CTRL2_DMAEN_Values<I2C2::I2C_CTRL2, 11, 1, ReadWriteMode, I2C2I2C_CTRL2Base> ;
    using DMALAST = I2C2_I2C_CTRL2_DMALAST_Values<I2C2::I2C_CTRL2, 12, 1, ReadWriteMode, I2C2I2C_CTRL2Base> ;
    using FieldValues = I2C2_I2C_CTRL2_DMALAST_Values<I2C2::I2C_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_CTRL2Pack  = Register<0x40005804, 32, ReadWriteMode, I2C2I2C_CTRL2Base, T...> ;

  struct I2C2I2C_OADDR1Base {} ;

  struct I2C_OADDR1 : public RegisterBase<0x40005808, 32, ReadWriteMode>
  {
    using ADDR0 = I2C2_I2C_OADDR1_ADDR0_Values<I2C2::I2C_OADDR1, 0, 1, ReadWriteMode, I2C2I2C_OADDR1Base> ;
    using ADDR = I2C2_I2C_OADDR1_ADDR_Values<I2C2::I2C_OADDR1, 1, 7, ReadWriteMode, I2C2I2C_OADDR1Base> ;
    using ADDR_H = I2C2_I2C_OADDR1_ADDR_H_Values<I2C2::I2C_OADDR1, 8, 2, ReadWriteMode, I2C2I2C_OADDR1Base> ;
    using ADDRMODE = I2C2_I2C_OADDR1_ADDRMODE_Values<I2C2::I2C_OADDR1, 15, 1, ReadWriteMode, I2C2I2C_OADDR1Base> ;
    using FieldValues = I2C2_I2C_OADDR1_ADDRMODE_Values<I2C2::I2C_OADDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_OADDR1Pack  = Register<0x40005808, 32, ReadWriteMode, I2C2I2C_OADDR1Base, T...> ;

  struct I2C2I2C_OADDR2Base {} ;

  struct I2C_OADDR2 : public RegisterBase<0x4000580C, 32, ReadWriteMode>
  {
    using DUALEN = I2C2_I2C_OADDR2_DUALEN_Values<I2C2::I2C_OADDR2, 0, 1, ReadWriteMode, I2C2I2C_OADDR2Base> ;
    using ADDR2 = I2C2_I2C_OADDR2_ADDR2_Values<I2C2::I2C_OADDR2, 1, 7, ReadWriteMode, I2C2I2C_OADDR2Base> ;
    using FieldValues = I2C2_I2C_OADDR2_ADDR2_Values<I2C2::I2C_OADDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_OADDR2Pack  = Register<0x4000580C, 32, ReadWriteMode, I2C2I2C_OADDR2Base, T...> ;

  struct I2C2I2C_DATBase {} ;

  struct I2C_DAT : public RegisterBase<0x40005810, 32, ReadWriteMode>
  {
    using DATA = I2C2_I2C_DAT_DATA_Values<I2C2::I2C_DAT, 0, 8, ReadWriteMode, I2C2I2C_DATBase> ;
    using FieldValues = I2C2_I2C_DAT_DATA_Values<I2C2::I2C_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_DATPack  = Register<0x40005810, 32, ReadWriteMode, I2C2I2C_DATBase, T...> ;

  struct I2C2I2C_STS1Base {} ;

  struct I2C_STS1 : public RegisterBase<0x40005814, 32, ReadWriteMode>
  {
    using STARTBF = I2C2_I2C_STS1_STARTBF_Values<I2C2::I2C_STS1, 0, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using ADDRF = I2C2_I2C_STS1_ADDRF_Values<I2C2::I2C_STS1, 1, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using BSF = I2C2_I2C_STS1_BSF_Values<I2C2::I2C_STS1, 2, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using ADDR10F = I2C2_I2C_STS1_ADDR10F_Values<I2C2::I2C_STS1, 3, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using STOPF_ = I2C2_I2C_STS1_STOPF__Values<I2C2::I2C_STS1, 4, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using RXDATNE = I2C2_I2C_STS1_RXDATNE_Values<I2C2::I2C_STS1, 6, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using TXDATE = I2C2_I2C_STS1_TXDATE_Values<I2C2::I2C_STS1, 7, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using BUSERR = I2C2_I2C_STS1_BUSERR_Values<I2C2::I2C_STS1, 8, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using ARLOST = I2C2_I2C_STS1_ARLOST_Values<I2C2::I2C_STS1, 9, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using ACKFAIL = I2C2_I2C_STS1_ACKFAIL_Values<I2C2::I2C_STS1, 10, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using OVERRUN = I2C2_I2C_STS1_OVERRUN_Values<I2C2::I2C_STS1, 11, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using PECERR = I2C2_I2C_STS1_PECERR_Values<I2C2::I2C_STS1, 12, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using TIMOUT = I2C2_I2C_STS1_TIMOUT_Values<I2C2::I2C_STS1, 14, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using SMBALERT = I2C2_I2C_STS1_SMBALERT_Values<I2C2::I2C_STS1, 15, 1, ReadWriteMode, I2C2I2C_STS1Base> ;
    using FieldValues = I2C2_I2C_STS1_SMBALERT_Values<I2C2::I2C_STS1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_STS1Pack  = Register<0x40005814, 32, ReadWriteMode, I2C2I2C_STS1Base, T...> ;

  struct I2C2I2C_STS2Base {} ;

  struct I2C_STS2 : public RegisterBase<0x40005818, 32, ReadWriteMode>
  {
    using MSMODE = I2C2_I2C_STS2_MSMODE_Values<I2C2::I2C_STS2, 0, 1, ReadWriteMode, I2C2I2C_STS2Base> ;
    using BUSY = I2C2_I2C_STS2_BUSY_Values<I2C2::I2C_STS2, 1, 1, ReadWriteMode, I2C2I2C_STS2Base> ;
    using TRF = I2C2_I2C_STS2_TRF_Values<I2C2::I2C_STS2, 2, 1, ReadWriteMode, I2C2I2C_STS2Base> ;
    using GCALLADDR = I2C2_I2C_STS2_GCALLADDR_Values<I2C2::I2C_STS2, 4, 1, ReadWriteMode, I2C2I2C_STS2Base> ;
    using SMBDADDR = I2C2_I2C_STS2_SMBDADDR_Values<I2C2::I2C_STS2, 5, 1, ReadWriteMode, I2C2I2C_STS2Base> ;
    using SMBHADDR = I2C2_I2C_STS2_SMBHADDR_Values<I2C2::I2C_STS2, 6, 1, ReadWriteMode, I2C2I2C_STS2Base> ;
    using DUALFLAG = I2C2_I2C_STS2_DUALFLAG_Values<I2C2::I2C_STS2, 7, 1, ReadWriteMode, I2C2I2C_STS2Base> ;
    using PECVAL = I2C2_I2C_STS2_PECVAL_Values<I2C2::I2C_STS2, 8, 8, ReadWriteMode, I2C2I2C_STS2Base> ;
    using FieldValues = I2C2_I2C_STS2_PECVAL_Values<I2C2::I2C_STS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_STS2Pack  = Register<0x40005818, 32, ReadWriteMode, I2C2I2C_STS2Base, T...> ;

  struct I2C2I2C_CLKCTRLBase {} ;

  struct I2C_CLKCTRL : public RegisterBase<0x4000581C, 32, ReadWriteMode>
  {
    using CLKCTRL = I2C2_I2C_CLKCTRL_CLKCTRL_Values<I2C2::I2C_CLKCTRL, 0, 12, ReadWriteMode, I2C2I2C_CLKCTRLBase> ;
    using DUTY = I2C2_I2C_CLKCTRL_DUTY_Values<I2C2::I2C_CLKCTRL, 14, 1, ReadWriteMode, I2C2I2C_CLKCTRLBase> ;
    using FSMODE = I2C2_I2C_CLKCTRL_FSMODE_Values<I2C2::I2C_CLKCTRL, 15, 1, ReadWriteMode, I2C2I2C_CLKCTRLBase> ;
    using FieldValues = I2C2_I2C_CLKCTRL_FSMODE_Values<I2C2::I2C_CLKCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_CLKCTRLPack  = Register<0x4000581C, 32, ReadWriteMode, I2C2I2C_CLKCTRLBase, T...> ;

  struct I2C2I2C_TMRISEBase {} ;

  struct I2C_TMRISE : public RegisterBase<0x40005820, 32, ReadWriteMode>
  {
    using TMRISE = I2C2_I2C_TMRISE_TMRISE_Values<I2C2::I2C_TMRISE, 0, 6, ReadWriteMode, I2C2I2C_TMRISEBase> ;
    using FieldValues = I2C2_I2C_TMRISE_TMRISE_Values<I2C2::I2C_TMRISE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using I2C_TMRISEPack  = Register<0x40005820, 32, ReadWriteMode, I2C2I2C_TMRISEBase, T...> ;

} ;

