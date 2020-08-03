/*******************************************************************************
* Filename      : uart4registers.hpp
*
* Details       : Universal asynchronous receiver transmitter. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(UART4REGISTERS_HPP)
#define UART4REGISTERS_HPP

#include "uart4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART4
{
  struct UART4STATBase {} ;

  struct STAT : public RegisterBase<0x40005000, 32, ReadWriteMode>
  {
    using LBDF = UART4_STAT_LBDF_Values<UART4::STAT, 8, 1, ReadWriteMode, UART4STATBase> ;
    using TBE = UART4_STAT_TBE_Values<UART4::STAT, 7, 1, ReadMode, UART4STATBase> ;
    using TC = UART4_STAT_TC_Values<UART4::STAT, 6, 1, ReadWriteMode, UART4STATBase> ;
    using RBNE = UART4_STAT_RBNE_Values<UART4::STAT, 5, 1, ReadWriteMode, UART4STATBase> ;
    using IDLEF = UART4_STAT_IDLEF_Values<UART4::STAT, 4, 1, ReadMode, UART4STATBase> ;
    using ORERR = UART4_STAT_ORERR_Values<UART4::STAT, 3, 1, ReadMode, UART4STATBase> ;
    using NERR = UART4_STAT_NERR_Values<UART4::STAT, 2, 1, ReadMode, UART4STATBase> ;
    using FERR = UART4_STAT_FERR_Values<UART4::STAT, 1, 1, ReadMode, UART4STATBase> ;
    using PERR = UART4_STAT_PERR_Values<UART4::STAT, 0, 1, ReadMode, UART4STATBase> ;
    using FieldValues = UART4_STAT_PERR_Values<UART4::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40005000, 32, ReadWriteMode, UART4STATBase, T...> ;

  struct UART4DATABase {} ;

  struct DATA : public RegisterBase<0x40005004, 32, ReadWriteMode>
  {
    using DATAField = UART4_DATA_DATA_Values<UART4::DATA, 0, 9, ReadWriteMode, UART4DATABase> ;
    using FieldValues = UART4_DATA_DATA_Values<UART4::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40005004, 32, ReadWriteMode, UART4DATABase, T...> ;

  struct UART4BAUDBase {} ;

  struct BAUD : public RegisterBase<0x40005008, 32, ReadWriteMode>
  {
    using INTDIV = UART4_BAUD_INTDIV_Values<UART4::BAUD, 4, 12, ReadWriteMode, UART4BAUDBase> ;
    using FRADIV = UART4_BAUD_FRADIV_Values<UART4::BAUD, 0, 4, ReadWriteMode, UART4BAUDBase> ;
    using FieldValues = UART4_BAUD_FRADIV_Values<UART4::BAUD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BAUDPack  = Register<0x40005008, 32, ReadWriteMode, UART4BAUDBase, T...> ;

  struct UART4CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x4000500C, 32, ReadWriteMode>
  {
    using UEN = UART4_CTL0_UEN_Values<UART4::CTL0, 13, 1, ReadWriteMode, UART4CTL0Base> ;
    using WL = UART4_CTL0_WL_Values<UART4::CTL0, 12, 1, ReadWriteMode, UART4CTL0Base> ;
    using WM = UART4_CTL0_WM_Values<UART4::CTL0, 11, 1, ReadWriteMode, UART4CTL0Base> ;
    using PCEN = UART4_CTL0_PCEN_Values<UART4::CTL0, 10, 1, ReadWriteMode, UART4CTL0Base> ;
    using PM = UART4_CTL0_PM_Values<UART4::CTL0, 9, 1, ReadWriteMode, UART4CTL0Base> ;
    using PERRIE = UART4_CTL0_PERRIE_Values<UART4::CTL0, 8, 1, ReadWriteMode, UART4CTL0Base> ;
    using TBEIE = UART4_CTL0_TBEIE_Values<UART4::CTL0, 7, 1, ReadWriteMode, UART4CTL0Base> ;
    using TCIE = UART4_CTL0_TCIE_Values<UART4::CTL0, 6, 1, ReadWriteMode, UART4CTL0Base> ;
    using RBNEIE = UART4_CTL0_RBNEIE_Values<UART4::CTL0, 5, 1, ReadWriteMode, UART4CTL0Base> ;
    using IDLEIE = UART4_CTL0_IDLEIE_Values<UART4::CTL0, 4, 1, ReadWriteMode, UART4CTL0Base> ;
    using TEN = UART4_CTL0_TEN_Values<UART4::CTL0, 3, 1, ReadWriteMode, UART4CTL0Base> ;
    using REN = UART4_CTL0_REN_Values<UART4::CTL0, 2, 1, ReadWriteMode, UART4CTL0Base> ;
    using RWU = UART4_CTL0_RWU_Values<UART4::CTL0, 1, 1, ReadWriteMode, UART4CTL0Base> ;
    using SBKCMD = UART4_CTL0_SBKCMD_Values<UART4::CTL0, 0, 1, ReadWriteMode, UART4CTL0Base> ;
    using FieldValues = UART4_CTL0_SBKCMD_Values<UART4::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x4000500C, 32, ReadWriteMode, UART4CTL0Base, T...> ;

  struct UART4CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40005010, 32, ReadWriteMode>
  {
    using LMEN = UART4_CTL1_LMEN_Values<UART4::CTL1, 14, 1, ReadWriteMode, UART4CTL1Base> ;
    using STB = UART4_CTL1_STB_Values<UART4::CTL1, 12, 2, ReadWriteMode, UART4CTL1Base> ;
    using LBDIE = UART4_CTL1_LBDIE_Values<UART4::CTL1, 6, 1, ReadWriteMode, UART4CTL1Base> ;
    using LBLEN = UART4_CTL1_LBLEN_Values<UART4::CTL1, 5, 1, ReadWriteMode, UART4CTL1Base> ;
    using ADDR = UART4_CTL1_ADDR_Values<UART4::CTL1, 0, 4, ReadWriteMode, UART4CTL1Base> ;
    using FieldValues = UART4_CTL1_ADDR_Values<UART4::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40005010, 32, ReadWriteMode, UART4CTL1Base, T...> ;

  struct UART4CTL2Base {} ;

  struct CTL2 : public RegisterBase<0x40005014, 32, ReadWriteMode>
  {
    using DENT = UART4_CTL2_DENT_Values<UART4::CTL2, 7, 1, ReadWriteMode, UART4CTL2Base> ;
    using DENR = UART4_CTL2_DENR_Values<UART4::CTL2, 6, 1, ReadWriteMode, UART4CTL2Base> ;
    using HDEN = UART4_CTL2_HDEN_Values<UART4::CTL2, 3, 1, ReadWriteMode, UART4CTL2Base> ;
    using IRLP = UART4_CTL2_IRLP_Values<UART4::CTL2, 2, 1, ReadWriteMode, UART4CTL2Base> ;
    using IREN = UART4_CTL2_IREN_Values<UART4::CTL2, 1, 1, ReadWriteMode, UART4CTL2Base> ;
    using ERRIE = UART4_CTL2_ERRIE_Values<UART4::CTL2, 0, 1, ReadWriteMode, UART4CTL2Base> ;
    using FieldValues = UART4_CTL2_ERRIE_Values<UART4::CTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL2Pack  = Register<0x40005014, 32, ReadWriteMode, UART4CTL2Base, T...> ;

  struct UART4GPBase {} ;

  struct GP : public RegisterBase<0x40005018, 32, ReadWriteMode>
  {
    using PSC = UART4_GP_PSC_Values<UART4::GP, 0, 8, ReadWriteMode, UART4GPBase> ;
    using FieldValues = UART4_GP_PSC_Values<UART4::GP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPPack  = Register<0x40005018, 32, ReadWriteMode, UART4GPBase, T...> ;

} ;

#endif //#if !defined(UART4REGISTERS_HPP)
