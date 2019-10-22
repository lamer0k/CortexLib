/*******************************************************************************
* Filename      : rtccbitsfield.hpp
*
* Details       : Enumerations related with RTC_C peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(RTCCENUMS_HPP)
#define RTCCENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCRDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCRDYIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCRDYIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCAIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCAIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCAIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCTEVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTEVIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCTEVIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCOFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCOFIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCOFIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCRDYIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCRDYIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCAIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCAIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCAIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCTEVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTEVIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCTEVIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCOFIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCOFIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCTEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTEV_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCTEV_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using RTCTEV_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using RTCTEV_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCSSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCRDY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCRDY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCMODE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCHOLD_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCHOLD_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCBCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCBCD_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCBCD_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL_RTCCALF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCCALF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCCALF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using RTCCALF_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using RTCCALF_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCOCAL_RTCOCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCOCAL_RTCOCALS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCOCALS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCOCALS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCOK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTCOK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCTCOK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCMPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTCMPS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RTCTCMPS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPSCTL_RTPSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT0PSIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RT0PSIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPSCTL_RTPSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT0PSIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RT0PSIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPSCTL_RTIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS_RTPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCIV_RTCIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM_Seconds_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM_Minutes_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM_Hours_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM_DayofWeek_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCDATE_Day_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCDATE_Month_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCYEAR_YearLowByte_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCYEAR_YearHighByte_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_Minutes_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_MINAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_Hours_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_HOURAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DayofWeek_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DOWAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DayofMonth_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DAYAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCBINBCD_BINBCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCBCDBIN_BCDBIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RTCCENUMS_HPP)
