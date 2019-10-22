/*******************************************************************************
* Filename      : dwtbitsfield.hpp
*
* Details       : Enumerations related with DWT peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(DWTENUMS_HPP)
#define DWTENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CYCCNTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_POSTPRESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_POSTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CYCTAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_SYNCTAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b01 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using en_0b10 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using en_0b11 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_PCSAMPLEENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_EXCTRCENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CPIEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_EXCEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_SLEEPEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_LSUEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_FOLDEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CYCEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_NOPRFCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_NOCYCCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CYCCNT_CYCCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CPICNT_CPICNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_EXCCNT_EXCCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_SLEEPCNT_SLEEPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_LSUCNT_LSUCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FOLDCNT_FOLDCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_PCSR_EIASAMPLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_COMP_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_MASK_MASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_FUNCTION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_EMITRANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_DATAVMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_LNKENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_DATAVSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using en_0b01 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using en_0b10 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using en_0b11 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_DATAVADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_MATCHED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION_CYCMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(DWTENUMS_HPP)
