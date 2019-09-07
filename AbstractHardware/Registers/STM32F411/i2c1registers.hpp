/*******************************************************************************
* Filename      : i2c1registers.hpp
*
* Details       : Inter-integrated circuit. This header file is auto-generated
*                 for STM32F411 device.
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
  struct I2C1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40005400, 32, ReadWriteMode>
  {
    using SWRST = IC_CR_SWRST_Values<I2C1::CR1, 15, 1, ReadWriteMode, I2C1CR1Base> ;
    using ALERT = IC_CR_ALERT_Values<I2C1::CR1, 13, 1, ReadWriteMode, I2C1CR1Base> ;
    using PEC = IC_CR_PEC_Values<I2C1::CR1, 12, 1, ReadWriteMode, I2C1CR1Base> ;
    using POS = IC_CR_POS_Values<I2C1::CR1, 11, 1, ReadWriteMode, I2C1CR1Base> ;
    using ACK = IC_CR_ACK_Values<I2C1::CR1, 10, 1, ReadWriteMode, I2C1CR1Base> ;
    using STOP = IC_CR_STOP_Values<I2C1::CR1, 9, 1, ReadWriteMode, I2C1CR1Base> ;
    using START = IC_CR_START_Values<I2C1::CR1, 8, 1, ReadWriteMode, I2C1CR1Base> ;
    using NOSTRETCH = IC_CR_NOSTRETCH_Values<I2C1::CR1, 7, 1, ReadWriteMode, I2C1CR1Base> ;
    using ENGC = IC_CR_ENGC_Values<I2C1::CR1, 6, 1, ReadWriteMode, I2C1CR1Base> ;
    using ENPEC = IC_CR_ENPEC_Values<I2C1::CR1, 5, 1, ReadWriteMode, I2C1CR1Base> ;
    using ENARP = IC_CR_ENARP_Values<I2C1::CR1, 4, 1, ReadWriteMode, I2C1CR1Base> ;
    using SMBTYPE = IC_CR_SMBTYPE_Values<I2C1::CR1, 3, 1, ReadWriteMode, I2C1CR1Base> ;
    using SMBUS = IC_CR_SMBUS_Values<I2C1::CR1, 1, 1, ReadWriteMode, I2C1CR1Base> ;
    using PE = IC_CR_PE_Values<I2C1::CR1, 0, 1, ReadWriteMode, I2C1CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40005400, 32, ReadWriteMode, I2C1CR1Base, T...> ;

  struct I2C1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40005404, 32, ReadWriteMode>
  {
    using LAST = IC_CR_LAST_Values<I2C1::CR2, 12, 1, ReadWriteMode, I2C1CR2Base> ;
    using DMAEN = IC_CR_DMAEN_Values<I2C1::CR2, 11, 1, ReadWriteMode, I2C1CR2Base> ;
    using ITBUFEN = IC_CR_ITBUFEN_Values<I2C1::CR2, 10, 1, ReadWriteMode, I2C1CR2Base> ;
    using ITEVTEN = IC_CR_ITEVTEN_Values<I2C1::CR2, 9, 1, ReadWriteMode, I2C1CR2Base> ;
    using ITERREN = IC_CR_ITERREN_Values<I2C1::CR2, 8, 1, ReadWriteMode, I2C1CR2Base> ;
    using FREQ = IC_CR_FREQ_Values<I2C1::CR2, 0, 6, ReadWriteMode, I2C1CR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40005404, 32, ReadWriteMode, I2C1CR2Base, T...> ;

  struct I2C1OAR1Base {} ;

  struct OAR1 : public RegisterBase<0x40005408, 32, ReadWriteMode>
  {
    using ADDMODE = IC_OAR_ADDMODE_Values<I2C1::OAR1, 15, 1, ReadWriteMode, I2C1OAR1Base> ;
    using ADD10 = IC_OAR_ADD_Values<I2C1::OAR1, 8, 2, ReadWriteMode, I2C1OAR1Base> ;
    using ADD7 = IC_OAR_ADD_Values<I2C1::OAR1, 1, 7, ReadWriteMode, I2C1OAR1Base> ;
    using ADD0 = IC_OAR_ADD_Values<I2C1::OAR1, 0, 1, ReadWriteMode, I2C1OAR1Base> ;
  } ;

  template<typename... T> 
  using OAR1Pack  = Register<0x40005408, 32, ReadWriteMode, I2C1OAR1Base, T...> ;

  struct I2C1OAR2Base {} ;

  struct OAR2 : public RegisterBase<0x4000540C, 32, ReadWriteMode>
  {
    using ADD2 = IC_OAR_ADD_Values<I2C1::OAR2, 1, 7, ReadWriteMode, I2C1OAR2Base> ;
    using ENDUAL = IC_OAR_ENDUAL_Values<I2C1::OAR2, 0, 1, ReadWriteMode, I2C1OAR2Base> ;
  } ;

  template<typename... T> 
  using OAR2Pack  = Register<0x4000540C, 32, ReadWriteMode, I2C1OAR2Base, T...> ;

  struct I2C1DRBase {} ;

  struct DR : public RegisterBase<0x40005410, 32, ReadWriteMode>
  {
    using DRField = IC_DR_DR_Values<I2C1::DR, 0, 8, ReadWriteMode, I2C1DRBase> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40005410, 32, ReadWriteMode, I2C1DRBase, T...> ;

  struct I2C1SR1Base {} ;

  struct SR1 : public RegisterBase<0x40005414, 32, ReadWriteMode>
  {
    using SMBALERT = IC_SR_SMBALERT_Values<I2C1::SR1, 15, 1, ReadWriteMode, I2C1SR1Base> ;
    using TIMEOUT = IC_SR_TIMEOUT_Values<I2C1::SR1, 14, 1, ReadWriteMode, I2C1SR1Base> ;
    using PECERR = IC_SR_PECERR_Values<I2C1::SR1, 12, 1, ReadWriteMode, I2C1SR1Base> ;
    using OVR = IC_SR_OVR_Values<I2C1::SR1, 11, 1, ReadWriteMode, I2C1SR1Base> ;
    using AF = IC_SR_AF_Values<I2C1::SR1, 10, 1, ReadWriteMode, I2C1SR1Base> ;
    using ARLO = IC_SR_ARLO_Values<I2C1::SR1, 9, 1, ReadWriteMode, I2C1SR1Base> ;
    using BERR = IC_SR_BERR_Values<I2C1::SR1, 8, 1, ReadWriteMode, I2C1SR1Base> ;
    using TxE = IC_SR_TxE_Values<I2C1::SR1, 7, 1, ReadMode, I2C1SR1Base> ;
    using RxNE = IC_SR_RxNE_Values<I2C1::SR1, 6, 1, ReadMode, I2C1SR1Base> ;
    using STOPF = IC_SR_STOPF_Values<I2C1::SR1, 4, 1, ReadMode, I2C1SR1Base> ;
    using ADD10 = IC_SR_ADD_Values<I2C1::SR1, 3, 1, ReadMode, I2C1SR1Base> ;
    using BTF = IC_SR_BTF_Values<I2C1::SR1, 2, 1, ReadMode, I2C1SR1Base> ;
    using ADDR = IC_SR_ADDR_Values<I2C1::SR1, 1, 1, ReadMode, I2C1SR1Base> ;
    using SB = IC_SR_SB_Values<I2C1::SR1, 0, 1, ReadMode, I2C1SR1Base> ;
  } ;

  template<typename... T> 
  using SR1Pack  = Register<0x40005414, 32, ReadWriteMode, I2C1SR1Base, T...> ;

  struct I2C1SR2Base {} ;

  struct SR2 : public RegisterBase<0x40005418, 32, ReadMode>
  {
    using PEC = IC_SR_PEC_Values<I2C1::SR2, 8, 8, ReadMode, I2C1SR2Base> ;
    using DUALF = IC_SR_DUALF_Values<I2C1::SR2, 7, 1, ReadMode, I2C1SR2Base> ;
    using SMBHOST = IC_SR_SMBHOST_Values<I2C1::SR2, 6, 1, ReadMode, I2C1SR2Base> ;
    using SMBDEFAULT = IC_SR_SMBDEFAULT_Values<I2C1::SR2, 5, 1, ReadMode, I2C1SR2Base> ;
    using GENCALL = IC_SR_GENCALL_Values<I2C1::SR2, 4, 1, ReadMode, I2C1SR2Base> ;
    using TRA = IC_SR_TRA_Values<I2C1::SR2, 2, 1, ReadMode, I2C1SR2Base> ;
    using BUSY = IC_SR_BUSY_Values<I2C1::SR2, 1, 1, ReadMode, I2C1SR2Base> ;
    using MSL = IC_SR_MSL_Values<I2C1::SR2, 0, 1, ReadMode, I2C1SR2Base> ;
  } ;

  template<typename... T> 
  using SR2Pack  = Register<0x40005418, 32, ReadMode, I2C1SR2Base, T...> ;

  struct I2C1CCRBase {} ;

  struct CCR : public RegisterBase<0x4000541C, 32, ReadWriteMode>
  {
    using F_S = IC_CCR_F_S_Values<I2C1::CCR, 15, 1, ReadWriteMode, I2C1CCRBase> ;
    using DUTY = IC_CCR_DUTY_Values<I2C1::CCR, 14, 1, ReadWriteMode, I2C1CCRBase> ;
    using CCRField = IC_CCR_CCR_Values<I2C1::CCR, 0, 12, ReadWriteMode, I2C1CCRBase> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x4000541C, 32, ReadWriteMode, I2C1CCRBase, T...> ;

  struct I2C1TRISEBase {} ;

  struct TRISE : public RegisterBase<0x40005420, 32, ReadWriteMode>
  {
    using TRISEField = IC_TRISE_TRISE_Values<I2C1::TRISE, 0, 6, ReadWriteMode, I2C1TRISEBase> ;
  } ;

  template<typename... T> 
  using TRISEPack  = Register<0x40005420, 32, ReadWriteMode, I2C1TRISEBase, T...> ;

} ;

#endif //#if !defined(I2C1REGISTERS_HPP)
