/*******************************************************************************
* Filename      : mdreepromregisters.hpp
*
* Details       : EEPROM Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDREEPROMREGISTERS_HPP)
#define MDREEPROMREGISTERS_HPP

#include "mdreepromfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_EEPROM
{
  struct MDR_EEPROMCMDBase {} ;

  struct CMD : public RegisterBase<0x40018000, 32, ReadWriteMode>
  {
    using CON = MDR_EEPROM_CMD_CON_Values<MDR_EEPROM::CMD, 0, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using WR = MDR_EEPROM_CMD_WR_Values<MDR_EEPROM::CMD, 1, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using RD = MDR_EEPROM_CMD_RD_Values<MDR_EEPROM::CMD, 2, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using DELAY = MDR_EEPROM_CMD_DELAY_Values<MDR_EEPROM::CMD, 3, 3, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using XE = MDR_EEPROM_CMD_XE_Values<MDR_EEPROM::CMD, 6, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using YE = MDR_EEPROM_CMD_YE_Values<MDR_EEPROM::CMD, 7, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using SE = MDR_EEPROM_CMD_SE_Values<MDR_EEPROM::CMD, 8, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using IFREN = MDR_EEPROM_CMD_IFREN_Values<MDR_EEPROM::CMD, 9, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using ERASE = MDR_EEPROM_CMD_ERASE_Values<MDR_EEPROM::CMD, 10, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using MAS1 = MDR_EEPROM_CMD_MAS1_Values<MDR_EEPROM::CMD, 11, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using PROG = MDR_EEPROM_CMD_PROG_Values<MDR_EEPROM::CMD, 12, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using NVSTR = MDR_EEPROM_CMD_NVSTR_Values<MDR_EEPROM::CMD, 13, 1, ReadWriteMode, MDR_EEPROMCMDBase> ;
    using FieldValues = MDR_EEPROM_CMD_NVSTR_Values<MDR_EEPROM::CMD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMDPack  = Register<0x40018000, 32, ReadWriteMode, MDR_EEPROMCMDBase, T...> ;

  struct MDR_EEPROMADDRBase {} ;

  struct ADDR : public RegisterBase<0x40018004, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_EEPROM::ADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDRPack  = Register<0x40018004, 32, ReadWriteMode, MDR_EEPROMADDRBase, T...> ;

  struct MDR_EEPROMDIBase {} ;

  struct DI : public RegisterBase<0x40018008, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_EEPROM::DI, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIPack  = Register<0x40018008, 32, ReadWriteMode, MDR_EEPROMDIBase, T...> ;

  struct MDR_EEPROMDOBase {} ;

  struct DO : public RegisterBase<0x4001800C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_EEPROM::DO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOPack  = Register<0x4001800C, 32, ReadWriteMode, MDR_EEPROMDOBase, T...> ;

  struct MDR_EEPROMKEYBase {} ;

  struct KEY : public RegisterBase<0x40018010, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_EEPROM::KEY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYPack  = Register<0x40018010, 32, ReadWriteMode, MDR_EEPROMKEYBase, T...> ;

} ;

#endif //#if !defined(MDREEPROMREGISTERS_HPP)
