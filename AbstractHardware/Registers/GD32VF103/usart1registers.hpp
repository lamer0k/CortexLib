/*******************************************************************************
* Filename      : usart1registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(USART1REGISTERS_HPP)
#define USART1REGISTERS_HPP

#include "usart1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART1
{
  struct USART1STATBase {} ;

  struct STAT : public RegisterBase<0x40004400, 32, ReadWriteMode>
  {
    using CTSF = USART1_STAT_CTSF_Values<USART1::STAT, 9, 1, ReadWriteMode, USART1STATBase> ;
    using LBDF = USART1_STAT_LBDF_Values<USART1::STAT, 8, 1, ReadWriteMode, USART1STATBase> ;
    using TBE = USART1_STAT_TBE_Values<USART1::STAT, 7, 1, ReadMode, USART1STATBase> ;
    using TC = USART1_STAT_TC_Values<USART1::STAT, 6, 1, ReadWriteMode, USART1STATBase> ;
    using RBNE = USART1_STAT_RBNE_Values<USART1::STAT, 5, 1, ReadWriteMode, USART1STATBase> ;
    using IDLEF = USART1_STAT_IDLEF_Values<USART1::STAT, 4, 1, ReadMode, USART1STATBase> ;
    using ORERR = USART1_STAT_ORERR_Values<USART1::STAT, 3, 1, ReadMode, USART1STATBase> ;
    using NERR = USART1_STAT_NERR_Values<USART1::STAT, 2, 1, ReadMode, USART1STATBase> ;
    using FERR = USART1_STAT_FERR_Values<USART1::STAT, 1, 1, ReadMode, USART1STATBase> ;
    using PERR = USART1_STAT_PERR_Values<USART1::STAT, 0, 1, ReadMode, USART1STATBase> ;
    using FieldValues = USART1_STAT_PERR_Values<USART1::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40004400, 32, ReadWriteMode, USART1STATBase, T...> ;

  struct USART1DATABase {} ;

  struct DATA : public RegisterBase<0x40004404, 32, ReadWriteMode>
  {
    using DATAField = USART1_DATA_DATA_Values<USART1::DATA, 0, 9, ReadWriteMode, USART1DATABase> ;
    using FieldValues = USART1_DATA_DATA_Values<USART1::DATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAPack  = Register<0x40004404, 32, ReadWriteMode, USART1DATABase, T...> ;

  struct USART1BAUDBase {} ;

  struct BAUD : public RegisterBase<0x40004408, 32, ReadWriteMode>
  {
    using INTDIV = USART1_BAUD_INTDIV_Values<USART1::BAUD, 4, 12, ReadWriteMode, USART1BAUDBase> ;
    using FRADIV = USART1_BAUD_FRADIV_Values<USART1::BAUD, 0, 4, ReadWriteMode, USART1BAUDBase> ;
    using FieldValues = USART1_BAUD_FRADIV_Values<USART1::BAUD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BAUDPack  = Register<0x40004408, 32, ReadWriteMode, USART1BAUDBase, T...> ;

  struct USART1CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x4000440C, 32, ReadWriteMode>
  {
    using UEN = USART1_CTL0_UEN_Values<USART1::CTL0, 13, 1, ReadWriteMode, USART1CTL0Base> ;
    using WL = USART1_CTL0_WL_Values<USART1::CTL0, 12, 1, ReadWriteMode, USART1CTL0Base> ;
    using WM = USART1_CTL0_WM_Values<USART1::CTL0, 11, 1, ReadWriteMode, USART1CTL0Base> ;
    using PCEN = USART1_CTL0_PCEN_Values<USART1::CTL0, 10, 1, ReadWriteMode, USART1CTL0Base> ;
    using PM = USART1_CTL0_PM_Values<USART1::CTL0, 9, 1, ReadWriteMode, USART1CTL0Base> ;
    using PERRIE = USART1_CTL0_PERRIE_Values<USART1::CTL0, 8, 1, ReadWriteMode, USART1CTL0Base> ;
    using TBEIE = USART1_CTL0_TBEIE_Values<USART1::CTL0, 7, 1, ReadWriteMode, USART1CTL0Base> ;
    using TCIE = USART1_CTL0_TCIE_Values<USART1::CTL0, 6, 1, ReadWriteMode, USART1CTL0Base> ;
    using RBNEIE = USART1_CTL0_RBNEIE_Values<USART1::CTL0, 5, 1, ReadWriteMode, USART1CTL0Base> ;
    using IDLEIE = USART1_CTL0_IDLEIE_Values<USART1::CTL0, 4, 1, ReadWriteMode, USART1CTL0Base> ;
    using TEN = USART1_CTL0_TEN_Values<USART1::CTL0, 3, 1, ReadWriteMode, USART1CTL0Base> ;
    using REN = USART1_CTL0_REN_Values<USART1::CTL0, 2, 1, ReadWriteMode, USART1CTL0Base> ;
    using RWU = USART1_CTL0_RWU_Values<USART1::CTL0, 1, 1, ReadWriteMode, USART1CTL0Base> ;
    using SBKCMD = USART1_CTL0_SBKCMD_Values<USART1::CTL0, 0, 1, ReadWriteMode, USART1CTL0Base> ;
    using FieldValues = USART1_CTL0_SBKCMD_Values<USART1::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x4000440C, 32, ReadWriteMode, USART1CTL0Base, T...> ;

  struct USART1CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40004410, 32, ReadWriteMode>
  {
    using LMEN = USART1_CTL1_LMEN_Values<USART1::CTL1, 14, 1, ReadWriteMode, USART1CTL1Base> ;
    using STB = USART1_CTL1_STB_Values<USART1::CTL1, 12, 2, ReadWriteMode, USART1CTL1Base> ;
    using CKEN = USART1_CTL1_CKEN_Values<USART1::CTL1, 11, 1, ReadWriteMode, USART1CTL1Base> ;
    using CPL = USART1_CTL1_CPL_Values<USART1::CTL1, 10, 1, ReadWriteMode, USART1CTL1Base> ;
    using CPH = USART1_CTL1_CPH_Values<USART1::CTL1, 9, 1, ReadWriteMode, USART1CTL1Base> ;
    using CLEN = USART1_CTL1_CLEN_Values<USART1::CTL1, 8, 1, ReadWriteMode, USART1CTL1Base> ;
    using LBDIE = USART1_CTL1_LBDIE_Values<USART1::CTL1, 6, 1, ReadWriteMode, USART1CTL1Base> ;
    using LBLEN = USART1_CTL1_LBLEN_Values<USART1::CTL1, 5, 1, ReadWriteMode, USART1CTL1Base> ;
    using ADDR = USART1_CTL1_ADDR_Values<USART1::CTL1, 0, 4, ReadWriteMode, USART1CTL1Base> ;
    using FieldValues = USART1_CTL1_ADDR_Values<USART1::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40004410, 32, ReadWriteMode, USART1CTL1Base, T...> ;

  struct USART1CTL2Base {} ;

  struct CTL2 : public RegisterBase<0x40004414, 32, ReadWriteMode>
  {
    using CTSIE = USART1_CTL2_CTSIE_Values<USART1::CTL2, 10, 1, ReadWriteMode, USART1CTL2Base> ;
    using CTSEN = USART1_CTL2_CTSEN_Values<USART1::CTL2, 9, 1, ReadWriteMode, USART1CTL2Base> ;
    using RTSEN = USART1_CTL2_RTSEN_Values<USART1::CTL2, 8, 1, ReadWriteMode, USART1CTL2Base> ;
    using DENT = USART1_CTL2_DENT_Values<USART1::CTL2, 7, 1, ReadWriteMode, USART1CTL2Base> ;
    using DENR = USART1_CTL2_DENR_Values<USART1::CTL2, 6, 1, ReadWriteMode, USART1CTL2Base> ;
    using SCEN = USART1_CTL2_SCEN_Values<USART1::CTL2, 5, 1, ReadWriteMode, USART1CTL2Base> ;
    using NKEN = USART1_CTL2_NKEN_Values<USART1::CTL2, 4, 1, ReadWriteMode, USART1CTL2Base> ;
    using HDEN = USART1_CTL2_HDEN_Values<USART1::CTL2, 3, 1, ReadWriteMode, USART1CTL2Base> ;
    using IRLP = USART1_CTL2_IRLP_Values<USART1::CTL2, 2, 1, ReadWriteMode, USART1CTL2Base> ;
    using IREN = USART1_CTL2_IREN_Values<USART1::CTL2, 1, 1, ReadWriteMode, USART1CTL2Base> ;
    using ERRIE = USART1_CTL2_ERRIE_Values<USART1::CTL2, 0, 1, ReadWriteMode, USART1CTL2Base> ;
    using FieldValues = USART1_CTL2_ERRIE_Values<USART1::CTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL2Pack  = Register<0x40004414, 32, ReadWriteMode, USART1CTL2Base, T...> ;

  struct USART1GPBase {} ;

  struct GP : public RegisterBase<0x40004418, 32, ReadWriteMode>
  {
    using GUAT = USART1_GP_GUAT_Values<USART1::GP, 8, 8, ReadWriteMode, USART1GPBase> ;
    using PSC = USART1_GP_PSC_Values<USART1::GP, 0, 8, ReadWriteMode, USART1GPBase> ;
    using FieldValues = USART1_GP_PSC_Values<USART1::GP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPPack  = Register<0x40004418, 32, ReadWriteMode, USART1GPBase, T...> ;

} ;

#endif //#if !defined(USART1REGISTERS_HPP)
