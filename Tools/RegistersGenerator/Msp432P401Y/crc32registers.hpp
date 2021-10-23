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

#include "crc32fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CRC32
{
  struct CRC32CRC32DIBase {} ;

  struct CRC32DI : public RegisterBase<0x40004000, 16, ReadWriteMode>
  {
    using CRC32DIField = CRC32_CRC32DI_CRC32DI_Values<CRC32::CRC32DI, 0, 16, ReadWriteMode, CRC32CRC32DIBase> ;
    using FieldValues = CRC32_CRC32DI_CRC32DI_Values<CRC32::CRC32DI, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32DIPack  = Register<0x40004000, 16, ReadWriteMode, CRC32CRC32DIBase, T...> ;

  struct CRC32CRC32DIRBBase {} ;

  struct CRC32DIRB : public RegisterBase<0x40004004, 16, ReadWriteMode>
  {
    using CRC32DIRBField = CRC32_CRC32DIRB_CRC32DIRB_Values<CRC32::CRC32DIRB, 0, 16, ReadWriteMode, CRC32CRC32DIRBBase> ;
    using FieldValues = CRC32_CRC32DIRB_CRC32DIRB_Values<CRC32::CRC32DIRB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32DIRBPack  = Register<0x40004004, 16, ReadWriteMode, CRC32CRC32DIRBBase, T...> ;

  struct CRC32CRC32INIRES_LOBase {} ;

  struct CRC32INIRES_LO : public RegisterBase<0x40004008, 16, ReadWriteMode>
  {
    using CRC32INIRES_LOField = CRC32_CRC32INIRES_LO_CRC32INIRES_LO_Values<CRC32::CRC32INIRES_LO, 0, 16, ReadWriteMode, CRC32CRC32INIRES_LOBase> ;
    using FieldValues = CRC32_CRC32INIRES_LO_CRC32INIRES_LO_Values<CRC32::CRC32INIRES_LO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32INIRES_LOPack  = Register<0x40004008, 16, ReadWriteMode, CRC32CRC32INIRES_LOBase, T...> ;

  struct CRC32CRC32INIRES_HIBase {} ;

  struct CRC32INIRES_HI : public RegisterBase<0x4000400A, 16, ReadWriteMode>
  {
    using CRC32INIRES_HIField = CRC32_CRC32INIRES_HI_CRC32INIRES_HI_Values<CRC32::CRC32INIRES_HI, 0, 16, ReadWriteMode, CRC32CRC32INIRES_HIBase> ;
    using FieldValues = CRC32_CRC32INIRES_HI_CRC32INIRES_HI_Values<CRC32::CRC32INIRES_HI, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32INIRES_HIPack  = Register<0x4000400A, 16, ReadWriteMode, CRC32CRC32INIRES_HIBase, T...> ;

  struct CRC32CRC32RESR_LOBase {} ;

  struct CRC32RESR_LO : public RegisterBase<0x4000400C, 16, ReadWriteMode>
  {
    using CRC32RESR_LOField = CRC32_CRC32RESR_LO_CRC32RESR_LO_Values<CRC32::CRC32RESR_LO, 0, 16, ReadWriteMode, CRC32CRC32RESR_LOBase> ;
    using FieldValues = CRC32_CRC32RESR_LO_CRC32RESR_LO_Values<CRC32::CRC32RESR_LO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32RESR_LOPack  = Register<0x4000400C, 16, ReadWriteMode, CRC32CRC32RESR_LOBase, T...> ;

  struct CRC32CRC32RESR_HIBase {} ;

  struct CRC32RESR_HI : public RegisterBase<0x4000400E, 16, ReadWriteMode>
  {
    using CRC32RESR_HIField = CRC32_CRC32RESR_HI_CRC32RESR_HI_Values<CRC32::CRC32RESR_HI, 0, 16, ReadWriteMode, CRC32CRC32RESR_HIBase> ;
    using FieldValues = CRC32_CRC32RESR_HI_CRC32RESR_HI_Values<CRC32::CRC32RESR_HI, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32RESR_HIPack  = Register<0x4000400E, 16, ReadWriteMode, CRC32CRC32RESR_HIBase, T...> ;

  struct CRC32CRC16DIBase {} ;

  struct CRC16DI : public RegisterBase<0x40004010, 16, ReadWriteMode>
  {
    using CRC16DIField = CRC32_CRC16DI_CRC16DI_Values<CRC32::CRC16DI, 0, 16, ReadWriteMode, CRC32CRC16DIBase> ;
    using FieldValues = CRC32_CRC16DI_CRC16DI_Values<CRC32::CRC16DI, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC16DIPack  = Register<0x40004010, 16, ReadWriteMode, CRC32CRC16DIBase, T...> ;

  struct CRC32CRC16DIRBBase {} ;

  struct CRC16DIRB : public RegisterBase<0x40004014, 16, ReadWriteMode>
  {
    using CRC16DIRBField = CRC32_CRC16DIRB_CRC16DIRB_Values<CRC32::CRC16DIRB, 0, 16, ReadWriteMode, CRC32CRC16DIRBBase> ;
    using FieldValues = CRC32_CRC16DIRB_CRC16DIRB_Values<CRC32::CRC16DIRB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC16DIRBPack  = Register<0x40004014, 16, ReadWriteMode, CRC32CRC16DIRBBase, T...> ;

  struct CRC32CRC16INIRESBase {} ;

  struct CRC16INIRES : public RegisterBase<0x40004018, 16, ReadWriteMode>
  {
    using CRC16INIRESField = CRC32_CRC16INIRES_CRC16INIRES_Values<CRC32::CRC16INIRES, 0, 16, ReadWriteMode, CRC32CRC16INIRESBase> ;
    using FieldValues = CRC32_CRC16INIRES_CRC16INIRES_Values<CRC32::CRC16INIRES, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC16INIRESPack  = Register<0x40004018, 16, ReadWriteMode, CRC32CRC16INIRESBase, T...> ;

  struct CRC32CRC16RESRBase {} ;

  struct CRC16RESR : public RegisterBase<0x4000401E, 16, ReadWriteMode>
  {
    using CRC16RESRField = CRC32_CRC16RESR_CRC16RESR_Values<CRC32::CRC16RESR, 0, 16, ReadWriteMode, CRC32CRC16RESRBase> ;
    using FieldValues = CRC32_CRC16RESR_CRC16RESR_Values<CRC32::CRC16RESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC16RESRPack  = Register<0x4000401E, 16, ReadWriteMode, CRC32CRC16RESRBase, T...> ;

} ;

#endif //#if !defined(CRC32REGISTERS_HPP)
