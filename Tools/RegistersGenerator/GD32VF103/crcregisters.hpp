/*******************************************************************************
* Filename      : crcregisters.hpp
*
* Details       : cyclic redundancy check calculation unit. This header file is
*                 auto-generated for GD32VF103 device.
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
  struct CRCDATABase {} ;

  struct DATA : public RegisterBase<0x40023000, 32, ReadWriteMode>
  {
    using DATAField = CRC_DATA_DATA_Values<CRC::DATA, 0, 32, ReadWriteMode, CRCDATABase> ;
    using FieldValues = CRC_DATA_DATA_Values<CRC::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40023000, 32, ReadWriteMode, CRCDATABase, T...> ;

  struct CRCFDATABase {} ;

  struct FDATA : public RegisterBase<0x40023004, 32, ReadWriteMode>
  {
    using FDATAField = CRC_FDATA_FDATA_Values<CRC::FDATA, 0, 8, ReadWriteMode, CRCFDATABase> ;
    using FieldValues = CRC_FDATA_FDATA_Values<CRC::FDATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDATAPack  = Register<0x40023004, 32, ReadWriteMode, CRCFDATABase, T...> ;

  struct CRCCTLBase {} ;

  struct CTL : public RegisterBase<0x40023008, 32, ReadWriteMode>
  {
    using RST = CRC_CTL_RST_Values<CRC::CTL, 0, 1, ReadWriteMode, CRCCTLBase> ;
    using FieldValues = CRC_CTL_RST_Values<CRC::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40023008, 32, ReadWriteMode, CRCCTLBase, T...> ;

} ;

#endif //#if !defined(CRCREGISTERS_HPP)
