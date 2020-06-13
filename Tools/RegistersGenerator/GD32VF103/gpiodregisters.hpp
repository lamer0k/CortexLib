/*******************************************************************************
* Filename      : gpiodregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(GPIODREGISTERS_HPP)
#define GPIODREGISTERS_HPP

#include "gpiodfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOD
{
  struct GPIODCTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40011400, 32, ReadWriteMode>
  {
    using CTL7 = GPIOD_CTL0_CTL7_Values<GPIOD::CTL0, 30, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD7 = GPIOD_CTL0_MD7_Values<GPIOD::CTL0, 28, 2, ReadWriteMode, GPIODCTL0Base> ;
    using CTL6 = GPIOD_CTL0_CTL6_Values<GPIOD::CTL0, 26, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD6 = GPIOD_CTL0_MD6_Values<GPIOD::CTL0, 24, 2, ReadWriteMode, GPIODCTL0Base> ;
    using CTL5 = GPIOD_CTL0_CTL5_Values<GPIOD::CTL0, 22, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD5 = GPIOD_CTL0_MD5_Values<GPIOD::CTL0, 20, 2, ReadWriteMode, GPIODCTL0Base> ;
    using CTL4 = GPIOD_CTL0_CTL4_Values<GPIOD::CTL0, 18, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD4 = GPIOD_CTL0_MD4_Values<GPIOD::CTL0, 16, 2, ReadWriteMode, GPIODCTL0Base> ;
    using CTL3 = GPIOD_CTL0_CTL3_Values<GPIOD::CTL0, 14, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD3 = GPIOD_CTL0_MD3_Values<GPIOD::CTL0, 12, 2, ReadWriteMode, GPIODCTL0Base> ;
    using CTL2 = GPIOD_CTL0_CTL2_Values<GPIOD::CTL0, 10, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD2 = GPIOD_CTL0_MD2_Values<GPIOD::CTL0, 8, 2, ReadWriteMode, GPIODCTL0Base> ;
    using CTL1 = GPIOD_CTL0_CTL1_Values<GPIOD::CTL0, 6, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD1 = GPIOD_CTL0_MD1_Values<GPIOD::CTL0, 4, 2, ReadWriteMode, GPIODCTL0Base> ;
    using CTL0Field = GPIOD_CTL0_CTL0_Values<GPIOD::CTL0, 2, 2, ReadWriteMode, GPIODCTL0Base> ;
    using MD0 = GPIOD_CTL0_MD0_Values<GPIOD::CTL0, 0, 2, ReadWriteMode, GPIODCTL0Base> ;
    using FieldValues = GPIOD_CTL0_MD0_Values<GPIOD::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40011400, 32, ReadWriteMode, GPIODCTL0Base, T...> ;

  struct GPIODCTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40011404, 32, ReadWriteMode>
  {
    using CTL15 = GPIOD_CTL1_CTL15_Values<GPIOD::CTL1, 30, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD15 = GPIOD_CTL1_MD15_Values<GPIOD::CTL1, 28, 2, ReadWriteMode, GPIODCTL1Base> ;
    using CTL14 = GPIOD_CTL1_CTL14_Values<GPIOD::CTL1, 26, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD14 = GPIOD_CTL1_MD14_Values<GPIOD::CTL1, 24, 2, ReadWriteMode, GPIODCTL1Base> ;
    using CTL13 = GPIOD_CTL1_CTL13_Values<GPIOD::CTL1, 22, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD13 = GPIOD_CTL1_MD13_Values<GPIOD::CTL1, 20, 2, ReadWriteMode, GPIODCTL1Base> ;
    using CTL12 = GPIOD_CTL1_CTL12_Values<GPIOD::CTL1, 18, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD12 = GPIOD_CTL1_MD12_Values<GPIOD::CTL1, 16, 2, ReadWriteMode, GPIODCTL1Base> ;
    using CTL11 = GPIOD_CTL1_CTL11_Values<GPIOD::CTL1, 14, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD11 = GPIOD_CTL1_MD11_Values<GPIOD::CTL1, 12, 2, ReadWriteMode, GPIODCTL1Base> ;
    using CTL10 = GPIOD_CTL1_CTL10_Values<GPIOD::CTL1, 10, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD10 = GPIOD_CTL1_MD10_Values<GPIOD::CTL1, 8, 2, ReadWriteMode, GPIODCTL1Base> ;
    using CTL9 = GPIOD_CTL1_CTL9_Values<GPIOD::CTL1, 6, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD9 = GPIOD_CTL1_MD9_Values<GPIOD::CTL1, 4, 2, ReadWriteMode, GPIODCTL1Base> ;
    using CTL8 = GPIOD_CTL1_CTL8_Values<GPIOD::CTL1, 2, 2, ReadWriteMode, GPIODCTL1Base> ;
    using MD8 = GPIOD_CTL1_MD8_Values<GPIOD::CTL1, 0, 2, ReadWriteMode, GPIODCTL1Base> ;
    using FieldValues = GPIOD_CTL1_MD8_Values<GPIOD::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40011404, 32, ReadWriteMode, GPIODCTL1Base, T...> ;

  struct GPIODISTATBase {} ;

  struct ISTAT : public RegisterBase<0x40011408, 32, ReadMode>
  {
    using ISTAT15 = GPIOD_ISTAT_ISTAT15_Values<GPIOD::ISTAT, 15, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT14 = GPIOD_ISTAT_ISTAT14_Values<GPIOD::ISTAT, 14, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT13 = GPIOD_ISTAT_ISTAT13_Values<GPIOD::ISTAT, 13, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT12 = GPIOD_ISTAT_ISTAT12_Values<GPIOD::ISTAT, 12, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT11 = GPIOD_ISTAT_ISTAT11_Values<GPIOD::ISTAT, 11, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT10 = GPIOD_ISTAT_ISTAT10_Values<GPIOD::ISTAT, 10, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT9 = GPIOD_ISTAT_ISTAT9_Values<GPIOD::ISTAT, 9, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT8 = GPIOD_ISTAT_ISTAT8_Values<GPIOD::ISTAT, 8, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT7 = GPIOD_ISTAT_ISTAT7_Values<GPIOD::ISTAT, 7, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT6 = GPIOD_ISTAT_ISTAT6_Values<GPIOD::ISTAT, 6, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT5 = GPIOD_ISTAT_ISTAT5_Values<GPIOD::ISTAT, 5, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT4 = GPIOD_ISTAT_ISTAT4_Values<GPIOD::ISTAT, 4, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT3 = GPIOD_ISTAT_ISTAT3_Values<GPIOD::ISTAT, 3, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT2 = GPIOD_ISTAT_ISTAT2_Values<GPIOD::ISTAT, 2, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT1 = GPIOD_ISTAT_ISTAT1_Values<GPIOD::ISTAT, 1, 1, ReadMode, GPIODISTATBase> ;
    using ISTAT0 = GPIOD_ISTAT_ISTAT0_Values<GPIOD::ISTAT, 0, 1, ReadMode, GPIODISTATBase> ;
    using FieldValues = GPIOD_ISTAT_ISTAT0_Values<GPIOD::ISTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTATPack  = Register<0x40011408, 32, ReadMode, GPIODISTATBase, T...> ;

  struct GPIODOCTLBase {} ;

  struct OCTL : public RegisterBase<0x4001140C, 32, ReadWriteMode>
  {
    using OCTL15 = GPIOD_OCTL_OCTL15_Values<GPIOD::OCTL, 15, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL14 = GPIOD_OCTL_OCTL14_Values<GPIOD::OCTL, 14, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL13 = GPIOD_OCTL_OCTL13_Values<GPIOD::OCTL, 13, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL12 = GPIOD_OCTL_OCTL12_Values<GPIOD::OCTL, 12, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL11 = GPIOD_OCTL_OCTL11_Values<GPIOD::OCTL, 11, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL10 = GPIOD_OCTL_OCTL10_Values<GPIOD::OCTL, 10, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL9 = GPIOD_OCTL_OCTL9_Values<GPIOD::OCTL, 9, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL8 = GPIOD_OCTL_OCTL8_Values<GPIOD::OCTL, 8, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL7 = GPIOD_OCTL_OCTL7_Values<GPIOD::OCTL, 7, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL6 = GPIOD_OCTL_OCTL6_Values<GPIOD::OCTL, 6, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL5 = GPIOD_OCTL_OCTL5_Values<GPIOD::OCTL, 5, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL4 = GPIOD_OCTL_OCTL4_Values<GPIOD::OCTL, 4, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL3 = GPIOD_OCTL_OCTL3_Values<GPIOD::OCTL, 3, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL2 = GPIOD_OCTL_OCTL2_Values<GPIOD::OCTL, 2, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL1 = GPIOD_OCTL_OCTL1_Values<GPIOD::OCTL, 1, 1, ReadWriteMode, GPIODOCTLBase> ;
    using OCTL0 = GPIOD_OCTL_OCTL0_Values<GPIOD::OCTL, 0, 1, ReadWriteMode, GPIODOCTLBase> ;
    using FieldValues = GPIOD_OCTL_OCTL0_Values<GPIOD::OCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OCTLPack  = Register<0x4001140C, 32, ReadWriteMode, GPIODOCTLBase, T...> ;

  struct GPIODBOPBase {} ;

  struct BOP : public RegisterBase<0x40011410, 32, WriteMode>
  {
    using CR15 = GPIOD_BOP_CR15_Values<GPIOD::BOP, 31, 1, WriteMode, GPIODBOPBase> ;
    using CR14 = GPIOD_BOP_CR14_Values<GPIOD::BOP, 30, 1, WriteMode, GPIODBOPBase> ;
    using CR13 = GPIOD_BOP_CR13_Values<GPIOD::BOP, 29, 1, WriteMode, GPIODBOPBase> ;
    using CR12 = GPIOD_BOP_CR12_Values<GPIOD::BOP, 28, 1, WriteMode, GPIODBOPBase> ;
    using CR11 = GPIOD_BOP_CR11_Values<GPIOD::BOP, 27, 1, WriteMode, GPIODBOPBase> ;
    using CR10 = GPIOD_BOP_CR10_Values<GPIOD::BOP, 26, 1, WriteMode, GPIODBOPBase> ;
    using CR9 = GPIOD_BOP_CR9_Values<GPIOD::BOP, 25, 1, WriteMode, GPIODBOPBase> ;
    using CR8 = GPIOD_BOP_CR8_Values<GPIOD::BOP, 24, 1, WriteMode, GPIODBOPBase> ;
    using CR7 = GPIOD_BOP_CR7_Values<GPIOD::BOP, 23, 1, WriteMode, GPIODBOPBase> ;
    using CR6 = GPIOD_BOP_CR6_Values<GPIOD::BOP, 22, 1, WriteMode, GPIODBOPBase> ;
    using CR5 = GPIOD_BOP_CR5_Values<GPIOD::BOP, 21, 1, WriteMode, GPIODBOPBase> ;
    using CR4 = GPIOD_BOP_CR4_Values<GPIOD::BOP, 20, 1, WriteMode, GPIODBOPBase> ;
    using CR3 = GPIOD_BOP_CR3_Values<GPIOD::BOP, 19, 1, WriteMode, GPIODBOPBase> ;
    using CR2 = GPIOD_BOP_CR2_Values<GPIOD::BOP, 18, 1, WriteMode, GPIODBOPBase> ;
    using CR1 = GPIOD_BOP_CR1_Values<GPIOD::BOP, 17, 1, WriteMode, GPIODBOPBase> ;
    using CR0 = GPIOD_BOP_CR0_Values<GPIOD::BOP, 16, 1, WriteMode, GPIODBOPBase> ;
    using BOP15 = GPIOD_BOP_BOP15_Values<GPIOD::BOP, 15, 1, WriteMode, GPIODBOPBase> ;
    using BOP14 = GPIOD_BOP_BOP14_Values<GPIOD::BOP, 14, 1, WriteMode, GPIODBOPBase> ;
    using BOP13 = GPIOD_BOP_BOP13_Values<GPIOD::BOP, 13, 1, WriteMode, GPIODBOPBase> ;
    using BOP12 = GPIOD_BOP_BOP12_Values<GPIOD::BOP, 12, 1, WriteMode, GPIODBOPBase> ;
    using BOP11 = GPIOD_BOP_BOP11_Values<GPIOD::BOP, 11, 1, WriteMode, GPIODBOPBase> ;
    using BOP10 = GPIOD_BOP_BOP10_Values<GPIOD::BOP, 10, 1, WriteMode, GPIODBOPBase> ;
    using BOP9 = GPIOD_BOP_BOP9_Values<GPIOD::BOP, 9, 1, WriteMode, GPIODBOPBase> ;
    using BOP8 = GPIOD_BOP_BOP8_Values<GPIOD::BOP, 8, 1, WriteMode, GPIODBOPBase> ;
    using BOP7 = GPIOD_BOP_BOP7_Values<GPIOD::BOP, 7, 1, WriteMode, GPIODBOPBase> ;
    using BOP6 = GPIOD_BOP_BOP6_Values<GPIOD::BOP, 6, 1, WriteMode, GPIODBOPBase> ;
    using BOP5 = GPIOD_BOP_BOP5_Values<GPIOD::BOP, 5, 1, WriteMode, GPIODBOPBase> ;
    using BOP4 = GPIOD_BOP_BOP4_Values<GPIOD::BOP, 4, 1, WriteMode, GPIODBOPBase> ;
    using BOP3 = GPIOD_BOP_BOP3_Values<GPIOD::BOP, 3, 1, WriteMode, GPIODBOPBase> ;
    using BOP2 = GPIOD_BOP_BOP2_Values<GPIOD::BOP, 2, 1, WriteMode, GPIODBOPBase> ;
    using BOP1 = GPIOD_BOP_BOP1_Values<GPIOD::BOP, 1, 1, WriteMode, GPIODBOPBase> ;
    using BOP0 = GPIOD_BOP_BOP0_Values<GPIOD::BOP, 0, 1, WriteMode, GPIODBOPBase> ;
    using FieldValues = GPIOD_BOP_BOP0_Values<GPIOD::BOP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BOPPack  = Register<0x40011410, 32, WriteMode, GPIODBOPBase, T...> ;

  struct GPIODBCBase {} ;

  struct BC : public RegisterBase<0x40011414, 32, WriteMode>
  {
    using CR15 = GPIOD_BC_CR15_Values<GPIOD::BC, 15, 1, WriteMode, GPIODBCBase> ;
    using CR14 = GPIOD_BC_CR14_Values<GPIOD::BC, 14, 1, WriteMode, GPIODBCBase> ;
    using CR13 = GPIOD_BC_CR13_Values<GPIOD::BC, 13, 1, WriteMode, GPIODBCBase> ;
    using CR12 = GPIOD_BC_CR12_Values<GPIOD::BC, 12, 1, WriteMode, GPIODBCBase> ;
    using CR11 = GPIOD_BC_CR11_Values<GPIOD::BC, 11, 1, WriteMode, GPIODBCBase> ;
    using CR10 = GPIOD_BC_CR10_Values<GPIOD::BC, 10, 1, WriteMode, GPIODBCBase> ;
    using CR9 = GPIOD_BC_CR9_Values<GPIOD::BC, 9, 1, WriteMode, GPIODBCBase> ;
    using CR8 = GPIOD_BC_CR8_Values<GPIOD::BC, 8, 1, WriteMode, GPIODBCBase> ;
    using CR7 = GPIOD_BC_CR7_Values<GPIOD::BC, 7, 1, WriteMode, GPIODBCBase> ;
    using CR6 = GPIOD_BC_CR6_Values<GPIOD::BC, 6, 1, WriteMode, GPIODBCBase> ;
    using CR5 = GPIOD_BC_CR5_Values<GPIOD::BC, 5, 1, WriteMode, GPIODBCBase> ;
    using CR4 = GPIOD_BC_CR4_Values<GPIOD::BC, 4, 1, WriteMode, GPIODBCBase> ;
    using CR3 = GPIOD_BC_CR3_Values<GPIOD::BC, 3, 1, WriteMode, GPIODBCBase> ;
    using CR2 = GPIOD_BC_CR2_Values<GPIOD::BC, 2, 1, WriteMode, GPIODBCBase> ;
    using CR1 = GPIOD_BC_CR1_Values<GPIOD::BC, 1, 1, WriteMode, GPIODBCBase> ;
    using CR0 = GPIOD_BC_CR0_Values<GPIOD::BC, 0, 1, WriteMode, GPIODBCBase> ;
    using FieldValues = GPIOD_BC_CR0_Values<GPIOD::BC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCPack  = Register<0x40011414, 32, WriteMode, GPIODBCBase, T...> ;

  struct GPIODLOCKBase {} ;

  struct LOCK : public RegisterBase<0x40011418, 32, ReadWriteMode>
  {
    using LKK = GPIOD_LOCK_LKK_Values<GPIOD::LOCK, 16, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK15 = GPIOD_LOCK_LK15_Values<GPIOD::LOCK, 15, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK14 = GPIOD_LOCK_LK14_Values<GPIOD::LOCK, 14, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK13 = GPIOD_LOCK_LK13_Values<GPIOD::LOCK, 13, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK12 = GPIOD_LOCK_LK12_Values<GPIOD::LOCK, 12, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK11 = GPIOD_LOCK_LK11_Values<GPIOD::LOCK, 11, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK10 = GPIOD_LOCK_LK10_Values<GPIOD::LOCK, 10, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK9 = GPIOD_LOCK_LK9_Values<GPIOD::LOCK, 9, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK8 = GPIOD_LOCK_LK8_Values<GPIOD::LOCK, 8, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK7 = GPIOD_LOCK_LK7_Values<GPIOD::LOCK, 7, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK6 = GPIOD_LOCK_LK6_Values<GPIOD::LOCK, 6, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK5 = GPIOD_LOCK_LK5_Values<GPIOD::LOCK, 5, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK4 = GPIOD_LOCK_LK4_Values<GPIOD::LOCK, 4, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK3 = GPIOD_LOCK_LK3_Values<GPIOD::LOCK, 3, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK2 = GPIOD_LOCK_LK2_Values<GPIOD::LOCK, 2, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK1 = GPIOD_LOCK_LK1_Values<GPIOD::LOCK, 1, 1, ReadWriteMode, GPIODLOCKBase> ;
    using LK0 = GPIOD_LOCK_LK0_Values<GPIOD::LOCK, 0, 1, ReadWriteMode, GPIODLOCKBase> ;
    using FieldValues = GPIOD_LOCK_LK0_Values<GPIOD::LOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LOCKPack  = Register<0x40011418, 32, ReadWriteMode, GPIODLOCKBase, T...> ;

} ;

#endif //#if !defined(GPIODREGISTERS_HPP)
