/*******************************************************************************
* Filename      : gpiobregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(GPIOBREGISTERS_HPP)
#define GPIOBREGISTERS_HPP

#include "gpiobfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOB
{
  struct GPIOBCTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40010C00, 32, ReadWriteMode>
  {
    using CTL7 = GPIOB_CTL0_CTL7_Values<GPIOB::CTL0, 30, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD7 = GPIOB_CTL0_MD7_Values<GPIOB::CTL0, 28, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using CTL6 = GPIOB_CTL0_CTL6_Values<GPIOB::CTL0, 26, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD6 = GPIOB_CTL0_MD6_Values<GPIOB::CTL0, 24, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using CTL5 = GPIOB_CTL0_CTL5_Values<GPIOB::CTL0, 22, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD5 = GPIOB_CTL0_MD5_Values<GPIOB::CTL0, 20, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using CTL4 = GPIOB_CTL0_CTL4_Values<GPIOB::CTL0, 18, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD4 = GPIOB_CTL0_MD4_Values<GPIOB::CTL0, 16, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using CTL3 = GPIOB_CTL0_CTL3_Values<GPIOB::CTL0, 14, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD3 = GPIOB_CTL0_MD3_Values<GPIOB::CTL0, 12, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using CTL2 = GPIOB_CTL0_CTL2_Values<GPIOB::CTL0, 10, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD2 = GPIOB_CTL0_MD2_Values<GPIOB::CTL0, 8, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using CTL1 = GPIOB_CTL0_CTL1_Values<GPIOB::CTL0, 6, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD1 = GPIOB_CTL0_MD1_Values<GPIOB::CTL0, 4, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using CTL0Field = GPIOB_CTL0_CTL0_Values<GPIOB::CTL0, 2, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using MD0 = GPIOB_CTL0_MD0_Values<GPIOB::CTL0, 0, 2, ReadWriteMode, GPIOBCTL0Base> ;
    using FieldValues = GPIOB_CTL0_MD0_Values<GPIOB::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40010C00, 32, ReadWriteMode, GPIOBCTL0Base, T...> ;

  struct GPIOBCTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40010C04, 32, ReadWriteMode>
  {
    using CTL15 = GPIOB_CTL1_CTL15_Values<GPIOB::CTL1, 30, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD15 = GPIOB_CTL1_MD15_Values<GPIOB::CTL1, 28, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using CTL14 = GPIOB_CTL1_CTL14_Values<GPIOB::CTL1, 26, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD14 = GPIOB_CTL1_MD14_Values<GPIOB::CTL1, 24, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using CTL13 = GPIOB_CTL1_CTL13_Values<GPIOB::CTL1, 22, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD13 = GPIOB_CTL1_MD13_Values<GPIOB::CTL1, 20, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using CTL12 = GPIOB_CTL1_CTL12_Values<GPIOB::CTL1, 18, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD12 = GPIOB_CTL1_MD12_Values<GPIOB::CTL1, 16, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using CTL11 = GPIOB_CTL1_CTL11_Values<GPIOB::CTL1, 14, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD11 = GPIOB_CTL1_MD11_Values<GPIOB::CTL1, 12, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using CTL10 = GPIOB_CTL1_CTL10_Values<GPIOB::CTL1, 10, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD10 = GPIOB_CTL1_MD10_Values<GPIOB::CTL1, 8, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using CTL9 = GPIOB_CTL1_CTL9_Values<GPIOB::CTL1, 6, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD9 = GPIOB_CTL1_MD9_Values<GPIOB::CTL1, 4, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using CTL8 = GPIOB_CTL1_CTL8_Values<GPIOB::CTL1, 2, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using MD8 = GPIOB_CTL1_MD8_Values<GPIOB::CTL1, 0, 2, ReadWriteMode, GPIOBCTL1Base> ;
    using FieldValues = GPIOB_CTL1_MD8_Values<GPIOB::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40010C04, 32, ReadWriteMode, GPIOBCTL1Base, T...> ;

  struct GPIOBISTATBase {} ;

  struct ISTAT : public RegisterBase<0x40010C08, 32, ReadMode>
  {
    using ISTAT15 = GPIOB_ISTAT_ISTAT15_Values<GPIOB::ISTAT, 15, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT14 = GPIOB_ISTAT_ISTAT14_Values<GPIOB::ISTAT, 14, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT13 = GPIOB_ISTAT_ISTAT13_Values<GPIOB::ISTAT, 13, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT12 = GPIOB_ISTAT_ISTAT12_Values<GPIOB::ISTAT, 12, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT11 = GPIOB_ISTAT_ISTAT11_Values<GPIOB::ISTAT, 11, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT10 = GPIOB_ISTAT_ISTAT10_Values<GPIOB::ISTAT, 10, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT9 = GPIOB_ISTAT_ISTAT9_Values<GPIOB::ISTAT, 9, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT8 = GPIOB_ISTAT_ISTAT8_Values<GPIOB::ISTAT, 8, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT7 = GPIOB_ISTAT_ISTAT7_Values<GPIOB::ISTAT, 7, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT6 = GPIOB_ISTAT_ISTAT6_Values<GPIOB::ISTAT, 6, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT5 = GPIOB_ISTAT_ISTAT5_Values<GPIOB::ISTAT, 5, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT4 = GPIOB_ISTAT_ISTAT4_Values<GPIOB::ISTAT, 4, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT3 = GPIOB_ISTAT_ISTAT3_Values<GPIOB::ISTAT, 3, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT2 = GPIOB_ISTAT_ISTAT2_Values<GPIOB::ISTAT, 2, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT1 = GPIOB_ISTAT_ISTAT1_Values<GPIOB::ISTAT, 1, 1, ReadMode, GPIOBISTATBase> ;
    using ISTAT0 = GPIOB_ISTAT_ISTAT0_Values<GPIOB::ISTAT, 0, 1, ReadMode, GPIOBISTATBase> ;
    using FieldValues = GPIOB_ISTAT_ISTAT0_Values<GPIOB::ISTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTATPack  = Register<0x40010C08, 32, ReadMode, GPIOBISTATBase, T...> ;

  struct GPIOBOCTLBase {} ;

  struct OCTL : public RegisterBase<0x40010C0C, 32, ReadWriteMode>
  {
    using OCTL15 = GPIOB_OCTL_OCTL15_Values<GPIOB::OCTL, 15, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL14 = GPIOB_OCTL_OCTL14_Values<GPIOB::OCTL, 14, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL13 = GPIOB_OCTL_OCTL13_Values<GPIOB::OCTL, 13, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL12 = GPIOB_OCTL_OCTL12_Values<GPIOB::OCTL, 12, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL11 = GPIOB_OCTL_OCTL11_Values<GPIOB::OCTL, 11, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL10 = GPIOB_OCTL_OCTL10_Values<GPIOB::OCTL, 10, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL9 = GPIOB_OCTL_OCTL9_Values<GPIOB::OCTL, 9, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL8 = GPIOB_OCTL_OCTL8_Values<GPIOB::OCTL, 8, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL7 = GPIOB_OCTL_OCTL7_Values<GPIOB::OCTL, 7, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL6 = GPIOB_OCTL_OCTL6_Values<GPIOB::OCTL, 6, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL5 = GPIOB_OCTL_OCTL5_Values<GPIOB::OCTL, 5, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL4 = GPIOB_OCTL_OCTL4_Values<GPIOB::OCTL, 4, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL3 = GPIOB_OCTL_OCTL3_Values<GPIOB::OCTL, 3, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL2 = GPIOB_OCTL_OCTL2_Values<GPIOB::OCTL, 2, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL1 = GPIOB_OCTL_OCTL1_Values<GPIOB::OCTL, 1, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using OCTL0 = GPIOB_OCTL_OCTL0_Values<GPIOB::OCTL, 0, 1, ReadWriteMode, GPIOBOCTLBase> ;
    using FieldValues = GPIOB_OCTL_OCTL0_Values<GPIOB::OCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OCTLPack  = Register<0x40010C0C, 32, ReadWriteMode, GPIOBOCTLBase, T...> ;

  struct GPIOBBOPBase {} ;

  struct BOP : public RegisterBase<0x40010C10, 32, WriteMode>
  {
    using CR15 = GPIOB_BOP_CR15_Values<GPIOB::BOP, 31, 1, WriteMode, GPIOBBOPBase> ;
    using CR14 = GPIOB_BOP_CR14_Values<GPIOB::BOP, 30, 1, WriteMode, GPIOBBOPBase> ;
    using CR13 = GPIOB_BOP_CR13_Values<GPIOB::BOP, 29, 1, WriteMode, GPIOBBOPBase> ;
    using CR12 = GPIOB_BOP_CR12_Values<GPIOB::BOP, 28, 1, WriteMode, GPIOBBOPBase> ;
    using CR11 = GPIOB_BOP_CR11_Values<GPIOB::BOP, 27, 1, WriteMode, GPIOBBOPBase> ;
    using CR10 = GPIOB_BOP_CR10_Values<GPIOB::BOP, 26, 1, WriteMode, GPIOBBOPBase> ;
    using CR9 = GPIOB_BOP_CR9_Values<GPIOB::BOP, 25, 1, WriteMode, GPIOBBOPBase> ;
    using CR8 = GPIOB_BOP_CR8_Values<GPIOB::BOP, 24, 1, WriteMode, GPIOBBOPBase> ;
    using CR7 = GPIOB_BOP_CR7_Values<GPIOB::BOP, 23, 1, WriteMode, GPIOBBOPBase> ;
    using CR6 = GPIOB_BOP_CR6_Values<GPIOB::BOP, 22, 1, WriteMode, GPIOBBOPBase> ;
    using CR5 = GPIOB_BOP_CR5_Values<GPIOB::BOP, 21, 1, WriteMode, GPIOBBOPBase> ;
    using CR4 = GPIOB_BOP_CR4_Values<GPIOB::BOP, 20, 1, WriteMode, GPIOBBOPBase> ;
    using CR3 = GPIOB_BOP_CR3_Values<GPIOB::BOP, 19, 1, WriteMode, GPIOBBOPBase> ;
    using CR2 = GPIOB_BOP_CR2_Values<GPIOB::BOP, 18, 1, WriteMode, GPIOBBOPBase> ;
    using CR1 = GPIOB_BOP_CR1_Values<GPIOB::BOP, 17, 1, WriteMode, GPIOBBOPBase> ;
    using CR0 = GPIOB_BOP_CR0_Values<GPIOB::BOP, 16, 1, WriteMode, GPIOBBOPBase> ;
    using BOP15 = GPIOB_BOP_BOP15_Values<GPIOB::BOP, 15, 1, WriteMode, GPIOBBOPBase> ;
    using BOP14 = GPIOB_BOP_BOP14_Values<GPIOB::BOP, 14, 1, WriteMode, GPIOBBOPBase> ;
    using BOP13 = GPIOB_BOP_BOP13_Values<GPIOB::BOP, 13, 1, WriteMode, GPIOBBOPBase> ;
    using BOP12 = GPIOB_BOP_BOP12_Values<GPIOB::BOP, 12, 1, WriteMode, GPIOBBOPBase> ;
    using BOP11 = GPIOB_BOP_BOP11_Values<GPIOB::BOP, 11, 1, WriteMode, GPIOBBOPBase> ;
    using BOP10 = GPIOB_BOP_BOP10_Values<GPIOB::BOP, 10, 1, WriteMode, GPIOBBOPBase> ;
    using BOP9 = GPIOB_BOP_BOP9_Values<GPIOB::BOP, 9, 1, WriteMode, GPIOBBOPBase> ;
    using BOP8 = GPIOB_BOP_BOP8_Values<GPIOB::BOP, 8, 1, WriteMode, GPIOBBOPBase> ;
    using BOP7 = GPIOB_BOP_BOP7_Values<GPIOB::BOP, 7, 1, WriteMode, GPIOBBOPBase> ;
    using BOP6 = GPIOB_BOP_BOP6_Values<GPIOB::BOP, 6, 1, WriteMode, GPIOBBOPBase> ;
    using BOP5 = GPIOB_BOP_BOP5_Values<GPIOB::BOP, 5, 1, WriteMode, GPIOBBOPBase> ;
    using BOP4 = GPIOB_BOP_BOP4_Values<GPIOB::BOP, 4, 1, WriteMode, GPIOBBOPBase> ;
    using BOP3 = GPIOB_BOP_BOP3_Values<GPIOB::BOP, 3, 1, WriteMode, GPIOBBOPBase> ;
    using BOP2 = GPIOB_BOP_BOP2_Values<GPIOB::BOP, 2, 1, WriteMode, GPIOBBOPBase> ;
    using BOP1 = GPIOB_BOP_BOP1_Values<GPIOB::BOP, 1, 1, WriteMode, GPIOBBOPBase> ;
    using BOP0 = GPIOB_BOP_BOP0_Values<GPIOB::BOP, 0, 1, WriteMode, GPIOBBOPBase> ;
    using FieldValues = GPIOB_BOP_BOP0_Values<GPIOB::BOP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BOPPack  = Register<0x40010C10, 32, WriteMode, GPIOBBOPBase, T...> ;

  struct GPIOBBCBase {} ;

  struct BC : public RegisterBase<0x40010C14, 32, WriteMode>
  {
    using CR15 = GPIOB_BC_CR15_Values<GPIOB::BC, 15, 1, WriteMode, GPIOBBCBase> ;
    using CR14 = GPIOB_BC_CR14_Values<GPIOB::BC, 14, 1, WriteMode, GPIOBBCBase> ;
    using CR13 = GPIOB_BC_CR13_Values<GPIOB::BC, 13, 1, WriteMode, GPIOBBCBase> ;
    using CR12 = GPIOB_BC_CR12_Values<GPIOB::BC, 12, 1, WriteMode, GPIOBBCBase> ;
    using CR11 = GPIOB_BC_CR11_Values<GPIOB::BC, 11, 1, WriteMode, GPIOBBCBase> ;
    using CR10 = GPIOB_BC_CR10_Values<GPIOB::BC, 10, 1, WriteMode, GPIOBBCBase> ;
    using CR9 = GPIOB_BC_CR9_Values<GPIOB::BC, 9, 1, WriteMode, GPIOBBCBase> ;
    using CR8 = GPIOB_BC_CR8_Values<GPIOB::BC, 8, 1, WriteMode, GPIOBBCBase> ;
    using CR7 = GPIOB_BC_CR7_Values<GPIOB::BC, 7, 1, WriteMode, GPIOBBCBase> ;
    using CR6 = GPIOB_BC_CR6_Values<GPIOB::BC, 6, 1, WriteMode, GPIOBBCBase> ;
    using CR5 = GPIOB_BC_CR5_Values<GPIOB::BC, 5, 1, WriteMode, GPIOBBCBase> ;
    using CR4 = GPIOB_BC_CR4_Values<GPIOB::BC, 4, 1, WriteMode, GPIOBBCBase> ;
    using CR3 = GPIOB_BC_CR3_Values<GPIOB::BC, 3, 1, WriteMode, GPIOBBCBase> ;
    using CR2 = GPIOB_BC_CR2_Values<GPIOB::BC, 2, 1, WriteMode, GPIOBBCBase> ;
    using CR1 = GPIOB_BC_CR1_Values<GPIOB::BC, 1, 1, WriteMode, GPIOBBCBase> ;
    using CR0 = GPIOB_BC_CR0_Values<GPIOB::BC, 0, 1, WriteMode, GPIOBBCBase> ;
    using FieldValues = GPIOB_BC_CR0_Values<GPIOB::BC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCPack  = Register<0x40010C14, 32, WriteMode, GPIOBBCBase, T...> ;

  struct GPIOBLOCKBase {} ;

  struct LOCK : public RegisterBase<0x40010C18, 32, ReadWriteMode>
  {
    using LKK = GPIOB_LOCK_LKK_Values<GPIOB::LOCK, 16, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK15 = GPIOB_LOCK_LK15_Values<GPIOB::LOCK, 15, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK14 = GPIOB_LOCK_LK14_Values<GPIOB::LOCK, 14, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK13 = GPIOB_LOCK_LK13_Values<GPIOB::LOCK, 13, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK12 = GPIOB_LOCK_LK12_Values<GPIOB::LOCK, 12, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK11 = GPIOB_LOCK_LK11_Values<GPIOB::LOCK, 11, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK10 = GPIOB_LOCK_LK10_Values<GPIOB::LOCK, 10, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK9 = GPIOB_LOCK_LK9_Values<GPIOB::LOCK, 9, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK8 = GPIOB_LOCK_LK8_Values<GPIOB::LOCK, 8, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK7 = GPIOB_LOCK_LK7_Values<GPIOB::LOCK, 7, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK6 = GPIOB_LOCK_LK6_Values<GPIOB::LOCK, 6, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK5 = GPIOB_LOCK_LK5_Values<GPIOB::LOCK, 5, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK4 = GPIOB_LOCK_LK4_Values<GPIOB::LOCK, 4, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK3 = GPIOB_LOCK_LK3_Values<GPIOB::LOCK, 3, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK2 = GPIOB_LOCK_LK2_Values<GPIOB::LOCK, 2, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK1 = GPIOB_LOCK_LK1_Values<GPIOB::LOCK, 1, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using LK0 = GPIOB_LOCK_LK0_Values<GPIOB::LOCK, 0, 1, ReadWriteMode, GPIOBLOCKBase> ;
    using FieldValues = GPIOB_LOCK_LK0_Values<GPIOB::LOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LOCKPack  = Register<0x40010C18, 32, ReadWriteMode, GPIOBLOCKBase, T...> ;

} ;

#endif //#if !defined(GPIOBREGISTERS_HPP)
