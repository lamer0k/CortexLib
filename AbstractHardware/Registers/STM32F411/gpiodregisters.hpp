/*******************************************************************************
* Filename      : gpiodregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIODREGISTERS_HPP)
#define GPIODREGISTERS_HPP

#include "gpiodbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Gpiod
{
  struct Moder : public RegisterBase<0x40020C00, 32, ReadWriteMode>
  {
    using Moder15 = GpiodModerModerValues<Gpiod::Moder, 30, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder14 = GpiodModerModerValues<Gpiod::Moder, 28, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder13 = GpiodModerModerValues<Gpiod::Moder, 26, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder12 = GpiodModerModerValues<Gpiod::Moder, 24, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder11 = GpiodModerModerValues<Gpiod::Moder, 22, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder10 = GpiodModerModerValues<Gpiod::Moder, 20, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder9 = GpiodModerModerValues<Gpiod::Moder, 18, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder8 = GpiodModerModerValues<Gpiod::Moder, 16, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder7 = GpiodModerModerValues<Gpiod::Moder, 14, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder6 = GpiodModerModerValues<Gpiod::Moder, 12, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder5 = GpiodModerModerValues<Gpiod::Moder, 10, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder4 = GpiodModerModerValues<Gpiod::Moder, 8, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder3 = GpiodModerModerValues<Gpiod::Moder, 6, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder2 = GpiodModerModerValues<Gpiod::Moder, 4, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder1 = GpiodModerModerValues<Gpiod::Moder, 2, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
    using Moder0 = GpiodModerModerValues<Gpiod::Moder, 0, 2, ReadWriteMode, GpiodModerModerValuesBase> ;
  } ;

  template<typename... T> 
  using ModerPack  = Register<0x40020C00, 32, ReadWriteMode, GpiodModerModerValuesBase, T...> ;

  struct Otyper : public RegisterBase<0x40020C04, 32, ReadWriteMode>
  {
    using Ot15 = GpiodOtyperOtValues<Gpiod::Otyper, 15, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot14 = GpiodOtyperOtValues<Gpiod::Otyper, 14, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot13 = GpiodOtyperOtValues<Gpiod::Otyper, 13, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot12 = GpiodOtyperOtValues<Gpiod::Otyper, 12, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot11 = GpiodOtyperOtValues<Gpiod::Otyper, 11, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot10 = GpiodOtyperOtValues<Gpiod::Otyper, 10, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot9 = GpiodOtyperOtValues<Gpiod::Otyper, 9, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot8 = GpiodOtyperOtValues<Gpiod::Otyper, 8, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot7 = GpiodOtyperOtValues<Gpiod::Otyper, 7, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot6 = GpiodOtyperOtValues<Gpiod::Otyper, 6, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot5 = GpiodOtyperOtValues<Gpiod::Otyper, 5, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot4 = GpiodOtyperOtValues<Gpiod::Otyper, 4, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot3 = GpiodOtyperOtValues<Gpiod::Otyper, 3, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot2 = GpiodOtyperOtValues<Gpiod::Otyper, 2, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot1 = GpiodOtyperOtValues<Gpiod::Otyper, 1, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
    using Ot0 = GpiodOtyperOtValues<Gpiod::Otyper, 0, 1, ReadWriteMode, GpiodOtyperOtValuesBase> ;
  } ;

  template<typename... T> 
  using OtyperPack  = Register<0x40020C04, 32, ReadWriteMode, GpiodOtyperOtValuesBase, T...> ;

  struct Ospeedr : public RegisterBase<0x40020C08, 32, ReadWriteMode>
  {
    using Ospeedr15 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 30, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr14 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 28, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr13 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 26, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr12 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 24, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr11 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 22, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr10 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 20, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr9 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 18, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr8 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 16, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr7 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 14, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr6 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 12, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr5 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 10, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr4 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 8, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr3 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 6, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr2 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 4, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr1 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 2, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
    using Ospeedr0 = GpiodOspeedrOspeedrValues<Gpiod::Ospeedr, 0, 2, ReadWriteMode, GpiodOspeedrOspeedrValuesBase> ;
  } ;

  template<typename... T> 
  using OspeedrPack  = Register<0x40020C08, 32, ReadWriteMode, GpiodOspeedrOspeedrValuesBase, T...> ;

  struct Pupdr : public RegisterBase<0x40020C0C, 32, ReadWriteMode>
  {
    using Pupdr15 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 30, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr14 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 28, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr13 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 26, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr12 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 24, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr11 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 22, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr10 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 20, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr9 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 18, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr8 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 16, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr7 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 14, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr6 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 12, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr5 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 10, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr4 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 8, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr3 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 6, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr2 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 4, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr1 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 2, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
    using Pupdr0 = GpiodPupdrPupdrValues<Gpiod::Pupdr, 0, 2, ReadWriteMode, GpiodPupdrPupdrValuesBase> ;
  } ;

  template<typename... T> 
  using PupdrPack  = Register<0x40020C0C, 32, ReadWriteMode, GpiodPupdrPupdrValuesBase, T...> ;

  struct Idr : public RegisterBase<0x40020C10, 32, ReadMode>
  {
    using Idr15 = GpiodIdrIdrValues<Gpiod::Idr, 15, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr14 = GpiodIdrIdrValues<Gpiod::Idr, 14, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr13 = GpiodIdrIdrValues<Gpiod::Idr, 13, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr12 = GpiodIdrIdrValues<Gpiod::Idr, 12, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr11 = GpiodIdrIdrValues<Gpiod::Idr, 11, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr10 = GpiodIdrIdrValues<Gpiod::Idr, 10, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr9 = GpiodIdrIdrValues<Gpiod::Idr, 9, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr8 = GpiodIdrIdrValues<Gpiod::Idr, 8, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr7 = GpiodIdrIdrValues<Gpiod::Idr, 7, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr6 = GpiodIdrIdrValues<Gpiod::Idr, 6, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr5 = GpiodIdrIdrValues<Gpiod::Idr, 5, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr4 = GpiodIdrIdrValues<Gpiod::Idr, 4, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr3 = GpiodIdrIdrValues<Gpiod::Idr, 3, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr2 = GpiodIdrIdrValues<Gpiod::Idr, 2, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr1 = GpiodIdrIdrValues<Gpiod::Idr, 1, 1, ReadMode, GpiodIdrIdrValuesBase> ;
    using Idr0 = GpiodIdrIdrValues<Gpiod::Idr, 0, 1, ReadMode, GpiodIdrIdrValuesBase> ;
  } ;

  template<typename... T> 
  using IdrPack  = Register<0x40020C10, 32, ReadMode, GpiodIdrIdrValuesBase, T...> ;

  struct Odr : public RegisterBase<0x40020C14, 32, ReadWriteMode>
  {
    using Odr15 = GpiodOdrOdrValues<Gpiod::Odr, 15, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr14 = GpiodOdrOdrValues<Gpiod::Odr, 14, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr13 = GpiodOdrOdrValues<Gpiod::Odr, 13, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr12 = GpiodOdrOdrValues<Gpiod::Odr, 12, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr11 = GpiodOdrOdrValues<Gpiod::Odr, 11, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr10 = GpiodOdrOdrValues<Gpiod::Odr, 10, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr9 = GpiodOdrOdrValues<Gpiod::Odr, 9, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr8 = GpiodOdrOdrValues<Gpiod::Odr, 8, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr7 = GpiodOdrOdrValues<Gpiod::Odr, 7, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr6 = GpiodOdrOdrValues<Gpiod::Odr, 6, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr5 = GpiodOdrOdrValues<Gpiod::Odr, 5, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr4 = GpiodOdrOdrValues<Gpiod::Odr, 4, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr3 = GpiodOdrOdrValues<Gpiod::Odr, 3, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr2 = GpiodOdrOdrValues<Gpiod::Odr, 2, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr1 = GpiodOdrOdrValues<Gpiod::Odr, 1, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
    using Odr0 = GpiodOdrOdrValues<Gpiod::Odr, 0, 1, ReadWriteMode, GpiodOdrOdrValuesBase> ;
  } ;

  template<typename... T> 
  using OdrPack  = Register<0x40020C14, 32, ReadWriteMode, GpiodOdrOdrValuesBase, T...> ;

  struct Bsrr : public RegisterBase<0x40020C18, 32, WriteMode>
  {
    using Br15 = GpiodBsrrBrValues<Gpiod::Bsrr, 31, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br14 = GpiodBsrrBrValues<Gpiod::Bsrr, 30, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br13 = GpiodBsrrBrValues<Gpiod::Bsrr, 29, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br12 = GpiodBsrrBrValues<Gpiod::Bsrr, 28, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br11 = GpiodBsrrBrValues<Gpiod::Bsrr, 27, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br10 = GpiodBsrrBrValues<Gpiod::Bsrr, 26, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br9 = GpiodBsrrBrValues<Gpiod::Bsrr, 25, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br8 = GpiodBsrrBrValues<Gpiod::Bsrr, 24, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br7 = GpiodBsrrBrValues<Gpiod::Bsrr, 23, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br6 = GpiodBsrrBrValues<Gpiod::Bsrr, 22, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br5 = GpiodBsrrBrValues<Gpiod::Bsrr, 21, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br4 = GpiodBsrrBrValues<Gpiod::Bsrr, 20, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br3 = GpiodBsrrBrValues<Gpiod::Bsrr, 19, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br2 = GpiodBsrrBrValues<Gpiod::Bsrr, 18, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br1 = GpiodBsrrBrValues<Gpiod::Bsrr, 17, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Br0 = GpiodBsrrBrValues<Gpiod::Bsrr, 16, 1, WriteMode, GpiodBsrrBrValuesBase> ;
    using Bs15 = GpiodBsrrBsValues<Gpiod::Bsrr, 15, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs14 = GpiodBsrrBsValues<Gpiod::Bsrr, 14, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs13 = GpiodBsrrBsValues<Gpiod::Bsrr, 13, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs12 = GpiodBsrrBsValues<Gpiod::Bsrr, 12, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs11 = GpiodBsrrBsValues<Gpiod::Bsrr, 11, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs10 = GpiodBsrrBsValues<Gpiod::Bsrr, 10, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs9 = GpiodBsrrBsValues<Gpiod::Bsrr, 9, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs8 = GpiodBsrrBsValues<Gpiod::Bsrr, 8, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs7 = GpiodBsrrBsValues<Gpiod::Bsrr, 7, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs6 = GpiodBsrrBsValues<Gpiod::Bsrr, 6, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs5 = GpiodBsrrBsValues<Gpiod::Bsrr, 5, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs4 = GpiodBsrrBsValues<Gpiod::Bsrr, 4, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs3 = GpiodBsrrBsValues<Gpiod::Bsrr, 3, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs2 = GpiodBsrrBsValues<Gpiod::Bsrr, 2, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs1 = GpiodBsrrBsValues<Gpiod::Bsrr, 1, 1, WriteMode, GpiodBsrrBsValuesBase> ;
    using Bs0 = GpiodBsrrBsValues<Gpiod::Bsrr, 0, 1, WriteMode, GpiodBsrrBsValuesBase> ;
  } ;

  template<typename... T> 
  using BsrrPack  = Register<0x40020C18, 32, WriteMode, GpiodBsrrBrValuesBase, T...> ;

  struct Lckr : public RegisterBase<0x40020C1C, 32, ReadWriteMode>
  {
    using Lckk = GpiodLckrLckkValues<Gpiod::Lckr, 16, 1, ReadWriteMode, GpiodLckrLckkValuesBase> ;
    using Lck15 = GpiodLckrLckValues<Gpiod::Lckr, 15, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck14 = GpiodLckrLckValues<Gpiod::Lckr, 14, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck13 = GpiodLckrLckValues<Gpiod::Lckr, 13, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck12 = GpiodLckrLckValues<Gpiod::Lckr, 12, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck11 = GpiodLckrLckValues<Gpiod::Lckr, 11, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck10 = GpiodLckrLckValues<Gpiod::Lckr, 10, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck9 = GpiodLckrLckValues<Gpiod::Lckr, 9, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck8 = GpiodLckrLckValues<Gpiod::Lckr, 8, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck7 = GpiodLckrLckValues<Gpiod::Lckr, 7, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck6 = GpiodLckrLckValues<Gpiod::Lckr, 6, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck5 = GpiodLckrLckValues<Gpiod::Lckr, 5, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck4 = GpiodLckrLckValues<Gpiod::Lckr, 4, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck3 = GpiodLckrLckValues<Gpiod::Lckr, 3, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck2 = GpiodLckrLckValues<Gpiod::Lckr, 2, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck1 = GpiodLckrLckValues<Gpiod::Lckr, 1, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
    using Lck0 = GpiodLckrLckValues<Gpiod::Lckr, 0, 1, ReadWriteMode, GpiodLckrLckValuesBase> ;
  } ;

  template<typename... T> 
  using LckrPack  = Register<0x40020C1C, 32, ReadWriteMode, GpiodLckrLckkValuesBase, T...> ;

  struct Afrl : public RegisterBase<0x40020C20, 32, ReadWriteMode>
  {
    using Afrl7 = GpiodAfrlAfrlValues<Gpiod::Afrl, 28, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
    using Afrl6 = GpiodAfrlAfrlValues<Gpiod::Afrl, 24, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
    using Afrl5 = GpiodAfrlAfrlValues<Gpiod::Afrl, 20, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
    using Afrl4 = GpiodAfrlAfrlValues<Gpiod::Afrl, 16, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
    using Afrl3 = GpiodAfrlAfrlValues<Gpiod::Afrl, 12, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
    using Afrl2 = GpiodAfrlAfrlValues<Gpiod::Afrl, 8, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
    using Afrl1 = GpiodAfrlAfrlValues<Gpiod::Afrl, 4, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
    using Afrl0 = GpiodAfrlAfrlValues<Gpiod::Afrl, 0, 4, ReadWriteMode, GpiodAfrlAfrlValuesBase> ;
  } ;

  template<typename... T> 
  using AfrlPack  = Register<0x40020C20, 32, ReadWriteMode, GpiodAfrlAfrlValuesBase, T...> ;

  struct Afrh : public RegisterBase<0x40020C24, 32, ReadWriteMode>
  {
    using Afrh15 = GpiodAfrhAfrhValues<Gpiod::Afrh, 28, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
    using Afrh14 = GpiodAfrhAfrhValues<Gpiod::Afrh, 24, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
    using Afrh13 = GpiodAfrhAfrhValues<Gpiod::Afrh, 20, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
    using Afrh12 = GpiodAfrhAfrhValues<Gpiod::Afrh, 16, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
    using Afrh11 = GpiodAfrhAfrhValues<Gpiod::Afrh, 12, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
    using Afrh10 = GpiodAfrhAfrhValues<Gpiod::Afrh, 8, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
    using Afrh9 = GpiodAfrhAfrhValues<Gpiod::Afrh, 4, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
    using Afrh8 = GpiodAfrhAfrhValues<Gpiod::Afrh, 0, 4, ReadWriteMode, GpiodAfrhAfrhValuesBase> ;
  } ;

  template<typename... T> 
  using AfrhPack  = Register<0x40020C24, 32, ReadWriteMode, GpiodAfrhAfrhValuesBase, T...> ;

} ;

#endif //#if !defined(GPIODREGISTERS_HPP)
