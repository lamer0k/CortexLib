/*******************************************************************************
* Filename      : usart2registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USART2REGISTERS_HPP)
#define USART2REGISTERS_HPP

#include "usart2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART2
{
  struct USART2STATBase {} ;

  struct STAT : public RegisterBase<0x40004800, 32, ReadWriteMode>
  {
    using CTSF = USART2_STAT_CTSF_Values<USART2::STAT, 9, 1, ReadWriteMode, USART2STATBase> ;
    using LBDF = USART2_STAT_LBDF_Values<USART2::STAT, 8, 1, ReadWriteMode, USART2STATBase> ;
    using TBE = USART2_STAT_TBE_Values<USART2::STAT, 7, 1, ReadMode, USART2STATBase> ;
    using TC = USART2_STAT_TC_Values<USART2::STAT, 6, 1, ReadWriteMode, USART2STATBase> ;
    using RBNE = USART2_STAT_RBNE_Values<USART2::STAT, 5, 1, ReadWriteMode, USART2STATBase> ;
    using IDLEF = USART2_STAT_IDLEF_Values<USART2::STAT, 4, 1, ReadMode, USART2STATBase> ;
    using ORERR = USART2_STAT_ORERR_Values<USART2::STAT, 3, 1, ReadMode, USART2STATBase> ;
    using NERR = USART2_STAT_NERR_Values<USART2::STAT, 2, 1, ReadMode, USART2STATBase> ;
    using FERR = USART2_STAT_FERR_Values<USART2::STAT, 1, 1, ReadMode, USART2STATBase> ;
    using PERR = USART2_STAT_PERR_Values<USART2::STAT, 0, 1, ReadMode, USART2STATBase> ;
    using FieldValues = USART2_STAT_PERR_Values<USART2::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40004800, 32, ReadWriteMode, USART2STATBase, T...> ;

  struct USART2DATABase {} ;

  struct DATA : public RegisterBase<0x40004804, 32, ReadWriteMode>
  {
    using DATAField = USART2_DATA_DATA_Values<USART2::DATA, 0, 9, ReadWriteMode, USART2DATABase> ;
    using FieldValues = USART2_DATA_DATA_Values<USART2::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40004804, 32, ReadWriteMode, USART2DATABase, T...> ;

  struct USART2BAUDBase {} ;

  struct BAUD : public RegisterBase<0x40004808, 32, ReadWriteMode>
  {
    using INTDIV = USART2_BAUD_INTDIV_Values<USART2::BAUD, 4, 12, ReadWriteMode, USART2BAUDBase> ;
    using FRADIV = USART2_BAUD_FRADIV_Values<USART2::BAUD, 0, 4, ReadWriteMode, USART2BAUDBase> ;
    using FieldValues = USART2_BAUD_FRADIV_Values<USART2::BAUD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BAUDPack  = Register<0x40004808, 32, ReadWriteMode, USART2BAUDBase, T...> ;

  struct USART2CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x4000480C, 32, ReadWriteMode>
  {
    using UEN = USART2_CTL0_UEN_Values<USART2::CTL0, 13, 1, ReadWriteMode, USART2CTL0Base> ;
    using WL = USART2_CTL0_WL_Values<USART2::CTL0, 12, 1, ReadWriteMode, USART2CTL0Base> ;
    using WM = USART2_CTL0_WM_Values<USART2::CTL0, 11, 1, ReadWriteMode, USART2CTL0Base> ;
    using PCEN = USART2_CTL0_PCEN_Values<USART2::CTL0, 10, 1, ReadWriteMode, USART2CTL0Base> ;
    using PM = USART2_CTL0_PM_Values<USART2::CTL0, 9, 1, ReadWriteMode, USART2CTL0Base> ;
    using PERRIE = USART2_CTL0_PERRIE_Values<USART2::CTL0, 8, 1, ReadWriteMode, USART2CTL0Base> ;
    using TBEIE = USART2_CTL0_TBEIE_Values<USART2::CTL0, 7, 1, ReadWriteMode, USART2CTL0Base> ;
    using TCIE = USART2_CTL0_TCIE_Values<USART2::CTL0, 6, 1, ReadWriteMode, USART2CTL0Base> ;
    using RBNEIE = USART2_CTL0_RBNEIE_Values<USART2::CTL0, 5, 1, ReadWriteMode, USART2CTL0Base> ;
    using IDLEIE = USART2_CTL0_IDLEIE_Values<USART2::CTL0, 4, 1, ReadWriteMode, USART2CTL0Base> ;
    using TEN = USART2_CTL0_TEN_Values<USART2::CTL0, 3, 1, ReadWriteMode, USART2CTL0Base> ;
    using REN = USART2_CTL0_REN_Values<USART2::CTL0, 2, 1, ReadWriteMode, USART2CTL0Base> ;
    using RWU = USART2_CTL0_RWU_Values<USART2::CTL0, 1, 1, ReadWriteMode, USART2CTL0Base> ;
    using SBKCMD = USART2_CTL0_SBKCMD_Values<USART2::CTL0, 0, 1, ReadWriteMode, USART2CTL0Base> ;
    using FieldValues = USART2_CTL0_SBKCMD_Values<USART2::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x4000480C, 32, ReadWriteMode, USART2CTL0Base, T...> ;

  struct USART2CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40004810, 32, ReadWriteMode>
  {
    using LMEN = USART2_CTL1_LMEN_Values<USART2::CTL1, 14, 1, ReadWriteMode, USART2CTL1Base> ;
    using STB = USART2_CTL1_STB_Values<USART2::CTL1, 12, 2, ReadWriteMode, USART2CTL1Base> ;
    using CKEN = USART2_CTL1_CKEN_Values<USART2::CTL1, 11, 1, ReadWriteMode, USART2CTL1Base> ;
    using CPL = USART2_CTL1_CPL_Values<USART2::CTL1, 10, 1, ReadWriteMode, USART2CTL1Base> ;
    using CPH = USART2_CTL1_CPH_Values<USART2::CTL1, 9, 1, ReadWriteMode, USART2CTL1Base> ;
    using CLEN = USART2_CTL1_CLEN_Values<USART2::CTL1, 8, 1, ReadWriteMode, USART2CTL1Base> ;
    using LBDIE = USART2_CTL1_LBDIE_Values<USART2::CTL1, 6, 1, ReadWriteMode, USART2CTL1Base> ;
    using LBLEN = USART2_CTL1_LBLEN_Values<USART2::CTL1, 5, 1, ReadWriteMode, USART2CTL1Base> ;
    using ADDR = USART2_CTL1_ADDR_Values<USART2::CTL1, 0, 4, ReadWriteMode, USART2CTL1Base> ;
    using FieldValues = USART2_CTL1_ADDR_Values<USART2::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40004810, 32, ReadWriteMode, USART2CTL1Base, T...> ;

  struct USART2CTL2Base {} ;

  struct CTL2 : public RegisterBase<0x40004814, 32, ReadWriteMode>
  {
    using CTSIE = USART2_CTL2_CTSIE_Values<USART2::CTL2, 10, 1, ReadWriteMode, USART2CTL2Base> ;
    using CTSEN = USART2_CTL2_CTSEN_Values<USART2::CTL2, 9, 1, ReadWriteMode, USART2CTL2Base> ;
    using RTSEN = USART2_CTL2_RTSEN_Values<USART2::CTL2, 8, 1, ReadWriteMode, USART2CTL2Base> ;
    using DENT = USART2_CTL2_DENT_Values<USART2::CTL2, 7, 1, ReadWriteMode, USART2CTL2Base> ;
    using DENR = USART2_CTL2_DENR_Values<USART2::CTL2, 6, 1, ReadWriteMode, USART2CTL2Base> ;
    using SCEN = USART2_CTL2_SCEN_Values<USART2::CTL2, 5, 1, ReadWriteMode, USART2CTL2Base> ;
    using NKEN = USART2_CTL2_NKEN_Values<USART2::CTL2, 4, 1, ReadWriteMode, USART2CTL2Base> ;
    using HDEN = USART2_CTL2_HDEN_Values<USART2::CTL2, 3, 1, ReadWriteMode, USART2CTL2Base> ;
    using IRLP = USART2_CTL2_IRLP_Values<USART2::CTL2, 2, 1, ReadWriteMode, USART2CTL2Base> ;
    using IREN = USART2_CTL2_IREN_Values<USART2::CTL2, 1, 1, ReadWriteMode, USART2CTL2Base> ;
    using ERRIE = USART2_CTL2_ERRIE_Values<USART2::CTL2, 0, 1, ReadWriteMode, USART2CTL2Base> ;
    using FieldValues = USART2_CTL2_ERRIE_Values<USART2::CTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL2Pack  = Register<0x40004814, 32, ReadWriteMode, USART2CTL2Base, T...> ;

  struct USART2GPBase {} ;

  struct GP : public RegisterBase<0x40004818, 32, ReadWriteMode>
  {
    using GUAT = USART2_GP_GUAT_Values<USART2::GP, 8, 8, ReadWriteMode, USART2GPBase> ;
    using PSC = USART2_GP_PSC_Values<USART2::GP, 0, 8, ReadWriteMode, USART2GPBase> ;
    using FieldValues = USART2_GP_PSC_Values<USART2::GP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPPack  = Register<0x40004818, 32, ReadWriteMode, USART2GPBase, T...> ;

} ;

#endif //#if !defined(USART2REGISTERS_HPP)
