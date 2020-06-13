/*******************************************************************************
* Filename      : uart3registers.hpp
*
* Details       : Universal asynchronous receiver transmitter. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(UART3REGISTERS_HPP)
#define UART3REGISTERS_HPP

#include "uart3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART3
{
  struct UART3STATBase {} ;

  struct STAT : public RegisterBase<0x40004C00, 32, ReadWriteMode>
  {
    using LBDF = UART3_STAT_LBDF_Values<UART3::STAT, 8, 1, ReadWriteMode, UART3STATBase> ;
    using TBE = UART3_STAT_TBE_Values<UART3::STAT, 7, 1, ReadMode, UART3STATBase> ;
    using TC = UART3_STAT_TC_Values<UART3::STAT, 6, 1, ReadWriteMode, UART3STATBase> ;
    using RBNE = UART3_STAT_RBNE_Values<UART3::STAT, 5, 1, ReadWriteMode, UART3STATBase> ;
    using IDLEF = UART3_STAT_IDLEF_Values<UART3::STAT, 4, 1, ReadMode, UART3STATBase> ;
    using ORERR = UART3_STAT_ORERR_Values<UART3::STAT, 3, 1, ReadMode, UART3STATBase> ;
    using NERR = UART3_STAT_NERR_Values<UART3::STAT, 2, 1, ReadMode, UART3STATBase> ;
    using FERR = UART3_STAT_FERR_Values<UART3::STAT, 1, 1, ReadMode, UART3STATBase> ;
    using PERR = UART3_STAT_PERR_Values<UART3::STAT, 0, 1, ReadMode, UART3STATBase> ;
    using FieldValues = UART3_STAT_PERR_Values<UART3::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40004C00, 32, ReadWriteMode, UART3STATBase, T...> ;

  struct UART3DATABase {} ;

  struct DATA : public RegisterBase<0x40004C04, 32, ReadWriteMode>
  {
    using DATAField = UART3_DATA_DATA_Values<UART3::DATA, 0, 9, ReadWriteMode, UART3DATABase> ;
    using FieldValues = UART3_DATA_DATA_Values<UART3::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40004C04, 32, ReadWriteMode, UART3DATABase, T...> ;

  struct UART3BAUDBase {} ;

  struct BAUD : public RegisterBase<0x40004C08, 32, ReadWriteMode>
  {
    using INTDIV = UART3_BAUD_INTDIV_Values<UART3::BAUD, 4, 12, ReadWriteMode, UART3BAUDBase> ;
    using FRADIV = UART3_BAUD_FRADIV_Values<UART3::BAUD, 0, 4, ReadWriteMode, UART3BAUDBase> ;
    using FieldValues = UART3_BAUD_FRADIV_Values<UART3::BAUD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BAUDPack  = Register<0x40004C08, 32, ReadWriteMode, UART3BAUDBase, T...> ;

  struct UART3CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40004C0C, 32, ReadWriteMode>
  {
    using UEN = UART3_CTL0_UEN_Values<UART3::CTL0, 13, 1, ReadWriteMode, UART3CTL0Base> ;
    using WL = UART3_CTL0_WL_Values<UART3::CTL0, 12, 1, ReadWriteMode, UART3CTL0Base> ;
    using WM = UART3_CTL0_WM_Values<UART3::CTL0, 11, 1, ReadWriteMode, UART3CTL0Base> ;
    using PCEN = UART3_CTL0_PCEN_Values<UART3::CTL0, 10, 1, ReadWriteMode, UART3CTL0Base> ;
    using PM = UART3_CTL0_PM_Values<UART3::CTL0, 9, 1, ReadWriteMode, UART3CTL0Base> ;
    using PERRIE = UART3_CTL0_PERRIE_Values<UART3::CTL0, 8, 1, ReadWriteMode, UART3CTL0Base> ;
    using TBEIE = UART3_CTL0_TBEIE_Values<UART3::CTL0, 7, 1, ReadWriteMode, UART3CTL0Base> ;
    using TCIE = UART3_CTL0_TCIE_Values<UART3::CTL0, 6, 1, ReadWriteMode, UART3CTL0Base> ;
    using RBNEIE = UART3_CTL0_RBNEIE_Values<UART3::CTL0, 5, 1, ReadWriteMode, UART3CTL0Base> ;
    using IDLEIE = UART3_CTL0_IDLEIE_Values<UART3::CTL0, 4, 1, ReadWriteMode, UART3CTL0Base> ;
    using TEN = UART3_CTL0_TEN_Values<UART3::CTL0, 3, 1, ReadWriteMode, UART3CTL0Base> ;
    using REN = UART3_CTL0_REN_Values<UART3::CTL0, 2, 1, ReadWriteMode, UART3CTL0Base> ;
    using RWU = UART3_CTL0_RWU_Values<UART3::CTL0, 1, 1, ReadWriteMode, UART3CTL0Base> ;
    using SBKCMD = UART3_CTL0_SBKCMD_Values<UART3::CTL0, 0, 1, ReadWriteMode, UART3CTL0Base> ;
    using FieldValues = UART3_CTL0_SBKCMD_Values<UART3::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40004C0C, 32, ReadWriteMode, UART3CTL0Base, T...> ;

  struct UART3CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40004C10, 32, ReadWriteMode>
  {
    using LMEN = UART3_CTL1_LMEN_Values<UART3::CTL1, 14, 1, ReadWriteMode, UART3CTL1Base> ;
    using STB = UART3_CTL1_STB_Values<UART3::CTL1, 12, 2, ReadWriteMode, UART3CTL1Base> ;
    using LBDIE = UART3_CTL1_LBDIE_Values<UART3::CTL1, 6, 1, ReadWriteMode, UART3CTL1Base> ;
    using LBLEN = UART3_CTL1_LBLEN_Values<UART3::CTL1, 5, 1, ReadWriteMode, UART3CTL1Base> ;
    using ADDR = UART3_CTL1_ADDR_Values<UART3::CTL1, 0, 4, ReadWriteMode, UART3CTL1Base> ;
    using FieldValues = UART3_CTL1_ADDR_Values<UART3::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40004C10, 32, ReadWriteMode, UART3CTL1Base, T...> ;

  struct UART3CTL2Base {} ;

  struct CTL2 : public RegisterBase<0x40004C14, 32, ReadWriteMode>
  {
    using DENT = UART3_CTL2_DENT_Values<UART3::CTL2, 7, 1, ReadWriteMode, UART3CTL2Base> ;
    using DENR = UART3_CTL2_DENR_Values<UART3::CTL2, 6, 1, ReadWriteMode, UART3CTL2Base> ;
    using HDEN = UART3_CTL2_HDEN_Values<UART3::CTL2, 3, 1, ReadWriteMode, UART3CTL2Base> ;
    using IRLP = UART3_CTL2_IRLP_Values<UART3::CTL2, 2, 1, ReadWriteMode, UART3CTL2Base> ;
    using IREN = UART3_CTL2_IREN_Values<UART3::CTL2, 1, 1, ReadWriteMode, UART3CTL2Base> ;
    using ERRIE = UART3_CTL2_ERRIE_Values<UART3::CTL2, 0, 1, ReadWriteMode, UART3CTL2Base> ;
    using FieldValues = UART3_CTL2_ERRIE_Values<UART3::CTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL2Pack  = Register<0x40004C14, 32, ReadWriteMode, UART3CTL2Base, T...> ;

  struct UART3GPBase {} ;

  struct GP : public RegisterBase<0x40004C18, 32, ReadWriteMode>
  {
    using PSC = UART3_GP_PSC_Values<UART3::GP, 0, 8, ReadWriteMode, UART3GPBase> ;
    using FieldValues = UART3_GP_PSC_Values<UART3::GP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPPack  = Register<0x40004C18, 32, ReadWriteMode, UART3GPBase, T...> ;

} ;

#endif //#if !defined(UART3REGISTERS_HPP)
