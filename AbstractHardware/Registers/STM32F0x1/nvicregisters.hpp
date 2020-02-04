/*******************************************************************************
* Filename      : nvicregisters.hpp
*
* Details       : Nested Vectored Interrupt Controller. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(NVICREGISTERS_HPP)
#define NVICREGISTERS_HPP

#include "nvicfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct NVIC
{
  struct NVICISERBase {} ;

  struct ISER : public RegisterBase<0xE000E100, 32, ReadWriteMode>
  {
    using SETENA = NVIC_ISER_SETENA_Values<NVIC::ISER, 0, 32, ReadWriteMode, NVICISERBase> ;
    using FieldValues = NVIC_ISER_SETENA_Values<NVIC::ISER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISERPack  = Register<0xE000E100, 32, ReadWriteMode, NVICISERBase, T...> ;

  struct NVICICERBase {} ;

  struct ICER : public RegisterBase<0xE000E180, 32, ReadWriteMode>
  {
    using CLRENA = NVIC_ICER_CLRENA_Values<NVIC::ICER, 0, 32, ReadWriteMode, NVICICERBase> ;
    using FieldValues = NVIC_ICER_CLRENA_Values<NVIC::ICER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICERPack  = Register<0xE000E180, 32, ReadWriteMode, NVICICERBase, T...> ;

  struct NVICISPRBase {} ;

  struct ISPR : public RegisterBase<0xE000E200, 32, ReadWriteMode>
  {
    using SETPEND = NVIC_ISPR_SETPEND_Values<NVIC::ISPR, 0, 32, ReadWriteMode, NVICISPRBase> ;
    using FieldValues = NVIC_ISPR_SETPEND_Values<NVIC::ISPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPRPack  = Register<0xE000E200, 32, ReadWriteMode, NVICISPRBase, T...> ;

  struct NVICICPRBase {} ;

  struct ICPR : public RegisterBase<0xE000E280, 32, ReadWriteMode>
  {
    using CLRPEND = NVIC_ICPR_CLRPEND_Values<NVIC::ICPR, 0, 32, ReadWriteMode, NVICICPRBase> ;
    using FieldValues = NVIC_ICPR_CLRPEND_Values<NVIC::ICPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPRPack  = Register<0xE000E280, 32, ReadWriteMode, NVICICPRBase, T...> ;

  struct NVICIPR0Base {} ;

  struct IPR0 : public RegisterBase<0xE000E400, 32, ReadWriteMode>
  {
    using PRI_00 = NVIC_IPR0_PRI_00_Values<NVIC::IPR0, 6, 2, ReadWriteMode, NVICIPR0Base> ;
    using PRI_01 = NVIC_IPR0_PRI_01_Values<NVIC::IPR0, 14, 2, ReadWriteMode, NVICIPR0Base> ;
    using PRI_02 = NVIC_IPR0_PRI_02_Values<NVIC::IPR0, 22, 2, ReadWriteMode, NVICIPR0Base> ;
    using PRI_03 = NVIC_IPR0_PRI_03_Values<NVIC::IPR0, 30, 2, ReadWriteMode, NVICIPR0Base> ;
    using FieldValues = NVIC_IPR0_PRI_03_Values<NVIC::IPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR0Pack  = Register<0xE000E400, 32, ReadWriteMode, NVICIPR0Base, T...> ;

  struct NVICIPR1Base {} ;

  struct IPR1 : public RegisterBase<0xE000E404, 32, ReadWriteMode>
  {
    using PRI_40 = NVIC_IPR1_PRI_40_Values<NVIC::IPR1, 6, 2, ReadWriteMode, NVICIPR1Base> ;
    using PRI_41 = NVIC_IPR1_PRI_41_Values<NVIC::IPR1, 14, 2, ReadWriteMode, NVICIPR1Base> ;
    using PRI_42 = NVIC_IPR1_PRI_42_Values<NVIC::IPR1, 22, 2, ReadWriteMode, NVICIPR1Base> ;
    using PRI_43 = NVIC_IPR1_PRI_43_Values<NVIC::IPR1, 30, 2, ReadWriteMode, NVICIPR1Base> ;
    using FieldValues = NVIC_IPR1_PRI_43_Values<NVIC::IPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR1Pack  = Register<0xE000E404, 32, ReadWriteMode, NVICIPR1Base, T...> ;

  struct NVICIPR2Base {} ;

  struct IPR2 : public RegisterBase<0xE000E408, 32, ReadWriteMode>
  {
    using PRI_80 = NVIC_IPR2_PRI_80_Values<NVIC::IPR2, 6, 2, ReadWriteMode, NVICIPR2Base> ;
    using PRI_81 = NVIC_IPR2_PRI_81_Values<NVIC::IPR2, 14, 2, ReadWriteMode, NVICIPR2Base> ;
    using PRI_82 = NVIC_IPR2_PRI_82_Values<NVIC::IPR2, 22, 2, ReadWriteMode, NVICIPR2Base> ;
    using PRI_83 = NVIC_IPR2_PRI_83_Values<NVIC::IPR2, 30, 2, ReadWriteMode, NVICIPR2Base> ;
    using FieldValues = NVIC_IPR2_PRI_83_Values<NVIC::IPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR2Pack  = Register<0xE000E408, 32, ReadWriteMode, NVICIPR2Base, T...> ;

  struct NVICIPR3Base {} ;

  struct IPR3 : public RegisterBase<0xE000E40C, 32, ReadWriteMode>
  {
    using PRI_120 = NVIC_IPR3_PRI_120_Values<NVIC::IPR3, 6, 2, ReadWriteMode, NVICIPR3Base> ;
    using PRI_121 = NVIC_IPR3_PRI_121_Values<NVIC::IPR3, 14, 2, ReadWriteMode, NVICIPR3Base> ;
    using PRI_122 = NVIC_IPR3_PRI_122_Values<NVIC::IPR3, 22, 2, ReadWriteMode, NVICIPR3Base> ;
    using PRI_123 = NVIC_IPR3_PRI_123_Values<NVIC::IPR3, 30, 2, ReadWriteMode, NVICIPR3Base> ;
    using FieldValues = NVIC_IPR3_PRI_123_Values<NVIC::IPR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR3Pack  = Register<0xE000E40C, 32, ReadWriteMode, NVICIPR3Base, T...> ;

  struct NVICIPR4Base {} ;

  struct IPR4 : public RegisterBase<0xE000E410, 32, ReadWriteMode>
  {
    using PRI_160 = NVIC_IPR4_PRI_160_Values<NVIC::IPR4, 6, 2, ReadWriteMode, NVICIPR4Base> ;
    using PRI_161 = NVIC_IPR4_PRI_161_Values<NVIC::IPR4, 14, 2, ReadWriteMode, NVICIPR4Base> ;
    using PRI_162 = NVIC_IPR4_PRI_162_Values<NVIC::IPR4, 22, 2, ReadWriteMode, NVICIPR4Base> ;
    using PRI_163 = NVIC_IPR4_PRI_163_Values<NVIC::IPR4, 30, 2, ReadWriteMode, NVICIPR4Base> ;
    using FieldValues = NVIC_IPR4_PRI_163_Values<NVIC::IPR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR4Pack  = Register<0xE000E410, 32, ReadWriteMode, NVICIPR4Base, T...> ;

  struct NVICIPR5Base {} ;

  struct IPR5 : public RegisterBase<0xE000E414, 32, ReadWriteMode>
  {
    using PRI_200 = NVIC_IPR5_PRI_200_Values<NVIC::IPR5, 6, 2, ReadWriteMode, NVICIPR5Base> ;
    using PRI_201 = NVIC_IPR5_PRI_201_Values<NVIC::IPR5, 14, 2, ReadWriteMode, NVICIPR5Base> ;
    using PRI_202 = NVIC_IPR5_PRI_202_Values<NVIC::IPR5, 22, 2, ReadWriteMode, NVICIPR5Base> ;
    using PRI_203 = NVIC_IPR5_PRI_203_Values<NVIC::IPR5, 30, 2, ReadWriteMode, NVICIPR5Base> ;
    using FieldValues = NVIC_IPR5_PRI_203_Values<NVIC::IPR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR5Pack  = Register<0xE000E414, 32, ReadWriteMode, NVICIPR5Base, T...> ;

  struct NVICIPR6Base {} ;

  struct IPR6 : public RegisterBase<0xE000E418, 32, ReadWriteMode>
  {
    using PRI_240 = NVIC_IPR6_PRI_240_Values<NVIC::IPR6, 6, 2, ReadWriteMode, NVICIPR6Base> ;
    using PRI_241 = NVIC_IPR6_PRI_241_Values<NVIC::IPR6, 14, 2, ReadWriteMode, NVICIPR6Base> ;
    using PRI_242 = NVIC_IPR6_PRI_242_Values<NVIC::IPR6, 22, 2, ReadWriteMode, NVICIPR6Base> ;
    using PRI_243 = NVIC_IPR6_PRI_243_Values<NVIC::IPR6, 30, 2, ReadWriteMode, NVICIPR6Base> ;
    using FieldValues = NVIC_IPR6_PRI_243_Values<NVIC::IPR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR6Pack  = Register<0xE000E418, 32, ReadWriteMode, NVICIPR6Base, T...> ;

  struct NVICIPR7Base {} ;

  struct IPR7 : public RegisterBase<0xE000E41C, 32, ReadWriteMode>
  {
    using PRI_280 = NVIC_IPR7_PRI_280_Values<NVIC::IPR7, 6, 2, ReadWriteMode, NVICIPR7Base> ;
    using PRI_281 = NVIC_IPR7_PRI_281_Values<NVIC::IPR7, 14, 2, ReadWriteMode, NVICIPR7Base> ;
    using PRI_282 = NVIC_IPR7_PRI_282_Values<NVIC::IPR7, 22, 2, ReadWriteMode, NVICIPR7Base> ;
    using PRI_283 = NVIC_IPR7_PRI_283_Values<NVIC::IPR7, 30, 2, ReadWriteMode, NVICIPR7Base> ;
    using FieldValues = NVIC_IPR7_PRI_283_Values<NVIC::IPR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR7Pack  = Register<0xE000E41C, 32, ReadWriteMode, NVICIPR7Base, T...> ;

} ;

#endif //#if !defined(NVICREGISTERS_HPP)
