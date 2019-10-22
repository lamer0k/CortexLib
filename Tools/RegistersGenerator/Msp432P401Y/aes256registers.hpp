/*******************************************************************************
* Filename      : aes256registers.hpp
*
* Details       : AES256. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(AES256REGISTERS_HPP)
#define AES256REGISTERS_HPP

#include "aes256bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AES256
{
  struct AES256AESACTL0Base {} ;

  struct AESACTL0 : public RegisterBase<0x40003C00, 16, ReadWriteMode>
  {
    using AESOPx = AES_AESACTL_AESOPx_Values<AES256::AESACTL0, 0, 2, ReadWriteMode, AES256AESACTL0Base> ;
    using AESKLx = AES_AESACTL_AESKLx_Values<AES256::AESACTL0, 2, 2, ReadWriteMode, AES256AESACTL0Base> ;
    using AESCMx = AES_AESACTL_AESCMx_Values<AES256::AESACTL0, 5, 2, ReadWriteMode, AES256AESACTL0Base> ;
    using AESSWRST = AES_AESACTL_AESSWRST_Values<AES256::AESACTL0, 7, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESRDYIFG = AES_AESACTL_AESRDYIFG_Values<AES256::AESACTL0, 8, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESERRFG = AES_AESACTL_AESERRFG_Values<AES256::AESACTL0, 11, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESRDYIE = AES_AESACTL_AESRDYIE_Values<AES256::AESACTL0, 12, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESCMEN = AES_AESACTL_AESCMEN_Values<AES256::AESACTL0, 15, 1, ReadWriteMode, AES256AESACTL0Base> ;
  } ;

  template<typename... T> 
  using AESACTL0Pack  = Register<0x40003C00, 16, ReadWriteMode, AES256AESACTL0Base, T...> ;

  struct AES256AESACTL1Base {} ;

  struct AESACTL1 : public RegisterBase<0x40003C02, 16, ReadWriteMode>
  {
    using AESBLKCNTx = AES_AESACTL_AESBLKCNTx_Values<AES256::AESACTL1, 0, 8, ReadWriteMode, AES256AESACTL1Base> ;
  } ;

  template<typename... T> 
  using AESACTL1Pack  = Register<0x40003C02, 16, ReadWriteMode, AES256AESACTL1Base, T...> ;

  struct AES256AESASTATBase {} ;

  struct AESASTAT : public RegisterBase<0x40003C04, 16, ReadWriteMode>
  {
    using AESBUSY = AES_AESASTAT_AESBUSY_Values<AES256::AESASTAT, 0, 1, ReadWriteMode, AES256AESASTATBase> ;
    using AESKEYWR = AES_AESASTAT_AESKEYWR_Values<AES256::AESASTAT, 1, 1, ReadWriteMode, AES256AESASTATBase> ;
    using AESDINWR = AES_AESASTAT_AESDINWR_Values<AES256::AESASTAT, 2, 1, ReadWriteMode, AES256AESASTATBase> ;
    using AESDOUTRD = AES_AESASTAT_AESDOUTRD_Values<AES256::AESASTAT, 3, 1, ReadMode, AES256AESASTATBase> ;
    using AESKEYCNTx = AES_AESASTAT_AESKEYCNTx_Values<AES256::AESASTAT, 4, 4, ReadMode, AES256AESASTATBase> ;
    using AESDINCNTx = AES_AESASTAT_AESDINCNTx_Values<AES256::AESASTAT, 8, 4, ReadMode, AES256AESASTATBase> ;
    using AESDOUTCNTx = AES_AESASTAT_AESDOUTCNTx_Values<AES256::AESASTAT, 12, 4, ReadMode, AES256AESASTATBase> ;
  } ;

  template<typename... T> 
  using AESASTATPack  = Register<0x40003C04, 16, ReadWriteMode, AES256AESASTATBase, T...> ;

  struct AES256AESAKEYBase {} ;

  struct AESAKEY : public RegisterBase<0x40003C06, 16, WriteMode>
  {
    using AESKEY0x = AES_AESAKEY_AESKEYx_Values<AES256::AESAKEY, 0, 8, WriteMode, AES256AESAKEYBase> ;
    using AESKEY1x = AES_AESAKEY_AESKEYx_Values<AES256::AESAKEY, 8, 8, WriteMode, AES256AESAKEYBase> ;
  } ;

  template<typename... T> 
  using AESAKEYPack  = Register<0x40003C06, 16, WriteMode, AES256AESAKEYBase, T...> ;

  struct AES256AESADINBase {} ;

  struct AESADIN : public RegisterBase<0x40003C08, 16, WriteMode>
  {
    using AESDIN0x = AES_AESADIN_AESDINx_Values<AES256::AESADIN, 0, 8, WriteMode, AES256AESADINBase> ;
    using AESDIN1x = AES_AESADIN_AESDINx_Values<AES256::AESADIN, 8, 8, WriteMode, AES256AESADINBase> ;
  } ;

  template<typename... T> 
  using AESADINPack  = Register<0x40003C08, 16, WriteMode, AES256AESADINBase, T...> ;

  struct AES256AESADOUTBase {} ;

  struct AESADOUT : public RegisterBase<0x40003C0A, 16, WriteMode>
  {
    using AESDOUT0x = AES_AESADOUT_AESDOUTx_Values<AES256::AESADOUT, 0, 8, WriteMode, AES256AESADOUTBase> ;
    using AESDOUT1x = AES_AESADOUT_AESDOUTx_Values<AES256::AESADOUT, 8, 8, WriteMode, AES256AESADOUTBase> ;
  } ;

  template<typename... T> 
  using AESADOUTPack  = Register<0x40003C0A, 16, WriteMode, AES256AESADOUTBase, T...> ;

  struct AES256AESAXDINBase {} ;

  struct AESAXDIN : public RegisterBase<0x40003C0C, 16, WriteMode>
  {
    using AESXDIN0x = AES_AESAXDIN_AESXDINx_Values<AES256::AESAXDIN, 0, 8, WriteMode, AES256AESAXDINBase> ;
    using AESXDIN1x = AES_AESAXDIN_AESXDINx_Values<AES256::AESAXDIN, 8, 8, WriteMode, AES256AESAXDINBase> ;
  } ;

  template<typename... T> 
  using AESAXDINPack  = Register<0x40003C0C, 16, WriteMode, AES256AESAXDINBase, T...> ;

  struct AES256AESAXINBase {} ;

  struct AESAXIN : public RegisterBase<0x40003C0E, 16, WriteMode>
  {
    using AESXIN0x = AES_AESAXIN_AESXINx_Values<AES256::AESAXIN, 0, 8, WriteMode, AES256AESAXINBase> ;
    using AESXIN1x = AES_AESAXIN_AESXINx_Values<AES256::AESAXIN, 8, 8, WriteMode, AES256AESAXINBase> ;
  } ;

  template<typename... T> 
  using AESAXINPack  = Register<0x40003C0E, 16, WriteMode, AES256AESAXINBase, T...> ;

} ;

#endif //#if !defined(AES256REGISTERS_HPP)
