/*******************************************************************************
* Filename      : crc32registers.hpp
*
* Details       : CRC32. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(CRC32REGISTERS_HPP)
#define CRC32REGISTERS_HPP

#include "crc32bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CRC32
{
  struct CRC32CRC32DIBase {} ;

  struct CRC32DI : public RegisterBase<0x40004000, 16, ReadWriteMode>
  {
    using CRC32DIField = CRC_CRCDI_CRCDI_Values<CRC32::CRC32DI, 0, 16, ReadWriteMode, CRC32CRC32DIBase> ;
  } ;

  template<typename... T> 
  using CRC32DIPack  = Register<0x40004000, 16, ReadWriteMode, CRC32CRC32DIBase, T...> ;

  struct CRC32CRC32DIRBBase {} ;

  struct CRC32DIRB : public RegisterBase<0x40004004, 16, ReadWriteMode>
  {
    using CRC32DIRBField = CRC_CRCDIRB_CRCDIRB_Values<CRC32::CRC32DIRB, 0, 16, ReadWriteMode, CRC32CRC32DIRBBase> ;
  } ;

  template<typename... T> 
  using CRC32DIRBPack  = Register<0x40004004, 16, ReadWriteMode, CRC32CRC32DIRBBase, T...> ;

  struct CRC32CRC32INIRES_LOBase {} ;

  struct CRC32INIRES_LO : public RegisterBase<0x40004008, 16, ReadWriteMode>
  {
    using CRC32INIRES_LOField = CRC_CRCINIRES_LO_CRCINIRES_LO_Values<CRC32::CRC32INIRES_LO, 0, 16, ReadWriteMode, CRC32CRC32INIRES_LOBase> ;
  } ;

  template<typename... T> 
  using CRC32INIRES_LOPack  = Register<0x40004008, 16, ReadWriteMode, CRC32CRC32INIRES_LOBase, T...> ;

  struct CRC32CRC32INIRES_HIBase {} ;

  struct CRC32INIRES_HI : public RegisterBase<0x4000400A, 16, ReadWriteMode>
  {
    using CRC32INIRES_HIField = CRC_CRCINIRES_HI_CRCINIRES_HI_Values<CRC32::CRC32INIRES_HI, 0, 16, ReadWriteMode, CRC32CRC32INIRES_HIBase> ;
  } ;

  template<typename... T> 
  using CRC32INIRES_HIPack  = Register<0x4000400A, 16, ReadWriteMode, CRC32CRC32INIRES_HIBase, T...> ;

  struct CRC32CRC32RESR_LOBase {} ;

  struct CRC32RESR_LO : public RegisterBase<0x4000400C, 16, ReadWriteMode>
  {
    using CRC32RESR_LOField = CRC_CRCRESR_LO_CRCRESR_LO_Values<CRC32::CRC32RESR_LO, 0, 16, ReadWriteMode, CRC32CRC32RESR_LOBase> ;
  } ;

  template<typename... T> 
  using CRC32RESR_LOPack  = Register<0x4000400C, 16, ReadWriteMode, CRC32CRC32RESR_LOBase, T...> ;

  struct CRC32CRC32RESR_HIBase {} ;

  struct CRC32RESR_HI : public RegisterBase<0x4000400E, 16, ReadWriteMode>
  {
    using CRC32RESR_HIField = CRC_CRCRESR_HI_CRCRESR_HI_Values<CRC32::CRC32RESR_HI, 0, 16, ReadWriteMode, CRC32CRC32RESR_HIBase> ;
  } ;

  template<typename... T> 
  using CRC32RESR_HIPack  = Register<0x4000400E, 16, ReadWriteMode, CRC32CRC32RESR_HIBase, T...> ;

  struct CRC32CRC16DIBase {} ;

  struct CRC16DI : public RegisterBase<0x40004010, 16, ReadWriteMode>
  {
    using CRC16DIField = CRC_CRCDI_CRCDI_Values<CRC32::CRC16DI, 0, 16, ReadWriteMode, CRC32CRC16DIBase> ;
  } ;

  template<typename... T> 
  using CRC16DIPack  = Register<0x40004010, 16, ReadWriteMode, CRC32CRC16DIBase, T...> ;

  struct CRC32CRC16DIRBBase {} ;

  struct CRC16DIRB : public RegisterBase<0x40004014, 16, ReadWriteMode>
  {
    using CRC16DIRBField = CRC_CRCDIRB_CRCDIRB_Values<CRC32::CRC16DIRB, 0, 16, ReadWriteMode, CRC32CRC16DIRBBase> ;
  } ;

  template<typename... T> 
  using CRC16DIRBPack  = Register<0x40004014, 16, ReadWriteMode, CRC32CRC16DIRBBase, T...> ;

  struct CRC32CRC16INIRESBase {} ;

  struct CRC16INIRES : public RegisterBase<0x40004018, 16, ReadWriteMode>
  {
    using CRC16INIRESField = CRC_CRCINIRES_CRCINIRES_Values<CRC32::CRC16INIRES, 0, 16, ReadWriteMode, CRC32CRC16INIRESBase> ;
  } ;

  template<typename... T> 
  using CRC16INIRESPack  = Register<0x40004018, 16, ReadWriteMode, CRC32CRC16INIRESBase, T...> ;

  struct CRC32CRC16RESRBase {} ;

  struct CRC16RESR : public RegisterBase<0x4000401E, 16, ReadWriteMode>
  {
    using CRC16RESRField = CRC_CRCRESR_CRCRESR_Values<CRC32::CRC16RESR, 0, 16, ReadWriteMode, CRC32CRC16RESRBase> ;
  } ;

  template<typename... T> 
  using CRC16RESRPack  = Register<0x4000401E, 16, ReadWriteMode, CRC32CRC16RESRBase, T...> ;

} ;

#endif //#if !defined(CRC32REGISTERS_HPP)
