/*******************************************************************************
* Filename      : timer32bitsfield.hpp
*
* Details       : Enumerations related with TIMER32 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(TIMER32ENUMS_HPP)
#define TIMER32ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TLOAD_LOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TVALUE_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TCONTROL_ONESHOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ONESHOT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ONESHOT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TCONTROL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SIZE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SIZE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TCONTROL_PRESCALE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PRESCALE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PRESCALE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using PRESCALE_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TCONTROL_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using IE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TCONTROL_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MODE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TCONTROL_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ENABLE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ENABLE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TINTCLR_INTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TRIS_RAW_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TMIS_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_TBGLOAD_BGLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIMER32ENUMS_HPP)
