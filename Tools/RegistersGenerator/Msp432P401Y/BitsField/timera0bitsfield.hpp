/*******************************************************************************
* Filename      : timera0bitsfield.hpp
*
* Details       : Enumerations related with TIMER_A0 peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(TIMERA0ENUMS_HPP)
#define TIMERA0ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCTL_TAIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TAIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using TAIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCTL_TAIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TAIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using TAIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCTL_TACLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCTL_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using MC_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using MC_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCTL_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ID_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ID_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using ID_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using ID_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCTL_TASSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TASSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using TASSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using TASSEL_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using TASSEL_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxEX_TAIDEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxIV_TAIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_CCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CCIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_COV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using COV_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using COV_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using OUT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_CCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_CCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CCIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_OUTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_CAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CAP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_SCCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_SCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SCS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SCS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_CCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CCIS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using CCIS_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using CCIS_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCTL_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CM_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CM_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using CM_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using CM_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A_TAxCCR_TAxR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIMERA0ENUMS_HPP)
