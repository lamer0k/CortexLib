/*******************************************************************************
* Filename      : gpiocfieldvalues.hpp
*
* Details       : Enumerations related with GPIOC peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(GPIOCENUMS_HPP)
#define GPIOCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct GPIOC_CTL_MD_Values: public RegisterField<Reg, offset, size, AccessMode>
{
    using AnalogInput = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0000> ;
    using FloatInput = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0100> ;
    using InputPullUp = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b1000> ;

    using GpioOutputPushPull10Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0001> ;
    using GpioOutputPushPull2Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0010> ;
    using GpioOutputPushPull50Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0011> ;

    using GpioOutputOpenDrain10Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0101> ;
    using GpioOutputOpenDrain2Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0110> ;
    using GpioOutputOpenDrain50Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b0111> ;

    using AfioOutputPushPull10Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b1001> ;
    using AfioOutputPushPull2Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b1010> ;
    using AfioOutputPushPull50Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b1011> ;

    using AfioOutputOpenDrain10Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b1101> ;
    using AfioOutputOpenDrain2Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b1110> ;
    using AfioOutputOpenDrain50Mhz = FieldValue<GPIOC_CTL_MD_Values, BaseType, 0b1111> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_ISTAT_ISTAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_ISTAT_ISTAT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_ISTAT_ISTAT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_OCTL_OCTL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_OCTL_OCTL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_OCTL_OCTL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_CR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_CR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_CR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BOP_BOP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BOP_BOP0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BOP_BOP0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_BC_CR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_BC_CR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_BC_CR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LKK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LKK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LKK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct GPIOC_LOCK_LK0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<GPIOC_LOCK_LK0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<GPIOC_LOCK_LK0_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(GPIOCENUMS_HPP)
