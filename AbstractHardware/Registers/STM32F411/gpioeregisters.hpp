/*******************************************************************************
* Filename      : gpioeregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOEREGISTERS_HPP)
#define GPIOEREGISTERS_HPP

#include "gpioebitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Gpioe
{
  struct Moder : public RegisterBase<0x40021000, 32, ReadWriteMode>
  {
    using Moder15 = GpioeModerModerValues<Gpioe::Moder, 30, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder14 = GpioeModerModerValues<Gpioe::Moder, 28, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder13 = GpioeModerModerValues<Gpioe::Moder, 26, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder12 = GpioeModerModerValues<Gpioe::Moder, 24, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder11 = GpioeModerModerValues<Gpioe::Moder, 22, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder10 = GpioeModerModerValues<Gpioe::Moder, 20, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder9 = GpioeModerModerValues<Gpioe::Moder, 18, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder8 = GpioeModerModerValues<Gpioe::Moder, 16, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder7 = GpioeModerModerValues<Gpioe::Moder, 14, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder6 = GpioeModerModerValues<Gpioe::Moder, 12, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder5 = GpioeModerModerValues<Gpioe::Moder, 10, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder4 = GpioeModerModerValues<Gpioe::Moder, 8, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder3 = GpioeModerModerValues<Gpioe::Moder, 6, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder2 = GpioeModerModerValues<Gpioe::Moder, 4, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder1 = GpioeModerModerValues<Gpioe::Moder, 2, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
    using Moder0 = GpioeModerModerValues<Gpioe::Moder, 0, 2, ReadWriteMode, GpioeModerModerValuesBase> ;
  } ;

  template<typename... T> 
  using ModerPack  = Register<0x40021000, 32, ReadWriteMode, GpioeModerModerValuesBase, T...> ;

  struct Otyper : public RegisterBase<0x40021004, 32, ReadWriteMode>
  {
    using Ot15 = GpioeOtyperOtValues<Gpioe::Otyper, 15, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot14 = GpioeOtyperOtValues<Gpioe::Otyper, 14, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot13 = GpioeOtyperOtValues<Gpioe::Otyper, 13, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot12 = GpioeOtyperOtValues<Gpioe::Otyper, 12, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot11 = GpioeOtyperOtValues<Gpioe::Otyper, 11, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot10 = GpioeOtyperOtValues<Gpioe::Otyper, 10, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot9 = GpioeOtyperOtValues<Gpioe::Otyper, 9, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot8 = GpioeOtyperOtValues<Gpioe::Otyper, 8, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot7 = GpioeOtyperOtValues<Gpioe::Otyper, 7, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot6 = GpioeOtyperOtValues<Gpioe::Otyper, 6, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot5 = GpioeOtyperOtValues<Gpioe::Otyper, 5, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot4 = GpioeOtyperOtValues<Gpioe::Otyper, 4, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot3 = GpioeOtyperOtValues<Gpioe::Otyper, 3, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot2 = GpioeOtyperOtValues<Gpioe::Otyper, 2, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot1 = GpioeOtyperOtValues<Gpioe::Otyper, 1, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
    using Ot0 = GpioeOtyperOtValues<Gpioe::Otyper, 0, 1, ReadWriteMode, GpioeOtyperOtValuesBase> ;
  } ;

  template<typename... T> 
  using OtyperPack  = Register<0x40021004, 32, ReadWriteMode, GpioeOtyperOtValuesBase, T...> ;

  struct Ospeedr : public RegisterBase<0x40021008, 32, ReadWriteMode>
  {
    using Ospeedr15 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 30, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr14 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 28, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr13 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 26, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr12 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 24, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr11 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 22, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr10 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 20, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr9 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 18, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr8 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 16, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr7 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 14, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr6 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 12, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr5 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 10, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr4 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 8, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr3 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 6, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr2 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 4, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr1 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 2, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
    using Ospeedr0 = GpioeOspeedrOspeedrValues<Gpioe::Ospeedr, 0, 2, ReadWriteMode, GpioeOspeedrOspeedrValuesBase> ;
  } ;

  template<typename... T> 
  using OspeedrPack  = Register<0x40021008, 32, ReadWriteMode, GpioeOspeedrOspeedrValuesBase, T...> ;

  struct Pupdr : public RegisterBase<0x4002100C, 32, ReadWriteMode>
  {
    using Pupdr15 = GpioePupdrPupdrValues<Gpioe::Pupdr, 30, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr14 = GpioePupdrPupdrValues<Gpioe::Pupdr, 28, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr13 = GpioePupdrPupdrValues<Gpioe::Pupdr, 26, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr12 = GpioePupdrPupdrValues<Gpioe::Pupdr, 24, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr11 = GpioePupdrPupdrValues<Gpioe::Pupdr, 22, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr10 = GpioePupdrPupdrValues<Gpioe::Pupdr, 20, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr9 = GpioePupdrPupdrValues<Gpioe::Pupdr, 18, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr8 = GpioePupdrPupdrValues<Gpioe::Pupdr, 16, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr7 = GpioePupdrPupdrValues<Gpioe::Pupdr, 14, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr6 = GpioePupdrPupdrValues<Gpioe::Pupdr, 12, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr5 = GpioePupdrPupdrValues<Gpioe::Pupdr, 10, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr4 = GpioePupdrPupdrValues<Gpioe::Pupdr, 8, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr3 = GpioePupdrPupdrValues<Gpioe::Pupdr, 6, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr2 = GpioePupdrPupdrValues<Gpioe::Pupdr, 4, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr1 = GpioePupdrPupdrValues<Gpioe::Pupdr, 2, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
    using Pupdr0 = GpioePupdrPupdrValues<Gpioe::Pupdr, 0, 2, ReadWriteMode, GpioePupdrPupdrValuesBase> ;
  } ;

  template<typename... T> 
  using PupdrPack  = Register<0x4002100C, 32, ReadWriteMode, GpioePupdrPupdrValuesBase, T...> ;

  struct Idr : public RegisterBase<0x40021010, 32, ReadMode>
  {
    using Idr15 = GpioeIdrIdrValues<Gpioe::Idr, 15, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr14 = GpioeIdrIdrValues<Gpioe::Idr, 14, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr13 = GpioeIdrIdrValues<Gpioe::Idr, 13, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr12 = GpioeIdrIdrValues<Gpioe::Idr, 12, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr11 = GpioeIdrIdrValues<Gpioe::Idr, 11, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr10 = GpioeIdrIdrValues<Gpioe::Idr, 10, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr9 = GpioeIdrIdrValues<Gpioe::Idr, 9, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr8 = GpioeIdrIdrValues<Gpioe::Idr, 8, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr7 = GpioeIdrIdrValues<Gpioe::Idr, 7, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr6 = GpioeIdrIdrValues<Gpioe::Idr, 6, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr5 = GpioeIdrIdrValues<Gpioe::Idr, 5, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr4 = GpioeIdrIdrValues<Gpioe::Idr, 4, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr3 = GpioeIdrIdrValues<Gpioe::Idr, 3, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr2 = GpioeIdrIdrValues<Gpioe::Idr, 2, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr1 = GpioeIdrIdrValues<Gpioe::Idr, 1, 1, ReadMode, GpioeIdrIdrValuesBase> ;
    using Idr0 = GpioeIdrIdrValues<Gpioe::Idr, 0, 1, ReadMode, GpioeIdrIdrValuesBase> ;
  } ;

  template<typename... T> 
  using IdrPack  = Register<0x40021010, 32, ReadMode, GpioeIdrIdrValuesBase, T...> ;

  struct Odr : public RegisterBase<0x40021014, 32, ReadWriteMode>
  {
    using Odr15 = GpioeOdrOdrValues<Gpioe::Odr, 15, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr14 = GpioeOdrOdrValues<Gpioe::Odr, 14, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr13 = GpioeOdrOdrValues<Gpioe::Odr, 13, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr12 = GpioeOdrOdrValues<Gpioe::Odr, 12, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr11 = GpioeOdrOdrValues<Gpioe::Odr, 11, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr10 = GpioeOdrOdrValues<Gpioe::Odr, 10, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr9 = GpioeOdrOdrValues<Gpioe::Odr, 9, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr8 = GpioeOdrOdrValues<Gpioe::Odr, 8, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr7 = GpioeOdrOdrValues<Gpioe::Odr, 7, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr6 = GpioeOdrOdrValues<Gpioe::Odr, 6, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr5 = GpioeOdrOdrValues<Gpioe::Odr, 5, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr4 = GpioeOdrOdrValues<Gpioe::Odr, 4, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr3 = GpioeOdrOdrValues<Gpioe::Odr, 3, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr2 = GpioeOdrOdrValues<Gpioe::Odr, 2, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr1 = GpioeOdrOdrValues<Gpioe::Odr, 1, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
    using Odr0 = GpioeOdrOdrValues<Gpioe::Odr, 0, 1, ReadWriteMode, GpioeOdrOdrValuesBase> ;
  } ;

  template<typename... T> 
  using OdrPack  = Register<0x40021014, 32, ReadWriteMode, GpioeOdrOdrValuesBase, T...> ;

  struct Bsrr : public RegisterBase<0x40021018, 32, WriteMode>
  {
    using Br15 = GpioeBsrrBrValues<Gpioe::Bsrr, 31, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br14 = GpioeBsrrBrValues<Gpioe::Bsrr, 30, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br13 = GpioeBsrrBrValues<Gpioe::Bsrr, 29, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br12 = GpioeBsrrBrValues<Gpioe::Bsrr, 28, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br11 = GpioeBsrrBrValues<Gpioe::Bsrr, 27, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br10 = GpioeBsrrBrValues<Gpioe::Bsrr, 26, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br9 = GpioeBsrrBrValues<Gpioe::Bsrr, 25, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br8 = GpioeBsrrBrValues<Gpioe::Bsrr, 24, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br7 = GpioeBsrrBrValues<Gpioe::Bsrr, 23, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br6 = GpioeBsrrBrValues<Gpioe::Bsrr, 22, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br5 = GpioeBsrrBrValues<Gpioe::Bsrr, 21, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br4 = GpioeBsrrBrValues<Gpioe::Bsrr, 20, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br3 = GpioeBsrrBrValues<Gpioe::Bsrr, 19, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br2 = GpioeBsrrBrValues<Gpioe::Bsrr, 18, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br1 = GpioeBsrrBrValues<Gpioe::Bsrr, 17, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Br0 = GpioeBsrrBrValues<Gpioe::Bsrr, 16, 1, WriteMode, GpioeBsrrBrValuesBase> ;
    using Bs15 = GpioeBsrrBsValues<Gpioe::Bsrr, 15, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs14 = GpioeBsrrBsValues<Gpioe::Bsrr, 14, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs13 = GpioeBsrrBsValues<Gpioe::Bsrr, 13, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs12 = GpioeBsrrBsValues<Gpioe::Bsrr, 12, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs11 = GpioeBsrrBsValues<Gpioe::Bsrr, 11, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs10 = GpioeBsrrBsValues<Gpioe::Bsrr, 10, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs9 = GpioeBsrrBsValues<Gpioe::Bsrr, 9, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs8 = GpioeBsrrBsValues<Gpioe::Bsrr, 8, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs7 = GpioeBsrrBsValues<Gpioe::Bsrr, 7, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs6 = GpioeBsrrBsValues<Gpioe::Bsrr, 6, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs5 = GpioeBsrrBsValues<Gpioe::Bsrr, 5, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs4 = GpioeBsrrBsValues<Gpioe::Bsrr, 4, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs3 = GpioeBsrrBsValues<Gpioe::Bsrr, 3, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs2 = GpioeBsrrBsValues<Gpioe::Bsrr, 2, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs1 = GpioeBsrrBsValues<Gpioe::Bsrr, 1, 1, WriteMode, GpioeBsrrBsValuesBase> ;
    using Bs0 = GpioeBsrrBsValues<Gpioe::Bsrr, 0, 1, WriteMode, GpioeBsrrBsValuesBase> ;
  } ;

  template<typename... T> 
  using BsrrPack  = Register<0x40021018, 32, WriteMode, GpioeBsrrBrValuesBase, T...> ;

  struct Lckr : public RegisterBase<0x4002101C, 32, ReadWriteMode>
  {
    using Lckk = GpioeLckrLckkValues<Gpioe::Lckr, 16, 1, ReadWriteMode, GpioeLckrLckkValuesBase> ;
    using Lck15 = GpioeLckrLckValues<Gpioe::Lckr, 15, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck14 = GpioeLckrLckValues<Gpioe::Lckr, 14, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck13 = GpioeLckrLckValues<Gpioe::Lckr, 13, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck12 = GpioeLckrLckValues<Gpioe::Lckr, 12, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck11 = GpioeLckrLckValues<Gpioe::Lckr, 11, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck10 = GpioeLckrLckValues<Gpioe::Lckr, 10, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck9 = GpioeLckrLckValues<Gpioe::Lckr, 9, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck8 = GpioeLckrLckValues<Gpioe::Lckr, 8, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck7 = GpioeLckrLckValues<Gpioe::Lckr, 7, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck6 = GpioeLckrLckValues<Gpioe::Lckr, 6, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck5 = GpioeLckrLckValues<Gpioe::Lckr, 5, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck4 = GpioeLckrLckValues<Gpioe::Lckr, 4, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck3 = GpioeLckrLckValues<Gpioe::Lckr, 3, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck2 = GpioeLckrLckValues<Gpioe::Lckr, 2, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck1 = GpioeLckrLckValues<Gpioe::Lckr, 1, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
    using Lck0 = GpioeLckrLckValues<Gpioe::Lckr, 0, 1, ReadWriteMode, GpioeLckrLckValuesBase> ;
  } ;

  template<typename... T> 
  using LckrPack  = Register<0x4002101C, 32, ReadWriteMode, GpioeLckrLckkValuesBase, T...> ;

  struct Afrl : public RegisterBase<0x40021020, 32, ReadWriteMode>
  {
    using Afrl7 = GpioeAfrlAfrlValues<Gpioe::Afrl, 28, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
    using Afrl6 = GpioeAfrlAfrlValues<Gpioe::Afrl, 24, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
    using Afrl5 = GpioeAfrlAfrlValues<Gpioe::Afrl, 20, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
    using Afrl4 = GpioeAfrlAfrlValues<Gpioe::Afrl, 16, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
    using Afrl3 = GpioeAfrlAfrlValues<Gpioe::Afrl, 12, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
    using Afrl2 = GpioeAfrlAfrlValues<Gpioe::Afrl, 8, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
    using Afrl1 = GpioeAfrlAfrlValues<Gpioe::Afrl, 4, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
    using Afrl0 = GpioeAfrlAfrlValues<Gpioe::Afrl, 0, 4, ReadWriteMode, GpioeAfrlAfrlValuesBase> ;
  } ;

  template<typename... T> 
  using AfrlPack  = Register<0x40021020, 32, ReadWriteMode, GpioeAfrlAfrlValuesBase, T...> ;

  struct Afrh : public RegisterBase<0x40021024, 32, ReadWriteMode>
  {
    using Afrh15 = GpioeAfrhAfrhValues<Gpioe::Afrh, 28, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
    using Afrh14 = GpioeAfrhAfrhValues<Gpioe::Afrh, 24, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
    using Afrh13 = GpioeAfrhAfrhValues<Gpioe::Afrh, 20, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
    using Afrh12 = GpioeAfrhAfrhValues<Gpioe::Afrh, 16, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
    using Afrh11 = GpioeAfrhAfrhValues<Gpioe::Afrh, 12, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
    using Afrh10 = GpioeAfrhAfrhValues<Gpioe::Afrh, 8, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
    using Afrh9 = GpioeAfrhAfrhValues<Gpioe::Afrh, 4, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
    using Afrh8 = GpioeAfrhAfrhValues<Gpioe::Afrh, 0, 4, ReadWriteMode, GpioeAfrhAfrhValuesBase> ;
  } ;

  template<typename... T> 
  using AfrhPack  = Register<0x40021024, 32, ReadWriteMode, GpioeAfrhAfrhValuesBase, T...> ;

} ;

#endif //#if !defined(GPIOEREGISTERS_HPP)
