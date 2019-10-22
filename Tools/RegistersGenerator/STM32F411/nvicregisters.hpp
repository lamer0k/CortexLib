/*******************************************************************************
* Filename      : nvicregisters.hpp
*
* Details       : Nested Vectored Interrupt Controller. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(NVICREGISTERS_HPP)
#define NVICREGISTERS_HPP

#include "nvicfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct NVIC
{
  struct NVICISER0Base {} ;

  struct ISER0 : public RegisterBase<0xE000E100, 32, ReadWriteMode>
  {
    using SETENA = NVIC_ISER0_SETENA_Values<NVIC::ISER0, 0, 32, ReadWriteMode, NVICISER0Base> ;
    using FieldValues = NVIC_ISER0_SETENA_Values<NVIC::ISER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER0Pack  = Register<0xE000E100, 32, ReadWriteMode, NVICISER0Base, T...> ;

  struct NVICISER1Base {} ;

  struct ISER1 : public RegisterBase<0xE000E104, 32, ReadWriteMode>
  {
    using SETENA = NVIC_ISER1_SETENA_Values<NVIC::ISER1, 0, 32, ReadWriteMode, NVICISER1Base> ;
    using FieldValues = NVIC_ISER1_SETENA_Values<NVIC::ISER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER1Pack  = Register<0xE000E104, 32, ReadWriteMode, NVICISER1Base, T...> ;

  struct NVICISER2Base {} ;

  struct ISER2 : public RegisterBase<0xE000E108, 32, ReadWriteMode>
  {
    using SETENA = NVIC_ISER2_SETENA_Values<NVIC::ISER2, 0, 32, ReadWriteMode, NVICISER2Base> ;
    using FieldValues = NVIC_ISER2_SETENA_Values<NVIC::ISER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER2Pack  = Register<0xE000E108, 32, ReadWriteMode, NVICISER2Base, T...> ;

  struct NVICICER0Base {} ;

  struct ICER0 : public RegisterBase<0xE000E180, 32, ReadWriteMode>
  {
    using CLRENA = NVIC_ICER0_CLRENA_Values<NVIC::ICER0, 0, 32, ReadWriteMode, NVICICER0Base> ;
    using FieldValues = NVIC_ICER0_CLRENA_Values<NVIC::ICER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER0Pack  = Register<0xE000E180, 32, ReadWriteMode, NVICICER0Base, T...> ;

  struct NVICICER1Base {} ;

  struct ICER1 : public RegisterBase<0xE000E184, 32, ReadWriteMode>
  {
    using CLRENA = NVIC_ICER1_CLRENA_Values<NVIC::ICER1, 0, 32, ReadWriteMode, NVICICER1Base> ;
    using FieldValues = NVIC_ICER1_CLRENA_Values<NVIC::ICER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER1Pack  = Register<0xE000E184, 32, ReadWriteMode, NVICICER1Base, T...> ;

  struct NVICICER2Base {} ;

  struct ICER2 : public RegisterBase<0xE000E188, 32, ReadWriteMode>
  {
    using CLRENA = NVIC_ICER2_CLRENA_Values<NVIC::ICER2, 0, 32, ReadWriteMode, NVICICER2Base> ;
    using FieldValues = NVIC_ICER2_CLRENA_Values<NVIC::ICER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER2Pack  = Register<0xE000E188, 32, ReadWriteMode, NVICICER2Base, T...> ;

  struct NVICISPR0Base {} ;

  struct ISPR0 : public RegisterBase<0xE000E200, 32, ReadWriteMode>
  {
    using SETPEND = NVIC_ISPR0_SETPEND_Values<NVIC::ISPR0, 0, 32, ReadWriteMode, NVICISPR0Base> ;
    using FieldValues = NVIC_ISPR0_SETPEND_Values<NVIC::ISPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR0Pack  = Register<0xE000E200, 32, ReadWriteMode, NVICISPR0Base, T...> ;

  struct NVICISPR1Base {} ;

  struct ISPR1 : public RegisterBase<0xE000E204, 32, ReadWriteMode>
  {
    using SETPEND = NVIC_ISPR1_SETPEND_Values<NVIC::ISPR1, 0, 32, ReadWriteMode, NVICISPR1Base> ;
    using FieldValues = NVIC_ISPR1_SETPEND_Values<NVIC::ISPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR1Pack  = Register<0xE000E204, 32, ReadWriteMode, NVICISPR1Base, T...> ;

  struct NVICISPR2Base {} ;

  struct ISPR2 : public RegisterBase<0xE000E208, 32, ReadWriteMode>
  {
    using SETPEND = NVIC_ISPR2_SETPEND_Values<NVIC::ISPR2, 0, 32, ReadWriteMode, NVICISPR2Base> ;
    using FieldValues = NVIC_ISPR2_SETPEND_Values<NVIC::ISPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR2Pack  = Register<0xE000E208, 32, ReadWriteMode, NVICISPR2Base, T...> ;

  struct NVICICPR0Base {} ;

  struct ICPR0 : public RegisterBase<0xE000E280, 32, ReadWriteMode>
  {
    using CLRPEND = NVIC_ICPR0_CLRPEND_Values<NVIC::ICPR0, 0, 32, ReadWriteMode, NVICICPR0Base> ;
    using FieldValues = NVIC_ICPR0_CLRPEND_Values<NVIC::ICPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR0Pack  = Register<0xE000E280, 32, ReadWriteMode, NVICICPR0Base, T...> ;

  struct NVICICPR1Base {} ;

  struct ICPR1 : public RegisterBase<0xE000E284, 32, ReadWriteMode>
  {
    using CLRPEND = NVIC_ICPR1_CLRPEND_Values<NVIC::ICPR1, 0, 32, ReadWriteMode, NVICICPR1Base> ;
    using FieldValues = NVIC_ICPR1_CLRPEND_Values<NVIC::ICPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR1Pack  = Register<0xE000E284, 32, ReadWriteMode, NVICICPR1Base, T...> ;

  struct NVICICPR2Base {} ;

  struct ICPR2 : public RegisterBase<0xE000E288, 32, ReadWriteMode>
  {
    using CLRPEND = NVIC_ICPR2_CLRPEND_Values<NVIC::ICPR2, 0, 32, ReadWriteMode, NVICICPR2Base> ;
    using FieldValues = NVIC_ICPR2_CLRPEND_Values<NVIC::ICPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR2Pack  = Register<0xE000E288, 32, ReadWriteMode, NVICICPR2Base, T...> ;

  struct NVICIABR0Base {} ;

  struct IABR0 : public RegisterBase<0xE000E300, 32, ReadMode>
  {
    using ACTIVE = NVIC_IABR0_ACTIVE_Values<NVIC::IABR0, 0, 32, ReadMode, NVICIABR0Base> ;
    using FieldValues = NVIC_IABR0_ACTIVE_Values<NVIC::IABR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR0Pack  = Register<0xE000E300, 32, ReadMode, NVICIABR0Base, T...> ;

  struct NVICIABR1Base {} ;

  struct IABR1 : public RegisterBase<0xE000E304, 32, ReadMode>
  {
    using ACTIVE = NVIC_IABR1_ACTIVE_Values<NVIC::IABR1, 0, 32, ReadMode, NVICIABR1Base> ;
    using FieldValues = NVIC_IABR1_ACTIVE_Values<NVIC::IABR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR1Pack  = Register<0xE000E304, 32, ReadMode, NVICIABR1Base, T...> ;

  struct NVICIABR2Base {} ;

  struct IABR2 : public RegisterBase<0xE000E308, 32, ReadMode>
  {
    using ACTIVE = NVIC_IABR2_ACTIVE_Values<NVIC::IABR2, 0, 32, ReadMode, NVICIABR2Base> ;
    using FieldValues = NVIC_IABR2_ACTIVE_Values<NVIC::IABR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR2Pack  = Register<0xE000E308, 32, ReadMode, NVICIABR2Base, T...> ;

  struct NVICIPR0Base {} ;

  struct IPR0 : public RegisterBase<0xE000E400, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR0_IPR_N0_Values<NVIC::IPR0, 0, 8, ReadWriteMode, NVICIPR0Base> ;
    using IPR_N1 = NVIC_IPR0_IPR_N1_Values<NVIC::IPR0, 8, 8, ReadWriteMode, NVICIPR0Base> ;
    using IPR_N2 = NVIC_IPR0_IPR_N2_Values<NVIC::IPR0, 16, 8, ReadWriteMode, NVICIPR0Base> ;
    using IPR_N3 = NVIC_IPR0_IPR_N3_Values<NVIC::IPR0, 24, 8, ReadWriteMode, NVICIPR0Base> ;
    using FieldValues = NVIC_IPR0_IPR_N3_Values<NVIC::IPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR0Pack  = Register<0xE000E400, 32, ReadWriteMode, NVICIPR0Base, T...> ;

  struct NVICIPR1Base {} ;

  struct IPR1 : public RegisterBase<0xE000E404, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR1_IPR_N0_Values<NVIC::IPR1, 0, 8, ReadWriteMode, NVICIPR1Base> ;
    using IPR_N1 = NVIC_IPR1_IPR_N1_Values<NVIC::IPR1, 8, 8, ReadWriteMode, NVICIPR1Base> ;
    using IPR_N2 = NVIC_IPR1_IPR_N2_Values<NVIC::IPR1, 16, 8, ReadWriteMode, NVICIPR1Base> ;
    using IPR_N3 = NVIC_IPR1_IPR_N3_Values<NVIC::IPR1, 24, 8, ReadWriteMode, NVICIPR1Base> ;
    using FieldValues = NVIC_IPR1_IPR_N3_Values<NVIC::IPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR1Pack  = Register<0xE000E404, 32, ReadWriteMode, NVICIPR1Base, T...> ;

  struct NVICIPR2Base {} ;

  struct IPR2 : public RegisterBase<0xE000E408, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR2_IPR_N0_Values<NVIC::IPR2, 0, 8, ReadWriteMode, NVICIPR2Base> ;
    using IPR_N1 = NVIC_IPR2_IPR_N1_Values<NVIC::IPR2, 8, 8, ReadWriteMode, NVICIPR2Base> ;
    using IPR_N2 = NVIC_IPR2_IPR_N2_Values<NVIC::IPR2, 16, 8, ReadWriteMode, NVICIPR2Base> ;
    using IPR_N3 = NVIC_IPR2_IPR_N3_Values<NVIC::IPR2, 24, 8, ReadWriteMode, NVICIPR2Base> ;
    using FieldValues = NVIC_IPR2_IPR_N3_Values<NVIC::IPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR2Pack  = Register<0xE000E408, 32, ReadWriteMode, NVICIPR2Base, T...> ;

  struct NVICIPR3Base {} ;

  struct IPR3 : public RegisterBase<0xE000E40C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR3_IPR_N0_Values<NVIC::IPR3, 0, 8, ReadWriteMode, NVICIPR3Base> ;
    using IPR_N1 = NVIC_IPR3_IPR_N1_Values<NVIC::IPR3, 8, 8, ReadWriteMode, NVICIPR3Base> ;
    using IPR_N2 = NVIC_IPR3_IPR_N2_Values<NVIC::IPR3, 16, 8, ReadWriteMode, NVICIPR3Base> ;
    using IPR_N3 = NVIC_IPR3_IPR_N3_Values<NVIC::IPR3, 24, 8, ReadWriteMode, NVICIPR3Base> ;
    using FieldValues = NVIC_IPR3_IPR_N3_Values<NVIC::IPR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR3Pack  = Register<0xE000E40C, 32, ReadWriteMode, NVICIPR3Base, T...> ;

  struct NVICIPR4Base {} ;

  struct IPR4 : public RegisterBase<0xE000E410, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR4_IPR_N0_Values<NVIC::IPR4, 0, 8, ReadWriteMode, NVICIPR4Base> ;
    using IPR_N1 = NVIC_IPR4_IPR_N1_Values<NVIC::IPR4, 8, 8, ReadWriteMode, NVICIPR4Base> ;
    using IPR_N2 = NVIC_IPR4_IPR_N2_Values<NVIC::IPR4, 16, 8, ReadWriteMode, NVICIPR4Base> ;
    using IPR_N3 = NVIC_IPR4_IPR_N3_Values<NVIC::IPR4, 24, 8, ReadWriteMode, NVICIPR4Base> ;
    using FieldValues = NVIC_IPR4_IPR_N3_Values<NVIC::IPR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR4Pack  = Register<0xE000E410, 32, ReadWriteMode, NVICIPR4Base, T...> ;

  struct NVICIPR5Base {} ;

  struct IPR5 : public RegisterBase<0xE000E414, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR5_IPR_N0_Values<NVIC::IPR5, 0, 8, ReadWriteMode, NVICIPR5Base> ;
    using IPR_N1 = NVIC_IPR5_IPR_N1_Values<NVIC::IPR5, 8, 8, ReadWriteMode, NVICIPR5Base> ;
    using IPR_N2 = NVIC_IPR5_IPR_N2_Values<NVIC::IPR5, 16, 8, ReadWriteMode, NVICIPR5Base> ;
    using IPR_N3 = NVIC_IPR5_IPR_N3_Values<NVIC::IPR5, 24, 8, ReadWriteMode, NVICIPR5Base> ;
    using FieldValues = NVIC_IPR5_IPR_N3_Values<NVIC::IPR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR5Pack  = Register<0xE000E414, 32, ReadWriteMode, NVICIPR5Base, T...> ;

  struct NVICIPR6Base {} ;

  struct IPR6 : public RegisterBase<0xE000E418, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR6_IPR_N0_Values<NVIC::IPR6, 0, 8, ReadWriteMode, NVICIPR6Base> ;
    using IPR_N1 = NVIC_IPR6_IPR_N1_Values<NVIC::IPR6, 8, 8, ReadWriteMode, NVICIPR6Base> ;
    using IPR_N2 = NVIC_IPR6_IPR_N2_Values<NVIC::IPR6, 16, 8, ReadWriteMode, NVICIPR6Base> ;
    using IPR_N3 = NVIC_IPR6_IPR_N3_Values<NVIC::IPR6, 24, 8, ReadWriteMode, NVICIPR6Base> ;
    using FieldValues = NVIC_IPR6_IPR_N3_Values<NVIC::IPR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR6Pack  = Register<0xE000E418, 32, ReadWriteMode, NVICIPR6Base, T...> ;

  struct NVICIPR7Base {} ;

  struct IPR7 : public RegisterBase<0xE000E41C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR7_IPR_N0_Values<NVIC::IPR7, 0, 8, ReadWriteMode, NVICIPR7Base> ;
    using IPR_N1 = NVIC_IPR7_IPR_N1_Values<NVIC::IPR7, 8, 8, ReadWriteMode, NVICIPR7Base> ;
    using IPR_N2 = NVIC_IPR7_IPR_N2_Values<NVIC::IPR7, 16, 8, ReadWriteMode, NVICIPR7Base> ;
    using IPR_N3 = NVIC_IPR7_IPR_N3_Values<NVIC::IPR7, 24, 8, ReadWriteMode, NVICIPR7Base> ;
    using FieldValues = NVIC_IPR7_IPR_N3_Values<NVIC::IPR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR7Pack  = Register<0xE000E41C, 32, ReadWriteMode, NVICIPR7Base, T...> ;

  struct NVICIPR8Base {} ;

  struct IPR8 : public RegisterBase<0xE000E420, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR8_IPR_N0_Values<NVIC::IPR8, 0, 8, ReadWriteMode, NVICIPR8Base> ;
    using IPR_N1 = NVIC_IPR8_IPR_N1_Values<NVIC::IPR8, 8, 8, ReadWriteMode, NVICIPR8Base> ;
    using IPR_N2 = NVIC_IPR8_IPR_N2_Values<NVIC::IPR8, 16, 8, ReadWriteMode, NVICIPR8Base> ;
    using IPR_N3 = NVIC_IPR8_IPR_N3_Values<NVIC::IPR8, 24, 8, ReadWriteMode, NVICIPR8Base> ;
    using FieldValues = NVIC_IPR8_IPR_N3_Values<NVIC::IPR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR8Pack  = Register<0xE000E420, 32, ReadWriteMode, NVICIPR8Base, T...> ;

  struct NVICIPR9Base {} ;

  struct IPR9 : public RegisterBase<0xE000E424, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR9_IPR_N0_Values<NVIC::IPR9, 0, 8, ReadWriteMode, NVICIPR9Base> ;
    using IPR_N1 = NVIC_IPR9_IPR_N1_Values<NVIC::IPR9, 8, 8, ReadWriteMode, NVICIPR9Base> ;
    using IPR_N2 = NVIC_IPR9_IPR_N2_Values<NVIC::IPR9, 16, 8, ReadWriteMode, NVICIPR9Base> ;
    using IPR_N3 = NVIC_IPR9_IPR_N3_Values<NVIC::IPR9, 24, 8, ReadWriteMode, NVICIPR9Base> ;
    using FieldValues = NVIC_IPR9_IPR_N3_Values<NVIC::IPR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR9Pack  = Register<0xE000E424, 32, ReadWriteMode, NVICIPR9Base, T...> ;

  struct NVICIPR10Base {} ;

  struct IPR10 : public RegisterBase<0xE000E428, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR10_IPR_N0_Values<NVIC::IPR10, 0, 8, ReadWriteMode, NVICIPR10Base> ;
    using IPR_N1 = NVIC_IPR10_IPR_N1_Values<NVIC::IPR10, 8, 8, ReadWriteMode, NVICIPR10Base> ;
    using IPR_N2 = NVIC_IPR10_IPR_N2_Values<NVIC::IPR10, 16, 8, ReadWriteMode, NVICIPR10Base> ;
    using IPR_N3 = NVIC_IPR10_IPR_N3_Values<NVIC::IPR10, 24, 8, ReadWriteMode, NVICIPR10Base> ;
    using FieldValues = NVIC_IPR10_IPR_N3_Values<NVIC::IPR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR10Pack  = Register<0xE000E428, 32, ReadWriteMode, NVICIPR10Base, T...> ;

  struct NVICIPR11Base {} ;

  struct IPR11 : public RegisterBase<0xE000E42C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR11_IPR_N0_Values<NVIC::IPR11, 0, 8, ReadWriteMode, NVICIPR11Base> ;
    using IPR_N1 = NVIC_IPR11_IPR_N1_Values<NVIC::IPR11, 8, 8, ReadWriteMode, NVICIPR11Base> ;
    using IPR_N2 = NVIC_IPR11_IPR_N2_Values<NVIC::IPR11, 16, 8, ReadWriteMode, NVICIPR11Base> ;
    using IPR_N3 = NVIC_IPR11_IPR_N3_Values<NVIC::IPR11, 24, 8, ReadWriteMode, NVICIPR11Base> ;
    using FieldValues = NVIC_IPR11_IPR_N3_Values<NVIC::IPR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR11Pack  = Register<0xE000E42C, 32, ReadWriteMode, NVICIPR11Base, T...> ;

  struct NVICIPR12Base {} ;

  struct IPR12 : public RegisterBase<0xE000E430, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR12_IPR_N0_Values<NVIC::IPR12, 0, 8, ReadWriteMode, NVICIPR12Base> ;
    using IPR_N1 = NVIC_IPR12_IPR_N1_Values<NVIC::IPR12, 8, 8, ReadWriteMode, NVICIPR12Base> ;
    using IPR_N2 = NVIC_IPR12_IPR_N2_Values<NVIC::IPR12, 16, 8, ReadWriteMode, NVICIPR12Base> ;
    using IPR_N3 = NVIC_IPR12_IPR_N3_Values<NVIC::IPR12, 24, 8, ReadWriteMode, NVICIPR12Base> ;
    using FieldValues = NVIC_IPR12_IPR_N3_Values<NVIC::IPR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR12Pack  = Register<0xE000E430, 32, ReadWriteMode, NVICIPR12Base, T...> ;

  struct NVICIPR13Base {} ;

  struct IPR13 : public RegisterBase<0xE000E434, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR13_IPR_N0_Values<NVIC::IPR13, 0, 8, ReadWriteMode, NVICIPR13Base> ;
    using IPR_N1 = NVIC_IPR13_IPR_N1_Values<NVIC::IPR13, 8, 8, ReadWriteMode, NVICIPR13Base> ;
    using IPR_N2 = NVIC_IPR13_IPR_N2_Values<NVIC::IPR13, 16, 8, ReadWriteMode, NVICIPR13Base> ;
    using IPR_N3 = NVIC_IPR13_IPR_N3_Values<NVIC::IPR13, 24, 8, ReadWriteMode, NVICIPR13Base> ;
    using FieldValues = NVIC_IPR13_IPR_N3_Values<NVIC::IPR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR13Pack  = Register<0xE000E434, 32, ReadWriteMode, NVICIPR13Base, T...> ;

  struct NVICIPR14Base {} ;

  struct IPR14 : public RegisterBase<0xE000E438, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR14_IPR_N0_Values<NVIC::IPR14, 0, 8, ReadWriteMode, NVICIPR14Base> ;
    using IPR_N1 = NVIC_IPR14_IPR_N1_Values<NVIC::IPR14, 8, 8, ReadWriteMode, NVICIPR14Base> ;
    using IPR_N2 = NVIC_IPR14_IPR_N2_Values<NVIC::IPR14, 16, 8, ReadWriteMode, NVICIPR14Base> ;
    using IPR_N3 = NVIC_IPR14_IPR_N3_Values<NVIC::IPR14, 24, 8, ReadWriteMode, NVICIPR14Base> ;
    using FieldValues = NVIC_IPR14_IPR_N3_Values<NVIC::IPR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR14Pack  = Register<0xE000E438, 32, ReadWriteMode, NVICIPR14Base, T...> ;

  struct NVICIPR15Base {} ;

  struct IPR15 : public RegisterBase<0xE000E43C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR15_IPR_N0_Values<NVIC::IPR15, 0, 8, ReadWriteMode, NVICIPR15Base> ;
    using IPR_N1 = NVIC_IPR15_IPR_N1_Values<NVIC::IPR15, 8, 8, ReadWriteMode, NVICIPR15Base> ;
    using IPR_N2 = NVIC_IPR15_IPR_N2_Values<NVIC::IPR15, 16, 8, ReadWriteMode, NVICIPR15Base> ;
    using IPR_N3 = NVIC_IPR15_IPR_N3_Values<NVIC::IPR15, 24, 8, ReadWriteMode, NVICIPR15Base> ;
    using FieldValues = NVIC_IPR15_IPR_N3_Values<NVIC::IPR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR15Pack  = Register<0xE000E43C, 32, ReadWriteMode, NVICIPR15Base, T...> ;

  struct NVICIPR16Base {} ;

  struct IPR16 : public RegisterBase<0xE000E440, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR16_IPR_N0_Values<NVIC::IPR16, 0, 8, ReadWriteMode, NVICIPR16Base> ;
    using IPR_N1 = NVIC_IPR16_IPR_N1_Values<NVIC::IPR16, 8, 8, ReadWriteMode, NVICIPR16Base> ;
    using IPR_N2 = NVIC_IPR16_IPR_N2_Values<NVIC::IPR16, 16, 8, ReadWriteMode, NVICIPR16Base> ;
    using IPR_N3 = NVIC_IPR16_IPR_N3_Values<NVIC::IPR16, 24, 8, ReadWriteMode, NVICIPR16Base> ;
    using FieldValues = NVIC_IPR16_IPR_N3_Values<NVIC::IPR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR16Pack  = Register<0xE000E440, 32, ReadWriteMode, NVICIPR16Base, T...> ;

  struct NVICIPR17Base {} ;

  struct IPR17 : public RegisterBase<0xE000E444, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR17_IPR_N0_Values<NVIC::IPR17, 0, 8, ReadWriteMode, NVICIPR17Base> ;
    using IPR_N1 = NVIC_IPR17_IPR_N1_Values<NVIC::IPR17, 8, 8, ReadWriteMode, NVICIPR17Base> ;
    using IPR_N2 = NVIC_IPR17_IPR_N2_Values<NVIC::IPR17, 16, 8, ReadWriteMode, NVICIPR17Base> ;
    using IPR_N3 = NVIC_IPR17_IPR_N3_Values<NVIC::IPR17, 24, 8, ReadWriteMode, NVICIPR17Base> ;
    using FieldValues = NVIC_IPR17_IPR_N3_Values<NVIC::IPR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR17Pack  = Register<0xE000E444, 32, ReadWriteMode, NVICIPR17Base, T...> ;

  struct NVICIPR18Base {} ;

  struct IPR18 : public RegisterBase<0xE000E448, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR18_IPR_N0_Values<NVIC::IPR18, 0, 8, ReadWriteMode, NVICIPR18Base> ;
    using IPR_N1 = NVIC_IPR18_IPR_N1_Values<NVIC::IPR18, 8, 8, ReadWriteMode, NVICIPR18Base> ;
    using IPR_N2 = NVIC_IPR18_IPR_N2_Values<NVIC::IPR18, 16, 8, ReadWriteMode, NVICIPR18Base> ;
    using IPR_N3 = NVIC_IPR18_IPR_N3_Values<NVIC::IPR18, 24, 8, ReadWriteMode, NVICIPR18Base> ;
    using FieldValues = NVIC_IPR18_IPR_N3_Values<NVIC::IPR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR18Pack  = Register<0xE000E448, 32, ReadWriteMode, NVICIPR18Base, T...> ;

  struct NVICIPR19Base {} ;

  struct IPR19 : public RegisterBase<0xE000E44C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR19_IPR_N0_Values<NVIC::IPR19, 0, 8, ReadWriteMode, NVICIPR19Base> ;
    using IPR_N1 = NVIC_IPR19_IPR_N1_Values<NVIC::IPR19, 8, 8, ReadWriteMode, NVICIPR19Base> ;
    using IPR_N2 = NVIC_IPR19_IPR_N2_Values<NVIC::IPR19, 16, 8, ReadWriteMode, NVICIPR19Base> ;
    using IPR_N3 = NVIC_IPR19_IPR_N3_Values<NVIC::IPR19, 24, 8, ReadWriteMode, NVICIPR19Base> ;
    using FieldValues = NVIC_IPR19_IPR_N3_Values<NVIC::IPR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR19Pack  = Register<0xE000E44C, 32, ReadWriteMode, NVICIPR19Base, T...> ;

} ;

#endif //#if !defined(NVICREGISTERS_HPP)
