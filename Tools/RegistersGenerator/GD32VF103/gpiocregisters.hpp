/*******************************************************************************
* Filename      : gpiocregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(GPIOCREGISTERS_HPP)
#define GPIOCREGISTERS_HPP

#include "gpiocfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOC
{
  struct GPIOCCTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40011000, 32, ReadWriteMode>
  {
    using CTL7 = GPIOC_CTL0_CTL7_Values<GPIOC::CTL0, 30, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD7 = GPIOC_CTL0_MD7_Values<GPIOC::CTL0, 28, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using CTL6 = GPIOC_CTL0_CTL6_Values<GPIOC::CTL0, 26, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD6 = GPIOC_CTL0_MD6_Values<GPIOC::CTL0, 24, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using CTL5 = GPIOC_CTL0_CTL5_Values<GPIOC::CTL0, 22, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD5 = GPIOC_CTL0_MD5_Values<GPIOC::CTL0, 20, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using CTL4 = GPIOC_CTL0_CTL4_Values<GPIOC::CTL0, 18, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD4 = GPIOC_CTL0_MD4_Values<GPIOC::CTL0, 16, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using CTL3 = GPIOC_CTL0_CTL3_Values<GPIOC::CTL0, 14, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD3 = GPIOC_CTL0_MD3_Values<GPIOC::CTL0, 12, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using CTL2 = GPIOC_CTL0_CTL2_Values<GPIOC::CTL0, 10, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD2 = GPIOC_CTL0_MD2_Values<GPIOC::CTL0, 8, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using CTL1 = GPIOC_CTL0_CTL1_Values<GPIOC::CTL0, 6, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD1 = GPIOC_CTL0_MD1_Values<GPIOC::CTL0, 4, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using CTL0Field = GPIOC_CTL0_CTL0_Values<GPIOC::CTL0, 2, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using MD0 = GPIOC_CTL0_MD0_Values<GPIOC::CTL0, 0, 2, ReadWriteMode, GPIOCCTL0Base> ;
    using FieldValues = GPIOC_CTL0_MD0_Values<GPIOC::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40011000, 32, ReadWriteMode, GPIOCCTL0Base, T...> ;

  struct GPIOCCTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40011004, 32, ReadWriteMode>
  {
    using CTL15 = GPIOC_CTL1_CTL15_Values<GPIOC::CTL1, 30, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD15 = GPIOC_CTL1_MD15_Values<GPIOC::CTL1, 28, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using CTL14 = GPIOC_CTL1_CTL14_Values<GPIOC::CTL1, 26, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD14 = GPIOC_CTL1_MD14_Values<GPIOC::CTL1, 24, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using CTL13 = GPIOC_CTL1_CTL13_Values<GPIOC::CTL1, 22, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD13 = GPIOC_CTL1_MD13_Values<GPIOC::CTL1, 20, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using CTL12 = GPIOC_CTL1_CTL12_Values<GPIOC::CTL1, 18, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD12 = GPIOC_CTL1_MD12_Values<GPIOC::CTL1, 16, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using CTL11 = GPIOC_CTL1_CTL11_Values<GPIOC::CTL1, 14, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD11 = GPIOC_CTL1_MD11_Values<GPIOC::CTL1, 12, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using CTL10 = GPIOC_CTL1_CTL10_Values<GPIOC::CTL1, 10, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD10 = GPIOC_CTL1_MD10_Values<GPIOC::CTL1, 8, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using CTL9 = GPIOC_CTL1_CTL9_Values<GPIOC::CTL1, 6, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD9 = GPIOC_CTL1_MD9_Values<GPIOC::CTL1, 4, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using CTL8 = GPIOC_CTL1_CTL8_Values<GPIOC::CTL1, 2, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using MD8 = GPIOC_CTL1_MD8_Values<GPIOC::CTL1, 0, 2, ReadWriteMode, GPIOCCTL1Base> ;
    using FieldValues = GPIOC_CTL1_MD8_Values<GPIOC::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40011004, 32, ReadWriteMode, GPIOCCTL1Base, T...> ;

  struct GPIOCISTATBase {} ;

  struct ISTAT : public RegisterBase<0x40011008, 32, ReadMode>
  {
    using ISTAT15 = GPIOC_ISTAT_ISTAT15_Values<GPIOC::ISTAT, 15, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT14 = GPIOC_ISTAT_ISTAT14_Values<GPIOC::ISTAT, 14, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT13 = GPIOC_ISTAT_ISTAT13_Values<GPIOC::ISTAT, 13, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT12 = GPIOC_ISTAT_ISTAT12_Values<GPIOC::ISTAT, 12, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT11 = GPIOC_ISTAT_ISTAT11_Values<GPIOC::ISTAT, 11, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT10 = GPIOC_ISTAT_ISTAT10_Values<GPIOC::ISTAT, 10, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT9 = GPIOC_ISTAT_ISTAT9_Values<GPIOC::ISTAT, 9, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT8 = GPIOC_ISTAT_ISTAT8_Values<GPIOC::ISTAT, 8, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT7 = GPIOC_ISTAT_ISTAT7_Values<GPIOC::ISTAT, 7, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT6 = GPIOC_ISTAT_ISTAT6_Values<GPIOC::ISTAT, 6, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT5 = GPIOC_ISTAT_ISTAT5_Values<GPIOC::ISTAT, 5, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT4 = GPIOC_ISTAT_ISTAT4_Values<GPIOC::ISTAT, 4, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT3 = GPIOC_ISTAT_ISTAT3_Values<GPIOC::ISTAT, 3, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT2 = GPIOC_ISTAT_ISTAT2_Values<GPIOC::ISTAT, 2, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT1 = GPIOC_ISTAT_ISTAT1_Values<GPIOC::ISTAT, 1, 1, ReadMode, GPIOCISTATBase> ;
    using ISTAT0 = GPIOC_ISTAT_ISTAT0_Values<GPIOC::ISTAT, 0, 1, ReadMode, GPIOCISTATBase> ;
    using FieldValues = GPIOC_ISTAT_ISTAT0_Values<GPIOC::ISTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTATPack  = Register<0x40011008, 32, ReadMode, GPIOCISTATBase, T...> ;

  struct GPIOCOCTLBase {} ;

  struct OCTL : public RegisterBase<0x4001100C, 32, ReadWriteMode>
  {
    using OCTL15 = GPIOC_OCTL_OCTL15_Values<GPIOC::OCTL, 15, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL14 = GPIOC_OCTL_OCTL14_Values<GPIOC::OCTL, 14, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL13 = GPIOC_OCTL_OCTL13_Values<GPIOC::OCTL, 13, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL12 = GPIOC_OCTL_OCTL12_Values<GPIOC::OCTL, 12, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL11 = GPIOC_OCTL_OCTL11_Values<GPIOC::OCTL, 11, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL10 = GPIOC_OCTL_OCTL10_Values<GPIOC::OCTL, 10, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL9 = GPIOC_OCTL_OCTL9_Values<GPIOC::OCTL, 9, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL8 = GPIOC_OCTL_OCTL8_Values<GPIOC::OCTL, 8, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL7 = GPIOC_OCTL_OCTL7_Values<GPIOC::OCTL, 7, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL6 = GPIOC_OCTL_OCTL6_Values<GPIOC::OCTL, 6, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL5 = GPIOC_OCTL_OCTL5_Values<GPIOC::OCTL, 5, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL4 = GPIOC_OCTL_OCTL4_Values<GPIOC::OCTL, 4, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL3 = GPIOC_OCTL_OCTL3_Values<GPIOC::OCTL, 3, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL2 = GPIOC_OCTL_OCTL2_Values<GPIOC::OCTL, 2, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL1 = GPIOC_OCTL_OCTL1_Values<GPIOC::OCTL, 1, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using OCTL0 = GPIOC_OCTL_OCTL0_Values<GPIOC::OCTL, 0, 1, ReadWriteMode, GPIOCOCTLBase> ;
    using FieldValues = GPIOC_OCTL_OCTL0_Values<GPIOC::OCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OCTLPack  = Register<0x4001100C, 32, ReadWriteMode, GPIOCOCTLBase, T...> ;

  struct GPIOCBOPBase {} ;

  struct BOP : public RegisterBase<0x40011010, 32, WriteMode>
  {
    using CR15 = GPIOC_BOP_CR15_Values<GPIOC::BOP, 31, 1, WriteMode, GPIOCBOPBase> ;
    using CR14 = GPIOC_BOP_CR14_Values<GPIOC::BOP, 30, 1, WriteMode, GPIOCBOPBase> ;
    using CR13 = GPIOC_BOP_CR13_Values<GPIOC::BOP, 29, 1, WriteMode, GPIOCBOPBase> ;
    using CR12 = GPIOC_BOP_CR12_Values<GPIOC::BOP, 28, 1, WriteMode, GPIOCBOPBase> ;
    using CR11 = GPIOC_BOP_CR11_Values<GPIOC::BOP, 27, 1, WriteMode, GPIOCBOPBase> ;
    using CR10 = GPIOC_BOP_CR10_Values<GPIOC::BOP, 26, 1, WriteMode, GPIOCBOPBase> ;
    using CR9 = GPIOC_BOP_CR9_Values<GPIOC::BOP, 25, 1, WriteMode, GPIOCBOPBase> ;
    using CR8 = GPIOC_BOP_CR8_Values<GPIOC::BOP, 24, 1, WriteMode, GPIOCBOPBase> ;
    using CR7 = GPIOC_BOP_CR7_Values<GPIOC::BOP, 23, 1, WriteMode, GPIOCBOPBase> ;
    using CR6 = GPIOC_BOP_CR6_Values<GPIOC::BOP, 22, 1, WriteMode, GPIOCBOPBase> ;
    using CR5 = GPIOC_BOP_CR5_Values<GPIOC::BOP, 21, 1, WriteMode, GPIOCBOPBase> ;
    using CR4 = GPIOC_BOP_CR4_Values<GPIOC::BOP, 20, 1, WriteMode, GPIOCBOPBase> ;
    using CR3 = GPIOC_BOP_CR3_Values<GPIOC::BOP, 19, 1, WriteMode, GPIOCBOPBase> ;
    using CR2 = GPIOC_BOP_CR2_Values<GPIOC::BOP, 18, 1, WriteMode, GPIOCBOPBase> ;
    using CR1 = GPIOC_BOP_CR1_Values<GPIOC::BOP, 17, 1, WriteMode, GPIOCBOPBase> ;
    using CR0 = GPIOC_BOP_CR0_Values<GPIOC::BOP, 16, 1, WriteMode, GPIOCBOPBase> ;
    using BOP15 = GPIOC_BOP_BOP15_Values<GPIOC::BOP, 15, 1, WriteMode, GPIOCBOPBase> ;
    using BOP14 = GPIOC_BOP_BOP14_Values<GPIOC::BOP, 14, 1, WriteMode, GPIOCBOPBase> ;
    using BOP13 = GPIOC_BOP_BOP13_Values<GPIOC::BOP, 13, 1, WriteMode, GPIOCBOPBase> ;
    using BOP12 = GPIOC_BOP_BOP12_Values<GPIOC::BOP, 12, 1, WriteMode, GPIOCBOPBase> ;
    using BOP11 = GPIOC_BOP_BOP11_Values<GPIOC::BOP, 11, 1, WriteMode, GPIOCBOPBase> ;
    using BOP10 = GPIOC_BOP_BOP10_Values<GPIOC::BOP, 10, 1, WriteMode, GPIOCBOPBase> ;
    using BOP9 = GPIOC_BOP_BOP9_Values<GPIOC::BOP, 9, 1, WriteMode, GPIOCBOPBase> ;
    using BOP8 = GPIOC_BOP_BOP8_Values<GPIOC::BOP, 8, 1, WriteMode, GPIOCBOPBase> ;
    using BOP7 = GPIOC_BOP_BOP7_Values<GPIOC::BOP, 7, 1, WriteMode, GPIOCBOPBase> ;
    using BOP6 = GPIOC_BOP_BOP6_Values<GPIOC::BOP, 6, 1, WriteMode, GPIOCBOPBase> ;
    using BOP5 = GPIOC_BOP_BOP5_Values<GPIOC::BOP, 5, 1, WriteMode, GPIOCBOPBase> ;
    using BOP4 = GPIOC_BOP_BOP4_Values<GPIOC::BOP, 4, 1, WriteMode, GPIOCBOPBase> ;
    using BOP3 = GPIOC_BOP_BOP3_Values<GPIOC::BOP, 3, 1, WriteMode, GPIOCBOPBase> ;
    using BOP2 = GPIOC_BOP_BOP2_Values<GPIOC::BOP, 2, 1, WriteMode, GPIOCBOPBase> ;
    using BOP1 = GPIOC_BOP_BOP1_Values<GPIOC::BOP, 1, 1, WriteMode, GPIOCBOPBase> ;
    using BOP0 = GPIOC_BOP_BOP0_Values<GPIOC::BOP, 0, 1, WriteMode, GPIOCBOPBase> ;
    using FieldValues = GPIOC_BOP_BOP0_Values<GPIOC::BOP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BOPPack  = Register<0x40011010, 32, WriteMode, GPIOCBOPBase, T...> ;

  struct GPIOCBCBase {} ;

  struct BC : public RegisterBase<0x40011014, 32, WriteMode>
  {
    using CR15 = GPIOC_BC_CR15_Values<GPIOC::BC, 15, 1, WriteMode, GPIOCBCBase> ;
    using CR14 = GPIOC_BC_CR14_Values<GPIOC::BC, 14, 1, WriteMode, GPIOCBCBase> ;
    using CR13 = GPIOC_BC_CR13_Values<GPIOC::BC, 13, 1, WriteMode, GPIOCBCBase> ;
    using CR12 = GPIOC_BC_CR12_Values<GPIOC::BC, 12, 1, WriteMode, GPIOCBCBase> ;
    using CR11 = GPIOC_BC_CR11_Values<GPIOC::BC, 11, 1, WriteMode, GPIOCBCBase> ;
    using CR10 = GPIOC_BC_CR10_Values<GPIOC::BC, 10, 1, WriteMode, GPIOCBCBase> ;
    using CR9 = GPIOC_BC_CR9_Values<GPIOC::BC, 9, 1, WriteMode, GPIOCBCBase> ;
    using CR8 = GPIOC_BC_CR8_Values<GPIOC::BC, 8, 1, WriteMode, GPIOCBCBase> ;
    using CR7 = GPIOC_BC_CR7_Values<GPIOC::BC, 7, 1, WriteMode, GPIOCBCBase> ;
    using CR6 = GPIOC_BC_CR6_Values<GPIOC::BC, 6, 1, WriteMode, GPIOCBCBase> ;
    using CR5 = GPIOC_BC_CR5_Values<GPIOC::BC, 5, 1, WriteMode, GPIOCBCBase> ;
    using CR4 = GPIOC_BC_CR4_Values<GPIOC::BC, 4, 1, WriteMode, GPIOCBCBase> ;
    using CR3 = GPIOC_BC_CR3_Values<GPIOC::BC, 3, 1, WriteMode, GPIOCBCBase> ;
    using CR2 = GPIOC_BC_CR2_Values<GPIOC::BC, 2, 1, WriteMode, GPIOCBCBase> ;
    using CR1 = GPIOC_BC_CR1_Values<GPIOC::BC, 1, 1, WriteMode, GPIOCBCBase> ;
    using CR0 = GPIOC_BC_CR0_Values<GPIOC::BC, 0, 1, WriteMode, GPIOCBCBase> ;
    using FieldValues = GPIOC_BC_CR0_Values<GPIOC::BC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCPack  = Register<0x40011014, 32, WriteMode, GPIOCBCBase, T...> ;

  struct GPIOCLOCKBase {} ;

  struct LOCK : public RegisterBase<0x40011018, 32, ReadWriteMode>
  {
    using LKK = GPIOC_LOCK_LKK_Values<GPIOC::LOCK, 16, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK15 = GPIOC_LOCK_LK15_Values<GPIOC::LOCK, 15, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK14 = GPIOC_LOCK_LK14_Values<GPIOC::LOCK, 14, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK13 = GPIOC_LOCK_LK13_Values<GPIOC::LOCK, 13, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK12 = GPIOC_LOCK_LK12_Values<GPIOC::LOCK, 12, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK11 = GPIOC_LOCK_LK11_Values<GPIOC::LOCK, 11, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK10 = GPIOC_LOCK_LK10_Values<GPIOC::LOCK, 10, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK9 = GPIOC_LOCK_LK9_Values<GPIOC::LOCK, 9, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK8 = GPIOC_LOCK_LK8_Values<GPIOC::LOCK, 8, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK7 = GPIOC_LOCK_LK7_Values<GPIOC::LOCK, 7, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK6 = GPIOC_LOCK_LK6_Values<GPIOC::LOCK, 6, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK5 = GPIOC_LOCK_LK5_Values<GPIOC::LOCK, 5, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK4 = GPIOC_LOCK_LK4_Values<GPIOC::LOCK, 4, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK3 = GPIOC_LOCK_LK3_Values<GPIOC::LOCK, 3, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK2 = GPIOC_LOCK_LK2_Values<GPIOC::LOCK, 2, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK1 = GPIOC_LOCK_LK1_Values<GPIOC::LOCK, 1, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using LK0 = GPIOC_LOCK_LK0_Values<GPIOC::LOCK, 0, 1, ReadWriteMode, GPIOCLOCKBase> ;
    using FieldValues = GPIOC_LOCK_LK0_Values<GPIOC::LOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LOCKPack  = Register<0x40011018, 32, ReadWriteMode, GPIOCLOCKBase, T...> ;

} ;

#endif //#if !defined(GPIOCREGISTERS_HPP)
