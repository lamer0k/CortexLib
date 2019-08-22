/*******************************************************************************
* Filename      : gpiobregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOBREGISTERS_HPP)
#define GPIOBREGISTERS_HPP

#include "gpiobbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Gpiob
{
  struct Moder : public RegisterBase<0x40020400, 32, ReadWriteMode>
  {
    using Moder15 = GpiobModerModerValues<Gpiob::Moder, 30, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder14 = GpiobModerModerValues<Gpiob::Moder, 28, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder13 = GpiobModerModerValues<Gpiob::Moder, 26, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder12 = GpiobModerModerValues<Gpiob::Moder, 24, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder11 = GpiobModerModerValues<Gpiob::Moder, 22, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder10 = GpiobModerModerValues<Gpiob::Moder, 20, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder9 = GpiobModerModerValues<Gpiob::Moder, 18, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder8 = GpiobModerModerValues<Gpiob::Moder, 16, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder7 = GpiobModerModerValues<Gpiob::Moder, 14, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder6 = GpiobModerModerValues<Gpiob::Moder, 12, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder5 = GpiobModerModerValues<Gpiob::Moder, 10, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder4 = GpiobModerModerValues<Gpiob::Moder, 8, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder3 = GpiobModerModerValues<Gpiob::Moder, 6, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder2 = GpiobModerModerValues<Gpiob::Moder, 4, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder1 = GpiobModerModerValues<Gpiob::Moder, 2, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
    using Moder0 = GpiobModerModerValues<Gpiob::Moder, 0, 2, ReadWriteMode, GpiobModerModerValuesBase> ;
  } ;

  template<typename... T> 
  using ModerPack  = Register<0x40020400, 32, ReadWriteMode, GpiobModerModerValuesBase, T...> ;

  struct Otyper : public RegisterBase<0x40020404, 32, ReadWriteMode>
  {
    using Ot15 = GpiobOtyperOtValues<Gpiob::Otyper, 15, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot14 = GpiobOtyperOtValues<Gpiob::Otyper, 14, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot13 = GpiobOtyperOtValues<Gpiob::Otyper, 13, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot12 = GpiobOtyperOtValues<Gpiob::Otyper, 12, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot11 = GpiobOtyperOtValues<Gpiob::Otyper, 11, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot10 = GpiobOtyperOtValues<Gpiob::Otyper, 10, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot9 = GpiobOtyperOtValues<Gpiob::Otyper, 9, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot8 = GpiobOtyperOtValues<Gpiob::Otyper, 8, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot7 = GpiobOtyperOtValues<Gpiob::Otyper, 7, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot6 = GpiobOtyperOtValues<Gpiob::Otyper, 6, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot5 = GpiobOtyperOtValues<Gpiob::Otyper, 5, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot4 = GpiobOtyperOtValues<Gpiob::Otyper, 4, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot3 = GpiobOtyperOtValues<Gpiob::Otyper, 3, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot2 = GpiobOtyperOtValues<Gpiob::Otyper, 2, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot1 = GpiobOtyperOtValues<Gpiob::Otyper, 1, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
    using Ot0 = GpiobOtyperOtValues<Gpiob::Otyper, 0, 1, ReadWriteMode, GpiobOtyperOtValuesBase> ;
  } ;

  template<typename... T> 
  using OtyperPack  = Register<0x40020404, 32, ReadWriteMode, GpiobOtyperOtValuesBase, T...> ;

  struct Ospeedr : public RegisterBase<0x40020408, 32, ReadWriteMode>
  {
    using Ospeedr15 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 30, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr14 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 28, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr13 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 26, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr12 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 24, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr11 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 22, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr10 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 20, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr9 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 18, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr8 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 16, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr7 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 14, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr6 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 12, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr5 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 10, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr4 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 8, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr3 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 6, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr2 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 4, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr1 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 2, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
    using Ospeedr0 = GpiobOspeedrOspeedrValues<Gpiob::Ospeedr, 0, 2, ReadWriteMode, GpiobOspeedrOspeedrValuesBase> ;
  } ;

  template<typename... T> 
  using OspeedrPack  = Register<0x40020408, 32, ReadWriteMode, GpiobOspeedrOspeedrValuesBase, T...> ;

  struct Pupdr : public RegisterBase<0x4002040C, 32, ReadWriteMode>
  {
    using Pupdr15 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 30, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr14 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 28, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr13 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 26, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr12 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 24, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr11 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 22, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr10 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 20, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr9 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 18, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr8 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 16, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr7 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 14, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr6 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 12, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr5 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 10, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr4 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 8, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr3 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 6, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr2 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 4, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr1 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 2, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
    using Pupdr0 = GpiobPupdrPupdrValues<Gpiob::Pupdr, 0, 2, ReadWriteMode, GpiobPupdrPupdrValuesBase> ;
  } ;

  template<typename... T> 
  using PupdrPack  = Register<0x4002040C, 32, ReadWriteMode, GpiobPupdrPupdrValuesBase, T...> ;

  struct Idr : public RegisterBase<0x40020410, 32, ReadMode>
  {
    using Idr15 = GpiobIdrIdrValues<Gpiob::Idr, 15, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr14 = GpiobIdrIdrValues<Gpiob::Idr, 14, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr13 = GpiobIdrIdrValues<Gpiob::Idr, 13, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr12 = GpiobIdrIdrValues<Gpiob::Idr, 12, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr11 = GpiobIdrIdrValues<Gpiob::Idr, 11, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr10 = GpiobIdrIdrValues<Gpiob::Idr, 10, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr9 = GpiobIdrIdrValues<Gpiob::Idr, 9, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr8 = GpiobIdrIdrValues<Gpiob::Idr, 8, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr7 = GpiobIdrIdrValues<Gpiob::Idr, 7, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr6 = GpiobIdrIdrValues<Gpiob::Idr, 6, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr5 = GpiobIdrIdrValues<Gpiob::Idr, 5, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr4 = GpiobIdrIdrValues<Gpiob::Idr, 4, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr3 = GpiobIdrIdrValues<Gpiob::Idr, 3, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr2 = GpiobIdrIdrValues<Gpiob::Idr, 2, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr1 = GpiobIdrIdrValues<Gpiob::Idr, 1, 1, ReadMode, GpiobIdrIdrValuesBase> ;
    using Idr0 = GpiobIdrIdrValues<Gpiob::Idr, 0, 1, ReadMode, GpiobIdrIdrValuesBase> ;
  } ;

  template<typename... T> 
  using IdrPack  = Register<0x40020410, 32, ReadMode, GpiobIdrIdrValuesBase, T...> ;

  struct Odr : public RegisterBase<0x40020414, 32, ReadWriteMode>
  {
    using Odr15 = GpiobOdrOdrValues<Gpiob::Odr, 15, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr14 = GpiobOdrOdrValues<Gpiob::Odr, 14, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr13 = GpiobOdrOdrValues<Gpiob::Odr, 13, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr12 = GpiobOdrOdrValues<Gpiob::Odr, 12, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr11 = GpiobOdrOdrValues<Gpiob::Odr, 11, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr10 = GpiobOdrOdrValues<Gpiob::Odr, 10, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr9 = GpiobOdrOdrValues<Gpiob::Odr, 9, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr8 = GpiobOdrOdrValues<Gpiob::Odr, 8, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr7 = GpiobOdrOdrValues<Gpiob::Odr, 7, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr6 = GpiobOdrOdrValues<Gpiob::Odr, 6, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr5 = GpiobOdrOdrValues<Gpiob::Odr, 5, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr4 = GpiobOdrOdrValues<Gpiob::Odr, 4, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr3 = GpiobOdrOdrValues<Gpiob::Odr, 3, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr2 = GpiobOdrOdrValues<Gpiob::Odr, 2, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr1 = GpiobOdrOdrValues<Gpiob::Odr, 1, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
    using Odr0 = GpiobOdrOdrValues<Gpiob::Odr, 0, 1, ReadWriteMode, GpiobOdrOdrValuesBase> ;
  } ;

  template<typename... T> 
  using OdrPack  = Register<0x40020414, 32, ReadWriteMode, GpiobOdrOdrValuesBase, T...> ;

  struct Bsrr : public RegisterBase<0x40020418, 32, WriteMode>
  {
    using Br15 = GpiobBsrrBrValues<Gpiob::Bsrr, 31, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br14 = GpiobBsrrBrValues<Gpiob::Bsrr, 30, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br13 = GpiobBsrrBrValues<Gpiob::Bsrr, 29, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br12 = GpiobBsrrBrValues<Gpiob::Bsrr, 28, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br11 = GpiobBsrrBrValues<Gpiob::Bsrr, 27, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br10 = GpiobBsrrBrValues<Gpiob::Bsrr, 26, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br9 = GpiobBsrrBrValues<Gpiob::Bsrr, 25, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br8 = GpiobBsrrBrValues<Gpiob::Bsrr, 24, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br7 = GpiobBsrrBrValues<Gpiob::Bsrr, 23, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br6 = GpiobBsrrBrValues<Gpiob::Bsrr, 22, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br5 = GpiobBsrrBrValues<Gpiob::Bsrr, 21, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br4 = GpiobBsrrBrValues<Gpiob::Bsrr, 20, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br3 = GpiobBsrrBrValues<Gpiob::Bsrr, 19, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br2 = GpiobBsrrBrValues<Gpiob::Bsrr, 18, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br1 = GpiobBsrrBrValues<Gpiob::Bsrr, 17, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Br0 = GpiobBsrrBrValues<Gpiob::Bsrr, 16, 1, WriteMode, GpiobBsrrBrValuesBase> ;
    using Bs15 = GpiobBsrrBsValues<Gpiob::Bsrr, 15, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs14 = GpiobBsrrBsValues<Gpiob::Bsrr, 14, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs13 = GpiobBsrrBsValues<Gpiob::Bsrr, 13, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs12 = GpiobBsrrBsValues<Gpiob::Bsrr, 12, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs11 = GpiobBsrrBsValues<Gpiob::Bsrr, 11, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs10 = GpiobBsrrBsValues<Gpiob::Bsrr, 10, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs9 = GpiobBsrrBsValues<Gpiob::Bsrr, 9, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs8 = GpiobBsrrBsValues<Gpiob::Bsrr, 8, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs7 = GpiobBsrrBsValues<Gpiob::Bsrr, 7, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs6 = GpiobBsrrBsValues<Gpiob::Bsrr, 6, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs5 = GpiobBsrrBsValues<Gpiob::Bsrr, 5, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs4 = GpiobBsrrBsValues<Gpiob::Bsrr, 4, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs3 = GpiobBsrrBsValues<Gpiob::Bsrr, 3, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs2 = GpiobBsrrBsValues<Gpiob::Bsrr, 2, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs1 = GpiobBsrrBsValues<Gpiob::Bsrr, 1, 1, WriteMode, GpiobBsrrBsValuesBase> ;
    using Bs0 = GpiobBsrrBsValues<Gpiob::Bsrr, 0, 1, WriteMode, GpiobBsrrBsValuesBase> ;
  } ;

  template<typename... T> 
  using BsrrPack  = Register<0x40020418, 32, WriteMode, GpiobBsrrBrValuesBase, T...> ;

  struct Lckr : public RegisterBase<0x4002041C, 32, ReadWriteMode>
  {
    using Lckk = GpiobLckrLckkValues<Gpiob::Lckr, 16, 1, ReadWriteMode, GpiobLckrLckkValuesBase> ;
    using Lck15 = GpiobLckrLckValues<Gpiob::Lckr, 15, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck14 = GpiobLckrLckValues<Gpiob::Lckr, 14, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck13 = GpiobLckrLckValues<Gpiob::Lckr, 13, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck12 = GpiobLckrLckValues<Gpiob::Lckr, 12, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck11 = GpiobLckrLckValues<Gpiob::Lckr, 11, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck10 = GpiobLckrLckValues<Gpiob::Lckr, 10, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck9 = GpiobLckrLckValues<Gpiob::Lckr, 9, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck8 = GpiobLckrLckValues<Gpiob::Lckr, 8, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck7 = GpiobLckrLckValues<Gpiob::Lckr, 7, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck6 = GpiobLckrLckValues<Gpiob::Lckr, 6, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck5 = GpiobLckrLckValues<Gpiob::Lckr, 5, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck4 = GpiobLckrLckValues<Gpiob::Lckr, 4, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck3 = GpiobLckrLckValues<Gpiob::Lckr, 3, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck2 = GpiobLckrLckValues<Gpiob::Lckr, 2, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck1 = GpiobLckrLckValues<Gpiob::Lckr, 1, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
    using Lck0 = GpiobLckrLckValues<Gpiob::Lckr, 0, 1, ReadWriteMode, GpiobLckrLckValuesBase> ;
  } ;

  template<typename... T> 
  using LckrPack  = Register<0x4002041C, 32, ReadWriteMode, GpiobLckrLckkValuesBase, T...> ;

  struct Afrl : public RegisterBase<0x40020420, 32, ReadWriteMode>
  {
    using Afrl7 = GpiobAfrlAfrlValues<Gpiob::Afrl, 28, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
    using Afrl6 = GpiobAfrlAfrlValues<Gpiob::Afrl, 24, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
    using Afrl5 = GpiobAfrlAfrlValues<Gpiob::Afrl, 20, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
    using Afrl4 = GpiobAfrlAfrlValues<Gpiob::Afrl, 16, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
    using Afrl3 = GpiobAfrlAfrlValues<Gpiob::Afrl, 12, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
    using Afrl2 = GpiobAfrlAfrlValues<Gpiob::Afrl, 8, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
    using Afrl1 = GpiobAfrlAfrlValues<Gpiob::Afrl, 4, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
    using Afrl0 = GpiobAfrlAfrlValues<Gpiob::Afrl, 0, 4, ReadWriteMode, GpiobAfrlAfrlValuesBase> ;
  } ;

  template<typename... T> 
  using AfrlPack  = Register<0x40020420, 32, ReadWriteMode, GpiobAfrlAfrlValuesBase, T...> ;

  struct Afrh : public RegisterBase<0x40020424, 32, ReadWriteMode>
  {
    using Afrh15 = GpiobAfrhAfrhValues<Gpiob::Afrh, 28, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
    using Afrh14 = GpiobAfrhAfrhValues<Gpiob::Afrh, 24, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
    using Afrh13 = GpiobAfrhAfrhValues<Gpiob::Afrh, 20, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
    using Afrh12 = GpiobAfrhAfrhValues<Gpiob::Afrh, 16, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
    using Afrh11 = GpiobAfrhAfrhValues<Gpiob::Afrh, 12, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
    using Afrh10 = GpiobAfrhAfrhValues<Gpiob::Afrh, 8, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
    using Afrh9 = GpiobAfrhAfrhValues<Gpiob::Afrh, 4, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
    using Afrh8 = GpiobAfrhAfrhValues<Gpiob::Afrh, 0, 4, ReadWriteMode, GpiobAfrhAfrhValuesBase> ;
  } ;

  template<typename... T> 
  using AfrhPack  = Register<0x40020424, 32, ReadWriteMode, GpiobAfrhAfrhValuesBase, T...> ;

} ;

#endif //#if !defined(GPIOBREGISTERS_HPP)
