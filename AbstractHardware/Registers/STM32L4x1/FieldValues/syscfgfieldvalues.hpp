/*******************************************************************************
* Filename      : syscfgfieldvalues.hpp
*
* Details       : Enumerations related with SYSCFG peripheral. This header file
*                 is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(SYSCFGENUMS_HPP)
#define SYSCFGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_MEMRMP_FB_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_MEMRMP_FB_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_MEMRMP_FB_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_MEMRMP_QFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_MEMRMP_QFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_MEMRMP_QFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_MEMRMP_MEM_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_FPU_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C3_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C3_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C3_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C2_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C2_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C2_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C1_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C1_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C1_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB9_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB9_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB9_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB8_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB8_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB8_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB7_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB7_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB7_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB6_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB6_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB6_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_BOOSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_BOOSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_BOOSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_FWDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_FWDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_FWDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SCSR_SRAM2BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SCSR_SRAM2BSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SCSR_SRAM2BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SCSR_SRAM2ER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SCSR_SRAM2ER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SCSR_SRAM2ER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_SPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_SPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_SPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_ECCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_ECCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_ECCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_PVDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_PVDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_PVDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_SPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_SPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_SPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_CLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_CLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_CLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P31WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P31WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P31WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P30WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P30WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P30WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P29WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P29WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P29WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P28WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P28WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P28WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P27WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P27WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P27WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P26WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P26WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P26WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P25WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P25WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P25WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P24WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P24WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P24WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P23WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P23WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P23WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P22WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P22WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P22WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P21WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P21WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P21WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P20WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P20WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P20WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P19WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P19WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P19WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P18WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P18WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P18WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P17WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P17WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P17WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P16WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P16WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P16WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P15WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P15WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P15WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P14WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P14WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P14WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P13WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P13WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P13WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P12WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P12WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P12WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P11WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P11WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P11WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P10WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P10WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P10WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P9WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P9WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P9WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P8WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P8WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P8WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P7WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P7WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P7WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P6WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P6WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P6WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P5WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P5WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P5WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P4WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P4WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P4WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P3WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P3WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P3WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P2WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P2WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P2WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P1WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P1WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P1WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_P0WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_P0WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_P0WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SKR_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SYSCFGENUMS_HPP)
