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

#include "crcbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Crc
{
  struct Dr : public RegisterBase<0x40023000, 32, ReadWriteMode>
  {
    using DrField = ReadWriteMode<Crc::Dr, 0, 32> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x40023000, 32, ReadWriteMode, CrcDrDrValuesBase, T...> ;

  struct Idr : public RegisterBase<0x40023004, 32, ReadWriteMode>
  {
    using IdrField = ReadWriteMode<Crc::Idr, 0, 8> ;
  } ;

  template<typename... T> 
  using IdrPack  = Register<0x40023004, 32, ReadWriteMode, CrcIdrIdrValuesBase, T...> ;

  struct Cr : public RegisterBase<0x40023008, 32, WriteMode>
  {
    using CrField = CrcCrCrValues<Crc::Cr, 0, 1, WriteMode, CrcCrCrValuesBase> ;
  } ;

  template<typename... T> 
  using CrPack  = Register<0x40023008, 32, WriteMode, CrcCrCrValuesBase, T...> ;

} ;

#endif //#if !defined(CRCREGISTERS_HPP)
