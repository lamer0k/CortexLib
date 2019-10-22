/*******************************************************************************
* Filename      : fpbbitsfield.hpp
*
* Details       : Enumerations related with FPB peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(FPBENUMS_HPP)
#define FPBENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_NUM_CODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_NUM_LIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_REMAP_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b01 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using en_0b10 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using en_0b11 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

#endif //#if !defined(FPBENUMS_HPP)
