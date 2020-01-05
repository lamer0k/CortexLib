/*******************************************************************************
* Filename      : ethernetptpregisters.hpp
*
* Details       : Ethernet: Precision time protocol. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETPTPREGISTERS_HPP)
#define ETHERNETPTPREGISTERS_HPP

#include "ethernetptpfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Ethernet_PTP
{
  struct Ethernet_PTPPTPTSCRBase {} ;

  struct PTPTSCR : public RegisterBase<0x40028700, 32, ReadWriteMode>
  {
    using TSE = Ethernet_PTP_PTPTSCR_TSE_Values<Ethernet_PTP::PTPTSCR, 0, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSFCU = Ethernet_PTP_PTPTSCR_TSFCU_Values<Ethernet_PTP::PTPTSCR, 1, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSPTPPSV2E = Ethernet_PTP_PTPTSCR_TSPTPPSV2E_Values<Ethernet_PTP::PTPTSCR, 10, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSPTPOEFE = Ethernet_PTP_PTPTSCR_TSSPTPOEFE_Values<Ethernet_PTP::PTPTSCR, 11, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSIPV6FE = Ethernet_PTP_PTPTSCR_TSSIPV6FE_Values<Ethernet_PTP::PTPTSCR, 12, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSIPV4FE = Ethernet_PTP_PTPTSCR_TSSIPV4FE_Values<Ethernet_PTP::PTPTSCR, 13, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSEME = Ethernet_PTP_PTPTSCR_TSSEME_Values<Ethernet_PTP::PTPTSCR, 14, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSMRME = Ethernet_PTP_PTPTSCR_TSSMRME_Values<Ethernet_PTP::PTPTSCR, 15, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSCNT = Ethernet_PTP_PTPTSCR_TSCNT_Values<Ethernet_PTP::PTPTSCR, 16, 2, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSPFFMAE = Ethernet_PTP_PTPTSCR_TSPFFMAE_Values<Ethernet_PTP::PTPTSCR, 18, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSTI = Ethernet_PTP_PTPTSCR_TSSTI_Values<Ethernet_PTP::PTPTSCR, 2, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSTU = Ethernet_PTP_PTPTSCR_TSSTU_Values<Ethernet_PTP::PTPTSCR, 3, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSITE = Ethernet_PTP_PTPTSCR_TSITE_Values<Ethernet_PTP::PTPTSCR, 4, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TTSARU = Ethernet_PTP_PTPTSCR_TTSARU_Values<Ethernet_PTP::PTPTSCR, 5, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSARFE = Ethernet_PTP_PTPTSCR_TSSARFE_Values<Ethernet_PTP::PTPTSCR, 8, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using TSSSR = Ethernet_PTP_PTPTSCR_TSSSR_Values<Ethernet_PTP::PTPTSCR, 9, 1, ReadWriteMode, Ethernet_PTPPTPTSCRBase> ;
    using FieldValues = Ethernet_PTP_PTPTSCR_TSSSR_Values<Ethernet_PTP::PTPTSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTSCRPack  = Register<0x40028700, 32, ReadWriteMode, Ethernet_PTPPTPTSCRBase, T...> ;

  struct Ethernet_PTPPTPSSIRBase {} ;

  struct PTPSSIR : public RegisterBase<0x40028704, 32, ReadWriteMode>
  {
    using STSSI = Ethernet_PTP_PTPSSIR_STSSI_Values<Ethernet_PTP::PTPSSIR, 0, 8, ReadWriteMode, Ethernet_PTPPTPSSIRBase> ;
    using FieldValues = Ethernet_PTP_PTPSSIR_STSSI_Values<Ethernet_PTP::PTPSSIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPSSIRPack  = Register<0x40028704, 32, ReadWriteMode, Ethernet_PTPPTPSSIRBase, T...> ;

  struct Ethernet_PTPPTPTSHRBase {} ;

  struct PTPTSHR : public RegisterBase<0x40028708, 32, ReadMode>
  {
    using STS = Ethernet_PTP_PTPTSHR_STS_Values<Ethernet_PTP::PTPTSHR, 0, 32, ReadMode, Ethernet_PTPPTPTSHRBase> ;
    using FieldValues = Ethernet_PTP_PTPTSHR_STS_Values<Ethernet_PTP::PTPTSHR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTSHRPack  = Register<0x40028708, 32, ReadMode, Ethernet_PTPPTPTSHRBase, T...> ;

  struct Ethernet_PTPPTPTSLRBase {} ;

  struct PTPTSLR : public RegisterBase<0x4002870C, 32, ReadMode>
  {
    using STSS = Ethernet_PTP_PTPTSLR_STSS_Values<Ethernet_PTP::PTPTSLR, 0, 31, ReadMode, Ethernet_PTPPTPTSLRBase> ;
    using STPNS = Ethernet_PTP_PTPTSLR_STPNS_Values<Ethernet_PTP::PTPTSLR, 31, 1, ReadMode, Ethernet_PTPPTPTSLRBase> ;
    using FieldValues = Ethernet_PTP_PTPTSLR_STPNS_Values<Ethernet_PTP::PTPTSLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTSLRPack  = Register<0x4002870C, 32, ReadMode, Ethernet_PTPPTPTSLRBase, T...> ;

  struct Ethernet_PTPPTPTSHURBase {} ;

  struct PTPTSHUR : public RegisterBase<0x40028710, 32, ReadWriteMode>
  {
    using TSUS = Ethernet_PTP_PTPTSHUR_TSUS_Values<Ethernet_PTP::PTPTSHUR, 0, 32, ReadWriteMode, Ethernet_PTPPTPTSHURBase> ;
    using FieldValues = Ethernet_PTP_PTPTSHUR_TSUS_Values<Ethernet_PTP::PTPTSHUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTSHURPack  = Register<0x40028710, 32, ReadWriteMode, Ethernet_PTPPTPTSHURBase, T...> ;

  struct Ethernet_PTPPTPTSLURBase {} ;

  struct PTPTSLUR : public RegisterBase<0x40028714, 32, ReadWriteMode>
  {
    using TSUSS = Ethernet_PTP_PTPTSLUR_TSUSS_Values<Ethernet_PTP::PTPTSLUR, 0, 31, ReadWriteMode, Ethernet_PTPPTPTSLURBase> ;
    using TSUPNS = Ethernet_PTP_PTPTSLUR_TSUPNS_Values<Ethernet_PTP::PTPTSLUR, 31, 1, ReadWriteMode, Ethernet_PTPPTPTSLURBase> ;
    using FieldValues = Ethernet_PTP_PTPTSLUR_TSUPNS_Values<Ethernet_PTP::PTPTSLUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTSLURPack  = Register<0x40028714, 32, ReadWriteMode, Ethernet_PTPPTPTSLURBase, T...> ;

  struct Ethernet_PTPPTPTSARBase {} ;

  struct PTPTSAR : public RegisterBase<0x40028718, 32, ReadWriteMode>
  {
    using TSA = Ethernet_PTP_PTPTSAR_TSA_Values<Ethernet_PTP::PTPTSAR, 0, 32, ReadWriteMode, Ethernet_PTPPTPTSARBase> ;
    using FieldValues = Ethernet_PTP_PTPTSAR_TSA_Values<Ethernet_PTP::PTPTSAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTSARPack  = Register<0x40028718, 32, ReadWriteMode, Ethernet_PTPPTPTSARBase, T...> ;

  struct Ethernet_PTPPTPTTHRBase {} ;

  struct PTPTTHR : public RegisterBase<0x4002871C, 32, ReadWriteMode>
  {
    using TTSH = Ethernet_PTP_PTPTTHR_TTSH_Values<Ethernet_PTP::PTPTTHR, 0, 32, ReadWriteMode, Ethernet_PTPPTPTTHRBase> ;
    using FieldValues = Ethernet_PTP_PTPTTHR_TTSH_Values<Ethernet_PTP::PTPTTHR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTTHRPack  = Register<0x4002871C, 32, ReadWriteMode, Ethernet_PTPPTPTTHRBase, T...> ;

  struct Ethernet_PTPPTPTTLRBase {} ;

  struct PTPTTLR : public RegisterBase<0x40028720, 32, ReadWriteMode>
  {
    using TTSL = Ethernet_PTP_PTPTTLR_TTSL_Values<Ethernet_PTP::PTPTTLR, 0, 32, ReadWriteMode, Ethernet_PTPPTPTTLRBase> ;
    using FieldValues = Ethernet_PTP_PTPTTLR_TTSL_Values<Ethernet_PTP::PTPTTLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTTLRPack  = Register<0x40028720, 32, ReadWriteMode, Ethernet_PTPPTPTTLRBase, T...> ;

  struct Ethernet_PTPPTPTSSRBase {} ;

  struct PTPTSSR : public RegisterBase<0x40028728, 32, ReadMode>
  {
    using TSSO = Ethernet_PTP_PTPTSSR_TSSO_Values<Ethernet_PTP::PTPTSSR, 0, 1, ReadMode, Ethernet_PTPPTPTSSRBase> ;
    using TSTTR = Ethernet_PTP_PTPTSSR_TSTTR_Values<Ethernet_PTP::PTPTSSR, 1, 1, ReadMode, Ethernet_PTPPTPTSSRBase> ;
    using FieldValues = Ethernet_PTP_PTPTSSR_TSTTR_Values<Ethernet_PTP::PTPTSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPTSSRPack  = Register<0x40028728, 32, ReadMode, Ethernet_PTPPTPTSSRBase, T...> ;

  struct Ethernet_PTPPTPPPSCRBase {} ;

  struct PTPPPSCR : public RegisterBase<0x4002872C, 32, ReadMode>
  {
    using TSSO = Ethernet_PTP_PTPPPSCR_TSSO_Values<Ethernet_PTP::PTPPPSCR, 0, 1, ReadMode, Ethernet_PTPPTPPPSCRBase> ;
    using TSTTR = Ethernet_PTP_PTPPPSCR_TSTTR_Values<Ethernet_PTP::PTPPPSCR, 1, 1, ReadMode, Ethernet_PTPPTPPPSCRBase> ;
    using FieldValues = Ethernet_PTP_PTPPPSCR_TSTTR_Values<Ethernet_PTP::PTPPPSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PTPPPSCRPack  = Register<0x4002872C, 32, ReadMode, Ethernet_PTPPTPPPSCRBase, T...> ;

} ;

#endif //#if !defined(ETHERNETPTPREGISTERS_HPP)
