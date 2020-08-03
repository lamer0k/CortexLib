/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real-time clock. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(RTCREGISTERS_HPP)
#define RTCREGISTERS_HPP

#include "rtcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC
{
  struct RTCINTENBase {} ;

  struct INTEN : public RegisterBase<0x40002800, 32, ReadWriteMode>
  {
    using OVIE = RTC_INTEN_OVIE_Values<RTC::INTEN, 2, 1, ReadWriteMode, RTCINTENBase> ;
    using ALRMIE = RTC_INTEN_ALRMIE_Values<RTC::INTEN, 1, 1, ReadWriteMode, RTCINTENBase> ;
    using SCIE = RTC_INTEN_SCIE_Values<RTC::INTEN, 0, 1, ReadWriteMode, RTCINTENBase> ;
    using FieldValues = RTC_INTEN_SCIE_Values<RTC::INTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENPack  = Register<0x40002800, 32, ReadWriteMode, RTCINTENBase, T...> ;

  struct RTCCTLBase {} ;

  struct CTL : public RegisterBase<0x40002804, 32, ReadWriteMode>
  {
    using LWOFF = RTC_CTL_LWOFF_Values<RTC::CTL, 5, 1, ReadWriteMode, RTCCTLBase> ;
    using CMF = RTC_CTL_CMF_Values<RTC::CTL, 4, 1, ReadWriteMode, RTCCTLBase> ;
    using RSYNF = RTC_CTL_RSYNF_Values<RTC::CTL, 3, 1, ReadWriteMode, RTCCTLBase> ;
    using OVIF = RTC_CTL_OVIF_Values<RTC::CTL, 2, 1, ReadWriteMode, RTCCTLBase> ;
    using ALRMIF = RTC_CTL_ALRMIF_Values<RTC::CTL, 1, 1, ReadWriteMode, RTCCTLBase> ;
    using SCIF = RTC_CTL_SCIF_Values<RTC::CTL, 0, 1, ReadWriteMode, RTCCTLBase> ;
    using FieldValues = RTC_CTL_SCIF_Values<RTC::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40002804, 32, ReadWriteMode, RTCCTLBase, T...> ;

  struct RTCPSCHBase {} ;

  struct PSCH : public RegisterBase<0x40002808, 32, ReadWriteMode>
  {
    using PSC = RTC_PSCH_PSC_Values<RTC::PSCH, 0, 4, WriteMode, RTCPSCHBase> ;
    using FieldValues = RTC_PSCH_PSC_Values<RTC::PSCH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCHPack  = Register<0x40002808, 32, ReadWriteMode, RTCPSCHBase, T...> ;

  struct RTCPSCLBase {} ;

  struct PSCL : public RegisterBase<0x4000280C, 32, ReadWriteMode>
  {
    using PSC = RTC_PSCL_PSC_Values<RTC::PSCL, 0, 16, WriteMode, RTCPSCLBase> ;
    using FieldValues = RTC_PSCL_PSC_Values<RTC::PSCL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCLPack  = Register<0x4000280C, 32, ReadWriteMode, RTCPSCLBase, T...> ;

  struct RTCDIVHBase {} ;

  struct DIVH : public RegisterBase<0x40002810, 32, ReadMode>
  {
    using DIV = RTC_DIVH_DIV_Values<RTC::DIVH, 0, 4, ReadMode, RTCDIVHBase> ;
    using FieldValues = RTC_DIVH_DIV_Values<RTC::DIVH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIVHPack  = Register<0x40002810, 32, ReadMode, RTCDIVHBase, T...> ;

  struct RTCDIVLBase {} ;

  struct DIVL : public RegisterBase<0x40002814, 32, ReadMode>
  {
    using DIV = RTC_DIVL_DIV_Values<RTC::DIVL, 0, 16, ReadMode, RTCDIVLBase> ;
    using FieldValues = RTC_DIVL_DIV_Values<RTC::DIVL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIVLPack  = Register<0x40002814, 32, ReadMode, RTCDIVLBase, T...> ;

  struct RTCCNTHBase {} ;

  struct CNTH : public RegisterBase<0x40002818, 32, ReadWriteMode>
  {
    using CNT = RTC_CNTH_CNT_Values<RTC::CNTH, 0, 16, ReadWriteMode, RTCCNTHBase> ;
    using FieldValues = RTC_CNTH_CNT_Values<RTC::CNTH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTHPack  = Register<0x40002818, 32, ReadWriteMode, RTCCNTHBase, T...> ;

  struct RTCCNTLBase {} ;

  struct CNTL : public RegisterBase<0x4000281C, 32, ReadWriteMode>
  {
    using CNT = RTC_CNTL_CNT_Values<RTC::CNTL, 0, 16, ReadWriteMode, RTCCNTLBase> ;
    using FieldValues = RTC_CNTL_CNT_Values<RTC::CNTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTLPack  = Register<0x4000281C, 32, ReadWriteMode, RTCCNTLBase, T...> ;

  struct RTCALRMHBase {} ;

  struct ALRMH : public RegisterBase<0x40002820, 32, WriteMode>
  {
    using ALRM = RTC_ALRMH_ALRM_Values<RTC::ALRMH, 0, 16, WriteMode, RTCALRMHBase> ;
    using FieldValues = RTC_ALRMH_ALRM_Values<RTC::ALRMH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMHPack  = Register<0x40002820, 32, WriteMode, RTCALRMHBase, T...> ;

  struct RTCALRMLBase {} ;

  struct ALRML : public RegisterBase<0x40002824, 32, WriteMode>
  {
    using ALRM = RTC_ALRML_ALRM_Values<RTC::ALRML, 0, 16, WriteMode, RTCALRMLBase> ;
    using FieldValues = RTC_ALRML_ALRM_Values<RTC::ALRML, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMLPack  = Register<0x40002824, 32, WriteMode, RTCALRMLBase, T...> ;

} ;

#endif //#if !defined(RTCREGISTERS_HPP)
