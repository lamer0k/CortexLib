/*******************************************************************************
* Filename      : crcregisters.hpp
*
* Details       : cyclic redundancy check. This header file is auto-generated
*                 for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "crcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CRC
{
  struct CRCCRC32DATBase {} ;

  struct CRC32DAT : public RegisterBase<0x40023000, 32, ReadWriteMode>
  {
    using CRC32DATField = CRC_CRC32DAT_CRC32DAT_Values<CRC::CRC32DAT, 0, 32, ReadWriteMode, CRCCRC32DATBase> ;
    using FieldValues = CRC_CRC32DAT_CRC32DAT_Values<CRC::CRC32DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32DATPack  = Register<0x40023000, 32, ReadWriteMode, CRCCRC32DATBase, T...> ;

  struct CRCCRC32IDATBase {} ;

  struct CRC32IDAT : public RegisterBase<0x40023004, 32, ReadWriteMode>
  {
    using CRC32IDATField = CRC_CRC32IDAT_CRC32IDAT_Values<CRC::CRC32IDAT, 0, 8, ReadWriteMode, CRCCRC32IDATBase> ;
    using FieldValues = CRC_CRC32IDAT_CRC32IDAT_Values<CRC::CRC32IDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32IDATPack  = Register<0x40023004, 32, ReadWriteMode, CRCCRC32IDATBase, T...> ;

  struct CRCCRC32CTRLBase {} ;

  struct CRC32CTRL : public RegisterBase<0x40023008, 32, ReadWriteMode>
  {
    using RESET = CRC_CRC32CTRL_RESET_Values<CRC::CRC32CTRL, 0, 1, ReadWriteMode, CRCCRC32CTRLBase> ;
    using FieldValues = CRC_CRC32CTRL_RESET_Values<CRC::CRC32CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC32CTRLPack  = Register<0x40023008, 32, ReadWriteMode, CRCCRC32CTRLBase, T...> ;

  struct CRCCRC16CTRLBase {} ;

  struct CRC16CTRL : public RegisterBase<0x4002300C, 32, ReadWriteMode>
  {
    using ENDHL = CRC_CRC16CTRL_ENDHL_Values<CRC::CRC16CTRL, 1, 1, ReadWriteMode, CRCCRC16CTRLBase> ;
    using CLR = CRC_CRC16CTRL_CLR_Values<CRC::CRC16CTRL, 2, 1, ReadWriteMode, CRCCRC16CTRLBase> ;
    using FieldValues = CRC_CRC16CTRL_CLR_Values<CRC::CRC16CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC16CTRLPack  = Register<0x4002300C, 32, ReadWriteMode, CRCCRC16CTRLBase, T...> ;

  struct CRCCRC16DATBase {} ;

  struct CRC16DAT : public RegisterBase<0x40023010, 32, ReadWriteMode>
  {
    using CRC16DATField = CRC_CRC16DAT_CRC16DAT_Values<CRC::CRC16DAT, 0, 8, ReadWriteMode, CRCCRC16DATBase> ;
    using FieldValues = CRC_CRC16DAT_CRC16DAT_Values<CRC::CRC16DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC16DATPack  = Register<0x40023010, 32, ReadWriteMode, CRCCRC16DATBase, T...> ;

  struct CRCCRC16DBase {} ;

  struct CRC16D : public RegisterBase<0x40023014, 32, ReadWriteMode>
  {
    using CRC16DField = CRC_CRC16D_CRC16D_Values<CRC::CRC16D, 0, 16, ReadWriteMode, CRCCRC16DBase> ;
    using FieldValues = CRC_CRC16D_CRC16D_Values<CRC::CRC16D, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC16DPack  = Register<0x40023014, 32, ReadWriteMode, CRCCRC16DBase, T...> ;

  struct CRCLRCBase {} ;

  struct LRC : public RegisterBase<0x40023018, 32, ReadWriteMode>
  {
    using LRCDAT = CRC_LRC_LRCDAT_Values<CRC::LRC, 0, 8, ReadWriteMode, CRCLRCBase> ;
    using FieldValues = CRC_LRC_LRCDAT_Values<CRC::LRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LRCPack  = Register<0x40023018, 32, ReadWriteMode, CRCLRCBase, T...> ;

} ;

