/*******************************************************************************
* Filename      : adcfieldvalues.hpp
*
* Details       : Enumerations related with ADC peripheral. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(ADCENUMS_HPP)
#define ADCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ISR_AWD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_ISR_AWD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_ISR_AWD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ISR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_ISR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_ISR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ISR_EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_ISR_EOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_ISR_EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ISR_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_ISR_EOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_ISR_EOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ISR_EOSMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_ISR_EOSMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_ISR_EOSMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ISR_ADRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_ISR_ADRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_ISR_ADRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_IER_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_IER_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_IER_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_IER_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_IER_OVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_IER_OVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_IER_EOSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_IER_EOSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_IER_EOSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_IER_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_IER_EOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_IER_EOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_IER_EOSMPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_IER_EOSMPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_IER_EOSMPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_IER_ADRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_IER_ADRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_IER_ADRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ADCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_ADCAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_ADCAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ADSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_ADSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_ADSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ADSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_ADSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_ADSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ADDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_ADDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_ADDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CR_ADEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CR_ADEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CR_ADEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC_CFGR1_AWDCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_AWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_AWDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_AWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_AWDSGL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_AWDSGL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_AWDSGL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_DISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_DISCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_DISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_AUTOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_AUTOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_AUTOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_AUTDLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_AUTDLY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_AUTDLY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_CONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_CONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_CONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_OVRMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_OVRMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_OVRMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_EXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_EXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_EXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CFGR1_EXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CFGR1_EXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_EXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_CFGR1_EXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_ALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_ALIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_ALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_RES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_RES_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_CFGR1_RES_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_CFGR1_RES_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_SCANDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_SCANDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_SCANDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_DMACFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_DMACFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_DMACFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR1_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR1_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR1_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR2_JITOFF_D4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR2_JITOFF_D4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR2_JITOFF_D4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CFGR2_JITOFF_D2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CFGR2_JITOFF_D2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CFGR2_JITOFF_D2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_SMPR_SMPR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC_SMPR_SMPR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_TR_HT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_TR_LT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CHSELR_CHSEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CHSELR_CHSEL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CHSELR_CHSEL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_DR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CCR_VBATEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CCR_VBATEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CCR_VBATEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CCR_TSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CCR_TSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CCR_TSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_CCR_VREFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC_CCR_VREFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC_CCR_VREFEN_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(ADCENUMS_HPP)
