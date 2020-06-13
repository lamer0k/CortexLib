/*******************************************************************************
* Filename      : gpioaregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(GPIOAREGISTERS_HPP)
#define GPIOAREGISTERS_HPP

#include "gpioafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOA
{
  struct GPIOACTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40010800, 32, ReadWriteMode>
  {
    using CTL7 = GPIOA_CTL0_CTL7_Values<GPIOA::CTL0, 30, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD7 = GPIOA_CTL0_MD7_Values<GPIOA::CTL0, 28, 2, ReadWriteMode, GPIOACTL0Base> ;
    using CTL6 = GPIOA_CTL0_CTL6_Values<GPIOA::CTL0, 26, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD6 = GPIOA_CTL0_MD6_Values<GPIOA::CTL0, 24, 2, ReadWriteMode, GPIOACTL0Base> ;
    using CTL5 = GPIOA_CTL0_CTL5_Values<GPIOA::CTL0, 22, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD5 = GPIOA_CTL0_MD5_Values<GPIOA::CTL0, 20, 2, ReadWriteMode, GPIOACTL0Base> ;
    using CTL4 = GPIOA_CTL0_CTL4_Values<GPIOA::CTL0, 18, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD4 = GPIOA_CTL0_MD4_Values<GPIOA::CTL0, 16, 2, ReadWriteMode, GPIOACTL0Base> ;
    using CTL3 = GPIOA_CTL0_CTL3_Values<GPIOA::CTL0, 14, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD3 = GPIOA_CTL0_MD3_Values<GPIOA::CTL0, 12, 2, ReadWriteMode, GPIOACTL0Base> ;
    using CTL2 = GPIOA_CTL0_CTL2_Values<GPIOA::CTL0, 10, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD2 = GPIOA_CTL0_MD2_Values<GPIOA::CTL0, 8, 2, ReadWriteMode, GPIOACTL0Base> ;
    using CTL1 = GPIOA_CTL0_CTL1_Values<GPIOA::CTL0, 6, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD1 = GPIOA_CTL0_MD1_Values<GPIOA::CTL0, 4, 2, ReadWriteMode, GPIOACTL0Base> ;
    using CTL0Field = GPIOA_CTL0_CTL0_Values<GPIOA::CTL0, 2, 2, ReadWriteMode, GPIOACTL0Base> ;
    using MD0 = GPIOA_CTL0_MD0_Values<GPIOA::CTL0, 0, 2, ReadWriteMode, GPIOACTL0Base> ;
    using FieldValues = GPIOA_CTL0_MD0_Values<GPIOA::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40010800, 32, ReadWriteMode, GPIOACTL0Base, T...> ;

  struct GPIOACTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40010804, 32, ReadWriteMode>
  {
    using CTL15 = GPIOA_CTL1_CTL15_Values<GPIOA::CTL1, 30, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD15 = GPIOA_CTL1_MD15_Values<GPIOA::CTL1, 28, 2, ReadWriteMode, GPIOACTL1Base> ;
    using CTL14 = GPIOA_CTL1_CTL14_Values<GPIOA::CTL1, 26, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD14 = GPIOA_CTL1_MD14_Values<GPIOA::CTL1, 24, 2, ReadWriteMode, GPIOACTL1Base> ;
    using CTL13 = GPIOA_CTL1_CTL13_Values<GPIOA::CTL1, 22, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD13 = GPIOA_CTL1_MD13_Values<GPIOA::CTL1, 20, 2, ReadWriteMode, GPIOACTL1Base> ;
    using CTL12 = GPIOA_CTL1_CTL12_Values<GPIOA::CTL1, 18, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD12 = GPIOA_CTL1_MD12_Values<GPIOA::CTL1, 16, 2, ReadWriteMode, GPIOACTL1Base> ;
    using CTL11 = GPIOA_CTL1_CTL11_Values<GPIOA::CTL1, 14, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD11 = GPIOA_CTL1_MD11_Values<GPIOA::CTL1, 12, 2, ReadWriteMode, GPIOACTL1Base> ;
    using CTL10 = GPIOA_CTL1_CTL10_Values<GPIOA::CTL1, 10, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD10 = GPIOA_CTL1_MD10_Values<GPIOA::CTL1, 8, 2, ReadWriteMode, GPIOACTL1Base> ;
    using CTL9 = GPIOA_CTL1_CTL9_Values<GPIOA::CTL1, 6, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD9 = GPIOA_CTL1_MD9_Values<GPIOA::CTL1, 4, 2, ReadWriteMode, GPIOACTL1Base> ;
    using CTL8 = GPIOA_CTL1_CTL8_Values<GPIOA::CTL1, 2, 2, ReadWriteMode, GPIOACTL1Base> ;
    using MD8 = GPIOA_CTL1_MD8_Values<GPIOA::CTL1, 0, 2, ReadWriteMode, GPIOACTL1Base> ;
    using FieldValues = GPIOA_CTL1_MD8_Values<GPIOA::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40010804, 32, ReadWriteMode, GPIOACTL1Base, T...> ;

  struct GPIOAISTATBase {} ;

  struct ISTAT : public RegisterBase<0x40010808, 32, ReadMode>
  {
    using ISTAT15 = GPIOA_ISTAT_ISTAT15_Values<GPIOA::ISTAT, 15, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT14 = GPIOA_ISTAT_ISTAT14_Values<GPIOA::ISTAT, 14, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT13 = GPIOA_ISTAT_ISTAT13_Values<GPIOA::ISTAT, 13, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT12 = GPIOA_ISTAT_ISTAT12_Values<GPIOA::ISTAT, 12, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT11 = GPIOA_ISTAT_ISTAT11_Values<GPIOA::ISTAT, 11, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT10 = GPIOA_ISTAT_ISTAT10_Values<GPIOA::ISTAT, 10, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT9 = GPIOA_ISTAT_ISTAT9_Values<GPIOA::ISTAT, 9, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT8 = GPIOA_ISTAT_ISTAT8_Values<GPIOA::ISTAT, 8, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT7 = GPIOA_ISTAT_ISTAT7_Values<GPIOA::ISTAT, 7, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT6 = GPIOA_ISTAT_ISTAT6_Values<GPIOA::ISTAT, 6, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT5 = GPIOA_ISTAT_ISTAT5_Values<GPIOA::ISTAT, 5, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT4 = GPIOA_ISTAT_ISTAT4_Values<GPIOA::ISTAT, 4, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT3 = GPIOA_ISTAT_ISTAT3_Values<GPIOA::ISTAT, 3, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT2 = GPIOA_ISTAT_ISTAT2_Values<GPIOA::ISTAT, 2, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT1 = GPIOA_ISTAT_ISTAT1_Values<GPIOA::ISTAT, 1, 1, ReadMode, GPIOAISTATBase> ;
    using ISTAT0 = GPIOA_ISTAT_ISTAT0_Values<GPIOA::ISTAT, 0, 1, ReadMode, GPIOAISTATBase> ;
    using FieldValues = GPIOA_ISTAT_ISTAT0_Values<GPIOA::ISTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTATPack  = Register<0x40010808, 32, ReadMode, GPIOAISTATBase, T...> ;

  struct GPIOAOCTLBase {} ;

  struct OCTL : public RegisterBase<0x4001080C, 32, ReadWriteMode>
  {
    using OCTL15 = GPIOA_OCTL_OCTL15_Values<GPIOA::OCTL, 15, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL14 = GPIOA_OCTL_OCTL14_Values<GPIOA::OCTL, 14, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL13 = GPIOA_OCTL_OCTL13_Values<GPIOA::OCTL, 13, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL12 = GPIOA_OCTL_OCTL12_Values<GPIOA::OCTL, 12, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL11 = GPIOA_OCTL_OCTL11_Values<GPIOA::OCTL, 11, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL10 = GPIOA_OCTL_OCTL10_Values<GPIOA::OCTL, 10, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL9 = GPIOA_OCTL_OCTL9_Values<GPIOA::OCTL, 9, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL8 = GPIOA_OCTL_OCTL8_Values<GPIOA::OCTL, 8, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL7 = GPIOA_OCTL_OCTL7_Values<GPIOA::OCTL, 7, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL6 = GPIOA_OCTL_OCTL6_Values<GPIOA::OCTL, 6, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL5 = GPIOA_OCTL_OCTL5_Values<GPIOA::OCTL, 5, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL4 = GPIOA_OCTL_OCTL4_Values<GPIOA::OCTL, 4, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL3 = GPIOA_OCTL_OCTL3_Values<GPIOA::OCTL, 3, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL2 = GPIOA_OCTL_OCTL2_Values<GPIOA::OCTL, 2, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL1 = GPIOA_OCTL_OCTL1_Values<GPIOA::OCTL, 1, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using OCTL0 = GPIOA_OCTL_OCTL0_Values<GPIOA::OCTL, 0, 1, ReadWriteMode, GPIOAOCTLBase> ;
    using FieldValues = GPIOA_OCTL_OCTL0_Values<GPIOA::OCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OCTLPack  = Register<0x4001080C, 32, ReadWriteMode, GPIOAOCTLBase, T...> ;

  struct GPIOABOPBase {} ;

  struct BOP : public RegisterBase<0x40010810, 32, WriteMode>
  {
    using CR15 = GPIOA_BOP_CR15_Values<GPIOA::BOP, 31, 1, WriteMode, GPIOABOPBase> ;
    using CR14 = GPIOA_BOP_CR14_Values<GPIOA::BOP, 30, 1, WriteMode, GPIOABOPBase> ;
    using CR13 = GPIOA_BOP_CR13_Values<GPIOA::BOP, 29, 1, WriteMode, GPIOABOPBase> ;
    using CR12 = GPIOA_BOP_CR12_Values<GPIOA::BOP, 28, 1, WriteMode, GPIOABOPBase> ;
    using CR11 = GPIOA_BOP_CR11_Values<GPIOA::BOP, 27, 1, WriteMode, GPIOABOPBase> ;
    using CR10 = GPIOA_BOP_CR10_Values<GPIOA::BOP, 26, 1, WriteMode, GPIOABOPBase> ;
    using CR9 = GPIOA_BOP_CR9_Values<GPIOA::BOP, 25, 1, WriteMode, GPIOABOPBase> ;
    using CR8 = GPIOA_BOP_CR8_Values<GPIOA::BOP, 24, 1, WriteMode, GPIOABOPBase> ;
    using CR7 = GPIOA_BOP_CR7_Values<GPIOA::BOP, 23, 1, WriteMode, GPIOABOPBase> ;
    using CR6 = GPIOA_BOP_CR6_Values<GPIOA::BOP, 22, 1, WriteMode, GPIOABOPBase> ;
    using CR5 = GPIOA_BOP_CR5_Values<GPIOA::BOP, 21, 1, WriteMode, GPIOABOPBase> ;
    using CR4 = GPIOA_BOP_CR4_Values<GPIOA::BOP, 20, 1, WriteMode, GPIOABOPBase> ;
    using CR3 = GPIOA_BOP_CR3_Values<GPIOA::BOP, 19, 1, WriteMode, GPIOABOPBase> ;
    using CR2 = GPIOA_BOP_CR2_Values<GPIOA::BOP, 18, 1, WriteMode, GPIOABOPBase> ;
    using CR1 = GPIOA_BOP_CR1_Values<GPIOA::BOP, 17, 1, WriteMode, GPIOABOPBase> ;
    using CR0 = GPIOA_BOP_CR0_Values<GPIOA::BOP, 16, 1, WriteMode, GPIOABOPBase> ;
    using BOP15 = GPIOA_BOP_BOP15_Values<GPIOA::BOP, 15, 1, WriteMode, GPIOABOPBase> ;
    using BOP14 = GPIOA_BOP_BOP14_Values<GPIOA::BOP, 14, 1, WriteMode, GPIOABOPBase> ;
    using BOP13 = GPIOA_BOP_BOP13_Values<GPIOA::BOP, 13, 1, WriteMode, GPIOABOPBase> ;
    using BOP12 = GPIOA_BOP_BOP12_Values<GPIOA::BOP, 12, 1, WriteMode, GPIOABOPBase> ;
    using BOP11 = GPIOA_BOP_BOP11_Values<GPIOA::BOP, 11, 1, WriteMode, GPIOABOPBase> ;
    using BOP10 = GPIOA_BOP_BOP10_Values<GPIOA::BOP, 10, 1, WriteMode, GPIOABOPBase> ;
    using BOP9 = GPIOA_BOP_BOP9_Values<GPIOA::BOP, 9, 1, WriteMode, GPIOABOPBase> ;
    using BOP8 = GPIOA_BOP_BOP8_Values<GPIOA::BOP, 8, 1, WriteMode, GPIOABOPBase> ;
    using BOP7 = GPIOA_BOP_BOP7_Values<GPIOA::BOP, 7, 1, WriteMode, GPIOABOPBase> ;
    using BOP6 = GPIOA_BOP_BOP6_Values<GPIOA::BOP, 6, 1, WriteMode, GPIOABOPBase> ;
    using BOP5 = GPIOA_BOP_BOP5_Values<GPIOA::BOP, 5, 1, WriteMode, GPIOABOPBase> ;
    using BOP4 = GPIOA_BOP_BOP4_Values<GPIOA::BOP, 4, 1, WriteMode, GPIOABOPBase> ;
    using BOP3 = GPIOA_BOP_BOP3_Values<GPIOA::BOP, 3, 1, WriteMode, GPIOABOPBase> ;
    using BOP2 = GPIOA_BOP_BOP2_Values<GPIOA::BOP, 2, 1, WriteMode, GPIOABOPBase> ;
    using BOP1 = GPIOA_BOP_BOP1_Values<GPIOA::BOP, 1, 1, WriteMode, GPIOABOPBase> ;
    using BOP0 = GPIOA_BOP_BOP0_Values<GPIOA::BOP, 0, 1, WriteMode, GPIOABOPBase> ;
    using FieldValues = GPIOA_BOP_BOP0_Values<GPIOA::BOP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BOPPack  = Register<0x40010810, 32, WriteMode, GPIOABOPBase, T...> ;

  struct GPIOABCBase {} ;

  struct BC : public RegisterBase<0x40010814, 32, WriteMode>
  {
    using CR15 = GPIOA_BC_CR15_Values<GPIOA::BC, 15, 1, WriteMode, GPIOABCBase> ;
    using CR14 = GPIOA_BC_CR14_Values<GPIOA::BC, 14, 1, WriteMode, GPIOABCBase> ;
    using CR13 = GPIOA_BC_CR13_Values<GPIOA::BC, 13, 1, WriteMode, GPIOABCBase> ;
    using CR12 = GPIOA_BC_CR12_Values<GPIOA::BC, 12, 1, WriteMode, GPIOABCBase> ;
    using CR11 = GPIOA_BC_CR11_Values<GPIOA::BC, 11, 1, WriteMode, GPIOABCBase> ;
    using CR10 = GPIOA_BC_CR10_Values<GPIOA::BC, 10, 1, WriteMode, GPIOABCBase> ;
    using CR9 = GPIOA_BC_CR9_Values<GPIOA::BC, 9, 1, WriteMode, GPIOABCBase> ;
    using CR8 = GPIOA_BC_CR8_Values<GPIOA::BC, 8, 1, WriteMode, GPIOABCBase> ;
    using CR7 = GPIOA_BC_CR7_Values<GPIOA::BC, 7, 1, WriteMode, GPIOABCBase> ;
    using CR6 = GPIOA_BC_CR6_Values<GPIOA::BC, 6, 1, WriteMode, GPIOABCBase> ;
    using CR5 = GPIOA_BC_CR5_Values<GPIOA::BC, 5, 1, WriteMode, GPIOABCBase> ;
    using CR4 = GPIOA_BC_CR4_Values<GPIOA::BC, 4, 1, WriteMode, GPIOABCBase> ;
    using CR3 = GPIOA_BC_CR3_Values<GPIOA::BC, 3, 1, WriteMode, GPIOABCBase> ;
    using CR2 = GPIOA_BC_CR2_Values<GPIOA::BC, 2, 1, WriteMode, GPIOABCBase> ;
    using CR1 = GPIOA_BC_CR1_Values<GPIOA::BC, 1, 1, WriteMode, GPIOABCBase> ;
    using CR0 = GPIOA_BC_CR0_Values<GPIOA::BC, 0, 1, WriteMode, GPIOABCBase> ;
    using FieldValues = GPIOA_BC_CR0_Values<GPIOA::BC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCPack  = Register<0x40010814, 32, WriteMode, GPIOABCBase, T...> ;

  struct GPIOALOCKBase {} ;

  struct LOCK : public RegisterBase<0x40010818, 32, ReadWriteMode>
  {
    using LKK = GPIOA_LOCK_LKK_Values<GPIOA::LOCK, 16, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK15 = GPIOA_LOCK_LK15_Values<GPIOA::LOCK, 15, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK14 = GPIOA_LOCK_LK14_Values<GPIOA::LOCK, 14, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK13 = GPIOA_LOCK_LK13_Values<GPIOA::LOCK, 13, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK12 = GPIOA_LOCK_LK12_Values<GPIOA::LOCK, 12, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK11 = GPIOA_LOCK_LK11_Values<GPIOA::LOCK, 11, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK10 = GPIOA_LOCK_LK10_Values<GPIOA::LOCK, 10, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK9 = GPIOA_LOCK_LK9_Values<GPIOA::LOCK, 9, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK8 = GPIOA_LOCK_LK8_Values<GPIOA::LOCK, 8, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK7 = GPIOA_LOCK_LK7_Values<GPIOA::LOCK, 7, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK6 = GPIOA_LOCK_LK6_Values<GPIOA::LOCK, 6, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK5 = GPIOA_LOCK_LK5_Values<GPIOA::LOCK, 5, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK4 = GPIOA_LOCK_LK4_Values<GPIOA::LOCK, 4, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK3 = GPIOA_LOCK_LK3_Values<GPIOA::LOCK, 3, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK2 = GPIOA_LOCK_LK2_Values<GPIOA::LOCK, 2, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK1 = GPIOA_LOCK_LK1_Values<GPIOA::LOCK, 1, 1, ReadWriteMode, GPIOALOCKBase> ;
    using LK0 = GPIOA_LOCK_LK0_Values<GPIOA::LOCK, 0, 1, ReadWriteMode, GPIOALOCKBase> ;
    using FieldValues = GPIOA_LOCK_LK0_Values<GPIOA::LOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LOCKPack  = Register<0x40010818, 32, ReadWriteMode, GPIOALOCKBase, T...> ;

} ;

#endif //#if !defined(GPIOAREGISTERS_HPP)
