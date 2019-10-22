/*******************************************************************************
* Filename      : mdri2cfieldvalues.hpp
*
* Details       : Enumerations related with MDR_I2C peripheral. This header file
*                 is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRI2CENUMS_HPP)
#define MDRI2CENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_PRL_PRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_PRH_PRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CTR_S_I2C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using less_400KHz = FieldValue<MDR_I2C_CTR_S_I2C_Values, BaseType, 0U> ;
  using less_1MHz = FieldValue<MDR_I2C_CTR_S_I2C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CTR_EN_INT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_I2C_CTR_EN_INT_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_I2C_CTR_EN_INT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CTR_EN_I2C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_I2C_CTR_EN_I2C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_I2C_CTR_EN_I2C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_RXD_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_STA_INT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_I2C_STA_INT_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_I2C_STA_INT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_STA_TR_Prog_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Completed = FieldValue<MDR_I2C_STA_TR_Prog_Values, BaseType, 0U> ;
  using Transfering = FieldValue<MDR_I2C_STA_TR_Prog_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_STA_Lost_ARB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ok = FieldValue<MDR_I2C_STA_Lost_ARB_Values, BaseType, 0U> ;
  using Collision = FieldValue<MDR_I2C_STA_Lost_ARB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_STA_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Bus_Free = FieldValue<MDR_I2C_STA_BUSY_Values, BaseType, 0U> ;
  using Bus_Busy = FieldValue<MDR_I2C_STA_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_STA_RX_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ok = FieldValue<MDR_I2C_STA_RX_ACK_Values, BaseType, 0U> ;
  using NoAck = FieldValue<MDR_I2C_STA_RX_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_TXD_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CMD_CLR_INT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_I2C_CMD_CLR_INT_Values, BaseType, 0U> ;
  using Clear = FieldValue<MDR_I2C_CMD_CLR_INT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CMD_Send_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_I2C_CMD_Send_ACK_Values, BaseType, 0U> ;
  using Send_Ack = FieldValue<MDR_I2C_CMD_Send_ACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CMD_Start_Write_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_I2C_CMD_Start_Write_Values, BaseType, 0U> ;
  using Start_Write = FieldValue<MDR_I2C_CMD_Start_Write_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CMD_Start_Read_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_I2C_CMD_Start_Read_Values, BaseType, 0U> ;
  using Start_Read = FieldValue<MDR_I2C_CMD_Start_Read_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CMD_Send_Stop_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_I2C_CMD_Send_Stop_Values, BaseType, 0U> ;
  using Send_Stop = FieldValue<MDR_I2C_CMD_Send_Stop_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_I2C_CMD_Send_Start_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_I2C_CMD_Send_Start_Values, BaseType, 0U> ;
  using Send_Start = FieldValue<MDR_I2C_CMD_Send_Start_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRI2CENUMS_HPP)
