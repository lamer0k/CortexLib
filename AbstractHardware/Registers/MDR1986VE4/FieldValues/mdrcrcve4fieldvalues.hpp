/*******************************************************************************
* Filename      : mdrcrcve4fieldvalues.hpp
*
* Details       : Enumerations related with MDR_CRC_VE4 peripheral. This header
*                 file is auto-generated for MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRCRCVE4ENUMS_HPP)
#define MDRCRCVE4ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_CTRL_CRCEn_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MDR_CRC_VE4_CTRL_CRCEn_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MDR_CRC_VE4_CTRL_CRCEn_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_CTRL_DataInv_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LSB = FieldValue<MDR_CRC_VE4_CTRL_DataInv_Values, BaseType, 0U> ;
  using MSB = FieldValue<MDR_CRC_VE4_CTRL_DataInv_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_CTRL_DMA_En_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_CRC_VE4_CTRL_DMA_En_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_CRC_VE4_CTRL_DMA_En_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_CTRL_DL_Size_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Byte = FieldValue<MDR_CRC_VE4_CTRL_DL_Size_Values, BaseType, 0U> ;
  using _16_bit = FieldValue<MDR_CRC_VE4_CTRL_DL_Size_Values, BaseType, 1U> ;
  using _32_bit = FieldValue<MDR_CRC_VE4_CTRL_DL_Size_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_CTRL_DC_Size_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Byte = FieldValue<MDR_CRC_VE4_CTRL_DC_Size_Values, BaseType, 0U> ;
  using _16_bit = FieldValue<MDR_CRC_VE4_CTRL_DC_Size_Values, BaseType, 1U> ;
  using _32_bit = FieldValue<MDR_CRC_VE4_CTRL_DC_Size_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_STAT_ConvComp_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Processing = FieldValue<MDR_CRC_VE4_STAT_ConvComp_Values, BaseType, 0U> ;
  using Completed = FieldValue<MDR_CRC_VE4_STAT_ConvComp_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_STAT_FIFO_Full_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_CRC_VE4_STAT_FIFO_Full_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_CRC_VE4_STAT_FIFO_Full_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_STAT_FIFO_Empty_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_CRC_VE4_STAT_FIFO_Empty_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_CRC_VE4_STAT_FIFO_Empty_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_STAT_FIFO_Over_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_CRC_VE4_STAT_FIFO_Over_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_CRC_VE4_STAT_FIFO_Over_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_DATAI_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_CRC_VAL_CRC_Out_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_CRC_VE4_CRC_POL_CRC_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(MDRCRCVE4ENUMS_HPP)
