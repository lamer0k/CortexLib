/*******************************************************************************
* Filename      : aesregisters.hpp
*
* Details       : Advanced encryption standard hardware accelerator. This header
*                 file is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(AESREGISTERS_HPP)
#define AESREGISTERS_HPP

#include "aesfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AES
{
  struct AESCRBase {} ;

  struct CR : public RegisterBase<0x50060000, 32, ReadWriteMode>
  {
    using DMAOUTEN = AES_CR_DMAOUTEN_Values<AES::CR, 12, 1, ReadWriteMode, AESCRBase> ;
    using DMAINEN = AES_CR_DMAINEN_Values<AES::CR, 11, 1, ReadWriteMode, AESCRBase> ;
    using ERRIE = AES_CR_ERRIE_Values<AES::CR, 10, 1, ReadWriteMode, AESCRBase> ;
    using CCFIE = AES_CR_CCFIE_Values<AES::CR, 9, 1, ReadWriteMode, AESCRBase> ;
    using ERRC = AES_CR_ERRC_Values<AES::CR, 8, 1, ReadWriteMode, AESCRBase> ;
    using CCFC = AES_CR_CCFC_Values<AES::CR, 7, 1, ReadWriteMode, AESCRBase> ;
    using CHMOD = AES_CR_CHMOD_Values<AES::CR, 5, 2, ReadWriteMode, AESCRBase> ;
    using MODE = AES_CR_MODE_Values<AES::CR, 3, 2, ReadWriteMode, AESCRBase> ;
    using DATATYPE = AES_CR_DATATYPE_Values<AES::CR, 1, 2, ReadWriteMode, AESCRBase> ;
    using EN = AES_CR_EN_Values<AES::CR, 0, 1, ReadWriteMode, AESCRBase> ;
    using FieldValues = AES_CR_EN_Values<AES::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50060000, 32, ReadWriteMode, AESCRBase, T...> ;

  struct AESSRBase {} ;

  struct SR : public RegisterBase<0x50060004, 32, ReadMode>
  {
    using WRERR = AES_SR_WRERR_Values<AES::SR, 2, 1, ReadMode, AESSRBase> ;
    using RDERR = AES_SR_RDERR_Values<AES::SR, 1, 1, ReadMode, AESSRBase> ;
    using CCF = AES_SR_CCF_Values<AES::SR, 0, 1, ReadMode, AESSRBase> ;
    using FieldValues = AES_SR_CCF_Values<AES::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x50060004, 32, ReadMode, AESSRBase, T...> ;

  struct AESDINRBase {} ;

  struct DINR : public RegisterBase<0x50060008, 32, ReadWriteMode>
  {
    using AES_DINR = AES_DINR_AES_DINR_Values<AES::DINR, 0, 32, ReadWriteMode, AESDINRBase> ;
    using FieldValues = AES_DINR_AES_DINR_Values<AES::DINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DINRPack  = Register<0x50060008, 32, ReadWriteMode, AESDINRBase, T...> ;

  struct AESDOUTRBase {} ;

  struct DOUTR : public RegisterBase<0x5006000C, 32, ReadMode>
  {
    using AES_DOUTR = AES_DOUTR_AES_DOUTR_Values<AES::DOUTR, 0, 32, ReadMode, AESDOUTRBase> ;
    using FieldValues = AES_DOUTR_AES_DOUTR_Values<AES::DOUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOUTRPack  = Register<0x5006000C, 32, ReadMode, AESDOUTRBase, T...> ;

  struct AESKEYR0Base {} ;

  struct KEYR0 : public RegisterBase<0x50060010, 32, ReadWriteMode>
  {
    using AES_KEYR0 = AES_KEYR0_AES_KEYR0_Values<AES::KEYR0, 0, 32, ReadWriteMode, AESKEYR0Base> ;
    using FieldValues = AES_KEYR0_AES_KEYR0_Values<AES::KEYR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR0Pack  = Register<0x50060010, 32, ReadWriteMode, AESKEYR0Base, T...> ;

  struct AESKEYR1Base {} ;

  struct KEYR1 : public RegisterBase<0x50060014, 32, ReadWriteMode>
  {
    using AES_KEYR1 = AES_KEYR1_AES_KEYR1_Values<AES::KEYR1, 0, 32, ReadWriteMode, AESKEYR1Base> ;
    using FieldValues = AES_KEYR1_AES_KEYR1_Values<AES::KEYR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR1Pack  = Register<0x50060014, 32, ReadWriteMode, AESKEYR1Base, T...> ;

  struct AESKEYR2Base {} ;

  struct KEYR2 : public RegisterBase<0x50060018, 32, ReadWriteMode>
  {
    using AES_KEYR2 = AES_KEYR2_AES_KEYR2_Values<AES::KEYR2, 0, 32, ReadWriteMode, AESKEYR2Base> ;
    using FieldValues = AES_KEYR2_AES_KEYR2_Values<AES::KEYR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR2Pack  = Register<0x50060018, 32, ReadWriteMode, AESKEYR2Base, T...> ;

  struct AESKEYR3Base {} ;

  struct KEYR3 : public RegisterBase<0x5006001C, 32, ReadWriteMode>
  {
    using AES_KEYR3 = AES_KEYR3_AES_KEYR3_Values<AES::KEYR3, 0, 32, ReadWriteMode, AESKEYR3Base> ;
    using FieldValues = AES_KEYR3_AES_KEYR3_Values<AES::KEYR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR3Pack  = Register<0x5006001C, 32, ReadWriteMode, AESKEYR3Base, T...> ;

  struct AESIVR0Base {} ;

  struct IVR0 : public RegisterBase<0x50060020, 32, ReadWriteMode>
  {
    using AES_IVR0 = AES_IVR0_AES_IVR0_Values<AES::IVR0, 0, 32, ReadWriteMode, AESIVR0Base> ;
    using FieldValues = AES_IVR0_AES_IVR0_Values<AES::IVR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR0Pack  = Register<0x50060020, 32, ReadWriteMode, AESIVR0Base, T...> ;

  struct AESIVR1Base {} ;

  struct IVR1 : public RegisterBase<0x50060024, 32, ReadWriteMode>
  {
    using AES_IVR1 = AES_IVR1_AES_IVR1_Values<AES::IVR1, 0, 32, ReadWriteMode, AESIVR1Base> ;
    using FieldValues = AES_IVR1_AES_IVR1_Values<AES::IVR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR1Pack  = Register<0x50060024, 32, ReadWriteMode, AESIVR1Base, T...> ;

  struct AESIVR2Base {} ;

  struct IVR2 : public RegisterBase<0x50060028, 32, ReadWriteMode>
  {
    using AES_IVR2 = AES_IVR2_AES_IVR2_Values<AES::IVR2, 0, 32, ReadWriteMode, AESIVR2Base> ;
    using FieldValues = AES_IVR2_AES_IVR2_Values<AES::IVR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR2Pack  = Register<0x50060028, 32, ReadWriteMode, AESIVR2Base, T...> ;

  struct AESIVR3Base {} ;

  struct IVR3 : public RegisterBase<0x5006002C, 32, ReadWriteMode>
  {
    using AES_IVR3 = AES_IVR3_AES_IVR3_Values<AES::IVR3, 0, 32, ReadWriteMode, AESIVR3Base> ;
    using FieldValues = AES_IVR3_AES_IVR3_Values<AES::IVR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR3Pack  = Register<0x5006002C, 32, ReadWriteMode, AESIVR3Base, T...> ;

} ;

#endif //#if !defined(AESREGISTERS_HPP)
