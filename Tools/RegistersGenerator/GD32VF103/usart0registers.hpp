/*******************************************************************************
* Filename      : usart0registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USART0REGISTERS_HPP)
#define USART0REGISTERS_HPP

#include "usart0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART0
{
  struct USART0STATBase {} ;

  struct STAT : public RegisterBase<0x40013800, 32, ReadWriteMode>
  {
    using CTSF = USART0_STAT_CTSF_Values<USART0::STAT, 9, 1, ReadWriteMode, USART0STATBase> ;
    using LBDF = USART0_STAT_LBDF_Values<USART0::STAT, 8, 1, ReadWriteMode, USART0STATBase> ;
    using TBE = USART0_STAT_TBE_Values<USART0::STAT, 7, 1, ReadMode, USART0STATBase> ;
    using TC = USART0_STAT_TC_Values<USART0::STAT, 6, 1, ReadWriteMode, USART0STATBase> ;
    using RBNE = USART0_STAT_RBNE_Values<USART0::STAT, 5, 1, ReadWriteMode, USART0STATBase> ;
    using IDLEF = USART0_STAT_IDLEF_Values<USART0::STAT, 4, 1, ReadMode, USART0STATBase> ;
    using ORERR = USART0_STAT_ORERR_Values<USART0::STAT, 3, 1, ReadMode, USART0STATBase> ;
    using NERR = USART0_STAT_NERR_Values<USART0::STAT, 2, 1, ReadMode, USART0STATBase> ;
    using FERR = USART0_STAT_FERR_Values<USART0::STAT, 1, 1, ReadMode, USART0STATBase> ;
    using PERR = USART0_STAT_PERR_Values<USART0::STAT, 0, 1, ReadMode, USART0STATBase> ;
    using FieldValues = USART0_STAT_PERR_Values<USART0::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40013800, 32, ReadWriteMode, USART0STATBase, T...> ;

  struct USART0DATABase {} ;

  struct DATA : public RegisterBase<0x40013804, 32, ReadWriteMode>
  {
    using DATAField = USART0_DATA_DATA_Values<USART0::DATA, 0, 9, ReadWriteMode, USART0DATABase> ;
    using FieldValues = USART0_DATA_DATA_Values<USART0::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40013804, 32, ReadWriteMode, USART0DATABase, T...> ;

  struct USART0BAUDBase {} ;

  struct BAUD : public RegisterBase<0x40013808, 32, ReadWriteMode>
  {
    using INTDIV = USART0_BAUD_INTDIV_Values<USART0::BAUD, 4, 12, ReadWriteMode, USART0BAUDBase> ;
    using FRADIV = USART0_BAUD_FRADIV_Values<USART0::BAUD, 0, 4, ReadWriteMode, USART0BAUDBase> ;
    using FieldValues = USART0_BAUD_FRADIV_Values<USART0::BAUD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BAUDPack  = Register<0x40013808, 32, ReadWriteMode, USART0BAUDBase, T...> ;

  struct USART0CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x4001380C, 32, ReadWriteMode>
  {
    using UEN = USART0_CTL0_UEN_Values<USART0::CTL0, 13, 1, ReadWriteMode, USART0CTL0Base> ;
    using WL = USART0_CTL0_WL_Values<USART0::CTL0, 12, 1, ReadWriteMode, USART0CTL0Base> ;
    using WM = USART0_CTL0_WM_Values<USART0::CTL0, 11, 1, ReadWriteMode, USART0CTL0Base> ;
    using PCEN = USART0_CTL0_PCEN_Values<USART0::CTL0, 10, 1, ReadWriteMode, USART0CTL0Base> ;
    using PM = USART0_CTL0_PM_Values<USART0::CTL0, 9, 1, ReadWriteMode, USART0CTL0Base> ;
    using PERRIE = USART0_CTL0_PERRIE_Values<USART0::CTL0, 8, 1, ReadWriteMode, USART0CTL0Base> ;
    using TBEIE = USART0_CTL0_TBEIE_Values<USART0::CTL0, 7, 1, ReadWriteMode, USART0CTL0Base> ;
    using TCIE = USART0_CTL0_TCIE_Values<USART0::CTL0, 6, 1, ReadWriteMode, USART0CTL0Base> ;
    using RBNEIE = USART0_CTL0_RBNEIE_Values<USART0::CTL0, 5, 1, ReadWriteMode, USART0CTL0Base> ;
    using IDLEIE = USART0_CTL0_IDLEIE_Values<USART0::CTL0, 4, 1, ReadWriteMode, USART0CTL0Base> ;
    using TEN = USART0_CTL0_TEN_Values<USART0::CTL0, 3, 1, ReadWriteMode, USART0CTL0Base> ;
    using REN = USART0_CTL0_REN_Values<USART0::CTL0, 2, 1, ReadWriteMode, USART0CTL0Base> ;
    using RWU = USART0_CTL0_RWU_Values<USART0::CTL0, 1, 1, ReadWriteMode, USART0CTL0Base> ;
    using SBKCMD = USART0_CTL0_SBKCMD_Values<USART0::CTL0, 0, 1, ReadWriteMode, USART0CTL0Base> ;
    using FieldValues = USART0_CTL0_SBKCMD_Values<USART0::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x4001380C, 32, ReadWriteMode, USART0CTL0Base, T...> ;

  struct USART0CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40013810, 32, ReadWriteMode>
  {
    using LMEN = USART0_CTL1_LMEN_Values<USART0::CTL1, 14, 1, ReadWriteMode, USART0CTL1Base> ;
    using STB = USART0_CTL1_STB_Values<USART0::CTL1, 12, 2, ReadWriteMode, USART0CTL1Base> ;
    using CKEN = USART0_CTL1_CKEN_Values<USART0::CTL1, 11, 1, ReadWriteMode, USART0CTL1Base> ;
    using CPL = USART0_CTL1_CPL_Values<USART0::CTL1, 10, 1, ReadWriteMode, USART0CTL1Base> ;
    using CPH = USART0_CTL1_CPH_Values<USART0::CTL1, 9, 1, ReadWriteMode, USART0CTL1Base> ;
    using CLEN = USART0_CTL1_CLEN_Values<USART0::CTL1, 8, 1, ReadWriteMode, USART0CTL1Base> ;
    using LBDIE = USART0_CTL1_LBDIE_Values<USART0::CTL1, 6, 1, ReadWriteMode, USART0CTL1Base> ;
    using LBLEN = USART0_CTL1_LBLEN_Values<USART0::CTL1, 5, 1, ReadWriteMode, USART0CTL1Base> ;
    using ADDR = USART0_CTL1_ADDR_Values<USART0::CTL1, 0, 4, ReadWriteMode, USART0CTL1Base> ;
    using FieldValues = USART0_CTL1_ADDR_Values<USART0::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40013810, 32, ReadWriteMode, USART0CTL1Base, T...> ;

  struct USART0CTL2Base {} ;

  struct CTL2 : public RegisterBase<0x40013814, 32, ReadWriteMode>
  {
    using CTSIE = USART0_CTL2_CTSIE_Values<USART0::CTL2, 10, 1, ReadWriteMode, USART0CTL2Base> ;
    using CTSEN = USART0_CTL2_CTSEN_Values<USART0::CTL2, 9, 1, ReadWriteMode, USART0CTL2Base> ;
    using RTSEN = USART0_CTL2_RTSEN_Values<USART0::CTL2, 8, 1, ReadWriteMode, USART0CTL2Base> ;
    using DENT = USART0_CTL2_DENT_Values<USART0::CTL2, 7, 1, ReadWriteMode, USART0CTL2Base> ;
    using DENR = USART0_CTL2_DENR_Values<USART0::CTL2, 6, 1, ReadWriteMode, USART0CTL2Base> ;
    using SCEN = USART0_CTL2_SCEN_Values<USART0::CTL2, 5, 1, ReadWriteMode, USART0CTL2Base> ;
    using NKEN = USART0_CTL2_NKEN_Values<USART0::CTL2, 4, 1, ReadWriteMode, USART0CTL2Base> ;
    using HDEN = USART0_CTL2_HDEN_Values<USART0::CTL2, 3, 1, ReadWriteMode, USART0CTL2Base> ;
    using IRLP = USART0_CTL2_IRLP_Values<USART0::CTL2, 2, 1, ReadWriteMode, USART0CTL2Base> ;
    using IREN = USART0_CTL2_IREN_Values<USART0::CTL2, 1, 1, ReadWriteMode, USART0CTL2Base> ;
    using ERRIE = USART0_CTL2_ERRIE_Values<USART0::CTL2, 0, 1, ReadWriteMode, USART0CTL2Base> ;
    using FieldValues = USART0_CTL2_ERRIE_Values<USART0::CTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL2Pack  = Register<0x40013814, 32, ReadWriteMode, USART0CTL2Base, T...> ;

  struct USART0GPBase {} ;

  struct GP : public RegisterBase<0x40013818, 32, ReadWriteMode>
  {
    using GUAT = USART0_GP_GUAT_Values<USART0::GP, 8, 8, ReadWriteMode, USART0GPBase> ;
    using PSC = USART0_GP_PSC_Values<USART0::GP, 0, 8, ReadWriteMode, USART0GPBase> ;
    using FieldValues = USART0_GP_PSC_Values<USART0::GP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPPack  = Register<0x40013818, 32, ReadWriteMode, USART0GPBase, T...> ;

} ;

#endif //#if !defined(USART0REGISTERS_HPP)
