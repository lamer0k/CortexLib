/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : External interrupt/event controller. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(EXTIREGISTERS_HPP)
#define EXTIREGISTERS_HPP

#include "extifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EXTI
{
  struct EXTIIMR1Base {} ;

  struct IMR1 : public RegisterBase<0x40010400, 32, ReadWriteMode>
  {
    using MR0 = EXTI_IMR1_MR0_Values<EXTI::IMR1, 0, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR1 = EXTI_IMR1_MR1_Values<EXTI::IMR1, 1, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR2 = EXTI_IMR1_MR2_Values<EXTI::IMR1, 2, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR3 = EXTI_IMR1_MR3_Values<EXTI::IMR1, 3, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR4 = EXTI_IMR1_MR4_Values<EXTI::IMR1, 4, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR5 = EXTI_IMR1_MR5_Values<EXTI::IMR1, 5, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR6 = EXTI_IMR1_MR6_Values<EXTI::IMR1, 6, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR7 = EXTI_IMR1_MR7_Values<EXTI::IMR1, 7, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR8 = EXTI_IMR1_MR8_Values<EXTI::IMR1, 8, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR9 = EXTI_IMR1_MR9_Values<EXTI::IMR1, 9, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR10 = EXTI_IMR1_MR10_Values<EXTI::IMR1, 10, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR11 = EXTI_IMR1_MR11_Values<EXTI::IMR1, 11, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR12 = EXTI_IMR1_MR12_Values<EXTI::IMR1, 12, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR13 = EXTI_IMR1_MR13_Values<EXTI::IMR1, 13, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR14 = EXTI_IMR1_MR14_Values<EXTI::IMR1, 14, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR15 = EXTI_IMR1_MR15_Values<EXTI::IMR1, 15, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR16 = EXTI_IMR1_MR16_Values<EXTI::IMR1, 16, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR17 = EXTI_IMR1_MR17_Values<EXTI::IMR1, 17, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR18 = EXTI_IMR1_MR18_Values<EXTI::IMR1, 18, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR19 = EXTI_IMR1_MR19_Values<EXTI::IMR1, 19, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR20 = EXTI_IMR1_MR20_Values<EXTI::IMR1, 20, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR21 = EXTI_IMR1_MR21_Values<EXTI::IMR1, 21, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR22 = EXTI_IMR1_MR22_Values<EXTI::IMR1, 22, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR23 = EXTI_IMR1_MR23_Values<EXTI::IMR1, 23, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR24 = EXTI_IMR1_MR24_Values<EXTI::IMR1, 24, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR25 = EXTI_IMR1_MR25_Values<EXTI::IMR1, 25, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR26 = EXTI_IMR1_MR26_Values<EXTI::IMR1, 26, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR27 = EXTI_IMR1_MR27_Values<EXTI::IMR1, 27, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR28 = EXTI_IMR1_MR28_Values<EXTI::IMR1, 28, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR29 = EXTI_IMR1_MR29_Values<EXTI::IMR1, 29, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR30 = EXTI_IMR1_MR30_Values<EXTI::IMR1, 30, 1, ReadWriteMode, EXTIIMR1Base> ;
    using MR31 = EXTI_IMR1_MR31_Values<EXTI::IMR1, 31, 1, ReadWriteMode, EXTIIMR1Base> ;
    using FieldValues = EXTI_IMR1_MR31_Values<EXTI::IMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMR1Pack  = Register<0x40010400, 32, ReadWriteMode, EXTIIMR1Base, T...> ;

  struct EXTIEMR1Base {} ;

  struct EMR1 : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using MR0 = EXTI_EMR1_MR0_Values<EXTI::EMR1, 0, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR1 = EXTI_EMR1_MR1_Values<EXTI::EMR1, 1, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR2 = EXTI_EMR1_MR2_Values<EXTI::EMR1, 2, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR3 = EXTI_EMR1_MR3_Values<EXTI::EMR1, 3, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR4 = EXTI_EMR1_MR4_Values<EXTI::EMR1, 4, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR5 = EXTI_EMR1_MR5_Values<EXTI::EMR1, 5, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR6 = EXTI_EMR1_MR6_Values<EXTI::EMR1, 6, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR7 = EXTI_EMR1_MR7_Values<EXTI::EMR1, 7, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR8 = EXTI_EMR1_MR8_Values<EXTI::EMR1, 8, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR9 = EXTI_EMR1_MR9_Values<EXTI::EMR1, 9, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR10 = EXTI_EMR1_MR10_Values<EXTI::EMR1, 10, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR11 = EXTI_EMR1_MR11_Values<EXTI::EMR1, 11, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR12 = EXTI_EMR1_MR12_Values<EXTI::EMR1, 12, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR13 = EXTI_EMR1_MR13_Values<EXTI::EMR1, 13, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR14 = EXTI_EMR1_MR14_Values<EXTI::EMR1, 14, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR15 = EXTI_EMR1_MR15_Values<EXTI::EMR1, 15, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR16 = EXTI_EMR1_MR16_Values<EXTI::EMR1, 16, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR17 = EXTI_EMR1_MR17_Values<EXTI::EMR1, 17, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR18 = EXTI_EMR1_MR18_Values<EXTI::EMR1, 18, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR19 = EXTI_EMR1_MR19_Values<EXTI::EMR1, 19, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR20 = EXTI_EMR1_MR20_Values<EXTI::EMR1, 20, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR21 = EXTI_EMR1_MR21_Values<EXTI::EMR1, 21, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR22 = EXTI_EMR1_MR22_Values<EXTI::EMR1, 22, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR23 = EXTI_EMR1_MR23_Values<EXTI::EMR1, 23, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR24 = EXTI_EMR1_MR24_Values<EXTI::EMR1, 24, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR25 = EXTI_EMR1_MR25_Values<EXTI::EMR1, 25, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR26 = EXTI_EMR1_MR26_Values<EXTI::EMR1, 26, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR27 = EXTI_EMR1_MR27_Values<EXTI::EMR1, 27, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR28 = EXTI_EMR1_MR28_Values<EXTI::EMR1, 28, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR29 = EXTI_EMR1_MR29_Values<EXTI::EMR1, 29, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR30 = EXTI_EMR1_MR30_Values<EXTI::EMR1, 30, 1, ReadWriteMode, EXTIEMR1Base> ;
    using MR31 = EXTI_EMR1_MR31_Values<EXTI::EMR1, 31, 1, ReadWriteMode, EXTIEMR1Base> ;
    using FieldValues = EXTI_EMR1_MR31_Values<EXTI::EMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EMR1Pack  = Register<0x40010404, 32, ReadWriteMode, EXTIEMR1Base, T...> ;

  struct EXTIRTSR1Base {} ;

  struct RTSR1 : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using TR0 = EXTI_RTSR1_TR0_Values<EXTI::RTSR1, 0, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR1 = EXTI_RTSR1_TR1_Values<EXTI::RTSR1, 1, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR2 = EXTI_RTSR1_TR2_Values<EXTI::RTSR1, 2, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR3 = EXTI_RTSR1_TR3_Values<EXTI::RTSR1, 3, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR4 = EXTI_RTSR1_TR4_Values<EXTI::RTSR1, 4, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR5 = EXTI_RTSR1_TR5_Values<EXTI::RTSR1, 5, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR6 = EXTI_RTSR1_TR6_Values<EXTI::RTSR1, 6, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR7 = EXTI_RTSR1_TR7_Values<EXTI::RTSR1, 7, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR8 = EXTI_RTSR1_TR8_Values<EXTI::RTSR1, 8, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR9 = EXTI_RTSR1_TR9_Values<EXTI::RTSR1, 9, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR10 = EXTI_RTSR1_TR10_Values<EXTI::RTSR1, 10, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR11 = EXTI_RTSR1_TR11_Values<EXTI::RTSR1, 11, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR12 = EXTI_RTSR1_TR12_Values<EXTI::RTSR1, 12, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR13 = EXTI_RTSR1_TR13_Values<EXTI::RTSR1, 13, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR14 = EXTI_RTSR1_TR14_Values<EXTI::RTSR1, 14, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR15 = EXTI_RTSR1_TR15_Values<EXTI::RTSR1, 15, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR16 = EXTI_RTSR1_TR16_Values<EXTI::RTSR1, 16, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR17 = EXTI_RTSR1_TR17_Values<EXTI::RTSR1, 17, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR18 = EXTI_RTSR1_TR18_Values<EXTI::RTSR1, 18, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR19 = EXTI_RTSR1_TR19_Values<EXTI::RTSR1, 19, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR20 = EXTI_RTSR1_TR20_Values<EXTI::RTSR1, 20, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR21 = EXTI_RTSR1_TR21_Values<EXTI::RTSR1, 21, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR22 = EXTI_RTSR1_TR22_Values<EXTI::RTSR1, 22, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR29 = EXTI_RTSR1_TR29_Values<EXTI::RTSR1, 29, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR30 = EXTI_RTSR1_TR30_Values<EXTI::RTSR1, 30, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR31 = EXTI_RTSR1_TR31_Values<EXTI::RTSR1, 31, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using FieldValues = EXTI_RTSR1_TR31_Values<EXTI::RTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR1Pack  = Register<0x40010408, 32, ReadWriteMode, EXTIRTSR1Base, T...> ;

  struct EXTIFTSR1Base {} ;

  struct FTSR1 : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using TR0 = EXTI_FTSR1_TR0_Values<EXTI::FTSR1, 0, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR1 = EXTI_FTSR1_TR1_Values<EXTI::FTSR1, 1, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR2 = EXTI_FTSR1_TR2_Values<EXTI::FTSR1, 2, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR3 = EXTI_FTSR1_TR3_Values<EXTI::FTSR1, 3, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR4 = EXTI_FTSR1_TR4_Values<EXTI::FTSR1, 4, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR5 = EXTI_FTSR1_TR5_Values<EXTI::FTSR1, 5, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR6 = EXTI_FTSR1_TR6_Values<EXTI::FTSR1, 6, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR7 = EXTI_FTSR1_TR7_Values<EXTI::FTSR1, 7, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR8 = EXTI_FTSR1_TR8_Values<EXTI::FTSR1, 8, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR9 = EXTI_FTSR1_TR9_Values<EXTI::FTSR1, 9, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR10 = EXTI_FTSR1_TR10_Values<EXTI::FTSR1, 10, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR11 = EXTI_FTSR1_TR11_Values<EXTI::FTSR1, 11, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR12 = EXTI_FTSR1_TR12_Values<EXTI::FTSR1, 12, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR13 = EXTI_FTSR1_TR13_Values<EXTI::FTSR1, 13, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR14 = EXTI_FTSR1_TR14_Values<EXTI::FTSR1, 14, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR15 = EXTI_FTSR1_TR15_Values<EXTI::FTSR1, 15, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR16 = EXTI_FTSR1_TR16_Values<EXTI::FTSR1, 16, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR17 = EXTI_FTSR1_TR17_Values<EXTI::FTSR1, 17, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR18 = EXTI_FTSR1_TR18_Values<EXTI::FTSR1, 18, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR19 = EXTI_FTSR1_TR19_Values<EXTI::FTSR1, 19, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR20 = EXTI_FTSR1_TR20_Values<EXTI::FTSR1, 20, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR21 = EXTI_FTSR1_TR21_Values<EXTI::FTSR1, 21, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR22 = EXTI_FTSR1_TR22_Values<EXTI::FTSR1, 22, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR29 = EXTI_FTSR1_TR29_Values<EXTI::FTSR1, 29, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR30 = EXTI_FTSR1_TR30_Values<EXTI::FTSR1, 30, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR31 = EXTI_FTSR1_TR31_Values<EXTI::FTSR1, 31, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FieldValues = EXTI_FTSR1_TR31_Values<EXTI::FTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR1Pack  = Register<0x4001040C, 32, ReadWriteMode, EXTIFTSR1Base, T...> ;

  struct EXTISWIER1Base {} ;

  struct SWIER1 : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using SWIER0 = EXTI_SWIER1_SWIER0_Values<EXTI::SWIER1, 0, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER1Field = EXTI_SWIER1_SWIER1_Values<EXTI::SWIER1, 1, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER2 = EXTI_SWIER1_SWIER2_Values<EXTI::SWIER1, 2, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER3 = EXTI_SWIER1_SWIER3_Values<EXTI::SWIER1, 3, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER4 = EXTI_SWIER1_SWIER4_Values<EXTI::SWIER1, 4, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER5 = EXTI_SWIER1_SWIER5_Values<EXTI::SWIER1, 5, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER6 = EXTI_SWIER1_SWIER6_Values<EXTI::SWIER1, 6, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER7 = EXTI_SWIER1_SWIER7_Values<EXTI::SWIER1, 7, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER8 = EXTI_SWIER1_SWIER8_Values<EXTI::SWIER1, 8, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER9 = EXTI_SWIER1_SWIER9_Values<EXTI::SWIER1, 9, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER10 = EXTI_SWIER1_SWIER10_Values<EXTI::SWIER1, 10, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER11 = EXTI_SWIER1_SWIER11_Values<EXTI::SWIER1, 11, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER12 = EXTI_SWIER1_SWIER12_Values<EXTI::SWIER1, 12, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER13 = EXTI_SWIER1_SWIER13_Values<EXTI::SWIER1, 13, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER14 = EXTI_SWIER1_SWIER14_Values<EXTI::SWIER1, 14, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER15 = EXTI_SWIER1_SWIER15_Values<EXTI::SWIER1, 15, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER16 = EXTI_SWIER1_SWIER16_Values<EXTI::SWIER1, 16, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER17 = EXTI_SWIER1_SWIER17_Values<EXTI::SWIER1, 17, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER18 = EXTI_SWIER1_SWIER18_Values<EXTI::SWIER1, 18, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER19 = EXTI_SWIER1_SWIER19_Values<EXTI::SWIER1, 19, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER20 = EXTI_SWIER1_SWIER20_Values<EXTI::SWIER1, 20, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER21 = EXTI_SWIER1_SWIER21_Values<EXTI::SWIER1, 21, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER22 = EXTI_SWIER1_SWIER22_Values<EXTI::SWIER1, 22, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER29 = EXTI_SWIER1_SWIER29_Values<EXTI::SWIER1, 29, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER30 = EXTI_SWIER1_SWIER30_Values<EXTI::SWIER1, 30, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER31 = EXTI_SWIER1_SWIER31_Values<EXTI::SWIER1, 31, 1, ReadWriteMode, EXTISWIER1Base> ;
    using FieldValues = EXTI_SWIER1_SWIER31_Values<EXTI::SWIER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER1Pack  = Register<0x40010410, 32, ReadWriteMode, EXTISWIER1Base, T...> ;

  struct EXTIPR1Base {} ;

  struct PR1 : public RegisterBase<0x40010414, 32, ReadWriteMode>
  {
    using PR0 = EXTI_PR1_PR0_Values<EXTI::PR1, 0, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR1Field = EXTI_PR1_PR1_Values<EXTI::PR1, 1, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR2 = EXTI_PR1_PR2_Values<EXTI::PR1, 2, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR3 = EXTI_PR1_PR3_Values<EXTI::PR1, 3, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR4 = EXTI_PR1_PR4_Values<EXTI::PR1, 4, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR5 = EXTI_PR1_PR5_Values<EXTI::PR1, 5, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR6 = EXTI_PR1_PR6_Values<EXTI::PR1, 6, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR7 = EXTI_PR1_PR7_Values<EXTI::PR1, 7, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR8 = EXTI_PR1_PR8_Values<EXTI::PR1, 8, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR9 = EXTI_PR1_PR9_Values<EXTI::PR1, 9, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR10 = EXTI_PR1_PR10_Values<EXTI::PR1, 10, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR11 = EXTI_PR1_PR11_Values<EXTI::PR1, 11, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR12 = EXTI_PR1_PR12_Values<EXTI::PR1, 12, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR13 = EXTI_PR1_PR13_Values<EXTI::PR1, 13, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR14 = EXTI_PR1_PR14_Values<EXTI::PR1, 14, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR15 = EXTI_PR1_PR15_Values<EXTI::PR1, 15, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR16 = EXTI_PR1_PR16_Values<EXTI::PR1, 16, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR17 = EXTI_PR1_PR17_Values<EXTI::PR1, 17, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR18 = EXTI_PR1_PR18_Values<EXTI::PR1, 18, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR19 = EXTI_PR1_PR19_Values<EXTI::PR1, 19, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR20 = EXTI_PR1_PR20_Values<EXTI::PR1, 20, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR21 = EXTI_PR1_PR21_Values<EXTI::PR1, 21, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR22 = EXTI_PR1_PR22_Values<EXTI::PR1, 22, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR29 = EXTI_PR1_PR29_Values<EXTI::PR1, 29, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR30 = EXTI_PR1_PR30_Values<EXTI::PR1, 30, 1, ReadWriteMode, EXTIPR1Base> ;
    using PR31 = EXTI_PR1_PR31_Values<EXTI::PR1, 31, 1, ReadWriteMode, EXTIPR1Base> ;
    using FieldValues = EXTI_PR1_PR31_Values<EXTI::PR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PR1Pack  = Register<0x40010414, 32, ReadWriteMode, EXTIPR1Base, T...> ;

  struct EXTIIMR2Base {} ;

  struct IMR2 : public RegisterBase<0x40010418, 32, ReadWriteMode>
  {
    using MR32 = EXTI_IMR2_MR32_Values<EXTI::IMR2, 0, 1, ReadWriteMode, EXTIIMR2Base> ;
    using MR33 = EXTI_IMR2_MR33_Values<EXTI::IMR2, 1, 1, ReadWriteMode, EXTIIMR2Base> ;
    using MR34 = EXTI_IMR2_MR34_Values<EXTI::IMR2, 2, 1, ReadWriteMode, EXTIIMR2Base> ;
    using MR35 = EXTI_IMR2_MR35_Values<EXTI::IMR2, 3, 1, ReadWriteMode, EXTIIMR2Base> ;
    using FieldValues = EXTI_IMR2_MR35_Values<EXTI::IMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMR2Pack  = Register<0x40010418, 32, ReadWriteMode, EXTIIMR2Base, T...> ;

  struct EXTIEMR2Base {} ;

  struct EMR2 : public RegisterBase<0x4001041C, 32, ReadWriteMode>
  {
    using MR32 = EXTI_EMR2_MR32_Values<EXTI::EMR2, 0, 1, ReadWriteMode, EXTIEMR2Base> ;
    using MR33 = EXTI_EMR2_MR33_Values<EXTI::EMR2, 1, 1, ReadWriteMode, EXTIEMR2Base> ;
    using MR34 = EXTI_EMR2_MR34_Values<EXTI::EMR2, 2, 1, ReadWriteMode, EXTIEMR2Base> ;
    using MR35 = EXTI_EMR2_MR35_Values<EXTI::EMR2, 3, 1, ReadWriteMode, EXTIEMR2Base> ;
    using FieldValues = EXTI_EMR2_MR35_Values<EXTI::EMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EMR2Pack  = Register<0x4001041C, 32, ReadWriteMode, EXTIEMR2Base, T...> ;

  struct EXTIRTSR2Base {} ;

  struct RTSR2 : public RegisterBase<0x40010420, 32, ReadWriteMode>
  {
    using TR32 = EXTI_RTSR2_TR32_Values<EXTI::RTSR2, 0, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using TR33 = EXTI_RTSR2_TR33_Values<EXTI::RTSR2, 1, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using FieldValues = EXTI_RTSR2_TR33_Values<EXTI::RTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR2Pack  = Register<0x40010420, 32, ReadWriteMode, EXTIRTSR2Base, T...> ;

  struct EXTIFTSR2Base {} ;

  struct FTSR2 : public RegisterBase<0x40010424, 32, ReadWriteMode>
  {
    using TR32 = EXTI_FTSR2_TR32_Values<EXTI::FTSR2, 0, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using TR33 = EXTI_FTSR2_TR33_Values<EXTI::FTSR2, 1, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using FieldValues = EXTI_FTSR2_TR33_Values<EXTI::FTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR2Pack  = Register<0x40010424, 32, ReadWriteMode, EXTIFTSR2Base, T...> ;

  struct EXTISWIER2Base {} ;

  struct SWIER2 : public RegisterBase<0x40010428, 32, ReadWriteMode>
  {
    using SWIER32 = EXTI_SWIER2_SWIER32_Values<EXTI::SWIER2, 0, 1, ReadWriteMode, EXTISWIER2Base> ;
    using SWIER33 = EXTI_SWIER2_SWIER33_Values<EXTI::SWIER2, 1, 1, ReadWriteMode, EXTISWIER2Base> ;
    using FieldValues = EXTI_SWIER2_SWIER33_Values<EXTI::SWIER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER2Pack  = Register<0x40010428, 32, ReadWriteMode, EXTISWIER2Base, T...> ;

  struct EXTIPR2Base {} ;

  struct PR2 : public RegisterBase<0x4001042C, 32, ReadWriteMode>
  {
    using PR32 = EXTI_PR2_PR32_Values<EXTI::PR2, 0, 1, ReadWriteMode, EXTIPR2Base> ;
    using PR33 = EXTI_PR2_PR33_Values<EXTI::PR2, 1, 1, ReadWriteMode, EXTIPR2Base> ;
    using FieldValues = EXTI_PR2_PR33_Values<EXTI::PR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PR2Pack  = Register<0x4001042C, 32, ReadWriteMode, EXTIPR2Base, T...> ;

} ;

#endif //#if !defined(EXTIREGISTERS_HPP)
