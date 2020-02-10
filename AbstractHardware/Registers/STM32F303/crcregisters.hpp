/*******************************************************************************
* Filename      : crcregisters.hpp
*
* Details       : cyclic redundancy check calculation unit. This header file is
*                 auto-generated for STM32F303 device.
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

  struct CR : public RegisterBase<0x40023008, 32, ReadWriteMode>
  {
    using RESET = CRC_CR_RESET_Values<CRC::CR, 0, 1, ReadWriteMode, CRCCRBase> ;
    using POLYSIZE = CRC_CR_POLYSIZE_Values<CRC::CR, 3, 2, ReadWriteMode, CRCCRBase> ;
    using REV_IN = CRC_CR_REV_IN_Values<CRC::CR, 5, 2, ReadWriteMode, CRCCRBase> ;
    using REV_OUT = CRC_CR_REV_OUT_Values<CRC::CR, 7, 1, ReadWriteMode, CRCCRBase> ;
    using FieldValues = CRC_CR_REV_OUT_Values<CRC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40023008, 32, ReadWriteMode, CRCCRBase, T...> ;

  struct CRCINITBase {} ;

  struct INIT : public RegisterBase<0x40023010, 32, ReadWriteMode>
  {
    using INITField = CRC_INIT_INIT_Values<CRC::INIT, 0, 32, ReadWriteMode, CRCINITBase> ;
    using FieldValues = CRC_INIT_INIT_Values<CRC::INIT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INITPack  = Register<0x40023010, 32, ReadWriteMode, CRCINITBase, T...> ;

  struct CRCPOLBase {} ;

  struct POL : public RegisterBase<0x40023014, 32, ReadWriteMode>
  {
    using POLField = CRC_POL_POL_Values<CRC::POL, 0, 32, ReadWriteMode, CRCPOLBase> ;
    using FieldValues = CRC_POL_POL_Values<CRC::POL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POLPack  = Register<0x40023014, 32, ReadWriteMode, CRCPOLBase, T...> ;

} ;

#endif //#if !defined(CRCREGISTERS_HPP)
