/*******************************************************************************
* Filename      : i2c2registers.hpp
*
* Details       : Inter-integrated circuit. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2C2REGISTERS_HPP)
#define I2C2REGISTERS_HPP

#include "i2c2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2C2
{
  struct I2C2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40005800, 32, ReadWriteMode>
  {
    using SWRST = I2C2_CR1_SWRST_Values<I2C2::CR1, 15, 1, ReadWriteMode, I2C2CR1Base> ;
    using ALERT = I2C2_CR1_ALERT_Values<I2C2::CR1, 13, 1, ReadWriteMode, I2C2CR1Base> ;
    using PEC = I2C2_CR1_PEC_Values<I2C2::CR1, 12, 1, ReadWriteMode, I2C2CR1Base> ;
    using POS = I2C2_CR1_POS_Values<I2C2::CR1, 11, 1, ReadWriteMode, I2C2CR1Base> ;
    using ACK = I2C2_CR1_ACK_Values<I2C2::CR1, 10, 1, ReadWriteMode, I2C2CR1Base> ;
    using STOP = I2C2_CR1_STOP_Values<I2C2::CR1, 9, 1, ReadWriteMode, I2C2CR1Base> ;
    using START = I2C2_CR1_START_Values<I2C2::CR1, 8, 1, ReadWriteMode, I2C2CR1Base> ;
    using NOSTRETCH = I2C2_CR1_NOSTRETCH_Values<I2C2::CR1, 7, 1, ReadWriteMode, I2C2CR1Base> ;
    using ENGC = I2C2_CR1_ENGC_Values<I2C2::CR1, 6, 1, ReadWriteMode, I2C2CR1Base> ;
    using ENPEC = I2C2_CR1_ENPEC_Values<I2C2::CR1, 5, 1, ReadWriteMode, I2C2CR1Base> ;
    using ENARP = I2C2_CR1_ENARP_Values<I2C2::CR1, 4, 1, ReadWriteMode, I2C2CR1Base> ;
    using SMBTYPE = I2C2_CR1_SMBTYPE_Values<I2C2::CR1, 3, 1, ReadWriteMode, I2C2CR1Base> ;
    using SMBUS = I2C2_CR1_SMBUS_Values<I2C2::CR1, 1, 1, ReadWriteMode, I2C2CR1Base> ;
    using PE = I2C2_CR1_PE_Values<I2C2::CR1, 0, 1, ReadWriteMode, I2C2CR1Base> ;
    using FieldValues = I2C2_CR1_PE_Values<I2C2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40005800, 32, ReadWriteMode, I2C2CR1Base, T...> ;

  struct I2C2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40005804, 32, ReadWriteMode>
  {
    using LAST = I2C2_CR2_LAST_Values<I2C2::CR2, 12, 1, ReadWriteMode, I2C2CR2Base> ;
    using DMAEN = I2C2_CR2_DMAEN_Values<I2C2::CR2, 11, 1, ReadWriteMode, I2C2CR2Base> ;
    using ITBUFEN = I2C2_CR2_ITBUFEN_Values<I2C2::CR2, 10, 1, ReadWriteMode, I2C2CR2Base> ;
    using ITEVTEN = I2C2_CR2_ITEVTEN_Values<I2C2::CR2, 9, 1, ReadWriteMode, I2C2CR2Base> ;
    using ITERREN = I2C2_CR2_ITERREN_Values<I2C2::CR2, 8, 1, ReadWriteMode, I2C2CR2Base> ;
    using FREQ = I2C2_CR2_FREQ_Values<I2C2::CR2, 0, 6, ReadWriteMode, I2C2CR2Base> ;
    using FieldValues = I2C2_CR2_FREQ_Values<I2C2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40005804, 32, ReadWriteMode, I2C2CR2Base, T...> ;

  struct I2C2OAR1Base {} ;

  struct OAR1 : public RegisterBase<0x40005808, 32, ReadWriteMode>
  {
    using ADDMODE = I2C2_OAR1_ADDMODE_Values<I2C2::OAR1, 15, 1, ReadWriteMode, I2C2OAR1Base> ;
    using ADD10 = I2C2_OAR1_ADD10_Values<I2C2::OAR1, 8, 2, ReadWriteMode, I2C2OAR1Base> ;
    using ADD7 = I2C2_OAR1_ADD7_Values<I2C2::OAR1, 1, 7, ReadWriteMode, I2C2OAR1Base> ;
    using ADD0 = I2C2_OAR1_ADD0_Values<I2C2::OAR1, 0, 1, ReadWriteMode, I2C2OAR1Base> ;
    using FieldValues = I2C2_OAR1_ADD0_Values<I2C2::OAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OAR1Pack  = Register<0x40005808, 32, ReadWriteMode, I2C2OAR1Base, T...> ;

  struct I2C2OAR2Base {} ;

  struct OAR2 : public RegisterBase<0x4000580C, 32, ReadWriteMode>
  {
    using ADD2 = I2C2_OAR2_ADD2_Values<I2C2::OAR2, 1, 7, ReadWriteMode, I2C2OAR2Base> ;
    using ENDUAL = I2C2_OAR2_ENDUAL_Values<I2C2::OAR2, 0, 1, ReadWriteMode, I2C2OAR2Base> ;
    using FieldValues = I2C2_OAR2_ENDUAL_Values<I2C2::OAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OAR2Pack  = Register<0x4000580C, 32, ReadWriteMode, I2C2OAR2Base, T...> ;

  struct I2C2DRBase {} ;

  struct DR : public RegisterBase<0x40005810, 32, ReadWriteMode>
  {
    using DRField = I2C2_DR_DR_Values<I2C2::DR, 0, 8, ReadWriteMode, I2C2DRBase> ;
    using FieldValues = I2C2_DR_DR_Values<I2C2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40005810, 32, ReadWriteMode, I2C2DRBase, T...> ;

  struct I2C2SR1Base {} ;

  struct SR1 : public RegisterBase<0x40005814, 32, ReadWriteMode>
  {
    using SMBALERT = I2C2_SR1_SMBALERT_Values<I2C2::SR1, 15, 1, ReadWriteMode, I2C2SR1Base> ;
    using TIMEOUT = I2C2_SR1_TIMEOUT_Values<I2C2::SR1, 14, 1, ReadWriteMode, I2C2SR1Base> ;
    using PECERR = I2C2_SR1_PECERR_Values<I2C2::SR1, 12, 1, ReadWriteMode, I2C2SR1Base> ;
    using OVR = I2C2_SR1_OVR_Values<I2C2::SR1, 11, 1, ReadWriteMode, I2C2SR1Base> ;
    using AF = I2C2_SR1_AF_Values<I2C2::SR1, 10, 1, ReadWriteMode, I2C2SR1Base> ;
    using ARLO = I2C2_SR1_ARLO_Values<I2C2::SR1, 9, 1, ReadWriteMode, I2C2SR1Base> ;
    using BERR = I2C2_SR1_BERR_Values<I2C2::SR1, 8, 1, ReadWriteMode, I2C2SR1Base> ;
    using TxE = I2C2_SR1_TxE_Values<I2C2::SR1, 7, 1, ReadMode, I2C2SR1Base> ;
    using RxNE = I2C2_SR1_RxNE_Values<I2C2::SR1, 6, 1, ReadMode, I2C2SR1Base> ;
    using STOPF = I2C2_SR1_STOPF_Values<I2C2::SR1, 4, 1, ReadMode, I2C2SR1Base> ;
    using ADD10 = I2C2_SR1_ADD10_Values<I2C2::SR1, 3, 1, ReadMode, I2C2SR1Base> ;
    using BTF = I2C2_SR1_BTF_Values<I2C2::SR1, 2, 1, ReadMode, I2C2SR1Base> ;
    using ADDR = I2C2_SR1_ADDR_Values<I2C2::SR1, 1, 1, ReadMode, I2C2SR1Base> ;
    using SB = I2C2_SR1_SB_Values<I2C2::SR1, 0, 1, ReadMode, I2C2SR1Base> ;
    using FieldValues = I2C2_SR1_SB_Values<I2C2::SR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR1Pack  = Register<0x40005814, 32, ReadWriteMode, I2C2SR1Base, T...> ;

  struct I2C2SR2Base {} ;

  struct SR2 : public RegisterBase<0x40005818, 32, ReadMode>
  {
    using PEC = I2C2_SR2_PEC_Values<I2C2::SR2, 8, 8, ReadMode, I2C2SR2Base> ;
    using DUALF = I2C2_SR2_DUALF_Values<I2C2::SR2, 7, 1, ReadMode, I2C2SR2Base> ;
    using SMBHOST = I2C2_SR2_SMBHOST_Values<I2C2::SR2, 6, 1, ReadMode, I2C2SR2Base> ;
    using SMBDEFAULT = I2C2_SR2_SMBDEFAULT_Values<I2C2::SR2, 5, 1, ReadMode, I2C2SR2Base> ;
    using GENCALL = I2C2_SR2_GENCALL_Values<I2C2::SR2, 4, 1, ReadMode, I2C2SR2Base> ;
    using TRA = I2C2_SR2_TRA_Values<I2C2::SR2, 2, 1, ReadMode, I2C2SR2Base> ;
    using BUSY = I2C2_SR2_BUSY_Values<I2C2::SR2, 1, 1, ReadMode, I2C2SR2Base> ;
    using MSL = I2C2_SR2_MSL_Values<I2C2::SR2, 0, 1, ReadMode, I2C2SR2Base> ;
    using FieldValues = I2C2_SR2_MSL_Values<I2C2::SR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR2Pack  = Register<0x40005818, 32, ReadMode, I2C2SR2Base, T...> ;

  struct I2C2CCRBase {} ;

  struct CCR : public RegisterBase<0x4000581C, 32, ReadWriteMode>
  {
    using F_S = I2C2_CCR_F_S_Values<I2C2::CCR, 15, 1, ReadWriteMode, I2C2CCRBase> ;
    using DUTY = I2C2_CCR_DUTY_Values<I2C2::CCR, 14, 1, ReadWriteMode, I2C2CCRBase> ;
    using CCRField = I2C2_CCR_CCR_Values<I2C2::CCR, 0, 12, ReadWriteMode, I2C2CCRBase> ;
    using FieldValues = I2C2_CCR_CCR_Values<I2C2::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x4000581C, 32, ReadWriteMode, I2C2CCRBase, T...> ;

  struct I2C2TRISEBase {} ;

  struct TRISE : public RegisterBase<0x40005820, 32, ReadWriteMode>
  {
    using TRISEField = I2C2_TRISE_TRISE_Values<I2C2::TRISE, 0, 6, ReadWriteMode, I2C2TRISEBase> ;
    using FieldValues = I2C2_TRISE_TRISE_Values<I2C2::TRISE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TRISEPack  = Register<0x40005820, 32, ReadWriteMode, I2C2TRISEBase, T...> ;

} ;

#endif //#if !defined(I2C2REGISTERS_HPP)
