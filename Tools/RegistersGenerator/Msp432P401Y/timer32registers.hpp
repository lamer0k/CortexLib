/*******************************************************************************
* Filename      : timer32registers.hpp
*
* Details       : TIMER32. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(TIMER32REGISTERS_HPP)
#define TIMER32REGISTERS_HPP

#include "timer32bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER32
{
  struct TIMER32T32LOAD1Base {} ;

  struct T32LOAD1 : public RegisterBase<0x4000C000, 32, ReadWriteMode>
  {
    using LOAD = TIMER_TLOAD_LOAD_Values<TIMER32::T32LOAD1, 0, 32, ReadWriteMode, TIMER32T32LOAD1Base> ;
  } ;

  template<typename... T> 
  using T32LOAD1Pack  = Register<0x4000C000, 32, ReadWriteMode, TIMER32T32LOAD1Base, T...> ;

  struct TIMER32T32VALUE1Base {} ;

  struct T32VALUE1 : public RegisterBase<0x4000C004, 32, ReadMode>
  {
    using VALUE = TIMER_TVALUE_VALUE_Values<TIMER32::T32VALUE1, 0, 32, ReadMode, TIMER32T32VALUE1Base> ;
  } ;

  template<typename... T> 
  using T32VALUE1Pack  = Register<0x4000C004, 32, ReadMode, TIMER32T32VALUE1Base, T...> ;

  struct TIMER32T32CONTROL1Base {} ;

  struct T32CONTROL1 : public RegisterBase<0x4000C008, 32, ReadWriteMode>
  {
    using ONESHOT = TIMER_TCONTROL_ONESHOT_Values<TIMER32::T32CONTROL1, 0, 1, ReadWriteMode, TIMER32T32CONTROL1Base> ;
    using SIZE = TIMER_TCONTROL_SIZE_Values<TIMER32::T32CONTROL1, 1, 1, ReadWriteMode, TIMER32T32CONTROL1Base> ;
    using PRESCALE = TIMER_TCONTROL_PRESCALE_Values<TIMER32::T32CONTROL1, 2, 2, ReadWriteMode, TIMER32T32CONTROL1Base> ;
    using IE = TIMER_TCONTROL_IE_Values<TIMER32::T32CONTROL1, 5, 1, ReadWriteMode, TIMER32T32CONTROL1Base> ;
    using MODE = TIMER_TCONTROL_MODE_Values<TIMER32::T32CONTROL1, 6, 1, ReadWriteMode, TIMER32T32CONTROL1Base> ;
    using ENABLE = TIMER_TCONTROL_ENABLE_Values<TIMER32::T32CONTROL1, 7, 1, ReadWriteMode, TIMER32T32CONTROL1Base> ;
  } ;

  template<typename... T> 
  using T32CONTROL1Pack  = Register<0x4000C008, 32, ReadWriteMode, TIMER32T32CONTROL1Base, T...> ;

  struct TIMER32T32INTCLR1Base {} ;

  struct T32INTCLR1 : public RegisterBase<0x4000C00C, 32, WriteMode>
  {
    using INTCLR = TIMER_TINTCLR_INTCLR_Values<TIMER32::T32INTCLR1, 0, 32, WriteMode, TIMER32T32INTCLR1Base> ;
  } ;

  template<typename... T> 
  using T32INTCLR1Pack  = Register<0x4000C00C, 32, WriteMode, TIMER32T32INTCLR1Base, T...> ;

  struct TIMER32T32RIS1Base {} ;

  struct T32RIS1 : public RegisterBase<0x4000C010, 32, ReadMode>
  {
    using RAW_IFG = TIMER_TRIS_RAW_IFG_Values<TIMER32::T32RIS1, 0, 1, ReadMode, TIMER32T32RIS1Base> ;
  } ;

  template<typename... T> 
  using T32RIS1Pack  = Register<0x4000C010, 32, ReadMode, TIMER32T32RIS1Base, T...> ;

  struct TIMER32T32MIS1Base {} ;

  struct T32MIS1 : public RegisterBase<0x4000C014, 32, ReadMode>
  {
    using IFG = TIMER_TMIS_IFG_Values<TIMER32::T32MIS1, 0, 1, ReadMode, TIMER32T32MIS1Base> ;
  } ;

  template<typename... T> 
  using T32MIS1Pack  = Register<0x4000C014, 32, ReadMode, TIMER32T32MIS1Base, T...> ;

  struct TIMER32T32BGLOAD1Base {} ;

  struct T32BGLOAD1 : public RegisterBase<0x4000C018, 32, ReadWriteMode>
  {
    using BGLOAD = TIMER_TBGLOAD_BGLOAD_Values<TIMER32::T32BGLOAD1, 0, 32, ReadWriteMode, TIMER32T32BGLOAD1Base> ;
  } ;

  template<typename... T> 
  using T32BGLOAD1Pack  = Register<0x4000C018, 32, ReadWriteMode, TIMER32T32BGLOAD1Base, T...> ;

  struct TIMER32T32LOAD2Base {} ;

  struct T32LOAD2 : public RegisterBase<0x4000C020, 32, ReadWriteMode>
  {
    using LOAD = TIMER_TLOAD_LOAD_Values<TIMER32::T32LOAD2, 0, 32, ReadWriteMode, TIMER32T32LOAD2Base> ;
  } ;

  template<typename... T> 
  using T32LOAD2Pack  = Register<0x4000C020, 32, ReadWriteMode, TIMER32T32LOAD2Base, T...> ;

  struct TIMER32T32VALUE2Base {} ;

  struct T32VALUE2 : public RegisterBase<0x4000C024, 32, ReadMode>
  {
    using VALUE = TIMER_TVALUE_VALUE_Values<TIMER32::T32VALUE2, 0, 32, ReadMode, TIMER32T32VALUE2Base> ;
  } ;

  template<typename... T> 
  using T32VALUE2Pack  = Register<0x4000C024, 32, ReadMode, TIMER32T32VALUE2Base, T...> ;

  struct TIMER32T32CONTROL2Base {} ;

  struct T32CONTROL2 : public RegisterBase<0x4000C028, 32, ReadWriteMode>
  {
    using ONESHOT = TIMER_TCONTROL_ONESHOT_Values<TIMER32::T32CONTROL2, 0, 1, ReadWriteMode, TIMER32T32CONTROL2Base> ;
    using SIZE = TIMER_TCONTROL_SIZE_Values<TIMER32::T32CONTROL2, 1, 1, ReadWriteMode, TIMER32T32CONTROL2Base> ;
    using PRESCALE = TIMER_TCONTROL_PRESCALE_Values<TIMER32::T32CONTROL2, 2, 2, ReadWriteMode, TIMER32T32CONTROL2Base> ;
    using IE = TIMER_TCONTROL_IE_Values<TIMER32::T32CONTROL2, 5, 1, ReadWriteMode, TIMER32T32CONTROL2Base> ;
    using MODE = TIMER_TCONTROL_MODE_Values<TIMER32::T32CONTROL2, 6, 1, ReadWriteMode, TIMER32T32CONTROL2Base> ;
    using ENABLE = TIMER_TCONTROL_ENABLE_Values<TIMER32::T32CONTROL2, 7, 1, ReadWriteMode, TIMER32T32CONTROL2Base> ;
  } ;

  template<typename... T> 
  using T32CONTROL2Pack  = Register<0x4000C028, 32, ReadWriteMode, TIMER32T32CONTROL2Base, T...> ;

  struct TIMER32T32INTCLR2Base {} ;

  struct T32INTCLR2 : public RegisterBase<0x4000C02C, 32, WriteMode>
  {
    using INTCLR = TIMER_TINTCLR_INTCLR_Values<TIMER32::T32INTCLR2, 0, 32, WriteMode, TIMER32T32INTCLR2Base> ;
  } ;

  template<typename... T> 
  using T32INTCLR2Pack  = Register<0x4000C02C, 32, WriteMode, TIMER32T32INTCLR2Base, T...> ;

  struct TIMER32T32RIS2Base {} ;

  struct T32RIS2 : public RegisterBase<0x4000C030, 32, ReadMode>
  {
    using RAW_IFG = TIMER_TRIS_RAW_IFG_Values<TIMER32::T32RIS2, 0, 1, ReadMode, TIMER32T32RIS2Base> ;
  } ;

  template<typename... T> 
  using T32RIS2Pack  = Register<0x4000C030, 32, ReadMode, TIMER32T32RIS2Base, T...> ;

  struct TIMER32T32MIS2Base {} ;

  struct T32MIS2 : public RegisterBase<0x4000C034, 32, ReadMode>
  {
    using IFG = TIMER_TMIS_IFG_Values<TIMER32::T32MIS2, 0, 1, ReadMode, TIMER32T32MIS2Base> ;
  } ;

  template<typename... T> 
  using T32MIS2Pack  = Register<0x4000C034, 32, ReadMode, TIMER32T32MIS2Base, T...> ;

  struct TIMER32T32BGLOAD2Base {} ;

  struct T32BGLOAD2 : public RegisterBase<0x4000C038, 32, ReadWriteMode>
  {
    using BGLOAD = TIMER_TBGLOAD_BGLOAD_Values<TIMER32::T32BGLOAD2, 0, 32, ReadWriteMode, TIMER32T32BGLOAD2Base> ;
  } ;

  template<typename... T> 
  using T32BGLOAD2Pack  = Register<0x4000C038, 32, ReadWriteMode, TIMER32T32BGLOAD2Base, T...> ;

} ;

#endif //#if !defined(TIMER32REGISTERS_HPP)
