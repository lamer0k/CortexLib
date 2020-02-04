/*******************************************************************************
* Filename      : i2c2registers.hpp
*
* Details       : Inter-integrated circuit. This header file is auto-generated
*                 for STM32F0x1 device.
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
    using PE = I2C2_CR1_PE_Values<I2C2::CR1, 0, 1, ReadWriteMode, I2C2CR1Base> ;
    using TXIE = I2C2_CR1_TXIE_Values<I2C2::CR1, 1, 1, ReadWriteMode, I2C2CR1Base> ;
    using RXIE = I2C2_CR1_RXIE_Values<I2C2::CR1, 2, 1, ReadWriteMode, I2C2CR1Base> ;
    using ADDRIE = I2C2_CR1_ADDRIE_Values<I2C2::CR1, 3, 1, ReadWriteMode, I2C2CR1Base> ;
    using NACKIE = I2C2_CR1_NACKIE_Values<I2C2::CR1, 4, 1, ReadWriteMode, I2C2CR1Base> ;
    using STOPIE = I2C2_CR1_STOPIE_Values<I2C2::CR1, 5, 1, ReadWriteMode, I2C2CR1Base> ;
    using TCIE = I2C2_CR1_TCIE_Values<I2C2::CR1, 6, 1, ReadWriteMode, I2C2CR1Base> ;
    using ERRIE = I2C2_CR1_ERRIE_Values<I2C2::CR1, 7, 1, ReadWriteMode, I2C2CR1Base> ;
    using DNF = I2C2_CR1_DNF_Values<I2C2::CR1, 8, 4, ReadWriteMode, I2C2CR1Base> ;
    using ANFOFF = I2C2_CR1_ANFOFF_Values<I2C2::CR1, 12, 1, ReadWriteMode, I2C2CR1Base> ;
    using SWRST = I2C2_CR1_SWRST_Values<I2C2::CR1, 13, 1, WriteMode, I2C2CR1Base> ;
    using TXDMAEN = I2C2_CR1_TXDMAEN_Values<I2C2::CR1, 14, 1, ReadWriteMode, I2C2CR1Base> ;
    using RXDMAEN = I2C2_CR1_RXDMAEN_Values<I2C2::CR1, 15, 1, ReadWriteMode, I2C2CR1Base> ;
    using SBC = I2C2_CR1_SBC_Values<I2C2::CR1, 16, 1, ReadWriteMode, I2C2CR1Base> ;
    using NOSTRETCH = I2C2_CR1_NOSTRETCH_Values<I2C2::CR1, 17, 1, ReadWriteMode, I2C2CR1Base> ;
    using WUPEN = I2C2_CR1_WUPEN_Values<I2C2::CR1, 18, 1, ReadWriteMode, I2C2CR1Base> ;
    using GCEN = I2C2_CR1_GCEN_Values<I2C2::CR1, 19, 1, ReadWriteMode, I2C2CR1Base> ;
    using SMBHEN = I2C2_CR1_SMBHEN_Values<I2C2::CR1, 20, 1, ReadWriteMode, I2C2CR1Base> ;
    using SMBDEN = I2C2_CR1_SMBDEN_Values<I2C2::CR1, 21, 1, ReadWriteMode, I2C2CR1Base> ;
    using ALERTEN = I2C2_CR1_ALERTEN_Values<I2C2::CR1, 22, 1, ReadWriteMode, I2C2CR1Base> ;
    using PECEN = I2C2_CR1_PECEN_Values<I2C2::CR1, 23, 1, ReadWriteMode, I2C2CR1Base> ;
    using FieldValues = I2C2_CR1_PECEN_Values<I2C2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40005800, 32, ReadWriteMode, I2C2CR1Base, T...> ;

  struct I2C2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40005804, 32, ReadWriteMode>
  {
    using PECBYTE = I2C2_CR2_PECBYTE_Values<I2C2::CR2, 26, 1, ReadWriteMode, I2C2CR2Base> ;
    using AUTOEND = I2C2_CR2_AUTOEND_Values<I2C2::CR2, 25, 1, ReadWriteMode, I2C2CR2Base> ;
    using RELOAD = I2C2_CR2_RELOAD_Values<I2C2::CR2, 24, 1, ReadWriteMode, I2C2CR2Base> ;
    using NBYTES = I2C2_CR2_NBYTES_Values<I2C2::CR2, 16, 8, ReadWriteMode, I2C2CR2Base> ;
    using NACK = I2C2_CR2_NACK_Values<I2C2::CR2, 15, 1, ReadWriteMode, I2C2CR2Base> ;
    using STOP = I2C2_CR2_STOP_Values<I2C2::CR2, 14, 1, ReadWriteMode, I2C2CR2Base> ;
    using START = I2C2_CR2_START_Values<I2C2::CR2, 13, 1, ReadWriteMode, I2C2CR2Base> ;
    using HEAD10R = I2C2_CR2_HEAD10R_Values<I2C2::CR2, 12, 1, ReadWriteMode, I2C2CR2Base> ;
    using ADD10 = I2C2_CR2_ADD10_Values<I2C2::CR2, 11, 1, ReadWriteMode, I2C2CR2Base> ;
    using RD_WRN = I2C2_CR2_RD_WRN_Values<I2C2::CR2, 10, 1, ReadWriteMode, I2C2CR2Base> ;
    using SADD8 = I2C2_CR2_SADD8_Values<I2C2::CR2, 8, 2, ReadWriteMode, I2C2CR2Base> ;
    using SADD1 = I2C2_CR2_SADD1_Values<I2C2::CR2, 1, 7, ReadWriteMode, I2C2CR2Base> ;
    using SADD0 = I2C2_CR2_SADD0_Values<I2C2::CR2, 0, 1, ReadWriteMode, I2C2CR2Base> ;
    using FieldValues = I2C2_CR2_SADD0_Values<I2C2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40005804, 32, ReadWriteMode, I2C2CR2Base, T...> ;

  struct I2C2OAR1Base {} ;

  struct OAR1 : public RegisterBase<0x40005808, 32, ReadWriteMode>
  {
    using OA1_0 = I2C2_OAR1_OA1_0_Values<I2C2::OAR1, 0, 1, ReadWriteMode, I2C2OAR1Base> ;
    using OA1_1 = I2C2_OAR1_OA1_1_Values<I2C2::OAR1, 1, 7, ReadWriteMode, I2C2OAR1Base> ;
    using OA1_8 = I2C2_OAR1_OA1_8_Values<I2C2::OAR1, 8, 2, ReadWriteMode, I2C2OAR1Base> ;
    using OA1MODE = I2C2_OAR1_OA1MODE_Values<I2C2::OAR1, 10, 1, ReadWriteMode, I2C2OAR1Base> ;
    using OA1EN = I2C2_OAR1_OA1EN_Values<I2C2::OAR1, 15, 1, ReadWriteMode, I2C2OAR1Base> ;
    using FieldValues = I2C2_OAR1_OA1EN_Values<I2C2::OAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OAR1Pack  = Register<0x40005808, 32, ReadWriteMode, I2C2OAR1Base, T...> ;

  struct I2C2OAR2Base {} ;

  struct OAR2 : public RegisterBase<0x4000580C, 32, ReadWriteMode>
  {
    using OA2 = I2C2_OAR2_OA2_Values<I2C2::OAR2, 1, 7, ReadWriteMode, I2C2OAR2Base> ;
    using OA2MSK = I2C2_OAR2_OA2MSK_Values<I2C2::OAR2, 8, 3, ReadWriteMode, I2C2OAR2Base> ;
    using OA2EN = I2C2_OAR2_OA2EN_Values<I2C2::OAR2, 15, 1, ReadWriteMode, I2C2OAR2Base> ;
    using FieldValues = I2C2_OAR2_OA2EN_Values<I2C2::OAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OAR2Pack  = Register<0x4000580C, 32, ReadWriteMode, I2C2OAR2Base, T...> ;

  struct I2C2TIMINGRBase {} ;

  struct TIMINGR : public RegisterBase<0x40005810, 32, ReadWriteMode>
  {
    using SCLL = I2C2_TIMINGR_SCLL_Values<I2C2::TIMINGR, 0, 8, ReadWriteMode, I2C2TIMINGRBase> ;
    using SCLH = I2C2_TIMINGR_SCLH_Values<I2C2::TIMINGR, 8, 8, ReadWriteMode, I2C2TIMINGRBase> ;
    using SDADEL = I2C2_TIMINGR_SDADEL_Values<I2C2::TIMINGR, 16, 4, ReadWriteMode, I2C2TIMINGRBase> ;
    using SCLDEL = I2C2_TIMINGR_SCLDEL_Values<I2C2::TIMINGR, 20, 4, ReadWriteMode, I2C2TIMINGRBase> ;
    using PRESC = I2C2_TIMINGR_PRESC_Values<I2C2::TIMINGR, 28, 4, ReadWriteMode, I2C2TIMINGRBase> ;
    using FieldValues = I2C2_TIMINGR_PRESC_Values<I2C2::TIMINGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMINGRPack  = Register<0x40005810, 32, ReadWriteMode, I2C2TIMINGRBase, T...> ;

  struct I2C2TIMEOUTRBase {} ;

  struct TIMEOUTR : public RegisterBase<0x40005814, 32, ReadWriteMode>
  {
    using TIMEOUTA = I2C2_TIMEOUTR_TIMEOUTA_Values<I2C2::TIMEOUTR, 0, 12, ReadWriteMode, I2C2TIMEOUTRBase> ;
    using TIDLE = I2C2_TIMEOUTR_TIDLE_Values<I2C2::TIMEOUTR, 12, 1, ReadWriteMode, I2C2TIMEOUTRBase> ;
    using TIMOUTEN = I2C2_TIMEOUTR_TIMOUTEN_Values<I2C2::TIMEOUTR, 15, 1, ReadWriteMode, I2C2TIMEOUTRBase> ;
    using TIMEOUTB = I2C2_TIMEOUTR_TIMEOUTB_Values<I2C2::TIMEOUTR, 16, 12, ReadWriteMode, I2C2TIMEOUTRBase> ;
    using TEXTEN = I2C2_TIMEOUTR_TEXTEN_Values<I2C2::TIMEOUTR, 31, 1, ReadWriteMode, I2C2TIMEOUTRBase> ;
    using FieldValues = I2C2_TIMEOUTR_TEXTEN_Values<I2C2::TIMEOUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMEOUTRPack  = Register<0x40005814, 32, ReadWriteMode, I2C2TIMEOUTRBase, T...> ;

  struct I2C2ISRBase {} ;

  struct ISR : public RegisterBase<0x40005818, 32, ReadWriteMode>
  {
    using ADDCODE = I2C2_ISR_ADDCODE_Values<I2C2::ISR, 17, 7, ReadMode, I2C2ISRBase> ;
    using DIR = I2C2_ISR_DIR_Values<I2C2::ISR, 16, 1, ReadMode, I2C2ISRBase> ;
    using BUSY = I2C2_ISR_BUSY_Values<I2C2::ISR, 15, 1, ReadMode, I2C2ISRBase> ;
    using ALERT = I2C2_ISR_ALERT_Values<I2C2::ISR, 13, 1, ReadMode, I2C2ISRBase> ;
    using TIMEOUT = I2C2_ISR_TIMEOUT_Values<I2C2::ISR, 12, 1, ReadMode, I2C2ISRBase> ;
    using PECERR = I2C2_ISR_PECERR_Values<I2C2::ISR, 11, 1, ReadMode, I2C2ISRBase> ;
    using OVR = I2C2_ISR_OVR_Values<I2C2::ISR, 10, 1, ReadMode, I2C2ISRBase> ;
    using ARLO = I2C2_ISR_ARLO_Values<I2C2::ISR, 9, 1, ReadMode, I2C2ISRBase> ;
    using BERR = I2C2_ISR_BERR_Values<I2C2::ISR, 8, 1, ReadMode, I2C2ISRBase> ;
    using TCR = I2C2_ISR_TCR_Values<I2C2::ISR, 7, 1, ReadMode, I2C2ISRBase> ;
    using TC = I2C2_ISR_TC_Values<I2C2::ISR, 6, 1, ReadMode, I2C2ISRBase> ;
    using STOPF = I2C2_ISR_STOPF_Values<I2C2::ISR, 5, 1, ReadMode, I2C2ISRBase> ;
    using NACKF = I2C2_ISR_NACKF_Values<I2C2::ISR, 4, 1, ReadMode, I2C2ISRBase> ;
    using ADDR = I2C2_ISR_ADDR_Values<I2C2::ISR, 3, 1, ReadMode, I2C2ISRBase> ;
    using RXNE = I2C2_ISR_RXNE_Values<I2C2::ISR, 2, 1, ReadMode, I2C2ISRBase> ;
    using TXIS = I2C2_ISR_TXIS_Values<I2C2::ISR, 1, 1, ReadWriteMode, I2C2ISRBase> ;
    using TXE = I2C2_ISR_TXE_Values<I2C2::ISR, 0, 1, ReadWriteMode, I2C2ISRBase> ;
    using FieldValues = I2C2_ISR_TXE_Values<I2C2::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40005818, 32, ReadWriteMode, I2C2ISRBase, T...> ;

  struct I2C2ICRBase {} ;

  struct ICR : public RegisterBase<0x4000581C, 32, WriteMode>
  {
    using ALERTCF = I2C2_ICR_ALERTCF_Values<I2C2::ICR, 13, 1, WriteMode, I2C2ICRBase> ;
    using TIMOUTCF = I2C2_ICR_TIMOUTCF_Values<I2C2::ICR, 12, 1, WriteMode, I2C2ICRBase> ;
    using PECCF = I2C2_ICR_PECCF_Values<I2C2::ICR, 11, 1, WriteMode, I2C2ICRBase> ;
    using OVRCF = I2C2_ICR_OVRCF_Values<I2C2::ICR, 10, 1, WriteMode, I2C2ICRBase> ;
    using ARLOCF = I2C2_ICR_ARLOCF_Values<I2C2::ICR, 9, 1, WriteMode, I2C2ICRBase> ;
    using BERRCF = I2C2_ICR_BERRCF_Values<I2C2::ICR, 8, 1, WriteMode, I2C2ICRBase> ;
    using STOPCF = I2C2_ICR_STOPCF_Values<I2C2::ICR, 5, 1, WriteMode, I2C2ICRBase> ;
    using NACKCF = I2C2_ICR_NACKCF_Values<I2C2::ICR, 4, 1, WriteMode, I2C2ICRBase> ;
    using ADDRCF = I2C2_ICR_ADDRCF_Values<I2C2::ICR, 3, 1, WriteMode, I2C2ICRBase> ;
    using FieldValues = I2C2_ICR_ADDRCF_Values<I2C2::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x4000581C, 32, WriteMode, I2C2ICRBase, T...> ;

  struct I2C2PECRBase {} ;

  struct PECR : public RegisterBase<0x40005820, 32, ReadMode>
  {
    using PEC = I2C2_PECR_PEC_Values<I2C2::PECR, 0, 8, ReadMode, I2C2PECRBase> ;
    using FieldValues = I2C2_PECR_PEC_Values<I2C2::PECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PECRPack  = Register<0x40005820, 32, ReadMode, I2C2PECRBase, T...> ;

  struct I2C2RXDRBase {} ;

  struct RXDR : public RegisterBase<0x40005824, 32, ReadMode>
  {
    using RXDATA = I2C2_RXDR_RXDATA_Values<I2C2::RXDR, 0, 8, ReadMode, I2C2RXDRBase> ;
    using FieldValues = I2C2_RXDR_RXDATA_Values<I2C2::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x40005824, 32, ReadMode, I2C2RXDRBase, T...> ;

  struct I2C2TXDRBase {} ;

  struct TXDR : public RegisterBase<0x40005828, 32, ReadWriteMode>
  {
    using TXDATA = I2C2_TXDR_TXDATA_Values<I2C2::TXDR, 0, 8, ReadWriteMode, I2C2TXDRBase> ;
    using FieldValues = I2C2_TXDR_TXDATA_Values<I2C2::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40005828, 32, ReadWriteMode, I2C2TXDRBase, T...> ;

} ;

#endif //#if !defined(I2C2REGISTERS_HPP)
