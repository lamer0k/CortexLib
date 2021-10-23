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

#include "aes256fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AES256
{
  struct AES256AESACTL0Base {} ;

  struct AESACTL0 : public RegisterBase<0x40003C00, 16, ReadWriteMode>
  {
    using AESOPx = AES256_AESACTL0_AESOPx_Values<AES256::AESACTL0, 0, 2, ReadWriteMode, AES256AESACTL0Base> ;
    using AESKLx = AES256_AESACTL0_AESKLx_Values<AES256::AESACTL0, 2, 2, ReadWriteMode, AES256AESACTL0Base> ;
    using AESCMx = AES256_AESACTL0_AESCMx_Values<AES256::AESACTL0, 5, 2, ReadWriteMode, AES256AESACTL0Base> ;
    using AESSWRST = AES256_AESACTL0_AESSWRST_Values<AES256::AESACTL0, 7, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESRDYIFG = AES256_AESACTL0_AESRDYIFG_Values<AES256::AESACTL0, 8, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESERRFG = AES256_AESACTL0_AESERRFG_Values<AES256::AESACTL0, 11, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESRDYIE = AES256_AESACTL0_AESRDYIE_Values<AES256::AESACTL0, 12, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using AESCMEN = AES256_AESACTL0_AESCMEN_Values<AES256::AESACTL0, 15, 1, ReadWriteMode, AES256AESACTL0Base> ;
    using FieldValues = AES256_AESACTL0_AESCMEN_Values<AES256::AESACTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESACTL0Pack  = Register<0x40003C00, 16, ReadWriteMode, AES256AESACTL0Base, T...> ;

  struct AES256AESACTL1Base {} ;

  struct AESACTL1 : public RegisterBase<0x40003C02, 16, ReadWriteMode>
  {
    using AESBLKCNTx = AES256_AESACTL1_AESBLKCNTx_Values<AES256::AESACTL1, 0, 8, ReadWriteMode, AES256AESACTL1Base> ;
    using FieldValues = AES256_AESACTL1_AESBLKCNTx_Values<AES256::AESACTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESACTL1Pack  = Register<0x40003C02, 16, ReadWriteMode, AES256AESACTL1Base, T...> ;

  struct AES256AESASTATBase {} ;

  struct AESASTAT : public RegisterBase<0x40003C04, 16, ReadWriteMode>
  {
    using AESBUSY = AES256_AESASTAT_AESBUSY_Values<AES256::AESASTAT, 0, 1, ReadWriteMode, AES256AESASTATBase> ;
    using AESKEYWR = AES256_AESASTAT_AESKEYWR_Values<AES256::AESASTAT, 1, 1, ReadWriteMode, AES256AESASTATBase> ;
    using AESDINWR = AES256_AESASTAT_AESDINWR_Values<AES256::AESASTAT, 2, 1, ReadWriteMode, AES256AESASTATBase> ;
    using AESDOUTRD = AES256_AESASTAT_AESDOUTRD_Values<AES256::AESASTAT, 3, 1, ReadMode, AES256AESASTATBase> ;
    using AESKEYCNTx = AES256_AESASTAT_AESKEYCNTx_Values<AES256::AESASTAT, 4, 4, ReadMode, AES256AESASTATBase> ;
    using AESDINCNTx = AES256_AESASTAT_AESDINCNTx_Values<AES256::AESASTAT, 8, 4, ReadMode, AES256AESASTATBase> ;
    using AESDOUTCNTx = AES256_AESASTAT_AESDOUTCNTx_Values<AES256::AESASTAT, 12, 4, ReadMode, AES256AESASTATBase> ;
    using FieldValues = AES256_AESASTAT_AESDOUTCNTx_Values<AES256::AESASTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESASTATPack  = Register<0x40003C04, 16, ReadWriteMode, AES256AESASTATBase, T...> ;

  struct AES256AESAKEYBase {} ;

  struct AESAKEY : public RegisterBase<0x40003C06, 16, WriteMode>
  {
    using AESKEY0x = AES256_AESAKEY_AESKEY0x_Values<AES256::AESAKEY, 0, 8, WriteMode, AES256AESAKEYBase> ;
    using AESKEY1x = AES256_AESAKEY_AESKEY1x_Values<AES256::AESAKEY, 8, 8, WriteMode, AES256AESAKEYBase> ;
    using FieldValues = AES256_AESAKEY_AESKEY1x_Values<AES256::AESAKEY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESAKEYPack  = Register<0x40003C06, 16, WriteMode, AES256AESAKEYBase, T...> ;

  struct AES256AESADINBase {} ;

  struct AESADIN : public RegisterBase<0x40003C08, 16, WriteMode>
  {
    using AESDIN0x = AES256_AESADIN_AESDIN0x_Values<AES256::AESADIN, 0, 8, WriteMode, AES256AESADINBase> ;
    using AESDIN1x = AES256_AESADIN_AESDIN1x_Values<AES256::AESADIN, 8, 8, WriteMode, AES256AESADINBase> ;
    using FieldValues = AES256_AESADIN_AESDIN1x_Values<AES256::AESADIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESADINPack  = Register<0x40003C08, 16, WriteMode, AES256AESADINBase, T...> ;

  struct AES256AESADOUTBase {} ;

  struct AESADOUT : public RegisterBase<0x40003C0A, 16, WriteMode>
  {
    using AESDOUT0x = AES256_AESADOUT_AESDOUT0x_Values<AES256::AESADOUT, 0, 8, WriteMode, AES256AESADOUTBase> ;
    using AESDOUT1x = AES256_AESADOUT_AESDOUT1x_Values<AES256::AESADOUT, 8, 8, WriteMode, AES256AESADOUTBase> ;
    using FieldValues = AES256_AESADOUT_AESDOUT1x_Values<AES256::AESADOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESADOUTPack  = Register<0x40003C0A, 16, WriteMode, AES256AESADOUTBase, T...> ;

  struct AES256AESAXDINBase {} ;

  struct AESAXDIN : public RegisterBase<0x40003C0C, 16, WriteMode>
  {
    using AESXDIN0x = AES256_AESAXDIN_AESXDIN0x_Values<AES256::AESAXDIN, 0, 8, WriteMode, AES256AESAXDINBase> ;
    using AESXDIN1x = AES256_AESAXDIN_AESXDIN1x_Values<AES256::AESAXDIN, 8, 8, WriteMode, AES256AESAXDINBase> ;
    using FieldValues = AES256_AESAXDIN_AESXDIN1x_Values<AES256::AESAXDIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESAXDINPack  = Register<0x40003C0C, 16, WriteMode, AES256AESAXDINBase, T...> ;

  struct AES256AESAXINBase {} ;

  struct AESAXIN : public RegisterBase<0x40003C0E, 16, WriteMode>
  {
    using AESXIN0x = AES256_AESAXIN_AESXIN0x_Values<AES256::AESAXIN, 0, 8, WriteMode, AES256AESAXINBase> ;
    using AESXIN1x = AES256_AESAXIN_AESXIN1x_Values<AES256::AESAXIN, 8, 8, WriteMode, AES256AESAXINBase> ;
    using FieldValues = AES256_AESAXIN_AESXIN1x_Values<AES256::AESAXIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AESAXINPack  = Register<0x40003C0E, 16, WriteMode, AES256AESAXINBase, T...> ;

} ;

#endif //#if !defined(AES256REGISTERS_HPP)
