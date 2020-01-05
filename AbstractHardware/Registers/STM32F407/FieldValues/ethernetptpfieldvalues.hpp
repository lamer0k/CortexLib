/*******************************************************************************
* Filename      : ethernetptpfieldvalues.hpp
*
* Details       : Enumerations related with Ethernet_PTP peripheral. This header
*                 file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETPTPENUMS_HPP)
#define ETHERNETPTPENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSFCU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSFCU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSFCU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSPTPPSV2E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSPTPPSV2E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSPTPPSV2E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSPTPOEFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSPTPOEFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSPTPOEFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSIPV6FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSIPV6FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSIPV6FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSIPV4FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSIPV4FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSIPV4FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSEME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSEME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSEME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSMRME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSMRME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSMRME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_PTP_PTPTSCR_TSCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_PTP_PTPTSCR_TSCNT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSPFFMAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSPFFMAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSPFFMAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSTI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSTI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSTI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSTU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSTU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSTU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TTSARU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TTSARU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TTSARU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSARFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSARFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSARFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSCR_TSSSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSCR_TSSSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSCR_TSSSR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPSSIR_STSSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSHR_STS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSLR_STSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSLR_STPNS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSLR_STPNS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSLR_STPNS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSHUR_TSUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSLUR_TSUSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSLUR_TSUPNS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSLUR_TSUPNS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSLUR_TSUPNS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSAR_TSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTTHR_TTSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTTLR_TTSL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSSR_TSSO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSSR_TSSO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSSR_TSSO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPTSSR_TSTTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPTSSR_TSTTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPTSSR_TSTTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPPPSCR_TSSO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPPPSCR_TSSO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPPPSCR_TSSO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_PTP_PTPPPSCR_TSTTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_PTP_PTPPPSCR_TSTTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_PTP_PTPPPSCR_TSTTR_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(ETHERNETPTPENUMS_HPP)
