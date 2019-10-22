/*******************************************************************************
* Filename      : mdrportifieldvalues.hpp
*
* Details       : Enumerations related with MDR_PORTI peripheral. This header
*                 file is auto-generated for MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRPORTIENUMS_HPP)
#define MDRPORTIENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_RXTX_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<MDR_PORTI_RXTX_Pin_%s_Values, BaseType, 0U> ;
  using High = FieldValue<MDR_PORTI_RXTX_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_OE_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IN = FieldValue<MDR_PORTI_OE_Pin_%s_Values, BaseType, 0U> ;
  using OUT = FieldValue<MDR_PORTI_OE_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_FUNC_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Port = FieldValue<MDR_PORTI_FUNC_Pin_%s_Values, BaseType, 0U> ;
  using Main = FieldValue<MDR_PORTI_FUNC_Pin_%s_Values, BaseType, 1U> ;
  using Alter = FieldValue<MDR_PORTI_FUNC_Pin_%s_Values, BaseType, 2U> ;
  using Override = FieldValue<MDR_PORTI_FUNC_Pin_%s_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_ANALOG_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Analog = FieldValue<MDR_PORTI_ANALOG_Pin_%s_Values, BaseType, 0U> ;
  using Digital = FieldValue<MDR_PORTI_ANALOG_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_PORTI_PULL_Down_Pin_0_Values, BaseType, 0U> ;
  using DOWN = FieldValue<MDR_PORTI_PULL_Down_Pin_0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_Down_Pin_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PULL_Down_Pin_15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PULL_Down_Pin_15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PULL_UP_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_PORTI_PULL_UP_Pin_%s_Values, BaseType, 0U> ;
  using UP = FieldValue<MDR_PORTI_PULL_UP_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Driver = FieldValue<MDR_PORTI_PD_Driver_Pin_0_Values, BaseType, 0U> ;
  using OpenDrain = FieldValue<MDR_PORTI_PD_Driver_Pin_0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Driver_Pin_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_PORTI_PD_Driver_Pin_15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_PORTI_PD_Driver_Pin_15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PD_Schmitt_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_PORTI_PD_Schmitt_Pin_%s_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_PORTI_PD_Schmitt_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_PWR_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_PORTI_PWR_Pin_%s_Values, BaseType, 0U> ;
  using Slow = FieldValue<MDR_PORTI_PWR_Pin_%s_Values, BaseType, 1U> ;
  using Fast = FieldValue<MDR_PORTI_PWR_Pin_%s_Values, BaseType, 2U> ;
  using MaxFast = FieldValue<MDR_PORTI_PWR_Pin_%s_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_GFEN_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_PORTI_GFEN_Pin_%s_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_PORTI_GFEN_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_SETTX_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_PORTI_SETTX_Pin_%s_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_PORTI_SETTX_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_CLRTX_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Inactive = FieldValue<MDR_PORTI_CLRTX_Pin_%s_Values, BaseType, 0U> ;
  using Selected = FieldValue<MDR_PORTI_CLRTX_Pin_%s_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_PORTI_RDTX_Pin_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<MDR_PORTI_RDTX_Pin_%s_Values, BaseType, 0U> ;
  using High = FieldValue<MDR_PORTI_RDTX_Pin_%s_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRPORTIENUMS_HPP)
