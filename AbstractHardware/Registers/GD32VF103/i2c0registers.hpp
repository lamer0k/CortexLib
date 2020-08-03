/*******************************************************************************
* Filename      : i2c0registers.hpp
*
* Details       : Inter integrated circuit. This header file is auto-generated
*                 for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(I2C0REGISTERS_HPP)
#define I2C0REGISTERS_HPP

#include "i2c0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2C0
{
  struct I2C0CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40005400, 16, ReadWriteMode>
  {
    using SRESET = I2C0_CTL0_SRESET_Values<I2C0::CTL0, 15, 1, ReadWriteMode, I2C0CTL0Base> ;
    using SALT = I2C0_CTL0_SALT_Values<I2C0::CTL0, 13, 1, ReadWriteMode, I2C0CTL0Base> ;
    using PECTRANS = I2C0_CTL0_PECTRANS_Values<I2C0::CTL0, 12, 1, ReadWriteMode, I2C0CTL0Base> ;
    using POAP = I2C0_CTL0_POAP_Values<I2C0::CTL0, 11, 1, ReadWriteMode, I2C0CTL0Base> ;
    using ACKEN = I2C0_CTL0_ACKEN_Values<I2C0::CTL0, 10, 1, ReadWriteMode, I2C0CTL0Base> ;
    using STOP = I2C0_CTL0_STOP_Values<I2C0::CTL0, 9, 1, ReadWriteMode, I2C0CTL0Base> ;
    using START = I2C0_CTL0_START_Values<I2C0::CTL0, 8, 1, ReadWriteMode, I2C0CTL0Base> ;
    using SS = I2C0_CTL0_SS_Values<I2C0::CTL0, 7, 1, ReadWriteMode, I2C0CTL0Base> ;
    using GCEN = I2C0_CTL0_GCEN_Values<I2C0::CTL0, 6, 1, ReadWriteMode, I2C0CTL0Base> ;
    using PECEN = I2C0_CTL0_PECEN_Values<I2C0::CTL0, 5, 1, ReadWriteMode, I2C0CTL0Base> ;
    using ARPEN = I2C0_CTL0_ARPEN_Values<I2C0::CTL0, 4, 1, ReadWriteMode, I2C0CTL0Base> ;
    using SMBSEL = I2C0_CTL0_SMBSEL_Values<I2C0::CTL0, 3, 1, ReadWriteMode, I2C0CTL0Base> ;
    using SMBEN = I2C0_CTL0_SMBEN_Values<I2C0::CTL0, 1, 1, ReadWriteMode, I2C0CTL0Base> ;
    using I2CEN = I2C0_CTL0_I2CEN_Values<I2C0::CTL0, 0, 1, ReadWriteMode, I2C0CTL0Base> ;
    using FieldValues = I2C0_CTL0_I2CEN_Values<I2C0::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40005400, 16, ReadWriteMode, I2C0CTL0Base, T...> ;

  struct I2C0CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40005404, 16, ReadWriteMode>
  {
    using DMALST = I2C0_CTL1_DMALST_Values<I2C0::CTL1, 12, 1, ReadWriteMode, I2C0CTL1Base> ;
    using DMAON = I2C0_CTL1_DMAON_Values<I2C0::CTL1, 11, 1, ReadWriteMode, I2C0CTL1Base> ;
    using BUFIE = I2C0_CTL1_BUFIE_Values<I2C0::CTL1, 10, 1, ReadWriteMode, I2C0CTL1Base> ;
    using EVIE = I2C0_CTL1_EVIE_Values<I2C0::CTL1, 9, 1, ReadWriteMode, I2C0CTL1Base> ;
    using ERRIE = I2C0_CTL1_ERRIE_Values<I2C0::CTL1, 8, 1, ReadWriteMode, I2C0CTL1Base> ;
    using I2CCLK = I2C0_CTL1_I2CCLK_Values<I2C0::CTL1, 0, 6, ReadWriteMode, I2C0CTL1Base> ;
    using FieldValues = I2C0_CTL1_I2CCLK_Values<I2C0::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40005404, 16, ReadWriteMode, I2C0CTL1Base, T...> ;

  struct I2C0SADDR0Base {} ;

  struct SADDR0 : public RegisterBase<0x40005408, 16, ReadWriteMode>
  {
    using ADDFORMAT = I2C0_SADDR0_ADDFORMAT_Values<I2C0::SADDR0, 15, 1, ReadWriteMode, I2C0SADDR0Base> ;
    using ADDRESS9_8 = I2C0_SADDR0_ADDRESS9_8_Values<I2C0::SADDR0, 8, 2, ReadWriteMode, I2C0SADDR0Base> ;
    using ADDRESS7_1 = I2C0_SADDR0_ADDRESS7_1_Values<I2C0::SADDR0, 1, 7, ReadWriteMode, I2C0SADDR0Base> ;
    using ADDRESS0 = I2C0_SADDR0_ADDRESS0_Values<I2C0::SADDR0, 0, 1, ReadWriteMode, I2C0SADDR0Base> ;
    using FieldValues = I2C0_SADDR0_ADDRESS0_Values<I2C0::SADDR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SADDR0Pack  = Register<0x40005408, 16, ReadWriteMode, I2C0SADDR0Base, T...> ;

  struct I2C0SADDR1Base {} ;

  struct SADDR1 : public RegisterBase<0x4000540C, 16, ReadWriteMode>
  {
    using ADDRESS2 = I2C0_SADDR1_ADDRESS2_Values<I2C0::SADDR1, 1, 7, ReadWriteMode, I2C0SADDR1Base> ;
    using DUADEN = I2C0_SADDR1_DUADEN_Values<I2C0::SADDR1, 0, 1, ReadWriteMode, I2C0SADDR1Base> ;
    using FieldValues = I2C0_SADDR1_DUADEN_Values<I2C0::SADDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SADDR1Pack  = Register<0x4000540C, 16, ReadWriteMode, I2C0SADDR1Base, T...> ;

  struct I2C0DATABase {} ;

  struct DATA : public RegisterBase<0x40005410, 16, ReadWriteMode>
  {
    using TRB = I2C0_DATA_TRB_Values<I2C0::DATA, 0, 8, ReadWriteMode, I2C0DATABase> ;
    using FieldValues = I2C0_DATA_TRB_Values<I2C0::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40005410, 16, ReadWriteMode, I2C0DATABase, T...> ;

  struct I2C0STAT0Base {} ;

  struct STAT0 : public RegisterBase<0x40005414, 16, ReadWriteMode>
  {
    using SMBALT = I2C0_STAT0_SMBALT_Values<I2C0::STAT0, 15, 1, ReadWriteMode, I2C0STAT0Base> ;
    using SMBTO = I2C0_STAT0_SMBTO_Values<I2C0::STAT0, 14, 1, ReadWriteMode, I2C0STAT0Base> ;
    using PECERR = I2C0_STAT0_PECERR_Values<I2C0::STAT0, 12, 1, ReadWriteMode, I2C0STAT0Base> ;
    using OUERR = I2C0_STAT0_OUERR_Values<I2C0::STAT0, 11, 1, ReadWriteMode, I2C0STAT0Base> ;
    using AERR = I2C0_STAT0_AERR_Values<I2C0::STAT0, 10, 1, ReadWriteMode, I2C0STAT0Base> ;
    using LOSTARB = I2C0_STAT0_LOSTARB_Values<I2C0::STAT0, 9, 1, ReadWriteMode, I2C0STAT0Base> ;
    using BERR = I2C0_STAT0_BERR_Values<I2C0::STAT0, 8, 1, ReadWriteMode, I2C0STAT0Base> ;
    using TBE = I2C0_STAT0_TBE_Values<I2C0::STAT0, 7, 1, ReadMode, I2C0STAT0Base> ;
    using RBNE = I2C0_STAT0_RBNE_Values<I2C0::STAT0, 6, 1, ReadMode, I2C0STAT0Base> ;
    using STPDET = I2C0_STAT0_STPDET_Values<I2C0::STAT0, 4, 1, ReadMode, I2C0STAT0Base> ;
    using ADD10SEND = I2C0_STAT0_ADD10SEND_Values<I2C0::STAT0, 3, 1, ReadMode, I2C0STAT0Base> ;
    using BTC = I2C0_STAT0_BTC_Values<I2C0::STAT0, 2, 1, ReadMode, I2C0STAT0Base> ;
    using ADDSEND = I2C0_STAT0_ADDSEND_Values<I2C0::STAT0, 1, 1, ReadMode, I2C0STAT0Base> ;
    using SBSEND = I2C0_STAT0_SBSEND_Values<I2C0::STAT0, 0, 1, ReadMode, I2C0STAT0Base> ;
    using FieldValues = I2C0_STAT0_SBSEND_Values<I2C0::STAT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAT0Pack  = Register<0x40005414, 16, ReadWriteMode, I2C0STAT0Base, T...> ;

  struct I2C0STAT1Base {} ;

  struct STAT1 : public RegisterBase<0x40005418, 16, ReadMode>
  {
    using PECV = I2C0_STAT1_PECV_Values<I2C0::STAT1, 8, 8, ReadMode, I2C0STAT1Base> ;
    using DUMODF = I2C0_STAT1_DUMODF_Values<I2C0::STAT1, 7, 1, ReadMode, I2C0STAT1Base> ;
    using HSTSMB = I2C0_STAT1_HSTSMB_Values<I2C0::STAT1, 6, 1, ReadMode, I2C0STAT1Base> ;
    using DEFSMB = I2C0_STAT1_DEFSMB_Values<I2C0::STAT1, 5, 1, ReadMode, I2C0STAT1Base> ;
    using RXGC = I2C0_STAT1_RXGC_Values<I2C0::STAT1, 4, 1, ReadMode, I2C0STAT1Base> ;
    using TR = I2C0_STAT1_TR_Values<I2C0::STAT1, 2, 1, ReadMode, I2C0STAT1Base> ;
    using I2CBSY = I2C0_STAT1_I2CBSY_Values<I2C0::STAT1, 1, 1, ReadMode, I2C0STAT1Base> ;
    using MASTER = I2C0_STAT1_MASTER_Values<I2C0::STAT1, 0, 1, ReadMode, I2C0STAT1Base> ;
    using FieldValues = I2C0_STAT1_MASTER_Values<I2C0::STAT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAT1Pack  = Register<0x40005418, 16, ReadMode, I2C0STAT1Base, T...> ;

  struct I2C0CKCFGBase {} ;

  struct CKCFG : public RegisterBase<0x4000541C, 16, ReadWriteMode>
  {
    using FAST = I2C0_CKCFG_FAST_Values<I2C0::CKCFG, 15, 1, ReadWriteMode, I2C0CKCFGBase> ;
    using DTCY = I2C0_CKCFG_DTCY_Values<I2C0::CKCFG, 14, 1, ReadWriteMode, I2C0CKCFGBase> ;
    using CLKC = I2C0_CKCFG_CLKC_Values<I2C0::CKCFG, 0, 12, ReadWriteMode, I2C0CKCFGBase> ;
    using FieldValues = I2C0_CKCFG_CLKC_Values<I2C0::CKCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CKCFGPack  = Register<0x4000541C, 16, ReadWriteMode, I2C0CKCFGBase, T...> ;

  struct I2C0RTBase {} ;

  struct RT : public RegisterBase<0x40005420, 16, ReadWriteMode>
  {
    using RISETIME = I2C0_RT_RISETIME_Values<I2C0::RT, 0, 6, ReadWriteMode, I2C0RTBase> ;
    using FieldValues = I2C0_RT_RISETIME_Values<I2C0::RT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTPack  = Register<0x40005420, 16, ReadWriteMode, I2C0RTBase, T...> ;

} ;

#endif //#if !defined(I2C0REGISTERS_HPP)
