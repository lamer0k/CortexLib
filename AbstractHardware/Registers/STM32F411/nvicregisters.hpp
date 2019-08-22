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

#include "nvicbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Nvic
{
  struct Iser0 : public RegisterBase<0xE000E100, 32, ReadWriteMode>
  {
    using Setena = ReadWriteMode<Nvic::Iser0, 0, 32> ;
  } ;

  template<typename... T> 
  using Iser0Pack  = Register<0xE000E100, 32, ReadWriteMode, NvicIserSetenaValuesBase, T...> ;

  struct Iser1 : public RegisterBase<0xE000E104, 32, ReadWriteMode>
  {
    using Setena = ReadWriteMode<Nvic::Iser1, 0, 32> ;
  } ;

  template<typename... T> 
  using Iser1Pack  = Register<0xE000E104, 32, ReadWriteMode, NvicIserSetenaValuesBase, T...> ;

  struct Iser2 : public RegisterBase<0xE000E108, 32, ReadWriteMode>
  {
    using Setena = ReadWriteMode<Nvic::Iser2, 0, 32> ;
  } ;

  template<typename... T> 
  using Iser2Pack  = Register<0xE000E108, 32, ReadWriteMode, NvicIserSetenaValuesBase, T...> ;

  struct Icer0 : public RegisterBase<0xE000E180, 32, ReadWriteMode>
  {
    using Clrena = ReadWriteMode<Nvic::Icer0, 0, 32> ;
  } ;

  template<typename... T> 
  using Icer0Pack  = Register<0xE000E180, 32, ReadWriteMode, NvicIcerClrenaValuesBase, T...> ;

  struct Icer1 : public RegisterBase<0xE000E184, 32, ReadWriteMode>
  {
    using Clrena = ReadWriteMode<Nvic::Icer1, 0, 32> ;
  } ;

  template<typename... T> 
  using Icer1Pack  = Register<0xE000E184, 32, ReadWriteMode, NvicIcerClrenaValuesBase, T...> ;

  struct Icer2 : public RegisterBase<0xE000E188, 32, ReadWriteMode>
  {
    using Clrena = ReadWriteMode<Nvic::Icer2, 0, 32> ;
  } ;

  template<typename... T> 
  using Icer2Pack  = Register<0xE000E188, 32, ReadWriteMode, NvicIcerClrenaValuesBase, T...> ;

  struct Ispr0 : public RegisterBase<0xE000E200, 32, ReadWriteMode>
  {
    using Setpend = ReadWriteMode<Nvic::Ispr0, 0, 32> ;
  } ;

  template<typename... T> 
  using Ispr0Pack  = Register<0xE000E200, 32, ReadWriteMode, NvicIsprSetpendValuesBase, T...> ;

  struct Ispr1 : public RegisterBase<0xE000E204, 32, ReadWriteMode>
  {
    using Setpend = ReadWriteMode<Nvic::Ispr1, 0, 32> ;
  } ;

  template<typename... T> 
  using Ispr1Pack  = Register<0xE000E204, 32, ReadWriteMode, NvicIsprSetpendValuesBase, T...> ;

  struct Ispr2 : public RegisterBase<0xE000E208, 32, ReadWriteMode>
  {
    using Setpend = ReadWriteMode<Nvic::Ispr2, 0, 32> ;
  } ;

  template<typename... T> 
  using Ispr2Pack  = Register<0xE000E208, 32, ReadWriteMode, NvicIsprSetpendValuesBase, T...> ;

  struct Icpr0 : public RegisterBase<0xE000E280, 32, ReadWriteMode>
  {
    using Clrpend = ReadWriteMode<Nvic::Icpr0, 0, 32> ;
  } ;

  template<typename... T> 
  using Icpr0Pack  = Register<0xE000E280, 32, ReadWriteMode, NvicIcprClrpendValuesBase, T...> ;

  struct Icpr1 : public RegisterBase<0xE000E284, 32, ReadWriteMode>
  {
    using Clrpend = ReadWriteMode<Nvic::Icpr1, 0, 32> ;
  } ;

  template<typename... T> 
  using Icpr1Pack  = Register<0xE000E284, 32, ReadWriteMode, NvicIcprClrpendValuesBase, T...> ;

  struct Icpr2 : public RegisterBase<0xE000E288, 32, ReadWriteMode>
  {
    using Clrpend = ReadWriteMode<Nvic::Icpr2, 0, 32> ;
  } ;

  template<typename... T> 
  using Icpr2Pack  = Register<0xE000E288, 32, ReadWriteMode, NvicIcprClrpendValuesBase, T...> ;

  struct Iabr0 : public RegisterBase<0xE000E300, 32, ReadMode>
  {
    using Active = ReadMode<Nvic::Iabr0, 0, 32> ;
  } ;

  template<typename... T> 
  using Iabr0Pack  = Register<0xE000E300, 32, ReadMode, NvicIabrActiveValuesBase, T...> ;

  struct Iabr1 : public RegisterBase<0xE000E304, 32, ReadMode>
  {
    using Active = ReadMode<Nvic::Iabr1, 0, 32> ;
  } ;

  template<typename... T> 
  using Iabr1Pack  = Register<0xE000E304, 32, ReadMode, NvicIabrActiveValuesBase, T...> ;

  struct Iabr2 : public RegisterBase<0xE000E308, 32, ReadMode>
  {
    using Active = ReadMode<Nvic::Iabr2, 0, 32> ;
  } ;

  template<typename... T> 
  using Iabr2Pack  = Register<0xE000E308, 32, ReadMode, NvicIabrActiveValuesBase, T...> ;

  struct Ipr0 : public RegisterBase<0xE000E400, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr0, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr0, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr0, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr0, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr0Pack  = Register<0xE000E400, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr1 : public RegisterBase<0xE000E404, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr1, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr1, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr1, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr1, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr1Pack  = Register<0xE000E404, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr2 : public RegisterBase<0xE000E408, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr2, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr2, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr2, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr2, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr2Pack  = Register<0xE000E408, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr3 : public RegisterBase<0xE000E40C, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr3, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr3, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr3, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr3, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr3Pack  = Register<0xE000E40C, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr4 : public RegisterBase<0xE000E410, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr4, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr4, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr4, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr4, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr4Pack  = Register<0xE000E410, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr5 : public RegisterBase<0xE000E414, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr5, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr5, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr5, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr5, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr5Pack  = Register<0xE000E414, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr6 : public RegisterBase<0xE000E418, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr6, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr6, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr6, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr6, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr6Pack  = Register<0xE000E418, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr7 : public RegisterBase<0xE000E41C, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr7, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr7, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr7, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr7, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr7Pack  = Register<0xE000E41C, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr8 : public RegisterBase<0xE000E420, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr8, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr8, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr8, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr8, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr8Pack  = Register<0xE000E420, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr9 : public RegisterBase<0xE000E424, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr9, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr9, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr9, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr9, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr9Pack  = Register<0xE000E424, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr10 : public RegisterBase<0xE000E428, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr10, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr10, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr10, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr10, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr10Pack  = Register<0xE000E428, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr11 : public RegisterBase<0xE000E42C, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr11, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr11, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr11, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr11, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr11Pack  = Register<0xE000E42C, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr12 : public RegisterBase<0xE000E430, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr12, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr12, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr12, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr12, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr12Pack  = Register<0xE000E430, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr13 : public RegisterBase<0xE000E434, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr13, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr13, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr13, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr13, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr13Pack  = Register<0xE000E434, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr14 : public RegisterBase<0xE000E438, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr14, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr14, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr14, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr14, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr14Pack  = Register<0xE000E438, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr15 : public RegisterBase<0xE000E43C, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr15, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr15, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr15, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr15, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr15Pack  = Register<0xE000E43C, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr16 : public RegisterBase<0xE000E440, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr16, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr16, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr16, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr16, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr16Pack  = Register<0xE000E440, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr17 : public RegisterBase<0xE000E444, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr17, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr17, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr17, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr17, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr17Pack  = Register<0xE000E444, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr18 : public RegisterBase<0xE000E448, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr18, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr18, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr18, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr18, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr18Pack  = Register<0xE000E448, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

  struct Ipr19 : public RegisterBase<0xE000E44C, 32, ReadWriteMode>
  {
    using IprN0 = ReadWriteMode<Nvic::Ipr19, 0, 8> ;
    using IprN1 = ReadWriteMode<Nvic::Ipr19, 8, 8> ;
    using IprN2 = ReadWriteMode<Nvic::Ipr19, 16, 8> ;
    using IprN3 = ReadWriteMode<Nvic::Ipr19, 24, 8> ;
  } ;

  template<typename... T> 
  using Ipr19Pack  = Register<0xE000E44C, 32, ReadWriteMode, NvicIprIprNValuesBase, T...> ;

} ;

#endif //#if !defined(NVICREGISTERS_HPP)
