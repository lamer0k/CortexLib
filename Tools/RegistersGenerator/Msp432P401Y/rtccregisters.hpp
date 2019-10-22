/*******************************************************************************
* Filename      : rtccregisters.hpp
*
* Details       : RTC_C. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(RTCCREGISTERS_HPP)
#define RTCCREGISTERS_HPP

#include "rtccbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC_C
{
  struct RTC_CRTCCTL0Base {} ;

  struct RTCCTL0 : public RegisterBase<0x40004400, 16, ReadWriteMode>
  {
    using RTCRDYIFG = RTC_C_RTCCTL_RTCRDYIFG_Values<RTC_C::RTCCTL0, 0, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCAIFG = RTC_C_RTCCTL_RTCAIFG_Values<RTC_C::RTCCTL0, 1, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCTEVIFG = RTC_C_RTCCTL_RTCTEVIFG_Values<RTC_C::RTCCTL0, 2, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCOFIFG = RTC_C_RTCCTL_RTCOFIFG_Values<RTC_C::RTCCTL0, 3, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCRDYIE = RTC_C_RTCCTL_RTCRDYIE_Values<RTC_C::RTCCTL0, 4, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCAIE = RTC_C_RTCCTL_RTCAIE_Values<RTC_C::RTCCTL0, 5, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCTEVIE = RTC_C_RTCCTL_RTCTEVIE_Values<RTC_C::RTCCTL0, 6, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCOFIE = RTC_C_RTCCTL_RTCOFIE_Values<RTC_C::RTCCTL0, 7, 1, ReadWriteMode, RTC_CRTCCTL0Base> ;
    using RTCKEY = RTC_C_RTCCTL_RTCKEY_Values<RTC_C::RTCCTL0, 8, 8, ReadWriteMode, RTC_CRTCCTL0Base> ;
  } ;

  template<typename... T> 
  using RTCCTL0Pack  = Register<0x40004400, 16, ReadWriteMode, RTC_CRTCCTL0Base, T...> ;

  struct RTC_CRTCCTL13Base {} ;

  struct RTCCTL13 : public RegisterBase<0x40004402, 16, ReadWriteMode>
  {
    using RTCTEV = RTC_C_RTCCTL_RTCTEV_Values<RTC_C::RTCCTL13, 0, 2, ReadWriteMode, RTC_CRTCCTL13Base> ;
    using RTCSSEL = RTC_C_RTCCTL_RTCSSEL_Values<RTC_C::RTCCTL13, 2, 2, ReadWriteMode, RTC_CRTCCTL13Base> ;
    using RTCRDY = RTC_C_RTCCTL_RTCRDY_Values<RTC_C::RTCCTL13, 4, 1, ReadMode, RTC_CRTCCTL13Base> ;
    using RTCMODE = RTC_C_RTCCTL_RTCMODE_Values<RTC_C::RTCCTL13, 5, 1, ReadMode, RTC_CRTCCTL13Base> ;
    using RTCHOLD = RTC_C_RTCCTL_RTCHOLD_Values<RTC_C::RTCCTL13, 6, 1, ReadWriteMode, RTC_CRTCCTL13Base> ;
    using RTCBCD = RTC_C_RTCCTL_RTCBCD_Values<RTC_C::RTCCTL13, 7, 1, ReadWriteMode, RTC_CRTCCTL13Base> ;
    using RTCCALF = RTC_C_RTCCTL_RTCCALF_Values<RTC_C::RTCCTL13, 8, 2, ReadWriteMode, RTC_CRTCCTL13Base> ;
  } ;

  template<typename... T> 
  using RTCCTL13Pack  = Register<0x40004402, 16, ReadWriteMode, RTC_CRTCCTL13Base, T...> ;

  struct RTC_CRTCOCALBase {} ;

  struct RTCOCAL : public RegisterBase<0x40004404, 16, ReadWriteMode>
  {
    using RTCOCALField = RTC_C_RTCOCAL_RTCOCAL_Values<RTC_C::RTCOCAL, 0, 8, ReadWriteMode, RTC_CRTCOCALBase> ;
    using RTCOCALS = RTC_C_RTCOCAL_RTCOCALS_Values<RTC_C::RTCOCAL, 15, 1, ReadWriteMode, RTC_CRTCOCALBase> ;
  } ;

  template<typename... T> 
  using RTCOCALPack  = Register<0x40004404, 16, ReadWriteMode, RTC_CRTCOCALBase, T...> ;

  struct RTC_CRTCTCMPBase {} ;

  struct RTCTCMP : public RegisterBase<0x40004406, 16, ReadWriteMode>
  {
    using RTCTCMPField = RTC_C_RTCTCMP_RTCTCMP_Values<RTC_C::RTCTCMP, 0, 8, ReadWriteMode, RTC_CRTCTCMPBase> ;
    using RTCTCOK = RTC_C_RTCTCMP_RTCTCOK_Values<RTC_C::RTCTCMP, 13, 1, ReadMode, RTC_CRTCTCMPBase> ;
    using RTCTCRDY = RTC_C_RTCTCMP_RTCTCRDY_Values<RTC_C::RTCTCMP, 14, 1, ReadMode, RTC_CRTCTCMPBase> ;
    using RTCTCMPS = RTC_C_RTCTCMP_RTCTCMPS_Values<RTC_C::RTCTCMP, 15, 1, ReadWriteMode, RTC_CRTCTCMPBase> ;
  } ;

  template<typename... T> 
  using RTCTCMPPack  = Register<0x40004406, 16, ReadWriteMode, RTC_CRTCTCMPBase, T...> ;

  struct RTC_CRTCPS0CTLBase {} ;

  struct RTCPS0CTL : public RegisterBase<0x40004408, 16, ReadWriteMode>
  {
    using RT0PSIFG = RTC_C_RTCPSCTL_RTPSIFG_Values<RTC_C::RTCPS0CTL, 0, 1, ReadWriteMode, RTC_CRTCPS0CTLBase> ;
    using RT0PSIE = RTC_C_RTCPSCTL_RTPSIE_Values<RTC_C::RTCPS0CTL, 1, 1, ReadWriteMode, RTC_CRTCPS0CTLBase> ;
    using RT0IP = RTC_C_RTCPSCTL_RTIP_Values<RTC_C::RTCPS0CTL, 2, 3, ReadWriteMode, RTC_CRTCPS0CTLBase> ;
  } ;

  template<typename... T> 
  using RTCPS0CTLPack  = Register<0x40004408, 16, ReadWriteMode, RTC_CRTCPS0CTLBase, T...> ;

  struct RTC_CRTCPS1CTLBase {} ;

  struct RTCPS1CTL : public RegisterBase<0x4000440A, 16, ReadWriteMode>
  {
    using RT1PSIFG = RTC_C_RTCPSCTL_RTPSIFG_Values<RTC_C::RTCPS1CTL, 0, 1, ReadWriteMode, RTC_CRTCPS1CTLBase> ;
    using RT1PSIE = RTC_C_RTCPSCTL_RTPSIE_Values<RTC_C::RTCPS1CTL, 1, 1, ReadWriteMode, RTC_CRTCPS1CTLBase> ;
    using RT1IP = RTC_C_RTCPSCTL_RTIP_Values<RTC_C::RTCPS1CTL, 2, 3, ReadWriteMode, RTC_CRTCPS1CTLBase> ;
  } ;

  template<typename... T> 
  using RTCPS1CTLPack  = Register<0x4000440A, 16, ReadWriteMode, RTC_CRTCPS1CTLBase, T...> ;

  struct RTC_CRTCPSBase {} ;

  struct RTCPS : public RegisterBase<0x4000440C, 16, ReadWriteMode>
  {
    using RT0PS = RTC_C_RTCPS_RTPS_Values<RTC_C::RTCPS, 0, 8, ReadWriteMode, RTC_CRTCPSBase> ;
    using RT1PS = RTC_C_RTCPS_RTPS_Values<RTC_C::RTCPS, 8, 8, ReadWriteMode, RTC_CRTCPSBase> ;
  } ;

  template<typename... T> 
  using RTCPSPack  = Register<0x4000440C, 16, ReadWriteMode, RTC_CRTCPSBase, T...> ;

  struct RTC_CRTCIVBase {} ;

  struct RTCIV : public RegisterBase<0x4000440E, 16, ReadMode>
  {
    using RTCIVField = RTC_C_RTCIV_RTCIV_Values<RTC_C::RTCIV, 0, 16, ReadMode, RTC_CRTCIVBase> ;
  } ;

  template<typename... T> 
  using RTCIVPack  = Register<0x4000440E, 16, ReadMode, RTC_CRTCIVBase, T...> ;

  struct RTC_CRTCTIM0Base {} ;

  struct RTCTIM0 : public RegisterBase<0x40004410, 16, ReadWriteMode>
  {
    using Seconds = RTC_C_RTCTIM_Seconds_Values<RTC_C::RTCTIM0, 0, 6, ReadWriteMode, RTC_CRTCTIM0Base> ;
    using Minutes = RTC_C_RTCTIM_Minutes_Values<RTC_C::RTCTIM0, 8, 6, ReadWriteMode, RTC_CRTCTIM0Base> ;
  } ;

  template<typename... T> 
  using RTCTIM0Pack  = Register<0x40004410, 16, ReadWriteMode, RTC_CRTCTIM0Base, T...> ;

  struct RTC_CRTCTIM1Base {} ;

  struct RTCTIM1 : public RegisterBase<0x40004412, 16, ReadWriteMode>
  {
    using Hours = RTC_C_RTCTIM_Hours_Values<RTC_C::RTCTIM1, 0, 5, ReadWriteMode, RTC_CRTCTIM1Base> ;
    using DayofWeek = RTC_C_RTCTIM_DayofWeek_Values<RTC_C::RTCTIM1, 8, 3, ReadWriteMode, RTC_CRTCTIM1Base> ;
  } ;

  template<typename... T> 
  using RTCTIM1Pack  = Register<0x40004412, 16, ReadWriteMode, RTC_CRTCTIM1Base, T...> ;

  struct RTC_CRTCDATEBase {} ;

  struct RTCDATE : public RegisterBase<0x40004414, 16, ReadWriteMode>
  {
    using Day = RTC_C_RTCDATE_Day_Values<RTC_C::RTCDATE, 0, 5, ReadWriteMode, RTC_CRTCDATEBase> ;
    using Month = RTC_C_RTCDATE_Month_Values<RTC_C::RTCDATE, 8, 4, ReadWriteMode, RTC_CRTCDATEBase> ;
  } ;

  template<typename... T> 
  using RTCDATEPack  = Register<0x40004414, 16, ReadWriteMode, RTC_CRTCDATEBase, T...> ;

  struct RTC_CRTCYEARBase {} ;

  struct RTCYEAR : public RegisterBase<0x40004416, 16, ReadWriteMode>
  {
    using YearLowByte = RTC_C_RTCYEAR_YearLowByte_Values<RTC_C::RTCYEAR, 0, 8, ReadWriteMode, RTC_CRTCYEARBase> ;
    using YearHighByte = RTC_C_RTCYEAR_YearHighByte_Values<RTC_C::RTCYEAR, 8, 4, ReadWriteMode, RTC_CRTCYEARBase> ;
  } ;

  template<typename... T> 
  using RTCYEARPack  = Register<0x40004416, 16, ReadWriteMode, RTC_CRTCYEARBase, T...> ;

  struct RTC_CRTCAMINHRBase {} ;

  struct RTCAMINHR : public RegisterBase<0x40004418, 16, ReadWriteMode>
  {
    using Minutes = RTC_C_RTCAMINHR_Minutes_Values<RTC_C::RTCAMINHR, 0, 6, ReadWriteMode, RTC_CRTCAMINHRBase> ;
    using MINAE = RTC_C_RTCAMINHR_MINAE_Values<RTC_C::RTCAMINHR, 7, 1, ReadWriteMode, RTC_CRTCAMINHRBase> ;
    using Hours = RTC_C_RTCAMINHR_Hours_Values<RTC_C::RTCAMINHR, 8, 5, ReadWriteMode, RTC_CRTCAMINHRBase> ;
    using HOURAE = RTC_C_RTCAMINHR_HOURAE_Values<RTC_C::RTCAMINHR, 15, 1, ReadWriteMode, RTC_CRTCAMINHRBase> ;
  } ;

  template<typename... T> 
  using RTCAMINHRPack  = Register<0x40004418, 16, ReadWriteMode, RTC_CRTCAMINHRBase, T...> ;

  struct RTC_CRTCADOWDAYBase {} ;

  struct RTCADOWDAY : public RegisterBase<0x4000441A, 16, ReadWriteMode>
  {
    using DayofWeek = RTC_C_RTCADOWDAY_DayofWeek_Values<RTC_C::RTCADOWDAY, 0, 3, ReadWriteMode, RTC_CRTCADOWDAYBase> ;
    using DOWAE = RTC_C_RTCADOWDAY_DOWAE_Values<RTC_C::RTCADOWDAY, 7, 1, ReadWriteMode, RTC_CRTCADOWDAYBase> ;
    using DayofMonth = RTC_C_RTCADOWDAY_DayofMonth_Values<RTC_C::RTCADOWDAY, 8, 5, ReadWriteMode, RTC_CRTCADOWDAYBase> ;
    using DAYAE = RTC_C_RTCADOWDAY_DAYAE_Values<RTC_C::RTCADOWDAY, 15, 1, ReadWriteMode, RTC_CRTCADOWDAYBase> ;
  } ;

  template<typename... T> 
  using RTCADOWDAYPack  = Register<0x4000441A, 16, ReadWriteMode, RTC_CRTCADOWDAYBase, T...> ;

  struct RTC_CRTCBIN2BCDBase {} ;

  struct RTCBIN2BCD : public RegisterBase<0x4000441C, 16, ReadWriteMode>
  {
    using BIN2BCD = RTC_C_RTCBINBCD_BINBCD_Values<RTC_C::RTCBIN2BCD, 0, 16, ReadWriteMode, RTC_CRTCBIN2BCDBase> ;
  } ;

  template<typename... T> 
  using RTCBIN2BCDPack  = Register<0x4000441C, 16, ReadWriteMode, RTC_CRTCBIN2BCDBase, T...> ;

  struct RTC_CRTCBCD2BINBase {} ;

  struct RTCBCD2BIN : public RegisterBase<0x4000441E, 16, ReadWriteMode>
  {
    using BCD2BIN = RTC_C_RTCBCDBIN_BCDBIN_Values<RTC_C::RTCBCD2BIN, 0, 16, ReadWriteMode, RTC_CRTCBCD2BINBase> ;
  } ;

  template<typename... T> 
  using RTCBCD2BINPack  = Register<0x4000441E, 16, ReadWriteMode, RTC_CRTCBCD2BINBase, T...> ;

} ;

#endif //#if !defined(RTCCREGISTERS_HPP)
