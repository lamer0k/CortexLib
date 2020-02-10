/*******************************************************************************
* Filename      : i2c3registers.hpp
*
* Details       : Inter-integrated circuit. This header file is auto-generated
*                 for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(I2C3REGISTERS_HPP)
#define I2C3REGISTERS_HPP

#include "i2c3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2C3
{
  struct I2C3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40007800, 32, ReadWriteMode>
  {
    using PE = I2C3_CR1_PE_Values<I2C3::CR1, 0, 1, ReadWriteMode, I2C3CR1Base> ;
    using TXIE = I2C3_CR1_TXIE_Values<I2C3::CR1, 1, 1, ReadWriteMode, I2C3CR1Base> ;
    using RXIE = I2C3_CR1_RXIE_Values<I2C3::CR1, 2, 1, ReadWriteMode, I2C3CR1Base> ;
    using ADDRIE = I2C3_CR1_ADDRIE_Values<I2C3::CR1, 3, 1, ReadWriteMode, I2C3CR1Base> ;
    using NACKIE = I2C3_CR1_NACKIE_Values<I2C3::CR1, 4, 1, ReadWriteMode, I2C3CR1Base> ;
    using STOPIE = I2C3_CR1_STOPIE_Values<I2C3::CR1, 5, 1, ReadWriteMode, I2C3CR1Base> ;
    using TCIE = I2C3_CR1_TCIE_Values<I2C3::CR1, 6, 1, ReadWriteMode, I2C3CR1Base> ;
    using ERRIE = I2C3_CR1_ERRIE_Values<I2C3::CR1, 7, 1, ReadWriteMode, I2C3CR1Base> ;
    using DNF = I2C3_CR1_DNF_Values<I2C3::CR1, 8, 4, ReadWriteMode, I2C3CR1Base> ;
    using ANFOFF = I2C3_CR1_ANFOFF_Values<I2C3::CR1, 12, 1, ReadWriteMode, I2C3CR1Base> ;
    using SWRST = I2C3_CR1_SWRST_Values<I2C3::CR1, 13, 1, WriteMode, I2C3CR1Base> ;
    using TXDMAEN = I2C3_CR1_TXDMAEN_Values<I2C3::CR1, 14, 1, ReadWriteMode, I2C3CR1Base> ;
    using RXDMAEN = I2C3_CR1_RXDMAEN_Values<I2C3::CR1, 15, 1, ReadWriteMode, I2C3CR1Base> ;
    using SBC = I2C3_CR1_SBC_Values<I2C3::CR1, 16, 1, ReadWriteMode, I2C3CR1Base> ;
    using NOSTRETCH = I2C3_CR1_NOSTRETCH_Values<I2C3::CR1, 17, 1, ReadWriteMode, I2C3CR1Base> ;
    using WUPEN = I2C3_CR1_WUPEN_Values<I2C3::CR1, 18, 1, ReadWriteMode, I2C3CR1Base> ;
    using GCEN = I2C3_CR1_GCEN_Values<I2C3::CR1, 19, 1, ReadWriteMode, I2C3CR1Base> ;
    using SMBHEN = I2C3_CR1_SMBHEN_Values<I2C3::CR1, 20, 1, ReadWriteMode, I2C3CR1Base> ;
    using SMBDEN = I2C3_CR1_SMBDEN_Values<I2C3::CR1, 21, 1, ReadWriteMode, I2C3CR1Base> ;
    using ALERTEN = I2C3_CR1_ALERTEN_Values<I2C3::CR1, 22, 1, ReadWriteMode, I2C3CR1Base> ;
    using PECEN = I2C3_CR1_PECEN_Values<I2C3::CR1, 23, 1, ReadWriteMode, I2C3CR1Base> ;
    using FieldValues = I2C3_CR1_PECEN_Values<I2C3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40007800, 32, ReadWriteMode, I2C3CR1Base, T...> ;

  struct I2C3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40007804, 32, ReadWriteMode>
  {
    using PECBYTE = I2C3_CR2_PECBYTE_Values<I2C3::CR2, 26, 1, ReadWriteMode, I2C3CR2Base> ;
    using AUTOEND = I2C3_CR2_AUTOEND_Values<I2C3::CR2, 25, 1, ReadWriteMode, I2C3CR2Base> ;
    using RELOAD = I2C3_CR2_RELOAD_Values<I2C3::CR2, 24, 1, ReadWriteMode, I2C3CR2Base> ;
    using NBYTES = I2C3_CR2_NBYTES_Values<I2C3::CR2, 16, 8, ReadWriteMode, I2C3CR2Base> ;
    using NACK = I2C3_CR2_NACK_Values<I2C3::CR2, 15, 1, ReadWriteMode, I2C3CR2Base> ;
    using STOP = I2C3_CR2_STOP_Values<I2C3::CR2, 14, 1, ReadWriteMode, I2C3CR2Base> ;
    using START = I2C3_CR2_START_Values<I2C3::CR2, 13, 1, ReadWriteMode, I2C3CR2Base> ;
    using HEAD10R = I2C3_CR2_HEAD10R_Values<I2C3::CR2, 12, 1, ReadWriteMode, I2C3CR2Base> ;
    using ADD10 = I2C3_CR2_ADD10_Values<I2C3::CR2, 11, 1, ReadWriteMode, I2C3CR2Base> ;
    using RD_WRN = I2C3_CR2_RD_WRN_Values<I2C3::CR2, 10, 1, ReadWriteMode, I2C3CR2Base> ;
    using SADD8 = I2C3_CR2_SADD8_Values<I2C3::CR2, 8, 2, ReadWriteMode, I2C3CR2Base> ;
    using SADD1 = I2C3_CR2_SADD1_Values<I2C3::CR2, 1, 7, ReadWriteMode, I2C3CR2Base> ;
    using SADD0 = I2C3_CR2_SADD0_Values<I2C3::CR2, 0, 1, ReadWriteMode, I2C3CR2Base> ;
    using FieldValues = I2C3_CR2_SADD0_Values<I2C3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40007804, 32, ReadWriteMode, I2C3CR2Base, T...> ;

  struct I2C3OAR1Base {} ;

  struct OAR1 : public RegisterBase<0x40007808, 32, ReadWriteMode>
  {
    using OA1_0 = I2C3_OAR1_OA1_0_Values<I2C3::OAR1, 0, 1, ReadWriteMode, I2C3OAR1Base> ;
    using OA1_1 = I2C3_OAR1_OA1_1_Values<I2C3::OAR1, 1, 7, ReadWriteMode, I2C3OAR1Base> ;
    using OA1_8 = I2C3_OAR1_OA1_8_Values<I2C3::OAR1, 8, 2, ReadWriteMode, I2C3OAR1Base> ;
    using OA1MODE = I2C3_OAR1_OA1MODE_Values<I2C3::OAR1, 10, 1, ReadWriteMode, I2C3OAR1Base> ;
    using OA1EN = I2C3_OAR1_OA1EN_Values<I2C3::OAR1, 15, 1, ReadWriteMode, I2C3OAR1Base> ;
    using FieldValues = I2C3_OAR1_OA1EN_Values<I2C3::OAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OAR1Pack  = Register<0x40007808, 32, ReadWriteMode, I2C3OAR1Base, T...> ;

  struct I2C3OAR2Base {} ;

  struct OAR2 : public RegisterBase<0x4000780C, 32, ReadWriteMode>
  {
    using OA2 = I2C3_OAR2_OA2_Values<I2C3::OAR2, 1, 7, ReadWriteMode, I2C3OAR2Base> ;
    using OA2MSK = I2C3_OAR2_OA2MSK_Values<I2C3::OAR2, 8, 3, ReadWriteMode, I2C3OAR2Base> ;
    using OA2EN = I2C3_OAR2_OA2EN_Values<I2C3::OAR2, 15, 1, ReadWriteMode, I2C3OAR2Base> ;
    using FieldValues = I2C3_OAR2_OA2EN_Values<I2C3::OAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OAR2Pack  = Register<0x4000780C, 32, ReadWriteMode, I2C3OAR2Base, T...> ;

  struct I2C3TIMINGRBase {} ;

  struct TIMINGR : public RegisterBase<0x40007810, 32, ReadWriteMode>
  {
    using SCLL = I2C3_TIMINGR_SCLL_Values<I2C3::TIMINGR, 0, 8, ReadWriteMode, I2C3TIMINGRBase> ;
    using SCLH = I2C3_TIMINGR_SCLH_Values<I2C3::TIMINGR, 8, 8, ReadWriteMode, I2C3TIMINGRBase> ;
    using SDADEL = I2C3_TIMINGR_SDADEL_Values<I2C3::TIMINGR, 16, 4, ReadWriteMode, I2C3TIMINGRBase> ;
    using SCLDEL = I2C3_TIMINGR_SCLDEL_Values<I2C3::TIMINGR, 20, 4, ReadWriteMode, I2C3TIMINGRBase> ;
    using PRESC = I2C3_TIMINGR_PRESC_Values<I2C3::TIMINGR, 28, 4, ReadWriteMode, I2C3TIMINGRBase> ;
    using FieldValues = I2C3_TIMINGR_PRESC_Values<I2C3::TIMINGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMINGRPack  = Register<0x40007810, 32, ReadWriteMode, I2C3TIMINGRBase, T...> ;

  struct I2C3TIMEOUTRBase {} ;

  struct TIMEOUTR : public RegisterBase<0x40007814, 32, ReadWriteMode>
  {
    using TIMEOUTA = I2C3_TIMEOUTR_TIMEOUTA_Values<I2C3::TIMEOUTR, 0, 12, ReadWriteMode, I2C3TIMEOUTRBase> ;
    using TIDLE = I2C3_TIMEOUTR_TIDLE_Values<I2C3::TIMEOUTR, 12, 1, ReadWriteMode, I2C3TIMEOUTRBase> ;
    using TIMOUTEN = I2C3_TIMEOUTR_TIMOUTEN_Values<I2C3::TIMEOUTR, 15, 1, ReadWriteMode, I2C3TIMEOUTRBase> ;
    using TIMEOUTB = I2C3_TIMEOUTR_TIMEOUTB_Values<I2C3::TIMEOUTR, 16, 12, ReadWriteMode, I2C3TIMEOUTRBase> ;
    using TEXTEN = I2C3_TIMEOUTR_TEXTEN_Values<I2C3::TIMEOUTR, 31, 1, ReadWriteMode, I2C3TIMEOUTRBase> ;
    using FieldValues = I2C3_TIMEOUTR_TEXTEN_Values<I2C3::TIMEOUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMEOUTRPack  = Register<0x40007814, 32, ReadWriteMode, I2C3TIMEOUTRBase, T...> ;

  struct I2C3ISRBase {} ;

  struct ISR : public RegisterBase<0x40007818, 32, ReadWriteMode>
  {
    using ADDCODE = I2C3_ISR_ADDCODE_Values<I2C3::ISR, 17, 7, ReadMode, I2C3ISRBase> ;
    using DIR = I2C3_ISR_DIR_Values<I2C3::ISR, 16, 1, ReadMode, I2C3ISRBase> ;
    using BUSY = I2C3_ISR_BUSY_Values<I2C3::ISR, 15, 1, ReadMode, I2C3ISRBase> ;
    using ALERT = I2C3_ISR_ALERT_Values<I2C3::ISR, 13, 1, ReadMode, I2C3ISRBase> ;
    using TIMEOUT = I2C3_ISR_TIMEOUT_Values<I2C3::ISR, 12, 1, ReadMode, I2C3ISRBase> ;
    using PECERR = I2C3_ISR_PECERR_Values<I2C3::ISR, 11, 1, ReadMode, I2C3ISRBase> ;
    using OVR = I2C3_ISR_OVR_Values<I2C3::ISR, 10, 1, ReadMode, I2C3ISRBase> ;
    using ARLO = I2C3_ISR_ARLO_Values<I2C3::ISR, 9, 1, ReadMode, I2C3ISRBase> ;
    using BERR = I2C3_ISR_BERR_Values<I2C3::ISR, 8, 1, ReadMode, I2C3ISRBase> ;
    using TCR = I2C3_ISR_TCR_Values<I2C3::ISR, 7, 1, ReadMode, I2C3ISRBase> ;
    using TC = I2C3_ISR_TC_Values<I2C3::ISR, 6, 1, ReadMode, I2C3ISRBase> ;
    using STOPF = I2C3_ISR_STOPF_Values<I2C3::ISR, 5, 1, ReadMode, I2C3ISRBase> ;
    using NACKF = I2C3_ISR_NACKF_Values<I2C3::ISR, 4, 1, ReadMode, I2C3ISRBase> ;
    using ADDR = I2C3_ISR_ADDR_Values<I2C3::ISR, 3, 1, ReadMode, I2C3ISRBase> ;
    using RXNE = I2C3_ISR_RXNE_Values<I2C3::ISR, 2, 1, ReadMode, I2C3ISRBase> ;
    using TXIS = I2C3_ISR_TXIS_Values<I2C3::ISR, 1, 1, ReadWriteMode, I2C3ISRBase> ;
    using TXE = I2C3_ISR_TXE_Values<I2C3::ISR, 0, 1, ReadWriteMode, I2C3ISRBase> ;
    using FieldValues = I2C3_ISR_TXE_Values<I2C3::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40007818, 32, ReadWriteMode, I2C3ISRBase, T...> ;

  struct I2C3ICRBase {} ;

  struct ICR : public RegisterBase<0x4000781C, 32, WriteMode>
  {
    using ALERTCF = I2C3_ICR_ALERTCF_Values<I2C3::ICR, 13, 1, WriteMode, I2C3ICRBase> ;
    using TIMOUTCF = I2C3_ICR_TIMOUTCF_Values<I2C3::ICR, 12, 1, WriteMode, I2C3ICRBase> ;
    using PECCF = I2C3_ICR_PECCF_Values<I2C3::ICR, 11, 1, WriteMode, I2C3ICRBase> ;
    using OVRCF = I2C3_ICR_OVRCF_Values<I2C3::ICR, 10, 1, WriteMode, I2C3ICRBase> ;
    using ARLOCF = I2C3_ICR_ARLOCF_Values<I2C3::ICR, 9, 1, WriteMode, I2C3ICRBase> ;
    using BERRCF = I2C3_ICR_BERRCF_Values<I2C3::ICR, 8, 1, WriteMode, I2C3ICRBase> ;
    using STOPCF = I2C3_ICR_STOPCF_Values<I2C3::ICR, 5, 1, WriteMode, I2C3ICRBase> ;
    using NACKCF = I2C3_ICR_NACKCF_Values<I2C3::ICR, 4, 1, WriteMode, I2C3ICRBase> ;
    using ADDRCF = I2C3_ICR_ADDRCF_Values<I2C3::ICR, 3, 1, WriteMode, I2C3ICRBase> ;
    using FieldValues = I2C3_ICR_ADDRCF_Values<I2C3::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x4000781C, 32, WriteMode, I2C3ICRBase, T...> ;

  struct I2C3PECRBase {} ;

  struct PECR : public RegisterBase<0x40007820, 32, ReadMode>
  {
    using PEC = I2C3_PECR_PEC_Values<I2C3::PECR, 0, 8, ReadMode, I2C3PECRBase> ;
    using FieldValues = I2C3_PECR_PEC_Values<I2C3::PECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PECRPack  = Register<0x40007820, 32, ReadMode, I2C3PECRBase, T...> ;

  struct I2C3RXDRBase {} ;

  struct RXDR : public RegisterBase<0x40007824, 32, ReadMode>
  {
    using RXDATA = I2C3_RXDR_RXDATA_Values<I2C3::RXDR, 0, 8, ReadMode, I2C3RXDRBase> ;
    using FieldValues = I2C3_RXDR_RXDATA_Values<I2C3::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x40007824, 32, ReadMode, I2C3RXDRBase, T...> ;

  struct I2C3TXDRBase {} ;

  struct TXDR : public RegisterBase<0x40007828, 32, ReadWriteMode>
  {
    using TXDATA = I2C3_TXDR_TXDATA_Values<I2C3::TXDR, 0, 8, ReadWriteMode, I2C3TXDRBase> ;
    using FieldValues = I2C3_TXDR_TXDATA_Values<I2C3::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40007828, 32, ReadWriteMode, I2C3TXDRBase, T...> ;

} ;

#endif //#if !defined(I2C3REGISTERS_HPP)
