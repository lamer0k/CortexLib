/*******************************************************************************
* Filename      : gpiocregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOCREGISTERS_HPP)
#define GPIOCREGISTERS_HPP

#include "gpiocbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Gpioc
{
  struct Moder : public RegisterBase<0x40020800, 32, ReadWriteMode>
  {
    using Moder15 = GpiocModerModerValues<Gpioc::Moder, 30, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder14 = GpiocModerModerValues<Gpioc::Moder, 28, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder13 = GpiocModerModerValues<Gpioc::Moder, 26, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder12 = GpiocModerModerValues<Gpioc::Moder, 24, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder11 = GpiocModerModerValues<Gpioc::Moder, 22, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder10 = GpiocModerModerValues<Gpioc::Moder, 20, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder9 = GpiocModerModerValues<Gpioc::Moder, 18, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder8 = GpiocModerModerValues<Gpioc::Moder, 16, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder7 = GpiocModerModerValues<Gpioc::Moder, 14, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder6 = GpiocModerModerValues<Gpioc::Moder, 12, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder5 = GpiocModerModerValues<Gpioc::Moder, 10, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder4 = GpiocModerModerValues<Gpioc::Moder, 8, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder3 = GpiocModerModerValues<Gpioc::Moder, 6, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder2 = GpiocModerModerValues<Gpioc::Moder, 4, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder1 = GpiocModerModerValues<Gpioc::Moder, 2, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
    using Moder0 = GpiocModerModerValues<Gpioc::Moder, 0, 2, ReadWriteMode, GpiocModerModerValuesBase> ;
  } ;

  template<typename... T> 
  using ModerPack  = Register<0x40020800, 32, ReadWriteMode, GpiocModerModerValuesBase, T...> ;

  struct Otyper : public RegisterBase<0x40020804, 32, ReadWriteMode>
  {
    using Ot15 = GpiocOtyperOtValues<Gpioc::Otyper, 15, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot14 = GpiocOtyperOtValues<Gpioc::Otyper, 14, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot13 = GpiocOtyperOtValues<Gpioc::Otyper, 13, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot12 = GpiocOtyperOtValues<Gpioc::Otyper, 12, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot11 = GpiocOtyperOtValues<Gpioc::Otyper, 11, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot10 = GpiocOtyperOtValues<Gpioc::Otyper, 10, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot9 = GpiocOtyperOtValues<Gpioc::Otyper, 9, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot8 = GpiocOtyperOtValues<Gpioc::Otyper, 8, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot7 = GpiocOtyperOtValues<Gpioc::Otyper, 7, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot6 = GpiocOtyperOtValues<Gpioc::Otyper, 6, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot5 = GpiocOtyperOtValues<Gpioc::Otyper, 5, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot4 = GpiocOtyperOtValues<Gpioc::Otyper, 4, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot3 = GpiocOtyperOtValues<Gpioc::Otyper, 3, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot2 = GpiocOtyperOtValues<Gpioc::Otyper, 2, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot1 = GpiocOtyperOtValues<Gpioc::Otyper, 1, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
    using Ot0 = GpiocOtyperOtValues<Gpioc::Otyper, 0, 1, ReadWriteMode, GpiocOtyperOtValuesBase> ;
  } ;

  template<typename... T> 
  using OtyperPack  = Register<0x40020804, 32, ReadWriteMode, GpiocOtyperOtValuesBase, T...> ;

  struct Ospeedr : public RegisterBase<0x40020808, 32, ReadWriteMode>
  {
    using Ospeedr15 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 30, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr14 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 28, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr13 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 26, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr12 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 24, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr11 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 22, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr10 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 20, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr9 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 18, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr8 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 16, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr7 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 14, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr6 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 12, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr5 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 10, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr4 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 8, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr3 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 6, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr2 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 4, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr1 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 2, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
    using Ospeedr0 = GpiocOspeedrOspeedrValues<Gpioc::Ospeedr, 0, 2, ReadWriteMode, GpiocOspeedrOspeedrValuesBase> ;
  } ;

  template<typename... T> 
  using OspeedrPack  = Register<0x40020808, 32, ReadWriteMode, GpiocOspeedrOspeedrValuesBase, T...> ;

  struct Pupdr : public RegisterBase<0x4002080C, 32, ReadWriteMode>
  {
    using Pupdr15 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 30, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr14 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 28, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr13 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 26, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr12 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 24, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr11 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 22, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr10 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 20, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr9 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 18, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr8 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 16, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr7 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 14, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr6 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 12, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr5 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 10, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr4 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 8, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr3 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 6, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr2 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 4, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr1 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 2, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
    using Pupdr0 = GpiocPupdrPupdrValues<Gpioc::Pupdr, 0, 2, ReadWriteMode, GpiocPupdrPupdrValuesBase> ;
  } ;

  template<typename... T> 
  using PupdrPack  = Register<0x4002080C, 32, ReadWriteMode, GpiocPupdrPupdrValuesBase, T...> ;

  struct Idr : public RegisterBase<0x40020810, 32, ReadMode>
  {
    using Idr15 = GpiocIdrIdrValues<Gpioc::Idr, 15, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr14 = GpiocIdrIdrValues<Gpioc::Idr, 14, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr13 = GpiocIdrIdrValues<Gpioc::Idr, 13, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr12 = GpiocIdrIdrValues<Gpioc::Idr, 12, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr11 = GpiocIdrIdrValues<Gpioc::Idr, 11, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr10 = GpiocIdrIdrValues<Gpioc::Idr, 10, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr9 = GpiocIdrIdrValues<Gpioc::Idr, 9, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr8 = GpiocIdrIdrValues<Gpioc::Idr, 8, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr7 = GpiocIdrIdrValues<Gpioc::Idr, 7, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr6 = GpiocIdrIdrValues<Gpioc::Idr, 6, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr5 = GpiocIdrIdrValues<Gpioc::Idr, 5, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr4 = GpiocIdrIdrValues<Gpioc::Idr, 4, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr3 = GpiocIdrIdrValues<Gpioc::Idr, 3, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr2 = GpiocIdrIdrValues<Gpioc::Idr, 2, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr1 = GpiocIdrIdrValues<Gpioc::Idr, 1, 1, ReadMode, GpiocIdrIdrValuesBase> ;
    using Idr0 = GpiocIdrIdrValues<Gpioc::Idr, 0, 1, ReadMode, GpiocIdrIdrValuesBase> ;
  } ;

  template<typename... T> 
  using IdrPack  = Register<0x40020810, 32, ReadMode, GpiocIdrIdrValuesBase, T...> ;

  struct Odr : public RegisterBase<0x40020814, 32, ReadWriteMode>
  {
    using Odr15 = GpiocOdrOdrValues<Gpioc::Odr, 15, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr14 = GpiocOdrOdrValues<Gpioc::Odr, 14, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr13 = GpiocOdrOdrValues<Gpioc::Odr, 13, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr12 = GpiocOdrOdrValues<Gpioc::Odr, 12, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr11 = GpiocOdrOdrValues<Gpioc::Odr, 11, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr10 = GpiocOdrOdrValues<Gpioc::Odr, 10, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr9 = GpiocOdrOdrValues<Gpioc::Odr, 9, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr8 = GpiocOdrOdrValues<Gpioc::Odr, 8, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr7 = GpiocOdrOdrValues<Gpioc::Odr, 7, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr6 = GpiocOdrOdrValues<Gpioc::Odr, 6, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr5 = GpiocOdrOdrValues<Gpioc::Odr, 5, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr4 = GpiocOdrOdrValues<Gpioc::Odr, 4, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr3 = GpiocOdrOdrValues<Gpioc::Odr, 3, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr2 = GpiocOdrOdrValues<Gpioc::Odr, 2, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr1 = GpiocOdrOdrValues<Gpioc::Odr, 1, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
    using Odr0 = GpiocOdrOdrValues<Gpioc::Odr, 0, 1, ReadWriteMode, GpiocOdrOdrValuesBase> ;
  } ;

  template<typename... T> 
  using OdrPack  = Register<0x40020814, 32, ReadWriteMode, GpiocOdrOdrValuesBase, T...> ;

  struct Bsrr : public RegisterBase<0x40020818, 32, WriteMode>
  {
    using Br15 = GpiocBsrrBrValues<Gpioc::Bsrr, 31, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br14 = GpiocBsrrBrValues<Gpioc::Bsrr, 30, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br13 = GpiocBsrrBrValues<Gpioc::Bsrr, 29, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br12 = GpiocBsrrBrValues<Gpioc::Bsrr, 28, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br11 = GpiocBsrrBrValues<Gpioc::Bsrr, 27, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br10 = GpiocBsrrBrValues<Gpioc::Bsrr, 26, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br9 = GpiocBsrrBrValues<Gpioc::Bsrr, 25, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br8 = GpiocBsrrBrValues<Gpioc::Bsrr, 24, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br7 = GpiocBsrrBrValues<Gpioc::Bsrr, 23, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br6 = GpiocBsrrBrValues<Gpioc::Bsrr, 22, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br5 = GpiocBsrrBrValues<Gpioc::Bsrr, 21, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br4 = GpiocBsrrBrValues<Gpioc::Bsrr, 20, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br3 = GpiocBsrrBrValues<Gpioc::Bsrr, 19, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br2 = GpiocBsrrBrValues<Gpioc::Bsrr, 18, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br1 = GpiocBsrrBrValues<Gpioc::Bsrr, 17, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Br0 = GpiocBsrrBrValues<Gpioc::Bsrr, 16, 1, WriteMode, GpiocBsrrBrValuesBase> ;
    using Bs15 = GpiocBsrrBsValues<Gpioc::Bsrr, 15, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs14 = GpiocBsrrBsValues<Gpioc::Bsrr, 14, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs13 = GpiocBsrrBsValues<Gpioc::Bsrr, 13, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs12 = GpiocBsrrBsValues<Gpioc::Bsrr, 12, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs11 = GpiocBsrrBsValues<Gpioc::Bsrr, 11, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs10 = GpiocBsrrBsValues<Gpioc::Bsrr, 10, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs9 = GpiocBsrrBsValues<Gpioc::Bsrr, 9, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs8 = GpiocBsrrBsValues<Gpioc::Bsrr, 8, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs7 = GpiocBsrrBsValues<Gpioc::Bsrr, 7, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs6 = GpiocBsrrBsValues<Gpioc::Bsrr, 6, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs5 = GpiocBsrrBsValues<Gpioc::Bsrr, 5, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs4 = GpiocBsrrBsValues<Gpioc::Bsrr, 4, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs3 = GpiocBsrrBsValues<Gpioc::Bsrr, 3, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs2 = GpiocBsrrBsValues<Gpioc::Bsrr, 2, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs1 = GpiocBsrrBsValues<Gpioc::Bsrr, 1, 1, WriteMode, GpiocBsrrBsValuesBase> ;
    using Bs0 = GpiocBsrrBsValues<Gpioc::Bsrr, 0, 1, WriteMode, GpiocBsrrBsValuesBase> ;
  } ;

  template<typename... T> 
  using BsrrPack  = Register<0x40020818, 32, WriteMode, GpiocBsrrBrValuesBase, T...> ;

  struct Lckr : public RegisterBase<0x4002081C, 32, ReadWriteMode>
  {
    using Lckk = GpiocLckrLckkValues<Gpioc::Lckr, 16, 1, ReadWriteMode, GpiocLckrLckkValuesBase> ;
    using Lck15 = GpiocLckrLckValues<Gpioc::Lckr, 15, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck14 = GpiocLckrLckValues<Gpioc::Lckr, 14, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck13 = GpiocLckrLckValues<Gpioc::Lckr, 13, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck12 = GpiocLckrLckValues<Gpioc::Lckr, 12, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck11 = GpiocLckrLckValues<Gpioc::Lckr, 11, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck10 = GpiocLckrLckValues<Gpioc::Lckr, 10, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck9 = GpiocLckrLckValues<Gpioc::Lckr, 9, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck8 = GpiocLckrLckValues<Gpioc::Lckr, 8, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck7 = GpiocLckrLckValues<Gpioc::Lckr, 7, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck6 = GpiocLckrLckValues<Gpioc::Lckr, 6, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck5 = GpiocLckrLckValues<Gpioc::Lckr, 5, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck4 = GpiocLckrLckValues<Gpioc::Lckr, 4, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck3 = GpiocLckrLckValues<Gpioc::Lckr, 3, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck2 = GpiocLckrLckValues<Gpioc::Lckr, 2, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck1 = GpiocLckrLckValues<Gpioc::Lckr, 1, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
    using Lck0 = GpiocLckrLckValues<Gpioc::Lckr, 0, 1, ReadWriteMode, GpiocLckrLckValuesBase> ;
  } ;

  template<typename... T> 
  using LckrPack  = Register<0x4002081C, 32, ReadWriteMode, GpiocLckrLckkValuesBase, T...> ;

  struct Afrl : public RegisterBase<0x40020820, 32, ReadWriteMode>
  {
    using Afrl7 = GpiocAfrlAfrlValues<Gpioc::Afrl, 28, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
    using Afrl6 = GpiocAfrlAfrlValues<Gpioc::Afrl, 24, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
    using Afrl5 = GpiocAfrlAfrlValues<Gpioc::Afrl, 20, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
    using Afrl4 = GpiocAfrlAfrlValues<Gpioc::Afrl, 16, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
    using Afrl3 = GpiocAfrlAfrlValues<Gpioc::Afrl, 12, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
    using Afrl2 = GpiocAfrlAfrlValues<Gpioc::Afrl, 8, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
    using Afrl1 = GpiocAfrlAfrlValues<Gpioc::Afrl, 4, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
    using Afrl0 = GpiocAfrlAfrlValues<Gpioc::Afrl, 0, 4, ReadWriteMode, GpiocAfrlAfrlValuesBase> ;
  } ;

  template<typename... T> 
  using AfrlPack  = Register<0x40020820, 32, ReadWriteMode, GpiocAfrlAfrlValuesBase, T...> ;

  struct Afrh : public RegisterBase<0x40020824, 32, ReadWriteMode>
  {
    using Afrh15 = GpiocAfrhAfrhValues<Gpioc::Afrh, 28, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
    using Afrh14 = GpiocAfrhAfrhValues<Gpioc::Afrh, 24, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
    using Afrh13 = GpiocAfrhAfrhValues<Gpioc::Afrh, 20, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
    using Afrh12 = GpiocAfrhAfrhValues<Gpioc::Afrh, 16, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
    using Afrh11 = GpiocAfrhAfrhValues<Gpioc::Afrh, 12, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
    using Afrh10 = GpiocAfrhAfrhValues<Gpioc::Afrh, 8, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
    using Afrh9 = GpiocAfrhAfrhValues<Gpioc::Afrh, 4, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
    using Afrh8 = GpiocAfrhAfrhValues<Gpioc::Afrh, 0, 4, ReadWriteMode, GpiocAfrhAfrhValuesBase> ;
  } ;

  template<typename... T> 
  using AfrhPack  = Register<0x40020824, 32, ReadWriteMode, GpiocAfrhAfrhValuesBase, T...> ;

} ;

#endif //#if !defined(GPIOCREGISTERS_HPP)
