/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : External interrupt/event controller. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(EXTIREGISTERS_HPP)
#define EXTIREGISTERS_HPP

#include "extibitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Exti
{
  struct Imr : public RegisterBase<0x40013C00, 32, ReadWriteMode>
  {
    using Mr0 = ExtiImrMrValues<Exti::Imr, 0, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr1 = ExtiImrMrValues<Exti::Imr, 1, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr2 = ExtiImrMrValues<Exti::Imr, 2, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr3 = ExtiImrMrValues<Exti::Imr, 3, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr4 = ExtiImrMrValues<Exti::Imr, 4, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr5 = ExtiImrMrValues<Exti::Imr, 5, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr6 = ExtiImrMrValues<Exti::Imr, 6, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr7 = ExtiImrMrValues<Exti::Imr, 7, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr8 = ExtiImrMrValues<Exti::Imr, 8, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr9 = ExtiImrMrValues<Exti::Imr, 9, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr10 = ExtiImrMrValues<Exti::Imr, 10, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr11 = ExtiImrMrValues<Exti::Imr, 11, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr12 = ExtiImrMrValues<Exti::Imr, 12, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr13 = ExtiImrMrValues<Exti::Imr, 13, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr14 = ExtiImrMrValues<Exti::Imr, 14, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr15 = ExtiImrMrValues<Exti::Imr, 15, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr16 = ExtiImrMrValues<Exti::Imr, 16, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr17 = ExtiImrMrValues<Exti::Imr, 17, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr18 = ExtiImrMrValues<Exti::Imr, 18, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr19 = ExtiImrMrValues<Exti::Imr, 19, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr20 = ExtiImrMrValues<Exti::Imr, 20, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr21 = ExtiImrMrValues<Exti::Imr, 21, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
    using Mr22 = ExtiImrMrValues<Exti::Imr, 22, 1, ReadWriteMode, ExtiImrMrValuesBase> ;
  } ;

  template<typename... T> 
  using ImrPack  = Register<0x40013C00, 32, ReadWriteMode, ExtiImrMrValuesBase, T...> ;

  struct Emr : public RegisterBase<0x40013C04, 32, ReadWriteMode>
  {
    using Mr0 = ExtiEmrMrValues<Exti::Emr, 0, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr1 = ExtiEmrMrValues<Exti::Emr, 1, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr2 = ExtiEmrMrValues<Exti::Emr, 2, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr3 = ExtiEmrMrValues<Exti::Emr, 3, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr4 = ExtiEmrMrValues<Exti::Emr, 4, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr5 = ExtiEmrMrValues<Exti::Emr, 5, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr6 = ExtiEmrMrValues<Exti::Emr, 6, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr7 = ExtiEmrMrValues<Exti::Emr, 7, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr8 = ExtiEmrMrValues<Exti::Emr, 8, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr9 = ExtiEmrMrValues<Exti::Emr, 9, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr10 = ExtiEmrMrValues<Exti::Emr, 10, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr11 = ExtiEmrMrValues<Exti::Emr, 11, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr12 = ExtiEmrMrValues<Exti::Emr, 12, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr13 = ExtiEmrMrValues<Exti::Emr, 13, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr14 = ExtiEmrMrValues<Exti::Emr, 14, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr15 = ExtiEmrMrValues<Exti::Emr, 15, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr16 = ExtiEmrMrValues<Exti::Emr, 16, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr17 = ExtiEmrMrValues<Exti::Emr, 17, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr18 = ExtiEmrMrValues<Exti::Emr, 18, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr19 = ExtiEmrMrValues<Exti::Emr, 19, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr20 = ExtiEmrMrValues<Exti::Emr, 20, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr21 = ExtiEmrMrValues<Exti::Emr, 21, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
    using Mr22 = ExtiEmrMrValues<Exti::Emr, 22, 1, ReadWriteMode, ExtiEmrMrValuesBase> ;
  } ;

  template<typename... T> 
  using EmrPack  = Register<0x40013C04, 32, ReadWriteMode, ExtiEmrMrValuesBase, T...> ;

  struct Rtsr : public RegisterBase<0x40013C08, 32, ReadWriteMode>
  {
    using Tr0 = ExtiRtsrTrValues<Exti::Rtsr, 0, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr1 = ExtiRtsrTrValues<Exti::Rtsr, 1, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr2 = ExtiRtsrTrValues<Exti::Rtsr, 2, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr3 = ExtiRtsrTrValues<Exti::Rtsr, 3, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr4 = ExtiRtsrTrValues<Exti::Rtsr, 4, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr5 = ExtiRtsrTrValues<Exti::Rtsr, 5, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr6 = ExtiRtsrTrValues<Exti::Rtsr, 6, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr7 = ExtiRtsrTrValues<Exti::Rtsr, 7, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr8 = ExtiRtsrTrValues<Exti::Rtsr, 8, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr9 = ExtiRtsrTrValues<Exti::Rtsr, 9, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr10 = ExtiRtsrTrValues<Exti::Rtsr, 10, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr11 = ExtiRtsrTrValues<Exti::Rtsr, 11, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr12 = ExtiRtsrTrValues<Exti::Rtsr, 12, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr13 = ExtiRtsrTrValues<Exti::Rtsr, 13, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr14 = ExtiRtsrTrValues<Exti::Rtsr, 14, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr15 = ExtiRtsrTrValues<Exti::Rtsr, 15, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr16 = ExtiRtsrTrValues<Exti::Rtsr, 16, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr17 = ExtiRtsrTrValues<Exti::Rtsr, 17, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr18 = ExtiRtsrTrValues<Exti::Rtsr, 18, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr19 = ExtiRtsrTrValues<Exti::Rtsr, 19, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr20 = ExtiRtsrTrValues<Exti::Rtsr, 20, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr21 = ExtiRtsrTrValues<Exti::Rtsr, 21, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
    using Tr22 = ExtiRtsrTrValues<Exti::Rtsr, 22, 1, ReadWriteMode, ExtiRtsrTrValuesBase> ;
  } ;

  template<typename... T> 
  using RtsrPack  = Register<0x40013C08, 32, ReadWriteMode, ExtiRtsrTrValuesBase, T...> ;

  struct Ftsr : public RegisterBase<0x40013C0C, 32, ReadWriteMode>
  {
    using Tr0 = ExtiFtsrTrValues<Exti::Ftsr, 0, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr1 = ExtiFtsrTrValues<Exti::Ftsr, 1, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr2 = ExtiFtsrTrValues<Exti::Ftsr, 2, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr3 = ExtiFtsrTrValues<Exti::Ftsr, 3, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr4 = ExtiFtsrTrValues<Exti::Ftsr, 4, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr5 = ExtiFtsrTrValues<Exti::Ftsr, 5, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr6 = ExtiFtsrTrValues<Exti::Ftsr, 6, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr7 = ExtiFtsrTrValues<Exti::Ftsr, 7, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr8 = ExtiFtsrTrValues<Exti::Ftsr, 8, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr9 = ExtiFtsrTrValues<Exti::Ftsr, 9, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr10 = ExtiFtsrTrValues<Exti::Ftsr, 10, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr11 = ExtiFtsrTrValues<Exti::Ftsr, 11, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr12 = ExtiFtsrTrValues<Exti::Ftsr, 12, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr13 = ExtiFtsrTrValues<Exti::Ftsr, 13, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr14 = ExtiFtsrTrValues<Exti::Ftsr, 14, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr15 = ExtiFtsrTrValues<Exti::Ftsr, 15, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr16 = ExtiFtsrTrValues<Exti::Ftsr, 16, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr17 = ExtiFtsrTrValues<Exti::Ftsr, 17, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr18 = ExtiFtsrTrValues<Exti::Ftsr, 18, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr19 = ExtiFtsrTrValues<Exti::Ftsr, 19, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr20 = ExtiFtsrTrValues<Exti::Ftsr, 20, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr21 = ExtiFtsrTrValues<Exti::Ftsr, 21, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
    using Tr22 = ExtiFtsrTrValues<Exti::Ftsr, 22, 1, ReadWriteMode, ExtiFtsrTrValuesBase> ;
  } ;

  template<typename... T> 
  using FtsrPack  = Register<0x40013C0C, 32, ReadWriteMode, ExtiFtsrTrValuesBase, T...> ;

  struct Swier : public RegisterBase<0x40013C10, 32, ReadWriteMode>
  {
    using Swier0 = ExtiSwierSwierValues<Exti::Swier, 0, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier1 = ExtiSwierSwierValues<Exti::Swier, 1, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier2 = ExtiSwierSwierValues<Exti::Swier, 2, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier3 = ExtiSwierSwierValues<Exti::Swier, 3, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier4 = ExtiSwierSwierValues<Exti::Swier, 4, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier5 = ExtiSwierSwierValues<Exti::Swier, 5, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier6 = ExtiSwierSwierValues<Exti::Swier, 6, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier7 = ExtiSwierSwierValues<Exti::Swier, 7, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier8 = ExtiSwierSwierValues<Exti::Swier, 8, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier9 = ExtiSwierSwierValues<Exti::Swier, 9, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier10 = ExtiSwierSwierValues<Exti::Swier, 10, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier11 = ExtiSwierSwierValues<Exti::Swier, 11, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier12 = ExtiSwierSwierValues<Exti::Swier, 12, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier13 = ExtiSwierSwierValues<Exti::Swier, 13, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier14 = ExtiSwierSwierValues<Exti::Swier, 14, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier15 = ExtiSwierSwierValues<Exti::Swier, 15, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier16 = ExtiSwierSwierValues<Exti::Swier, 16, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier17 = ExtiSwierSwierValues<Exti::Swier, 17, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier18 = ExtiSwierSwierValues<Exti::Swier, 18, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier19 = ExtiSwierSwierValues<Exti::Swier, 19, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier20 = ExtiSwierSwierValues<Exti::Swier, 20, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier21 = ExtiSwierSwierValues<Exti::Swier, 21, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
    using Swier22 = ExtiSwierSwierValues<Exti::Swier, 22, 1, ReadWriteMode, ExtiSwierSwierValuesBase> ;
  } ;

  template<typename... T> 
  using SwierPack  = Register<0x40013C10, 32, ReadWriteMode, ExtiSwierSwierValuesBase, T...> ;

  struct Pr : public RegisterBase<0x40013C14, 32, ReadWriteMode>
  {
    using Pr0 = ExtiPrPrValues<Exti::Pr, 0, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr1 = ExtiPrPrValues<Exti::Pr, 1, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr2 = ExtiPrPrValues<Exti::Pr, 2, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr3 = ExtiPrPrValues<Exti::Pr, 3, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr4 = ExtiPrPrValues<Exti::Pr, 4, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr5 = ExtiPrPrValues<Exti::Pr, 5, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr6 = ExtiPrPrValues<Exti::Pr, 6, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr7 = ExtiPrPrValues<Exti::Pr, 7, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr8 = ExtiPrPrValues<Exti::Pr, 8, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr9 = ExtiPrPrValues<Exti::Pr, 9, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr10 = ExtiPrPrValues<Exti::Pr, 10, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr11 = ExtiPrPrValues<Exti::Pr, 11, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr12 = ExtiPrPrValues<Exti::Pr, 12, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr13 = ExtiPrPrValues<Exti::Pr, 13, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr14 = ExtiPrPrValues<Exti::Pr, 14, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr15 = ExtiPrPrValues<Exti::Pr, 15, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr16 = ExtiPrPrValues<Exti::Pr, 16, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr17 = ExtiPrPrValues<Exti::Pr, 17, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr18 = ExtiPrPrValues<Exti::Pr, 18, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr19 = ExtiPrPrValues<Exti::Pr, 19, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr20 = ExtiPrPrValues<Exti::Pr, 20, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr21 = ExtiPrPrValues<Exti::Pr, 21, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
    using Pr22 = ExtiPrPrValues<Exti::Pr, 22, 1, ReadWriteMode, ExtiPrPrValuesBase> ;
  } ;

  template<typename... T> 
  using PrPack  = Register<0x40013C14, 32, ReadWriteMode, ExtiPrPrValuesBase, T...> ;

} ;

#endif //#if !defined(EXTIREGISTERS_HPP)
