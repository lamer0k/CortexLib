/*******************************************************************************
* Filename      : mdri2cregisters.hpp
*
* Details       : I2C Controler. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRI2CREGISTERS_HPP)
#define MDRI2CREGISTERS_HPP

#include "mdri2cfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_I2C
{
  struct MDR_I2CPRLBase {} ;

  struct PRL : public RegisterBase<0x40050000, 32, ReadWriteMode>
  {
    using PRLField = MDR_I2C_PRL_PRL_Values<MDR_I2C::PRL, 0, 8, ReadWriteMode, MDR_I2CPRLBase> ;
    using FieldValues = MDR_I2C_PRL_PRL_Values<MDR_I2C::PRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRLPack  = Register<0x40050000, 32, ReadWriteMode, MDR_I2CPRLBase, T...> ;

  struct MDR_I2CPRHBase {} ;

  struct PRH : public RegisterBase<0x40050004, 32, ReadWriteMode>
  {
    using PRHField = MDR_I2C_PRH_PRH_Values<MDR_I2C::PRH, 0, 8, ReadWriteMode, MDR_I2CPRHBase> ;
    using FieldValues = MDR_I2C_PRH_PRH_Values<MDR_I2C::PRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRHPack  = Register<0x40050004, 32, ReadWriteMode, MDR_I2CPRHBase, T...> ;

  struct MDR_I2CCTRBase {} ;

  struct CTR : public RegisterBase<0x40050008, 32, ReadWriteMode>
  {
    using S_I2C = MDR_I2C_CTR_S_I2C_Values<MDR_I2C::CTR, 5, 1, ReadWriteMode, MDR_I2CCTRBase> ;
    using EN_INT = MDR_I2C_CTR_EN_INT_Values<MDR_I2C::CTR, 6, 1, ReadWriteMode, MDR_I2CCTRBase> ;
    using EN_I2C = MDR_I2C_CTR_EN_I2C_Values<MDR_I2C::CTR, 7, 1, ReadWriteMode, MDR_I2CCTRBase> ;
    using FieldValues = MDR_I2C_CTR_EN_I2C_Values<MDR_I2C::CTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRPack  = Register<0x40050008, 32, ReadWriteMode, MDR_I2CCTRBase, T...> ;

  struct MDR_I2CRXDBase {} ;

  struct RXD : public RegisterBase<0x4005000C, 32, ReadWriteMode>
  {
    using DATA = MDR_I2C_RXD_DATA_Values<MDR_I2C::RXD, 0, 8, ReadWriteMode, MDR_I2CRXDBase> ;
    using FieldValues = MDR_I2C_RXD_DATA_Values<MDR_I2C::RXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDPack  = Register<0x4005000C, 32, ReadWriteMode, MDR_I2CRXDBase, T...> ;

  struct MDR_I2CSTABase {} ;

  struct STA : public RegisterBase<0x40050010, 32, ReadWriteMode>
  {
    using INT = MDR_I2C_STA_INT_Values<MDR_I2C::STA, 0, 1, ReadWriteMode, MDR_I2CSTABase> ;
    using TR_Prog = MDR_I2C_STA_TR_Prog_Values<MDR_I2C::STA, 1, 1, ReadWriteMode, MDR_I2CSTABase> ;
    using Lost_ARB = MDR_I2C_STA_Lost_ARB_Values<MDR_I2C::STA, 5, 1, ReadWriteMode, MDR_I2CSTABase> ;
    using BUSY = MDR_I2C_STA_BUSY_Values<MDR_I2C::STA, 6, 1, ReadWriteMode, MDR_I2CSTABase> ;
    using RX_ACK = MDR_I2C_STA_RX_ACK_Values<MDR_I2C::STA, 7, 1, ReadWriteMode, MDR_I2CSTABase> ;
    using FieldValues = MDR_I2C_STA_RX_ACK_Values<MDR_I2C::STA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STAPack  = Register<0x40050010, 32, ReadWriteMode, MDR_I2CSTABase, T...> ;

  struct MDR_I2CTXDBase {} ;

  struct TXD : public RegisterBase<0x40050014, 32, ReadWriteMode>
  {
    using DATA = MDR_I2C_TXD_DATA_Values<MDR_I2C::TXD, 0, 8, ReadWriteMode, MDR_I2CTXDBase> ;
    using FieldValues = MDR_I2C_TXD_DATA_Values<MDR_I2C::TXD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDPack  = Register<0x40050014, 32, ReadWriteMode, MDR_I2CTXDBase, T...> ;

  struct MDR_I2CCMDBase {} ;

  struct CMD : public RegisterBase<0x40050018, 32, ReadWriteMode>
  {
    using CLR_INT = MDR_I2C_CMD_CLR_INT_Values<MDR_I2C::CMD, 0, 1, ReadWriteMode, MDR_I2CCMDBase> ;
    using Send_ACK = MDR_I2C_CMD_Send_ACK_Values<MDR_I2C::CMD, 3, 1, ReadWriteMode, MDR_I2CCMDBase> ;
    using Start_Write = MDR_I2C_CMD_Start_Write_Values<MDR_I2C::CMD, 4, 1, ReadWriteMode, MDR_I2CCMDBase> ;
    using Start_Read = MDR_I2C_CMD_Start_Read_Values<MDR_I2C::CMD, 5, 1, ReadWriteMode, MDR_I2CCMDBase> ;
    using Send_Stop = MDR_I2C_CMD_Send_Stop_Values<MDR_I2C::CMD, 6, 1, ReadWriteMode, MDR_I2CCMDBase> ;
    using Send_Start = MDR_I2C_CMD_Send_Start_Values<MDR_I2C::CMD, 7, 1, ReadWriteMode, MDR_I2CCMDBase> ;
    using FieldValues = MDR_I2C_CMD_Send_Start_Values<MDR_I2C::CMD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMDPack  = Register<0x40050018, 32, ReadWriteMode, MDR_I2CCMDBase, T...> ;

} ;

#endif //#if !defined(MDRI2CREGISTERS_HPP)
