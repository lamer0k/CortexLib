/*******************************************************************************
* Filename      : csbitsfield.hpp
*
* Details       : Enumerations related with CS peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(CSENUMS_HPP)
#define CSENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSKEY_CSKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DCOTUNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DCORSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DCORES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCORES_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCORES_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DCOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCOEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_SELM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_SELS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_SELA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_SELB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SELB_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SELB_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DIVM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DIVHS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DIVA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_DIVS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_LFXTDRIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTDRIVE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXTDRIVE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using LFXTDRIVE_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using LFXTDRIVE_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_LFXTAGCOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTAGCOFF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXTAGCOFF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_LFXT_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXT_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXT_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_LFXTBYPASS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTBYPASS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXTBYPASS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_HFXTDRIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTDRIVE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HFXTDRIVE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_HFXTFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_HFXT_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXT_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HFXT_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_HFXTBYPASS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTBYPASS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HFXTBYPASS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_FCNTLF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTLF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using FCNTLF_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using FCNTLF_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_RFCNTLF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RFCNTLF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RFCNTLF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_FCNTLF_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLF_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTLF_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_FCNTHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTHF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using FCNTHF_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using FCNTHF_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_RFCNTHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RFCNTHF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using RFCNTHF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL_FCNTHF_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTHF_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_ACLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ACLK_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ACLK_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_MCLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MCLK_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MCLK_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_HSMCLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSMCLK_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HSMCLK_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_SMCLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SMCLK_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SMCLK_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_VLO_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VLO_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using VLO_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_REFO_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFO_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFO_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_MODOSC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODOSC_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MODOSC_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_REFOFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFOFSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFOFSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_DCO_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCO_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCO_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_DCOBIAS_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOBIAS_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCOBIAS_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_HFXT_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXT_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HFXT_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MODOSC_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODOSC_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MODOSC_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_VLO_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VLO_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using VLO_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_LFXT_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXT_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXT_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_REFO_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFO_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFO_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_ACLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ACLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ACLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MCLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MCLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_HSMCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSMCLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HSMCLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_SMCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SMCLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SMCLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MODCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODCLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MODCLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_VLOCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VLOCLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using VLOCLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_LFXTCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTCLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXTCLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_REFOCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFOCLK_ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using REFOCLK_ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_ACLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ACLK_READY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ACLK_READY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MCLK_READY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using MCLK_READY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_HSMCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSMCLK_READY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HSMCLK_READY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_SMCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SMCLK_READY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SMCLK_READY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_BCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BCLK_READY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using BCLK_READY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_LFXTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXTIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_HFXTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HFXTIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_DCOR_OPNIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOR_OPNIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCOR_OPNIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_FCNTLFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLFIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTLFIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_FCNTHFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHFIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTHFIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_PLLOOLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOOLIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PLLOOLIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_PLLLOSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLLOSIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PLLLOSIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_PLLOORIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOORIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PLLOORIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_CALIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CALIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CALIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_LFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using LFXTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_HFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HFXTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_DCOR_SHTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOR_SHTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCOR_SHTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_DCOR_OPNIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOR_OPNIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCOR_OPNIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_FCNTLFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLFIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTLFIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_FCNTHFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHFIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using FCNTHFIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_PLLOOLIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOOLIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PLLOOLIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_PLLLOSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLLOSIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PLLLOSIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_PLLOORIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOORIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PLLOORIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_CALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CALIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CALIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_LFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_LFXTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_LFXTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_HFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_HFXTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_HFXTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_DCOR_OPNIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_DCOR_OPNIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_DCOR_OPNIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_CALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_CALIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_CALIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_FCNTLFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_FCNTLFIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_FCNTLFIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_FCNTHFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_FCNTHFIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_FCNTHFIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_PLLOOLIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_PLLOOLIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_PLLOOLIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_PLLLOSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_PLLLOSIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_PLLLOSIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_PLLOORIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_PLLOORIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLR_PLLOORIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_LFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_LFXTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_LFXTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_HFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_HFXTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_HFXTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_DCOR_OPNIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_DCOR_OPNIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_DCOR_OPNIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_CALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_CALIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_CALIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_FCNTHFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_FCNTHFIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_FCNTHFIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_FCNTLFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_FCNTLFIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_FCNTLFIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_PLLOOLIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_PLLOOLIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_PLLOOLIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_PLLLOSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_PLLLOSIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_PLLLOSIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_PLLOORIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_PLLOORIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SET_PLLOORIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSDCOERCAL_DCO_TCCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using Value2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using Value3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSDCOERCAL_DCO_FCAL_RSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(CSENUMS_HPP)
