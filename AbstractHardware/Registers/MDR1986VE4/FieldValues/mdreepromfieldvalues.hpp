/*******************************************************************************
* Filename      : mdreepromfieldvalues.hpp
*
* Details       : Enumerations related with MDR_EEPROM peripheral. This header
*                 file is auto-generated for MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDREEPROMENUMS_HPP)
#define MDREEPROMENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_CON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Normal_Access = FieldValue<MDR_EEPROM_CMD_CON_Values, BaseType, 0U> ;
  using Controller_Access = FieldValue<MDR_EEPROM_CMD_CON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_WR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_EEPROM_CMD_WR_Values, BaseType, 0U> ;
  using Active = FieldValue<MDR_EEPROM_CMD_WR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_RD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_EEPROM_CMD_RD_Values, BaseType, 0U> ;
  using Active = FieldValue<MDR_EEPROM_CMD_RD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_DELAY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using le18MHz = FieldValue<MDR_EEPROM_CMD_DELAY_Values, BaseType, 0U> ;
  using le36MHz = FieldValue<MDR_EEPROM_CMD_DELAY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_XE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_EEPROM_CMD_XE_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_EEPROM_CMD_XE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_YE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_EEPROM_CMD_YE_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_EEPROM_CMD_YE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_SE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_EEPROM_CMD_SE_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_EEPROM_CMD_SE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_IFREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Main = FieldValue<MDR_EEPROM_CMD_IFREN_Values, BaseType, 0U> ;
  using Info = FieldValue<MDR_EEPROM_CMD_IFREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_ERASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_EEPROM_CMD_ERASE_Values, BaseType, 0U> ;
  using Active = FieldValue<MDR_EEPROM_CMD_ERASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_MAS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_EEPROM_CMD_MAS1_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_EEPROM_CMD_MAS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_PROG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_EEPROM_CMD_PROG_Values, BaseType, 0U> ;
  using Active = FieldValue<MDR_EEPROM_CMD_PROG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_EEPROM_CMD_NVSTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Read = FieldValue<MDR_EEPROM_CMD_NVSTR_Values, BaseType, 0U> ;
  using Write = FieldValue<MDR_EEPROM_CMD_NVSTR_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDREEPROMENUMS_HPP)
