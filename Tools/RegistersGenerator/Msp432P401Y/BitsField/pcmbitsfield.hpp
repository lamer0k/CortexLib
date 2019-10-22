/*******************************************************************************
* Filename      : pcmbitsfield.hpp
*
* Details       : Enumerations related with PCM peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(PCMENUMS_HPP)
#define PCMENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_AMR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_LPMR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_CPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_PCMKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_LOCKLPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LOCKLPM5_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LOCKLPM5_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_LOCKBKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LOCKBKUP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LOCKBKUP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_FORCE_LPM_ENTRY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FORCE_LPM_ENTRY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FORCE_LPM_ENTRY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL_PMR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_LPM_INVALID_TR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LPM_INVALID_TR_IE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LPM_INVALID_TR_IE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_LPM_INVALID_CLK_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LPM_INVALID_CLK_IE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LPM_INVALID_CLK_IE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_AM_INVALID_TR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AM_INVALID_TR_IE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AM_INVALID_TR_IE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_DCDC_ERROR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCDC_ERROR_IE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCDC_ERROR_IE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_LPM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_LPM_INVALID_CLK_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_AM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_DCDC_ERROR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_LPM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_LPM_INVALID_CLK_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_AM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_DCDC_ERROR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(PCMENUMS_HPP)
