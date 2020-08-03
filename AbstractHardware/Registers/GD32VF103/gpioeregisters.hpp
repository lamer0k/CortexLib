/*******************************************************************************
* Filename      : gpioeregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(GPIOEREGISTERS_HPP)
#define GPIOEREGISTERS_HPP

#include "gpioefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOE
{
  struct GPIOECTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40011800, 32, ReadWriteMode>
  {
    using CTL7 = GPIOE_CTL0_CTL7_Values<GPIOE::CTL0, 30, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD7 = GPIOE_CTL0_MD7_Values<GPIOE::CTL0, 28, 2, ReadWriteMode, GPIOECTL0Base> ;
    using CTL6 = GPIOE_CTL0_CTL6_Values<GPIOE::CTL0, 26, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD6 = GPIOE_CTL0_MD6_Values<GPIOE::CTL0, 24, 2, ReadWriteMode, GPIOECTL0Base> ;
    using CTL5 = GPIOE_CTL0_CTL5_Values<GPIOE::CTL0, 22, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD5 = GPIOE_CTL0_MD5_Values<GPIOE::CTL0, 20, 2, ReadWriteMode, GPIOECTL0Base> ;
    using CTL4 = GPIOE_CTL0_CTL4_Values<GPIOE::CTL0, 18, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD4 = GPIOE_CTL0_MD4_Values<GPIOE::CTL0, 16, 2, ReadWriteMode, GPIOECTL0Base> ;
    using CTL3 = GPIOE_CTL0_CTL3_Values<GPIOE::CTL0, 14, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD3 = GPIOE_CTL0_MD3_Values<GPIOE::CTL0, 12, 2, ReadWriteMode, GPIOECTL0Base> ;
    using CTL2 = GPIOE_CTL0_CTL2_Values<GPIOE::CTL0, 10, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD2 = GPIOE_CTL0_MD2_Values<GPIOE::CTL0, 8, 2, ReadWriteMode, GPIOECTL0Base> ;
    using CTL1 = GPIOE_CTL0_CTL1_Values<GPIOE::CTL0, 6, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD1 = GPIOE_CTL0_MD1_Values<GPIOE::CTL0, 4, 2, ReadWriteMode, GPIOECTL0Base> ;
    using CTL0Field = GPIOE_CTL0_CTL0_Values<GPIOE::CTL0, 2, 2, ReadWriteMode, GPIOECTL0Base> ;
    using MD0 = GPIOE_CTL0_MD0_Values<GPIOE::CTL0, 0, 2, ReadWriteMode, GPIOECTL0Base> ;
    using FieldValues = GPIOE_CTL0_MD0_Values<GPIOE::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40011800, 32, ReadWriteMode, GPIOECTL0Base, T...> ;

  struct GPIOECTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40011804, 32, ReadWriteMode>
  {
    using CTL15 = GPIOE_CTL1_CTL15_Values<GPIOE::CTL1, 30, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD15 = GPIOE_CTL1_MD15_Values<GPIOE::CTL1, 28, 2, ReadWriteMode, GPIOECTL1Base> ;
    using CTL14 = GPIOE_CTL1_CTL14_Values<GPIOE::CTL1, 26, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD14 = GPIOE_CTL1_MD14_Values<GPIOE::CTL1, 24, 2, ReadWriteMode, GPIOECTL1Base> ;
    using CTL13 = GPIOE_CTL1_CTL13_Values<GPIOE::CTL1, 22, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD13 = GPIOE_CTL1_MD13_Values<GPIOE::CTL1, 20, 2, ReadWriteMode, GPIOECTL1Base> ;
    using CTL12 = GPIOE_CTL1_CTL12_Values<GPIOE::CTL1, 18, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD12 = GPIOE_CTL1_MD12_Values<GPIOE::CTL1, 16, 2, ReadWriteMode, GPIOECTL1Base> ;
    using CTL11 = GPIOE_CTL1_CTL11_Values<GPIOE::CTL1, 14, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD11 = GPIOE_CTL1_MD11_Values<GPIOE::CTL1, 12, 2, ReadWriteMode, GPIOECTL1Base> ;
    using CTL10 = GPIOE_CTL1_CTL10_Values<GPIOE::CTL1, 10, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD10 = GPIOE_CTL1_MD10_Values<GPIOE::CTL1, 8, 2, ReadWriteMode, GPIOECTL1Base> ;
    using CTL9 = GPIOE_CTL1_CTL9_Values<GPIOE::CTL1, 6, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD9 = GPIOE_CTL1_MD9_Values<GPIOE::CTL1, 4, 2, ReadWriteMode, GPIOECTL1Base> ;
    using CTL8 = GPIOE_CTL1_CTL8_Values<GPIOE::CTL1, 2, 2, ReadWriteMode, GPIOECTL1Base> ;
    using MD8 = GPIOE_CTL1_MD8_Values<GPIOE::CTL1, 0, 2, ReadWriteMode, GPIOECTL1Base> ;
    using FieldValues = GPIOE_CTL1_MD8_Values<GPIOE::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40011804, 32, ReadWriteMode, GPIOECTL1Base, T...> ;

  struct GPIOEISTATBase {} ;

  struct ISTAT : public RegisterBase<0x40011808, 32, ReadMode>
  {
    using ISTAT15 = GPIOE_ISTAT_ISTAT15_Values<GPIOE::ISTAT, 15, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT14 = GPIOE_ISTAT_ISTAT14_Values<GPIOE::ISTAT, 14, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT13 = GPIOE_ISTAT_ISTAT13_Values<GPIOE::ISTAT, 13, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT12 = GPIOE_ISTAT_ISTAT12_Values<GPIOE::ISTAT, 12, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT11 = GPIOE_ISTAT_ISTAT11_Values<GPIOE::ISTAT, 11, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT10 = GPIOE_ISTAT_ISTAT10_Values<GPIOE::ISTAT, 10, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT9 = GPIOE_ISTAT_ISTAT9_Values<GPIOE::ISTAT, 9, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT8 = GPIOE_ISTAT_ISTAT8_Values<GPIOE::ISTAT, 8, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT7 = GPIOE_ISTAT_ISTAT7_Values<GPIOE::ISTAT, 7, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT6 = GPIOE_ISTAT_ISTAT6_Values<GPIOE::ISTAT, 6, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT5 = GPIOE_ISTAT_ISTAT5_Values<GPIOE::ISTAT, 5, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT4 = GPIOE_ISTAT_ISTAT4_Values<GPIOE::ISTAT, 4, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT3 = GPIOE_ISTAT_ISTAT3_Values<GPIOE::ISTAT, 3, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT2 = GPIOE_ISTAT_ISTAT2_Values<GPIOE::ISTAT, 2, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT1 = GPIOE_ISTAT_ISTAT1_Values<GPIOE::ISTAT, 1, 1, ReadMode, GPIOEISTATBase> ;
    using ISTAT0 = GPIOE_ISTAT_ISTAT0_Values<GPIOE::ISTAT, 0, 1, ReadMode, GPIOEISTATBase> ;
    using FieldValues = GPIOE_ISTAT_ISTAT0_Values<GPIOE::ISTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTATPack  = Register<0x40011808, 32, ReadMode, GPIOEISTATBase, T...> ;

  struct GPIOEOCTLBase {} ;

  struct OCTL : public RegisterBase<0x4001180C, 32, ReadWriteMode>
  {
    using OCTL15 = GPIOE_OCTL_OCTL15_Values<GPIOE::OCTL, 15, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL14 = GPIOE_OCTL_OCTL14_Values<GPIOE::OCTL, 14, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL13 = GPIOE_OCTL_OCTL13_Values<GPIOE::OCTL, 13, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL12 = GPIOE_OCTL_OCTL12_Values<GPIOE::OCTL, 12, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL11 = GPIOE_OCTL_OCTL11_Values<GPIOE::OCTL, 11, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL10 = GPIOE_OCTL_OCTL10_Values<GPIOE::OCTL, 10, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL9 = GPIOE_OCTL_OCTL9_Values<GPIOE::OCTL, 9, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL8 = GPIOE_OCTL_OCTL8_Values<GPIOE::OCTL, 8, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL7 = GPIOE_OCTL_OCTL7_Values<GPIOE::OCTL, 7, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL6 = GPIOE_OCTL_OCTL6_Values<GPIOE::OCTL, 6, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL5 = GPIOE_OCTL_OCTL5_Values<GPIOE::OCTL, 5, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL4 = GPIOE_OCTL_OCTL4_Values<GPIOE::OCTL, 4, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL3 = GPIOE_OCTL_OCTL3_Values<GPIOE::OCTL, 3, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL2 = GPIOE_OCTL_OCTL2_Values<GPIOE::OCTL, 2, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL1 = GPIOE_OCTL_OCTL1_Values<GPIOE::OCTL, 1, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using OCTL0 = GPIOE_OCTL_OCTL0_Values<GPIOE::OCTL, 0, 1, ReadWriteMode, GPIOEOCTLBase> ;
    using FieldValues = GPIOE_OCTL_OCTL0_Values<GPIOE::OCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OCTLPack  = Register<0x4001180C, 32, ReadWriteMode, GPIOEOCTLBase, T...> ;

  struct GPIOEBOPBase {} ;

  struct BOP : public RegisterBase<0x40011810, 32, WriteMode>
  {
    using CR15 = GPIOE_BOP_CR15_Values<GPIOE::BOP, 31, 1, WriteMode, GPIOEBOPBase> ;
    using CR14 = GPIOE_BOP_CR14_Values<GPIOE::BOP, 30, 1, WriteMode, GPIOEBOPBase> ;
    using CR13 = GPIOE_BOP_CR13_Values<GPIOE::BOP, 29, 1, WriteMode, GPIOEBOPBase> ;
    using CR12 = GPIOE_BOP_CR12_Values<GPIOE::BOP, 28, 1, WriteMode, GPIOEBOPBase> ;
    using CR11 = GPIOE_BOP_CR11_Values<GPIOE::BOP, 27, 1, WriteMode, GPIOEBOPBase> ;
    using CR10 = GPIOE_BOP_CR10_Values<GPIOE::BOP, 26, 1, WriteMode, GPIOEBOPBase> ;
    using CR9 = GPIOE_BOP_CR9_Values<GPIOE::BOP, 25, 1, WriteMode, GPIOEBOPBase> ;
    using CR8 = GPIOE_BOP_CR8_Values<GPIOE::BOP, 24, 1, WriteMode, GPIOEBOPBase> ;
    using CR7 = GPIOE_BOP_CR7_Values<GPIOE::BOP, 23, 1, WriteMode, GPIOEBOPBase> ;
    using CR6 = GPIOE_BOP_CR6_Values<GPIOE::BOP, 22, 1, WriteMode, GPIOEBOPBase> ;
    using CR5 = GPIOE_BOP_CR5_Values<GPIOE::BOP, 21, 1, WriteMode, GPIOEBOPBase> ;
    using CR4 = GPIOE_BOP_CR4_Values<GPIOE::BOP, 20, 1, WriteMode, GPIOEBOPBase> ;
    using CR3 = GPIOE_BOP_CR3_Values<GPIOE::BOP, 19, 1, WriteMode, GPIOEBOPBase> ;
    using CR2 = GPIOE_BOP_CR2_Values<GPIOE::BOP, 18, 1, WriteMode, GPIOEBOPBase> ;
    using CR1 = GPIOE_BOP_CR1_Values<GPIOE::BOP, 17, 1, WriteMode, GPIOEBOPBase> ;
    using CR0 = GPIOE_BOP_CR0_Values<GPIOE::BOP, 16, 1, WriteMode, GPIOEBOPBase> ;
    using BOP15 = GPIOE_BOP_BOP15_Values<GPIOE::BOP, 15, 1, WriteMode, GPIOEBOPBase> ;
    using BOP14 = GPIOE_BOP_BOP14_Values<GPIOE::BOP, 14, 1, WriteMode, GPIOEBOPBase> ;
    using BOP13 = GPIOE_BOP_BOP13_Values<GPIOE::BOP, 13, 1, WriteMode, GPIOEBOPBase> ;
    using BOP12 = GPIOE_BOP_BOP12_Values<GPIOE::BOP, 12, 1, WriteMode, GPIOEBOPBase> ;
    using BOP11 = GPIOE_BOP_BOP11_Values<GPIOE::BOP, 11, 1, WriteMode, GPIOEBOPBase> ;
    using BOP10 = GPIOE_BOP_BOP10_Values<GPIOE::BOP, 10, 1, WriteMode, GPIOEBOPBase> ;
    using BOP9 = GPIOE_BOP_BOP9_Values<GPIOE::BOP, 9, 1, WriteMode, GPIOEBOPBase> ;
    using BOP8 = GPIOE_BOP_BOP8_Values<GPIOE::BOP, 8, 1, WriteMode, GPIOEBOPBase> ;
    using BOP7 = GPIOE_BOP_BOP7_Values<GPIOE::BOP, 7, 1, WriteMode, GPIOEBOPBase> ;
    using BOP6 = GPIOE_BOP_BOP6_Values<GPIOE::BOP, 6, 1, WriteMode, GPIOEBOPBase> ;
    using BOP5 = GPIOE_BOP_BOP5_Values<GPIOE::BOP, 5, 1, WriteMode, GPIOEBOPBase> ;
    using BOP4 = GPIOE_BOP_BOP4_Values<GPIOE::BOP, 4, 1, WriteMode, GPIOEBOPBase> ;
    using BOP3 = GPIOE_BOP_BOP3_Values<GPIOE::BOP, 3, 1, WriteMode, GPIOEBOPBase> ;
    using BOP2 = GPIOE_BOP_BOP2_Values<GPIOE::BOP, 2, 1, WriteMode, GPIOEBOPBase> ;
    using BOP1 = GPIOE_BOP_BOP1_Values<GPIOE::BOP, 1, 1, WriteMode, GPIOEBOPBase> ;
    using BOP0 = GPIOE_BOP_BOP0_Values<GPIOE::BOP, 0, 1, WriteMode, GPIOEBOPBase> ;
    using FieldValues = GPIOE_BOP_BOP0_Values<GPIOE::BOP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BOPPack  = Register<0x40011810, 32, WriteMode, GPIOEBOPBase, T...> ;

  struct GPIOEBCBase {} ;

  struct BC : public RegisterBase<0x40011814, 32, WriteMode>
  {
    using CR15 = GPIOE_BC_CR15_Values<GPIOE::BC, 15, 1, WriteMode, GPIOEBCBase> ;
    using CR14 = GPIOE_BC_CR14_Values<GPIOE::BC, 14, 1, WriteMode, GPIOEBCBase> ;
    using CR13 = GPIOE_BC_CR13_Values<GPIOE::BC, 13, 1, WriteMode, GPIOEBCBase> ;
    using CR12 = GPIOE_BC_CR12_Values<GPIOE::BC, 12, 1, WriteMode, GPIOEBCBase> ;
    using CR11 = GPIOE_BC_CR11_Values<GPIOE::BC, 11, 1, WriteMode, GPIOEBCBase> ;
    using CR10 = GPIOE_BC_CR10_Values<GPIOE::BC, 10, 1, WriteMode, GPIOEBCBase> ;
    using CR9 = GPIOE_BC_CR9_Values<GPIOE::BC, 9, 1, WriteMode, GPIOEBCBase> ;
    using CR8 = GPIOE_BC_CR8_Values<GPIOE::BC, 8, 1, WriteMode, GPIOEBCBase> ;
    using CR7 = GPIOE_BC_CR7_Values<GPIOE::BC, 7, 1, WriteMode, GPIOEBCBase> ;
    using CR6 = GPIOE_BC_CR6_Values<GPIOE::BC, 6, 1, WriteMode, GPIOEBCBase> ;
    using CR5 = GPIOE_BC_CR5_Values<GPIOE::BC, 5, 1, WriteMode, GPIOEBCBase> ;
    using CR4 = GPIOE_BC_CR4_Values<GPIOE::BC, 4, 1, WriteMode, GPIOEBCBase> ;
    using CR3 = GPIOE_BC_CR3_Values<GPIOE::BC, 3, 1, WriteMode, GPIOEBCBase> ;
    using CR2 = GPIOE_BC_CR2_Values<GPIOE::BC, 2, 1, WriteMode, GPIOEBCBase> ;
    using CR1 = GPIOE_BC_CR1_Values<GPIOE::BC, 1, 1, WriteMode, GPIOEBCBase> ;
    using CR0 = GPIOE_BC_CR0_Values<GPIOE::BC, 0, 1, WriteMode, GPIOEBCBase> ;
    using FieldValues = GPIOE_BC_CR0_Values<GPIOE::BC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCPack  = Register<0x40011814, 32, WriteMode, GPIOEBCBase, T...> ;

  struct GPIOELOCKBase {} ;

  struct LOCK : public RegisterBase<0x40011818, 32, ReadWriteMode>
  {
    using LKK = GPIOE_LOCK_LKK_Values<GPIOE::LOCK, 16, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK15 = GPIOE_LOCK_LK15_Values<GPIOE::LOCK, 15, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK14 = GPIOE_LOCK_LK14_Values<GPIOE::LOCK, 14, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK13 = GPIOE_LOCK_LK13_Values<GPIOE::LOCK, 13, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK12 = GPIOE_LOCK_LK12_Values<GPIOE::LOCK, 12, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK11 = GPIOE_LOCK_LK11_Values<GPIOE::LOCK, 11, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK10 = GPIOE_LOCK_LK10_Values<GPIOE::LOCK, 10, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK9 = GPIOE_LOCK_LK9_Values<GPIOE::LOCK, 9, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK8 = GPIOE_LOCK_LK8_Values<GPIOE::LOCK, 8, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK7 = GPIOE_LOCK_LK7_Values<GPIOE::LOCK, 7, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK6 = GPIOE_LOCK_LK6_Values<GPIOE::LOCK, 6, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK5 = GPIOE_LOCK_LK5_Values<GPIOE::LOCK, 5, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK4 = GPIOE_LOCK_LK4_Values<GPIOE::LOCK, 4, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK3 = GPIOE_LOCK_LK3_Values<GPIOE::LOCK, 3, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK2 = GPIOE_LOCK_LK2_Values<GPIOE::LOCK, 2, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK1 = GPIOE_LOCK_LK1_Values<GPIOE::LOCK, 1, 1, ReadWriteMode, GPIOELOCKBase> ;
    using LK0 = GPIOE_LOCK_LK0_Values<GPIOE::LOCK, 0, 1, ReadWriteMode, GPIOELOCKBase> ;
    using FieldValues = GPIOE_LOCK_LK0_Values<GPIOE::LOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LOCKPack  = Register<0x40011818, 32, ReadWriteMode, GPIOELOCKBase, T...> ;

} ;

#endif //#if !defined(GPIOEREGISTERS_HPP)
