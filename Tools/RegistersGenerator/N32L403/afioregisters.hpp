/*******************************************************************************
* Filename      : afioregisters.hpp
*
* Details       : Alternate function I/O. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "afiofieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AFIO
{
  struct AFIOAFIO_RMP_CFGBase {} ;

  struct AFIO_RMP_CFG : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using EXTI_ETRR = AFIO_AFIO_RMP_CFG_EXTI_ETRR_Values<AFIO::AFIO_RMP_CFG, 0, 4, ReadWriteMode, AFIOAFIO_RMP_CFGBase> ;
    using EXTI_ETRJ = AFIO_AFIO_RMP_CFG_EXTI_ETRJ_Values<AFIO::AFIO_RMP_CFG, 4, 4, ReadWriteMode, AFIOAFIO_RMP_CFGBase> ;
    using ADC_ETRR = AFIO_AFIO_RMP_CFG_ADC_ETRR_Values<AFIO::AFIO_RMP_CFG, 8, 1, ReadWriteMode, AFIOAFIO_RMP_CFGBase> ;
    using ADC_ETRJ = AFIO_AFIO_RMP_CFG_ADC_ETRJ_Values<AFIO::AFIO_RMP_CFG, 9, 1, ReadWriteMode, AFIOAFIO_RMP_CFGBase> ;
    using SPI2_NSS = AFIO_AFIO_RMP_CFG_SPI2_NSS_Values<AFIO::AFIO_RMP_CFG, 10, 1, ReadWriteMode, AFIOAFIO_RMP_CFGBase> ;
    using SPI1_NSS = AFIO_AFIO_RMP_CFG_SPI1_NSS_Values<AFIO::AFIO_RMP_CFG, 11, 1, ReadWriteMode, AFIOAFIO_RMP_CFGBase> ;
    using FieldValues = AFIO_AFIO_RMP_CFG_SPI1_NSS_Values<AFIO::AFIO_RMP_CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFIO_RMP_CFGPack  = Register<0x40010000, 32, ReadWriteMode, AFIOAFIO_RMP_CFGBase, T...> ;

  struct AFIOAFIO_EXTI_CFG1Base {} ;

  struct AFIO_EXTI_CFG1 : public RegisterBase<0x40010004, 32, ReadWriteMode>
  {
    using EXTI0_CFG = AFIO_AFIO_EXTI_CFG1_EXTI0_CFG_Values<AFIO::AFIO_EXTI_CFG1, 0, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG1Base> ;
    using EXTI1_CFG = AFIO_AFIO_EXTI_CFG1_EXTI1_CFG_Values<AFIO::AFIO_EXTI_CFG1, 4, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG1Base> ;
    using EXTI2_CFG = AFIO_AFIO_EXTI_CFG1_EXTI2_CFG_Values<AFIO::AFIO_EXTI_CFG1, 8, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG1Base> ;
    using EXTI3_CFG = AFIO_AFIO_EXTI_CFG1_EXTI3_CFG_Values<AFIO::AFIO_EXTI_CFG1, 12, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG1Base> ;
    using FieldValues = AFIO_AFIO_EXTI_CFG1_EXTI3_CFG_Values<AFIO::AFIO_EXTI_CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFIO_EXTI_CFG1Pack  = Register<0x40010004, 32, ReadWriteMode, AFIOAFIO_EXTI_CFG1Base, T...> ;

  struct AFIOAFIO_EXTI_CFG2Base {} ;

  struct AFIO_EXTI_CFG2 : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using EXTI4_CFG = AFIO_AFIO_EXTI_CFG2_EXTI4_CFG_Values<AFIO::AFIO_EXTI_CFG2, 0, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG2Base> ;
    using EXTI5_CFG = AFIO_AFIO_EXTI_CFG2_EXTI5_CFG_Values<AFIO::AFIO_EXTI_CFG2, 4, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG2Base> ;
    using EXTI6_CFG = AFIO_AFIO_EXTI_CFG2_EXTI6_CFG_Values<AFIO::AFIO_EXTI_CFG2, 8, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG2Base> ;
    using EXTI7_CFG = AFIO_AFIO_EXTI_CFG2_EXTI7_CFG_Values<AFIO::AFIO_EXTI_CFG2, 12, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG2Base> ;
    using FieldValues = AFIO_AFIO_EXTI_CFG2_EXTI7_CFG_Values<AFIO::AFIO_EXTI_CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFIO_EXTI_CFG2Pack  = Register<0x40010008, 32, ReadWriteMode, AFIOAFIO_EXTI_CFG2Base, T...> ;

  struct AFIOAFIO_EXTI_CFG3Base {} ;

  struct AFIO_EXTI_CFG3 : public RegisterBase<0x4001000C, 32, ReadWriteMode>
  {
    using EXTI8_CFG = AFIO_AFIO_EXTI_CFG3_EXTI8_CFG_Values<AFIO::AFIO_EXTI_CFG3, 0, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG3Base> ;
    using EXTI9_CFG = AFIO_AFIO_EXTI_CFG3_EXTI9_CFG_Values<AFIO::AFIO_EXTI_CFG3, 4, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG3Base> ;
    using EXTI10_CFG = AFIO_AFIO_EXTI_CFG3_EXTI10_CFG_Values<AFIO::AFIO_EXTI_CFG3, 8, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG3Base> ;
    using EXTI11_CFG = AFIO_AFIO_EXTI_CFG3_EXTI11_CFG_Values<AFIO::AFIO_EXTI_CFG3, 12, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG3Base> ;
    using FieldValues = AFIO_AFIO_EXTI_CFG3_EXTI11_CFG_Values<AFIO::AFIO_EXTI_CFG3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFIO_EXTI_CFG3Pack  = Register<0x4001000C, 32, ReadWriteMode, AFIOAFIO_EXTI_CFG3Base, T...> ;

  struct AFIOAFIO_EXTI_CFG4Base {} ;

  struct AFIO_EXTI_CFG4 : public RegisterBase<0x40010010, 32, ReadWriteMode>
  {
    using EXTI12_CFG = AFIO_AFIO_EXTI_CFG4_EXTI12_CFG_Values<AFIO::AFIO_EXTI_CFG4, 0, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG4Base> ;
    using EXTI13_CFG = AFIO_AFIO_EXTI_CFG4_EXTI13_CFG_Values<AFIO::AFIO_EXTI_CFG4, 4, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG4Base> ;
    using EXTI14_CFG = AFIO_AFIO_EXTI_CFG4_EXTI14_CFG_Values<AFIO::AFIO_EXTI_CFG4, 8, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG4Base> ;
    using EXTI15_CFG = AFIO_AFIO_EXTI_CFG4_EXTI15_CFG_Values<AFIO::AFIO_EXTI_CFG4, 12, 2, ReadWriteMode, AFIOAFIO_EXTI_CFG4Base> ;
    using FieldValues = AFIO_AFIO_EXTI_CFG4_EXTI15_CFG_Values<AFIO::AFIO_EXTI_CFG4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFIO_EXTI_CFG4Pack  = Register<0x40010010, 32, ReadWriteMode, AFIOAFIO_EXTI_CFG4Base, T...> ;

} ;

