/*******************************************************************************
* Filename      : gpioaregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOAREGISTERS_HPP)
#define GPIOAREGISTERS_HPP

#include "gpioabitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Gpioa
{
  struct Moder : public RegisterBase<0x40020000, 32, ReadWriteMode>
  {
    using Moder15 = GpioaModerModerValues<Gpioa::Moder, 30, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder14 = GpioaModerModerValues<Gpioa::Moder, 28, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder13 = GpioaModerModerValues<Gpioa::Moder, 26, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder12 = GpioaModerModerValues<Gpioa::Moder, 24, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder11 = GpioaModerModerValues<Gpioa::Moder, 22, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder10 = GpioaModerModerValues<Gpioa::Moder, 20, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder9 = GpioaModerModerValues<Gpioa::Moder, 18, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder8 = GpioaModerModerValues<Gpioa::Moder, 16, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder7 = GpioaModerModerValues<Gpioa::Moder, 14, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder6 = GpioaModerModerValues<Gpioa::Moder, 12, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder5 = GpioaModerModerValues<Gpioa::Moder, 10, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder4 = GpioaModerModerValues<Gpioa::Moder, 8, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder3 = GpioaModerModerValues<Gpioa::Moder, 6, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder2 = GpioaModerModerValues<Gpioa::Moder, 4, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder1 = GpioaModerModerValues<Gpioa::Moder, 2, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
    using Moder0 = GpioaModerModerValues<Gpioa::Moder, 0, 2, ReadWriteMode, GpioaModerModerValuesBase> ;
  } ;

  template<typename... T> 
  using ModerPack  = Register<0x40020000, 32, ReadWriteMode, GpioaModerModerValuesBase, T...> ;

  struct Otyper : public RegisterBase<0x40020004, 32, ReadWriteMode>
  {
    using Ot15 = GpioaOtyperOtValues<Gpioa::Otyper, 15, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot14 = GpioaOtyperOtValues<Gpioa::Otyper, 14, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot13 = GpioaOtyperOtValues<Gpioa::Otyper, 13, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot12 = GpioaOtyperOtValues<Gpioa::Otyper, 12, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot11 = GpioaOtyperOtValues<Gpioa::Otyper, 11, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot10 = GpioaOtyperOtValues<Gpioa::Otyper, 10, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot9 = GpioaOtyperOtValues<Gpioa::Otyper, 9, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot8 = GpioaOtyperOtValues<Gpioa::Otyper, 8, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot7 = GpioaOtyperOtValues<Gpioa::Otyper, 7, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot6 = GpioaOtyperOtValues<Gpioa::Otyper, 6, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot5 = GpioaOtyperOtValues<Gpioa::Otyper, 5, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot4 = GpioaOtyperOtValues<Gpioa::Otyper, 4, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot3 = GpioaOtyperOtValues<Gpioa::Otyper, 3, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot2 = GpioaOtyperOtValues<Gpioa::Otyper, 2, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot1 = GpioaOtyperOtValues<Gpioa::Otyper, 1, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
    using Ot0 = GpioaOtyperOtValues<Gpioa::Otyper, 0, 1, ReadWriteMode, GpioaOtyperOtValuesBase> ;
  } ;

  template<typename... T> 
  using OtyperPack  = Register<0x40020004, 32, ReadWriteMode, GpioaOtyperOtValuesBase, T...> ;

  struct Ospeedr : public RegisterBase<0x40020008, 32, ReadWriteMode>
  {
    using Ospeedr15 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 30, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr14 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 28, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr13 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 26, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr12 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 24, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr11 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 22, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr10 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 20, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr9 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 18, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr8 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 16, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr7 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 14, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr6 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 12, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr5 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 10, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr4 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 8, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr3 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 6, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr2 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 4, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr1 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 2, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
    using Ospeedr0 = GpioaOspeedrOspeedrValues<Gpioa::Ospeedr, 0, 2, ReadWriteMode, GpioaOspeedrOspeedrValuesBase> ;
  } ;

  template<typename... T> 
  using OspeedrPack  = Register<0x40020008, 32, ReadWriteMode, GpioaOspeedrOspeedrValuesBase, T...> ;

  struct Pupdr : public RegisterBase<0x4002000C, 32, ReadWriteMode>
  {
    using Pupdr15 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 30, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr14 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 28, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr13 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 26, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr12 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 24, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr11 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 22, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr10 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 20, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr9 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 18, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr8 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 16, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr7 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 14, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr6 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 12, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr5 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 10, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr4 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 8, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr3 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 6, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr2 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 4, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr1 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 2, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
    using Pupdr0 = GpioaPupdrPupdrValues<Gpioa::Pupdr, 0, 2, ReadWriteMode, GpioaPupdrPupdrValuesBase> ;
  } ;

  template<typename... T> 
  using PupdrPack  = Register<0x4002000C, 32, ReadWriteMode, GpioaPupdrPupdrValuesBase, T...> ;

  struct Idr : public RegisterBase<0x40020010, 32, ReadMode>
  {
    using Idr15 = GpioaIdrIdrValues<Gpioa::Idr, 15, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr14 = GpioaIdrIdrValues<Gpioa::Idr, 14, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr13 = GpioaIdrIdrValues<Gpioa::Idr, 13, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr12 = GpioaIdrIdrValues<Gpioa::Idr, 12, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr11 = GpioaIdrIdrValues<Gpioa::Idr, 11, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr10 = GpioaIdrIdrValues<Gpioa::Idr, 10, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr9 = GpioaIdrIdrValues<Gpioa::Idr, 9, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr8 = GpioaIdrIdrValues<Gpioa::Idr, 8, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr7 = GpioaIdrIdrValues<Gpioa::Idr, 7, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr6 = GpioaIdrIdrValues<Gpioa::Idr, 6, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr5 = GpioaIdrIdrValues<Gpioa::Idr, 5, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr4 = GpioaIdrIdrValues<Gpioa::Idr, 4, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr3 = GpioaIdrIdrValues<Gpioa::Idr, 3, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr2 = GpioaIdrIdrValues<Gpioa::Idr, 2, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr1 = GpioaIdrIdrValues<Gpioa::Idr, 1, 1, ReadMode, GpioaIdrIdrValuesBase> ;
    using Idr0 = GpioaIdrIdrValues<Gpioa::Idr, 0, 1, ReadMode, GpioaIdrIdrValuesBase> ;
  } ;

  template<typename... T> 
  using IdrPack  = Register<0x40020010, 32, ReadMode, GpioaIdrIdrValuesBase, T...> ;

  struct Odr : public RegisterBase<0x40020014, 32, ReadWriteMode>
  {
    using Odr15 = GpioaOdrOdrValues<Gpioa::Odr, 15, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr14 = GpioaOdrOdrValues<Gpioa::Odr, 14, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr13 = GpioaOdrOdrValues<Gpioa::Odr, 13, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr12 = GpioaOdrOdrValues<Gpioa::Odr, 12, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr11 = GpioaOdrOdrValues<Gpioa::Odr, 11, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr10 = GpioaOdrOdrValues<Gpioa::Odr, 10, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr9 = GpioaOdrOdrValues<Gpioa::Odr, 9, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr8 = GpioaOdrOdrValues<Gpioa::Odr, 8, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr7 = GpioaOdrOdrValues<Gpioa::Odr, 7, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr6 = GpioaOdrOdrValues<Gpioa::Odr, 6, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr5 = GpioaOdrOdrValues<Gpioa::Odr, 5, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr4 = GpioaOdrOdrValues<Gpioa::Odr, 4, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr3 = GpioaOdrOdrValues<Gpioa::Odr, 3, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr2 = GpioaOdrOdrValues<Gpioa::Odr, 2, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr1 = GpioaOdrOdrValues<Gpioa::Odr, 1, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
    using Odr0 = GpioaOdrOdrValues<Gpioa::Odr, 0, 1, ReadWriteMode, GpioaOdrOdrValuesBase> ;
  } ;

  template<typename... T> 
  using OdrPack  = Register<0x40020014, 32, ReadWriteMode, GpioaOdrOdrValuesBase, T...> ;

  struct Bsrr : public RegisterBase<0x40020018, 32, WriteMode>
  {
    using Br15 = GpioaBsrrBrValues<Gpioa::Bsrr, 31, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br14 = GpioaBsrrBrValues<Gpioa::Bsrr, 30, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br13 = GpioaBsrrBrValues<Gpioa::Bsrr, 29, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br12 = GpioaBsrrBrValues<Gpioa::Bsrr, 28, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br11 = GpioaBsrrBrValues<Gpioa::Bsrr, 27, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br10 = GpioaBsrrBrValues<Gpioa::Bsrr, 26, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br9 = GpioaBsrrBrValues<Gpioa::Bsrr, 25, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br8 = GpioaBsrrBrValues<Gpioa::Bsrr, 24, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br7 = GpioaBsrrBrValues<Gpioa::Bsrr, 23, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br6 = GpioaBsrrBrValues<Gpioa::Bsrr, 22, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br5 = GpioaBsrrBrValues<Gpioa::Bsrr, 21, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br4 = GpioaBsrrBrValues<Gpioa::Bsrr, 20, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br3 = GpioaBsrrBrValues<Gpioa::Bsrr, 19, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br2 = GpioaBsrrBrValues<Gpioa::Bsrr, 18, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br1 = GpioaBsrrBrValues<Gpioa::Bsrr, 17, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Br0 = GpioaBsrrBrValues<Gpioa::Bsrr, 16, 1, WriteMode, GpioaBsrrBrValuesBase> ;
    using Bs15 = GpioaBsrrBsValues<Gpioa::Bsrr, 15, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs14 = GpioaBsrrBsValues<Gpioa::Bsrr, 14, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs13 = GpioaBsrrBsValues<Gpioa::Bsrr, 13, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs12 = GpioaBsrrBsValues<Gpioa::Bsrr, 12, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs11 = GpioaBsrrBsValues<Gpioa::Bsrr, 11, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs10 = GpioaBsrrBsValues<Gpioa::Bsrr, 10, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs9 = GpioaBsrrBsValues<Gpioa::Bsrr, 9, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs8 = GpioaBsrrBsValues<Gpioa::Bsrr, 8, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs7 = GpioaBsrrBsValues<Gpioa::Bsrr, 7, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs6 = GpioaBsrrBsValues<Gpioa::Bsrr, 6, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs5 = GpioaBsrrBsValues<Gpioa::Bsrr, 5, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs4 = GpioaBsrrBsValues<Gpioa::Bsrr, 4, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs3 = GpioaBsrrBsValues<Gpioa::Bsrr, 3, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs2 = GpioaBsrrBsValues<Gpioa::Bsrr, 2, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs1 = GpioaBsrrBsValues<Gpioa::Bsrr, 1, 1, WriteMode, GpioaBsrrBsValuesBase> ;
    using Bs0 = GpioaBsrrBsValues<Gpioa::Bsrr, 0, 1, WriteMode, GpioaBsrrBsValuesBase> ;
  } ;

  template<typename... T> 
  using BsrrPack  = Register<0x40020018, 32, WriteMode, GpioaBsrrBrValuesBase, T...> ;

  struct Lckr : public RegisterBase<0x4002001C, 32, ReadWriteMode>
  {
    using Lckk = GpioaLckrLckkValues<Gpioa::Lckr, 16, 1, ReadWriteMode, GpioaLckrLckkValuesBase> ;
    using Lck15 = GpioaLckrLckValues<Gpioa::Lckr, 15, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck14 = GpioaLckrLckValues<Gpioa::Lckr, 14, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck13 = GpioaLckrLckValues<Gpioa::Lckr, 13, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck12 = GpioaLckrLckValues<Gpioa::Lckr, 12, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck11 = GpioaLckrLckValues<Gpioa::Lckr, 11, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck10 = GpioaLckrLckValues<Gpioa::Lckr, 10, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck9 = GpioaLckrLckValues<Gpioa::Lckr, 9, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck8 = GpioaLckrLckValues<Gpioa::Lckr, 8, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck7 = GpioaLckrLckValues<Gpioa::Lckr, 7, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck6 = GpioaLckrLckValues<Gpioa::Lckr, 6, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck5 = GpioaLckrLckValues<Gpioa::Lckr, 5, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck4 = GpioaLckrLckValues<Gpioa::Lckr, 4, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck3 = GpioaLckrLckValues<Gpioa::Lckr, 3, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck2 = GpioaLckrLckValues<Gpioa::Lckr, 2, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck1 = GpioaLckrLckValues<Gpioa::Lckr, 1, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
    using Lck0 = GpioaLckrLckValues<Gpioa::Lckr, 0, 1, ReadWriteMode, GpioaLckrLckValuesBase> ;
  } ;

  template<typename... T> 
  using LckrPack  = Register<0x4002001C, 32, ReadWriteMode, GpioaLckrLckkValuesBase, T...> ;

  struct Afrl : public RegisterBase<0x40020020, 32, ReadWriteMode>
  {
    using Afrl7 = GpioaAfrlAfrlValues<Gpioa::Afrl, 28, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
    using Afrl6 = GpioaAfrlAfrlValues<Gpioa::Afrl, 24, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
    using Afrl5 = GpioaAfrlAfrlValues<Gpioa::Afrl, 20, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
    using Afrl4 = GpioaAfrlAfrlValues<Gpioa::Afrl, 16, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
    using Afrl3 = GpioaAfrlAfrlValues<Gpioa::Afrl, 12, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
    using Afrl2 = GpioaAfrlAfrlValues<Gpioa::Afrl, 8, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
    using Afrl1 = GpioaAfrlAfrlValues<Gpioa::Afrl, 4, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
    using Afrl0 = GpioaAfrlAfrlValues<Gpioa::Afrl, 0, 4, ReadWriteMode, GpioaAfrlAfrlValuesBase> ;
  } ;

  template<typename... T> 
  using AfrlPack  = Register<0x40020020, 32, ReadWriteMode, GpioaAfrlAfrlValuesBase, T...> ;

  struct Afrh : public RegisterBase<0x40020024, 32, ReadWriteMode>
  {
    using Afrh15 = GpioaAfrhAfrhValues<Gpioa::Afrh, 28, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
    using Afrh14 = GpioaAfrhAfrhValues<Gpioa::Afrh, 24, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
    using Afrh13 = GpioaAfrhAfrhValues<Gpioa::Afrh, 20, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
    using Afrh12 = GpioaAfrhAfrhValues<Gpioa::Afrh, 16, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
    using Afrh11 = GpioaAfrhAfrhValues<Gpioa::Afrh, 12, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
    using Afrh10 = GpioaAfrhAfrhValues<Gpioa::Afrh, 8, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
    using Afrh9 = GpioaAfrhAfrhValues<Gpioa::Afrh, 4, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
    using Afrh8 = GpioaAfrhAfrhValues<Gpioa::Afrh, 0, 4, ReadWriteMode, GpioaAfrhAfrhValuesBase> ;
  } ;

  template<typename... T> 
  using AfrhPack  = Register<0x40020024, 32, ReadWriteMode, GpioaAfrhAfrhValuesBase, T...> ;

} ;

#endif //#if !defined(GPIOAREGISTERS_HPP)
