/*******************************************************************************
* Filename      : gpiohregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOHREGISTERS_HPP)
#define GPIOHREGISTERS_HPP

#include "gpiohbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Gpioh
{
  struct Moder : public RegisterBase<0x40021C00, 32, ReadWriteMode>
  {
    using Moder15 = GpiohModerModerValues<Gpioh::Moder, 30, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder14 = GpiohModerModerValues<Gpioh::Moder, 28, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder13 = GpiohModerModerValues<Gpioh::Moder, 26, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder12 = GpiohModerModerValues<Gpioh::Moder, 24, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder11 = GpiohModerModerValues<Gpioh::Moder, 22, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder10 = GpiohModerModerValues<Gpioh::Moder, 20, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder9 = GpiohModerModerValues<Gpioh::Moder, 18, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder8 = GpiohModerModerValues<Gpioh::Moder, 16, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder7 = GpiohModerModerValues<Gpioh::Moder, 14, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder6 = GpiohModerModerValues<Gpioh::Moder, 12, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder5 = GpiohModerModerValues<Gpioh::Moder, 10, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder4 = GpiohModerModerValues<Gpioh::Moder, 8, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder3 = GpiohModerModerValues<Gpioh::Moder, 6, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder2 = GpiohModerModerValues<Gpioh::Moder, 4, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder1 = GpiohModerModerValues<Gpioh::Moder, 2, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
    using Moder0 = GpiohModerModerValues<Gpioh::Moder, 0, 2, ReadWriteMode, GpiohModerModerValuesBase> ;
  } ;

  template<typename... T> 
  using ModerPack  = Register<0x40021C00, 32, ReadWriteMode, GpiohModerModerValuesBase, T...> ;

  struct Otyper : public RegisterBase<0x40021C04, 32, ReadWriteMode>
  {
    using Ot15 = GpiohOtyperOtValues<Gpioh::Otyper, 15, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot14 = GpiohOtyperOtValues<Gpioh::Otyper, 14, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot13 = GpiohOtyperOtValues<Gpioh::Otyper, 13, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot12 = GpiohOtyperOtValues<Gpioh::Otyper, 12, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot11 = GpiohOtyperOtValues<Gpioh::Otyper, 11, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot10 = GpiohOtyperOtValues<Gpioh::Otyper, 10, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot9 = GpiohOtyperOtValues<Gpioh::Otyper, 9, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot8 = GpiohOtyperOtValues<Gpioh::Otyper, 8, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot7 = GpiohOtyperOtValues<Gpioh::Otyper, 7, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot6 = GpiohOtyperOtValues<Gpioh::Otyper, 6, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot5 = GpiohOtyperOtValues<Gpioh::Otyper, 5, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot4 = GpiohOtyperOtValues<Gpioh::Otyper, 4, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot3 = GpiohOtyperOtValues<Gpioh::Otyper, 3, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot2 = GpiohOtyperOtValues<Gpioh::Otyper, 2, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot1 = GpiohOtyperOtValues<Gpioh::Otyper, 1, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
    using Ot0 = GpiohOtyperOtValues<Gpioh::Otyper, 0, 1, ReadWriteMode, GpiohOtyperOtValuesBase> ;
  } ;

  template<typename... T> 
  using OtyperPack  = Register<0x40021C04, 32, ReadWriteMode, GpiohOtyperOtValuesBase, T...> ;

  struct Ospeedr : public RegisterBase<0x40021C08, 32, ReadWriteMode>
  {
    using Ospeedr15 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 30, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr14 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 28, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr13 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 26, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr12 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 24, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr11 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 22, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr10 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 20, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr9 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 18, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr8 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 16, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr7 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 14, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr6 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 12, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr5 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 10, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr4 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 8, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr3 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 6, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr2 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 4, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr1 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 2, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
    using Ospeedr0 = GpiohOspeedrOspeedrValues<Gpioh::Ospeedr, 0, 2, ReadWriteMode, GpiohOspeedrOspeedrValuesBase> ;
  } ;

  template<typename... T> 
  using OspeedrPack  = Register<0x40021C08, 32, ReadWriteMode, GpiohOspeedrOspeedrValuesBase, T...> ;

  struct Pupdr : public RegisterBase<0x40021C0C, 32, ReadWriteMode>
  {
    using Pupdr15 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 30, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr14 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 28, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr13 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 26, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr12 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 24, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr11 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 22, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr10 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 20, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr9 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 18, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr8 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 16, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr7 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 14, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr6 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 12, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr5 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 10, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr4 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 8, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr3 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 6, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr2 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 4, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr1 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 2, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
    using Pupdr0 = GpiohPupdrPupdrValues<Gpioh::Pupdr, 0, 2, ReadWriteMode, GpiohPupdrPupdrValuesBase> ;
  } ;

  template<typename... T> 
  using PupdrPack  = Register<0x40021C0C, 32, ReadWriteMode, GpiohPupdrPupdrValuesBase, T...> ;

  struct Idr : public RegisterBase<0x40021C10, 32, ReadMode>
  {
    using Idr15 = GpiohIdrIdrValues<Gpioh::Idr, 15, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr14 = GpiohIdrIdrValues<Gpioh::Idr, 14, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr13 = GpiohIdrIdrValues<Gpioh::Idr, 13, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr12 = GpiohIdrIdrValues<Gpioh::Idr, 12, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr11 = GpiohIdrIdrValues<Gpioh::Idr, 11, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr10 = GpiohIdrIdrValues<Gpioh::Idr, 10, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr9 = GpiohIdrIdrValues<Gpioh::Idr, 9, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr8 = GpiohIdrIdrValues<Gpioh::Idr, 8, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr7 = GpiohIdrIdrValues<Gpioh::Idr, 7, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr6 = GpiohIdrIdrValues<Gpioh::Idr, 6, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr5 = GpiohIdrIdrValues<Gpioh::Idr, 5, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr4 = GpiohIdrIdrValues<Gpioh::Idr, 4, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr3 = GpiohIdrIdrValues<Gpioh::Idr, 3, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr2 = GpiohIdrIdrValues<Gpioh::Idr, 2, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr1 = GpiohIdrIdrValues<Gpioh::Idr, 1, 1, ReadMode, GpiohIdrIdrValuesBase> ;
    using Idr0 = GpiohIdrIdrValues<Gpioh::Idr, 0, 1, ReadMode, GpiohIdrIdrValuesBase> ;
  } ;

  template<typename... T> 
  using IdrPack  = Register<0x40021C10, 32, ReadMode, GpiohIdrIdrValuesBase, T...> ;

  struct Odr : public RegisterBase<0x40021C14, 32, ReadWriteMode>
  {
    using Odr15 = GpiohOdrOdrValues<Gpioh::Odr, 15, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr14 = GpiohOdrOdrValues<Gpioh::Odr, 14, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr13 = GpiohOdrOdrValues<Gpioh::Odr, 13, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr12 = GpiohOdrOdrValues<Gpioh::Odr, 12, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr11 = GpiohOdrOdrValues<Gpioh::Odr, 11, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr10 = GpiohOdrOdrValues<Gpioh::Odr, 10, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr9 = GpiohOdrOdrValues<Gpioh::Odr, 9, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr8 = GpiohOdrOdrValues<Gpioh::Odr, 8, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr7 = GpiohOdrOdrValues<Gpioh::Odr, 7, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr6 = GpiohOdrOdrValues<Gpioh::Odr, 6, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr5 = GpiohOdrOdrValues<Gpioh::Odr, 5, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr4 = GpiohOdrOdrValues<Gpioh::Odr, 4, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr3 = GpiohOdrOdrValues<Gpioh::Odr, 3, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr2 = GpiohOdrOdrValues<Gpioh::Odr, 2, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr1 = GpiohOdrOdrValues<Gpioh::Odr, 1, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
    using Odr0 = GpiohOdrOdrValues<Gpioh::Odr, 0, 1, ReadWriteMode, GpiohOdrOdrValuesBase> ;
  } ;

  template<typename... T> 
  using OdrPack  = Register<0x40021C14, 32, ReadWriteMode, GpiohOdrOdrValuesBase, T...> ;

  struct Bsrr : public RegisterBase<0x40021C18, 32, WriteMode>
  {
    using Br15 = GpiohBsrrBrValues<Gpioh::Bsrr, 31, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br14 = GpiohBsrrBrValues<Gpioh::Bsrr, 30, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br13 = GpiohBsrrBrValues<Gpioh::Bsrr, 29, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br12 = GpiohBsrrBrValues<Gpioh::Bsrr, 28, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br11 = GpiohBsrrBrValues<Gpioh::Bsrr, 27, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br10 = GpiohBsrrBrValues<Gpioh::Bsrr, 26, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br9 = GpiohBsrrBrValues<Gpioh::Bsrr, 25, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br8 = GpiohBsrrBrValues<Gpioh::Bsrr, 24, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br7 = GpiohBsrrBrValues<Gpioh::Bsrr, 23, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br6 = GpiohBsrrBrValues<Gpioh::Bsrr, 22, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br5 = GpiohBsrrBrValues<Gpioh::Bsrr, 21, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br4 = GpiohBsrrBrValues<Gpioh::Bsrr, 20, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br3 = GpiohBsrrBrValues<Gpioh::Bsrr, 19, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br2 = GpiohBsrrBrValues<Gpioh::Bsrr, 18, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br1 = GpiohBsrrBrValues<Gpioh::Bsrr, 17, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Br0 = GpiohBsrrBrValues<Gpioh::Bsrr, 16, 1, WriteMode, GpiohBsrrBrValuesBase> ;
    using Bs15 = GpiohBsrrBsValues<Gpioh::Bsrr, 15, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs14 = GpiohBsrrBsValues<Gpioh::Bsrr, 14, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs13 = GpiohBsrrBsValues<Gpioh::Bsrr, 13, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs12 = GpiohBsrrBsValues<Gpioh::Bsrr, 12, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs11 = GpiohBsrrBsValues<Gpioh::Bsrr, 11, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs10 = GpiohBsrrBsValues<Gpioh::Bsrr, 10, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs9 = GpiohBsrrBsValues<Gpioh::Bsrr, 9, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs8 = GpiohBsrrBsValues<Gpioh::Bsrr, 8, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs7 = GpiohBsrrBsValues<Gpioh::Bsrr, 7, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs6 = GpiohBsrrBsValues<Gpioh::Bsrr, 6, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs5 = GpiohBsrrBsValues<Gpioh::Bsrr, 5, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs4 = GpiohBsrrBsValues<Gpioh::Bsrr, 4, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs3 = GpiohBsrrBsValues<Gpioh::Bsrr, 3, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs2 = GpiohBsrrBsValues<Gpioh::Bsrr, 2, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs1 = GpiohBsrrBsValues<Gpioh::Bsrr, 1, 1, WriteMode, GpiohBsrrBsValuesBase> ;
    using Bs0 = GpiohBsrrBsValues<Gpioh::Bsrr, 0, 1, WriteMode, GpiohBsrrBsValuesBase> ;
  } ;

  template<typename... T> 
  using BsrrPack  = Register<0x40021C18, 32, WriteMode, GpiohBsrrBrValuesBase, T...> ;

  struct Lckr : public RegisterBase<0x40021C1C, 32, ReadWriteMode>
  {
    using Lckk = GpiohLckrLckkValues<Gpioh::Lckr, 16, 1, ReadWriteMode, GpiohLckrLckkValuesBase> ;
    using Lck15 = GpiohLckrLckValues<Gpioh::Lckr, 15, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck14 = GpiohLckrLckValues<Gpioh::Lckr, 14, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck13 = GpiohLckrLckValues<Gpioh::Lckr, 13, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck12 = GpiohLckrLckValues<Gpioh::Lckr, 12, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck11 = GpiohLckrLckValues<Gpioh::Lckr, 11, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck10 = GpiohLckrLckValues<Gpioh::Lckr, 10, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck9 = GpiohLckrLckValues<Gpioh::Lckr, 9, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck8 = GpiohLckrLckValues<Gpioh::Lckr, 8, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck7 = GpiohLckrLckValues<Gpioh::Lckr, 7, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck6 = GpiohLckrLckValues<Gpioh::Lckr, 6, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck5 = GpiohLckrLckValues<Gpioh::Lckr, 5, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck4 = GpiohLckrLckValues<Gpioh::Lckr, 4, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck3 = GpiohLckrLckValues<Gpioh::Lckr, 3, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck2 = GpiohLckrLckValues<Gpioh::Lckr, 2, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck1 = GpiohLckrLckValues<Gpioh::Lckr, 1, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
    using Lck0 = GpiohLckrLckValues<Gpioh::Lckr, 0, 1, ReadWriteMode, GpiohLckrLckValuesBase> ;
  } ;

  template<typename... T> 
  using LckrPack  = Register<0x40021C1C, 32, ReadWriteMode, GpiohLckrLckkValuesBase, T...> ;

  struct Afrl : public RegisterBase<0x40021C20, 32, ReadWriteMode>
  {
    using Afrl7 = GpiohAfrlAfrlValues<Gpioh::Afrl, 28, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
    using Afrl6 = GpiohAfrlAfrlValues<Gpioh::Afrl, 24, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
    using Afrl5 = GpiohAfrlAfrlValues<Gpioh::Afrl, 20, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
    using Afrl4 = GpiohAfrlAfrlValues<Gpioh::Afrl, 16, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
    using Afrl3 = GpiohAfrlAfrlValues<Gpioh::Afrl, 12, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
    using Afrl2 = GpiohAfrlAfrlValues<Gpioh::Afrl, 8, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
    using Afrl1 = GpiohAfrlAfrlValues<Gpioh::Afrl, 4, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
    using Afrl0 = GpiohAfrlAfrlValues<Gpioh::Afrl, 0, 4, ReadWriteMode, GpiohAfrlAfrlValuesBase> ;
  } ;

  template<typename... T> 
  using AfrlPack  = Register<0x40021C20, 32, ReadWriteMode, GpiohAfrlAfrlValuesBase, T...> ;

  struct Afrh : public RegisterBase<0x40021C24, 32, ReadWriteMode>
  {
    using Afrh15 = GpiohAfrhAfrhValues<Gpioh::Afrh, 28, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
    using Afrh14 = GpiohAfrhAfrhValues<Gpioh::Afrh, 24, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
    using Afrh13 = GpiohAfrhAfrhValues<Gpioh::Afrh, 20, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
    using Afrh12 = GpiohAfrhAfrhValues<Gpioh::Afrh, 16, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
    using Afrh11 = GpiohAfrhAfrhValues<Gpioh::Afrh, 12, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
    using Afrh10 = GpiohAfrhAfrhValues<Gpioh::Afrh, 8, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
    using Afrh9 = GpiohAfrhAfrhValues<Gpioh::Afrh, 4, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
    using Afrh8 = GpiohAfrhAfrhValues<Gpioh::Afrh, 0, 4, ReadWriteMode, GpiohAfrhAfrhValuesBase> ;
  } ;

  template<typename... T> 
  using AfrhPack  = Register<0x40021C24, 32, ReadWriteMode, GpiohAfrhAfrhValuesBase, T...> ;

} ;

#endif //#if !defined(GPIOHREGISTERS_HPP)
