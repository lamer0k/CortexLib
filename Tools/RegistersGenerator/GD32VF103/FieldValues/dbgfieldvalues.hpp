/*******************************************************************************
* Filename      : dbgfieldvalues.hpp
*
* Details       : Enumerations related with DBG peripheral. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(DBGENUMS_HPP)
#define DBGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_ID_ID_CODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_SLP_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_SLP_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_SLP_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_DSLP_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_DSLP_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_DSLP_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_STB_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_STB_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_STB_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_FWDGT_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_FWDGT_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_FWDGT_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_WWDGT_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_WWDGT_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_WWDGT_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_TIMER0_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_TIMER0_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_TIMER0_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_TIMER1_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_TIMER1_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_TIMER1_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_TIMER2_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_TIMER2_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_TIMER2_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_TIMER3_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_TIMER3_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_TIMER3_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_CAN0_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_CAN0_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_CAN0_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_I2C0_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_I2C0_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_I2C0_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_I2C1_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_I2C1_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_I2C1_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_TIMER4_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_TIMER4_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_TIMER4_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_TIMER5_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_TIMER5_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_TIMER5_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_TIMER6_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_TIMER6_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_TIMER6_HOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBG_CTL_CAN1_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBG_CTL_CAN1_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBG_CTL_CAN1_HOLD_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DBGENUMS_HPP)
