/*******************************************************************************
* Filename      : crcregisters.hpp
*
* Details       : Cryptographic processor. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(CRCREGISTERS_HPP)
#define CRCREGISTERS_HPP

#include "crcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CRC
{
  struct CRCDRBase {} ;

  struct DR : public RegisterBase<0x40023000, 32, ReadWriteMode>
  {
    using DRField = CRC_DR_DR_Values<CRC::DR, 0, 32, ReadWriteMode, CRCDRBase> ;
    using FieldValues = CRC_DR_DR_Values<CRC::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40023000, 32, ReadWriteMode, CRCDRBase, T...> ;

  struct CRCIDRBase {} ;

  struct IDR : public RegisterBase<0x40023004, 32, ReadWriteMode>
  {
    using IDRField = CRC_IDR_IDR_Values<CRC::IDR, 0, 8, ReadWriteMode, CRCIDRBase> ;
    using FieldValues = CRC_IDR_IDR_Values<CRC::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40023004, 32, ReadWriteMode, CRCIDRBase, T...> ;

  struct CRCCRBase {} ;

  struct CR : public RegisterBase<0x40023008, 32, WriteMode>
  {
    using CRField = CRC_CR_CR_Values<CRC::CR, 0, 1, WriteMode, CRCCRBase> ;
    using FieldValues = CRC_CR_CR_Values<CRC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40023008, 32, WriteMode, CRCCRBase, T...> ;

} ;

#endif //#if !defined(CRCREGISTERS_HPP)
