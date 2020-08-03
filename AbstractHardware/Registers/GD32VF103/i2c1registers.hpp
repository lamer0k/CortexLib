/*******************************************************************************
* Filename      : i2c1registers.hpp
*
* Details       : Inter integrated circuit. This header file is auto-generated
*                 for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(I2C1REGISTERS_HPP)
#define I2C1REGISTERS_HPP

#include "i2c1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2C1
{
  struct I2C1CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40005800, 16, ReadWriteMode>
  {
    using SRESET = I2C1_CTL0_SRESET_Values<I2C1::CTL0, 15, 1, ReadWriteMode, I2C1CTL0Base> ;
    using SALT = I2C1_CTL0_SALT_Values<I2C1::CTL0, 13, 1, ReadWriteMode, I2C1CTL0Base> ;
    using PECTRANS = I2C1_CTL0_PECTRANS_Values<I2C1::CTL0, 12, 1, ReadWriteMode, I2C1CTL0Base> ;
    using POAP = I2C1_CTL0_POAP_Values<I2C1::CTL0, 11, 1, ReadWriteMode, I2C1CTL0Base> ;
    using ACKEN = I2C1_CTL0_ACKEN_Values<I2C1::CTL0, 10, 1, ReadWriteMode, I2C1CTL0Base> ;
    using STOP = I2C1_CTL0_STOP_Values<I2C1::CTL0, 9, 1, ReadWriteMode, I2C1CTL0Base> ;
    using START = I2C1_CTL0_START_Values<I2C1::CTL0, 8, 1, ReadWriteMode, I2C1CTL0Base> ;
    using SS = I2C1_CTL0_SS_Values<I2C1::CTL0, 7, 1, ReadWriteMode, I2C1CTL0Base> ;
    using GCEN = I2C1_CTL0_GCEN_Values<I2C1::CTL0, 6, 1, ReadWriteMode, I2C1CTL0Base> ;
    using PECEN = I2C1_CTL0_PECEN_Values<I2C1::CTL0, 5, 1, ReadWriteMode, I2C1CTL0Base> ;
    using ARPEN = I2C1_CTL0_ARPEN_Values<I2C1::CTL0, 4, 1, ReadWriteMode, I2C1CTL0Base> ;
    using SMBSEL = I2C1_CTL0_SMBSEL_Values<I2C1::CTL0, 3, 1, ReadWriteMode, I2C1CTL0Base> ;
    using SMBEN = I2C1_CTL0_SMBEN_Values<I2C1::CTL0, 1, 1, ReadWriteMode, I2C1CTL0Base> ;
    using I2CEN = I2C1_CTL0_I2CEN_Values<I2C1::CTL0, 0, 1, ReadWriteMode, I2C1CTL0Base> ;
    using FieldValues = I2C1_CTL0_I2CEN_Values<I2C1::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40005800, 16, ReadWriteMode, I2C1CTL0Base, T...> ;

  struct I2C1CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40005804, 16, ReadWriteMode>
  {
    using DMALST = I2C1_CTL1_DMALST_Values<I2C1::CTL1, 12, 1, ReadWriteMode, I2C1CTL1Base> ;
    using DMAON = I2C1_CTL1_DMAON_Values<I2C1::CTL1, 11, 1, ReadWriteMode, I2C1CTL1Base> ;
    using BUFIE = I2C1_CTL1_BUFIE_Values<I2C1::CTL1, 10, 1, ReadWriteMode, I2C1CTL1Base> ;
    using EVIE = I2C1_CTL1_EVIE_Values<I2C1::CTL1, 9, 1, ReadWriteMode, I2C1CTL1Base> ;
    using ERRIE = I2C1_CTL1_ERRIE_Values<I2C1::CTL1, 8, 1, ReadWriteMode, I2C1CTL1Base> ;
    using I2CCLK = I2C1_CTL1_I2CCLK_Values<I2C1::CTL1, 0, 6, ReadWriteMode, I2C1CTL1Base> ;
    using FieldValues = I2C1_CTL1_I2CCLK_Values<I2C1::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40005804, 16, ReadWriteMode, I2C1CTL1Base, T...> ;

  struct I2C1SADDR0Base {} ;

  struct SADDR0 : public RegisterBase<0x40005808, 16, ReadWriteMode>
  {
    using ADDFORMAT = I2C1_SADDR0_ADDFORMAT_Values<I2C1::SADDR0, 15, 1, ReadWriteMode, I2C1SADDR0Base> ;
    using ADDRESS9_8 = I2C1_SADDR0_ADDRESS9_8_Values<I2C1::SADDR0, 8, 2, ReadWriteMode, I2C1SADDR0Base> ;
    using ADDRESS7_1 = I2C1_SADDR0_ADDRESS7_1_Values<I2C1::SADDR0, 1, 7, ReadWriteMode, I2C1SADDR0Base> ;
    using ADDRESS0 = I2C1_SADDR0_ADDRESS0_Values<I2C1::SADDR0, 0, 1, ReadWriteMode, I2C1SADDR0Base> ;
    using FieldValues = I2C1_SADDR0_ADDRESS0_Values<I2C1::SADDR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SADDR0Pack  = Register<0x40005808, 16, ReadWriteMode, I2C1SADDR0Base, T...> ;

  struct I2C1SADDR1Base {} ;

  struct SADDR1 : public RegisterBase<0x4000580C, 16, ReadWriteMode>
  {
    using ADDRESS2 = I2C1_SADDR1_ADDRESS2_Values<I2C1::SADDR1, 1, 7, ReadWriteMode, I2C1SADDR1Base> ;
    using DUADEN = I2C1_SADDR1_DUADEN_Values<I2C1::SADDR1, 0, 1, ReadWriteMode, I2C1SADDR1Base> ;
    using FieldValues = I2C1_SADDR1_DUADEN_Values<I2C1::SADDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SADDR1Pack  = Register<0x4000580C, 16, ReadWriteMode, I2C1SADDR1Base, T...> ;

  struct I2C1DATABase {} ;

  struct DATA : public RegisterBase<0x40005810, 16, ReadWriteMode>
  {
    using TRB = I2C1_DATA_TRB_Values<I2C1::DATA, 0, 8, ReadWriteMode, I2C1DATABase> ;
    using FieldValues = I2C1_DATA_TRB_Values<I2C1::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40005810, 16, ReadWriteMode, I2C1DATABase, T...> ;

  struct I2C1STAT0Base {} ;

  struct STAT0 : public RegisterBase<0x40005814, 16, ReadWriteMode>
  {
    using SMBALT = I2C1_STAT0_SMBALT_Values<I2C1::STAT0, 15, 1, ReadWriteMode, I2C1STAT0Base> ;
    using SMBTO = I2C1_STAT0_SMBTO_Values<I2C1::STAT0, 14, 1, ReadWriteMode, I2C1STAT0Base> ;
    using PECERR = I2C1_STAT0_PECERR_Values<I2C1::STAT0, 12, 1, ReadWriteMode, I2C1STAT0Base> ;
    using OUERR = I2C1_STAT0_OUERR_Values<I2C1::STAT0, 11, 1, ReadWriteMode, I2C1STAT0Base> ;
    using AERR = I2C1_STAT0_AERR_Values<I2C1::STAT0, 10, 1, ReadWriteMode, I2C1STAT0Base> ;
    using LOSTARB = I2C1_STAT0_LOSTARB_Values<I2C1::STAT0, 9, 1, ReadWriteMode, I2C1STAT0Base> ;
    using BERR = I2C1_STAT0_BERR_Values<I2C1::STAT0, 8, 1, ReadWriteMode, I2C1STAT0Base> ;
    using TBE = I2C1_STAT0_TBE_Values<I2C1::STAT0, 7, 1, ReadMode, I2C1STAT0Base> ;
    using RBNE = I2C1_STAT0_RBNE_Values<I2C1::STAT0, 6, 1, ReadMode, I2C1STAT0Base> ;
    using STPDET = I2C1_STAT0_STPDET_Values<I2C1::STAT0, 4, 1, ReadMode, I2C1STAT0Base> ;
    using ADD10SEND = I2C1_STAT0_ADD10SEND_Values<I2C1::STAT0, 3, 1, ReadMode, I2C1STAT0Base> ;
    using BTC = I2C1_STAT0_BTC_Values<I2C1::STAT0, 2, 1, ReadMode, I2C1STAT0Base> ;
    using ADDSEND = I2C1_STAT0_ADDSEND_Values<I2C1::STAT0, 1, 1, ReadMode, I2C1STAT0Base> ;
    using SBSEND = I2C1_STAT0_SBSEND_Values<I2C1::STAT0, 0, 1, ReadMode, I2C1STAT0Base> ;
    using FieldValues = I2C1_STAT0_SBSEND_Values<I2C1::STAT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAT0Pack  = Register<0x40005814, 16, ReadWriteMode, I2C1STAT0Base, T...> ;

  struct I2C1STAT1Base {} ;

  struct STAT1 : public RegisterBase<0x40005818, 16, ReadMode>
  {
    using PECV = I2C1_STAT1_PECV_Values<I2C1::STAT1, 8, 8, ReadMode, I2C1STAT1Base> ;
    using DUMODF = I2C1_STAT1_DUMODF_Values<I2C1::STAT1, 7, 1, ReadMode, I2C1STAT1Base> ;
    using HSTSMB = I2C1_STAT1_HSTSMB_Values<I2C1::STAT1, 6, 1, ReadMode, I2C1STAT1Base> ;
    using DEFSMB = I2C1_STAT1_DEFSMB_Values<I2C1::STAT1, 5, 1, ReadMode, I2C1STAT1Base> ;
    using RXGC = I2C1_STAT1_RXGC_Values<I2C1::STAT1, 4, 1, ReadMode, I2C1STAT1Base> ;
    using TR = I2C1_STAT1_TR_Values<I2C1::STAT1, 2, 1, ReadMode, I2C1STAT1Base> ;
    using I2CBSY = I2C1_STAT1_I2CBSY_Values<I2C1::STAT1, 1, 1, ReadMode, I2C1STAT1Base> ;
    using MASTER = I2C1_STAT1_MASTER_Values<I2C1::STAT1, 0, 1, ReadMode, I2C1STAT1Base> ;
    using FieldValues = I2C1_STAT1_MASTER_Values<I2C1::STAT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAT1Pack  = Register<0x40005818, 16, ReadMode, I2C1STAT1Base, T...> ;

  struct I2C1CKCFGBase {} ;

  struct CKCFG : public RegisterBase<0x4000581C, 16, ReadWriteMode>
  {
    using FAST = I2C1_CKCFG_FAST_Values<I2C1::CKCFG, 15, 1, ReadWriteMode, I2C1CKCFGBase> ;
    using DTCY = I2C1_CKCFG_DTCY_Values<I2C1::CKCFG, 14, 1, ReadWriteMode, I2C1CKCFGBase> ;
    using CLKC = I2C1_CKCFG_CLKC_Values<I2C1::CKCFG, 0, 12, ReadWriteMode, I2C1CKCFGBase> ;
    using FieldValues = I2C1_CKCFG_CLKC_Values<I2C1::CKCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CKCFGPack  = Register<0x4000581C, 16, ReadWriteMode, I2C1CKCFGBase, T...> ;

  struct I2C1RTBase {} ;

  struct RT : public RegisterBase<0x40005820, 16, ReadWriteMode>
  {
    using RISETIME = I2C1_RT_RISETIME_Values<I2C1::RT, 0, 6, ReadWriteMode, I2C1RTBase> ;
    using FieldValues = I2C1_RT_RISETIME_Values<I2C1::RT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTPack  = Register<0x40005820, 16, ReadWriteMode, I2C1RTBase, T...> ;

} ;

#endif //#if !defined(I2C1REGISTERS_HPP)
